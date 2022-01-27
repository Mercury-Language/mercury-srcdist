/*
** Automatically generated from `hash_table.m'
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




#line 86 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

#line 89 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

#line 92 "hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

#line 95 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4];

#line 98 "hash_table.c"
static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4];

#line 101 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0;

#line 104 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1];

#line 107 "hash_table.c"
static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1];

#line 110 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_2[1];

#line 113 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_2[1];

#line 116 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0;

#line 119 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_1[2];

#line 122 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1;

#line 125 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_2[3];

#line 128 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2;

#line 131 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0[1];

#line 134 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1[1];

#line 137 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2[1];

#line 140 "hash_table.c"
static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_alist_2[3];

#line 143 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2[3];

#line 146 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2[3];

#line 149 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
#line 152 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 154 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 156 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 158 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4);

#line 161 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
#line 164 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 166 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 168 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 170 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 172 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5);

#line 175 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
#line 178 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 180 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 182 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3);

#line 185 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
#line 188 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 190 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_2,
#line 192 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 194 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4);

#line 197 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
#line 200 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 202 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 204 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 206 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4);

#line 209 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
#line 212 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 214 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 216 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 218 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 220 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5);

#line 223 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
#line 226 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 228 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 230 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 232 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4);

#line 235 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
#line 238 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 240 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 242 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 244 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 246 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5);

#line 104 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 104 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 104 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 104 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 104 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 104 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 104 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 104 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 104 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 104 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 103 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 103 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 103 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 103 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 103 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 103 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 103 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 103 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 103 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 103 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 102 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 102 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 102 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 102 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 102 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 102 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 102 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 102 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 102 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 102 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 101 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 101 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 101 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 101 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 101 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 101 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 100 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 100 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 100 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 100 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 100 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 100 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 100 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 100 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 100 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 100 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 99 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 99 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 99 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 99 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 101 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 101 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 101 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 101 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 101 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 101 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 99 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 99 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 99 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 99 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 99 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_27_27,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_28_28,
#line 99 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 99 "array.opt"
  MR_Word mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 99 "array.opt"
  MR_Word * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 96 "array.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 96 "array.opt"
  MR_Word mercury__hash_table__V_19_19,
#line 96 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 96 "array.opt"
  MR_Integer mercury__hash_table__X_9_9,
#line 96 "array.opt"
  MR_Integer mercury__hash_table__I_10_10,
#line 96 "array.opt"
  MR_Integer mercury__hash_table__Max_11_11);

#line 61 "array.int"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 61 "array.int"
  MR_Word mercury__hash_table__V_13_13,
#line 61 "array.int"
  MR_ArrayPtr mercury__hash_table__A_6_6,
#line 61 "array.int"
  MR_Integer mercury__hash_table__X_7_7);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 580 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 580 "hash_table.m"
  MR_Word mercury__hash_table__AL_6,
#line 580 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_7,
#line 580 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_8,
#line 580 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 580 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14);

#line 567 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 567 "hash_table.m"
  MR_Integer mercury__hash_table__I_7,
#line 567 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__OldBuckets_8,
#line 567 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_9,
#line 567 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_10,
#line 567 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 567 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14);

#line 488 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 488 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 488 "hash_table.m"
  MR_Word mercury__hash_table__AL0_4,
#line 488 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 488 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6);

#line 368 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 368 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 368 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 368 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 368 "hash_table.m"
  MR_Box mercury__hash_table__V_7,
#line 368 "hash_table.m"
  MR_Word * mercury__hash_table__AL_8);

#line 130 "list.int"
static void MR_CALL 
mercury__hash_table__foldl__ho17_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__hash_table__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__hash_table__HeadVar__4_4);

#line 554 "hash_table.m"
static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
#line 554 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_20,
#line 554 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_21,
#line 554 "hash_table.m"
  MR_Integer mercury__hash_table__NumOccupants_6,
#line 554 "hash_table.m"
  MR_Integer mercury__hash_table__MaxOccupants0_7,
#line 554 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_8,
#line 554 "hash_table.m"
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



#line 918 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 927 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

#line 935 "hash_table.c"
const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_buckets_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__hash_table____Unify____buckets_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____buckets_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "buckets",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 956 "hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 966 "hash_table.c"
const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__hash_table____Unify____hash_pred_1_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_pred_1_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 987 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 995 "hash_table.c"
static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4] = {
  (MR_String) "num_occupants",
  (MR_String) "max_occupants",
  (MR_String) "hash_pred",
  (MR_String) "buckets"
};

#line 1003 "hash_table.c"
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

#line 1018 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

#line 1023 "hash_table.c"
static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0
  }
};

#line 1032 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

#line 1037 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_2[1] = {
  (MR_Integer) 0
};

#line 1042 "hash_table.c"
const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__hash_table____Unify____hash_table_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_table_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_table",
  {
    mercury__hash_table__hash_table__du_name_ordered_hash_table_2
  },
  {
    mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__hash_table__hash_table__functor_number_map_hash_table_2
};

#line 1063 "hash_table.c"
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

#line 1078 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1084 "hash_table.c"
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

#line 1099 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 1106 "hash_table.c"
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

#line 1121 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0
};

#line 1126 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1131 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2
};

#line 1136 "hash_table.c"
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

#line 1155 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1162 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1169 "hash_table.c"
const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__hash_table____Unify____hash_table_alist_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_table_alist_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_table_alist",
  {
    mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2
  },
  {
    mercury__hash_table__hash_table__du_ptag_ordered_hash_table_alist_2
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2
};

#line 1190 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
#line 1193 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1195 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1197 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1199 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1201 "hash_table.c"
{
#line 1203 "hash_table.c"
  {
#line 1205 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1208 "hash_table.c"
    {
#line 1210 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____buckets_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_3), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_4));
    }
#line 1213 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1215 "hash_table.c"
  }
#line 1217 "hash_table.c"
}

#line 1220 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
#line 1223 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1225 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1227 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 1229 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 1231 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 1233 "hash_table.c"
{
#line 1235 "hash_table.c"
  {
#line 1237 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1240 "hash_table.c"
    {
#line 1242 "hash_table.c"
      mercury__hash_table____Compare____buckets_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_4), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_5));
    }
#line 1245 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1247 "hash_table.c"
  }
#line 1249 "hash_table.c"
}

#line 1252 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
#line 1255 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1257 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1259 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3)
#line 1261 "hash_table.c"
{
#line 1263 "hash_table.c"
  {
#line 1265 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1268 "hash_table.c"
    {
#line 1270 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3));
    }
#line 1273 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1275 "hash_table.c"
  }
#line 1277 "hash_table.c"
}

#line 1280 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
#line 1283 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1285 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_2,
#line 1287 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1289 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1291 "hash_table.c"
{
#line 1293 "hash_table.c"
  {
#line 1295 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1298 "hash_table.c"
    {
#line 1300 "hash_table.c"
      mercury__hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__hash_table__wrapper_arg_1), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1303 "hash_table.c"
    *mercury__hash_table__wrapper_arg_2 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1305 "hash_table.c"
  }
#line 1307 "hash_table.c"
}

#line 1310 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
#line 1313 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1315 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1317 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1319 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1321 "hash_table.c"
{
#line 1323 "hash_table.c"
  {
#line 1325 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1328 "hash_table.c"
    {
#line 1330 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_table_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1333 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1335 "hash_table.c"
  }
#line 1337 "hash_table.c"
}

#line 1340 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
#line 1343 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1345 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1347 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 1349 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 1351 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 1353 "hash_table.c"
{
#line 1355 "hash_table.c"
  {
#line 1357 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1360 "hash_table.c"
    {
#line 1362 "hash_table.c"
      mercury__hash_table____Compare____hash_table_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_4), ((MR_Word) mercury__hash_table__wrapper_arg_5));
    }
#line 1365 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1367 "hash_table.c"
  }
#line 1369 "hash_table.c"
}

#line 1372 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
#line 1375 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1377 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1379 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1381 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1383 "hash_table.c"
{
#line 1385 "hash_table.c"
  {
#line 1387 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1390 "hash_table.c"
    {
#line 1392 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1395 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1397 "hash_table.c"
  }
#line 1399 "hash_table.c"
}

#line 1402 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
#line 1405 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1407 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1409 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 1411 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 1413 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 1415 "hash_table.c"
{
#line 1417 "hash_table.c"
  {
#line 1419 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1422 "hash_table.c"
    {
#line 1424 "hash_table.c"
      mercury__hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_4), ((MR_Word) mercury__hash_table__wrapper_arg_5));
    }
#line 1427 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1429 "hash_table.c"
  }
#line 1431 "hash_table.c"
}

#line 104 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 104 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 104 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 104 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 104 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 104 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 104 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 104 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 104 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 104 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 104 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          {
#line 640 "array.opt"
            *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 640 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 640 "array.opt"
          }
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 1510 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_5(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 642 "array.opt"
            if (mercury__hash_table__succeeded)
#line 642 "array.opt"
              {
#line 645 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 644 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + mercury__hash_table__V_18_16);
#line 646 "array.opt"
                /* direct tailcall eliminated */
#line 646 "array.opt"
                {
#line 646 "array.opt"
                  MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
                  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
                  mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
                  mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
                }
#line 646 "array.opt"
                continue;
#line 642 "array.opt"
              }
#line 642 "array.opt"
          }
#line 641 "array.opt"
        return mercury__hash_table__succeeded;
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 104 "array.opt"
}

#line 103 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 103 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 103 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 103 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 103 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 103 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 103 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 103 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 103 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 103 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 103 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          {
#line 640 "array.opt"
            *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 640 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 640 "array.opt"
          }
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 1640 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_4(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 642 "array.opt"
            if (mercury__hash_table__succeeded)
#line 642 "array.opt"
              {
#line 645 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 644 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + mercury__hash_table__V_18_16);
#line 646 "array.opt"
                /* direct tailcall eliminated */
#line 646 "array.opt"
                {
#line 646 "array.opt"
                  MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
                  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
                  mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
                  mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
                }
#line 646 "array.opt"
                continue;
#line 642 "array.opt"
              }
#line 642 "array.opt"
          }
#line 641 "array.opt"
        return mercury__hash_table__succeeded;
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 103 "array.opt"
}

#line 102 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 102 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 102 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 102 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 102 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 102 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 102 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 102 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 102 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 102 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 102 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          {
#line 640 "array.opt"
            *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 640 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 640 "array.opt"
          }
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 1770 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_3(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 642 "array.opt"
            if (mercury__hash_table__succeeded)
#line 642 "array.opt"
              {
#line 645 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 644 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + mercury__hash_table__V_18_16);
#line 646 "array.opt"
                /* direct tailcall eliminated */
#line 646 "array.opt"
                {
#line 646 "array.opt"
                  MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
                  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
                  mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
                  mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
                }
#line 646 "array.opt"
                continue;
#line 642 "array.opt"
              }
#line 642 "array.opt"
          }
#line 641 "array.opt"
        return mercury__hash_table__succeeded;
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 102 "array.opt"
}

#line 101 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 101 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 101 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 101 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 101 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 101 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 101 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 1892 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__fold_p_4_p_2(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 644 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 646 "array.opt"
            /* direct tailcall eliminated */
#line 646 "array.opt"
            {
#line 646 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
            }
#line 646 "array.opt"
            continue;
#line 642 "array.opt"
          }
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 101 "array.opt"
}

#line 100 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 100 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 100 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 100 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 100 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 100 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 100 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 100 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 100 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 100 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 100 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2004 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__fold_p_4_p_1(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 644 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 646 "array.opt"
            /* direct tailcall eliminated */
#line 646 "array.opt"
            {
#line 646 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
            }
#line 646 "array.opt"
            continue;
#line 642 "array.opt"
          }
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 100 "array.opt"
}

#line 99 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 99 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 99 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 99 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 99 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2116 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__fold_p_4_p_0(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 644 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 646 "array.opt"
            /* direct tailcall eliminated */
#line 646 "array.opt"
            {
#line 646 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
            }
#line 646 "array.opt"
            continue;
#line 642 "array.opt"
          }
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 99 "array.opt"
}

#line 101 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 101 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 101 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 101 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 101 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 101 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 101 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 101 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2228 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__fold_f_4_p_1(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 644 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 646 "array.opt"
            /* direct tailcall eliminated */
#line 646 "array.opt"
            {
#line 646 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
            }
#line 646 "array.opt"
            continue;
#line 642 "array.opt"
          }
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 101 "array.opt"
}

#line 99 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 99 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 99 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 99 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 99 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2340 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__fold_f_4_p_0(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 644 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 646 "array.opt"
            /* direct tailcall eliminated */
#line 646 "array.opt"
            {
#line 646 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
            }
#line 646 "array.opt"
            continue;
#line 642 "array.opt"
          }
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 99 "array.opt"
}

#line 99 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_27_27,
#line 99 "array.opt"
  MR_Word mercury__hash_table__V_28_28,
#line 99 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 99 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 99 "array.opt"
  MR_Word mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 99 "array.opt"
  MR_Word * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 99 "array.opt"
{
#line 641 "array.opt"
  while (MR_TRUE)
#line 641 "array.opt"
    {
#line 641 "array.opt"
      /* tailcall optimized into a loop */
#line 641 "array.opt"
      {
#line 641 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 641 "array.opt"
        if (mercury__hash_table__succeeded)
#line 640 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 641 "array.opt"
        else
#line 642 "array.opt"
          {
#line 642 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 642 "array.opt"
            MR_Word mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 642 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_32;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2448 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 643 "array.opt"
            {
#line 643 "array.opt"
              mercury__hash_table__to_assoc_list_2_3_p_0(mercury__hash_table__V_27_27, mercury__hash_table__V_28_28, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 644 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 646 "array.opt"
            /* direct tailcall eliminated */
#line 646 "array.opt"
            {
#line 646 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 646 "array.opt"
              MR_Word mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 646 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 646 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 646 "array.opt"
            }
#line 646 "array.opt"
            continue;
#line 642 "array.opt"
          }
#line 641 "array.opt"
      }
#line 641 "array.opt"
      break;
#line 641 "array.opt"
    }
#line 99 "array.opt"
}

#line 96 "array.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 96 "array.opt"
  MR_Word mercury__hash_table__V_19_19,
#line 96 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 96 "array.opt"
  MR_Integer mercury__hash_table__X_9_9,
#line 96 "array.opt"
  MR_Integer mercury__hash_table__I_10_10,
#line 96 "array.opt"
  MR_Integer mercury__hash_table__Max_11_11)
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
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_11_11 < mercury__hash_table__I_10_10);
#line 629 "array.opt"
        MR_Integer mercury__hash_table__HeadVar__6_6_12;

#line 629 "array.opt"
        if (mercury__hash_table__succeeded)
#line 628 "array.opt"
          mercury__hash_table__HeadVar__6_6_12 = mercury__hash_table__X_9_9;
#line 629 "array.opt"
        else
#line 630 "array.opt"
          {
#line 630 "array.opt"
            MR_Integer mercury__hash_table__V_12_13;
#line 630 "array.opt"
            MR_Integer mercury__hash_table__V_14_14;
#line 630 "array.opt"
            MR_Box mercury__hash_table__V_13_15;
#line 630 "array.opt"
            MR_Integer mercury__hash_table__HX_36;
#line 630 "array.opt"
            MR_Integer mercury__hash_table__V_70_70;
#line 630 "array.opt"
            MR_Integer mercury__hash_table__V_71_71;
#line 630 "array.opt"
            MR_Integer mercury__hash_table__V_72_72;
#line 630 "array.opt"
            MR_Integer mercury__hash_table__V_73_73;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_75;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_10_10 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2562 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_13_15  = (MR_Box) Item;
#line 276 "array.opt"
}
#line 698 "hash_table.m"
            {
#line 698 "hash_table.m"
              mercury__hash_table__generic_hash_2_p_0(mercury__hash_table__V_19_19, mercury__hash_table__V_13_15, &mercury__hash_table__HX_36);
            }
#line 725 "hash_table.m"
            mercury__hash_table__V_70_70 = (mercury__hash_table__X_9_9 << mercury__hash_table__HX_36);
#line 163 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2587 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_73_73  = Bits;
#line 163 "int.opt"
}
#line 726 "hash_table.m"
            mercury__hash_table__V_72_72 = (mercury__hash_table__V_73_73 - mercury__hash_table__HX_36);
#line 725 "hash_table.m"
            mercury__hash_table__V_71_71 = (mercury__hash_table__X_9_9 >> mercury__hash_table__V_72_72);
#line 724 "hash_table.m"
            mercury__hash_table__V_12_13 = (mercury__hash_table__V_70_70 ^ mercury__hash_table__V_71_71);
#line 633 "array.opt"
            mercury__hash_table__V_14_14 = (mercury__hash_table__I_10_10 + (MR_Integer) 1);
#line 630 "array.opt"
            /* direct tailcall eliminated */
#line 630 "array.opt"
            {
#line 630 "array.opt"
              MR_Integer mercury__hash_table__X_9__tmp_copy_9 = mercury__hash_table__V_12_13;
#line 630 "array.opt"
              MR_Integer mercury__hash_table__I_10__tmp_copy_10 = mercury__hash_table__V_14_14;

#line 630 "array.opt"
              mercury__hash_table__I_10_10 = mercury__hash_table__I_10__tmp_copy_10;
#line 630 "array.opt"
              mercury__hash_table__X_9_9 = mercury__hash_table__X_9__tmp_copy_9;
#line 630 "array.opt"
            }
#line 630 "array.opt"
            continue;
#line 630 "array.opt"
          }
#line 629 "array.opt"
        return mercury__hash_table__HeadVar__6_6_12;
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
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 61 "array.int"
  MR_Word mercury__hash_table__V_13_13,
#line 61 "array.int"
  MR_ArrayPtr mercury__hash_table__A_6_6,
#line 61 "array.int"
  MR_Integer mercury__hash_table__X_7_7)
#line 61 "array.int"
{
#line 393 "array.opt"
  {
#line 393 "array.opt"
    MR_bool mercury__hash_table__succeeded;
#line 393 "array.opt"
    MR_Integer mercury__hash_table__HeadVar__4_4_8;
#line 393 "array.opt"
    MR_Integer mercury__hash_table__V_8_9;
#line 393 "array.opt"
    MR_Integer mercury__hash_table__V_9_10;
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_for_T1_18;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_for_T1_19;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_6_6 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 2672 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_8_9  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_6_6 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 2692 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_9_10  = Max;
#line 247 "array.opt"
}
#line 394 "array.opt"
    {
#line 394 "array.opt"
      return mercury__hash_table__HeadVar__4_4_8 = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__hash_table__V_13_13, mercury__hash_table__A_6_6, mercury__hash_table__X_7_7, mercury__hash_table__V_8_9, mercury__hash_table__V_9_10);
    }
#line 393 "array.opt"
    return mercury__hash_table__HeadVar__4_4_8;
#line 393 "array.opt"
  }
#line 61 "array.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__hash_table__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 580 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 580 "hash_table.m"
  MR_Word mercury__hash_table__AL_6,
#line 580 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_7,
#line 580 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_8,
#line 580 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 580 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14)
#line 580 "hash_table.m"
{
#line 586 "hash_table.m"
  while (MR_TRUE)
#line 586 "hash_table.m"
    {
#line 586 "hash_table.m"
      /* tailcall optimized into a loop */
#line 586 "hash_table.m"
      {
#line 586 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 586 "hash_table.m"
        if ((mercury__hash_table__AL_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_Buckets_14 = mercury__hash_table__STATE_VARIABLE_Buckets_0_13;
#line 586 "hash_table.m"
        else
#line 586 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__AL_6)) == (MR_mktag((MR_Integer) 2))))
#line 590 "hash_table.m"
            {
#line 590 "hash_table.m"
              MR_Word mercury__hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 2)));
#line 590 "hash_table.m"
              MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_15_15;
#line 590 "hash_table.m"
              MR_Box mercury__hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 0));
#line 590 "hash_table.m"
              MR_Box mercury__hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 1));
#line 590 "hash_table.m"
              MR_Integer mercury__hash_table__H_29;
#line 590 "hash_table.m"
              MR_Word mercury__hash_table__AL0_30;
#line 590 "hash_table.m"
              MR_Word mercury__hash_table__AL_31;
#line 590 "hash_table.m"
              MR_Integer mercury__hash_table__Hash_44;
#line 590 "hash_table.m"
              MR_Integer mercury__hash_table__V_45_45;
#line 317 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_7, (MR_Integer) 1)));
#line 317 "hash_table.m"
              MR_Box mercury__hash_table__conv1_Hash_44;
#line 276 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_72;
#line 276 "array.opt"
              MR_Box mercury__hash_table__conv2_Item;
#line 281 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_73;
#line 281 "array.opt"
              MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 317 "hash_table.m"
              {
#line 317 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__HashPred_7), mercury__hash_table__K_18, &mercury__hash_table__conv1_Hash_44);
              }
#line 317 "hash_table.m"
              mercury__hash_table__Hash_44 = ((MR_Integer) mercury__hash_table__conv1_Hash_44);
#line 319 "hash_table.m"
              mercury__hash_table__V_45_45 = (mercury__hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 319 "hash_table.m"
              mercury__hash_table__H_29 = (mercury__hash_table__Hash_44 & mercury__hash_table__V_45_45);
#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  mercury__hash_table__H_29 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2821 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 276 "array.opt"
              mercury__hash_table__AL0_30 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 276 "array.opt"
}
#line 604 "hash_table.m"
              if ((mercury__hash_table__AL0_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "hash_table.m"
                {
#line 603 "hash_table.m"
                  mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "hash_table.m"
                  MR_hl_field(MR_mktag(1), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 603 "hash_table.m"
                  MR_hl_field(MR_mktag(1), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 603 "hash_table.m"
                }
#line 604 "hash_table.m"
              else
#line 604 "hash_table.m"
                if (((MR_tag((MR_Word) mercury__hash_table__AL0_30)) == (MR_mktag((MR_Integer) 2))))
#line 608 "hash_table.m"
                  {
#line 608 "hash_table.m"
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 2) = ((MR_Box) (mercury__hash_table__AL0_30));
#line 608 "hash_table.m"
                  }
#line 604 "hash_table.m"
                else
#line 608 "hash_table.m"
                  {
#line 608 "hash_table.m"
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 2) = ((MR_Box) (mercury__hash_table__AL0_30));
#line 608 "hash_table.m"
                  }
#line 281 "array.opt"
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
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 2890 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 281 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 281 "array.opt"
}
#line 592 "hash_table.m"
              /* direct tailcall eliminated */
#line 592 "hash_table.m"
              {
#line 592 "hash_table.m"
                MR_Word mercury__hash_table__AL__tmp_copy_6 = mercury__hash_table__T_12;
#line 592 "hash_table.m"
                MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__hash_table__STATE_VARIABLE_Buckets_15_15;

#line 592 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 592 "hash_table.m"
                mercury__hash_table__AL_6 = mercury__hash_table__AL__tmp_copy_6;
#line 592 "hash_table.m"
              }
#line 592 "hash_table.m"
              continue;
#line 590 "hash_table.m"
            }
#line 586 "hash_table.m"
          else
#line 587 "hash_table.m"
            {
#line 587 "hash_table.m"
              MR_Box mercury__hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_6, (MR_Integer) 0));
#line 587 "hash_table.m"
              MR_Box mercury__hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_6, (MR_Integer) 1));
#line 587 "hash_table.m"
              MR_Integer mercury__hash_table__H_54;
#line 587 "hash_table.m"
              MR_Word mercury__hash_table__AL0_55;
#line 587 "hash_table.m"
              MR_Word mercury__hash_table__AL_56;
#line 587 "hash_table.m"
              MR_Integer mercury__hash_table__Hash_69;
#line 587 "hash_table.m"
              MR_Integer mercury__hash_table__V_70_70;
#line 317 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_7, (MR_Integer) 1)));
#line 317 "hash_table.m"
              MR_Box mercury__hash_table__conv5_Hash_69;
#line 276 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_74;
#line 276 "array.opt"
              MR_Box mercury__hash_table__conv6_Item;
#line 281 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_75;
#line 281 "array.opt"
              MR_ArrayPtr mercury__hash_table__conv7_Array;

#line 317 "hash_table.m"
              {
#line 317 "hash_table.m"
                mercury__hash_table__func_4(((MR_Box) mercury__hash_table__HashPred_7), mercury__hash_table__K_10, &mercury__hash_table__conv5_Hash_69);
              }
#line 317 "hash_table.m"
              mercury__hash_table__Hash_69 = ((MR_Integer) mercury__hash_table__conv5_Hash_69);
#line 319 "hash_table.m"
              mercury__hash_table__V_70_70 = (mercury__hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 319 "hash_table.m"
              mercury__hash_table__H_54 = (mercury__hash_table__Hash_69 & mercury__hash_table__V_70_70);
#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  mercury__hash_table__H_54 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2975 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv6_Item  = (MR_Box) Item;
#line 276 "array.opt"
              mercury__hash_table__AL0_55 = ((MR_Word) mercury__hash_table__conv6_Item);
#line 276 "array.opt"
}
#line 604 "hash_table.m"
              if ((mercury__hash_table__AL0_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "hash_table.m"
                mercury__hash_table__AL_56 = mercury__hash_table__AL_6;
#line 604 "hash_table.m"
              else
#line 604 "hash_table.m"
                if (((MR_tag((MR_Word) mercury__hash_table__AL0_55)) == (MR_mktag((MR_Integer) 2))))
#line 608 "hash_table.m"
                  {
#line 608 "hash_table.m"
                    mercury__hash_table__AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 0) = mercury__hash_table__K_10;
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 1) = mercury__hash_table__V_11;
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 2) = ((MR_Box) (mercury__hash_table__AL0_55));
#line 608 "hash_table.m"
                  }
#line 604 "hash_table.m"
                else
#line 608 "hash_table.m"
                  {
#line 608 "hash_table.m"
                    mercury__hash_table__AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 0) = mercury__hash_table__K_10;
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 1) = mercury__hash_table__V_11;
#line 608 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 2) = ((MR_Box) (mercury__hash_table__AL0_55));
#line 608 "hash_table.m"
                  }
#line 281 "array.opt"
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
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 3036 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv7_Array );
#line 281 "array.opt"
              *mercury__hash_table__STATE_VARIABLE_Buckets_14 = (MR_ArrayPtr) mercury__hash_table__conv7_Array;
#line 281 "array.opt"
}
#line 587 "hash_table.m"
            }
#line 586 "hash_table.m"
      }
#line 586 "hash_table.m"
      break;
#line 586 "hash_table.m"
    }
#line 580 "hash_table.m"
}

#line 567 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 567 "hash_table.m"
  MR_Integer mercury__hash_table__I_7,
#line 567 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__OldBuckets_8,
#line 567 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_9,
#line 567 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_10,
#line 567 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 567 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14)
#line 567 "hash_table.m"
{
#line 574 "hash_table.m"
  while (MR_TRUE)
#line 574 "hash_table.m"
    {
#line 574 "hash_table.m"
      /* tailcall optimized into a loop */
#line 574 "hash_table.m"
      {
#line 574 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 572 "hash_table.m"
        MR_Integer mercury__hash_table__V_15_15;
#line 254 "array.opt"
        MR_Word mercury__hash_table__TypeInfo_23_28;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__OldBuckets_8 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 3101 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_15  = Max;
#line 254 "array.opt"
}
#line 572 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__I_7 >= mercury__hash_table__V_15_15);
#line 574 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 572 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_Buckets_14 = mercury__hash_table__STATE_VARIABLE_Buckets_0_13;
#line 574 "hash_table.m"
        else
#line 575 "hash_table.m"
          {
#line 575 "hash_table.m"
            MR_Word mercury__hash_table__AL_12;
#line 575 "hash_table.m"
            MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_16_16;
#line 575 "hash_table.m"
            MR_Integer mercury__hash_table__V_17_17;
#line 276 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_25_29;
#line 276 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__OldBuckets_8 , Array);
	Index =  mercury__hash_table__I_7 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 3144 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 276 "array.opt"
            mercury__hash_table__AL_12 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 276 "array.opt"
}
#line 576 "hash_table.m"
            {
#line 576 "hash_table.m"
              mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__hash_table__AL_12, mercury__hash_table__HashPred_9, mercury__hash_table__NumBuckets_10, mercury__hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__hash_table__STATE_VARIABLE_Buckets_16_16);
            }
#line 577 "hash_table.m"
            mercury__hash_table__V_17_17 = (mercury__hash_table__I_7 + (MR_Integer) 1);
#line 577 "hash_table.m"
            /* direct tailcall eliminated */
#line 577 "hash_table.m"
            {
#line 577 "hash_table.m"
              MR_Integer mercury__hash_table__I__tmp_copy_7 = mercury__hash_table__V_17_17;
#line 577 "hash_table.m"
              MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__hash_table__STATE_VARIABLE_Buckets_16_16;

#line 577 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 577 "hash_table.m"
              mercury__hash_table__I_7 = mercury__hash_table__I__tmp_copy_7;
#line 577 "hash_table.m"
            }
#line 577 "hash_table.m"
            continue;
#line 575 "hash_table.m"
          }
#line 574 "hash_table.m"
      }
#line 574 "hash_table.m"
      break;
#line 574 "hash_table.m"
    }
#line 567 "hash_table.m"
}

#line 488 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 488 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 488 "hash_table.m"
  MR_Word mercury__hash_table__AL0_4,
#line 488 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 488 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6)
#line 488 "hash_table.m"
{
#line 496 "hash_table.m"
  {
#line 496 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 496 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
#line 501 "hash_table.m"
      {
#line 501 "hash_table.m"
        MR_Box mercury__hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 0));
#line 501 "hash_table.m"
        MR_Box mercury__hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 1));
#line 501 "hash_table.m"
        MR_Word mercury__hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 2)));

#line 502 "hash_table.m"
        {
#line 502 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__K0_8, mercury__hash_table__K_5);
        }
#line 504 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 503 "hash_table.m"
          {
#line 503 "hash_table.m"
            *mercury__hash_table__AL_6 = mercury__hash_table__T0_10;
#line 503 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 503 "hash_table.m"
          }
#line 504 "hash_table.m"
        else
#line 505 "hash_table.m"
          {
#line 505 "hash_table.m"
            MR_Word mercury__hash_table__T_11;

#line 505 "hash_table.m"
            {
#line 505 "hash_table.m"
              mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__T0_10, mercury__hash_table__K_5, &mercury__hash_table__T_11);
            }
#line 505 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 505 "hash_table.m"
              {
#line 506 "hash_table.m"
                {
#line 506 "hash_table.m"
                  MR_Word base;
#line 506 "hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 506 "hash_table.m"
                  *mercury__hash_table__AL_6 = base;
#line 506 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_8;
#line 506 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V0_9;
#line 506 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T_11));
#line 506 "hash_table.m"
                }
#line 506 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 505 "hash_table.m"
              }
#line 505 "hash_table.m"
          }
#line 501 "hash_table.m"
      }
#line 496 "hash_table.m"
    else
#line 496 "hash_table.m"
      if (((MR_tag((MR_Word) mercury__hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
#line 497 "hash_table.m"
        {
#line 497 "hash_table.m"
          MR_Box mercury__hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_4, (MR_Integer) 0));
#line 497 "hash_table.m"
          MR_Box mercury__hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_4, (MR_Integer) 1));

#line 497 "hash_table.m"
          {
#line 497 "hash_table.m"
            mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__K_5, mercury__hash_table__V_14_14);
          }
#line 497 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 497 "hash_table.m"
            {
#line 499 "hash_table.m"
              *mercury__hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 499 "hash_table.m"
              mercury__hash_table__succeeded = MR_TRUE;
#line 497 "hash_table.m"
            }
#line 497 "hash_table.m"
        }
#line 496 "hash_table.m"
      else
#line 496 "hash_table.m"
        mercury__hash_table__succeeded = MR_FALSE;
#line 496 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 496 "hash_table.m"
  }
#line 488 "hash_table.m"
}

#line 368 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 368 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 368 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 368 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 368 "hash_table.m"
  MR_Box mercury__hash_table__V_7,
#line 368 "hash_table.m"
  MR_Word * mercury__hash_table__AL_8)
#line 368 "hash_table.m"
{
#line 376 "hash_table.m"
  {
#line 376 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 376 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
#line 380 "hash_table.m"
      {
#line 380 "hash_table.m"
        MR_Box mercury__hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 0));
#line 380 "hash_table.m"
        MR_Box mercury__hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 1));
#line 380 "hash_table.m"
        MR_Word mercury__hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 2)));

#line 381 "hash_table.m"
        {
#line 381 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__K0_10, mercury__hash_table__K_6);
        }
#line 383 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 382 "hash_table.m"
          {
#line 382 "hash_table.m"
            {
#line 382 "hash_table.m"
              MR_Word base;
#line 382 "hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 382 "hash_table.m"
              *mercury__hash_table__AL_8 = base;
#line 382 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_10;
#line 382 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V_7;
#line 382 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T0_12));
#line 382 "hash_table.m"
            }
#line 382 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 382 "hash_table.m"
          }
#line 383 "hash_table.m"
        else
#line 384 "hash_table.m"
          {
#line 384 "hash_table.m"
            MR_Word mercury__hash_table__T_13;

#line 384 "hash_table.m"
            {
#line 384 "hash_table.m"
              mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__T0_12, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__T_13);
            }
#line 384 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 384 "hash_table.m"
              {
#line 385 "hash_table.m"
                {
#line 385 "hash_table.m"
                  MR_Word base;
#line 385 "hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 385 "hash_table.m"
                  *mercury__hash_table__AL_8 = base;
#line 385 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_10;
#line 385 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V0_11;
#line 385 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T_13));
#line 385 "hash_table.m"
                }
#line 385 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 384 "hash_table.m"
              }
#line 384 "hash_table.m"
          }
#line 380 "hash_table.m"
      }
#line 376 "hash_table.m"
    else
#line 376 "hash_table.m"
      if (((MR_tag((MR_Word) mercury__hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
#line 377 "hash_table.m"
        {
#line 377 "hash_table.m"
          MR_Box mercury__hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_5, (MR_Integer) 0));
#line 377 "hash_table.m"
          MR_Box mercury__hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_5, (MR_Integer) 1));

#line 377 "hash_table.m"
          {
#line 377 "hash_table.m"
            mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__K_6, mercury__hash_table__V_16_16);
          }
#line 377 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 377 "hash_table.m"
            {
#line 378 "hash_table.m"
              {
#line 378 "hash_table.m"
                MR_Word base;
#line 378 "hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "hash_table.m"
                *mercury__hash_table__AL_8 = base;
#line 378 "hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__hash_table__K_6;
#line 378 "hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__hash_table__V_7;
#line 378 "hash_table.m"
              }
#line 378 "hash_table.m"
              mercury__hash_table__succeeded = MR_TRUE;
#line 377 "hash_table.m"
            }
#line 377 "hash_table.m"
        }
#line 376 "hash_table.m"
      else
#line 376 "hash_table.m"
        mercury__hash_table__succeeded = MR_FALSE;
#line 376 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 376 "hash_table.m"
  }
#line 368 "hash_table.m"
}

#line 130 "list.int"
static void MR_CALL 
mercury__hash_table__foldl__ho17_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__hash_table__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__hash_table__HeadVar__4_4)
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
        MR_bool mercury__hash_table__succeeded;

#line 332 "list.opt"
        if ((mercury__hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Word mercury__hash_table__TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 334 "list.opt"
            MR_Word mercury__hash_table__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "list.opt"
            MR_Word mercury__hash_table__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Integer mercury__hash_table__STATE_VARIABLE_A_15_15_13;
#line 334 "list.opt"
            MR_Integer mercury__hash_table__HUA_36;
#line 334 "list.opt"
            MR_Integer mercury__hash_table__V_64_64;
#line 334 "list.opt"
            MR_Integer mercury__hash_table__V_65_65;
#line 334 "list.opt"
            MR_Integer mercury__hash_table__V_66_66;
#line 334 "list.opt"
            MR_Integer mercury__hash_table__V_67_67;

#line 712 "hash_table.m"
            {
#line 712 "hash_table.m"
              mercury__hash_table__generic_hash_2_p_0(mercury__hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__hash_table__H_10_9)), &mercury__hash_table__HUA_36);
            }
#line 725 "hash_table.m"
            mercury__hash_table__V_64_64 = (mercury__hash_table__HeadVar__3_3 << mercury__hash_table__HUA_36);
#line 163 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__foldl__ho17_4_p_in__list_0

	MR_Integer Bits;

		{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 3529 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_67_67  = Bits;
#line 163 "int.opt"
}
#line 726 "hash_table.m"
            mercury__hash_table__V_66_66 = (mercury__hash_table__V_67_67 - mercury__hash_table__HUA_36);
#line 725 "hash_table.m"
            mercury__hash_table__V_65_65 = (mercury__hash_table__HeadVar__3_3 >> mercury__hash_table__V_66_66);
#line 724 "hash_table.m"
            mercury__hash_table__STATE_VARIABLE_A_15_15_13 = (mercury__hash_table__V_64_64 ^ mercury__hash_table__V_65_65);
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__T_11_10;
#line 336 "list.opt"
              MR_Integer mercury__hash_table__HeadVar__3__tmp_copy_3 = mercury__hash_table__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__hash_table__HeadVar__3_3 = mercury__hash_table__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
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

#line 266 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0(
#line 266 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_39,
#line 266 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_40,
#line 266 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 266 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 266 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__3_3)
#line 266 "hash_table.m"
{
#line 266 "hash_table.m"
  while (MR_TRUE)
#line 266 "hash_table.m"
    {
#line 266 "hash_table.m"
      /* tailcall optimized into a loop */
#line 266 "hash_table.m"
      {
#line 266 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 266 "hash_table.m"
        MR_Integer mercury__hash_table__CastX_37 = (MR_Integer) mercury__hash_table__HeadVar__2_2;
#line 266 "hash_table.m"
        MR_Integer mercury__hash_table__CastY_38 = (MR_Integer) mercury__hash_table__HeadVar__3_3;

#line 266 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__CastX_37 == mercury__hash_table__CastY_38);
#line 266 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 3604 "hash_table.c"
          *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "hash_table.m"
        else
#line 266 "hash_table.m"
          if ((mercury__hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "hash_table.m"
            if ((mercury__hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "hash_table.m"
              *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "hash_table.m"
            else
#line 266 "hash_table.m"
              if (((MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3618 "hash_table.c"
                *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 266 "hash_table.m"
              else
#line 3622 "hash_table.c"
                *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 266 "hash_table.m"
          else
#line 266 "hash_table.m"
            if (((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 266 "hash_table.m"
              {
#line 266 "hash_table.m"
                MR_Word mercury__hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 266 "hash_table.m"
                if ((mercury__hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3639 "hash_table.c"
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 266 "hash_table.m"
                else
#line 266 "hash_table.m"
                  if (((MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 266 "hash_table.m"
                    {
#line 266 "hash_table.m"
                      MR_Box mercury__hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 266 "hash_table.m"
                      MR_Box mercury__hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 266 "hash_table.m"
                      MR_Word mercury__hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 266 "hash_table.m"
                      MR_Word mercury__hash_table__V_35_35;

#line 266 "hash_table.m"
                      {
#line 266 "hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_K_39, &mercury__hash_table__V_35_35, mercury__hash_table__V_45_45, mercury__hash_table__V_32_32);
                      }
#line 3661 "hash_table.c"
                      mercury__hash_table__succeeded = (mercury__hash_table__V_35_35 == (MR_Integer) 0);
#line 266 "hash_table.m"
                      mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 266 "hash_table.m"
                      if (mercury__hash_table__succeeded)
#line 266 "hash_table.m"
                        *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_35_35;
#line 266 "hash_table.m"
                      else
#line 266 "hash_table.m"
                        {
#line 266 "hash_table.m"
                          MR_Word mercury__hash_table__V_36_36;

#line 266 "hash_table.m"
                          {
#line 266 "hash_table.m"
                            mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_V_40, &mercury__hash_table__V_36_36, mercury__hash_table__V_44_44, mercury__hash_table__V_33_33);
                          }
#line 3681 "hash_table.c"
                          mercury__hash_table__succeeded = (mercury__hash_table__V_36_36 == (MR_Integer) 0);
#line 266 "hash_table.m"
                          mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 266 "hash_table.m"
                          if (mercury__hash_table__succeeded)
#line 266 "hash_table.m"
                            *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_36_36;
#line 266 "hash_table.m"
                          else
#line 266 "hash_table.m"
                            {
#line 266 "hash_table.m"
                              /* direct tailcall eliminated */
#line 266 "hash_table.m"
                              {
#line 266 "hash_table.m"
                                MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__V_43_43;
#line 266 "hash_table.m"
                                MR_Word mercury__hash_table__HeadVar__3__tmp_copy_3 = mercury__hash_table__V_34_34;

#line 266 "hash_table.m"
                                mercury__hash_table__HeadVar__3_3 = mercury__hash_table__HeadVar__3__tmp_copy_3;
#line 266 "hash_table.m"
                                mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
#line 266 "hash_table.m"
                              }
#line 266 "hash_table.m"
                              continue;
#line 266 "hash_table.m"
                            }
#line 266 "hash_table.m"
                        }
#line 266 "hash_table.m"
                    }
#line 266 "hash_table.m"
                  else
#line 3718 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 266 "hash_table.m"
              }
#line 266 "hash_table.m"
            else
#line 266 "hash_table.m"
              {
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 266 "hash_table.m"
                if ((mercury__hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3733 "hash_table.c"
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 266 "hash_table.m"
                else
#line 266 "hash_table.m"
                  if (((MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3739 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 266 "hash_table.m"
                  else
#line 266 "hash_table.m"
                    {
#line 266 "hash_table.m"
                      MR_Box mercury__hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 266 "hash_table.m"
                      MR_Box mercury__hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 266 "hash_table.m"
                      MR_Word mercury__hash_table__V_15_15;

#line 266 "hash_table.m"
                      {
#line 266 "hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_K_39, &mercury__hash_table__V_15_15, mercury__hash_table__V_47_47, mercury__hash_table__V_13_13);
                      }
#line 3757 "hash_table.c"
                      mercury__hash_table__succeeded = (mercury__hash_table__V_15_15 == (MR_Integer) 0);
#line 266 "hash_table.m"
                      mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 266 "hash_table.m"
                      if (mercury__hash_table__succeeded)
#line 266 "hash_table.m"
                        *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_15_15;
#line 266 "hash_table.m"
                      else
#line 266 "hash_table.m"
                        {
#line 266 "hash_table.m"
                          mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_V_40, mercury__hash_table__HeadVar__1_1, mercury__hash_table__V_46_46, mercury__hash_table__V_14_14);
#line 266 "hash_table.m"
                          return;
                        }
#line 266 "hash_table.m"
                    }
#line 266 "hash_table.m"
              }
#line 266 "hash_table.m"
      }
#line 266 "hash_table.m"
      break;
#line 266 "hash_table.m"
    }
#line 266 "hash_table.m"
}

#line 266 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0(
#line 266 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_17,
#line 266 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_18,
#line 266 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 266 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2)
#line 266 "hash_table.m"
{
#line 266 "hash_table.m"
  while (MR_TRUE)
#line 266 "hash_table.m"
    {
#line 266 "hash_table.m"
      /* tailcall optimized into a loop */
#line 266 "hash_table.m"
      {
#line 266 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 266 "hash_table.m"
        MR_Integer mercury__hash_table__CastX_15 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 266 "hash_table.m"
        MR_Integer mercury__hash_table__CastY_16 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 266 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__CastX_15 == mercury__hash_table__CastY_16);
#line 266 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 266 "hash_table.m"
          mercury__hash_table__succeeded = MR_TRUE;
#line 266 "hash_table.m"
        else
#line 266 "hash_table.m"
          if ((mercury__hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "hash_table.m"
            {
#line 266 "hash_table.m"
              MR_Integer mercury__hash_table__CastX_3 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 266 "hash_table.m"
              MR_Integer mercury__hash_table__CastY_4 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 266 "hash_table.m"
              mercury__hash_table__succeeded = (mercury__hash_table__CastY_4 == mercury__hash_table__CastX_3);
#line 266 "hash_table.m"
            }
#line 266 "hash_table.m"
          else
#line 266 "hash_table.m"
            if (((MR_tag((MR_Word) mercury__hash_table__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 266 "hash_table.m"
              {
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 266 "hash_table.m"
                MR_Word mercury__hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_12_12;
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_13_13;
#line 266 "hash_table.m"
                MR_Word mercury__hash_table__V_14_14;

#line 266 "hash_table.m"
                mercury__hash_table__succeeded = ((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 266 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 266 "hash_table.m"
                  {
#line 266 "hash_table.m"
                    mercury__hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 266 "hash_table.m"
                    mercury__hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 266 "hash_table.m"
                    mercury__hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 3867 "hash_table.c"
                    {
#line 3869 "hash_table.c"
                      mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_17, mercury__hash_table__V_9_9, mercury__hash_table__V_12_12);
                    }
#line 266 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 266 "hash_table.m"
                      {
#line 3876 "hash_table.c"
                        {
#line 3878 "hash_table.c"
                          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_V_18, mercury__hash_table__V_10_10, mercury__hash_table__V_13_13);
                        }
#line 266 "hash_table.m"
                        if (mercury__hash_table__succeeded)
#line 3883 "hash_table.c"
                          {
#line 3885 "hash_table.c"
                            /* direct tailcall eliminated */
#line 3887 "hash_table.c"
                            {
#line 3889 "hash_table.c"
                              MR_Word mercury__hash_table__HeadVar__1__tmp_copy_1 = mercury__hash_table__V_11_11;
#line 3891 "hash_table.c"
                              MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__V_14_14;

#line 3894 "hash_table.c"
                              mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
#line 3896 "hash_table.c"
                              mercury__hash_table__HeadVar__1_1 = mercury__hash_table__HeadVar__1__tmp_copy_1;
#line 3898 "hash_table.c"
                            }
#line 3900 "hash_table.c"
                            continue;
#line 3902 "hash_table.c"
                          }
#line 266 "hash_table.m"
                      }
#line 266 "hash_table.m"
                  }
#line 266 "hash_table.m"
              }
#line 266 "hash_table.m"
            else
#line 266 "hash_table.m"
              {
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_7_7;
#line 266 "hash_table.m"
                MR_Box mercury__hash_table__V_8_8;

#line 266 "hash_table.m"
                mercury__hash_table__succeeded = ((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 266 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 266 "hash_table.m"
                  {
#line 266 "hash_table.m"
                    mercury__hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 266 "hash_table.m"
                    mercury__hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 3933 "hash_table.c"
                    {
#line 3935 "hash_table.c"
                      mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_17, mercury__hash_table__V_5_5, mercury__hash_table__V_7_7);
                    }
#line 266 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 3940 "hash_table.c"
                      {
#line 3942 "hash_table.c"
                        return mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_V_18, mercury__hash_table__V_6_6, mercury__hash_table__V_8_8);
                      }
#line 266 "hash_table.m"
                  }
#line 266 "hash_table.m"
              }
#line 266 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 266 "hash_table.m"
      }
#line 266 "hash_table.m"
      break;
#line 266 "hash_table.m"
    }
#line 266 "hash_table.m"
}

#line 243 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0(
#line 243 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_17,
#line 243 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_18,
#line 243 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 243 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 243 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__3_3)
#line 243 "hash_table.m"
{
#line 243 "hash_table.m"
  {
#line 243 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 243 "hash_table.m"
    MR_Integer mercury__hash_table__CastX_15 = (MR_Integer) mercury__hash_table__HeadVar__2_2;
#line 243 "hash_table.m"
    MR_Integer mercury__hash_table__CastY_16 = (MR_Integer) mercury__hash_table__HeadVar__3_3;

#line 243 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__CastX_15 == mercury__hash_table__CastY_16);
#line 243 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 3988 "hash_table.c"
      *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 243 "hash_table.m"
    else
#line 243 "hash_table.m"
      {
#line 243 "hash_table.m"
        MR_Integer mercury__hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 243 "hash_table.m"
        MR_Integer mercury__hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "hash_table.m"
        MR_Word mercury__hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 3)));
#line 243 "hash_table.m"
        MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0)));
#line 243 "hash_table.m"
        MR_Integer mercury__hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1)));
#line 243 "hash_table.m"
        MR_Word mercury__hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 243 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 3)));
#line 243 "hash_table.m"
        MR_Word mercury__hash_table__V_12_12;

#line 66 "private_builtin.opt"
        mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 < mercury__hash_table__V_8_8);
#line 69 "private_builtin.opt"
        if (mercury__hash_table__succeeded)
#line 68 "private_builtin.opt"
          mercury__hash_table__V_12_12 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 == mercury__hash_table__V_8_8);
#line 74 "private_builtin.opt"
            if (mercury__hash_table__succeeded)
#line 73 "private_builtin.opt"
              mercury__hash_table__V_12_12 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__hash_table__V_12_12 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 4035 "hash_table.c"
        mercury__hash_table__succeeded = (mercury__hash_table__V_12_12 == (MR_Integer) 0);
#line 243 "hash_table.m"
        mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 243 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 243 "hash_table.m"
          *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_12_12;
#line 243 "hash_table.m"
        else
#line 243 "hash_table.m"
          {
#line 243 "hash_table.m"
            MR_Word mercury__hash_table__V_13_13;

#line 66 "private_builtin.opt"
            mercury__hash_table__succeeded = (mercury__hash_table__V_5_5 < mercury__hash_table__V_9_9);
#line 69 "private_builtin.opt"
            if (mercury__hash_table__succeeded)
#line 68 "private_builtin.opt"
              mercury__hash_table__V_13_13 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__hash_table__succeeded = (mercury__hash_table__V_5_5 == mercury__hash_table__V_9_9);
#line 74 "private_builtin.opt"
                if (mercury__hash_table__succeeded)
#line 73 "private_builtin.opt"
                  mercury__hash_table__V_13_13 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__hash_table__V_13_13 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 4072 "hash_table.c"
            mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 == (MR_Integer) 0);
#line 243 "hash_table.m"
            mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 243 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 243 "hash_table.m"
              *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_13_13;
#line 243 "hash_table.m"
            else
#line 243 "hash_table.m"
              {
#line 243 "hash_table.m"
                MR_Word mercury__hash_table__V_14_14;

#line 243 "hash_table.m"
                {
#line 243 "hash_table.m"
                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__hash_table__V_14_14, (MR_Word) mercury__hash_table__V_6_6, (MR_Word) mercury__hash_table__V_10_10);
                }
#line 4092 "hash_table.c"
                mercury__hash_table__succeeded = (mercury__hash_table__V_14_14 == (MR_Integer) 0);
#line 243 "hash_table.m"
                mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 243 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 243 "hash_table.m"
                  *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_14_14;
#line 243 "hash_table.m"
                else
#line 243 "hash_table.m"
                  {
#line 243 "hash_table.m"
                    MR_Word mercury__hash_table__TypeCtorInfo_25_25 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 243 "hash_table.m"
                    MR_Word mercury__hash_table__TypeInfo_26_26;

#line 4109 "hash_table.c"
                    {
#line 4111 "hash_table.c"
                      mercury__hash_table__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4113 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_25_25));
#line 4115 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_17));
#line 4117 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_18));
#line 4119 "hash_table.c"
                    }
#line 243 "hash_table.m"
                    {
#line 243 "hash_table.m"
                      mercury__array____Compare____array_1_0(mercury__hash_table__TypeInfo_26_26, mercury__hash_table__HeadVar__1_1, (MR_ArrayPtr) mercury__hash_table__V_7_7, (MR_ArrayPtr) mercury__hash_table__V_11_11);
#line 243 "hash_table.m"
                      return;
                    }
#line 243 "hash_table.m"
                  }
#line 243 "hash_table.m"
              }
#line 243 "hash_table.m"
          }
#line 243 "hash_table.m"
      }
#line 243 "hash_table.m"
  }
#line 243 "hash_table.m"
}

#line 243 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0(
#line 243 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_13,
#line 243 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_14,
#line 243 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 243 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2)
#line 243 "hash_table.m"
{
#line 243 "hash_table.m"
  {
#line 243 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 243 "hash_table.m"
    MR_Integer mercury__hash_table__CastX_11 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 243 "hash_table.m"
    MR_Integer mercury__hash_table__CastY_12 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 243 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__CastX_11 == mercury__hash_table__CastY_12);
#line 243 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 243 "hash_table.m"
      mercury__hash_table__succeeded = MR_TRUE;
#line 243 "hash_table.m"
    else
#line 243 "hash_table.m"
      {
#line 243 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_15_15;
#line 243 "hash_table.m"
        MR_Word mercury__hash_table__TypeInfo_16_16;
#line 243 "hash_table.m"
        MR_Integer mercury__hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "hash_table.m"
        MR_Integer mercury__hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "hash_table.m"
        MR_Word mercury__hash_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 243 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));
#line 243 "hash_table.m"
        MR_Integer mercury__hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 243 "hash_table.m"
        MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "hash_table.m"
        MR_Word mercury__hash_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 3)));

#line 4194 "hash_table.c"
        mercury__hash_table__succeeded = (mercury__hash_table__V_3_3 == mercury__hash_table__V_7_7);
#line 243 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 243 "hash_table.m"
          {
#line 4200 "hash_table.c"
            mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 == mercury__hash_table__V_8_8);
#line 243 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 243 "hash_table.m"
              {
#line 4206 "hash_table.c"
                {
#line 4208 "hash_table.c"
                  mercury__hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__hash_table__V_5_5, (MR_Word) mercury__hash_table__V_9_9);
                }
#line 243 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 243 "hash_table.m"
                  {
#line 4215 "hash_table.c"
                    mercury__hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 4217 "hash_table.c"
                    {
#line 4219 "hash_table.c"
                      mercury__hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4221 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_15_15));
#line 4223 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_13));
#line 4225 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_14));
#line 4227 "hash_table.c"
                    }
#line 4229 "hash_table.c"
                    {
#line 4231 "hash_table.c"
                      return mercury__hash_table__succeeded = mercury__array____Unify____array_1_0(mercury__hash_table__TypeInfo_16_16, (MR_ArrayPtr) mercury__hash_table__V_6_6, (MR_ArrayPtr) mercury__hash_table__V_10_10);
                    }
#line 243 "hash_table.m"
                  }
#line 243 "hash_table.m"
              }
#line 243 "hash_table.m"
          }
#line 243 "hash_table.m"
      }
#line 243 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 243 "hash_table.m"
  }
#line 243 "hash_table.m"
}

#line 56 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0(
#line 56 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 56 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 56 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 56 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__3_3)
#line 56 "hash_table.m"
{
#line 56 "hash_table.m"
  {
#line 56 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 56 "hash_table.m"
    MR_Word mercury__hash_table__Cast_HeadVar1_4 = mercury__hash_table__HeadVar__2_2;
#line 56 "hash_table.m"
    MR_Word mercury__hash_table__Cast_HeadVar2_5 = mercury__hash_table__HeadVar__3_3;

#line 56 "hash_table.m"
    {
#line 56 "hash_table.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__hash_table__HeadVar__1_1, (MR_Word) mercury__hash_table__Cast_HeadVar1_4, (MR_Word) mercury__hash_table__Cast_HeadVar2_5);
#line 56 "hash_table.m"
      return;
    }
#line 56 "hash_table.m"
  }
#line 56 "hash_table.m"
}

#line 56 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0(
#line 56 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_5,
#line 56 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 56 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2)
#line 56 "hash_table.m"
{
#line 56 "hash_table.m"
  {
#line 56 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 56 "hash_table.m"
    MR_Word mercury__hash_table__Cast_HeadVar1_3 = mercury__hash_table__HeadVar__1_1;
#line 56 "hash_table.m"
    MR_Word mercury__hash_table__Cast_HeadVar2_4 = mercury__hash_table__HeadVar__2_2;

#line 56 "hash_table.m"
    {
#line 56 "hash_table.m"
      return mercury__hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__hash_table__Cast_HeadVar1_3, (MR_Word) mercury__hash_table__Cast_HeadVar2_4);
    }
#line 56 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 56 "hash_table.m"
  }
#line 56 "hash_table.m"
}

#line 260 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____buckets_2_0(
#line 260 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 260 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 260 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 260 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__2_2,
#line 260 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__3_3)
#line 260 "hash_table.m"
{
#line 260 "hash_table.m"
  {
#line 260 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 260 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 260 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_9_9;
#line 260 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar1_4 = mercury__hash_table__HeadVar__2_2;
#line 260 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar2_5 = mercury__hash_table__HeadVar__3_3;

#line 4343 "hash_table.c"
    {
#line 4345 "hash_table.c"
      mercury__hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4347 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_8_8));
#line 4349 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_6));
#line 4351 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_7));
#line 4353 "hash_table.c"
    }
#line 260 "hash_table.m"
    {
#line 260 "hash_table.m"
      mercury__array____Compare____array_1_0(mercury__hash_table__TypeInfo_9_9, mercury__hash_table__HeadVar__1_1, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar1_4, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar2_5);
#line 260 "hash_table.m"
      return;
    }
#line 260 "hash_table.m"
  }
#line 260 "hash_table.m"
}

#line 260 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0(
#line 260 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_5,
#line 260 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_6,
#line 260 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__1_1,
#line 260 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__2_2)
#line 260 "hash_table.m"
{
#line 260 "hash_table.m"
  {
#line 260 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 260 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 260 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_8_8;
#line 260 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar1_3 = mercury__hash_table__HeadVar__1_1;
#line 260 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar2_4 = mercury__hash_table__HeadVar__2_2;

#line 4393 "hash_table.c"
    {
#line 4395 "hash_table.c"
      mercury__hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4397 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_7_7));
#line 4399 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_5));
#line 4401 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_6));
#line 4403 "hash_table.c"
    }
#line 260 "hash_table.m"
    {
#line 260 "hash_table.m"
      return mercury__hash_table__succeeded = mercury__array____Unify____array_1_0(mercury__hash_table__TypeInfo_8_8, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar1_3, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar2_4);
    }
#line 260 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 260 "hash_table.m"
  }
#line 260 "hash_table.m"
}

#line 759 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_5(
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
#line 764 "hash_table.m"
  while (MR_TRUE)
#line 764 "hash_table.m"
    {
#line 764 "hash_table.m"
      /* tailcall optimized into a loop */
#line 764 "hash_table.m"
      {
#line 764 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 764 "hash_table.m"
        if ((mercury__hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "hash_table.m"
          {
#line 763 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 763 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 763 "hash_table.m"
          }
#line 764 "hash_table.m"
        else
#line 764 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 768 "hash_table.m"
            {
#line 768 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 769 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 769 "hash_table.m"
              {
#line 769 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 768 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 770 "hash_table.m"
                {
#line 770 "hash_table.m"
                  /* direct tailcall eliminated */
#line 770 "hash_table.m"
                  {
#line 770 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 770 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 770 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 770 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 770 "hash_table.m"
                  }
#line 770 "hash_table.m"
                  continue;
#line 770 "hash_table.m"
                }
#line 768 "hash_table.m"
            }
#line 764 "hash_table.m"
          else
#line 765 "hash_table.m"
            {
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 766 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 766 "hash_table.m"
              {
#line 766 "hash_table.m"
                return mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 765 "hash_table.m"
            }
#line 764 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 764 "hash_table.m"
      }
#line 764 "hash_table.m"
      break;
#line 764 "hash_table.m"
    }
#line 759 "hash_table.m"
}

#line 758 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_4(
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
#line 764 "hash_table.m"
  while (MR_TRUE)
#line 764 "hash_table.m"
    {
#line 764 "hash_table.m"
      /* tailcall optimized into a loop */
#line 764 "hash_table.m"
      {
#line 764 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 764 "hash_table.m"
        if ((mercury__hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "hash_table.m"
          {
#line 763 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 763 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 763 "hash_table.m"
          }
#line 764 "hash_table.m"
        else
#line 764 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 768 "hash_table.m"
            {
#line 768 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 769 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 769 "hash_table.m"
              {
#line 769 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 768 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 770 "hash_table.m"
                {
#line 770 "hash_table.m"
                  /* direct tailcall eliminated */
#line 770 "hash_table.m"
                  {
#line 770 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 770 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 770 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 770 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 770 "hash_table.m"
                  }
#line 770 "hash_table.m"
                  continue;
#line 770 "hash_table.m"
                }
#line 768 "hash_table.m"
            }
#line 764 "hash_table.m"
          else
#line 765 "hash_table.m"
            {
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 766 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 766 "hash_table.m"
              {
#line 766 "hash_table.m"
                return mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 765 "hash_table.m"
            }
#line 764 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 764 "hash_table.m"
      }
#line 764 "hash_table.m"
      break;
#line 764 "hash_table.m"
    }
#line 758 "hash_table.m"
}

#line 757 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_3(
#line 757 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 757 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 757 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 757 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 757 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 757 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 757 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 757 "hash_table.m"
{
#line 764 "hash_table.m"
  while (MR_TRUE)
#line 764 "hash_table.m"
    {
#line 764 "hash_table.m"
      /* tailcall optimized into a loop */
#line 764 "hash_table.m"
      {
#line 764 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 764 "hash_table.m"
        if ((mercury__hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "hash_table.m"
          {
#line 763 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 763 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 763 "hash_table.m"
          }
#line 764 "hash_table.m"
        else
#line 764 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 768 "hash_table.m"
            {
#line 768 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 769 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 769 "hash_table.m"
              {
#line 769 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 768 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 770 "hash_table.m"
                {
#line 770 "hash_table.m"
                  /* direct tailcall eliminated */
#line 770 "hash_table.m"
                  {
#line 770 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 770 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 770 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 770 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 770 "hash_table.m"
                  }
#line 770 "hash_table.m"
                  continue;
#line 770 "hash_table.m"
                }
#line 768 "hash_table.m"
            }
#line 764 "hash_table.m"
          else
#line 765 "hash_table.m"
            {
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 766 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 766 "hash_table.m"
              {
#line 766 "hash_table.m"
                return mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 765 "hash_table.m"
            }
#line 764 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 764 "hash_table.m"
      }
#line 764 "hash_table.m"
      break;
#line 764 "hash_table.m"
    }
#line 757 "hash_table.m"
}

#line 756 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_2(
#line 756 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 756 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 756 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 756 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 756 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 756 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 756 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 756 "hash_table.m"
{
#line 764 "hash_table.m"
  while (MR_TRUE)
#line 764 "hash_table.m"
    {
#line 764 "hash_table.m"
      /* tailcall optimized into a loop */
#line 764 "hash_table.m"
      {
#line 764 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 764 "hash_table.m"
        if ((mercury__hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 764 "hash_table.m"
        else
#line 764 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 768 "hash_table.m"
            {
#line 768 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 769 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 769 "hash_table.m"
              {
#line 769 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 770 "hash_table.m"
              /* direct tailcall eliminated */
#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 770 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 770 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 770 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 770 "hash_table.m"
              }
#line 770 "hash_table.m"
              continue;
#line 768 "hash_table.m"
            }
#line 764 "hash_table.m"
          else
#line 765 "hash_table.m"
            {
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 766 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 766 "hash_table.m"
              {
#line 766 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
#line 766 "hash_table.m"
                return;
              }
#line 765 "hash_table.m"
            }
#line 764 "hash_table.m"
      }
#line 764 "hash_table.m"
      break;
#line 764 "hash_table.m"
    }
#line 756 "hash_table.m"
}

#line 755 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_1(
#line 755 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 755 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 755 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 755 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 755 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 755 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 755 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 755 "hash_table.m"
{
#line 764 "hash_table.m"
  while (MR_TRUE)
#line 764 "hash_table.m"
    {
#line 764 "hash_table.m"
      /* tailcall optimized into a loop */
#line 764 "hash_table.m"
      {
#line 764 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 764 "hash_table.m"
        if ((mercury__hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 764 "hash_table.m"
        else
#line 764 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 768 "hash_table.m"
            {
#line 768 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 769 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 769 "hash_table.m"
              {
#line 769 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 770 "hash_table.m"
              /* direct tailcall eliminated */
#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 770 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 770 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 770 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 770 "hash_table.m"
              }
#line 770 "hash_table.m"
              continue;
#line 768 "hash_table.m"
            }
#line 764 "hash_table.m"
          else
#line 765 "hash_table.m"
            {
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 766 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 766 "hash_table.m"
              {
#line 766 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
#line 766 "hash_table.m"
                return;
              }
#line 765 "hash_table.m"
            }
#line 764 "hash_table.m"
      }
#line 764 "hash_table.m"
      break;
#line 764 "hash_table.m"
    }
#line 755 "hash_table.m"
}

#line 754 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_0(
#line 754 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 754 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 754 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 754 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 754 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 754 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 754 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 754 "hash_table.m"
{
#line 764 "hash_table.m"
  while (MR_TRUE)
#line 764 "hash_table.m"
    {
#line 764 "hash_table.m"
      /* tailcall optimized into a loop */
#line 764 "hash_table.m"
      {
#line 764 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 764 "hash_table.m"
        if ((mercury__hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 764 "hash_table.m"
        else
#line 764 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 768 "hash_table.m"
            {
#line 768 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 768 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 769 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 769 "hash_table.m"
              {
#line 769 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 770 "hash_table.m"
              /* direct tailcall eliminated */
#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 770 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 770 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 770 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 770 "hash_table.m"
              }
#line 770 "hash_table.m"
              continue;
#line 768 "hash_table.m"
            }
#line 764 "hash_table.m"
          else
#line 765 "hash_table.m"
            {
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 765 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 766 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 766 "hash_table.m"
              {
#line 766 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
#line 766 "hash_table.m"
                return;
              }
#line 765 "hash_table.m"
            }
#line 764 "hash_table.m"
      }
#line 764 "hash_table.m"
      break;
#line 764 "hash_table.m"
    }
#line 754 "hash_table.m"
}

#line 735 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_f_4_p_1(
#line 735 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 735 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 735 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_17,
#line 735 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 735 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 735 "hash_table.m"
  MR_Box mercury__hash_table__A0_7,
#line 735 "hash_table.m"
  MR_Box * mercury__hash_table__A_8)
#line 735 "hash_table.m"
{
#line 741 "hash_table.m"
  while (MR_TRUE)
#line 741 "hash_table.m"
    {
#line 741 "hash_table.m"
      /* tailcall optimized into a loop */
#line 741 "hash_table.m"
      {
#line 741 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 741 "hash_table.m"
        if ((mercury__hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "hash_table.m"
          *mercury__hash_table__A_8 = mercury__hash_table__A0_7;
#line 741 "hash_table.m"
        else
#line 741 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 745 "hash_table.m"
            {
#line 745 "hash_table.m"
              MR_Word mercury__hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 745 "hash_table.m"
              MR_Box mercury__hash_table__A1_12;
#line 745 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 745 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 746 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 746 "hash_table.m"
              {
#line 746 "hash_table.m"
                mercury__hash_table__A1_12 = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_13, mercury__hash_table__V_14, mercury__hash_table__A0_7);
              }
#line 747 "hash_table.m"
              /* direct tailcall eliminated */
#line 747 "hash_table.m"
              {
#line 747 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_11;
#line 747 "hash_table.m"
                MR_Box mercury__hash_table__A0__tmp_copy_7 = mercury__hash_table__A1_12;

#line 747 "hash_table.m"
                mercury__hash_table__A0_7 = mercury__hash_table__A0__tmp_copy_7;
#line 747 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 747 "hash_table.m"
              }
#line 747 "hash_table.m"
              continue;
#line 745 "hash_table.m"
            }
#line 741 "hash_table.m"
          else
#line 742 "hash_table.m"
            {
#line 742 "hash_table.m"
              MR_Box mercury__hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 742 "hash_table.m"
              MR_Box mercury__hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 743 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 743 "hash_table.m"
              {
#line 743 "hash_table.m"
                *mercury__hash_table__A_8 = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_9, mercury__hash_table__V_10, mercury__hash_table__A0_7);
              }
#line 742 "hash_table.m"
            }
#line 741 "hash_table.m"
      }
#line 741 "hash_table.m"
      break;
#line 741 "hash_table.m"
    }
#line 735 "hash_table.m"
}

#line 734 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_f_4_p_0(
#line 734 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 734 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 734 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_17,
#line 734 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 734 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 734 "hash_table.m"
  MR_Box mercury__hash_table__A0_7,
#line 734 "hash_table.m"
  MR_Box * mercury__hash_table__A_8)
#line 734 "hash_table.m"
{
#line 741 "hash_table.m"
  while (MR_TRUE)
#line 741 "hash_table.m"
    {
#line 741 "hash_table.m"
      /* tailcall optimized into a loop */
#line 741 "hash_table.m"
      {
#line 741 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 741 "hash_table.m"
        if ((mercury__hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "hash_table.m"
          *mercury__hash_table__A_8 = mercury__hash_table__A0_7;
#line 741 "hash_table.m"
        else
#line 741 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 745 "hash_table.m"
            {
#line 745 "hash_table.m"
              MR_Word mercury__hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 745 "hash_table.m"
              MR_Box mercury__hash_table__A1_12;
#line 745 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 745 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 746 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 746 "hash_table.m"
              {
#line 746 "hash_table.m"
                mercury__hash_table__A1_12 = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_13, mercury__hash_table__V_14, mercury__hash_table__A0_7);
              }
#line 747 "hash_table.m"
              /* direct tailcall eliminated */
#line 747 "hash_table.m"
              {
#line 747 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_11;
#line 747 "hash_table.m"
                MR_Box mercury__hash_table__A0__tmp_copy_7 = mercury__hash_table__A1_12;

#line 747 "hash_table.m"
                mercury__hash_table__A0_7 = mercury__hash_table__A0__tmp_copy_7;
#line 747 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 747 "hash_table.m"
              }
#line 747 "hash_table.m"
              continue;
#line 745 "hash_table.m"
            }
#line 741 "hash_table.m"
          else
#line 742 "hash_table.m"
            {
#line 742 "hash_table.m"
              MR_Box mercury__hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 742 "hash_table.m"
              MR_Box mercury__hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 743 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 743 "hash_table.m"
              {
#line 743 "hash_table.m"
                *mercury__hash_table__A_8 = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_9, mercury__hash_table__V_10, mercury__hash_table__A0_7);
              }
#line 742 "hash_table.m"
            }
#line 741 "hash_table.m"
      }
#line 741 "hash_table.m"
      break;
#line 741 "hash_table.m"
    }
#line 734 "hash_table.m"
}

#line 554 "hash_table.m"
static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
#line 554 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_20,
#line 554 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_21,
#line 554 "hash_table.m"
  MR_Integer mercury__hash_table__NumOccupants_6,
#line 554 "hash_table.m"
  MR_Integer mercury__hash_table__MaxOccupants0_7,
#line 554 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_8,
#line 554 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__Buckets0_9)
#line 554 "hash_table.m"
{
#line 559 "hash_table.m"
  {
#line 559 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 559 "hash_table.m"
    MR_Word mercury__hash_table__HT_10;
#line 559 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 559 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_23_23;
#line 559 "hash_table.m"
    MR_Integer mercury__hash_table__NumBuckets0_11;
#line 559 "hash_table.m"
    MR_Integer mercury__hash_table__NumBuckets_12;
#line 559 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_13;
#line 559 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets1_14;
#line 559 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_15;
#line 559 "hash_table.m"
    MR_Word mercury__hash_table__V_18_18;
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_26;
#line 563 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__conv0_Buckets1_14;

#line 5325 "hash_table.c"
    {
#line 5327 "hash_table.c"
      mercury__hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5329 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_22_22));
#line 5331 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_20));
#line 5333 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_21));
#line 5335 "hash_table.c"
    }
#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__expand_4_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 5350 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__NumBuckets0_11  = Max;
#line 254 "array.opt"
}
#line 561 "hash_table.m"
    mercury__hash_table__NumBuckets_12 = (mercury__hash_table__NumBuckets0_11 + mercury__hash_table__NumBuckets0_11);
#line 562 "hash_table.m"
    mercury__hash_table__MaxOccupants_13 = (mercury__hash_table__MaxOccupants0_7 + mercury__hash_table__MaxOccupants0_7);
#line 563 "hash_table.m"
    mercury__hash_table__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "hash_table.m"
    {
#line 563 "hash_table.m"
      mercury__array__init_3_p_0(mercury__hash_table__TypeInfo_23_23, mercury__hash_table__NumBuckets_12, ((MR_Box) (mercury__hash_table__V_18_18)), &mercury__hash_table__conv0_Buckets1_14);
    }
#line 563 "hash_table.m"
    mercury__hash_table__Buckets1_14 = (MR_ArrayPtr) mercury__hash_table__conv0_Buckets1_14;
#line 564 "hash_table.m"
    {
#line 564 "hash_table.m"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0((MR_Integer) 0, mercury__hash_table__Buckets0_9, mercury__hash_table__HashPred_8, mercury__hash_table__NumBuckets_12, mercury__hash_table__Buckets1_14, &mercury__hash_table__Buckets_15);
    }
#line 565 "hash_table.m"
    {
#line 565 "hash_table.m"
      mercury__hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 565 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_6));
#line 565 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_13));
#line 565 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 2) = ((MR_Box) (mercury__hash_table__HashPred_8));
#line 565 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 3) = ((MR_Box) (mercury__hash_table__Buckets_15));
#line 565 "hash_table.m"
    }
#line 559 "hash_table.m"
    return mercury__hash_table__HT_10;
#line 559 "hash_table.m"
  }
#line 554 "hash_table.m"
}

#line 534 "hash_table.m"
void MR_CALL 
mercury__hash_table__from_assoc_list_2_3_p_0(
#line 534 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 534 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 534 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 534 "hash_table.m"
  MR_Word mercury__hash_table__STATE_VARIABLE_HT_0_2,
#line 534 "hash_table.m"
  MR_Word * mercury__hash_table__STATE_VARIABLE_HT_3)
#line 534 "hash_table.m"
{
#line 537 "hash_table.m"
  while (MR_TRUE)
#line 537 "hash_table.m"
    {
#line 537 "hash_table.m"
      /* tailcall optimized into a loop */
#line 537 "hash_table.m"
      {
#line 537 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 537 "hash_table.m"
        if ((mercury__hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_HT_3 = mercury__hash_table__STATE_VARIABLE_HT_0_2;
#line 537 "hash_table.m"
        else
#line 538 "hash_table.m"
          {
#line 538 "hash_table.m"
            MR_Box mercury__hash_table__K_7;
#line 538 "hash_table.m"
            MR_Box mercury__hash_table__V_8;
#line 538 "hash_table.m"
            MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 538 "hash_table.m"
            MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 538 "hash_table.m"
            MR_Word mercury__hash_table__STATE_VARIABLE_HT_14_14;

#line 538 "hash_table.m"
            mercury__hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__hash_table__V_13_13, (MR_Integer) 0));
#line 538 "hash_table.m"
            mercury__hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__hash_table__V_13_13, (MR_Integer) 1));
#line 364 "hash_table.m"
            {
#line 364 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_HT_14_14 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__STATE_VARIABLE_HT_0_2, mercury__hash_table__K_7, mercury__hash_table__V_8);
            }
#line 540 "hash_table.m"
            /* direct tailcall eliminated */
#line 540 "hash_table.m"
            {
#line 540 "hash_table.m"
              MR_Word mercury__hash_table__HeadVar__1__tmp_copy_1 = mercury__hash_table__T_9;
#line 540 "hash_table.m"
              MR_Word mercury__hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__hash_table__STATE_VARIABLE_HT_14_14;

#line 540 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_HT_0_2 = mercury__hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
#line 540 "hash_table.m"
              mercury__hash_table__HeadVar__1_1 = mercury__hash_table__HeadVar__1__tmp_copy_1;
#line 540 "hash_table.m"
            }
#line 540 "hash_table.m"
            continue;
#line 538 "hash_table.m"
          }
#line 537 "hash_table.m"
      }
#line 537 "hash_table.m"
      break;
#line 537 "hash_table.m"
    }
#line 534 "hash_table.m"
}

#line 515 "hash_table.m"
void MR_CALL 
mercury__hash_table__to_assoc_list_2_3_p_0(
#line 515 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 515 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 515 "hash_table.m"
  MR_Word mercury__hash_table__X_4,
#line 515 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 515 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6)
#line 515 "hash_table.m"
{
#line 522 "hash_table.m"
  while (MR_TRUE)
#line 522 "hash_table.m"
    {
#line 522 "hash_table.m"
      /* tailcall optimized into a loop */
#line 522 "hash_table.m"
      {
#line 522 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 522 "hash_table.m"
        if ((mercury__hash_table__X_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "hash_table.m"
          *mercury__hash_table__AL_6 = mercury__hash_table__AL0_5;
#line 522 "hash_table.m"
        else
#line 522 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__X_4)) == (MR_mktag((MR_Integer) 2))))
#line 526 "hash_table.m"
            {
#line 526 "hash_table.m"
              MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 2)));
#line 526 "hash_table.m"
              MR_Word mercury__hash_table__AL1_10;
#line 526 "hash_table.m"
              MR_Word mercury__hash_table__V_11_11;
#line 526 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 0));
#line 526 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 1));

#line 527 "hash_table.m"
              {
#line 527 "hash_table.m"
                mercury__hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_11_11, 0) = mercury__hash_table__K_13;
#line 527 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_11_11, 1) = mercury__hash_table__V_14;
#line 527 "hash_table.m"
              }
#line 527 "hash_table.m"
              {
#line 527 "hash_table.m"
                mercury__hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL1_10, 0) = ((MR_Box) (mercury__hash_table__V_11_11));
#line 527 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL1_10, 1) = ((MR_Box) (mercury__hash_table__AL0_5));
#line 527 "hash_table.m"
              }
#line 528 "hash_table.m"
              /* direct tailcall eliminated */
#line 528 "hash_table.m"
              {
#line 528 "hash_table.m"
                MR_Word mercury__hash_table__X__tmp_copy_4 = mercury__hash_table__T_9;
#line 528 "hash_table.m"
                MR_Word mercury__hash_table__AL0__tmp_copy_5 = mercury__hash_table__AL1_10;

#line 528 "hash_table.m"
                mercury__hash_table__AL0_5 = mercury__hash_table__AL0__tmp_copy_5;
#line 528 "hash_table.m"
                mercury__hash_table__X_4 = mercury__hash_table__X__tmp_copy_4;
#line 528 "hash_table.m"
              }
#line 528 "hash_table.m"
              continue;
#line 526 "hash_table.m"
            }
#line 522 "hash_table.m"
          else
#line 523 "hash_table.m"
            {
#line 523 "hash_table.m"
              MR_Box mercury__hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__X_4, (MR_Integer) 0));
#line 523 "hash_table.m"
              MR_Box mercury__hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__X_4, (MR_Integer) 1));
#line 523 "hash_table.m"
              MR_Word mercury__hash_table__V_12_12;

#line 524 "hash_table.m"
              {
#line 524 "hash_table.m"
                mercury__hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_12_12, 0) = mercury__hash_table__K_7;
#line 524 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_12_12, 1) = mercury__hash_table__V_8;
#line 524 "hash_table.m"
              }
#line 524 "hash_table.m"
              {
#line 524 "hash_table.m"
                MR_Word base;
#line 524 "hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "hash_table.m"
                *mercury__hash_table__AL_6 = base;
#line 524 "hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__hash_table__V_12_12));
#line 524 "hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__hash_table__AL0_5));
#line 524 "hash_table.m"
              }
#line 523 "hash_table.m"
            }
#line 522 "hash_table.m"
      }
#line 522 "hash_table.m"
      break;
#line 522 "hash_table.m"
    }
#line 515 "hash_table.m"
}

#line 398 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__alist_search_3_p_0(
#line 398 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_10,
#line 398 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_11,
#line 398 "hash_table.m"
  MR_Word mercury__hash_table__AL_4,
#line 398 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 398 "hash_table.m"
  MR_Box * mercury__hash_table__V_6)
#line 398 "hash_table.m"
{
#line 405 "hash_table.m"
  while (MR_TRUE)
#line 405 "hash_table.m"
    {
#line 405 "hash_table.m"
      /* tailcall optimized into a loop */
#line 405 "hash_table.m"
      {
#line 405 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 405 "hash_table.m"
        if (((MR_tag((MR_Word) mercury__hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
#line 408 "hash_table.m"
          {
#line 408 "hash_table.m"
            MR_Box mercury__hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 0));
#line 408 "hash_table.m"
            MR_Box mercury__hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 1));
#line 408 "hash_table.m"
            MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 2)));

#line 409 "hash_table.m"
            {
#line 409 "hash_table.m"
              mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_10, mercury__hash_table__HK_7, mercury__hash_table__K_5);
            }
#line 411 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 410 "hash_table.m"
              {
#line 410 "hash_table.m"
                *mercury__hash_table__V_6 = mercury__hash_table__HV_8;
#line 410 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 410 "hash_table.m"
              }
#line 411 "hash_table.m"
            else
#line 412 "hash_table.m"
              {
#line 412 "hash_table.m"
                /* direct tailcall eliminated */
#line 412 "hash_table.m"
                {
#line 412 "hash_table.m"
                  MR_Word mercury__hash_table__AL__tmp_copy_4 = mercury__hash_table__T_9;

#line 412 "hash_table.m"
                  mercury__hash_table__AL_4 = mercury__hash_table__AL__tmp_copy_4;
#line 412 "hash_table.m"
                }
#line 412 "hash_table.m"
                continue;
#line 412 "hash_table.m"
              }
#line 408 "hash_table.m"
          }
#line 405 "hash_table.m"
        else
#line 405 "hash_table.m"
          if (((MR_tag((MR_Word) mercury__hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
#line 406 "hash_table.m"
            {
#line 406 "hash_table.m"
              MR_Box mercury__hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_4, (MR_Integer) 0));

#line 406 "hash_table.m"
              *mercury__hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_4, (MR_Integer) 1));
#line 406 "hash_table.m"
              {
#line 406 "hash_table.m"
                return mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_10, mercury__hash_table__K_5, mercury__hash_table__V_12_12);
              }
#line 406 "hash_table.m"
            }
#line 405 "hash_table.m"
          else
#line 405 "hash_table.m"
            mercury__hash_table__succeeded = MR_FALSE;
#line 405 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 405 "hash_table.m"
      }
#line 405 "hash_table.m"
      break;
#line 405 "hash_table.m"
    }
#line 398 "hash_table.m"
}

#line 312 "hash_table.m"
void MR_CALL 
mercury__hash_table__find_slot_2_4_p_0(
#line 312 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 312 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_5,
#line 312 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 312 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_7,
#line 312 "hash_table.m"
  MR_Integer * mercury__hash_table__H_8)
#line 312 "hash_table.m"
{
#line 316 "hash_table.m"
  {
#line 316 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 316 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_9;
#line 316 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_10;
#line 317 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_5, (MR_Integer) 1)));
#line 317 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_9;

#line 317 "hash_table.m"
    {
#line 317 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__HashPred_5), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_9);
    }
#line 317 "hash_table.m"
    mercury__hash_table__Hash_9 = ((MR_Integer) mercury__hash_table__conv1_Hash_9);
#line 319 "hash_table.m"
    mercury__hash_table__V_10_10 = (mercury__hash_table__NumBuckets_7 - (MR_Integer) 1);
#line 319 "hash_table.m"
    *mercury__hash_table__H_8 = (mercury__hash_table__Hash_9 & mercury__hash_table__V_10_10);
#line 316 "hash_table.m"
  }
#line 312 "hash_table.m"
}

#line 305 "hash_table.m"
MR_Integer MR_CALL 
mercury__hash_table__find_slot_2_f_0(
#line 305 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_9,
#line 305 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_10,
#line 305 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 305 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 305 "hash_table.m"
{
#line 309 "hash_table.m"
  {
#line 309 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 309 "hash_table.m"
    MR_Integer mercury__hash_table__H_6;
#line 309 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 309 "hash_table.m"
    MR_Integer mercury__hash_table__V_8_8;
#line 309 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 309 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_27;
#line 309 "hash_table.m"
    MR_Integer mercury__hash_table__V_28_28;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_30;
#line 317 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_27;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__find_slot_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_13_13 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 5813 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_8_8  = Max;
#line 254 "array.opt"
}
#line 317 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_7_7, (MR_Integer) 1)));
#line 317 "hash_table.m"
    {
#line 317 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_7_7), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_27);
    }
#line 317 "hash_table.m"
    mercury__hash_table__Hash_27 = ((MR_Integer) mercury__hash_table__conv1_Hash_27);
#line 319 "hash_table.m"
    mercury__hash_table__V_28_28 = (mercury__hash_table__V_8_8 - (MR_Integer) 1);
#line 319 "hash_table.m"
    mercury__hash_table__H_6 = (mercury__hash_table__Hash_27 & mercury__hash_table__V_28_28);
#line 309 "hash_table.m"
    return mercury__hash_table__H_6;
#line 309 "hash_table.m"
  }
#line 305 "hash_table.m"
}

#line 217 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_5(
#line 217 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 217 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 217 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 217 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 217 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 217 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 217 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 217 "hash_table.m"
{
#line 750 "hash_table.m"
  {
#line 750 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 750 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 751 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 5894 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 5914 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      return mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 750 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 750 "hash_table.m"
  }
#line 217 "hash_table.m"
}

#line 215 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_4(
#line 215 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 215 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 215 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 215 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 215 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 215 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 215 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 215 "hash_table.m"
{
#line 750 "hash_table.m"
  {
#line 750 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 750 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 751 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 5987 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 6007 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      return mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 750 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 750 "hash_table.m"
  }
#line 215 "hash_table.m"
}

#line 213 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_3(
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 213 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 213 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 213 "hash_table.m"
{
#line 750 "hash_table.m"
  {
#line 750 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 750 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 751 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 6080 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 6100 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      return mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 750 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 750 "hash_table.m"
  }
#line 213 "hash_table.m"
}

#line 211 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_2(
#line 211 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 211 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 211 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 211 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 211 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 211 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 211 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 211 "hash_table.m"
{
#line 750 "hash_table.m"
  {
#line 750 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 750 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 751 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 6173 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 6193 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
#line 400 "array.opt"
      return;
    }
#line 750 "hash_table.m"
  }
#line 211 "hash_table.m"
}

#line 209 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_1(
#line 209 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 209 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 209 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 209 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 209 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 209 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 209 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 209 "hash_table.m"
{
#line 750 "hash_table.m"
  {
#line 750 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 750 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 751 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 6266 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 6286 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
#line 400 "array.opt"
      return;
    }
#line 750 "hash_table.m"
  }
#line 209 "hash_table.m"
}

#line 207 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_0(
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 207 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 207 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 207 "hash_table.m"
{
#line 750 "hash_table.m"
  {
#line 750 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 750 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 750 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 751 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 751 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 6359 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 6379 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
#line 400 "array.opt"
      return;
    }
#line 750 "hash_table.m"
  }
#line 207 "hash_table.m"
}

#line 202 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__fold_3_f_1(
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_15,
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_16,
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 202 "hash_table.m"
  MR_Box mercury__hash_table__X0_7)
#line 202 "hash_table.m"
{
#line 730 "hash_table.m"
  {
#line 730 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 730 "hash_table.m"
    MR_Box mercury__hash_table__X_8;
#line 730 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 730 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 730 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 731 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 731 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 731 "hash_table.m"
    MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_33;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_34;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 6452 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 6472 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__TypeInfo_for_V_15, mercury__hash_table__TypeInfo_for_T_16, mercury__hash_table__F_5, mercury__hash_table__V_10_10, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__X0_7, &mercury__hash_table__X_8);
    }
#line 730 "hash_table.m"
    return mercury__hash_table__X_8;
#line 730 "hash_table.m"
  }
#line 202 "hash_table.m"
}

#line 201 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__fold_3_f_0(
#line 201 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 201 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_15,
#line 201 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_16,
#line 201 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 201 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 201 "hash_table.m"
  MR_Box mercury__hash_table__X0_7)
#line 201 "hash_table.m"
{
#line 730 "hash_table.m"
  {
#line 730 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 730 "hash_table.m"
    MR_Box mercury__hash_table__X_8;
#line 730 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 730 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 730 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 731 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 731 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 731 "hash_table.m"
    MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_33;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_34;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 6545 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 6565 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__TypeInfo_for_V_15, mercury__hash_table__TypeInfo_for_T_16, mercury__hash_table__F_5, mercury__hash_table__V_10_10, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__X0_7, &mercury__hash_table__X_8);
    }
#line 730 "hash_table.m"
    return mercury__hash_table__X_8;
#line 730 "hash_table.m"
  }
#line 201 "hash_table.m"
}

#line 195 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_2_f_0(
#line 195 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 195 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 195 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_4,
#line 195 "hash_table.m"
  MR_Word mercury__hash_table__AList_5)
#line 195 "hash_table.m"
{
#line 531 "hash_table.m"
  {
#line 531 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 531 "hash_table.m"
    MR_Word mercury__hash_table__HT_6;
#line 531 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7;

#line 295 "hash_table.m"
    {
#line 295 "hash_table.m"
      mercury__hash_table__V_7_7 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 532 "hash_table.m"
    {
#line 532 "hash_table.m"
      mercury__hash_table__from_assoc_list_2_3_p_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__AList_5, mercury__hash_table__V_7_7, &mercury__hash_table__HT_6);
    }
#line 531 "hash_table.m"
    return mercury__hash_table__HT_6;
#line 531 "hash_table.m"
  }
#line 195 "hash_table.m"
}

#line 190 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__to_assoc_list_1_f_0(
#line 190 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_11,
#line 190 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_12,
#line 190 "hash_table.m"
  MR_Word mercury__hash_table__HT_3)
#line 190 "hash_table.m"
{
#line 512 "hash_table.m"
  {
#line 512 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 512 "hash_table.m"
    MR_Word mercury__hash_table__AL_4;
#line 512 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 3)));
#line 512 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 512 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 513 "hash_table.m"
    MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 0)));
#line 513 "hash_table.m"
    MR_Integer mercury__hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 1)));
#line 513 "hash_table.m"
    MR_Word mercury__hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 2)));
#line 239 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_17_35;
#line 247 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_17_36;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_6_6 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 6673 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_6_6 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 6693 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 247 "array.opt"
}
#line 400 "array.opt"
    {
#line 400 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_11, mercury__hash_table__TypeInfo_for_V_12, mercury__hash_table__V_6_6, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__V_7_7, &mercury__hash_table__AL_4);
    }
#line 512 "hash_table.m"
    return mercury__hash_table__AL_4;
#line 512 "hash_table.m"
  }
#line 190 "hash_table.m"
}

#line 184 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__search_3_p_0(
#line 184 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 184 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 184 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 184 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 184 "hash_table.m"
  MR_Box * mercury__hash_table__HeadVar__3_3)
#line 184 "hash_table.m"
{
#line 391 "hash_table.m"
  {
#line 391 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 391 "hash_table.m"
    {
#line 391 "hash_table.m"
      return mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_4, mercury__hash_table__K_5, mercury__hash_table__HeadVar__3_3);
    }
#line 391 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 391 "hash_table.m"
  }
#line 184 "hash_table.m"
}

#line 180 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__search_2_f_0(
#line 180 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_13,
#line 180 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_14,
#line 180 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 180 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 180 "hash_table.m"
  MR_Box * mercury__hash_table__V_6)
#line 180 "hash_table.m"
{
#line 393 "hash_table.m"
  {
#line 393 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 393 "hash_table.m"
    MR_Integer mercury__hash_table__H_7;
#line 393 "hash_table.m"
    MR_Word mercury__hash_table__AL_8;
#line 393 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_9_9;
#line 393 "hash_table.m"
    MR_Word mercury__hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 393 "hash_table.m"
    MR_Integer mercury__hash_table__V_21_21;
#line 393 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 393 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_38;
#line 393 "hash_table.m"
    MR_Integer mercury__hash_table__V_39_39;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_41;
#line 317 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_38;
#line 395 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_10;
#line 395 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11;
#line 395 "hash_table.m"
    MR_Word mercury__hash_table__V_12_12;
#line 276 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_16_42;
#line 276 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_24_24 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 6813 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_21  = Max;
#line 254 "array.opt"
}
#line 317 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_20_20, (MR_Integer) 1)));
#line 317 "hash_table.m"
    {
#line 317 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_20_20), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_38);
    }
#line 317 "hash_table.m"
    mercury__hash_table__Hash_38 = ((MR_Integer) mercury__hash_table__conv1_Hash_38);
#line 319 "hash_table.m"
    mercury__hash_table__V_39_39 = (mercury__hash_table__V_21_21 - (MR_Integer) 1);
#line 319 "hash_table.m"
    mercury__hash_table__H_7 = (mercury__hash_table__Hash_38 & mercury__hash_table__V_39_39);
#line 395 "hash_table.m"
    mercury__hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 395 "hash_table.m"
    mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 395 "hash_table.m"
    mercury__hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 395 "hash_table.m"
    mercury__hash_table__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_9_9 , Array);
	Index =  mercury__hash_table__H_7 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 6856 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 276 "array.opt"
    mercury__hash_table__AL_8 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 276 "array.opt"
}
#line 396 "hash_table.m"
    {
#line 396 "hash_table.m"
      return mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_13, mercury__hash_table__TypeInfo_for_V_14, mercury__hash_table__AL_8, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 393 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 393 "hash_table.m"
  }
#line 180 "hash_table.m"
}

#line 174 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__elem_2_f_0(
#line 174 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 174 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 174 "hash_table.m"
  MR_Box mercury__hash_table__K_4,
#line 174 "hash_table.m"
  MR_Word mercury__hash_table__HT_5)
#line 174 "hash_table.m"
{
#line 464 "hash_table.m"
  {
#line 464 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 464 "hash_table.m"
    MR_Box mercury__hash_table__HeadVar__3_3;
#line 464 "hash_table.m"
    MR_Box mercury__hash_table__V_10;

#line 465 "hash_table.m"
    {
#line 465 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_5, mercury__hash_table__K_4, &mercury__hash_table__V_10);
    }
#line 464 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 464 "hash_table.m"
      mercury__hash_table__HeadVar__3_3 = mercury__hash_table__V_10;
#line 464 "hash_table.m"
    else
#line 467 "hash_table.m"
      {
#line 467 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_11_13 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 467 "hash_table.m"
        MR_Word mercury__hash_table__V_11_11 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

#line 464 "hash_table.m"
        {
#line 464 "hash_table.m"
          return mercury__hash_table__HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__hash_table__TypeCtorInfo_11_13, mercury__hash_table__TypeInfo_for_V_7, ((MR_Box) (mercury__hash_table__V_11_11)));
        }
#line 467 "hash_table.m"
      }
#line 464 "hash_table.m"
    return mercury__hash_table__HeadVar__3_3;
#line 464 "hash_table.m"
  }
#line 174 "hash_table.m"
}

#line 167 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__lookup_2_f_0(
#line 167 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_9,
#line 167 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_10,
#line 167 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 167 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 167 "hash_table.m"
{
#line 464 "hash_table.m"
  {
#line 464 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 464 "hash_table.m"
    MR_Box mercury__hash_table__HeadVar__3_3;
#line 464 "hash_table.m"
    MR_Box mercury__hash_table__V_6;

#line 465 "hash_table.m"
    {
#line 465 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_9, mercury__hash_table__TypeInfo_for_V_10, mercury__hash_table__HT_4, mercury__hash_table__K_5, &mercury__hash_table__V_6);
    }
#line 464 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 464 "hash_table.m"
      mercury__hash_table__HeadVar__3_3 = mercury__hash_table__V_6;
#line 464 "hash_table.m"
    else
#line 467 "hash_table.m"
      {
#line 467 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_11_11 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 467 "hash_table.m"
        MR_Word mercury__hash_table__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

#line 464 "hash_table.m"
        {
#line 464 "hash_table.m"
          return mercury__hash_table__HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__hash_table__TypeCtorInfo_11_11, mercury__hash_table__TypeInfo_for_V_10, ((MR_Box) (mercury__hash_table__V_7_7)));
        }
#line 467 "hash_table.m"
      }
#line 464 "hash_table.m"
    return mercury__hash_table__HeadVar__3_3;
#line 464 "hash_table.m"
  }
#line 167 "hash_table.m"
}

#line 160 "hash_table.m"
void MR_CALL 
mercury__hash_table__delete_3_p_0(
#line 160 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 160 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 160 "hash_table.m"
  MR_Box mercury__hash_table__K_4,
#line 160 "hash_table.m"
  MR_Word mercury__hash_table__HT_5,
#line 160 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__3_3)
#line 160 "hash_table.m"
{
#line 486 "hash_table.m"
  {
#line 486 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 486 "hash_table.m"
    {
#line 486 "hash_table.m"
      *mercury__hash_table__HeadVar__3_3 = mercury__hash_table__delete_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_5, mercury__hash_table__K_4);
    }
#line 486 "hash_table.m"
  }
#line 160 "hash_table.m"
}

#line 158 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__delete_2_f_0(
#line 158 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_21,
#line 158 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_22,
#line 158 "hash_table.m"
  MR_Word mercury__hash_table__HT0_4,
#line 158 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 158 "hash_table.m"
{
#line 474 "hash_table.m"
  {
#line 474 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 474 "hash_table.m"
    MR_Word mercury__hash_table__HT_6;
#line 474 "hash_table.m"
    MR_Integer mercury__hash_table__H_7;
#line 474 "hash_table.m"
    MR_Word mercury__hash_table__AL0_8;
#line 474 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_16_16;
#line 474 "hash_table.m"
    MR_Word mercury__hash_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 474 "hash_table.m"
    MR_Integer mercury__hash_table__V_29_29;
#line 474 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 474 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_46;
#line 474 "hash_table.m"
    MR_Integer mercury__hash_table__V_47_47;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_49;
#line 317 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_46;
#line 476 "hash_table.m"
    MR_Integer mercury__hash_table__V_18_18;
#line 476 "hash_table.m"
    MR_Integer mercury__hash_table__V_19_19;
#line 476 "hash_table.m"
    MR_Word mercury__hash_table__V_20_20;
#line 276 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_24_50;
#line 276 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 482 "hash_table.m"
    MR_Word mercury__hash_table__AL_9;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_32_32 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 7086 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_29_29  = Max;
#line 254 "array.opt"
}
#line 317 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_28_28, (MR_Integer) 1)));
#line 317 "hash_table.m"
    {
#line 317 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_28_28), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_46);
    }
#line 317 "hash_table.m"
    mercury__hash_table__Hash_46 = ((MR_Integer) mercury__hash_table__conv1_Hash_46);
#line 319 "hash_table.m"
    mercury__hash_table__V_47_47 = (mercury__hash_table__V_29_29 - (MR_Integer) 1);
#line 319 "hash_table.m"
    mercury__hash_table__H_7 = (mercury__hash_table__Hash_46 & mercury__hash_table__V_47_47);
#line 476 "hash_table.m"
    mercury__hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 476 "hash_table.m"
    mercury__hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 476 "hash_table.m"
    mercury__hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 476 "hash_table.m"
    mercury__hash_table__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_16_16 , Array);
	Index =  mercury__hash_table__H_7 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 7129 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 276 "array.opt"
    mercury__hash_table__AL0_8 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 276 "array.opt"
}
#line 477 "hash_table.m"
    {
#line 477 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__hash_table__TypeInfo_for_K_21, mercury__hash_table__AL0_8, mercury__hash_table__K_5, &mercury__hash_table__AL_9);
    }
#line 482 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 478 "hash_table.m"
      {
#line 478 "hash_table.m"
        MR_Integer mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 478 "hash_table.m"
        MR_Integer mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 478 "hash_table.m"
        MR_Word mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 478 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 478 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__Buckets_14;
#line 478 "hash_table.m"
        MR_Integer mercury__hash_table__NumOccupants_15;
#line 281 "array.opt"
        MR_Word mercury__hash_table__TypeInfo_24_51;
#line 281 "array.opt"
        MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 281 "array.opt"
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
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7182 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 281 "array.opt"
        mercury__hash_table__Buckets_14 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 281 "array.opt"
}
#line 480 "hash_table.m"
        mercury__hash_table__NumOccupants_15 = (mercury__hash_table__NumOccupants0_10 - (MR_Integer) 1);
#line 481 "hash_table.m"
        {
#line 481 "hash_table.m"
          mercury__hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 481 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_15));
#line 481 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 481 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 481 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 3) = ((MR_Box) (mercury__hash_table__Buckets_14));
#line 481 "hash_table.m"
        }
#line 478 "hash_table.m"
      }
#line 482 "hash_table.m"
    else
#line 483 "hash_table.m"
      mercury__hash_table__HT_6 = mercury__hash_table__HT0_4;
#line 474 "hash_table.m"
    return mercury__hash_table__HT_6;
#line 474 "hash_table.m"
  }
#line 158 "hash_table.m"
}

#line 150 "hash_table.m"
void MR_CALL 
mercury__hash_table__det_update_4_p_0(
#line 150 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 150 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 150 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 150 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 150 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 150 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 150 "hash_table.m"
{
#line 460 "hash_table.m"
  {
#line 460 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 460 "hash_table.m"
    {
#line 460 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__det_update_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 460 "hash_table.m"
  }
#line 150 "hash_table.m"
}

#line 148 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__det_update_3_f_0(
#line 148 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
#line 148 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
#line 148 "hash_table.m"
  MR_Word mercury__hash_table__STATE_VARIABLE_HT_0_14,
#line 148 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 148 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 148 "hash_table.m"
{
#line 448 "hash_table.m"
  {
#line 448 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 448 "hash_table.m"
    MR_Word mercury__hash_table__STATE_VARIABLE_HT_15;
#line 448 "hash_table.m"
    MR_Integer mercury__hash_table__H_8;
#line 448 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_9;
#line 448 "hash_table.m"
    MR_Word mercury__hash_table__AL0_10;
#line 448 "hash_table.m"
    MR_Word mercury__hash_table__AL_12;
#line 448 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_13;
#line 448 "hash_table.m"
    MR_Word mercury__hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 448 "hash_table.m"
    MR_Integer mercury__hash_table__V_35_35;
#line 448 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 448 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_52;
#line 448 "hash_table.m"
    MR_Integer mercury__hash_table__V_53_53;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_55;
#line 317 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_52;
#line 450 "hash_table.m"
    MR_Integer mercury__hash_table__V_19_19;
#line 450 "hash_table.m"
    MR_Integer mercury__hash_table__V_20_20;
#line 450 "hash_table.m"
    MR_Word mercury__hash_table__V_21_21;
#line 276 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_56;
#line 276 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 454 "hash_table.m"
    MR_Word mercury__hash_table__AL1_11;
#line 281 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_57;
#line 281 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;
#line 458 "hash_table.m"
    MR_Integer mercury__hash_table__V_22_22;
#line 458 "hash_table.m"
    MR_Integer mercury__hash_table__V_23_23;
#line 458 "hash_table.m"
    MR_Word mercury__hash_table__V_24_24;
#line 458 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_25_25;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_38_38 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 7341 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_35_35  = Max;
#line 254 "array.opt"
}
#line 317 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_34_34, (MR_Integer) 1)));
#line 317 "hash_table.m"
    {
#line 317 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_34_34), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_52);
    }
#line 317 "hash_table.m"
    mercury__hash_table__Hash_52 = ((MR_Integer) mercury__hash_table__conv1_Hash_52);
#line 319 "hash_table.m"
    mercury__hash_table__V_53_53 = (mercury__hash_table__V_35_35 - (MR_Integer) 1);
#line 319 "hash_table.m"
    mercury__hash_table__H_8 = (mercury__hash_table__Hash_52 & mercury__hash_table__V_53_53);
#line 450 "hash_table.m"
    mercury__hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 450 "hash_table.m"
    mercury__hash_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 450 "hash_table.m"
    mercury__hash_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 450 "hash_table.m"
    mercury__hash_table__Buckets0_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array);
	Index =  mercury__hash_table__H_8 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 7384 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 276 "array.opt"
    mercury__hash_table__AL0_10 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 276 "array.opt"
}
#line 452 "hash_table.m"
    {
#line 452 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__AL0_10, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__AL1_11);
    }
#line 454 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 453 "hash_table.m"
      mercury__hash_table__AL_12 = mercury__hash_table__AL1_11;
#line 454 "hash_table.m"
    else
#line 455 "hash_table.m"
      {
#line 455 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 455 "hash_table.m"
        MR_Word mercury__hash_table__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_update: key not found"));

#line 455 "hash_table.m"
        {
#line 455 "hash_table.m"
          mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_30_30, ((MR_Box) (mercury__hash_table__V_16_16)));
        }
#line 455 "hash_table.m"
      }
#line 281 "array.opt"
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
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7436 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 281 "array.opt"
    mercury__hash_table__Buckets_13 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 281 "array.opt"
}
#line 458 "hash_table.m"
    mercury__hash_table__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 458 "hash_table.m"
    mercury__hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 458 "hash_table.m"
    mercury__hash_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 458 "hash_table.m"
    mercury__hash_table__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 458 "hash_table.m"
    {
#line 458 "hash_table.m"
      mercury__hash_table__STATE_VARIABLE_HT_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 458 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 0) = ((MR_Box) (mercury__hash_table__V_22_22));
#line 458 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 1) = ((MR_Box) (mercury__hash_table__V_23_23));
#line 458 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 2) = ((MR_Box) (mercury__hash_table__V_24_24));
#line 458 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 3) = ((MR_Box) (mercury__hash_table__Buckets_13));
#line 458 "hash_table.m"
    }
#line 448 "hash_table.m"
    return mercury__hash_table__STATE_VARIABLE_HT_15;
#line 448 "hash_table.m"
  }
#line 148 "hash_table.m"
}

#line 140 "hash_table.m"
void MR_CALL 
mercury__hash_table__det_insert_4_p_0(
#line 140 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 140 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 140 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 140 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 140 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 140 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 140 "hash_table.m"
{
#line 444 "hash_table.m"
  {
#line 444 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 444 "hash_table.m"
    {
#line 444 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__det_insert_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 444 "hash_table.m"
  }
#line 140 "hash_table.m"
}

#line 138 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__det_insert_3_f_0(
#line 138 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_27,
#line 138 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_28,
#line 138 "hash_table.m"
  MR_Word mercury__hash_table__HT0_5,
#line 138 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 138 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 138 "hash_table.m"
{
#line 418 "hash_table.m"
  {
#line 418 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 418 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__H_9;
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants0_10;
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_11;
#line 418 "hash_table.m"
    MR_Word mercury__hash_table__HashPred_12;
#line 418 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_13;
#line 418 "hash_table.m"
    MR_Word mercury__hash_table__AL0_14;
#line 418 "hash_table.m"
    MR_Word mercury__hash_table__AL_15;
#line 418 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_22;
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants_23;
#line 418 "hash_table.m"
    MR_Word mercury__hash_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__V_48_48;
#line 418 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_65;
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__V_66_66;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_68;
#line 317 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_65;
#line 276 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_30_69;
#line 276 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 281 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_30_70;
#line 281 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_51_51 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 7587 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_48_48  = Max;
#line 254 "array.opt"
}
#line 317 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_47_47, (MR_Integer) 1)));
#line 317 "hash_table.m"
    {
#line 317 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_47_47), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_65);
    }
#line 317 "hash_table.m"
    mercury__hash_table__Hash_65 = ((MR_Integer) mercury__hash_table__conv1_Hash_65);
#line 319 "hash_table.m"
    mercury__hash_table__V_66_66 = (mercury__hash_table__V_48_48 - (MR_Integer) 1);
#line 319 "hash_table.m"
    mercury__hash_table__H_9 = (mercury__hash_table__Hash_65 & mercury__hash_table__V_66_66);
#line 420 "hash_table.m"
    mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 420 "hash_table.m"
    mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 420 "hash_table.m"
    mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 420 "hash_table.m"
    mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array);
	Index =  mercury__hash_table__H_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 7630 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 276 "array.opt"
    mercury__hash_table__AL0_14 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 276 "array.opt"
}
#line 425 "hash_table.m"
    if ((mercury__hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "hash_table.m"
      {
#line 424 "hash_table.m"
        mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 424 "hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 424 "hash_table.m"
      }
#line 425 "hash_table.m"
    else
#line 425 "hash_table.m"
      if (((MR_tag((MR_Word) mercury__hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 432 "hash_table.m"
        {
#line 429 "hash_table.m"
          MR_Box mercury__hash_table__V_21_21;

#line 429 "hash_table.m"
          {
#line 429 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__AL0_14, mercury__hash_table__K_6, &mercury__hash_table__V_21_21);
          }
#line 432 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 430 "hash_table.m"
            {
#line 430 "hash_table.m"
              MR_Word mercury__hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 430 "hash_table.m"
              MR_Word mercury__hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

#line 430 "hash_table.m"
              {
#line 430 "hash_table.m"
                mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__hash_table__V_24_24)));
              }
#line 430 "hash_table.m"
            }
#line 432 "hash_table.m"
          else
#line 433 "hash_table.m"
            {
#line 433 "hash_table.m"
              mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 433 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 433 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 433 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 433 "hash_table.m"
            }
#line 432 "hash_table.m"
        }
#line 425 "hash_table.m"
      else
#line 432 "hash_table.m"
        {
#line 429 "hash_table.m"
          MR_Box mercury__hash_table__V_32_32;

#line 429 "hash_table.m"
          {
#line 429 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__AL0_14, mercury__hash_table__K_6, &mercury__hash_table__V_32_32);
          }
#line 432 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 430 "hash_table.m"
            {
#line 430 "hash_table.m"
              MR_Word mercury__hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 430 "hash_table.m"
              MR_Word mercury__hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

#line 430 "hash_table.m"
              {
#line 430 "hash_table.m"
                mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__hash_table__V_33_33)));
              }
#line 430 "hash_table.m"
            }
#line 432 "hash_table.m"
          else
#line 433 "hash_table.m"
            {
#line 433 "hash_table.m"
              mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 433 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 433 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 433 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 433 "hash_table.m"
            }
#line 432 "hash_table.m"
        }
#line 281 "array.opt"
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
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7759 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 281 "array.opt"
    mercury__hash_table__Buckets_22 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 281 "array.opt"
}
#line 437 "hash_table.m"
    mercury__hash_table__NumOccupants_23 = (mercury__hash_table__NumOccupants0_10 + (MR_Integer) 1);
#line 438 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__NumOccupants_23 > mercury__hash_table__MaxOccupants_11);
#line 440 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 439 "hash_table.m"
      {
#line 439 "hash_table.m"
        return mercury__hash_table__HT_8 = mercury__hash_table__expand_4_f_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__NumOccupants_23, mercury__hash_table__MaxOccupants_11, mercury__hash_table__HashPred_12, mercury__hash_table__Buckets_22);
      }
#line 440 "hash_table.m"
    else
#line 441 "hash_table.m"
      {
#line 441 "hash_table.m"
        mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_23));
#line 441 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 441 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 441 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_22));
#line 441 "hash_table.m"
      }
#line 418 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 418 "hash_table.m"
  }
#line 138 "hash_table.m"
}

#line 131 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__f_101_108_101_109_32_58_61_3_f_0(
#line 131 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 131 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 131 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 131 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 131 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 131 "hash_table.m"
{
#line 364 "hash_table.m"
  {
#line 364 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 364 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__4_4;

#line 364 "hash_table.m"
    {
#line 364 "hash_table.m"
      return mercury__hash_table__HeadVar__4_4 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_6, mercury__hash_table__K_5, mercury__hash_table__V_7);
    }
#line 364 "hash_table.m"
    return mercury__hash_table__HeadVar__4_4;
#line 364 "hash_table.m"
  }
#line 131 "hash_table.m"
}

#line 124 "hash_table.m"
void MR_CALL 
mercury__hash_table__set_4_p_0(
#line 124 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 124 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 124 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 124 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 124 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 124 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 124 "hash_table.m"
{
#line 366 "hash_table.m"
  {
#line 366 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 366 "hash_table.m"
    {
#line 366 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 366 "hash_table.m"
  }
#line 124 "hash_table.m"
}

#line 122 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__set_3_f_0(
#line 122 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
#line 122 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
#line 122 "hash_table.m"
  MR_Word mercury__hash_table__HT0_5,
#line 122 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 122 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 122 "hash_table.m"
{
#line 323 "hash_table.m"
  {
#line 323 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 323 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;
#line 323 "hash_table.m"
    MR_Integer mercury__hash_table__H_9;
#line 323 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants0_10;
#line 323 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_11;
#line 323 "hash_table.m"
    MR_Word mercury__hash_table__HashPred_12;
#line 323 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_13;
#line 323 "hash_table.m"
    MR_Word mercury__hash_table__AL0_14;
#line 323 "hash_table.m"
    MR_Word mercury__hash_table__AL_15;
#line 323 "hash_table.m"
    MR_Word mercury__hash_table__MayExpand_16;
#line 323 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_23;
#line 323 "hash_table.m"
    MR_Word mercury__hash_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 323 "hash_table.m"
    MR_Integer mercury__hash_table__V_34_34;
#line 323 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 323 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_51;
#line 323 "hash_table.m"
    MR_Integer mercury__hash_table__V_52_52;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_54;
#line 317 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_51;
#line 276 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_55;
#line 276 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 281 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_56;
#line 281 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_37_37 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 7949 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_34_34  = Max;
#line 254 "array.opt"
}
#line 317 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_33_33, (MR_Integer) 1)));
#line 317 "hash_table.m"
    {
#line 317 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_33_33), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_51);
    }
#line 317 "hash_table.m"
    mercury__hash_table__Hash_51 = ((MR_Integer) mercury__hash_table__conv1_Hash_51);
#line 319 "hash_table.m"
    mercury__hash_table__V_52_52 = (mercury__hash_table__V_34_34 - (MR_Integer) 1);
#line 319 "hash_table.m"
    mercury__hash_table__H_9 = (mercury__hash_table__Hash_51 & mercury__hash_table__V_52_52);
#line 325 "hash_table.m"
    mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 325 "hash_table.m"
    mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 325 "hash_table.m"
    mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 325 "hash_table.m"
    mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array);
	Index =  mercury__hash_table__H_9 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 7992 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 276 "array.opt"
    mercury__hash_table__AL0_14 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 276 "array.opt"
}
#line 331 "hash_table.m"
    if ((mercury__hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "hash_table.m"
      {
#line 329 "hash_table.m"
        {
#line 329 "hash_table.m"
          mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 329 "hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 329 "hash_table.m"
        }
#line 330 "hash_table.m"
        mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 328 "hash_table.m"
      }
#line 331 "hash_table.m"
    else
#line 331 "hash_table.m"
      if (((MR_tag((MR_Word) mercury__hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 345 "hash_table.m"
        {
#line 345 "hash_table.m"
          MR_Word mercury__hash_table__AL1_22;

#line 342 "hash_table.m"
          {
#line 342 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__AL0_14, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__AL1_22);
          }
#line 345 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 343 "hash_table.m"
            {
#line 343 "hash_table.m"
              mercury__hash_table__AL_15 = mercury__hash_table__AL1_22;
#line 344 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 0;
#line 343 "hash_table.m"
            }
#line 345 "hash_table.m"
          else
#line 346 "hash_table.m"
            {
#line 346 "hash_table.m"
              {
#line 346 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 346 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 346 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 346 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 346 "hash_table.m"
              }
#line 347 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 346 "hash_table.m"
            }
#line 345 "hash_table.m"
        }
#line 331 "hash_table.m"
      else
#line 332 "hash_table.m"
        {
#line 332 "hash_table.m"
          MR_Box mercury__hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_14, (MR_Integer) 0));
#line 332 "hash_table.m"
          MR_Box mercury__hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_14, (MR_Integer) 1));

#line 333 "hash_table.m"
          {
#line 333 "hash_table.m"
            mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__K0_17, mercury__hash_table__K_6);
          }
#line 336 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 334 "hash_table.m"
            {
#line 334 "hash_table.m"
              {
#line 334 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K0_17;
#line 334 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 334 "hash_table.m"
              }
#line 335 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 0;
#line 334 "hash_table.m"
            }
#line 336 "hash_table.m"
          else
#line 337 "hash_table.m"
            {
#line 337 "hash_table.m"
              {
#line 337 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 337 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 337 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 337 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 337 "hash_table.m"
              }
#line 338 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 337 "hash_table.m"
            }
#line 332 "hash_table.m"
        }
#line 281 "array.opt"
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
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 8137 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 281 "array.opt"
    mercury__hash_table__Buckets_23 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 281 "array.opt"
}
#line 354 "hash_table.m"
    if ((mercury__hash_table__MayExpand_16 == (MR_Integer) 0))
#line 353 "hash_table.m"
      {
#line 353 "hash_table.m"
        mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 353 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants0_10));
#line 353 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 353 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 353 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_23));
#line 353 "hash_table.m"
      }
#line 354 "hash_table.m"
    else
#line 355 "hash_table.m"
      {
#line 355 "hash_table.m"
        MR_Integer mercury__hash_table__NumOccupants_24 = (mercury__hash_table__NumOccupants0_10 + (MR_Integer) 1);

#line 357 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__NumOccupants_24 > mercury__hash_table__MaxOccupants_11);
#line 359 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 358 "hash_table.m"
          {
#line 358 "hash_table.m"
            return mercury__hash_table__HT_8 = mercury__hash_table__expand_4_f_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__TypeInfo_for_V_27, mercury__hash_table__NumOccupants_24, mercury__hash_table__MaxOccupants_11, mercury__hash_table__HashPred_12, mercury__hash_table__Buckets_23);
          }
#line 359 "hash_table.m"
        else
#line 360 "hash_table.m"
          {
#line 360 "hash_table.m"
            mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 360 "hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_24));
#line 360 "hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 360 "hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 360 "hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_23));
#line 360 "hash_table.m"
          }
#line 355 "hash_table.m"
      }
#line 323 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 323 "hash_table.m"
  }
#line 122 "hash_table.m"
}

#line 114 "hash_table.m"
MR_Integer MR_CALL 
mercury__hash_table__num_occupants_1_f_0(
#line 114 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 114 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 114 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1)
#line 114 "hash_table.m"
{
#line 113 "hash_table.m"
  {
#line 113 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 113 "hash_table.m"
    MR_Integer mercury__hash_table__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "hash_table.m"
    MR_Integer mercury__hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 113 "hash_table.m"
    MR_Word mercury__hash_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 113 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));

#line 113 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 113 "hash_table.m"
  }
#line 114 "hash_table.m"
}

#line 108 "hash_table.m"
MR_Integer MR_CALL 
mercury__hash_table__num_buckets_1_f_0(
#line 108 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 108 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 108 "hash_table.m"
  MR_Word mercury__hash_table__HT_3)
#line 108 "hash_table.m"
{
#line 300 "hash_table.m"
  {
#line 300 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 300 "hash_table.m"
    MR_Integer mercury__hash_table__HeadVar__2_2;
#line 300 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 3)));
#line 300 "hash_table.m"
    MR_Integer mercury__hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 0)));
#line 300 "hash_table.m"
    MR_Integer mercury__hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 1)));
#line 300 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 2)));
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_14;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__num_buckets_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_4_4 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 8275 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__HeadVar__2_2  = Max;
#line 254 "array.opt"
}
#line 300 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 300 "hash_table.m"
  }
#line 108 "hash_table.m"
}

#line 103 "hash_table.m"
void MR_CALL 
mercury__hash_table__generic_hash_2_p_0(
#line 103 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_38,
#line 103 "hash_table.m"
  MR_Box mercury__hash_table__T_3,
#line 103 "hash_table.m"
  MR_Integer * mercury__hash_table__H_4)
#line 103 "hash_table.m"
{
#line 678 "hash_table.m"
  while (MR_TRUE)
#line 678 "hash_table.m"
    {
#line 678 "hash_table.m"
      /* tailcall optimized into a loop */
#line 678 "hash_table.m"
      {
#line 678 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 678 "hash_table.m"
        MR_Integer mercury__hash_table__Int_5;
#line 674 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 109 "builtin.opt"
        MR_Box mercury__hash_table__conv0_Int_5;

#line 109 "builtin.opt"
        {
#line 109 "builtin.opt"
          mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_39_39, mercury__hash_table__T_3, &mercury__hash_table__conv0_Int_5);
        }
#line 109 "builtin.opt"
        if (mercury__hash_table__succeeded)
#line 109 "builtin.opt"
          {
#line 109 "builtin.opt"
            mercury__hash_table__Int_5 = ((MR_Integer) mercury__hash_table__conv0_Int_5);
#line 109 "builtin.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
          }
#line 678 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 622 "hash_table.m"
          {
#line 625 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__Int_5 ;
		{
#line 625 "hash_table.m"

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

#line 8370 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 625 "hash_table.m"
}
#line 622 "hash_table.m"
          }
#line 678 "hash_table.m"
        else
#line 682 "hash_table.m"
          {
#line 682 "hash_table.m"
            MR_String mercury__hash_table__String_6;
#line 678 "hash_table.m"
            MR_Word mercury__hash_table__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 109 "builtin.opt"
            MR_Box mercury__hash_table__conv1_String_6;

#line 109 "builtin.opt"
            {
#line 109 "builtin.opt"
              mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_40_40, mercury__hash_table__T_3, &mercury__hash_table__conv1_String_6);
            }
#line 109 "builtin.opt"
            if (mercury__hash_table__succeeded)
#line 109 "builtin.opt"
              {
#line 109 "builtin.opt"
                mercury__hash_table__String_6 = ((MR_String) mercury__hash_table__conv1_String_6);
#line 109 "builtin.opt"
                mercury__hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
              }
#line 682 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 654 "hash_table.m"
              {
#line 654 "hash_table.m"
                *mercury__hash_table__H_4 = mercury__string__hash_1_f_0(mercury__hash_table__String_6);
              }
#line 682 "hash_table.m"
            else
#line 686 "hash_table.m"
              {
#line 686 "hash_table.m"
                MR_Float mercury__hash_table__Float_7;
#line 682 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 109 "builtin.opt"
                MR_Box mercury__hash_table__conv2_Float_7;

#line 109 "builtin.opt"
                {
#line 109 "builtin.opt"
                  mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_41_41, mercury__hash_table__T_3, &mercury__hash_table__conv2_Float_7);
                }
#line 109 "builtin.opt"
                if (mercury__hash_table__succeeded)
#line 109 "builtin.opt"
                  {
#line 109 "builtin.opt"
                    mercury__hash_table__Float_7 = MR_unbox_float(mercury__hash_table__conv2_Float_7);
#line 109 "builtin.opt"
                    mercury__hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
                  }
#line 686 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 112 "float.opt"
                  {
#line 112 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__hash_table__Float_7 ;
		{
#line 112 "float.opt"

	H = MR_hash_float(F);

#line 8455 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 112 "float.opt"
}
#line 112 "float.opt"
                  }
#line 686 "hash_table.m"
                else
#line 690 "hash_table.m"
                  {
#line 690 "hash_table.m"
                    MR_Char mercury__hash_table__Char_8;
#line 686 "hash_table.m"
                    MR_Word mercury__hash_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 109 "builtin.opt"
                    MR_Box mercury__hash_table__conv3_Char_8;

#line 109 "builtin.opt"
                    {
#line 109 "builtin.opt"
                      mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_42_42, mercury__hash_table__T_3, &mercury__hash_table__conv3_Char_8);
                    }
#line 109 "builtin.opt"
                    if (mercury__hash_table__succeeded)
#line 109 "builtin.opt"
                      {
#line 109 "builtin.opt"
                        mercury__hash_table__Char_8 = ((MR_Char) (MR_Word) mercury__hash_table__conv3_Char_8);
#line 109 "builtin.opt"
                        mercury__hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
                      }
#line 690 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 666 "hash_table.m"
                      {
#line 666 "hash_table.m"
                        MR_Integer mercury__hash_table__V_63_63;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__hash_table__Char_8 ;
		{
#line 63 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8510 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_63_63  = Int;
#line 63 "char.opt"
}
#line 625 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__V_63_63 ;
		{
#line 625 "hash_table.m"

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

#line 8551 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 625 "hash_table.m"
}
#line 666 "hash_table.m"
                      }
#line 690 "hash_table.m"
                    else
#line 694 "hash_table.m"
                      {
#line 694 "hash_table.m"
                        MR_Word mercury__hash_table__Univ_9;
#line 690 "hash_table.m"
                        MR_Word mercury__hash_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 109 "builtin.opt"
                        MR_Box mercury__hash_table__conv4_Univ_9;

#line 109 "builtin.opt"
                        {
#line 109 "builtin.opt"
                          mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_43_43, mercury__hash_table__T_3, &mercury__hash_table__conv4_Univ_9);
                        }
#line 109 "builtin.opt"
                        if (mercury__hash_table__succeeded)
#line 109 "builtin.opt"
                          {
#line 109 "builtin.opt"
                            mercury__hash_table__Univ_9 = ((MR_Word) mercury__hash_table__conv4_Univ_9);
#line 109 "builtin.opt"
                            mercury__hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
                          }
#line 694 "hash_table.m"
                        if (mercury__hash_table__succeeded)
#line 692 "hash_table.m"
                          {
#line 692 "hash_table.m"
                            MR_Word mercury__hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__Univ_9, (MR_Integer) 0)));
#line 692 "hash_table.m"
                            MR_Box mercury__hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__hash_table__Univ_9, (MR_Integer) 1));

#line 692 "hash_table.m"
                            /* direct tailcall eliminated */
#line 692 "hash_table.m"
                            {
#line 692 "hash_table.m"
                              MR_Word mercury__hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__hash_table__TypeInfo_44_44;
#line 692 "hash_table.m"
                              MR_Box mercury__hash_table__T__tmp_copy_3 = mercury__hash_table__V_22_22;

#line 692 "hash_table.m"
                              mercury__hash_table__T_3 = mercury__hash_table__T__tmp_copy_3;
#line 692 "hash_table.m"
                              mercury__hash_table__TypeInfo_for_T_38 = mercury__hash_table__TypeInfo_for_T__tmp_copy_38;
#line 692 "hash_table.m"
                            }
#line 692 "hash_table.m"
                            continue;
#line 692 "hash_table.m"
                          }
#line 694 "hash_table.m"
                        else
#line 705 "hash_table.m"
                          {
#line 705 "hash_table.m"
                            MR_Word mercury__hash_table__TypeInfo_45_45;
#line 705 "hash_table.m"
                            MR_ArrayPtr mercury__hash_table__Array_10;
#line 694 "hash_table.m"
                            MR_ArrayPtr mercury__hash_table__conv5_Array_10;

#line 694 "hash_table.m"
                            {
#line 694 "hash_table.m"
                              mercury__hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__hash_table__TypeInfo_for_T_38, &mercury__hash_table__TypeInfo_45_45, mercury__hash_table__T_3, &mercury__hash_table__conv5_Array_10);
                            }
#line 694 "hash_table.m"
                            if (mercury__hash_table__succeeded)
#line 694 "hash_table.m"
                              {
#line 694 "hash_table.m"
                                mercury__hash_table__Array_10 = (MR_ArrayPtr) mercury__hash_table__conv5_Array_10;
#line 694 "hash_table.m"
                                mercury__hash_table__succeeded = MR_TRUE;
#line 694 "hash_table.m"
                              }
#line 705 "hash_table.m"
                            if (mercury__hash_table__succeeded)
#line 696 "hash_table.m"
                              {
#line 696 "hash_table.m"
                                {
#line 696 "hash_table.m"
                                  *mercury__hash_table__H_4 = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__hash_table__TypeInfo_45_45, mercury__hash_table__Array_10, (MR_Integer) 0);
                                }
#line 696 "hash_table.m"
                              }
#line 705 "hash_table.m"
                            else
#line 707 "hash_table.m"
                              {
#line 707 "hash_table.m"
                                MR_String mercury__hash_table__FunctorName_15;
#line 707 "hash_table.m"
                                MR_Integer mercury__hash_table__Arity_16;
#line 707 "hash_table.m"
                                MR_Word mercury__hash_table__Args_17;
#line 707 "hash_table.m"
                                MR_Integer mercury__hash_table__H0_18;
#line 707 "hash_table.m"
                                MR_Integer mercury__hash_table__H1_19;
#line 707 "hash_table.m"
                                MR_Integer mercury__hash_table__V_73_73;
#line 707 "hash_table.m"
                                MR_Integer mercury__hash_table__V_74_74;
#line 707 "hash_table.m"
                                MR_Integer mercury__hash_table__V_75_75;
#line 707 "hash_table.m"
                                MR_Integer mercury__hash_table__V_76_76;

#line 707 "hash_table.m"
                                {
#line 707 "hash_table.m"
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__T_3, (MR_Integer) 1, &mercury__hash_table__FunctorName_15, &mercury__hash_table__Arity_16, &mercury__hash_table__Args_17);
                                }
#line 654 "hash_table.m"
                                {
#line 654 "hash_table.m"
                                  mercury__hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__hash_table__FunctorName_15);
                                }
#line 725 "hash_table.m"
                                mercury__hash_table__V_73_73 = (mercury__hash_table__H0_18 << mercury__hash_table__Arity_16);
#line 163 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 8697 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_76_76  = Bits;
#line 163 "int.opt"
}
#line 726 "hash_table.m"
                                mercury__hash_table__V_75_75 = (mercury__hash_table__V_76_76 - mercury__hash_table__Arity_16);
#line 725 "hash_table.m"
                                mercury__hash_table__V_74_74 = (mercury__hash_table__H0_18 >> mercury__hash_table__V_75_75);
#line 724 "hash_table.m"
                                mercury__hash_table__H1_19 = (mercury__hash_table__V_73_73 ^ mercury__hash_table__V_74_74);
#line 710 "hash_table.m"
                                {
#line 710 "hash_table.m"
                                  mercury__hash_table__foldl__ho17_4_p_in__list_0(mercury__hash_table__Args_17, mercury__hash_table__H1_19, mercury__hash_table__H_4);
#line 710 "hash_table.m"
                                  return;
                                }
#line 707 "hash_table.m"
                              }
#line 705 "hash_table.m"
                          }
#line 694 "hash_table.m"
                      }
#line 690 "hash_table.m"
                  }
#line 686 "hash_table.m"
              }
#line 682 "hash_table.m"
          }
#line 678 "hash_table.m"
      }
#line 678 "hash_table.m"
      break;
#line 678 "hash_table.m"
    }
#line 103 "hash_table.m"
}

#line 102 "hash_table.m"
void MR_CALL 
mercury__hash_table__float_hash_2_p_0(
#line 102 "hash_table.m"
  MR_Float mercury__hash_table__F_3,
#line 102 "hash_table.m"
  MR_Integer * mercury__hash_table__HeadVar__2_2)
#line 102 "hash_table.m"
{
#line 112 "float.opt"
  {
#line 112 "float.opt"
    MR_bool mercury__hash_table__succeeded;

#line 112 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__hash_table__F_3 ;
		{
#line 112 "float.opt"

	H = MR_hash_float(F);

#line 8765 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__HeadVar__2_2  = H;
#line 112 "float.opt"
}
#line 112 "float.opt"
  }
#line 102 "hash_table.m"
}

#line 101 "hash_table.m"
void MR_CALL 
mercury__hash_table__char_hash_2_p_0(
#line 101 "hash_table.m"
  MR_Char mercury__hash_table__C_3,
#line 101 "hash_table.m"
  MR_Integer * mercury__hash_table__H_4)
#line 101 "hash_table.m"
{
#line 666 "hash_table.m"
  {
#line 666 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 666 "hash_table.m"
    MR_Integer mercury__hash_table__V_5_5;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__hash_table__C_3 ;
		{
#line 63 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8806 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_5_5  = Int;
#line 63 "char.opt"
}
#line 625 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__V_5_5 ;
		{
#line 625 "hash_table.m"

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

#line 8847 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 625 "hash_table.m"
}
#line 666 "hash_table.m"
  }
#line 101 "hash_table.m"
}

#line 100 "hash_table.m"
void MR_CALL 
mercury__hash_table__string_hash_2_p_0(
#line 100 "hash_table.m"
  MR_String mercury__hash_table__S_3,
#line 100 "hash_table.m"
  MR_Integer * mercury__hash_table__HeadVar__2_2)
#line 100 "hash_table.m"
{
#line 654 "hash_table.m"
  {
#line 654 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 654 "hash_table.m"
    {
#line 654 "hash_table.m"
      *mercury__hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__hash_table__S_3);
    }
#line 654 "hash_table.m"
  }
#line 100 "hash_table.m"
}

#line 99 "hash_table.m"
void MR_CALL 
mercury__hash_table__int_hash_2_p_0(
#line 99 "hash_table.m"
  MR_Integer mercury__hash_table__N_1,
#line 99 "hash_table.m"
  MR_Integer * mercury__hash_table__H_2)
#line 99 "hash_table.m"
{
#line 622 "hash_table.m"
  {
#line 622 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 625 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__N_1 ;
		{
#line 625 "hash_table.m"

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

#line 8931 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_2  = H;
#line 625 "hash_table.m"
}
#line 622 "hash_table.m"
  }
#line 99 "hash_table.m"
}

#line 95 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__hash_pred_1_f_0(
#line 95 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 95 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 95 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1)
#line 95 "hash_table.m"
{
#line 94 "hash_table.m"
  {
#line 94 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 94 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 94 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));

#line 94 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 94 "hash_table.m"
  }
#line 95 "hash_table.m"
}

#line 90 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__new_default_1_f_0(
#line 90 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 90 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 90 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_3)
#line 90 "hash_table.m"
{
#line 296 "hash_table.m"
  {
#line 296 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 296 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__2_2;

#line 296 "hash_table.m"
    {
#line 296 "hash_table.m"
      return mercury__hash_table__HeadVar__2_2 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 296 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 296 "hash_table.m"
  }
#line 90 "hash_table.m"
}

#line 84 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__init_default_1_f_0(
#line 84 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 84 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 84 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_3)
#line 84 "hash_table.m"
{
#line 295 "hash_table.m"
  {
#line 295 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 295 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__2_2;

#line 295 "hash_table.m"
    {
#line 295 "hash_table.m"
      return mercury__hash_table__HeadVar__2_2 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 295 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 295 "hash_table.m"
  }
#line 84 "hash_table.m"
}

#line 78 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__new_3_f_0(
#line 78 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 78 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 78 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_5,
#line 78 "hash_table.m"
  MR_Integer mercury__hash_table__N_6,
#line 78 "hash_table.m"
  MR_Float mercury__hash_table__MaxOccupancy_7)
#line 78 "hash_table.m"
{
#line 289 "hash_table.m"
  {
#line 289 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 289 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__4_4;

#line 289 "hash_table.m"
    {
#line 289 "hash_table.m"
      return mercury__hash_table__HeadVar__4_4 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HashPred_5, mercury__hash_table__N_6, mercury__hash_table__MaxOccupancy_7);
    }
#line 289 "hash_table.m"
    return mercury__hash_table__HeadVar__4_4;
#line 289 "hash_table.m"
  }
#line 78 "hash_table.m"
}

#line 72 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__init_3_f_0(
#line 72 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
#line 72 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
#line 72 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_5,
#line 72 "hash_table.m"
  MR_Integer mercury__hash_table__N_6,
#line 72 "hash_table.m"
  MR_Float mercury__hash_table__MaxOccupancy_7)
#line 72 "hash_table.m"
{
#line 276 "hash_table.m"
  {
#line 276 "hash_table.m"
    MR_bool mercury__hash_table__succeeded = (mercury__hash_table__N_6 <= (MR_Integer) 0);
#line 276 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;

#line 276 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 275 "hash_table.m"
      {
#line 275 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 275 "hash_table.m"
        MR_Word mercury__hash_table__V_13_13 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N =< 0"));

#line 275 "hash_table.m"
        {
#line 275 "hash_table.m"
          mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_28_28, ((MR_Box) (mercury__hash_table__V_13_13)));
        }
#line 275 "hash_table.m"
      }
#line 276 "hash_table.m"
    else
#line 279 "hash_table.m"
      {
#line 276 "hash_table.m"
        MR_Integer mercury__hash_table__V_15_15;

#line 163 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer Bits;

		{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 9124 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_15  = Bits;
#line 163 "int.opt"
}
#line 276 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__N_6 >= mercury__hash_table__V_15_15);
#line 279 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 277 "hash_table.m"
          {
#line 277 "hash_table.m"
            MR_Word mercury__hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 277 "hash_table.m"
            MR_Word mercury__hash_table__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N >= int.bits_per_int"));

#line 277 "hash_table.m"
            {
#line 277 "hash_table.m"
              mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_29_29, ((MR_Box) (mercury__hash_table__V_16_16)));
            }
#line 277 "hash_table.m"
          }
#line 279 "hash_table.m"
        else
#line 282 "hash_table.m"
          {
#line 279 "hash_table.m"
            mercury__hash_table__succeeded = (mercury__hash_table__MaxOccupancy_7 <= ((MR_Float) 0.0000000000000000));
#line 282 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 280 "hash_table.m"
              {
#line 280 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 280 "hash_table.m"
                MR_Word mercury__hash_table__V_19_19 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: MaxOccupancy =< 0.0"));

#line 280 "hash_table.m"
                {
#line 280 "hash_table.m"
                  mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_30_30, ((MR_Box) (mercury__hash_table__V_19_19)));
                }
#line 280 "hash_table.m"
              }
#line 282 "hash_table.m"
            else
#line 283 "hash_table.m"
              {
#line 283 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_31_31;
#line 283 "hash_table.m"
                MR_Word mercury__hash_table__TypeInfo_32_32;
#line 283 "hash_table.m"
                MR_Integer mercury__hash_table__NumBuckets_9;
#line 283 "hash_table.m"
                MR_Integer mercury__hash_table__MaxOccupants_10;
#line 283 "hash_table.m"
                MR_ArrayPtr mercury__hash_table__Buckets_11;
#line 283 "hash_table.m"
                MR_Float mercury__hash_table__V_22_22;
#line 283 "hash_table.m"
                MR_Float mercury__hash_table__V_23_23;
#line 283 "hash_table.m"
                MR_Word mercury__hash_table__V_24_24;
#line 196 "array.opt"
                MR_ArrayPtr mercury__hash_table__conv0_Buckets_11;

#line 283 "hash_table.m"
                {
#line 283 "hash_table.m"
                  mercury__hash_table__NumBuckets_9 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, mercury__hash_table__N_6);
                }
#line 81 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__hash_table__NumBuckets_9 ;
		{
#line 81 "float.opt"

	FloatVal = IntVal;

#line 9212 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_23_23  = FloatVal;
#line 81 "float.opt"
}
#line 284 "hash_table.m"
                mercury__hash_table__V_22_22 = (mercury__hash_table__V_23_23 * mercury__hash_table__MaxOccupancy_7);
#line 84 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__hash_table__V_22_22 ;
		{
#line 84 "float.opt"

	Ceil = (MR_Integer) ceil(X);

#line 9234 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__MaxOccupants_10  = Ceil;
#line 84 "float.opt"
}
#line 9241 "hash_table.c"
                mercury__hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 9243 "hash_table.c"
                {
#line 9245 "hash_table.c"
                  mercury__hash_table__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9247 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_31_31));
#line 9249 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_26));
#line 9251 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_27));
#line 9253 "hash_table.c"
                }
#line 285 "hash_table.m"
                mercury__hash_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 196 "array.opt"
                {
#line 196 "array.opt"
                  mercury__array__init_3_p_0(mercury__hash_table__TypeInfo_32_32, mercury__hash_table__NumBuckets_9, ((MR_Box) (mercury__hash_table__V_24_24)), &mercury__hash_table__conv0_Buckets_11);
                }
#line 196 "array.opt"
                mercury__hash_table__Buckets_11 = (MR_ArrayPtr) mercury__hash_table__conv0_Buckets_11;
#line 286 "hash_table.m"
                {
#line 286 "hash_table.m"
                  mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 286 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) ((MR_Integer) 0));
#line 286 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_10));
#line 286 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_5));
#line 286 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_11));
#line 286 "hash_table.m"
                }
#line 283 "hash_table.m"
              }
#line 282 "hash_table.m"
          }
#line 279 "hash_table.m"
      }
#line 276 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 276 "hash_table.m"
  }
#line 72 "hash_table.m"
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
