/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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

#line 489 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 489 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 489 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 489 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 489 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6);

#line 371 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 371 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 371 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 371 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 371 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 371 "version_hash_table.m"
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

#line 582 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 582 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 582 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 582 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 582 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 582 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 582 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 582 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 569 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 569 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 569 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 569 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 569 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 569 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 569 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 569 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 569 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 555 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 555 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 555 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 555 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 555 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 555 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 555 "version_hash_table.m"
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
#line 700 "version_hash_table.m"
            {
#line 700 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__V_19_19, mercury__version_hash_table__V_13_15, &mercury__version_hash_table__HX_36);
            }
#line 727 "version_hash_table.m"
            mercury__version_hash_table__V_70_70 = (mercury__version_hash_table__X_9_9 << mercury__version_hash_table__HX_36);
#line 163 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2341 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_73_73  = Bits;
#line 163 "int.opt"
}
#line 728 "version_hash_table.m"
            mercury__version_hash_table__V_72_72 = (mercury__version_hash_table__V_73_73 - mercury__version_hash_table__HX_36);
#line 727 "version_hash_table.m"
            mercury__version_hash_table__V_71_71 = (mercury__version_hash_table__X_9_9 >> mercury__version_hash_table__V_72_72);
#line 726 "version_hash_table.m"
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

#line 489 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 489 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 489 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 489 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 489 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 489 "version_hash_table.m"
{
#line 497 "version_hash_table.m"
  {
#line 497 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 497 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
#line 502 "version_hash_table.m"
      {
#line 502 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 502 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 1));
#line 502 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 2)));

#line 503 "version_hash_table.m"
        {
#line 503 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K0_8, mercury__version_hash_table__K_5);
        }
#line 505 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 504 "version_hash_table.m"
          {
#line 504 "version_hash_table.m"
            *mercury__version_hash_table__AL_6 = mercury__version_hash_table__T0_10;
#line 504 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 504 "version_hash_table.m"
          }
#line 505 "version_hash_table.m"
        else
#line 506 "version_hash_table.m"
          {
#line 506 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_11;

#line 506 "version_hash_table.m"
            {
#line 506 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__T0_10, mercury__version_hash_table__K_5, &mercury__version_hash_table__T_11);
            }
#line 506 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 506 "version_hash_table.m"
              {
#line 507 "version_hash_table.m"
                {
#line 507 "version_hash_table.m"
                  MR_Word base;
#line 507 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "version_hash_table.m"
                  *mercury__version_hash_table__AL_6 = base;
#line 507 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_8;
#line 507 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_9;
#line 507 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_11));
#line 507 "version_hash_table.m"
                }
#line 507 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 506 "version_hash_table.m"
              }
#line 506 "version_hash_table.m"
          }
#line 502 "version_hash_table.m"
      }
#line 497 "version_hash_table.m"
    else
#line 497 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
#line 498 "version_hash_table.m"
        {
#line 498 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 498 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 1));

#line 498 "version_hash_table.m"
          {
#line 498 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K_5, mercury__version_hash_table__V_14_14);
          }
#line 498 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 498 "version_hash_table.m"
            {
#line 500 "version_hash_table.m"
              *mercury__version_hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 498 "version_hash_table.m"
            }
#line 498 "version_hash_table.m"
        }
#line 497 "version_hash_table.m"
      else
#line 497 "version_hash_table.m"
        mercury__version_hash_table__succeeded = MR_FALSE;
#line 497 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 497 "version_hash_table.m"
  }
#line 489 "version_hash_table.m"
}

#line 371 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 371 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 371 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 371 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 371 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 371 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8)
#line 371 "version_hash_table.m"
{
#line 379 "version_hash_table.m"
  {
#line 379 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 379 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
#line 383 "version_hash_table.m"
      {
#line 383 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 383 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 1));
#line 383 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 2)));

#line 384 "version_hash_table.m"
        {
#line 384 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K0_10, mercury__version_hash_table__K_6);
        }
#line 386 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 385 "version_hash_table.m"
          {
#line 385 "version_hash_table.m"
            {
#line 385 "version_hash_table.m"
              MR_Word base;
#line 385 "version_hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 385 "version_hash_table.m"
              *mercury__version_hash_table__AL_8 = base;
#line 385 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 385 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V_7;
#line 385 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T0_12));
#line 385 "version_hash_table.m"
            }
#line 385 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 385 "version_hash_table.m"
          }
#line 386 "version_hash_table.m"
        else
#line 387 "version_hash_table.m"
          {
#line 387 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_13;

#line 387 "version_hash_table.m"
            {
#line 387 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__T0_12, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__T_13);
            }
#line 387 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 387 "version_hash_table.m"
              {
#line 388 "version_hash_table.m"
                {
#line 388 "version_hash_table.m"
                  MR_Word base;
#line 388 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "version_hash_table.m"
                  *mercury__version_hash_table__AL_8 = base;
#line 388 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 388 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_11;
#line 388 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_13));
#line 388 "version_hash_table.m"
                }
#line 388 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 387 "version_hash_table.m"
              }
#line 387 "version_hash_table.m"
          }
#line 383 "version_hash_table.m"
      }
#line 379 "version_hash_table.m"
    else
#line 379 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
#line 380 "version_hash_table.m"
        {
#line 380 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 380 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 1));

#line 380 "version_hash_table.m"
          {
#line 380 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_16_16);
          }
#line 380 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 380 "version_hash_table.m"
            {
#line 381 "version_hash_table.m"
              {
#line 381 "version_hash_table.m"
                MR_Word base;
#line 381 "version_hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "version_hash_table.m"
                *mercury__version_hash_table__AL_8 = base;
#line 381 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__version_hash_table__K_6;
#line 381 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__version_hash_table__V_7;
#line 381 "version_hash_table.m"
              }
#line 381 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 380 "version_hash_table.m"
            }
#line 380 "version_hash_table.m"
        }
#line 379 "version_hash_table.m"
      else
#line 379 "version_hash_table.m"
        mercury__version_hash_table__succeeded = MR_FALSE;
#line 379 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 379 "version_hash_table.m"
  }
#line 371 "version_hash_table.m"
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

#line 714 "version_hash_table.m"
            {
#line 714 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__version_hash_table__H_10_9)), &mercury__version_hash_table__HUA_36);
            }
#line 727 "version_hash_table.m"
            mercury__version_hash_table__V_64_64 = (mercury__version_hash_table__HeadVar__3_3 << mercury__version_hash_table__HUA_36);
#line 163 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__foldl__ho16_4_p_in__list_0

	MR_Integer Bits;

		{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2823 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_67_67  = Bits;
#line 163 "int.opt"
}
#line 728 "version_hash_table.m"
            mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_67_67 - mercury__version_hash_table__HUA_36);
#line 727 "version_hash_table.m"
            mercury__version_hash_table__V_65_65 = (mercury__version_hash_table__HeadVar__3_3 >> mercury__version_hash_table__V_66_66);
#line 726 "version_hash_table.m"
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

#line 214 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0(
#line 214 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 214 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 214 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 214 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 214 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 214 "version_hash_table.m"
{
#line 214 "version_hash_table.m"
  {
#line 214 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 214 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastX_15 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;
#line 214 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastY_16 = (MR_Integer) mercury__version_hash_table__HeadVar__3_3;

#line 214 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_15 == mercury__version_hash_table__CastY_16);
#line 214 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 2892 "version_hash_table.c"
      *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 214 "version_hash_table.m"
    else
#line 214 "version_hash_table.m"
      {
#line 214 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 214 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 214 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 214 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 3)));
#line 214 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0)));
#line 214 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1)));
#line 214 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 214 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 3)));
#line 214 "version_hash_table.m"
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
#line 214 "version_hash_table.m"
        mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 214 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 214 "version_hash_table.m"
          *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_12_12;
#line 214 "version_hash_table.m"
        else
#line 214 "version_hash_table.m"
          {
#line 214 "version_hash_table.m"
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
#line 214 "version_hash_table.m"
            mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 214 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 214 "version_hash_table.m"
              *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_13_13;
#line 214 "version_hash_table.m"
            else
#line 214 "version_hash_table.m"
              {
#line 214 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_14_14;

#line 214 "version_hash_table.m"
                {
#line 214 "version_hash_table.m"
                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__version_hash_table__V_14_14, (MR_Word) mercury__version_hash_table__V_6_6, (MR_Word) mercury__version_hash_table__V_10_10);
                }
#line 2996 "version_hash_table.c"
                mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_14_14 == (MR_Integer) 0);
#line 214 "version_hash_table.m"
                mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 214 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 214 "version_hash_table.m"
                  *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_14_14;
#line 214 "version_hash_table.m"
                else
#line 214 "version_hash_table.m"
                  {
#line 214 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_25_25 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 214 "version_hash_table.m"
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
#line 214 "version_hash_table.m"
                    {
#line 214 "version_hash_table.m"
                      mercury__version_array____Compare____version_array_1_0(mercury__version_hash_table__TypeInfo_26_26, mercury__version_hash_table__HeadVar__1_1, (MR_Box) mercury__version_hash_table__V_7_7, (MR_Box) mercury__version_hash_table__V_11_11);
#line 214 "version_hash_table.m"
                      return;
                    }
#line 214 "version_hash_table.m"
                  }
#line 214 "version_hash_table.m"
              }
#line 214 "version_hash_table.m"
          }
#line 214 "version_hash_table.m"
      }
#line 214 "version_hash_table.m"
  }
#line 214 "version_hash_table.m"
}

#line 214 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0(
#line 214 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 214 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 214 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 214 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 214 "version_hash_table.m"
{
#line 214 "version_hash_table.m"
  {
#line 214 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 214 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastX_11 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 214 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastY_12 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 214 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_11 == mercury__version_hash_table__CastY_12);
#line 214 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 214 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_TRUE;
#line 214 "version_hash_table.m"
    else
#line 214 "version_hash_table.m"
      {
#line 214 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_15_15;
#line 214 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeInfo_16_16;
#line 214 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 214 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 214 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 3)));
#line 214 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 214 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 214 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 214 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 3)));

#line 3098 "version_hash_table.c"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_3_3 == mercury__version_hash_table__V_7_7);
#line 214 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 214 "version_hash_table.m"
          {
#line 3104 "version_hash_table.c"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_4_4 == mercury__version_hash_table__V_8_8);
#line 214 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 214 "version_hash_table.m"
              {
#line 3110 "version_hash_table.c"
                {
#line 3112 "version_hash_table.c"
                  mercury__version_hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__version_hash_table__V_5_5, (MR_Word) mercury__version_hash_table__V_9_9);
                }
#line 214 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 214 "version_hash_table.m"
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
#line 214 "version_hash_table.m"
                  }
#line 214 "version_hash_table.m"
              }
#line 214 "version_hash_table.m"
          }
#line 214 "version_hash_table.m"
      }
#line 214 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 214 "version_hash_table.m"
  }
#line 214 "version_hash_table.m"
}

#line 228 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0(
#line 228 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_39,
#line 228 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_40,
#line 228 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 228 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 228 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 228 "version_hash_table.m"
{
#line 228 "version_hash_table.m"
  while (MR_TRUE)
#line 228 "version_hash_table.m"
    {
#line 228 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 228 "version_hash_table.m"
      {
#line 228 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 228 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_37 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;
#line 228 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_38 = (MR_Integer) mercury__version_hash_table__HeadVar__3_3;

#line 228 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_37 == mercury__version_hash_table__CastY_38);
#line 228 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 3187 "version_hash_table.c"
          *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "version_hash_table.m"
        else
#line 228 "version_hash_table.m"
          if ((mercury__version_hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "version_hash_table.m"
            if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "version_hash_table.m"
              *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "version_hash_table.m"
            else
#line 228 "version_hash_table.m"
              if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3201 "version_hash_table.c"
                *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "version_hash_table.m"
              else
#line 3205 "version_hash_table.c"
                *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "version_hash_table.m"
          else
#line 228 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 228 "version_hash_table.m"
              {
#line 228 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 228 "version_hash_table.m"
                if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3222 "version_hash_table.c"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "version_hash_table.m"
                else
#line 228 "version_hash_table.m"
                  if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 228 "version_hash_table.m"
                    {
#line 228 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 228 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 228 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 228 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_35_35;

#line 228 "version_hash_table.m"
                      {
#line 228 "version_hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_35_35, mercury__version_hash_table__V_45_45, mercury__version_hash_table__V_32_32);
                      }
#line 3244 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_35_35 == (MR_Integer) 0);
#line 228 "version_hash_table.m"
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 228 "version_hash_table.m"
                      if (mercury__version_hash_table__succeeded)
#line 228 "version_hash_table.m"
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_35_35;
#line 228 "version_hash_table.m"
                      else
#line 228 "version_hash_table.m"
                        {
#line 228 "version_hash_table.m"
                          MR_Word mercury__version_hash_table__V_36_36;

#line 228 "version_hash_table.m"
                          {
#line 228 "version_hash_table.m"
                            mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, &mercury__version_hash_table__V_36_36, mercury__version_hash_table__V_44_44, mercury__version_hash_table__V_33_33);
                          }
#line 3264 "version_hash_table.c"
                          mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_36_36 == (MR_Integer) 0);
#line 228 "version_hash_table.m"
                          mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 228 "version_hash_table.m"
                          if (mercury__version_hash_table__succeeded)
#line 228 "version_hash_table.m"
                            *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_36_36;
#line 228 "version_hash_table.m"
                          else
#line 228 "version_hash_table.m"
                            {
#line 228 "version_hash_table.m"
                              /* direct tailcall eliminated */
#line 228 "version_hash_table.m"
                              {
#line 228 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_43_43;
#line 228 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__V_34_34;

#line 228 "version_hash_table.m"
                                mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
#line 228 "version_hash_table.m"
                                mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 228 "version_hash_table.m"
                              }
#line 228 "version_hash_table.m"
                              continue;
#line 228 "version_hash_table.m"
                            }
#line 228 "version_hash_table.m"
                        }
#line 228 "version_hash_table.m"
                    }
#line 228 "version_hash_table.m"
                  else
#line 3301 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "version_hash_table.m"
              }
#line 228 "version_hash_table.m"
            else
#line 228 "version_hash_table.m"
              {
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 228 "version_hash_table.m"
                if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3316 "version_hash_table.c"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "version_hash_table.m"
                else
#line 228 "version_hash_table.m"
                  if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3322 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "version_hash_table.m"
                  else
#line 228 "version_hash_table.m"
                    {
#line 228 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 228 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 228 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_15_15;

#line 228 "version_hash_table.m"
                      {
#line 228 "version_hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_15_15, mercury__version_hash_table__V_47_47, mercury__version_hash_table__V_13_13);
                      }
#line 3340 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_15_15 == (MR_Integer) 0);
#line 228 "version_hash_table.m"
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 228 "version_hash_table.m"
                      if (mercury__version_hash_table__succeeded)
#line 228 "version_hash_table.m"
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_15_15;
#line 228 "version_hash_table.m"
                      else
#line 228 "version_hash_table.m"
                        {
#line 228 "version_hash_table.m"
                          mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__V_46_46, mercury__version_hash_table__V_14_14);
#line 228 "version_hash_table.m"
                          return;
                        }
#line 228 "version_hash_table.m"
                    }
#line 228 "version_hash_table.m"
              }
#line 228 "version_hash_table.m"
      }
#line 228 "version_hash_table.m"
      break;
#line 228 "version_hash_table.m"
    }
#line 228 "version_hash_table.m"
}

#line 228 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0(
#line 228 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 228 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 228 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 228 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 228 "version_hash_table.m"
{
#line 228 "version_hash_table.m"
  while (MR_TRUE)
#line 228 "version_hash_table.m"
    {
#line 228 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 228 "version_hash_table.m"
      {
#line 228 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 228 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_15 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 228 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_16 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 228 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_15 == mercury__version_hash_table__CastY_16);
#line 228 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 228 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 228 "version_hash_table.m"
        else
#line 228 "version_hash_table.m"
          if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "version_hash_table.m"
            {
#line 228 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 228 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 228 "version_hash_table.m"
              mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastY_4 == mercury__version_hash_table__CastX_3);
#line 228 "version_hash_table.m"
            }
#line 228 "version_hash_table.m"
          else
#line 228 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 228 "version_hash_table.m"
              {
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 228 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_12_12;
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_13_13;
#line 228 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_14_14;

#line 228 "version_hash_table.m"
                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 228 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 228 "version_hash_table.m"
                  {
#line 228 "version_hash_table.m"
                    mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 228 "version_hash_table.m"
                    mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 228 "version_hash_table.m"
                    mercury__version_hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 3450 "version_hash_table.c"
                    {
#line 3452 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_9_9, mercury__version_hash_table__V_12_12);
                    }
#line 228 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 228 "version_hash_table.m"
                      {
#line 3459 "version_hash_table.c"
                        {
#line 3461 "version_hash_table.c"
                          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_10_10, mercury__version_hash_table__V_13_13);
                        }
#line 228 "version_hash_table.m"
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
#line 228 "version_hash_table.m"
                      }
#line 228 "version_hash_table.m"
                  }
#line 228 "version_hash_table.m"
              }
#line 228 "version_hash_table.m"
            else
#line 228 "version_hash_table.m"
              {
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_7_7;
#line 228 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_8_8;

#line 228 "version_hash_table.m"
                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 228 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 228 "version_hash_table.m"
                  {
#line 228 "version_hash_table.m"
                    mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 228 "version_hash_table.m"
                    mercury__version_hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 3516 "version_hash_table.c"
                    {
#line 3518 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_5_5, mercury__version_hash_table__V_7_7);
                    }
#line 228 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 3523 "version_hash_table.c"
                      {
#line 3525 "version_hash_table.c"
                        return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_6_6, mercury__version_hash_table__V_8_8);
                      }
#line 228 "version_hash_table.m"
                  }
#line 228 "version_hash_table.m"
              }
#line 228 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 228 "version_hash_table.m"
      }
#line 228 "version_hash_table.m"
      break;
#line 228 "version_hash_table.m"
    }
#line 228 "version_hash_table.m"
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

#line 222 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0(
#line 222 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 222 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 222 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 222 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2,
#line 222 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__3_3)
#line 222 "version_hash_table.m"
{
#line 222 "version_hash_table.m"
  {
#line 222 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 222 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 222 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_9_9;
#line 222 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_4 = mercury__version_hash_table__HeadVar__2_2;
#line 222 "version_hash_table.m"
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
#line 222 "version_hash_table.m"
    {
#line 222 "version_hash_table.m"
      mercury__version_array____Compare____version_array_1_0(mercury__version_hash_table__TypeInfo_9_9, mercury__version_hash_table__HeadVar__1_1, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_4, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_5);
#line 222 "version_hash_table.m"
      return;
    }
#line 222 "version_hash_table.m"
  }
#line 222 "version_hash_table.m"
}

#line 222 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0(
#line 222 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 222 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
#line 222 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 222 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2)
#line 222 "version_hash_table.m"
{
#line 222 "version_hash_table.m"
  {
#line 222 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 222 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 222 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_8_8;
#line 222 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_3 = mercury__version_hash_table__HeadVar__1_1;
#line 222 "version_hash_table.m"
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
#line 222 "version_hash_table.m"
    {
#line 222 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_array____Unify____version_array_1_0(mercury__version_hash_table__TypeInfo_8_8, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_3, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_4);
    }
#line 222 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 222 "version_hash_table.m"
  }
#line 222 "version_hash_table.m"
}

#line 761 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_5(
#line 761 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 761 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 761 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 761 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 761 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 761 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 761 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 761 "version_hash_table.m"
{
#line 766 "version_hash_table.m"
  while (MR_TRUE)
#line 766 "version_hash_table.m"
    {
#line 766 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 766 "version_hash_table.m"
      {
#line 766 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 766 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "version_hash_table.m"
          {
#line 765 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 765 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 765 "version_hash_table.m"
          }
#line 766 "version_hash_table.m"
        else
#line 766 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 770 "version_hash_table.m"
            {
#line 770 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 771 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 771 "version_hash_table.m"
              {
#line 771 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 770 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 772 "version_hash_table.m"
                {
#line 772 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 772 "version_hash_table.m"
                  {
#line 772 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 772 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 772 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 772 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 772 "version_hash_table.m"
                  }
#line 772 "version_hash_table.m"
                  continue;
#line 772 "version_hash_table.m"
                }
#line 770 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
          else
#line 767 "version_hash_table.m"
            {
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 768 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 768 "version_hash_table.m"
              {
#line 768 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 767 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 766 "version_hash_table.m"
      }
#line 766 "version_hash_table.m"
      break;
#line 766 "version_hash_table.m"
    }
#line 761 "version_hash_table.m"
}

#line 760 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_4(
#line 760 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 760 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 760 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 760 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 760 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 760 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 760 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 760 "version_hash_table.m"
{
#line 766 "version_hash_table.m"
  while (MR_TRUE)
#line 766 "version_hash_table.m"
    {
#line 766 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 766 "version_hash_table.m"
      {
#line 766 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 766 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "version_hash_table.m"
          {
#line 765 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 765 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 765 "version_hash_table.m"
          }
#line 766 "version_hash_table.m"
        else
#line 766 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 770 "version_hash_table.m"
            {
#line 770 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 771 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 771 "version_hash_table.m"
              {
#line 771 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 770 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 772 "version_hash_table.m"
                {
#line 772 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 772 "version_hash_table.m"
                  {
#line 772 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 772 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 772 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 772 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 772 "version_hash_table.m"
                  }
#line 772 "version_hash_table.m"
                  continue;
#line 772 "version_hash_table.m"
                }
#line 770 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
          else
#line 767 "version_hash_table.m"
            {
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 768 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 768 "version_hash_table.m"
              {
#line 768 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 767 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 766 "version_hash_table.m"
      }
#line 766 "version_hash_table.m"
      break;
#line 766 "version_hash_table.m"
    }
#line 760 "version_hash_table.m"
}

#line 759 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_3(
#line 759 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 759 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 759 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 759 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 759 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 759 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 759 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 759 "version_hash_table.m"
{
#line 766 "version_hash_table.m"
  while (MR_TRUE)
#line 766 "version_hash_table.m"
    {
#line 766 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 766 "version_hash_table.m"
      {
#line 766 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 766 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "version_hash_table.m"
          {
#line 765 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 765 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 765 "version_hash_table.m"
          }
#line 766 "version_hash_table.m"
        else
#line 766 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 770 "version_hash_table.m"
            {
#line 770 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 771 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 771 "version_hash_table.m"
              {
#line 771 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 770 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 772 "version_hash_table.m"
                {
#line 772 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 772 "version_hash_table.m"
                  {
#line 772 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 772 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 772 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 772 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 772 "version_hash_table.m"
                  }
#line 772 "version_hash_table.m"
                  continue;
#line 772 "version_hash_table.m"
                }
#line 770 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
          else
#line 767 "version_hash_table.m"
            {
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 768 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 768 "version_hash_table.m"
              {
#line 768 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 767 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 766 "version_hash_table.m"
      }
#line 766 "version_hash_table.m"
      break;
#line 766 "version_hash_table.m"
    }
#line 759 "version_hash_table.m"
}

#line 758 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_2(
#line 758 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 758 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 758 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 758 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 758 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 758 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 758 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 758 "version_hash_table.m"
{
#line 766 "version_hash_table.m"
  while (MR_TRUE)
#line 766 "version_hash_table.m"
    {
#line 766 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 766 "version_hash_table.m"
      {
#line 766 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 766 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 766 "version_hash_table.m"
        else
#line 766 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 770 "version_hash_table.m"
            {
#line 770 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 771 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 771 "version_hash_table.m"
              {
#line 771 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 772 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 772 "version_hash_table.m"
              {
#line 772 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 772 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 772 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 772 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 772 "version_hash_table.m"
              }
#line 772 "version_hash_table.m"
              continue;
#line 770 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
          else
#line 767 "version_hash_table.m"
            {
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 768 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 768 "version_hash_table.m"
              {
#line 768 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 768 "version_hash_table.m"
                return;
              }
#line 767 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
      }
#line 766 "version_hash_table.m"
      break;
#line 766 "version_hash_table.m"
    }
#line 758 "version_hash_table.m"
}

#line 757 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_1(
#line 757 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 757 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 757 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 757 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 757 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 757 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 757 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 757 "version_hash_table.m"
{
#line 766 "version_hash_table.m"
  while (MR_TRUE)
#line 766 "version_hash_table.m"
    {
#line 766 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 766 "version_hash_table.m"
      {
#line 766 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 766 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 766 "version_hash_table.m"
        else
#line 766 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 770 "version_hash_table.m"
            {
#line 770 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 771 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 771 "version_hash_table.m"
              {
#line 771 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 772 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 772 "version_hash_table.m"
              {
#line 772 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 772 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 772 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 772 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 772 "version_hash_table.m"
              }
#line 772 "version_hash_table.m"
              continue;
#line 770 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
          else
#line 767 "version_hash_table.m"
            {
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 768 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 768 "version_hash_table.m"
              {
#line 768 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 768 "version_hash_table.m"
                return;
              }
#line 767 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
      }
#line 766 "version_hash_table.m"
      break;
#line 766 "version_hash_table.m"
    }
#line 757 "version_hash_table.m"
}

#line 756 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_0(
#line 756 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 756 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 756 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 756 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 756 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 756 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 756 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 756 "version_hash_table.m"
{
#line 766 "version_hash_table.m"
  while (MR_TRUE)
#line 766 "version_hash_table.m"
    {
#line 766 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 766 "version_hash_table.m"
      {
#line 766 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 766 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 766 "version_hash_table.m"
        else
#line 766 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 770 "version_hash_table.m"
            {
#line 770 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 770 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 771 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 771 "version_hash_table.m"
              {
#line 771 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 772 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 772 "version_hash_table.m"
              {
#line 772 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 772 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 772 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 772 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 772 "version_hash_table.m"
              }
#line 772 "version_hash_table.m"
              continue;
#line 770 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
          else
#line 767 "version_hash_table.m"
            {
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 767 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 768 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 768 "version_hash_table.m"
              {
#line 768 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 768 "version_hash_table.m"
                return;
              }
#line 767 "version_hash_table.m"
            }
#line 766 "version_hash_table.m"
      }
#line 766 "version_hash_table.m"
      break;
#line 766 "version_hash_table.m"
    }
#line 756 "version_hash_table.m"
}

#line 737 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_1(
#line 737 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 737 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 737 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 737 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 737 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 737 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 737 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 737 "version_hash_table.m"
{
#line 743 "version_hash_table.m"
  while (MR_TRUE)
#line 743 "version_hash_table.m"
    {
#line 743 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 743 "version_hash_table.m"
      {
#line 743 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 743 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "version_hash_table.m"
          *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 743 "version_hash_table.m"
        else
#line 743 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 747 "version_hash_table.m"
            {
#line 747 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 747 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A1_12;
#line 747 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 747 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 748 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 748 "version_hash_table.m"
              {
#line 748 "version_hash_table.m"
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
#line 749 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 749 "version_hash_table.m"
              {
#line 749 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 749 "version_hash_table.m"
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 749 "version_hash_table.m"
                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 749 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 749 "version_hash_table.m"
              }
#line 749 "version_hash_table.m"
              continue;
#line 747 "version_hash_table.m"
            }
#line 743 "version_hash_table.m"
          else
#line 744 "version_hash_table.m"
            {
#line 744 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 744 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 745 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 745 "version_hash_table.m"
              {
#line 745 "version_hash_table.m"
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
#line 744 "version_hash_table.m"
            }
#line 743 "version_hash_table.m"
      }
#line 743 "version_hash_table.m"
      break;
#line 743 "version_hash_table.m"
    }
#line 737 "version_hash_table.m"
}

#line 736 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_0(
#line 736 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 736 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 736 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 736 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 736 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 736 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 736 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 736 "version_hash_table.m"
{
#line 743 "version_hash_table.m"
  while (MR_TRUE)
#line 743 "version_hash_table.m"
    {
#line 743 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 743 "version_hash_table.m"
      {
#line 743 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 743 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "version_hash_table.m"
          *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 743 "version_hash_table.m"
        else
#line 743 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 747 "version_hash_table.m"
            {
#line 747 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 747 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A1_12;
#line 747 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 747 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 748 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 748 "version_hash_table.m"
              {
#line 748 "version_hash_table.m"
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
#line 749 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 749 "version_hash_table.m"
              {
#line 749 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 749 "version_hash_table.m"
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 749 "version_hash_table.m"
                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 749 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 749 "version_hash_table.m"
              }
#line 749 "version_hash_table.m"
              continue;
#line 747 "version_hash_table.m"
            }
#line 743 "version_hash_table.m"
          else
#line 744 "version_hash_table.m"
            {
#line 744 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 744 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 745 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 745 "version_hash_table.m"
              {
#line 745 "version_hash_table.m"
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
#line 744 "version_hash_table.m"
            }
#line 743 "version_hash_table.m"
      }
#line 743 "version_hash_table.m"
      break;
#line 743 "version_hash_table.m"
    }
#line 736 "version_hash_table.m"
}

#line 582 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 582 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 582 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 582 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 582 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 582 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 582 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 582 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 582 "version_hash_table.m"
{
#line 588 "version_hash_table.m"
  while (MR_TRUE)
#line 588 "version_hash_table.m"
    {
#line 588 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 588 "version_hash_table.m"
      {
#line 588 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 588 "version_hash_table.m"
        if ((mercury__version_hash_table__AL_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 588 "version_hash_table.m"
        else
#line 588 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__AL_6)) == (MR_mktag((MR_Integer) 2))))
#line 592 "version_hash_table.m"
            {
#line 592 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_36;
#line 592 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeInfo_24_37;
#line 592 "version_hash_table.m"
              MR_Word mercury__version_hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 2)));
#line 592 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;
#line 592 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 592 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 592 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__H_28;
#line 592 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0_29;
#line 592 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL_30;
#line 592 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__Hash_42;
#line 592 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__V_43_43;
#line 296 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
              MR_Box mercury__version_hash_table__conv1_Hash_42;
#line 154 "version_array.opt"
              MR_Box mercury__version_hash_table__conv2_AL0_29;
#line 157 "version_array.opt"
              MR_Box mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;

#line 296 "version_hash_table.m"
              {
#line 296 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_18, &mercury__version_hash_table__conv1_Hash_42);
              }
#line 296 "version_hash_table.m"
              mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
#line 298 "version_hash_table.m"
              mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
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
#line 606 "version_hash_table.m"
              if ((mercury__version_hash_table__AL0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "version_hash_table.m"
                {
#line 605 "version_hash_table.m"
                  mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "version_hash_table.m"
                  MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 605 "version_hash_table.m"
                  MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 605 "version_hash_table.m"
                }
#line 606 "version_hash_table.m"
              else
#line 606 "version_hash_table.m"
                if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_29)) == (MR_mktag((MR_Integer) 2))))
#line 610 "version_hash_table.m"
                  {
#line 610 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 610 "version_hash_table.m"
                  }
#line 606 "version_hash_table.m"
                else
#line 610 "version_hash_table.m"
                  {
#line 610 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 610 "version_hash_table.m"
                  }
#line 157 "version_array.opt"
              {
#line 157 "version_array.opt"
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_37, mercury__version_hash_table__H_28, ((MR_Box) (mercury__version_hash_table__AL_30)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15);
              }
#line 157 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_Box) mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;
#line 594 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 594 "version_hash_table.m"
              {
#line 594 "version_hash_table.m"
                MR_Word mercury__version_hash_table__AL__tmp_copy_6 = mercury__version_hash_table__T_12;
#line 594 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;

#line 594 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 594 "version_hash_table.m"
                mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL__tmp_copy_6;
#line 594 "version_hash_table.m"
              }
#line 594 "version_hash_table.m"
              continue;
#line 592 "version_hash_table.m"
            }
#line 588 "version_hash_table.m"
          else
#line 589 "version_hash_table.m"
            {
#line 589 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_66;
#line 589 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeInfo_24_67;
#line 589 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 589 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 589 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__H_58;
#line 589 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0_59;
#line 589 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL_60;
#line 589 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__Hash_72;
#line 589 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__V_73_73;
#line 296 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
              MR_Box mercury__version_hash_table__conv5_Hash_72;
#line 154 "version_array.opt"
              MR_Box mercury__version_hash_table__conv6_AL0_59;
#line 157 "version_array.opt"
              MR_Box mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;

#line 296 "version_hash_table.m"
              {
#line 296 "version_hash_table.m"
                mercury__version_hash_table__func_4(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_10, &mercury__version_hash_table__conv5_Hash_72);
              }
#line 296 "version_hash_table.m"
              mercury__version_hash_table__Hash_72 = ((MR_Integer) mercury__version_hash_table__conv5_Hash_72);
#line 298 "version_hash_table.m"
              mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
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
#line 606 "version_hash_table.m"
              if ((mercury__version_hash_table__AL0_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "version_hash_table.m"
                mercury__version_hash_table__AL_60 = mercury__version_hash_table__AL_6;
#line 606 "version_hash_table.m"
              else
#line 606 "version_hash_table.m"
                if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_59)) == (MR_mktag((MR_Integer) 2))))
#line 610 "version_hash_table.m"
                  {
#line 610 "version_hash_table.m"
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 610 "version_hash_table.m"
                  }
#line 606 "version_hash_table.m"
                else
#line 610 "version_hash_table.m"
                  {
#line 610 "version_hash_table.m"
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 610 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 610 "version_hash_table.m"
                  }
#line 157 "version_array.opt"
              {
#line 157 "version_array.opt"
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_67, mercury__version_hash_table__H_58, ((MR_Box) (mercury__version_hash_table__AL_60)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14);
              }
#line 157 "version_array.opt"
              *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = (MR_Box) mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;
#line 589 "version_hash_table.m"
            }
#line 588 "version_hash_table.m"
      }
#line 588 "version_hash_table.m"
      break;
#line 588 "version_hash_table.m"
    }
#line 582 "version_hash_table.m"
}

#line 569 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 569 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 569 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 569 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 569 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 569 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 569 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 569 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 569 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 569 "version_hash_table.m"
{
#line 576 "version_hash_table.m"
  while (MR_TRUE)
#line 576 "version_hash_table.m"
    {
#line 576 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 576 "version_hash_table.m"
      {
#line 576 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 574 "version_hash_table.m"
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
#line 574 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__I_7 >= mercury__version_hash_table__V_15_15);
#line 576 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 574 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 576 "version_hash_table.m"
        else
#line 577 "version_hash_table.m"
          {
#line 577 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_24_24 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 577 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeInfo_25_25;
#line 577 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL_12;
#line 577 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;
#line 577 "version_hash_table.m"
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
#line 578 "version_hash_table.m"
            {
#line 578 "version_hash_table.m"
              mercury__version_hash_table__reinsert_alist_5_p_0(mercury__version_hash_table__TypeInfo_for_K_20, mercury__version_hash_table__TypeInfo_for_V_21, mercury__version_hash_table__AL_12, mercury__version_hash_table__HashPred_9, mercury__version_hash_table__NumBuckets_10, mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16);
            }
#line 579 "version_hash_table.m"
            mercury__version_hash_table__V_17_17 = (mercury__version_hash_table__I_7 + (MR_Integer) 1);
#line 579 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 579 "version_hash_table.m"
            {
#line 579 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__I__tmp_copy_7 = mercury__version_hash_table__V_17_17;
#line 579 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;

#line 579 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 579 "version_hash_table.m"
              mercury__version_hash_table__I_7 = mercury__version_hash_table__I__tmp_copy_7;
#line 579 "version_hash_table.m"
            }
#line 579 "version_hash_table.m"
            continue;
#line 577 "version_hash_table.m"
          }
#line 576 "version_hash_table.m"
      }
#line 576 "version_hash_table.m"
      break;
#line 576 "version_hash_table.m"
    }
#line 569 "version_hash_table.m"
}

#line 555 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 555 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 555 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 555 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 555 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 555 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 555 "version_hash_table.m"
  MR_Box mercury__version_hash_table__Buckets0_9)
#line 555 "version_hash_table.m"
{
#line 560 "version_hash_table.m"
  {
#line 560 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 560 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 560 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_23_23 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 560 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_24_24;
#line 560 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets0_11;
#line 560 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets_12;
#line 560 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_13;
#line 560 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_14;
#line 560 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets1_15;
#line 560 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_16;
#line 560 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_24_25;
#line 303 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_26;
#line 565 "version_hash_table.m"
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
#line 562 "version_hash_table.m"
    mercury__version_hash_table__NumBuckets_12 = (mercury__version_hash_table__NumBuckets0_11 + mercury__version_hash_table__NumBuckets0_11);
#line 563 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_13 = (mercury__version_hash_table__MaxOccupants0_7 + mercury__version_hash_table__MaxOccupants0_7);
#line 306 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_8 ;
		{
#line 306 "version_hash_table.m"

    HashPred = HashPred0;

#line 5091 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_14  = HashPred;
#line 306 "version_hash_table.m"
}
#line 565 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "version_hash_table.m"
    {
#line 565 "version_hash_table.m"
      mercury__version_hash_table__conv0_Buckets1_15 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_24_24, mercury__version_hash_table__NumBuckets_12, ((MR_Box) (mercury__version_hash_table__V_19_19)));
    }
#line 565 "version_hash_table.m"
    mercury__version_hash_table__Buckets1_15 = (MR_Box) mercury__version_hash_table__conv0_Buckets1_15;
#line 566 "version_hash_table.m"
    {
#line 566 "version_hash_table.m"
      mercury__version_hash_table__reinsert_bindings_6_p_0(mercury__version_hash_table__TypeInfo_for_K_21, mercury__version_hash_table__TypeInfo_for_V_22, (MR_Integer) 0, mercury__version_hash_table__Buckets0_9, mercury__version_hash_table__HashPred_14, mercury__version_hash_table__NumBuckets_12, mercury__version_hash_table__Buckets1_15, &mercury__version_hash_table__Buckets_16);
    }
#line 567 "version_hash_table.m"
    {
#line 567 "version_hash_table.m"
      mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 567 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_6));
#line 567 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_13));
#line 567 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_14));
#line 567 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_16));
#line 567 "version_hash_table.m"
    }
#line 560 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 560 "version_hash_table.m"
  }
#line 555 "version_hash_table.m"
}

#line 535 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__from_assoc_list_2_3_p_0(
#line 535 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 535 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 535 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 535 "version_hash_table.m"
  MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0_2,
#line 535 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__STATE_VARIABLE_HT_3)
#line 535 "version_hash_table.m"
{
#line 538 "version_hash_table.m"
  while (MR_TRUE)
#line 538 "version_hash_table.m"
    {
#line 538 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 538 "version_hash_table.m"
      {
#line 538 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 538 "version_hash_table.m"
        if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_HT_3 = mercury__version_hash_table__STATE_VARIABLE_HT_0_2;
#line 538 "version_hash_table.m"
        else
#line 539 "version_hash_table.m"
          {
#line 539 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_7;
#line 539 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_8;
#line 539 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 539 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 539 "version_hash_table.m"
            MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 539 "version_hash_table.m"
            mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 0));
#line 539 "version_hash_table.m"
            mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 1));
#line 367 "version_hash_table.m"
            {
#line 367 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_14_14 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__STATE_VARIABLE_HT_0_2, mercury__version_hash_table__K_7, mercury__version_hash_table__V_8);
            }
#line 541 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 541 "version_hash_table.m"
            {
#line 541 "version_hash_table.m"
              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__T_9;
#line 541 "version_hash_table.m"
              MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 541 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_0_2 = mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
#line 541 "version_hash_table.m"
              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 541 "version_hash_table.m"
            }
#line 541 "version_hash_table.m"
            continue;
#line 539 "version_hash_table.m"
          }
#line 538 "version_hash_table.m"
      }
#line 538 "version_hash_table.m"
      break;
#line 538 "version_hash_table.m"
    }
#line 535 "version_hash_table.m"
}

#line 516 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__to_assoc_list_2_3_p_0(
#line 516 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 516 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 516 "version_hash_table.m"
  MR_Word mercury__version_hash_table__X_4,
#line 516 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 516 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 516 "version_hash_table.m"
{
#line 523 "version_hash_table.m"
  while (MR_TRUE)
#line 523 "version_hash_table.m"
    {
#line 523 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 523 "version_hash_table.m"
      {
#line 523 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 523 "version_hash_table.m"
        if ((mercury__version_hash_table__X_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "version_hash_table.m"
          *mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL0_5;
#line 523 "version_hash_table.m"
        else
#line 523 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__X_4)) == (MR_mktag((MR_Integer) 2))))
#line 527 "version_hash_table.m"
            {
#line 527 "version_hash_table.m"
              MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 2)));
#line 527 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL1_10;
#line 527 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_11_11;
#line 527 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 527 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 1));

#line 528 "version_hash_table.m"
              {
#line 528 "version_hash_table.m"
                mercury__version_hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 0) = mercury__version_hash_table__K_13;
#line 528 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 1) = mercury__version_hash_table__V_14;
#line 528 "version_hash_table.m"
              }
#line 528 "version_hash_table.m"
              {
#line 528 "version_hash_table.m"
                mercury__version_hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 0) = ((MR_Box) (mercury__version_hash_table__V_11_11));
#line 528 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 528 "version_hash_table.m"
              }
#line 529 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 529 "version_hash_table.m"
              {
#line 529 "version_hash_table.m"
                MR_Word mercury__version_hash_table__X__tmp_copy_4 = mercury__version_hash_table__T_9;
#line 529 "version_hash_table.m"
                MR_Word mercury__version_hash_table__AL0__tmp_copy_5 = mercury__version_hash_table__AL1_10;

#line 529 "version_hash_table.m"
                mercury__version_hash_table__AL0_5 = mercury__version_hash_table__AL0__tmp_copy_5;
#line 529 "version_hash_table.m"
                mercury__version_hash_table__X_4 = mercury__version_hash_table__X__tmp_copy_4;
#line 529 "version_hash_table.m"
              }
#line 529 "version_hash_table.m"
              continue;
#line 527 "version_hash_table.m"
            }
#line 523 "version_hash_table.m"
          else
#line 524 "version_hash_table.m"
            {
#line 524 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 524 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 1));
#line 524 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_12_12;

#line 525 "version_hash_table.m"
              {
#line 525 "version_hash_table.m"
                mercury__version_hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 0) = mercury__version_hash_table__K_7;
#line 525 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 1) = mercury__version_hash_table__V_8;
#line 525 "version_hash_table.m"
              }
#line 525 "version_hash_table.m"
              {
#line 525 "version_hash_table.m"
                MR_Word base;
#line 525 "version_hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "version_hash_table.m"
                *mercury__version_hash_table__AL_6 = base;
#line 525 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__version_hash_table__V_12_12));
#line 525 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 525 "version_hash_table.m"
              }
#line 524 "version_hash_table.m"
            }
#line 523 "version_hash_table.m"
      }
#line 523 "version_hash_table.m"
      break;
#line 523 "version_hash_table.m"
    }
#line 516 "version_hash_table.m"
}

#line 401 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__alist_search_3_p_0(
#line 401 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 401 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 401 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_4,
#line 401 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 401 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__V_6)
#line 401 "version_hash_table.m"
{
#line 408 "version_hash_table.m"
  while (MR_TRUE)
#line 408 "version_hash_table.m"
    {
#line 408 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 408 "version_hash_table.m"
      {
#line 408 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 408 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
#line 411 "version_hash_table.m"
          {
#line 411 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 0));
#line 411 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 411 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 2)));

#line 412 "version_hash_table.m"
            {
#line 412 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__HK_7, mercury__version_hash_table__K_5);
            }
#line 414 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 413 "version_hash_table.m"
              {
#line 413 "version_hash_table.m"
                *mercury__version_hash_table__V_6 = mercury__version_hash_table__HV_8;
#line 413 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 413 "version_hash_table.m"
              }
#line 414 "version_hash_table.m"
            else
#line 415 "version_hash_table.m"
              {
#line 415 "version_hash_table.m"
                /* direct tailcall eliminated */
#line 415 "version_hash_table.m"
                {
#line 415 "version_hash_table.m"
                  MR_Word mercury__version_hash_table__AL__tmp_copy_4 = mercury__version_hash_table__T_9;

#line 415 "version_hash_table.m"
                  mercury__version_hash_table__AL_4 = mercury__version_hash_table__AL__tmp_copy_4;
#line 415 "version_hash_table.m"
                }
#line 415 "version_hash_table.m"
                continue;
#line 415 "version_hash_table.m"
              }
#line 411 "version_hash_table.m"
          }
#line 408 "version_hash_table.m"
        else
#line 408 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
#line 409 "version_hash_table.m"
            {
#line 409 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 0));

#line 409 "version_hash_table.m"
              *mercury__version_hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 409 "version_hash_table.m"
              {
#line 409 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__K_5, mercury__version_hash_table__V_12_12);
              }
#line 409 "version_hash_table.m"
            }
#line 408 "version_hash_table.m"
          else
#line 408 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_FALSE;
#line 408 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 408 "version_hash_table.m"
      }
#line 408 "version_hash_table.m"
      break;
#line 408 "version_hash_table.m"
    }
#line 401 "version_hash_table.m"
}

#line 300 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0(
#line 300 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_3,
#line 300 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 300 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__2_2)
#line 300 "version_hash_table.m"
{
#line 303 "version_hash_table.m"
  {
#line 303 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 303 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_4;

#line 306 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HeadVar__1_1 ;
		{
#line 306 "version_hash_table.m"

    HashPred = HashPred0;

#line 5484 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = HashPred;
#line 306 "version_hash_table.m"
}
#line 303 "version_hash_table.m"
  }
#line 300 "version_hash_table.m"
}

#line 291 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__find_slot_2_4_p_0(
#line 291 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 291 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 291 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 291 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_7,
#line 291 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_8)
#line 291 "version_hash_table.m"
{
#line 295 "version_hash_table.m"
  {
#line 295 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 295 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_9;
#line 295 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 296 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_5, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_9;

#line 296 "version_hash_table.m"
    {
#line 296 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_5), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_9);
    }
#line 296 "version_hash_table.m"
    mercury__version_hash_table__Hash_9 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_9);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = (mercury__version_hash_table__NumBuckets_7 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
    *mercury__version_hash_table__H_8 = (mercury__version_hash_table__Hash_9 & mercury__version_hash_table__V_10_10);
#line 295 "version_hash_table.m"
  }
#line 291 "version_hash_table.m"
}

#line 284 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__find_slot_2_f_0(
#line 284 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 284 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 284 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 284 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 284 "version_hash_table.m"
{
#line 287 "version_hash_table.m"
  {
#line 287 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 287 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_6;
#line 287 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_7;
#line 287 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 287 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9;
#line 287 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_16_16;
#line 287 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_26;
#line 287 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_27_27;
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 288 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 303 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_29;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_17_17;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 280 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_30;
#line 296 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 296 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_26;

#line 306 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_8_8 ;
		{
#line 306 "version_hash_table.m"

    HashPred = HashPred0;

#line 5605 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_7  = HashPred;
#line 306 "version_hash_table.m"
}
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 280 "version_hash_table.m"
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
#line 296 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
    {
#line 296 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_26);
    }
#line 296 "version_hash_table.m"
    mercury__version_hash_table__Hash_26 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_26);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__V_27_27 = (mercury__version_hash_table__V_9_9 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__H_6 = (mercury__version_hash_table__Hash_26 & mercury__version_hash_table__V_27_27);
#line 287 "version_hash_table.m"
    return mercury__version_hash_table__H_6;
#line 287 "version_hash_table.m"
  }
#line 284 "version_hash_table.m"
}

#line 243 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__init_2_4_f_0(
#line 243 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_29,
#line 243 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_30,
#line 243 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_6,
#line 243 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_7,
#line 243 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_8,
#line 243 "version_hash_table.m"
  MR_Word mercury__version_hash_table__NeedSafety_9)
#line 243 "version_hash_table.m"
{
#line 249 "version_hash_table.m"
  {
#line 249 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 <= (MR_Integer) 0);
#line 249 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;

#line 249 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 248 "version_hash_table.m"
      {
#line 248 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 248 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new_hash_table: N =< 0"));

#line 248 "version_hash_table.m"
        {
#line 248 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
#line 248 "version_hash_table.m"
      }
#line 249 "version_hash_table.m"
    else
#line 252 "version_hash_table.m"
      {
#line 249 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_17_17;

#line 163 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer Bits;

		{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5718 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_17_17  = Bits;
#line 163 "int.opt"
}
#line 249 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 >= mercury__version_hash_table__V_17_17);
#line 252 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 250 "version_hash_table.m"
          {
#line 250 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 250 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: N >= int.bits_per_int"));

#line 250 "version_hash_table.m"
            {
#line 250 "version_hash_table.m"
              mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_32_32, ((MR_Box) (mercury__version_hash_table__V_18_18)));
            }
#line 250 "version_hash_table.m"
          }
#line 252 "version_hash_table.m"
        else
#line 255 "version_hash_table.m"
          {
#line 252 "version_hash_table.m"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__MaxOccupancy_8 <= ((MR_Float) 0.0000000000000000));
#line 255 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 253 "version_hash_table.m"
              {
#line 253 "version_hash_table.m"
                MR_Word mercury__version_hash_table__TypeCtorInfo_33_33 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 253 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_21_21 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: MaxOccupancy =< 0.0"));

#line 253 "version_hash_table.m"
                {
#line 253 "version_hash_table.m"
                  mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_33_33, ((MR_Box) (mercury__version_hash_table__V_21_21)));
                }
#line 253 "version_hash_table.m"
              }
#line 255 "version_hash_table.m"
            else
#line 256 "version_hash_table.m"
              {
#line 256 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__NumBuckets_11;
#line 256 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__MaxOccupants_12;
#line 256 "version_hash_table.m"
                MR_Box mercury__version_hash_table__Buckets_13;
#line 256 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_24_24;
#line 256 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_25_25;

#line 256 "version_hash_table.m"
                {
#line 256 "version_hash_table.m"
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
#line 257 "version_hash_table.m"
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
#line 261 "version_hash_table.m"
                if ((mercury__version_hash_table__NeedSafety_9 == (MR_Integer) 0))
#line 262 "version_hash_table.m"
                  {
#line 262 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_36_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 262 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_37_37;
#line 262 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_26_26;
#line 263 "version_hash_table.m"
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
#line 263 "version_hash_table.m"
                    mercury__version_hash_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 263 "version_hash_table.m"
                    {
#line 263 "version_hash_table.m"
                      mercury__version_hash_table__conv0_Buckets_13 = mercury__version_array__unsafe_new_2_f_0(mercury__version_hash_table__TypeInfo_37_37, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_26_26)));
                    }
#line 263 "version_hash_table.m"
                    mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv0_Buckets_13;
#line 262 "version_hash_table.m"
                  }
#line 261 "version_hash_table.m"
                else
#line 259 "version_hash_table.m"
                  {
#line 259 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_34_34 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 259 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_35_35;
#line 259 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_27_27;
#line 260 "version_hash_table.m"
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
#line 260 "version_hash_table.m"
                    mercury__version_hash_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 260 "version_hash_table.m"
                    {
#line 260 "version_hash_table.m"
                      mercury__version_hash_table__conv1_Buckets_13 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_35_35, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_27_27)));
                    }
#line 260 "version_hash_table.m"
                    mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv1_Buckets_13;
#line 259 "version_hash_table.m"
                  }
#line 265 "version_hash_table.m"
                {
#line 265 "version_hash_table.m"
                  mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 265 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) ((MR_Integer) 0));
#line 265 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_12));
#line 265 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_6));
#line 265 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_13));
#line 265 "version_hash_table.m"
                }
#line 256 "version_hash_table.m"
              }
#line 255 "version_hash_table.m"
          }
#line 252 "version_hash_table.m"
      }
#line 249 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 249 "version_hash_table.m"
  }
#line 243 "version_hash_table.m"
}

#line 191 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_5(
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
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 191 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 191 "version_hash_table.m"
{
#line 752 "version_hash_table.m"
  {
#line 752 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 752 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 752 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 753 "version_hash_table.m"
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
#line 752 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
  }
#line 191 "version_hash_table.m"
}

#line 190 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_4(
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
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 190 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 190 "version_hash_table.m"
{
#line 752 "version_hash_table.m"
  {
#line 752 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 752 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 752 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 753 "version_hash_table.m"
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
#line 752 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
  }
#line 190 "version_hash_table.m"
}

#line 189 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_3(
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 189 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 189 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 189 "version_hash_table.m"
{
#line 752 "version_hash_table.m"
  {
#line 752 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 752 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 752 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 753 "version_hash_table.m"
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
#line 752 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
  }
#line 189 "version_hash_table.m"
}

#line 188 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_2(
#line 188 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 188 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 188 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 188 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 188 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 188 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 188 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 188 "version_hash_table.m"
{
#line 752 "version_hash_table.m"
  {
#line 752 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 752 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 752 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 753 "version_hash_table.m"
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
#line 752 "version_hash_table.m"
  }
#line 188 "version_hash_table.m"
}

#line 187 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_1(
#line 187 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 187 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 187 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 187 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 187 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 187 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 187 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 187 "version_hash_table.m"
{
#line 752 "version_hash_table.m"
  {
#line 752 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 752 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 752 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 753 "version_hash_table.m"
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
#line 752 "version_hash_table.m"
  }
#line 187 "version_hash_table.m"
}

#line 186 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_0(
#line 186 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 186 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 186 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 186 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 186 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 186 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 186 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 186 "version_hash_table.m"
{
#line 752 "version_hash_table.m"
  {
#line 752 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 752 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 752 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 752 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 753 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 753 "version_hash_table.m"
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
#line 752 "version_hash_table.m"
  }
#line 186 "version_hash_table.m"
}

#line 181 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__fold_3_f_0(
#line 181 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 181 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_15,
#line 181 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_16,
#line 181 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 181 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 181 "version_hash_table.m"
  MR_Box mercury__version_hash_table__X0_7)
#line 181 "version_hash_table.m"
{
#line 732 "version_hash_table.m"
  {
#line 732 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 732 "version_hash_table.m"
    MR_Box mercury__version_hash_table__X_8;
#line 732 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_20_20 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 732 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_21_21;
#line 732 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 732 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 733 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 733 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 733 "version_hash_table.m"
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
#line 732 "version_hash_table.m"
    return mercury__version_hash_table__X_8;
#line 732 "version_hash_table.m"
  }
#line 181 "version_hash_table.m"
}

#line 176 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_2_f_0(
#line 176 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 176 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 176 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_4,
#line 176 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AList_5)
#line 176 "version_hash_table.m"
{
#line 532 "version_hash_table.m"
  {
#line 532 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 532 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 532 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7;

#line 235 "version_hash_table.m"
    {
#line 235 "version_hash_table.m"
      mercury__version_hash_table__V_7_7 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 533 "version_hash_table.m"
    {
#line 533 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__AList_5, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__HT_6);
    }
#line 532 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 532 "version_hash_table.m"
  }
#line 176 "version_hash_table.m"
}

#line 172 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__to_assoc_list_1_f_0(
#line 172 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_11,
#line 172 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_12,
#line 172 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_3)
#line 172 "version_hash_table.m"
{
#line 513 "version_hash_table.m"
  {
#line 513 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_4;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_17_17;
#line 513 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 514 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 514 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 514 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_17_31;

#line 6589 "version_hash_table.c"
    {
#line 6591 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6593 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_16_16));
#line 6595 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_11));
#line 6597 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_12));
#line 6599 "version_hash_table.c"
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

#line 6614 "version_hash_table.c"

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
#line 513 "version_hash_table.m"
    return mercury__version_hash_table__AL_4;
#line 513 "version_hash_table.m"
  }
#line 172 "version_hash_table.m"
}

#line 168 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__search_3_p_0(
#line 168 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 168 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 168 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 168 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 168 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__HeadVar__3_3)
#line 168 "version_hash_table.m"
{
#line 394 "version_hash_table.m"
  {
#line 394 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 394 "version_hash_table.m"
    {
#line 394 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, mercury__version_hash_table__HeadVar__3_3);
    }
#line 394 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 394 "version_hash_table.m"
  }
#line 168 "version_hash_table.m"
}

#line 167 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__search_2_f_0(
#line 167 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 167 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 167 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 167 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 167 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__V_6)
#line 167 "version_hash_table.m"
{
#line 396 "version_hash_table.m"
  {
#line 396 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 396 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_15_15;
#line 396 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_16_16;
#line 396 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 396 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_8;
#line 396 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_9_9;
#line 396 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_20;
#line 396 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 396 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_22_22;
#line 396 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_27_27;
#line 396 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_37;
#line 396 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_38_38;
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 288 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 303 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_43;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_28_28;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_29_29;
#line 280 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_30_30;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_44;
#line 296 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 296 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_37;
#line 398 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 398 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11;
#line 398 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_12_12;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL_8;

#line 306 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_21_21 ;
		{
#line 306 "version_hash_table.m"

    HashPred = HashPred0;

#line 6748 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_20  = HashPred;
#line 306 "version_hash_table.m"
}
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 280 "version_hash_table.m"
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

#line 6776 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_22_22  = N;
#line 158 "version_array.opt"
}
#line 296 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_20, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
    {
#line 296 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_20), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_37);
    }
#line 296 "version_hash_table.m"
    mercury__version_hash_table__Hash_37 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_37);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__V_38_38 = (mercury__version_hash_table__V_22_22 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_37 & mercury__version_hash_table__V_38_38);
#line 398 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 398 "version_hash_table.m"
    mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 398 "version_hash_table.m"
    mercury__version_hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 398 "version_hash_table.m"
    mercury__version_hash_table__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 6804 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 6806 "version_hash_table.c"
    {
#line 6808 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6810 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_15_15));
#line 6812 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_13));
#line 6814 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_14));
#line 6816 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL_8 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_16_16, (MR_Box) mercury__version_hash_table__V_9_9, mercury__version_hash_table__H_7);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL_8 = ((MR_Word) mercury__version_hash_table__conv2_AL_8);
#line 399 "version_hash_table.m"
    {
#line 399 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_13, mercury__version_hash_table__TypeInfo_for_V_14, mercury__version_hash_table__AL_8, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 396 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 396 "version_hash_table.m"
  }
#line 167 "version_hash_table.m"
}

#line 163 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__elem_2_f_0(
#line 163 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 163 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 163 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_4,
#line 163 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_5)
#line 163 "version_hash_table.m"
{
#line 465 "version_hash_table.m"
  {
#line 465 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 465 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 465 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_10;

#line 466 "version_hash_table.m"
    {
#line 466 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4, &mercury__version_hash_table__V_10);
    }
#line 465 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 465 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_10;
#line 465 "version_hash_table.m"
    else
#line 468 "version_hash_table.m"
      {
#line 465 "version_hash_table.m"
        {
#line 465 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_7, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 468 "version_hash_table.m"
      }
#line 465 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 465 "version_hash_table.m"
  }
#line 163 "version_hash_table.m"
}

#line 158 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__lookup_2_f_0(
#line 158 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 158 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 158 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 158 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 158 "version_hash_table.m"
{
#line 465 "version_hash_table.m"
  {
#line 465 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 465 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 465 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_6;

#line 466 "version_hash_table.m"
    {
#line 466 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, &mercury__version_hash_table__V_6);
    }
#line 465 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 465 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_6;
#line 465 "version_hash_table.m"
    else
#line 468 "version_hash_table.m"
      {
#line 465 "version_hash_table.m"
        {
#line 465 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_9, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 468 "version_hash_table.m"
      }
#line 465 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 465 "version_hash_table.m"
  }
#line 158 "version_hash_table.m"
}

#line 152 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__delete_3_p_0(
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 152 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_4,
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_5,
#line 152 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__3_3)
#line 152 "version_hash_table.m"
{
#line 487 "version_hash_table.m"
  {
#line 487 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 487 "version_hash_table.m"
    {
#line 487 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__delete_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4);
    }
#line 487 "version_hash_table.m"
  }
#line 152 "version_hash_table.m"
}

#line 151 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__delete_2_f_0(
#line 151 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 151 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 151 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_4,
#line 151 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 151 "version_hash_table.m"
{
#line 475 "version_hash_table.m"
  {
#line 475 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 475 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 475 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_23_23;
#line 475 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_24_24;
#line 475 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 475 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_8;
#line 475 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_16_16;
#line 475 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_28;
#line 475 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 475 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_30_30;
#line 475 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_35_35;
#line 475 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_45;
#line 475 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_46_46;
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 288 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 303 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_55;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_37_37;
#line 280 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_38_38;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_56;
#line 296 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 296 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_45;
#line 477 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 477 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_19_19;
#line 477 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_20_20;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_8;
#line 483 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_9;

#line 306 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_29_29 ;
		{
#line 306 "version_hash_table.m"

    HashPred = HashPred0;

#line 7050 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_28  = HashPred;
#line 306 "version_hash_table.m"
}
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 280 "version_hash_table.m"
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

#line 7078 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_30_30  = N;
#line 158 "version_array.opt"
}
#line 296 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_28, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
    {
#line 296 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_28), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_45);
    }
#line 296 "version_hash_table.m"
    mercury__version_hash_table__Hash_45 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_45);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__V_46_46 = (mercury__version_hash_table__V_30_30 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_45 & mercury__version_hash_table__V_46_46);
#line 477 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 477 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 477 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 477 "version_hash_table.m"
    mercury__version_hash_table__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 7106 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_23_23 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7108 "version_hash_table.c"
    {
#line 7110 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7112 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_23));
#line 7114 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_21));
#line 7116 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_22));
#line 7118 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_8 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_24, (MR_Box) mercury__version_hash_table__V_16_16, mercury__version_hash_table__H_7);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_8 = ((MR_Word) mercury__version_hash_table__conv2_AL0_8);
#line 478 "version_hash_table.m"
    {
#line 478 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_21, mercury__version_hash_table__AL0_8, mercury__version_hash_table__K_5, &mercury__version_hash_table__AL_9);
    }
#line 483 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 479 "version_hash_table.m"
      {
#line 479 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 479 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 479 "version_hash_table.m"
        MR_Word mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 479 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 479 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets_14;
#line 479 "version_hash_table.m"
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
#line 481 "version_hash_table.m"
        mercury__version_hash_table__NumOccupants_15 = (mercury__version_hash_table__NumOccupants0_10 - (MR_Integer) 1);
#line 482 "version_hash_table.m"
        {
#line 482 "version_hash_table.m"
          mercury__version_hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_15));
#line 482 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 482 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 482 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
#line 482 "version_hash_table.m"
        }
#line 479 "version_hash_table.m"
      }
#line 483 "version_hash_table.m"
    else
#line 484 "version_hash_table.m"
      mercury__version_hash_table__HT_6 = mercury__version_hash_table__HT0_4;
#line 475 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 475 "version_hash_table.m"
  }
#line 151 "version_hash_table.m"
}

#line 143 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__det_update_4_p_0(
#line 143 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 143 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 143 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 143 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 143 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 143 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 143 "version_hash_table.m"
{
#line 461 "version_hash_table.m"
  {
#line 461 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 461 "version_hash_table.m"
    {
#line 461 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_update_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 461 "version_hash_table.m"
  }
#line 143 "version_hash_table.m"
}

#line 142 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__det_update_3_f_0(
#line 142 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_28,
#line 142 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_29,
#line 142 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 142 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 142 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 142 "version_hash_table.m"
{
#line 451 "version_hash_table.m"
  {
#line 451 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 451 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 451 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_30_30;
#line 451 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_31_31;
#line 451 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 451 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_10;
#line 451 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_12;
#line 451 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_13_13;
#line 451 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_16_16;
#line 451 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_17_17;
#line 451 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_36;
#line 451 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 451 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_38_38;
#line 451 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_43_43;
#line 451 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_53;
#line 451 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_54_54;
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 288 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 303 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_63;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_44_44;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_45_45;
#line 280 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_46_46;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_64;
#line 296 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 296 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_53;
#line 453 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 453 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_19_19;
#line 453 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_20_20;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_10;
#line 456 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL1_11;
#line 459 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_21_21;
#line 459 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_22_22;
#line 459 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_23_23;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_V_17_17;
#line 459 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_24_24;
#line 459 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_25_25;
#line 459 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_26_26;
#line 459 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_27_27;

#line 306 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_37_37 ;
		{
#line 306 "version_hash_table.m"

    HashPred = HashPred0;

#line 7328 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_36  = HashPred;
#line 306 "version_hash_table.m"
}
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 280 "version_hash_table.m"
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

#line 7356 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_38_38  = N;
#line 158 "version_array.opt"
}
#line 296 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_36, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
    {
#line 296 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_36), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_53);
    }
#line 296 "version_hash_table.m"
    mercury__version_hash_table__Hash_53 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_53);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__V_54_54 = (mercury__version_hash_table__V_38_38 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_53 & mercury__version_hash_table__V_54_54);
#line 453 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 453 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 453 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 453 "version_hash_table.m"
    mercury__version_hash_table__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7384 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7386 "version_hash_table.c"
    {
#line 7388 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7390 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_31_31, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_30_30));
#line 7392 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_31_31, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_28));
#line 7394 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_31_31, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_29));
#line 7396 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_10 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_31_31, (MR_Box) mercury__version_hash_table__V_13_13, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_10 = ((MR_Word) mercury__version_hash_table__conv2_AL0_10);
#line 454 "version_hash_table.m"
    {
#line 454 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_28, mercury__version_hash_table__AL0_10, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_11);
    }
#line 456 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 455 "version_hash_table.m"
      mercury__version_hash_table__AL_12 = mercury__version_hash_table__AL1_11;
#line 456 "version_hash_table.m"
    else
#line 457 "version_hash_table.m"
      {
#line 457 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 457 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_14_14 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_update: key not found"));

#line 457 "version_hash_table.m"
        {
#line 457 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_32_32, ((MR_Box) (mercury__version_hash_table__V_14_14)));
        }
#line 457 "version_hash_table.m"
      }
#line 459 "version_hash_table.m"
    mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 459 "version_hash_table.m"
    mercury__version_hash_table__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 459 "version_hash_table.m"
    mercury__version_hash_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 459 "version_hash_table.m"
    mercury__version_hash_table__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_31_31, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_12)), (MR_Box) mercury__version_hash_table__V_16_16, &mercury__version_hash_table__conv3_V_17_17);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__V_17_17 = (MR_Box) mercury__version_hash_table__conv3_V_17_17;
#line 459 "version_hash_table.m"
    mercury__version_hash_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 459 "version_hash_table.m"
    mercury__version_hash_table__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 459 "version_hash_table.m"
    mercury__version_hash_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 459 "version_hash_table.m"
    mercury__version_hash_table__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 459 "version_hash_table.m"
    {
#line 459 "version_hash_table.m"
      mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__V_24_24));
#line 459 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__V_25_25));
#line 459 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__V_26_26));
#line 459 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__V_17_17));
#line 459 "version_hash_table.m"
    }
#line 451 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 451 "version_hash_table.m"
  }
#line 142 "version_hash_table.m"
}

#line 134 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__det_insert_4_p_0(
#line 134 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 134 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 134 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 134 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 134 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 134 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 134 "version_hash_table.m"
{
#line 447 "version_hash_table.m"
  {
#line 447 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 447 "version_hash_table.m"
    {
#line 447 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_insert_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 447 "version_hash_table.m"
  }
#line 134 "version_hash_table.m"
}

#line 133 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__det_insert_3_f_0(
#line 133 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_27,
#line 133 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_28,
#line 133 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 133 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 133 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 133 "version_hash_table.m"
{
#line 421 "version_hash_table.m"
  {
#line 421 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 421 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 421 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_29_29;
#line 421 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_30_30;
#line 421 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 421 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 421 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 421 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 421 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 421 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 421 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 421 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_22;
#line 421 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_23;
#line 421 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_47;
#line 421 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 421 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_49_49;
#line 421 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_54_54;
#line 421 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_64;
#line 421 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_65_65;
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 288 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 303 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_74;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_55_55;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_56_56;
#line 280 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_57_57;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_75;
#line 296 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 296 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_64;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_22;

#line 306 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_48_48 ;
		{
#line 306 "version_hash_table.m"

    HashPred = HashPred0;

#line 7599 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_47  = HashPred;
#line 306 "version_hash_table.m"
}
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 280 "version_hash_table.m"
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

#line 7627 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_49_49  = N;
#line 158 "version_array.opt"
}
#line 296 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_47, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
    {
#line 296 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_47), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_64);
    }
#line 296 "version_hash_table.m"
    mercury__version_hash_table__Hash_64 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_64);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__V_65_65 = (mercury__version_hash_table__V_49_49 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_64 & mercury__version_hash_table__V_65_65);
#line 423 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 423 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 423 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 423 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7655 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7657 "version_hash_table.c"
    {
#line 7659 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7661 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_29_29));
#line 7663 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_27));
#line 7665 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_28));
#line 7667 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_30_30, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 428 "version_hash_table.m"
    if ((mercury__version_hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "version_hash_table.m"
      {
#line 427 "version_hash_table.m"
        mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "version_hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 427 "version_hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 427 "version_hash_table.m"
      }
#line 428 "version_hash_table.m"
    else
#line 428 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 435 "version_hash_table.m"
        {
#line 432 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_21_21;

#line 432 "version_hash_table.m"
          {
#line 432 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_21_21);
          }
#line 435 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 433 "version_hash_table.m"
            {
#line 433 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 433 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 433 "version_hash_table.m"
              {
#line 433 "version_hash_table.m"
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_24_24)));
              }
#line 433 "version_hash_table.m"
            }
#line 435 "version_hash_table.m"
          else
#line 436 "version_hash_table.m"
            {
#line 436 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 436 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 436 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 436 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 436 "version_hash_table.m"
            }
#line 435 "version_hash_table.m"
        }
#line 428 "version_hash_table.m"
      else
#line 435 "version_hash_table.m"
        {
#line 432 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_32_32;

#line 432 "version_hash_table.m"
          {
#line 432 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_32_32);
          }
#line 435 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 433 "version_hash_table.m"
            {
#line 433 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 433 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 433 "version_hash_table.m"
              {
#line 433 "version_hash_table.m"
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__version_hash_table__V_33_33)));
              }
#line 433 "version_hash_table.m"
            }
#line 435 "version_hash_table.m"
          else
#line 436 "version_hash_table.m"
            {
#line 436 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 436 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 436 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 436 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 436 "version_hash_table.m"
            }
#line 435 "version_hash_table.m"
        }
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_30_30, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_22);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__Buckets_22 = (MR_Box) mercury__version_hash_table__conv3_Buckets_22;
#line 440 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants_23 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);
#line 441 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_23 > mercury__version_hash_table__MaxOccupants_11);
#line 443 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 442 "version_hash_table.m"
      {
#line 442 "version_hash_table.m"
        return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__NumOccupants_23, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_22);
      }
#line 443 "version_hash_table.m"
    else
#line 444 "version_hash_table.m"
      {
#line 444 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 444 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_23));
#line 444 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 444 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 444 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_22));
#line 444 "version_hash_table.m"
      }
#line 421 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 421 "version_hash_table.m"
  }
#line 133 "version_hash_table.m"
}

#line 127 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0(
#line 127 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 127 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 127 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 127 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 127 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 127 "version_hash_table.m"
{
#line 367 "version_hash_table.m"
  {
#line 367 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 367 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 367 "version_hash_table.m"
    {
#line 367 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_6, mercury__version_hash_table__K_5, mercury__version_hash_table__V_7);
    }
#line 367 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 367 "version_hash_table.m"
  }
#line 127 "version_hash_table.m"
}

#line 120 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__set_4_p_0(
#line 120 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 120 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 120 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 120 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 120 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 120 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 120 "version_hash_table.m"
{
#line 369 "version_hash_table.m"
  {
#line 369 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 369 "version_hash_table.m"
    {
#line 369 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 369 "version_hash_table.m"
  }
#line 120 "version_hash_table.m"
}

#line 119 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__set_3_f_0(
#line 119 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_26,
#line 119 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_27,
#line 119 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 119 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 119 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 119 "version_hash_table.m"
{
#line 326 "version_hash_table.m"
  {
#line 326 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_28_28;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_29_29;
#line 326 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 326 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 326 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 326 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__MayExpand_16;
#line 326 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_23;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_33;
#line 326 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 326 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_35_35;
#line 326 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_40_40;
#line 326 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_50;
#line 326 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51;
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 288 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 288 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 303 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_60;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_41_41;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_42_42;
#line 280 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_43_43;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_61;
#line 296 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 296 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_50;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_23;

#line 306 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_34_34 ;
		{
#line 306 "version_hash_table.m"

    HashPred = HashPred0;

#line 7978 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_33  = HashPred;
#line 306 "version_hash_table.m"
}
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 280 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 280 "version_hash_table.m"
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

#line 8006 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_35_35  = N;
#line 158 "version_array.opt"
}
#line 296 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_33, (MR_Integer) 1)));
#line 296 "version_hash_table.m"
    {
#line 296 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_33), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_50);
    }
#line 296 "version_hash_table.m"
    mercury__version_hash_table__Hash_50 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_50);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__V_51_51 = (mercury__version_hash_table__V_35_35 - (MR_Integer) 1);
#line 298 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_50 & mercury__version_hash_table__V_51_51);
#line 328 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 328 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 328 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 328 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 8034 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 8036 "version_hash_table.c"
    {
#line 8038 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8040 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_28_28));
#line 8042 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_26));
#line 8044 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_27));
#line 8046 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_29_29, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 334 "version_hash_table.m"
    if ((mercury__version_hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "version_hash_table.m"
      {
#line 332 "version_hash_table.m"
        {
#line 332 "version_hash_table.m"
          mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 332 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 332 "version_hash_table.m"
        }
#line 333 "version_hash_table.m"
        mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 331 "version_hash_table.m"
      }
#line 334 "version_hash_table.m"
    else
#line 334 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 348 "version_hash_table.m"
        {
#line 348 "version_hash_table.m"
          MR_Word mercury__version_hash_table__AL1_22;

#line 345 "version_hash_table.m"
          {
#line 345 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_22);
          }
#line 348 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 346 "version_hash_table.m"
            {
#line 346 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = mercury__version_hash_table__AL1_22;
#line 347 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 346 "version_hash_table.m"
            }
#line 348 "version_hash_table.m"
          else
#line 349 "version_hash_table.m"
            {
#line 349 "version_hash_table.m"
              {
#line 349 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 349 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 349 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 349 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 349 "version_hash_table.m"
              }
#line 350 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 349 "version_hash_table.m"
            }
#line 348 "version_hash_table.m"
        }
#line 334 "version_hash_table.m"
      else
#line 335 "version_hash_table.m"
        {
#line 335 "version_hash_table.m"
          MR_Box mercury__version_hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 0));
#line 335 "version_hash_table.m"
          MR_Box mercury__version_hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 1));

#line 336 "version_hash_table.m"
          {
#line 336 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__K0_17, mercury__version_hash_table__K_6);
          }
#line 339 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 337 "version_hash_table.m"
            {
#line 337 "version_hash_table.m"
              {
#line 337 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K0_17;
#line 337 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 337 "version_hash_table.m"
              }
#line 338 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 337 "version_hash_table.m"
            }
#line 339 "version_hash_table.m"
          else
#line 340 "version_hash_table.m"
            {
#line 340 "version_hash_table.m"
              {
#line 340 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 340 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 340 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 340 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 340 "version_hash_table.m"
              }
#line 341 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 340 "version_hash_table.m"
            }
#line 335 "version_hash_table.m"
        }
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_29_29, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_23);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__Buckets_23 = (MR_Box) mercury__version_hash_table__conv3_Buckets_23;
#line 357 "version_hash_table.m"
    if ((mercury__version_hash_table__MayExpand_16 == (MR_Integer) 0))
#line 356 "version_hash_table.m"
      {
#line 356 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 356 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants0_10));
#line 356 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 356 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 356 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 356 "version_hash_table.m"
      }
#line 357 "version_hash_table.m"
    else
#line 358 "version_hash_table.m"
      {
#line 358 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants_24 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);

#line 360 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_24 > mercury__version_hash_table__MaxOccupants_11);
#line 362 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 361 "version_hash_table.m"
          {
#line 361 "version_hash_table.m"
            return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__TypeInfo_for_V_27, mercury__version_hash_table__NumOccupants_24, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_23);
          }
#line 362 "version_hash_table.m"
        else
#line 363 "version_hash_table.m"
          {
#line 363 "version_hash_table.m"
            mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 363 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_24));
#line 363 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 363 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 363 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 363 "version_hash_table.m"
          }
#line 358 "version_hash_table.m"
      }
#line 326 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 326 "version_hash_table.m"
  }
#line 119 "version_hash_table.m"
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
#line 280 "version_hash_table.m"
  {
#line 280 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__HeadVar__2_2;
#line 280 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 280 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 280 "version_hash_table.m"
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

#line 8309 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HeadVar__2_2  = N;
#line 158 "version_array.opt"
}
#line 280 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 280 "version_hash_table.m"
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
#line 680 "version_hash_table.m"
  while (MR_TRUE)
#line 680 "version_hash_table.m"
    {
#line 680 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 680 "version_hash_table.m"
      {
#line 680 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 680 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__Int_5;
#line 676 "version_hash_table.m"
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
#line 680 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 624 "version_hash_table.m"
          {
#line 627 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__Int_5 ;
		{
#line 627 "version_hash_table.m"

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

#line 8404 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 627 "version_hash_table.m"
}
#line 624 "version_hash_table.m"
          }
#line 680 "version_hash_table.m"
        else
#line 684 "version_hash_table.m"
          {
#line 684 "version_hash_table.m"
            MR_String mercury__version_hash_table__String_6;
#line 680 "version_hash_table.m"
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
#line 684 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 656 "version_hash_table.m"
              {
#line 656 "version_hash_table.m"
                *mercury__version_hash_table__H_4 = mercury__string__hash_1_f_0(mercury__version_hash_table__String_6);
              }
#line 684 "version_hash_table.m"
            else
#line 688 "version_hash_table.m"
              {
#line 688 "version_hash_table.m"
                MR_Float mercury__version_hash_table__Float_7;
#line 684 "version_hash_table.m"
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
#line 688 "version_hash_table.m"
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

#line 8489 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 112 "float.opt"
}
#line 112 "float.opt"
                  }
#line 688 "version_hash_table.m"
                else
#line 692 "version_hash_table.m"
                  {
#line 692 "version_hash_table.m"
                    MR_Char mercury__version_hash_table__Char_8;
#line 688 "version_hash_table.m"
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
#line 692 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 668 "version_hash_table.m"
                      {
#line 668 "version_hash_table.m"
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

#line 8544 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_63_63  = Int;
#line 63 "char.opt"
}
#line 627 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_63_63 ;
		{
#line 627 "version_hash_table.m"

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

#line 8585 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 627 "version_hash_table.m"
}
#line 668 "version_hash_table.m"
                      }
#line 692 "version_hash_table.m"
                    else
#line 696 "version_hash_table.m"
                      {
#line 696 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__Univ_9;
#line 692 "version_hash_table.m"
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
#line 696 "version_hash_table.m"
                        if (mercury__version_hash_table__succeeded)
#line 694 "version_hash_table.m"
                          {
#line 694 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 0)));
#line 694 "version_hash_table.m"
                            MR_Box mercury__version_hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 1));

#line 694 "version_hash_table.m"
                            /* direct tailcall eliminated */
#line 694 "version_hash_table.m"
                            {
#line 694 "version_hash_table.m"
                              MR_Word mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__version_hash_table__TypeInfo_44_44;
#line 694 "version_hash_table.m"
                              MR_Box mercury__version_hash_table__T__tmp_copy_3 = mercury__version_hash_table__V_22_22;

#line 694 "version_hash_table.m"
                              mercury__version_hash_table__T_3 = mercury__version_hash_table__T__tmp_copy_3;
#line 694 "version_hash_table.m"
                              mercury__version_hash_table__TypeInfo_for_T_38 = mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38;
#line 694 "version_hash_table.m"
                            }
#line 694 "version_hash_table.m"
                            continue;
#line 694 "version_hash_table.m"
                          }
#line 696 "version_hash_table.m"
                        else
#line 707 "version_hash_table.m"
                          {
#line 707 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_45_45;
#line 707 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__Array_10;
#line 696 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__conv5_Array_10;

#line 696 "version_hash_table.m"
                            {
#line 696 "version_hash_table.m"
                              mercury__version_hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__version_hash_table__TypeInfo_for_T_38, &mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv5_Array_10);
                            }
#line 696 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 696 "version_hash_table.m"
                              {
#line 696 "version_hash_table.m"
                                mercury__version_hash_table__Array_10 = (MR_ArrayPtr) mercury__version_hash_table__conv5_Array_10;
#line 696 "version_hash_table.m"
                                mercury__version_hash_table__succeeded = MR_TRUE;
#line 696 "version_hash_table.m"
                              }
#line 707 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 698 "version_hash_table.m"
                              {
#line 698 "version_hash_table.m"
                                {
#line 698 "version_hash_table.m"
                                  *mercury__version_hash_table__H_4 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__Array_10, (MR_Integer) 0);
                                }
#line 698 "version_hash_table.m"
                              }
#line 707 "version_hash_table.m"
                            else
#line 709 "version_hash_table.m"
                              {
#line 709 "version_hash_table.m"
                                MR_String mercury__version_hash_table__FunctorName_15;
#line 709 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__Arity_16;
#line 709 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__Args_17;
#line 709 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H0_18;
#line 709 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H1_19;
#line 709 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_73_73;
#line 709 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_74_74;
#line 709 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_75_75;
#line 709 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_76_76;

#line 709 "version_hash_table.m"
                                {
#line 709 "version_hash_table.m"
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__T_3, (MR_Integer) 1, &mercury__version_hash_table__FunctorName_15, &mercury__version_hash_table__Arity_16, &mercury__version_hash_table__Args_17);
                                }
#line 656 "version_hash_table.m"
                                {
#line 656 "version_hash_table.m"
                                  mercury__version_hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__version_hash_table__FunctorName_15);
                                }
#line 727 "version_hash_table.m"
                                mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__H0_18 << mercury__version_hash_table__Arity_16);
#line 163 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 8731 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_76_76  = Bits;
#line 163 "int.opt"
}
#line 728 "version_hash_table.m"
                                mercury__version_hash_table__V_75_75 = (mercury__version_hash_table__V_76_76 - mercury__version_hash_table__Arity_16);
#line 727 "version_hash_table.m"
                                mercury__version_hash_table__V_74_74 = (mercury__version_hash_table__H0_18 >> mercury__version_hash_table__V_75_75);
#line 726 "version_hash_table.m"
                                mercury__version_hash_table__H1_19 = (mercury__version_hash_table__V_73_73 ^ mercury__version_hash_table__V_74_74);
#line 712 "version_hash_table.m"
                                {
#line 712 "version_hash_table.m"
                                  mercury__version_hash_table__foldl__ho16_4_p_in__list_0(mercury__version_hash_table__Args_17, mercury__version_hash_table__H1_19, mercury__version_hash_table__H_4);
#line 712 "version_hash_table.m"
                                  return;
                                }
#line 709 "version_hash_table.m"
                              }
#line 707 "version_hash_table.m"
                          }
#line 696 "version_hash_table.m"
                      }
#line 692 "version_hash_table.m"
                  }
#line 688 "version_hash_table.m"
              }
#line 684 "version_hash_table.m"
          }
#line 680 "version_hash_table.m"
      }
#line 680 "version_hash_table.m"
      break;
#line 680 "version_hash_table.m"
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

#line 8799 "version_hash_table.c"

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
#line 668 "version_hash_table.m"
  {
#line 668 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 668 "version_hash_table.m"
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

#line 8840 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_5_5  = Int;
#line 63 "char.opt"
}
#line 627 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_5_5 ;
		{
#line 627 "version_hash_table.m"

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
#line 627 "version_hash_table.m"
}
#line 668 "version_hash_table.m"
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
#line 656 "version_hash_table.m"
  {
#line 656 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 656 "version_hash_table.m"
    {
#line 656 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__version_hash_table__S_3);
    }
#line 656 "version_hash_table.m"
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
#line 624 "version_hash_table.m"
  {
#line 624 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 627 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__N_1 ;
		{
#line 627 "version_hash_table.m"

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

#line 8965 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_2  = H;
#line 627 "version_hash_table.m"
}
#line 624 "version_hash_table.m"
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
#line 276 "version_hash_table.m"
  {
#line 276 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 276 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 239 "version_hash_table.m"
    {
#line 239 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
#line 276 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 276 "version_hash_table.m"
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
#line 275 "version_hash_table.m"
  {
#line 275 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 275 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 239 "version_hash_table.m"
    {
#line 239 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
#line 275 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 275 "version_hash_table.m"
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
#line 273 "version_hash_table.m"
  {
#line 273 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 273 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 235 "version_hash_table.m"
    {
#line 235 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 273 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 273 "version_hash_table.m"
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
#line 272 "version_hash_table.m"
  {
#line 272 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 272 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 235 "version_hash_table.m"
    {
#line 235 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 272 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 272 "version_hash_table.m"
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
#line 241 "version_hash_table.m"
  {
#line 241 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 241 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 241 "version_hash_table.m"
    {
#line 241 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
#line 241 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 241 "version_hash_table.m"
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
#line 239 "version_hash_table.m"
  {
#line 239 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 239 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 239 "version_hash_table.m"
    {
#line 239 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
#line 239 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 239 "version_hash_table.m"
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
#line 237 "version_hash_table.m"
  {
#line 237 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 237 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 237 "version_hash_table.m"
    {
#line 237 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
#line 237 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 237 "version_hash_table.m"
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
#line 235 "version_hash_table.m"
  {
#line 235 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 235 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 235 "version_hash_table.m"
    {
#line 235 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
#line 235 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 235 "version_hash_table.m"
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
