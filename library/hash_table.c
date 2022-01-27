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

#line 70 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 70 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 70 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 70 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 70 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 70 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 70 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 70 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 70 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 70 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 69 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 69 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 69 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 69 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 69 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 69 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 69 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 69 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 69 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 69 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 68 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 68 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 68 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 68 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 68 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 68 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 68 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 68 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 68 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 68 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 67 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 67 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 67 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 67 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 67 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 67 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 66 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 66 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 66 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 66 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 66 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 66 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 66 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 66 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 66 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 66 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 65 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 65 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 65 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 65 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 67 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 67 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 67 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 67 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 67 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 67 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 65 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 65 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 65 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 65 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 65 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_27_27,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_28_28,
#line 65 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 65 "array.opt"
  MR_Word mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 65 "array.opt"
  MR_Word * mercury__hash_table__STATE_VARIABLE_Acc_13_12);

#line 62 "array.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 62 "array.opt"
  MR_Word mercury__hash_table__V_19_19,
#line 62 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 62 "array.opt"
  MR_Integer mercury__hash_table__X_9_9,
#line 62 "array.opt"
  MR_Integer mercury__hash_table__I_10_10,
#line 62 "array.opt"
  MR_Integer mercury__hash_table__Max_11_11);

#line 75 "array.int"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 75 "array.int"
  MR_Word mercury__hash_table__V_13_13,
#line 75 "array.int"
  MR_ArrayPtr mercury__hash_table__A_6_6,
#line 75 "array.int"
  MR_Integer mercury__hash_table__X_7_7);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 608 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 608 "hash_table.m"
  MR_Word mercury__hash_table__AL_6,
#line 608 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_7,
#line 608 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_8,
#line 608 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 608 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14);

#line 595 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 595 "hash_table.m"
  MR_Integer mercury__hash_table__I_7,
#line 595 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__OldBuckets_8,
#line 595 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_9,
#line 595 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_10,
#line 595 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 595 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14);

#line 513 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 513 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 513 "hash_table.m"
  MR_Word mercury__hash_table__AL0_4,
#line 513 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 513 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6);

#line 393 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 393 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 393 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 393 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 393 "hash_table.m"
  MR_Box mercury__hash_table__V_7,
#line 393 "hash_table.m"
  MR_Word * mercury__hash_table__AL_8);

#line 135 "list.int"
static void MR_CALL 
mercury__hash_table__foldl__ho13_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 135 "list.int"
  MR_Integer mercury__hash_table__HeadVar__3_3,
#line 135 "list.int"
  MR_Integer * mercury__hash_table__HeadVar__4_4);

#line 582 "hash_table.m"
static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
#line 582 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_20,
#line 582 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_21,
#line 582 "hash_table.m"
  MR_Integer mercury__hash_table__NumOccupants_6,
#line 582 "hash_table.m"
  MR_Integer mercury__hash_table__MaxOccupants0_7,
#line 582 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_8,
#line 582 "hash_table.m"
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
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
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
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "string.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"



#line 783 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 792 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

#line 800 "hash_table.c"
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

#line 817 "hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 827 "hash_table.c"
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

#line 844 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 852 "hash_table.c"
static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4] = {
  (MR_String) "num_occupants",
  (MR_String) "max_occupants",
  (MR_String) "hash_pred",
  (MR_String) "buckets"
};

#line 860 "hash_table.c"
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

#line 875 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

#line 880 "hash_table.c"
static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0
  }
};

#line 889 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

#line 894 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_2[1] = {
  (MR_Integer) 0
};

#line 899 "hash_table.c"
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

#line 916 "hash_table.c"
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

#line 931 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 937 "hash_table.c"
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

#line 952 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 959 "hash_table.c"
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

#line 974 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0
};

#line 979 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 984 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2
};

#line 989 "hash_table.c"
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

#line 1008 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1015 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1022 "hash_table.c"
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

#line 1039 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
#line 1042 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1044 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1046 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1048 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1050 "hash_table.c"
{
#line 1052 "hash_table.c"
  {
#line 1054 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1057 "hash_table.c"
    {
#line 1059 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____buckets_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_3), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_4));
    }
#line 1062 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1064 "hash_table.c"
  }
#line 1066 "hash_table.c"
}

#line 1069 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
#line 1072 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1074 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1076 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 1078 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 1080 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 1082 "hash_table.c"
{
#line 1084 "hash_table.c"
  {
#line 1086 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1089 "hash_table.c"
    {
#line 1091 "hash_table.c"
      mercury__hash_table____Compare____buckets_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_4), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_5));
    }
#line 1094 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1096 "hash_table.c"
  }
#line 1098 "hash_table.c"
}

#line 1101 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
#line 1104 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1106 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1108 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3)
#line 1110 "hash_table.c"
{
#line 1112 "hash_table.c"
  {
#line 1114 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1117 "hash_table.c"
    {
#line 1119 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3));
    }
#line 1122 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1124 "hash_table.c"
  }
#line 1126 "hash_table.c"
}

#line 1129 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
#line 1132 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1134 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_2,
#line 1136 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1138 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1140 "hash_table.c"
{
#line 1142 "hash_table.c"
  {
#line 1144 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1147 "hash_table.c"
    {
#line 1149 "hash_table.c"
      mercury__hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__hash_table__wrapper_arg_1), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1152 "hash_table.c"
    *mercury__hash_table__wrapper_arg_2 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1154 "hash_table.c"
  }
#line 1156 "hash_table.c"
}

#line 1159 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
#line 1162 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1164 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1166 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1168 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1170 "hash_table.c"
{
#line 1172 "hash_table.c"
  {
#line 1174 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1177 "hash_table.c"
    {
#line 1179 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_table_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1182 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1184 "hash_table.c"
  }
#line 1186 "hash_table.c"
}

#line 1189 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
#line 1192 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1194 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1196 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 1198 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 1200 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 1202 "hash_table.c"
{
#line 1204 "hash_table.c"
  {
#line 1206 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1209 "hash_table.c"
    {
#line 1211 "hash_table.c"
      mercury__hash_table____Compare____hash_table_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_4), ((MR_Word) mercury__hash_table__wrapper_arg_5));
    }
#line 1214 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1216 "hash_table.c"
  }
#line 1218 "hash_table.c"
}

#line 1221 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
#line 1224 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1226 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1228 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1230 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1232 "hash_table.c"
{
#line 1234 "hash_table.c"
  {
#line 1236 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1239 "hash_table.c"
    {
#line 1241 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1244 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1246 "hash_table.c"
  }
#line 1248 "hash_table.c"
}

#line 1251 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
#line 1254 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1256 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1258 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 1260 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 1262 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 1264 "hash_table.c"
{
#line 1266 "hash_table.c"
  {
#line 1268 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1271 "hash_table.c"
    {
#line 1273 "hash_table.c"
      mercury__hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_4), ((MR_Word) mercury__hash_table__wrapper_arg_5));
    }
#line 1276 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1278 "hash_table.c"
  }
#line 1280 "hash_table.c"
}

#line 70 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 70 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 70 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 70 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 70 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 70 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 70 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 70 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 70 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 70 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 70 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          {
#line 646 "array.opt"
            *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 646 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 646 "array.opt"
          }
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 1359 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_5(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 648 "array.opt"
            if (mercury__hash_table__succeeded)
#line 648 "array.opt"
              {
#line 651 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 650 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + mercury__hash_table__V_18_16);
#line 652 "array.opt"
                /* direct tailcall eliminated */
#line 652 "array.opt"
                {
#line 652 "array.opt"
                  MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
                  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
                  mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
                  mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
                }
#line 652 "array.opt"
                continue;
#line 648 "array.opt"
              }
#line 648 "array.opt"
          }
#line 647 "array.opt"
        return mercury__hash_table__succeeded;
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 70 "array.opt"
}

#line 69 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 69 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 69 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 69 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 69 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 69 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 69 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 69 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 69 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 69 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 69 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          {
#line 646 "array.opt"
            *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 646 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 646 "array.opt"
          }
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 1489 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_4(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 648 "array.opt"
            if (mercury__hash_table__succeeded)
#line 648 "array.opt"
              {
#line 651 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 650 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + mercury__hash_table__V_18_16);
#line 652 "array.opt"
                /* direct tailcall eliminated */
#line 652 "array.opt"
                {
#line 652 "array.opt"
                  MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
                  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
                  mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
                  mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
                }
#line 652 "array.opt"
                continue;
#line 648 "array.opt"
              }
#line 648 "array.opt"
          }
#line 647 "array.opt"
        return mercury__hash_table__succeeded;
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 69 "array.opt"
}

#line 68 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 68 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 68 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 68 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 68 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 68 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 68 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 68 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 68 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 68 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 68 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          {
#line 646 "array.opt"
            *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 646 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 646 "array.opt"
          }
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 1619 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_3(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 648 "array.opt"
            if (mercury__hash_table__succeeded)
#line 648 "array.opt"
              {
#line 651 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 650 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + mercury__hash_table__V_18_16);
#line 652 "array.opt"
                /* direct tailcall eliminated */
#line 652 "array.opt"
                {
#line 652 "array.opt"
                  MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
                  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
                  mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
                  mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
                }
#line 652 "array.opt"
                continue;
#line 648 "array.opt"
              }
#line 648 "array.opt"
          }
#line 647 "array.opt"
        return mercury__hash_table__succeeded;
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 68 "array.opt"
}

#line 67 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 67 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 67 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 67 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 67 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 67 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 67 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 1741 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__fold_p_4_p_2(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 650 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 652 "array.opt"
            /* direct tailcall eliminated */
#line 652 "array.opt"
            {
#line 652 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
            }
#line 652 "array.opt"
            continue;
#line 648 "array.opt"
          }
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 67 "array.opt"
}

#line 66 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 66 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 66 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 66 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 66 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 66 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 66 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 66 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 66 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 66 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 66 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 1853 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__fold_p_4_p_1(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 650 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 652 "array.opt"
            /* direct tailcall eliminated */
#line 652 "array.opt"
            {
#line 652 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
            }
#line 652 "array.opt"
            continue;
#line 648 "array.opt"
          }
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 66 "array.opt"
}

#line 65 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 65 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 65 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 65 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 65 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 1965 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__fold_p_4_p_0(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 650 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 652 "array.opt"
            /* direct tailcall eliminated */
#line 652 "array.opt"
            {
#line 652 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
            }
#line 652 "array.opt"
            continue;
#line 648 "array.opt"
          }
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 65 "array.opt"
}

#line 67 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 67 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 67 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 67 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 67 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 67 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 67 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 67 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 2077 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__fold_f_4_p_1(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 650 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 652 "array.opt"
            /* direct tailcall eliminated */
#line 652 "array.opt"
            {
#line 652 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
            }
#line 652 "array.opt"
            continue;
#line 648 "array.opt"
          }
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 67 "array.opt"
}

#line 65 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 65 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 65 "array.opt"
  MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 65 "array.opt"
  MR_Box * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 65 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Box mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 2189 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__fold_f_4_p_0(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 650 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 652 "array.opt"
            /* direct tailcall eliminated */
#line 652 "array.opt"
            {
#line 652 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
              MR_Box mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
            }
#line 652 "array.opt"
            continue;
#line 648 "array.opt"
          }
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 65 "array.opt"
}

#line 65 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_27_27,
#line 65 "array.opt"
  MR_Word mercury__hash_table__V_28_28,
#line 65 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__I_9_9,
#line 65 "array.opt"
  MR_Integer mercury__hash_table__Max_10_10,
#line 65 "array.opt"
  MR_Word mercury__hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 65 "array.opt"
  MR_Word * mercury__hash_table__STATE_VARIABLE_Acc_13_12)
#line 65 "array.opt"
{
#line 647 "array.opt"
  while (MR_TRUE)
#line 647 "array.opt"
    {
#line 647 "array.opt"
      /* tailcall optimized into a loop */
#line 647 "array.opt"
      {
#line 647 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_10_10 < mercury__hash_table__I_9_9);

#line 647 "array.opt"
        if (mercury__hash_table__succeeded)
#line 646 "array.opt"
          *mercury__hash_table__STATE_VARIABLE_Acc_13_12 = mercury__hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 647 "array.opt"
        else
#line 648 "array.opt"
          {
#line 648 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 648 "array.opt"
            MR_Word mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 648 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_32;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_9_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 2297 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 649 "array.opt"
            {
#line 649 "array.opt"
              mercury__hash_table__to_assoc_list_2_3_p_0(mercury__hash_table__V_27_27, mercury__hash_table__V_28_28, mercury__hash_table__V_14_13, mercury__hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 650 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__I_9_9 + (MR_Integer) 1);
#line 652 "array.opt"
            /* direct tailcall eliminated */
#line 652 "array.opt"
            {
#line 652 "array.opt"
              MR_Integer mercury__hash_table__I_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 652 "array.opt"
              MR_Word mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 652 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 652 "array.opt"
              mercury__hash_table__I_9_9 = mercury__hash_table__I_9__tmp_copy_9;
#line 652 "array.opt"
            }
#line 652 "array.opt"
            continue;
#line 648 "array.opt"
          }
#line 647 "array.opt"
      }
#line 647 "array.opt"
      break;
#line 647 "array.opt"
    }
#line 65 "array.opt"
}

#line 62 "array.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 62 "array.opt"
  MR_Word mercury__hash_table__V_19_19,
#line 62 "array.opt"
  MR_ArrayPtr mercury__hash_table__A_8_8,
#line 62 "array.opt"
  MR_Integer mercury__hash_table__X_9_9,
#line 62 "array.opt"
  MR_Integer mercury__hash_table__I_10_10,
#line 62 "array.opt"
  MR_Integer mercury__hash_table__Max_11_11)
#line 62 "array.opt"
{
#line 635 "array.opt"
  while (MR_TRUE)
#line 635 "array.opt"
    {
#line 635 "array.opt"
      /* tailcall optimized into a loop */
#line 635 "array.opt"
      {
#line 635 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__Max_11_11 < mercury__hash_table__I_10_10);
#line 635 "array.opt"
        MR_Integer mercury__hash_table__HeadVar__6_6_12;

#line 635 "array.opt"
        if (mercury__hash_table__succeeded)
#line 634 "array.opt"
          mercury__hash_table__HeadVar__6_6_12 = mercury__hash_table__X_9_9;
#line 635 "array.opt"
        else
#line 636 "array.opt"
          {
#line 636 "array.opt"
            MR_Integer mercury__hash_table__V_12_13;
#line 636 "array.opt"
            MR_Integer mercury__hash_table__V_14_14;
#line 636 "array.opt"
            MR_Box mercury__hash_table__V_13_15;
#line 636 "array.opt"
            MR_Integer mercury__hash_table__HX_36;
#line 636 "array.opt"
            MR_Integer mercury__hash_table__V_70_70;
#line 636 "array.opt"
            MR_Integer mercury__hash_table__V_71_71;
#line 636 "array.opt"
            MR_Integer mercury__hash_table__V_72_72;
#line 636 "array.opt"
            MR_Integer mercury__hash_table__V_73_73;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_75;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_8_8 , Array);
	Index =  mercury__hash_table__I_10_10 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 2411 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_13_15  = (MR_Box) Item;
#line 249 "array.opt"
}
#line 726 "hash_table.m"
            {
#line 726 "hash_table.m"
              mercury__hash_table__generic_hash_2_p_0(mercury__hash_table__V_19_19, mercury__hash_table__V_13_15, &mercury__hash_table__HX_36);
            }
#line 753 "hash_table.m"
            mercury__hash_table__V_70_70 = (mercury__hash_table__X_9_9 << mercury__hash_table__HX_36);
#line 135 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{
#line 135 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2436 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_73_73  = Bits;
#line 135 "int.opt"
}
#line 754 "hash_table.m"
            mercury__hash_table__V_72_72 = (mercury__hash_table__V_73_73 - mercury__hash_table__HX_36);
#line 754 "hash_table.m"
            mercury__hash_table__V_71_71 = (mercury__hash_table__X_9_9 >> mercury__hash_table__V_72_72);
#line 753 "hash_table.m"
            mercury__hash_table__V_12_13 = (mercury__hash_table__V_70_70 ^ mercury__hash_table__V_71_71);
#line 639 "array.opt"
            mercury__hash_table__V_14_14 = (mercury__hash_table__I_10_10 + (MR_Integer) 1);
#line 636 "array.opt"
            /* direct tailcall eliminated */
#line 636 "array.opt"
            {
#line 636 "array.opt"
              MR_Integer mercury__hash_table__X_9__tmp_copy_9 = mercury__hash_table__V_12_13;
#line 636 "array.opt"
              MR_Integer mercury__hash_table__I_10__tmp_copy_10 = mercury__hash_table__V_14_14;

#line 636 "array.opt"
              mercury__hash_table__I_10_10 = mercury__hash_table__I_10__tmp_copy_10;
#line 636 "array.opt"
              mercury__hash_table__X_9_9 = mercury__hash_table__X_9__tmp_copy_9;
#line 636 "array.opt"
            }
#line 636 "array.opt"
            continue;
#line 636 "array.opt"
          }
#line 635 "array.opt"
        return mercury__hash_table__HeadVar__6_6_12;
#line 635 "array.opt"
      }
#line 635 "array.opt"
      break;
#line 635 "array.opt"
    }
#line 62 "array.opt"
}

#line 75 "array.int"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 75 "array.int"
  MR_Word mercury__hash_table__V_13_13,
#line 75 "array.int"
  MR_ArrayPtr mercury__hash_table__A_6_6,
#line 75 "array.int"
  MR_Integer mercury__hash_table__X_7_7)
#line 75 "array.int"
{
#line 365 "array.opt"
  {
#line 365 "array.opt"
    MR_bool mercury__hash_table__succeeded;
#line 365 "array.opt"
    MR_Integer mercury__hash_table__HeadVar__4_4_8;
#line 365 "array.opt"
    MR_Integer mercury__hash_table__V_8_9;
#line 365 "array.opt"
    MR_Integer mercury__hash_table__V_9_10;
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_for_T1_18;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_for_T1_19;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_6_6 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 2521 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_8_9  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__A_6_6 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 2541 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_9_10  = Max;
#line 217 "array.opt"
}
#line 366 "array.opt"
    {
#line 366 "array.opt"
      return mercury__hash_table__HeadVar__4_4_8 = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__hash_table__V_13_13, mercury__hash_table__A_6_6, mercury__hash_table__X_7_7, mercury__hash_table__V_8_9, mercury__hash_table__V_9_10);
    }
#line 365 "array.opt"
    return mercury__hash_table__HeadVar__4_4_8;
#line 365 "array.opt"
  }
#line 75 "array.int"
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

#line 608 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 608 "hash_table.m"
  MR_Word mercury__hash_table__AL_6,
#line 608 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_7,
#line 608 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_8,
#line 608 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 608 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14)
#line 608 "hash_table.m"
{
#line 614 "hash_table.m"
  while (MR_TRUE)
#line 614 "hash_table.m"
    {
#line 614 "hash_table.m"
      /* tailcall optimized into a loop */
#line 614 "hash_table.m"
      {
#line 614 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 614 "hash_table.m"
#line 614 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__AL_6)) {
#line 614 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 614 "hash_table.m"
          case (MR_Integer) 0:
#line 613 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_Buckets_14 = mercury__hash_table__STATE_VARIABLE_Buckets_0_13;
#line 614 "hash_table.m"
            break;
#line 614 "hash_table.m"
          case (MR_Integer) 1:
#line 615 "hash_table.m"
            {
#line 615 "hash_table.m"
              MR_Box mercury__hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_6, (MR_Integer) 0));
#line 615 "hash_table.m"
              MR_Box mercury__hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_6, (MR_Integer) 1));
#line 615 "hash_table.m"
              MR_Integer mercury__hash_table__H_54;
#line 615 "hash_table.m"
              MR_Word mercury__hash_table__AL0_55;
#line 615 "hash_table.m"
              MR_Word mercury__hash_table__AL_56;
#line 615 "hash_table.m"
              MR_Integer mercury__hash_table__Hash_69;
#line 615 "hash_table.m"
              MR_Integer mercury__hash_table__V_70_70;
#line 335 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_7, (MR_Integer) 1)));
#line 335 "hash_table.m"
              MR_Box mercury__hash_table__conv5_Hash_69;
#line 249 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_74;
#line 249 "array.opt"
              MR_Box mercury__hash_table__conv6_Item;
#line 254 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_75;
#line 254 "array.opt"
              MR_ArrayPtr mercury__hash_table__conv7_Array;

#line 335 "hash_table.m"
              {
#line 335 "hash_table.m"
                mercury__hash_table__func_4(((MR_Box) mercury__hash_table__HashPred_7), mercury__hash_table__K_10, &mercury__hash_table__conv5_Hash_69);
              }
#line 335 "hash_table.m"
              mercury__hash_table__Hash_69 = ((MR_Integer) mercury__hash_table__conv5_Hash_69);
#line 337 "hash_table.m"
              mercury__hash_table__V_70_70 = (mercury__hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 337 "hash_table.m"
              mercury__hash_table__H_54 = (mercury__hash_table__Hash_69 & mercury__hash_table__V_70_70);
#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  mercury__hash_table__H_54 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 2671 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv6_Item  = (MR_Box) Item;
#line 249 "array.opt"
              mercury__hash_table__AL0_55 = ((MR_Word) mercury__hash_table__conv6_Item);
#line 249 "array.opt"
}
#line 632 "hash_table.m"
#line 632 "hash_table.m"
              switch (MR_tag((MR_Word) mercury__hash_table__AL0_55)) {
#line 632 "hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 632 "hash_table.m"
                case (MR_Integer) 0:
#line 631 "hash_table.m"
                  mercury__hash_table__AL_56 = mercury__hash_table__AL_6;
#line 632 "hash_table.m"
                  break;
#line 632 "hash_table.m"
                case (MR_Integer) 1:
#line 636 "hash_table.m"
                  {
#line 636 "hash_table.m"
                    mercury__hash_table__AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 0) = mercury__hash_table__K_10;
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 1) = mercury__hash_table__V_11;
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 2) = ((MR_Box) (mercury__hash_table__AL0_55));
#line 636 "hash_table.m"
                  }
#line 632 "hash_table.m"
                  break;
#line 632 "hash_table.m"
                case (MR_Integer) 2:
#line 636 "hash_table.m"
                  {
#line 636 "hash_table.m"
                    mercury__hash_table__AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 0) = mercury__hash_table__K_10;
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 1) = mercury__hash_table__V_11;
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 2) = ((MR_Box) (mercury__hash_table__AL0_55));
#line 636 "hash_table.m"
                  }
#line 632 "hash_table.m"
                  break;
#line 632 "hash_table.m"
              }
#line 254 "array.opt"
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
#line 254 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 2743 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv7_Array );
#line 254 "array.opt"
              *mercury__hash_table__STATE_VARIABLE_Buckets_14 = (MR_ArrayPtr) mercury__hash_table__conv7_Array;
#line 254 "array.opt"
}
#line 615 "hash_table.m"
            }
#line 614 "hash_table.m"
            break;
#line 614 "hash_table.m"
          case (MR_Integer) 2:
#line 618 "hash_table.m"
            {
#line 618 "hash_table.m"
              MR_Word mercury__hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 2)));
#line 618 "hash_table.m"
              MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_15_15;
#line 618 "hash_table.m"
              MR_Box mercury__hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 0));
#line 618 "hash_table.m"
              MR_Box mercury__hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 1));
#line 618 "hash_table.m"
              MR_Integer mercury__hash_table__H_29;
#line 618 "hash_table.m"
              MR_Word mercury__hash_table__AL0_30;
#line 618 "hash_table.m"
              MR_Word mercury__hash_table__AL_31;
#line 618 "hash_table.m"
              MR_Integer mercury__hash_table__Hash_44;
#line 618 "hash_table.m"
              MR_Integer mercury__hash_table__V_45_45;
#line 335 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_7, (MR_Integer) 1)));
#line 335 "hash_table.m"
              MR_Box mercury__hash_table__conv1_Hash_44;
#line 249 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_72;
#line 249 "array.opt"
              MR_Box mercury__hash_table__conv2_Item;
#line 254 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_73;
#line 254 "array.opt"
              MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 335 "hash_table.m"
              {
#line 335 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__HashPred_7), mercury__hash_table__K_18, &mercury__hash_table__conv1_Hash_44);
              }
#line 335 "hash_table.m"
              mercury__hash_table__Hash_44 = ((MR_Integer) mercury__hash_table__conv1_Hash_44);
#line 337 "hash_table.m"
              mercury__hash_table__V_45_45 = (mercury__hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 337 "hash_table.m"
              mercury__hash_table__H_29 = (mercury__hash_table__Hash_44 & mercury__hash_table__V_45_45);
#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  mercury__hash_table__H_29 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 2817 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 249 "array.opt"
              mercury__hash_table__AL0_30 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 249 "array.opt"
}
#line 632 "hash_table.m"
#line 632 "hash_table.m"
              switch (MR_tag((MR_Word) mercury__hash_table__AL0_30)) {
#line 632 "hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 632 "hash_table.m"
                case (MR_Integer) 0:
#line 631 "hash_table.m"
                  {
#line 631 "hash_table.m"
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "hash_table.m"
                    MR_hl_field(MR_mktag(1), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 631 "hash_table.m"
                    MR_hl_field(MR_mktag(1), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 631 "hash_table.m"
                  }
#line 632 "hash_table.m"
                  break;
#line 632 "hash_table.m"
                case (MR_Integer) 1:
#line 636 "hash_table.m"
                  {
#line 636 "hash_table.m"
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 2) = ((MR_Box) (mercury__hash_table__AL0_30));
#line 636 "hash_table.m"
                  }
#line 632 "hash_table.m"
                  break;
#line 632 "hash_table.m"
                case (MR_Integer) 2:
#line 636 "hash_table.m"
                  {
#line 636 "hash_table.m"
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 636 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 2) = ((MR_Box) (mercury__hash_table__AL0_30));
#line 636 "hash_table.m"
                  }
#line 632 "hash_table.m"
                  break;
#line 632 "hash_table.m"
              }
#line 254 "array.opt"
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
#line 254 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 2897 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 254 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 254 "array.opt"
}
#line 620 "hash_table.m"
              /* direct tailcall eliminated */
#line 620 "hash_table.m"
              {
#line 620 "hash_table.m"
                MR_Word mercury__hash_table__AL__tmp_copy_6 = mercury__hash_table__T_12;
#line 620 "hash_table.m"
                MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__hash_table__STATE_VARIABLE_Buckets_15_15;

#line 620 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 620 "hash_table.m"
                mercury__hash_table__AL_6 = mercury__hash_table__AL__tmp_copy_6;
#line 620 "hash_table.m"
              }
#line 620 "hash_table.m"
              continue;
#line 618 "hash_table.m"
            }
#line 614 "hash_table.m"
            break;
#line 614 "hash_table.m"
        }
#line 614 "hash_table.m"
      }
#line 614 "hash_table.m"
      break;
#line 614 "hash_table.m"
    }
#line 608 "hash_table.m"
}

#line 595 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 595 "hash_table.m"
  MR_Integer mercury__hash_table__I_7,
#line 595 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__OldBuckets_8,
#line 595 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_9,
#line 595 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_10,
#line 595 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 595 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14)
#line 595 "hash_table.m"
{
#line 602 "hash_table.m"
  while (MR_TRUE)
#line 602 "hash_table.m"
    {
#line 602 "hash_table.m"
      /* tailcall optimized into a loop */
#line 602 "hash_table.m"
      {
#line 602 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 600 "hash_table.m"
        MR_Integer mercury__hash_table__V_15_15;
#line 224 "array.opt"
        MR_Word mercury__hash_table__TypeInfo_23_28;

#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__OldBuckets_8 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 2983 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_15  = Max;
#line 224 "array.opt"
}
#line 600 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__I_7 >= mercury__hash_table__V_15_15);
#line 602 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 602 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_Buckets_14 = mercury__hash_table__STATE_VARIABLE_Buckets_0_13;
#line 602 "hash_table.m"
        else
#line 603 "hash_table.m"
          {
#line 603 "hash_table.m"
            MR_Word mercury__hash_table__AL_12;
#line 603 "hash_table.m"
            MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_16_16;
#line 603 "hash_table.m"
            MR_Integer mercury__hash_table__V_17_17;
#line 249 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_25_29;
#line 249 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__OldBuckets_8 , Array);
	Index =  mercury__hash_table__I_7 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 3026 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 249 "array.opt"
            mercury__hash_table__AL_12 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 249 "array.opt"
}
#line 604 "hash_table.m"
            {
#line 604 "hash_table.m"
              mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__hash_table__AL_12, mercury__hash_table__HashPred_9, mercury__hash_table__NumBuckets_10, mercury__hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__hash_table__STATE_VARIABLE_Buckets_16_16);
            }
#line 605 "hash_table.m"
            mercury__hash_table__V_17_17 = (mercury__hash_table__I_7 + (MR_Integer) 1);
#line 605 "hash_table.m"
            /* direct tailcall eliminated */
#line 605 "hash_table.m"
            {
#line 605 "hash_table.m"
              MR_Integer mercury__hash_table__I__tmp_copy_7 = mercury__hash_table__V_17_17;
#line 605 "hash_table.m"
              MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__hash_table__STATE_VARIABLE_Buckets_16_16;

#line 605 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 605 "hash_table.m"
              mercury__hash_table__I_7 = mercury__hash_table__I__tmp_copy_7;
#line 605 "hash_table.m"
            }
#line 605 "hash_table.m"
            continue;
#line 603 "hash_table.m"
          }
#line 602 "hash_table.m"
      }
#line 602 "hash_table.m"
      break;
#line 602 "hash_table.m"
    }
#line 595 "hash_table.m"
}

#line 513 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 513 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 513 "hash_table.m"
  MR_Word mercury__hash_table__AL0_4,
#line 513 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 513 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6)
#line 513 "hash_table.m"
{
#line 521 "hash_table.m"
  {
#line 521 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 521 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
#line 526 "hash_table.m"
      {
#line 526 "hash_table.m"
        MR_Box mercury__hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 0));
#line 526 "hash_table.m"
        MR_Box mercury__hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 1));
#line 526 "hash_table.m"
        MR_Word mercury__hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 2)));

#line 527 "hash_table.m"
        {
#line 527 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__K0_8, mercury__hash_table__K_5);
        }
#line 529 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 528 "hash_table.m"
          {
#line 528 "hash_table.m"
            *mercury__hash_table__AL_6 = mercury__hash_table__T0_10;
#line 528 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 528 "hash_table.m"
          }
#line 529 "hash_table.m"
        else
#line 530 "hash_table.m"
          {
#line 530 "hash_table.m"
            MR_Word mercury__hash_table__T_11;

#line 530 "hash_table.m"
            {
#line 530 "hash_table.m"
              mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__T0_10, mercury__hash_table__K_5, &mercury__hash_table__T_11);
            }
#line 530 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 530 "hash_table.m"
              {
#line 531 "hash_table.m"
                {
#line 531 "hash_table.m"
                  MR_Word base;
#line 531 "hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 531 "hash_table.m"
                  *mercury__hash_table__AL_6 = base;
#line 531 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_8;
#line 531 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V0_9;
#line 531 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T_11));
#line 531 "hash_table.m"
                }
#line 531 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 530 "hash_table.m"
              }
#line 530 "hash_table.m"
          }
#line 526 "hash_table.m"
      }
#line 521 "hash_table.m"
    else
#line 521 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
#line 522 "hash_table.m"
      {
#line 522 "hash_table.m"
        MR_Box mercury__hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_4, (MR_Integer) 0));
#line 522 "hash_table.m"
        MR_Box mercury__hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_4, (MR_Integer) 1));

#line 522 "hash_table.m"
        {
#line 522 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__K_5, mercury__hash_table__V_14_14);
        }
#line 522 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 522 "hash_table.m"
          {
#line 524 "hash_table.m"
            *mercury__hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 522 "hash_table.m"
          }
#line 522 "hash_table.m"
      }
#line 521 "hash_table.m"
    else
#line 521 "hash_table.m"
      mercury__hash_table__succeeded = MR_FALSE;
#line 521 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 521 "hash_table.m"
  }
#line 513 "hash_table.m"
}

#line 393 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 393 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 393 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 393 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 393 "hash_table.m"
  MR_Box mercury__hash_table__V_7,
#line 393 "hash_table.m"
  MR_Word * mercury__hash_table__AL_8)
#line 393 "hash_table.m"
{
#line 401 "hash_table.m"
  {
#line 401 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 401 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
#line 405 "hash_table.m"
      {
#line 405 "hash_table.m"
        MR_Box mercury__hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 0));
#line 405 "hash_table.m"
        MR_Box mercury__hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 1));
#line 405 "hash_table.m"
        MR_Word mercury__hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 2)));

#line 406 "hash_table.m"
        {
#line 406 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__K0_10, mercury__hash_table__K_6);
        }
#line 408 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 407 "hash_table.m"
          {
#line 407 "hash_table.m"
            {
#line 407 "hash_table.m"
              MR_Word base;
#line 407 "hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 407 "hash_table.m"
              *mercury__hash_table__AL_8 = base;
#line 407 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_10;
#line 407 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V_7;
#line 407 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T0_12));
#line 407 "hash_table.m"
            }
#line 407 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 407 "hash_table.m"
          }
#line 408 "hash_table.m"
        else
#line 409 "hash_table.m"
          {
#line 409 "hash_table.m"
            MR_Word mercury__hash_table__T_13;

#line 409 "hash_table.m"
            {
#line 409 "hash_table.m"
              mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__T0_12, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__T_13);
            }
#line 409 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 409 "hash_table.m"
              {
#line 410 "hash_table.m"
                {
#line 410 "hash_table.m"
                  MR_Word base;
#line 410 "hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 410 "hash_table.m"
                  *mercury__hash_table__AL_8 = base;
#line 410 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_10;
#line 410 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V0_11;
#line 410 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T_13));
#line 410 "hash_table.m"
                }
#line 410 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 409 "hash_table.m"
              }
#line 409 "hash_table.m"
          }
#line 405 "hash_table.m"
      }
#line 401 "hash_table.m"
    else
#line 401 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
#line 402 "hash_table.m"
      {
#line 402 "hash_table.m"
        MR_Box mercury__hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_5, (MR_Integer) 0));
#line 402 "hash_table.m"
        MR_Box mercury__hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_5, (MR_Integer) 1));

#line 402 "hash_table.m"
        {
#line 402 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__K_6, mercury__hash_table__V_16_16);
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
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "hash_table.m"
              *mercury__hash_table__AL_8 = base;
#line 403 "hash_table.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__hash_table__K_6;
#line 403 "hash_table.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__hash_table__V_7;
#line 403 "hash_table.m"
            }
#line 403 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 402 "hash_table.m"
          }
#line 402 "hash_table.m"
      }
#line 401 "hash_table.m"
    else
#line 401 "hash_table.m"
      mercury__hash_table__succeeded = MR_FALSE;
#line 401 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 401 "hash_table.m"
  }
#line 393 "hash_table.m"
}

#line 135 "list.int"
static void MR_CALL 
mercury__hash_table__foldl__ho13_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 135 "list.int"
  MR_Integer mercury__hash_table__HeadVar__3_3,
#line 135 "list.int"
  MR_Integer * mercury__hash_table__HeadVar__4_4)
#line 135 "list.int"
{
#line 385 "list.opt"
  while (MR_TRUE)
#line 385 "list.opt"
    {
#line 385 "list.opt"
      /* tailcall optimized into a loop */
#line 385 "list.opt"
      {
#line 385 "list.opt"
        MR_bool mercury__hash_table__succeeded;

#line 385 "list.opt"
        if ((mercury__hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "list.opt"
          *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__HeadVar__3_3;
#line 385 "list.opt"
        else
#line 387 "list.opt"
          {
#line 387 "list.opt"
            MR_Word mercury__hash_table__TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 387 "list.opt"
            MR_Word mercury__hash_table__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 387 "list.opt"
            MR_Word mercury__hash_table__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "list.opt"
            MR_Integer mercury__hash_table__STATE_VARIABLE_A_15_15_13;
#line 387 "list.opt"
            MR_Integer mercury__hash_table__HUA_36;
#line 387 "list.opt"
            MR_Integer mercury__hash_table__V_64_64;
#line 387 "list.opt"
            MR_Integer mercury__hash_table__V_65_65;
#line 387 "list.opt"
            MR_Integer mercury__hash_table__V_66_66;
#line 387 "list.opt"
            MR_Integer mercury__hash_table__V_67_67;

#line 740 "hash_table.m"
            {
#line 740 "hash_table.m"
              mercury__hash_table__generic_hash_2_p_0(mercury__hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__hash_table__H_10_9)), &mercury__hash_table__HUA_36);
            }
#line 753 "hash_table.m"
            mercury__hash_table__V_64_64 = (mercury__hash_table__HeadVar__3_3 << mercury__hash_table__HUA_36);
#line 135 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__foldl__ho13_4_p_in__list_0

	MR_Integer Bits;

		{
#line 135 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 3411 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_67_67  = Bits;
#line 135 "int.opt"
}
#line 754 "hash_table.m"
            mercury__hash_table__V_66_66 = (mercury__hash_table__V_67_67 - mercury__hash_table__HUA_36);
#line 754 "hash_table.m"
            mercury__hash_table__V_65_65 = (mercury__hash_table__HeadVar__3_3 >> mercury__hash_table__V_66_66);
#line 753 "hash_table.m"
            mercury__hash_table__STATE_VARIABLE_A_15_15_13 = (mercury__hash_table__V_64_64 ^ mercury__hash_table__V_65_65);
#line 389 "list.opt"
            /* direct tailcall eliminated */
#line 389 "list.opt"
            {
#line 389 "list.opt"
              MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__T_11_10;
#line 389 "list.opt"
              MR_Integer mercury__hash_table__HeadVar__3__tmp_copy_3 = mercury__hash_table__STATE_VARIABLE_A_15_15_13;

#line 389 "list.opt"
              mercury__hash_table__HeadVar__3_3 = mercury__hash_table__HeadVar__3__tmp_copy_3;
#line 389 "list.opt"
              mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
#line 389 "list.opt"
            }
#line 389 "list.opt"
            continue;
#line 387 "list.opt"
          }
#line 385 "list.opt"
      }
#line 385 "list.opt"
      break;
#line 385 "list.opt"
    }
#line 135 "list.int"
}

#line 284 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0(
#line 284 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_39,
#line 284 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_40,
#line 284 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 284 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 284 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__3_3)
#line 284 "hash_table.m"
{
#line 284 "hash_table.m"
  while (MR_TRUE)
#line 284 "hash_table.m"
    {
#line 284 "hash_table.m"
      /* tailcall optimized into a loop */
#line 284 "hash_table.m"
      {
#line 284 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 284 "hash_table.m"
        MR_Integer mercury__hash_table__CastX_37 = (MR_Integer) mercury__hash_table__HeadVar__2_2;
#line 284 "hash_table.m"
        MR_Integer mercury__hash_table__CastY_38 = (MR_Integer) mercury__hash_table__HeadVar__3_3;

#line 284 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__CastX_37 == mercury__hash_table__CastY_38);
#line 284 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 3486 "hash_table.c"
          *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 284 "hash_table.m"
        else
#line 284 "hash_table.m"
#line 284 "hash_table.m"
          switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) {
#line 284 "hash_table.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 284 "hash_table.m"
            case (MR_Integer) 0:
#line 284 "hash_table.m"
#line 284 "hash_table.m"
              switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
#line 284 "hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 284 "hash_table.m"
                case (MR_Integer) 0:
#line 284 "hash_table.m"
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 284 "hash_table.m"
                  break;
#line 284 "hash_table.m"
                case (MR_Integer) 1:
#line 3510 "hash_table.c"
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 284 "hash_table.m"
                  break;
#line 284 "hash_table.m"
                case (MR_Integer) 2:
#line 3516 "hash_table.c"
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 284 "hash_table.m"
                  break;
#line 284 "hash_table.m"
              }
#line 284 "hash_table.m"
              break;
#line 284 "hash_table.m"
            case (MR_Integer) 1:
#line 284 "hash_table.m"
              {
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 284 "hash_table.m"
#line 284 "hash_table.m"
                switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
#line 284 "hash_table.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 284 "hash_table.m"
                  case (MR_Integer) 0:
#line 3540 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 284 "hash_table.m"
                    break;
#line 284 "hash_table.m"
                  case (MR_Integer) 1:
#line 284 "hash_table.m"
                    {
#line 284 "hash_table.m"
                      MR_Box mercury__hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 284 "hash_table.m"
                      MR_Box mercury__hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 284 "hash_table.m"
                      MR_Word mercury__hash_table__V_15_15;

#line 284 "hash_table.m"
                      {
#line 284 "hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_K_39, &mercury__hash_table__V_15_15, mercury__hash_table__V_47_47, mercury__hash_table__V_13_13);
                      }
#line 3560 "hash_table.c"
                      mercury__hash_table__succeeded = (mercury__hash_table__V_15_15 == (MR_Integer) 0);
#line 284 "hash_table.m"
                      mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 284 "hash_table.m"
                      if (mercury__hash_table__succeeded)
#line 284 "hash_table.m"
                        *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_15_15;
#line 284 "hash_table.m"
                      else
#line 284 "hash_table.m"
                        {
#line 284 "hash_table.m"
                          mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_V_40, mercury__hash_table__HeadVar__1_1, mercury__hash_table__V_46_46, mercury__hash_table__V_14_14);
#line 284 "hash_table.m"
                          return;
                        }
#line 284 "hash_table.m"
                    }
#line 284 "hash_table.m"
                    break;
#line 284 "hash_table.m"
                  case (MR_Integer) 2:
#line 3583 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 284 "hash_table.m"
                    break;
#line 284 "hash_table.m"
                }
#line 284 "hash_table.m"
              }
#line 284 "hash_table.m"
              break;
#line 284 "hash_table.m"
            case (MR_Integer) 2:
#line 284 "hash_table.m"
              {
#line 284 "hash_table.m"
                MR_Word mercury__hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 284 "hash_table.m"
#line 284 "hash_table.m"
                switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
#line 284 "hash_table.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 284 "hash_table.m"
                  case (MR_Integer) 0:
#line 3611 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 284 "hash_table.m"
                    break;
#line 284 "hash_table.m"
                  case (MR_Integer) 1:
#line 3617 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 284 "hash_table.m"
                    break;
#line 284 "hash_table.m"
                  case (MR_Integer) 2:
#line 284 "hash_table.m"
                    {
#line 284 "hash_table.m"
                      MR_Box mercury__hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 284 "hash_table.m"
                      MR_Box mercury__hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 284 "hash_table.m"
                      MR_Word mercury__hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 284 "hash_table.m"
                      MR_Word mercury__hash_table__V_35_35;

#line 284 "hash_table.m"
                      {
#line 284 "hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_K_39, &mercury__hash_table__V_35_35, mercury__hash_table__V_45_45, mercury__hash_table__V_32_32);
                      }
#line 3639 "hash_table.c"
                      mercury__hash_table__succeeded = (mercury__hash_table__V_35_35 == (MR_Integer) 0);
#line 284 "hash_table.m"
                      mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 284 "hash_table.m"
                      if (mercury__hash_table__succeeded)
#line 284 "hash_table.m"
                        *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_35_35;
#line 284 "hash_table.m"
                      else
#line 284 "hash_table.m"
                        {
#line 284 "hash_table.m"
                          MR_Word mercury__hash_table__V_36_36;

#line 284 "hash_table.m"
                          {
#line 284 "hash_table.m"
                            mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_V_40, &mercury__hash_table__V_36_36, mercury__hash_table__V_44_44, mercury__hash_table__V_33_33);
                          }
#line 3659 "hash_table.c"
                          mercury__hash_table__succeeded = (mercury__hash_table__V_36_36 == (MR_Integer) 0);
#line 284 "hash_table.m"
                          mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 284 "hash_table.m"
                          if (mercury__hash_table__succeeded)
#line 284 "hash_table.m"
                            *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_36_36;
#line 284 "hash_table.m"
                          else
#line 284 "hash_table.m"
                            {
#line 284 "hash_table.m"
                              /* direct tailcall eliminated */
#line 284 "hash_table.m"
                              {
#line 284 "hash_table.m"
                                MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__V_43_43;
#line 284 "hash_table.m"
                                MR_Word mercury__hash_table__HeadVar__3__tmp_copy_3 = mercury__hash_table__V_34_34;

#line 284 "hash_table.m"
                                mercury__hash_table__HeadVar__3_3 = mercury__hash_table__HeadVar__3__tmp_copy_3;
#line 284 "hash_table.m"
                                mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
#line 284 "hash_table.m"
                              }
#line 284 "hash_table.m"
                              continue;
#line 284 "hash_table.m"
                            }
#line 284 "hash_table.m"
                        }
#line 284 "hash_table.m"
                    }
#line 284 "hash_table.m"
                    break;
#line 284 "hash_table.m"
                }
#line 284 "hash_table.m"
              }
#line 284 "hash_table.m"
              break;
#line 284 "hash_table.m"
          }
#line 284 "hash_table.m"
      }
#line 284 "hash_table.m"
      break;
#line 284 "hash_table.m"
    }
#line 284 "hash_table.m"
}

#line 284 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0(
#line 284 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_17,
#line 284 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_18,
#line 284 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 284 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2)
#line 284 "hash_table.m"
{
#line 284 "hash_table.m"
  while (MR_TRUE)
#line 284 "hash_table.m"
    {
#line 284 "hash_table.m"
      /* tailcall optimized into a loop */
#line 284 "hash_table.m"
      {
#line 284 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 284 "hash_table.m"
        MR_Integer mercury__hash_table__CastX_15 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 284 "hash_table.m"
        MR_Integer mercury__hash_table__CastY_16 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 284 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__CastX_15 == mercury__hash_table__CastY_16);
#line 284 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 284 "hash_table.m"
          mercury__hash_table__succeeded = MR_TRUE;
#line 284 "hash_table.m"
        else
#line 284 "hash_table.m"
#line 284 "hash_table.m"
          switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__1_1)) {
#line 284 "hash_table.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 284 "hash_table.m"
            case (MR_Integer) 0:
#line 284 "hash_table.m"
              {
#line 284 "hash_table.m"
                MR_Integer mercury__hash_table__CastX_3 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 284 "hash_table.m"
                MR_Integer mercury__hash_table__CastY_4 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 284 "hash_table.m"
                mercury__hash_table__succeeded = (mercury__hash_table__CastY_4 == mercury__hash_table__CastX_3);
#line 284 "hash_table.m"
              }
#line 284 "hash_table.m"
              break;
#line 284 "hash_table.m"
            case (MR_Integer) 1:
#line 284 "hash_table.m"
              {
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_7_7;
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_8_8;

#line 284 "hash_table.m"
                mercury__hash_table__succeeded = ((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 284 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 284 "hash_table.m"
                  {
#line 284 "hash_table.m"
                    mercury__hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 284 "hash_table.m"
                    mercury__hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 3792 "hash_table.c"
                    {
#line 3794 "hash_table.c"
                      mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_17, mercury__hash_table__V_5_5, mercury__hash_table__V_7_7);
                    }
#line 284 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 3799 "hash_table.c"
                      {
#line 3801 "hash_table.c"
                        return mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_V_18, mercury__hash_table__V_6_6, mercury__hash_table__V_8_8);
                      }
#line 284 "hash_table.m"
                  }
#line 284 "hash_table.m"
              }
#line 284 "hash_table.m"
              break;
#line 284 "hash_table.m"
            case (MR_Integer) 2:
#line 284 "hash_table.m"
              {
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 284 "hash_table.m"
                MR_Word mercury__hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_12_12;
#line 284 "hash_table.m"
                MR_Box mercury__hash_table__V_13_13;
#line 284 "hash_table.m"
                MR_Word mercury__hash_table__V_14_14;

#line 284 "hash_table.m"
                mercury__hash_table__succeeded = ((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 284 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 284 "hash_table.m"
                  {
#line 284 "hash_table.m"
                    mercury__hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 284 "hash_table.m"
                    mercury__hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 284 "hash_table.m"
                    mercury__hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 3839 "hash_table.c"
                    {
#line 3841 "hash_table.c"
                      mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_17, mercury__hash_table__V_9_9, mercury__hash_table__V_12_12);
                    }
#line 284 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 284 "hash_table.m"
                      {
#line 3848 "hash_table.c"
                        {
#line 3850 "hash_table.c"
                          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_V_18, mercury__hash_table__V_10_10, mercury__hash_table__V_13_13);
                        }
#line 284 "hash_table.m"
                        if (mercury__hash_table__succeeded)
#line 3855 "hash_table.c"
                          {
#line 3857 "hash_table.c"
                            /* direct tailcall eliminated */
#line 3859 "hash_table.c"
                            {
#line 3861 "hash_table.c"
                              MR_Word mercury__hash_table__HeadVar__1__tmp_copy_1 = mercury__hash_table__V_11_11;
#line 3863 "hash_table.c"
                              MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__V_14_14;

#line 3866 "hash_table.c"
                              mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
#line 3868 "hash_table.c"
                              mercury__hash_table__HeadVar__1_1 = mercury__hash_table__HeadVar__1__tmp_copy_1;
#line 3870 "hash_table.c"
                            }
#line 3872 "hash_table.c"
                            continue;
#line 3874 "hash_table.c"
                          }
#line 284 "hash_table.m"
                      }
#line 284 "hash_table.m"
                  }
#line 284 "hash_table.m"
              }
#line 284 "hash_table.m"
              break;
#line 284 "hash_table.m"
          }
#line 284 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 284 "hash_table.m"
      }
#line 284 "hash_table.m"
      break;
#line 284 "hash_table.m"
    }
#line 284 "hash_table.m"
}

#line 261 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0(
#line 261 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_17,
#line 261 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_18,
#line 261 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 261 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 261 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__3_3)
#line 261 "hash_table.m"
{
#line 261 "hash_table.m"
  {
#line 261 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 261 "hash_table.m"
    MR_Integer mercury__hash_table__CastX_15 = (MR_Integer) mercury__hash_table__HeadVar__2_2;
#line 261 "hash_table.m"
    MR_Integer mercury__hash_table__CastY_16 = (MR_Integer) mercury__hash_table__HeadVar__3_3;

#line 261 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__CastX_15 == mercury__hash_table__CastY_16);
#line 261 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 3925 "hash_table.c"
      *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "hash_table.m"
    else
#line 261 "hash_table.m"
      {
#line 261 "hash_table.m"
        MR_Integer mercury__hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "hash_table.m"
        MR_Integer mercury__hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "hash_table.m"
        MR_Word mercury__hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 261 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 3)));
#line 261 "hash_table.m"
        MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "hash_table.m"
        MR_Integer mercury__hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "hash_table.m"
        MR_Word mercury__hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 261 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 3)));
#line 261 "hash_table.m"
        MR_Word mercury__hash_table__V_12_12;

#line 32 "private_builtin.opt"
        mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 < mercury__hash_table__V_8_8);
#line 35 "private_builtin.opt"
        if (mercury__hash_table__succeeded)
#line 34 "private_builtin.opt"
          mercury__hash_table__V_12_12 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
        else
#line 40 "private_builtin.opt"
          {
#line 37 "private_builtin.opt"
            mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 == mercury__hash_table__V_8_8);
#line 40 "private_builtin.opt"
            if (mercury__hash_table__succeeded)
#line 39 "private_builtin.opt"
              mercury__hash_table__V_12_12 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
            else
#line 41 "private_builtin.opt"
              mercury__hash_table__V_12_12 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
          }
#line 3972 "hash_table.c"
        mercury__hash_table__succeeded = (mercury__hash_table__V_12_12 == (MR_Integer) 0);
#line 261 "hash_table.m"
        mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 261 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 261 "hash_table.m"
          *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_12_12;
#line 261 "hash_table.m"
        else
#line 261 "hash_table.m"
          {
#line 261 "hash_table.m"
            MR_Word mercury__hash_table__V_13_13;

#line 32 "private_builtin.opt"
            mercury__hash_table__succeeded = (mercury__hash_table__V_5_5 < mercury__hash_table__V_9_9);
#line 35 "private_builtin.opt"
            if (mercury__hash_table__succeeded)
#line 34 "private_builtin.opt"
              mercury__hash_table__V_13_13 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
            else
#line 40 "private_builtin.opt"
              {
#line 37 "private_builtin.opt"
                mercury__hash_table__succeeded = (mercury__hash_table__V_5_5 == mercury__hash_table__V_9_9);
#line 40 "private_builtin.opt"
                if (mercury__hash_table__succeeded)
#line 39 "private_builtin.opt"
                  mercury__hash_table__V_13_13 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                else
#line 41 "private_builtin.opt"
                  mercury__hash_table__V_13_13 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
              }
#line 4009 "hash_table.c"
            mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 == (MR_Integer) 0);
#line 261 "hash_table.m"
            mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 261 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 261 "hash_table.m"
              *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_13_13;
#line 261 "hash_table.m"
            else
#line 261 "hash_table.m"
              {
#line 261 "hash_table.m"
                MR_Word mercury__hash_table__V_14_14;

#line 261 "hash_table.m"
                {
#line 261 "hash_table.m"
                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__hash_table__V_14_14, (MR_Word) mercury__hash_table__V_6_6, (MR_Word) mercury__hash_table__V_10_10);
                }
#line 4029 "hash_table.c"
                mercury__hash_table__succeeded = (mercury__hash_table__V_14_14 == (MR_Integer) 0);
#line 261 "hash_table.m"
                mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 261 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 261 "hash_table.m"
                  *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_14_14;
#line 261 "hash_table.m"
                else
#line 261 "hash_table.m"
                  {
#line 261 "hash_table.m"
                    MR_Word mercury__hash_table__TypeCtorInfo_25_25 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 261 "hash_table.m"
                    MR_Word mercury__hash_table__TypeInfo_26_26;

#line 4046 "hash_table.c"
                    {
#line 4048 "hash_table.c"
                      mercury__hash_table__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4050 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_25_25));
#line 4052 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_17));
#line 4054 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_18));
#line 4056 "hash_table.c"
                    }
#line 261 "hash_table.m"
                    {
#line 261 "hash_table.m"
                      mercury__array____Compare____array_1_0(mercury__hash_table__TypeInfo_26_26, mercury__hash_table__HeadVar__1_1, (MR_ArrayPtr) mercury__hash_table__V_7_7, (MR_ArrayPtr) mercury__hash_table__V_11_11);
#line 261 "hash_table.m"
                      return;
                    }
#line 261 "hash_table.m"
                  }
#line 261 "hash_table.m"
              }
#line 261 "hash_table.m"
          }
#line 261 "hash_table.m"
      }
#line 261 "hash_table.m"
  }
#line 261 "hash_table.m"
}

#line 261 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0(
#line 261 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_13,
#line 261 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_14,
#line 261 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 261 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2)
#line 261 "hash_table.m"
{
#line 261 "hash_table.m"
  {
#line 261 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 261 "hash_table.m"
    MR_Integer mercury__hash_table__CastX_11 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 261 "hash_table.m"
    MR_Integer mercury__hash_table__CastY_12 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 261 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__CastX_11 == mercury__hash_table__CastY_12);
#line 261 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 261 "hash_table.m"
      mercury__hash_table__succeeded = MR_TRUE;
#line 261 "hash_table.m"
    else
#line 261 "hash_table.m"
      {
#line 261 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_15_15;
#line 261 "hash_table.m"
        MR_Word mercury__hash_table__TypeInfo_16_16;
#line 261 "hash_table.m"
        MR_Integer mercury__hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "hash_table.m"
        MR_Integer mercury__hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "hash_table.m"
        MR_Word mercury__hash_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 261 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));
#line 261 "hash_table.m"
        MR_Integer mercury__hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "hash_table.m"
        MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "hash_table.m"
        MR_Word mercury__hash_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 261 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 3)));

#line 4131 "hash_table.c"
        mercury__hash_table__succeeded = (mercury__hash_table__V_3_3 == mercury__hash_table__V_7_7);
#line 261 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 261 "hash_table.m"
          {
#line 4137 "hash_table.c"
            mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 == mercury__hash_table__V_8_8);
#line 261 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 261 "hash_table.m"
              {
#line 4143 "hash_table.c"
                {
#line 4145 "hash_table.c"
                  mercury__hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__hash_table__V_5_5, (MR_Word) mercury__hash_table__V_9_9);
                }
#line 261 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 261 "hash_table.m"
                  {
#line 4152 "hash_table.c"
                    mercury__hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 4154 "hash_table.c"
                    {
#line 4156 "hash_table.c"
                      mercury__hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4158 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_15_15));
#line 4160 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_13));
#line 4162 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_14));
#line 4164 "hash_table.c"
                    }
#line 4166 "hash_table.c"
                    {
#line 4168 "hash_table.c"
                      return mercury__hash_table__succeeded = mercury__array____Unify____array_1_0(mercury__hash_table__TypeInfo_16_16, (MR_ArrayPtr) mercury__hash_table__V_6_6, (MR_ArrayPtr) mercury__hash_table__V_10_10);
                    }
#line 261 "hash_table.m"
                  }
#line 261 "hash_table.m"
              }
#line 261 "hash_table.m"
          }
#line 261 "hash_table.m"
      }
#line 261 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 261 "hash_table.m"
  }
#line 261 "hash_table.m"
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

#line 278 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____buckets_2_0(
#line 278 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 278 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 278 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 278 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__2_2,
#line 278 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__3_3)
#line 278 "hash_table.m"
{
#line 278 "hash_table.m"
  {
#line 278 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 278 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 278 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_9_9;
#line 278 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar1_4 = mercury__hash_table__HeadVar__2_2;
#line 278 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar2_5 = mercury__hash_table__HeadVar__3_3;

#line 4280 "hash_table.c"
    {
#line 4282 "hash_table.c"
      mercury__hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4284 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_8_8));
#line 4286 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_6));
#line 4288 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_7));
#line 4290 "hash_table.c"
    }
#line 278 "hash_table.m"
    {
#line 278 "hash_table.m"
      mercury__array____Compare____array_1_0(mercury__hash_table__TypeInfo_9_9, mercury__hash_table__HeadVar__1_1, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar1_4, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar2_5);
#line 278 "hash_table.m"
      return;
    }
#line 278 "hash_table.m"
  }
#line 278 "hash_table.m"
}

#line 278 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0(
#line 278 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_5,
#line 278 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_6,
#line 278 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__1_1,
#line 278 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__2_2)
#line 278 "hash_table.m"
{
#line 278 "hash_table.m"
  {
#line 278 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 278 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 278 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_8_8;
#line 278 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar1_3 = mercury__hash_table__HeadVar__1_1;
#line 278 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar2_4 = mercury__hash_table__HeadVar__2_2;

#line 4330 "hash_table.c"
    {
#line 4332 "hash_table.c"
      mercury__hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4334 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_7_7));
#line 4336 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_5));
#line 4338 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_6));
#line 4340 "hash_table.c"
    }
#line 278 "hash_table.m"
    {
#line 278 "hash_table.m"
      return mercury__hash_table__succeeded = mercury__array____Unify____array_1_0(mercury__hash_table__TypeInfo_8_8, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar1_3, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar2_4);
    }
#line 278 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 278 "hash_table.m"
  }
#line 278 "hash_table.m"
}

#line 787 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_5(
#line 787 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 787 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 787 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 787 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 787 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 787 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 787 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 787 "hash_table.m"
{
#line 792 "hash_table.m"
  while (MR_TRUE)
#line 792 "hash_table.m"
    {
#line 792 "hash_table.m"
      /* tailcall optimized into a loop */
#line 792 "hash_table.m"
      {
#line 792 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 792 "hash_table.m"
#line 792 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 792 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 792 "hash_table.m"
          case (MR_Integer) 0:
#line 791 "hash_table.m"
            {
#line 791 "hash_table.m"
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 791 "hash_table.m"
              mercury__hash_table__succeeded = MR_TRUE;
#line 791 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 1:
#line 793 "hash_table.m"
            {
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 794 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 794 "hash_table.m"
              {
#line 794 "hash_table.m"
                return mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 793 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 2:
#line 796 "hash_table.m"
            {
#line 796 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 797 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 797 "hash_table.m"
              {
#line 797 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 796 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 798 "hash_table.m"
                {
#line 798 "hash_table.m"
                  /* direct tailcall eliminated */
#line 798 "hash_table.m"
                  {
#line 798 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 798 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 798 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 798 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 798 "hash_table.m"
                  }
#line 798 "hash_table.m"
                  continue;
#line 798 "hash_table.m"
                }
#line 796 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
        }
#line 792 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 792 "hash_table.m"
      }
#line 792 "hash_table.m"
      break;
#line 792 "hash_table.m"
    }
#line 787 "hash_table.m"
}

#line 786 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_4(
#line 786 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 786 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 786 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 786 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 786 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 786 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 786 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 786 "hash_table.m"
{
#line 792 "hash_table.m"
  while (MR_TRUE)
#line 792 "hash_table.m"
    {
#line 792 "hash_table.m"
      /* tailcall optimized into a loop */
#line 792 "hash_table.m"
      {
#line 792 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 792 "hash_table.m"
#line 792 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 792 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 792 "hash_table.m"
          case (MR_Integer) 0:
#line 791 "hash_table.m"
            {
#line 791 "hash_table.m"
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 791 "hash_table.m"
              mercury__hash_table__succeeded = MR_TRUE;
#line 791 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 1:
#line 793 "hash_table.m"
            {
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 794 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 794 "hash_table.m"
              {
#line 794 "hash_table.m"
                return mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 793 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 2:
#line 796 "hash_table.m"
            {
#line 796 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 797 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 797 "hash_table.m"
              {
#line 797 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 796 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 798 "hash_table.m"
                {
#line 798 "hash_table.m"
                  /* direct tailcall eliminated */
#line 798 "hash_table.m"
                  {
#line 798 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 798 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 798 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 798 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 798 "hash_table.m"
                  }
#line 798 "hash_table.m"
                  continue;
#line 798 "hash_table.m"
                }
#line 796 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
        }
#line 792 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 792 "hash_table.m"
      }
#line 792 "hash_table.m"
      break;
#line 792 "hash_table.m"
    }
#line 786 "hash_table.m"
}

#line 785 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_3(
#line 785 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 785 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 785 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 785 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 785 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 785 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 785 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 785 "hash_table.m"
{
#line 792 "hash_table.m"
  while (MR_TRUE)
#line 792 "hash_table.m"
    {
#line 792 "hash_table.m"
      /* tailcall optimized into a loop */
#line 792 "hash_table.m"
      {
#line 792 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 792 "hash_table.m"
#line 792 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 792 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 792 "hash_table.m"
          case (MR_Integer) 0:
#line 791 "hash_table.m"
            {
#line 791 "hash_table.m"
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 791 "hash_table.m"
              mercury__hash_table__succeeded = MR_TRUE;
#line 791 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 1:
#line 793 "hash_table.m"
            {
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 794 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 794 "hash_table.m"
              {
#line 794 "hash_table.m"
                return mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 793 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 2:
#line 796 "hash_table.m"
            {
#line 796 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 797 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 797 "hash_table.m"
              {
#line 797 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 796 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 798 "hash_table.m"
                {
#line 798 "hash_table.m"
                  /* direct tailcall eliminated */
#line 798 "hash_table.m"
                  {
#line 798 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 798 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 798 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 798 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 798 "hash_table.m"
                  }
#line 798 "hash_table.m"
                  continue;
#line 798 "hash_table.m"
                }
#line 796 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
        }
#line 792 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 792 "hash_table.m"
      }
#line 792 "hash_table.m"
      break;
#line 792 "hash_table.m"
    }
#line 785 "hash_table.m"
}

#line 784 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_2(
#line 784 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 784 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 784 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 784 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 784 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 784 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 784 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 784 "hash_table.m"
{
#line 792 "hash_table.m"
  while (MR_TRUE)
#line 792 "hash_table.m"
    {
#line 792 "hash_table.m"
      /* tailcall optimized into a loop */
#line 792 "hash_table.m"
      {
#line 792 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 792 "hash_table.m"
#line 792 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 792 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 792 "hash_table.m"
          case (MR_Integer) 0:
#line 791 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 1:
#line 793 "hash_table.m"
            {
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 794 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 794 "hash_table.m"
              {
#line 794 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
#line 794 "hash_table.m"
                return;
              }
#line 793 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 2:
#line 796 "hash_table.m"
            {
#line 796 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 797 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 797 "hash_table.m"
              {
#line 797 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 798 "hash_table.m"
              /* direct tailcall eliminated */
#line 798 "hash_table.m"
              {
#line 798 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 798 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 798 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 798 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 798 "hash_table.m"
              }
#line 798 "hash_table.m"
              continue;
#line 796 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
        }
#line 792 "hash_table.m"
      }
#line 792 "hash_table.m"
      break;
#line 792 "hash_table.m"
    }
#line 784 "hash_table.m"
}

#line 783 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_1(
#line 783 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 783 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 783 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 783 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 783 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 783 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 783 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 783 "hash_table.m"
{
#line 792 "hash_table.m"
  while (MR_TRUE)
#line 792 "hash_table.m"
    {
#line 792 "hash_table.m"
      /* tailcall optimized into a loop */
#line 792 "hash_table.m"
      {
#line 792 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 792 "hash_table.m"
#line 792 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 792 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 792 "hash_table.m"
          case (MR_Integer) 0:
#line 791 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 1:
#line 793 "hash_table.m"
            {
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 794 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 794 "hash_table.m"
              {
#line 794 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
#line 794 "hash_table.m"
                return;
              }
#line 793 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 2:
#line 796 "hash_table.m"
            {
#line 796 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 797 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 797 "hash_table.m"
              {
#line 797 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 798 "hash_table.m"
              /* direct tailcall eliminated */
#line 798 "hash_table.m"
              {
#line 798 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 798 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 798 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 798 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 798 "hash_table.m"
              }
#line 798 "hash_table.m"
              continue;
#line 796 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
        }
#line 792 "hash_table.m"
      }
#line 792 "hash_table.m"
      break;
#line 792 "hash_table.m"
    }
#line 783 "hash_table.m"
}

#line 782 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_0(
#line 782 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 782 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 782 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 782 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 782 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 782 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 782 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 782 "hash_table.m"
{
#line 792 "hash_table.m"
  while (MR_TRUE)
#line 792 "hash_table.m"
    {
#line 792 "hash_table.m"
      /* tailcall optimized into a loop */
#line 792 "hash_table.m"
      {
#line 792 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 792 "hash_table.m"
#line 792 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 792 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 792 "hash_table.m"
          case (MR_Integer) 0:
#line 791 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 1:
#line 793 "hash_table.m"
            {
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 793 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 794 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 794 "hash_table.m"
              {
#line 794 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
#line 794 "hash_table.m"
                return;
              }
#line 793 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
          case (MR_Integer) 2:
#line 796 "hash_table.m"
            {
#line 796 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 796 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 797 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 797 "hash_table.m"
              {
#line 797 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 798 "hash_table.m"
              /* direct tailcall eliminated */
#line 798 "hash_table.m"
              {
#line 798 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 798 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 798 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 798 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 798 "hash_table.m"
              }
#line 798 "hash_table.m"
              continue;
#line 796 "hash_table.m"
            }
#line 792 "hash_table.m"
            break;
#line 792 "hash_table.m"
        }
#line 792 "hash_table.m"
      }
#line 792 "hash_table.m"
      break;
#line 792 "hash_table.m"
    }
#line 782 "hash_table.m"
}

#line 763 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_f_4_p_1(
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_17,
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 763 "hash_table.m"
  MR_Box mercury__hash_table__A0_7,
#line 763 "hash_table.m"
  MR_Box * mercury__hash_table__A_8)
#line 763 "hash_table.m"
{
#line 769 "hash_table.m"
  while (MR_TRUE)
#line 769 "hash_table.m"
    {
#line 769 "hash_table.m"
      /* tailcall optimized into a loop */
#line 769 "hash_table.m"
      {
#line 769 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 769 "hash_table.m"
#line 769 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 769 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 769 "hash_table.m"
          case (MR_Integer) 0:
#line 768 "hash_table.m"
            *mercury__hash_table__A_8 = mercury__hash_table__A0_7;
#line 769 "hash_table.m"
            break;
#line 769 "hash_table.m"
          case (MR_Integer) 1:
#line 770 "hash_table.m"
            {
#line 770 "hash_table.m"
              MR_Box mercury__hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 770 "hash_table.m"
              MR_Box mercury__hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 771 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 771 "hash_table.m"
              {
#line 771 "hash_table.m"
                *mercury__hash_table__A_8 = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_9, mercury__hash_table__V_10, mercury__hash_table__A0_7);
              }
#line 770 "hash_table.m"
            }
#line 769 "hash_table.m"
            break;
#line 769 "hash_table.m"
          case (MR_Integer) 2:
#line 773 "hash_table.m"
            {
#line 773 "hash_table.m"
              MR_Word mercury__hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 773 "hash_table.m"
              MR_Box mercury__hash_table__A1_12;
#line 773 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 773 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 774 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 774 "hash_table.m"
              {
#line 774 "hash_table.m"
                mercury__hash_table__A1_12 = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_13, mercury__hash_table__V_14, mercury__hash_table__A0_7);
              }
#line 775 "hash_table.m"
              /* direct tailcall eliminated */
#line 775 "hash_table.m"
              {
#line 775 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_11;
#line 775 "hash_table.m"
                MR_Box mercury__hash_table__A0__tmp_copy_7 = mercury__hash_table__A1_12;

#line 775 "hash_table.m"
                mercury__hash_table__A0_7 = mercury__hash_table__A0__tmp_copy_7;
#line 775 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 775 "hash_table.m"
              }
#line 775 "hash_table.m"
              continue;
#line 773 "hash_table.m"
            }
#line 769 "hash_table.m"
            break;
#line 769 "hash_table.m"
        }
#line 769 "hash_table.m"
      }
#line 769 "hash_table.m"
      break;
#line 769 "hash_table.m"
    }
#line 763 "hash_table.m"
}

#line 762 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_f_4_p_0(
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_17,
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 762 "hash_table.m"
  MR_Box mercury__hash_table__A0_7,
#line 762 "hash_table.m"
  MR_Box * mercury__hash_table__A_8)
#line 762 "hash_table.m"
{
#line 769 "hash_table.m"
  while (MR_TRUE)
#line 769 "hash_table.m"
    {
#line 769 "hash_table.m"
      /* tailcall optimized into a loop */
#line 769 "hash_table.m"
      {
#line 769 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 769 "hash_table.m"
#line 769 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 769 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 769 "hash_table.m"
          case (MR_Integer) 0:
#line 768 "hash_table.m"
            *mercury__hash_table__A_8 = mercury__hash_table__A0_7;
#line 769 "hash_table.m"
            break;
#line 769 "hash_table.m"
          case (MR_Integer) 1:
#line 770 "hash_table.m"
            {
#line 770 "hash_table.m"
              MR_Box mercury__hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 770 "hash_table.m"
              MR_Box mercury__hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 771 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 771 "hash_table.m"
              {
#line 771 "hash_table.m"
                *mercury__hash_table__A_8 = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_9, mercury__hash_table__V_10, mercury__hash_table__A0_7);
              }
#line 770 "hash_table.m"
            }
#line 769 "hash_table.m"
            break;
#line 769 "hash_table.m"
          case (MR_Integer) 2:
#line 773 "hash_table.m"
            {
#line 773 "hash_table.m"
              MR_Word mercury__hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 773 "hash_table.m"
              MR_Box mercury__hash_table__A1_12;
#line 773 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 773 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 774 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 774 "hash_table.m"
              {
#line 774 "hash_table.m"
                mercury__hash_table__A1_12 = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_13, mercury__hash_table__V_14, mercury__hash_table__A0_7);
              }
#line 775 "hash_table.m"
              /* direct tailcall eliminated */
#line 775 "hash_table.m"
              {
#line 775 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_11;
#line 775 "hash_table.m"
                MR_Box mercury__hash_table__A0__tmp_copy_7 = mercury__hash_table__A1_12;

#line 775 "hash_table.m"
                mercury__hash_table__A0_7 = mercury__hash_table__A0__tmp_copy_7;
#line 775 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 775 "hash_table.m"
              }
#line 775 "hash_table.m"
              continue;
#line 773 "hash_table.m"
            }
#line 769 "hash_table.m"
            break;
#line 769 "hash_table.m"
        }
#line 769 "hash_table.m"
      }
#line 769 "hash_table.m"
      break;
#line 769 "hash_table.m"
    }
#line 762 "hash_table.m"
}

#line 582 "hash_table.m"
static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
#line 582 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_20,
#line 582 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_21,
#line 582 "hash_table.m"
  MR_Integer mercury__hash_table__NumOccupants_6,
#line 582 "hash_table.m"
  MR_Integer mercury__hash_table__MaxOccupants0_7,
#line 582 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_8,
#line 582 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__Buckets0_9)
#line 582 "hash_table.m"
{
#line 587 "hash_table.m"
  {
#line 587 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 587 "hash_table.m"
    MR_Word mercury__hash_table__HT_10;
#line 587 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 587 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_23_23;
#line 587 "hash_table.m"
    MR_Integer mercury__hash_table__NumBuckets0_11;
#line 587 "hash_table.m"
    MR_Integer mercury__hash_table__NumBuckets_12;
#line 587 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_13;
#line 587 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets1_14;
#line 587 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_15;
#line 587 "hash_table.m"
    MR_Word mercury__hash_table__V_18_18;
#line 224 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_26;
#line 591 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__conv0_Buckets1_14;

#line 5350 "hash_table.c"
    {
#line 5352 "hash_table.c"
      mercury__hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5354 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_22_22));
#line 5356 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_20));
#line 5358 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_21));
#line 5360 "hash_table.c"
    }
#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__expand_4_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 5375 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__NumBuckets0_11  = Max;
#line 224 "array.opt"
}
#line 589 "hash_table.m"
    mercury__hash_table__NumBuckets_12 = (mercury__hash_table__NumBuckets0_11 + mercury__hash_table__NumBuckets0_11);
#line 590 "hash_table.m"
    mercury__hash_table__MaxOccupants_13 = (mercury__hash_table__MaxOccupants0_7 + mercury__hash_table__MaxOccupants0_7);
#line 591 "hash_table.m"
    mercury__hash_table__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "hash_table.m"
    {
#line 591 "hash_table.m"
      mercury__array__init_3_p_0(mercury__hash_table__TypeInfo_23_23, mercury__hash_table__NumBuckets_12, ((MR_Box) (mercury__hash_table__V_18_18)), &mercury__hash_table__conv0_Buckets1_14);
    }
#line 591 "hash_table.m"
    mercury__hash_table__Buckets1_14 = (MR_ArrayPtr) mercury__hash_table__conv0_Buckets1_14;
#line 592 "hash_table.m"
    {
#line 592 "hash_table.m"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0((MR_Integer) 0, mercury__hash_table__Buckets0_9, mercury__hash_table__HashPred_8, mercury__hash_table__NumBuckets_12, mercury__hash_table__Buckets1_14, &mercury__hash_table__Buckets_15);
    }
#line 593 "hash_table.m"
    {
#line 593 "hash_table.m"
      mercury__hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 593 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_6));
#line 593 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_13));
#line 593 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 2) = ((MR_Box) (mercury__hash_table__HashPred_8));
#line 593 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 3) = ((MR_Box) (mercury__hash_table__Buckets_15));
#line 593 "hash_table.m"
    }
#line 587 "hash_table.m"
    return mercury__hash_table__HT_10;
#line 587 "hash_table.m"
  }
#line 582 "hash_table.m"
}

#line 562 "hash_table.m"
void MR_CALL 
mercury__hash_table__from_assoc_list_2_3_p_0(
#line 562 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 562 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 562 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 562 "hash_table.m"
  MR_Word mercury__hash_table__STATE_VARIABLE_HT_0_2,
#line 562 "hash_table.m"
  MR_Word * mercury__hash_table__STATE_VARIABLE_HT_3)
#line 562 "hash_table.m"
{
#line 565 "hash_table.m"
  while (MR_TRUE)
#line 565 "hash_table.m"
    {
#line 565 "hash_table.m"
      /* tailcall optimized into a loop */
#line 565 "hash_table.m"
      {
#line 565 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 565 "hash_table.m"
        if ((mercury__hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_HT_3 = mercury__hash_table__STATE_VARIABLE_HT_0_2;
#line 565 "hash_table.m"
        else
#line 566 "hash_table.m"
          {
#line 566 "hash_table.m"
            MR_Box mercury__hash_table__K_7;
#line 566 "hash_table.m"
            MR_Box mercury__hash_table__V_8;
#line 566 "hash_table.m"
            MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 566 "hash_table.m"
            MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 566 "hash_table.m"
            MR_Word mercury__hash_table__STATE_VARIABLE_HT_14_14;

#line 566 "hash_table.m"
            mercury__hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__hash_table__V_13_13, (MR_Integer) 0));
#line 566 "hash_table.m"
            mercury__hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__hash_table__V_13_13, (MR_Integer) 1));
#line 389 "hash_table.m"
            {
#line 389 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_HT_14_14 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__STATE_VARIABLE_HT_0_2, mercury__hash_table__K_7, mercury__hash_table__V_8);
            }
#line 568 "hash_table.m"
            /* direct tailcall eliminated */
#line 568 "hash_table.m"
            {
#line 568 "hash_table.m"
              MR_Word mercury__hash_table__HeadVar__1__tmp_copy_1 = mercury__hash_table__T_9;
#line 568 "hash_table.m"
              MR_Word mercury__hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__hash_table__STATE_VARIABLE_HT_14_14;

#line 568 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_HT_0_2 = mercury__hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
#line 568 "hash_table.m"
              mercury__hash_table__HeadVar__1_1 = mercury__hash_table__HeadVar__1__tmp_copy_1;
#line 568 "hash_table.m"
            }
#line 568 "hash_table.m"
            continue;
#line 566 "hash_table.m"
          }
#line 565 "hash_table.m"
      }
#line 565 "hash_table.m"
      break;
#line 565 "hash_table.m"
    }
#line 562 "hash_table.m"
}

#line 540 "hash_table.m"
void MR_CALL 
mercury__hash_table__to_assoc_list_2_3_p_0(
#line 540 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 540 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 540 "hash_table.m"
  MR_Word mercury__hash_table__X_4,
#line 540 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 540 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6)
#line 540 "hash_table.m"
{
#line 547 "hash_table.m"
  while (MR_TRUE)
#line 547 "hash_table.m"
    {
#line 547 "hash_table.m"
      /* tailcall optimized into a loop */
#line 547 "hash_table.m"
      {
#line 547 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 547 "hash_table.m"
#line 547 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__X_4)) {
#line 547 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 547 "hash_table.m"
          case (MR_Integer) 0:
#line 546 "hash_table.m"
            *mercury__hash_table__AL_6 = mercury__hash_table__AL0_5;
#line 547 "hash_table.m"
            break;
#line 547 "hash_table.m"
          case (MR_Integer) 1:
#line 548 "hash_table.m"
            {
#line 548 "hash_table.m"
              MR_Box mercury__hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__X_4, (MR_Integer) 0));
#line 548 "hash_table.m"
              MR_Box mercury__hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__X_4, (MR_Integer) 1));
#line 548 "hash_table.m"
              MR_Word mercury__hash_table__V_12_12;

#line 549 "hash_table.m"
              {
#line 549 "hash_table.m"
                mercury__hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_12_12, 0) = mercury__hash_table__K_7;
#line 549 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_12_12, 1) = mercury__hash_table__V_8;
#line 549 "hash_table.m"
              }
#line 549 "hash_table.m"
              {
#line 549 "hash_table.m"
                MR_Word base;
#line 549 "hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "hash_table.m"
                *mercury__hash_table__AL_6 = base;
#line 549 "hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__hash_table__V_12_12));
#line 549 "hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__hash_table__AL0_5));
#line 549 "hash_table.m"
              }
#line 548 "hash_table.m"
            }
#line 547 "hash_table.m"
            break;
#line 547 "hash_table.m"
          case (MR_Integer) 2:
#line 551 "hash_table.m"
            {
#line 551 "hash_table.m"
              MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 2)));
#line 551 "hash_table.m"
              MR_Word mercury__hash_table__AL1_10;
#line 551 "hash_table.m"
              MR_Word mercury__hash_table__V_11_11;
#line 551 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 0));
#line 551 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 1));

#line 552 "hash_table.m"
              {
#line 552 "hash_table.m"
                mercury__hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 552 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_11_11, 0) = mercury__hash_table__K_13;
#line 552 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_11_11, 1) = mercury__hash_table__V_14;
#line 552 "hash_table.m"
              }
#line 552 "hash_table.m"
              {
#line 552 "hash_table.m"
                mercury__hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL1_10, 0) = ((MR_Box) (mercury__hash_table__V_11_11));
#line 552 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL1_10, 1) = ((MR_Box) (mercury__hash_table__AL0_5));
#line 552 "hash_table.m"
              }
#line 553 "hash_table.m"
              /* direct tailcall eliminated */
#line 553 "hash_table.m"
              {
#line 553 "hash_table.m"
                MR_Word mercury__hash_table__X__tmp_copy_4 = mercury__hash_table__T_9;
#line 553 "hash_table.m"
                MR_Word mercury__hash_table__AL0__tmp_copy_5 = mercury__hash_table__AL1_10;

#line 553 "hash_table.m"
                mercury__hash_table__AL0_5 = mercury__hash_table__AL0__tmp_copy_5;
#line 553 "hash_table.m"
                mercury__hash_table__X_4 = mercury__hash_table__X__tmp_copy_4;
#line 553 "hash_table.m"
              }
#line 553 "hash_table.m"
              continue;
#line 551 "hash_table.m"
            }
#line 547 "hash_table.m"
            break;
#line 547 "hash_table.m"
        }
#line 547 "hash_table.m"
      }
#line 547 "hash_table.m"
      break;
#line 547 "hash_table.m"
    }
#line 540 "hash_table.m"
}

#line 423 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__alist_search_3_p_0(
#line 423 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_10,
#line 423 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_11,
#line 423 "hash_table.m"
  MR_Word mercury__hash_table__AL_4,
#line 423 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 423 "hash_table.m"
  MR_Box * mercury__hash_table__V_6)
#line 423 "hash_table.m"
{
#line 430 "hash_table.m"
  while (MR_TRUE)
#line 430 "hash_table.m"
    {
#line 430 "hash_table.m"
      /* tailcall optimized into a loop */
#line 430 "hash_table.m"
      {
#line 430 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 430 "hash_table.m"
        if (((MR_tag((MR_Word) mercury__hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
#line 433 "hash_table.m"
          {
#line 433 "hash_table.m"
            MR_Box mercury__hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 0));
#line 433 "hash_table.m"
            MR_Box mercury__hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 1));
#line 433 "hash_table.m"
            MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 2)));

#line 434 "hash_table.m"
            {
#line 434 "hash_table.m"
              mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_10, mercury__hash_table__HK_7, mercury__hash_table__K_5);
            }
#line 436 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 435 "hash_table.m"
              {
#line 435 "hash_table.m"
                *mercury__hash_table__V_6 = mercury__hash_table__HV_8;
#line 435 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 435 "hash_table.m"
              }
#line 436 "hash_table.m"
            else
#line 437 "hash_table.m"
              {
#line 437 "hash_table.m"
                /* direct tailcall eliminated */
#line 437 "hash_table.m"
                {
#line 437 "hash_table.m"
                  MR_Word mercury__hash_table__AL__tmp_copy_4 = mercury__hash_table__T_9;

#line 437 "hash_table.m"
                  mercury__hash_table__AL_4 = mercury__hash_table__AL__tmp_copy_4;
#line 437 "hash_table.m"
                }
#line 437 "hash_table.m"
                continue;
#line 437 "hash_table.m"
              }
#line 433 "hash_table.m"
          }
#line 430 "hash_table.m"
        else
#line 430 "hash_table.m"
        if (((MR_tag((MR_Word) mercury__hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
#line 431 "hash_table.m"
          {
#line 431 "hash_table.m"
            MR_Box mercury__hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_4, (MR_Integer) 0));

#line 431 "hash_table.m"
            *mercury__hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_4, (MR_Integer) 1));
#line 431 "hash_table.m"
            {
#line 431 "hash_table.m"
              return mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_10, mercury__hash_table__K_5, mercury__hash_table__V_12_12);
            }
#line 431 "hash_table.m"
          }
#line 430 "hash_table.m"
        else
#line 430 "hash_table.m"
          mercury__hash_table__succeeded = MR_FALSE;
#line 430 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 430 "hash_table.m"
      }
#line 430 "hash_table.m"
      break;
#line 430 "hash_table.m"
    }
#line 423 "hash_table.m"
}

#line 330 "hash_table.m"
void MR_CALL 
mercury__hash_table__find_slot_2_4_p_0(
#line 330 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 330 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_5,
#line 330 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 330 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_7,
#line 330 "hash_table.m"
  MR_Integer * mercury__hash_table__H_8)
#line 330 "hash_table.m"
{
#line 334 "hash_table.m"
  {
#line 334 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 334 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_9;
#line 334 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_10;
#line 335 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_5, (MR_Integer) 1)));
#line 335 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_9;

#line 335 "hash_table.m"
    {
#line 335 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__HashPred_5), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_9);
    }
#line 335 "hash_table.m"
    mercury__hash_table__Hash_9 = ((MR_Integer) mercury__hash_table__conv1_Hash_9);
#line 337 "hash_table.m"
    mercury__hash_table__V_10_10 = (mercury__hash_table__NumBuckets_7 - (MR_Integer) 1);
#line 337 "hash_table.m"
    *mercury__hash_table__H_8 = (mercury__hash_table__Hash_9 & mercury__hash_table__V_10_10);
#line 334 "hash_table.m"
  }
#line 330 "hash_table.m"
}

#line 323 "hash_table.m"
MR_Integer MR_CALL 
mercury__hash_table__find_slot_2_f_0(
#line 323 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_9,
#line 323 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_10,
#line 323 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 323 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 323 "hash_table.m"
{
#line 327 "hash_table.m"
  {
#line 327 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 327 "hash_table.m"
    MR_Integer mercury__hash_table__H_6;
#line 327 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 327 "hash_table.m"
    MR_Integer mercury__hash_table__V_8_8;
#line 327 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 327 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_27;
#line 327 "hash_table.m"
    MR_Integer mercury__hash_table__V_28_28;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 224 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_30;
#line 335 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 335 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_27;

#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__find_slot_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_13_13 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 5849 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_8_8  = Max;
#line 224 "array.opt"
}
#line 335 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_7_7, (MR_Integer) 1)));
#line 335 "hash_table.m"
    {
#line 335 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_7_7), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_27);
    }
#line 335 "hash_table.m"
    mercury__hash_table__Hash_27 = ((MR_Integer) mercury__hash_table__conv1_Hash_27);
#line 337 "hash_table.m"
    mercury__hash_table__V_28_28 = (mercury__hash_table__V_8_8 - (MR_Integer) 1);
#line 337 "hash_table.m"
    mercury__hash_table__H_6 = (mercury__hash_table__Hash_27 & mercury__hash_table__V_28_28);
#line 327 "hash_table.m"
    return mercury__hash_table__H_6;
#line 327 "hash_table.m"
  }
#line 323 "hash_table.m"
}

#line 235 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_5(
#line 235 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 235 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 235 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 235 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 235 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 235 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 235 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 235 "hash_table.m"
{
#line 778 "hash_table.m"
  {
#line 778 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 778 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 779 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 5930 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 5950 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      return mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 778 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 778 "hash_table.m"
  }
#line 235 "hash_table.m"
}

#line 233 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_4(
#line 233 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 233 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 233 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 233 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 233 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 233 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 233 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 233 "hash_table.m"
{
#line 778 "hash_table.m"
  {
#line 778 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 778 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 779 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 6023 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 6043 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      return mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 778 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 778 "hash_table.m"
  }
#line 233 "hash_table.m"
}

#line 231 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_3(
#line 231 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 231 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 231 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 231 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 231 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 231 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 231 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 231 "hash_table.m"
{
#line 778 "hash_table.m"
  {
#line 778 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 778 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 779 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 6116 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 6136 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      return mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 778 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 778 "hash_table.m"
  }
#line 231 "hash_table.m"
}

#line 229 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_2(
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
#line 778 "hash_table.m"
  {
#line 778 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 778 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 779 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 6209 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 6229 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
#line 372 "array.opt"
      return;
    }
#line 778 "hash_table.m"
  }
#line 229 "hash_table.m"
}

#line 227 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_1(
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
#line 778 "hash_table.m"
  {
#line 778 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 778 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 779 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 6302 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 6322 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
#line 372 "array.opt"
      return;
    }
#line 778 "hash_table.m"
  }
#line 227 "hash_table.m"
}

#line 225 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_0(
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
#line 778 "hash_table.m"
  {
#line 778 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 778 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 778 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 779 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 779 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 6395 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 6415 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
#line 372 "array.opt"
      return;
    }
#line 778 "hash_table.m"
  }
#line 225 "hash_table.m"
}

#line 220 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__fold_3_f_1(
#line 220 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 220 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_15,
#line 220 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_16,
#line 220 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 220 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 220 "hash_table.m"
  MR_Box mercury__hash_table__X0_7)
#line 220 "hash_table.m"
{
#line 758 "hash_table.m"
  {
#line 758 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 758 "hash_table.m"
    MR_Box mercury__hash_table__X_8;
#line 758 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 758 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 758 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 759 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 759 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 759 "hash_table.m"
    MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_33;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_34;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 6488 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 6508 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__TypeInfo_for_V_15, mercury__hash_table__TypeInfo_for_T_16, mercury__hash_table__F_5, mercury__hash_table__V_10_10, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__X0_7, &mercury__hash_table__X_8);
    }
#line 758 "hash_table.m"
    return mercury__hash_table__X_8;
#line 758 "hash_table.m"
  }
#line 220 "hash_table.m"
}

#line 219 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__fold_3_f_0(
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_15,
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_16,
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 219 "hash_table.m"
  MR_Box mercury__hash_table__X0_7)
#line 219 "hash_table.m"
{
#line 758 "hash_table.m"
  {
#line 758 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 758 "hash_table.m"
    MR_Box mercury__hash_table__X_8;
#line 758 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 758 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 758 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 759 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 759 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 759 "hash_table.m"
    MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_33;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_34;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 6581 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 6601 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__TypeInfo_for_V_15, mercury__hash_table__TypeInfo_for_T_16, mercury__hash_table__F_5, mercury__hash_table__V_10_10, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__X0_7, &mercury__hash_table__X_8);
    }
#line 758 "hash_table.m"
    return mercury__hash_table__X_8;
#line 758 "hash_table.m"
  }
#line 219 "hash_table.m"
}

#line 213 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_2_f_0(
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_4,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__AList_5)
#line 213 "hash_table.m"
{
#line 559 "hash_table.m"
  {
#line 559 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 559 "hash_table.m"
    MR_Word mercury__hash_table__HT_6;
#line 559 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7;

#line 313 "hash_table.m"
    {
#line 313 "hash_table.m"
      mercury__hash_table__V_7_7 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 560 "hash_table.m"
    {
#line 560 "hash_table.m"
      mercury__hash_table__from_assoc_list_2_3_p_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__AList_5, mercury__hash_table__V_7_7, &mercury__hash_table__HT_6);
    }
#line 559 "hash_table.m"
    return mercury__hash_table__HT_6;
#line 559 "hash_table.m"
  }
#line 213 "hash_table.m"
}

#line 208 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_4_f_0(
#line 208 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 208 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_13,
#line 208 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_6,
#line 208 "hash_table.m"
  MR_Integer mercury__hash_table__N_7,
#line 208 "hash_table.m"
  MR_Float mercury__hash_table__MaxOccupants_8,
#line 208 "hash_table.m"
  MR_Word mercury__hash_table__AList_9)
#line 208 "hash_table.m"
{
#line 556 "hash_table.m"
  {
#line 556 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 556 "hash_table.m"
    MR_Word mercury__hash_table__HT_10;
#line 556 "hash_table.m"
    MR_Word mercury__hash_table__V_11_11;

#line 557 "hash_table.m"
    {
#line 557 "hash_table.m"
      mercury__hash_table__V_11_11 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__TypeInfo_for_V_13, mercury__hash_table__HashPred_6, mercury__hash_table__N_7, mercury__hash_table__MaxOccupants_8);
    }
#line 557 "hash_table.m"
    {
#line 557 "hash_table.m"
      mercury__hash_table__from_assoc_list_2_3_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__TypeInfo_for_V_13, mercury__hash_table__AList_9, mercury__hash_table__V_11_11, &mercury__hash_table__HT_10);
    }
#line 556 "hash_table.m"
    return mercury__hash_table__HT_10;
#line 556 "hash_table.m"
  }
#line 208 "hash_table.m"
}

#line 198 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__to_assoc_list_1_f_0(
#line 198 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_11,
#line 198 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_12,
#line 198 "hash_table.m"
  MR_Word mercury__hash_table__HT_3)
#line 198 "hash_table.m"
{
#line 537 "hash_table.m"
  {
#line 537 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 537 "hash_table.m"
    MR_Word mercury__hash_table__AL_4;
#line 537 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 3)));
#line 537 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 537 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 537 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 538 "hash_table.m"
    MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 0)));
#line 538 "hash_table.m"
    MR_Integer mercury__hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 1)));
#line 538 "hash_table.m"
    MR_Word mercury__hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 2)));
#line 209 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_17_35;
#line 217 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_17_36;

#line 209 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_6_6 , Array);
		{
#line 209 "array.opt"

    /* Array not used */
    Min = 0;

#line 6752 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 209 "array.opt"
}
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_6_6 , Array);
		{
#line 217 "array.opt"

    Max = Array->size - 1;

#line 6772 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 217 "array.opt"
}
#line 372 "array.opt"
    {
#line 372 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_11, mercury__hash_table__TypeInfo_for_V_12, mercury__hash_table__V_6_6, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__V_7_7, &mercury__hash_table__AL_4);
    }
#line 537 "hash_table.m"
    return mercury__hash_table__AL_4;
#line 537 "hash_table.m"
  }
#line 198 "hash_table.m"
}

#line 192 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__search_3_p_0(
#line 192 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 192 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 192 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 192 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 192 "hash_table.m"
  MR_Box * mercury__hash_table__HeadVar__3_3)
#line 192 "hash_table.m"
{
#line 416 "hash_table.m"
  {
#line 416 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 416 "hash_table.m"
    {
#line 416 "hash_table.m"
      return mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_4, mercury__hash_table__K_5, mercury__hash_table__HeadVar__3_3);
    }
#line 416 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 416 "hash_table.m"
  }
#line 192 "hash_table.m"
}

#line 188 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__search_2_f_0(
#line 188 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_13,
#line 188 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_14,
#line 188 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 188 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 188 "hash_table.m"
  MR_Box * mercury__hash_table__V_6)
#line 188 "hash_table.m"
{
#line 418 "hash_table.m"
  {
#line 418 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__H_7;
#line 418 "hash_table.m"
    MR_Word mercury__hash_table__AL_8;
#line 418 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_9_9;
#line 418 "hash_table.m"
    MR_Word mercury__hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__V_21_21;
#line 418 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_38;
#line 418 "hash_table.m"
    MR_Integer mercury__hash_table__V_39_39;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 224 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_41;
#line 335 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 335 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_38;
#line 420 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_10;
#line 420 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11;
#line 420 "hash_table.m"
    MR_Word mercury__hash_table__V_12_12;
#line 249 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_16_42;
#line 249 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;

#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_24_24 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 6892 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_21  = Max;
#line 224 "array.opt"
}
#line 335 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_20_20, (MR_Integer) 1)));
#line 335 "hash_table.m"
    {
#line 335 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_20_20), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_38);
    }
#line 335 "hash_table.m"
    mercury__hash_table__Hash_38 = ((MR_Integer) mercury__hash_table__conv1_Hash_38);
#line 337 "hash_table.m"
    mercury__hash_table__V_39_39 = (mercury__hash_table__V_21_21 - (MR_Integer) 1);
#line 337 "hash_table.m"
    mercury__hash_table__H_7 = (mercury__hash_table__Hash_38 & mercury__hash_table__V_39_39);
#line 420 "hash_table.m"
    mercury__hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 420 "hash_table.m"
    mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 420 "hash_table.m"
    mercury__hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 420 "hash_table.m"
    mercury__hash_table__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_9_9 , Array);
	Index =  mercury__hash_table__H_7 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 6935 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 249 "array.opt"
    mercury__hash_table__AL_8 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 249 "array.opt"
}
#line 421 "hash_table.m"
    {
#line 421 "hash_table.m"
      return mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_13, mercury__hash_table__TypeInfo_for_V_14, mercury__hash_table__AL_8, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 418 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 418 "hash_table.m"
  }
#line 188 "hash_table.m"
}

#line 182 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__elem_2_f_0(
#line 182 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 182 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 182 "hash_table.m"
  MR_Box mercury__hash_table__K_4,
#line 182 "hash_table.m"
  MR_Word mercury__hash_table__HT_5)
#line 182 "hash_table.m"
{
#line 489 "hash_table.m"
  {
#line 489 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 489 "hash_table.m"
    MR_Box mercury__hash_table__HeadVar__3_3;
#line 489 "hash_table.m"
    MR_Box mercury__hash_table__V_10;

#line 490 "hash_table.m"
    {
#line 490 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_5, mercury__hash_table__K_4, &mercury__hash_table__V_10);
    }
#line 489 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 491 "hash_table.m"
      mercury__hash_table__HeadVar__3_3 = mercury__hash_table__V_10;
#line 489 "hash_table.m"
    else
#line 492 "hash_table.m"
      {
#line 492 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_11_13 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 492 "hash_table.m"
        MR_Word mercury__hash_table__V_11_11 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

#line 492 "hash_table.m"
        {
#line 492 "hash_table.m"
          return mercury__hash_table__HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__hash_table__TypeCtorInfo_11_13, mercury__hash_table__TypeInfo_for_V_7, ((MR_Box) (mercury__hash_table__V_11_11)));
        }
#line 492 "hash_table.m"
      }
#line 489 "hash_table.m"
    return mercury__hash_table__HeadVar__3_3;
#line 489 "hash_table.m"
  }
#line 182 "hash_table.m"
}

#line 175 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__lookup_2_f_0(
#line 175 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_9,
#line 175 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_10,
#line 175 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 175 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 175 "hash_table.m"
{
#line 489 "hash_table.m"
  {
#line 489 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 489 "hash_table.m"
    MR_Box mercury__hash_table__HeadVar__3_3;
#line 489 "hash_table.m"
    MR_Box mercury__hash_table__V_6;

#line 490 "hash_table.m"
    {
#line 490 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_9, mercury__hash_table__TypeInfo_for_V_10, mercury__hash_table__HT_4, mercury__hash_table__K_5, &mercury__hash_table__V_6);
    }
#line 489 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 491 "hash_table.m"
      mercury__hash_table__HeadVar__3_3 = mercury__hash_table__V_6;
#line 489 "hash_table.m"
    else
#line 492 "hash_table.m"
      {
#line 492 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_11_11 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 492 "hash_table.m"
        MR_Word mercury__hash_table__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

#line 492 "hash_table.m"
        {
#line 492 "hash_table.m"
          return mercury__hash_table__HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__hash_table__TypeCtorInfo_11_11, mercury__hash_table__TypeInfo_for_V_10, ((MR_Box) (mercury__hash_table__V_7_7)));
        }
#line 492 "hash_table.m"
      }
#line 489 "hash_table.m"
    return mercury__hash_table__HeadVar__3_3;
#line 489 "hash_table.m"
  }
#line 175 "hash_table.m"
}

#line 168 "hash_table.m"
void MR_CALL 
mercury__hash_table__delete_3_p_0(
#line 168 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 168 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 168 "hash_table.m"
  MR_Box mercury__hash_table__K_4,
#line 168 "hash_table.m"
  MR_Word mercury__hash_table__HT_5,
#line 168 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__3_3)
#line 168 "hash_table.m"
{
#line 511 "hash_table.m"
  {
#line 511 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 511 "hash_table.m"
    {
#line 511 "hash_table.m"
      *mercury__hash_table__HeadVar__3_3 = mercury__hash_table__delete_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_5, mercury__hash_table__K_4);
    }
#line 511 "hash_table.m"
  }
#line 168 "hash_table.m"
}

#line 166 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__delete_2_f_0(
#line 166 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_21,
#line 166 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_22,
#line 166 "hash_table.m"
  MR_Word mercury__hash_table__HT0_4,
#line 166 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 166 "hash_table.m"
{
#line 499 "hash_table.m"
  {
#line 499 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 499 "hash_table.m"
    MR_Word mercury__hash_table__HT_6;
#line 499 "hash_table.m"
    MR_Integer mercury__hash_table__H_7;
#line 499 "hash_table.m"
    MR_Word mercury__hash_table__AL0_8;
#line 499 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_16_16;
#line 499 "hash_table.m"
    MR_Word mercury__hash_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 499 "hash_table.m"
    MR_Integer mercury__hash_table__V_29_29;
#line 499 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 499 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_46;
#line 499 "hash_table.m"
    MR_Integer mercury__hash_table__V_47_47;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 224 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_49;
#line 335 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 335 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_46;
#line 501 "hash_table.m"
    MR_Integer mercury__hash_table__V_18_18;
#line 501 "hash_table.m"
    MR_Integer mercury__hash_table__V_19_19;
#line 501 "hash_table.m"
    MR_Word mercury__hash_table__V_20_20;
#line 249 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_24_50;
#line 249 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 507 "hash_table.m"
    MR_Word mercury__hash_table__AL_9;

#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_32_32 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 7165 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_29_29  = Max;
#line 224 "array.opt"
}
#line 335 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_28_28, (MR_Integer) 1)));
#line 335 "hash_table.m"
    {
#line 335 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_28_28), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_46);
    }
#line 335 "hash_table.m"
    mercury__hash_table__Hash_46 = ((MR_Integer) mercury__hash_table__conv1_Hash_46);
#line 337 "hash_table.m"
    mercury__hash_table__V_47_47 = (mercury__hash_table__V_29_29 - (MR_Integer) 1);
#line 337 "hash_table.m"
    mercury__hash_table__H_7 = (mercury__hash_table__Hash_46 & mercury__hash_table__V_47_47);
#line 501 "hash_table.m"
    mercury__hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 501 "hash_table.m"
    mercury__hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 501 "hash_table.m"
    mercury__hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 501 "hash_table.m"
    mercury__hash_table__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_16_16 , Array);
	Index =  mercury__hash_table__H_7 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 7208 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 249 "array.opt"
    mercury__hash_table__AL0_8 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 249 "array.opt"
}
#line 502 "hash_table.m"
    {
#line 502 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__hash_table__TypeInfo_for_K_21, mercury__hash_table__AL0_8, mercury__hash_table__K_5, &mercury__hash_table__AL_9);
    }
#line 507 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 503 "hash_table.m"
      {
#line 503 "hash_table.m"
        MR_Integer mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 503 "hash_table.m"
        MR_Integer mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 503 "hash_table.m"
        MR_Word mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 503 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 503 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__Buckets_14;
#line 503 "hash_table.m"
        MR_Integer mercury__hash_table__NumOccupants_15;
#line 254 "array.opt"
        MR_Word mercury__hash_table__TypeInfo_24_51;
#line 254 "array.opt"
        MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 254 "array.opt"
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
#line 254 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7261 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 254 "array.opt"
        mercury__hash_table__Buckets_14 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 254 "array.opt"
}
#line 505 "hash_table.m"
        mercury__hash_table__NumOccupants_15 = (mercury__hash_table__NumOccupants0_10 - (MR_Integer) 1);
#line 506 "hash_table.m"
        {
#line 506 "hash_table.m"
          mercury__hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 506 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_15));
#line 506 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 506 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 506 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 3) = ((MR_Box) (mercury__hash_table__Buckets_14));
#line 506 "hash_table.m"
        }
#line 503 "hash_table.m"
      }
#line 507 "hash_table.m"
    else
#line 508 "hash_table.m"
      mercury__hash_table__HT_6 = mercury__hash_table__HT0_4;
#line 499 "hash_table.m"
    return mercury__hash_table__HT_6;
#line 499 "hash_table.m"
  }
#line 166 "hash_table.m"
}

#line 158 "hash_table.m"
void MR_CALL 
mercury__hash_table__det_update_4_p_0(
#line 158 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 158 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 158 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 158 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 158 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 158 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 158 "hash_table.m"
{
#line 485 "hash_table.m"
  {
#line 485 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 485 "hash_table.m"
    {
#line 485 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__det_update_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 485 "hash_table.m"
  }
#line 158 "hash_table.m"
}

#line 156 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__det_update_3_f_0(
#line 156 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
#line 156 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
#line 156 "hash_table.m"
  MR_Word mercury__hash_table__STATE_VARIABLE_HT_0_14,
#line 156 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 156 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 156 "hash_table.m"
{
#line 473 "hash_table.m"
  {
#line 473 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 473 "hash_table.m"
    MR_Word mercury__hash_table__STATE_VARIABLE_HT_15;
#line 473 "hash_table.m"
    MR_Integer mercury__hash_table__H_8;
#line 473 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_9;
#line 473 "hash_table.m"
    MR_Word mercury__hash_table__AL0_10;
#line 473 "hash_table.m"
    MR_Word mercury__hash_table__AL_12;
#line 473 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_13;
#line 473 "hash_table.m"
    MR_Word mercury__hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 473 "hash_table.m"
    MR_Integer mercury__hash_table__V_35_35;
#line 473 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 473 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_52;
#line 473 "hash_table.m"
    MR_Integer mercury__hash_table__V_53_53;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 224 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_55;
#line 335 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 335 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_52;
#line 475 "hash_table.m"
    MR_Integer mercury__hash_table__V_19_19;
#line 475 "hash_table.m"
    MR_Integer mercury__hash_table__V_20_20;
#line 475 "hash_table.m"
    MR_Word mercury__hash_table__V_21_21;
#line 249 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_56;
#line 249 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 479 "hash_table.m"
    MR_Word mercury__hash_table__AL1_11;
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_57;
#line 254 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;
#line 483 "hash_table.m"
    MR_Integer mercury__hash_table__V_22_22;
#line 483 "hash_table.m"
    MR_Integer mercury__hash_table__V_23_23;
#line 483 "hash_table.m"
    MR_Word mercury__hash_table__V_24_24;
#line 483 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_25_25;

#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_38_38 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 7420 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_35_35  = Max;
#line 224 "array.opt"
}
#line 335 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_34_34, (MR_Integer) 1)));
#line 335 "hash_table.m"
    {
#line 335 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_34_34), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_52);
    }
#line 335 "hash_table.m"
    mercury__hash_table__Hash_52 = ((MR_Integer) mercury__hash_table__conv1_Hash_52);
#line 337 "hash_table.m"
    mercury__hash_table__V_53_53 = (mercury__hash_table__V_35_35 - (MR_Integer) 1);
#line 337 "hash_table.m"
    mercury__hash_table__H_8 = (mercury__hash_table__Hash_52 & mercury__hash_table__V_53_53);
#line 475 "hash_table.m"
    mercury__hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 475 "hash_table.m"
    mercury__hash_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 475 "hash_table.m"
    mercury__hash_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 475 "hash_table.m"
    mercury__hash_table__Buckets0_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array);
	Index =  mercury__hash_table__H_8 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 7463 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 249 "array.opt"
    mercury__hash_table__AL0_10 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 249 "array.opt"
}
#line 477 "hash_table.m"
    {
#line 477 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__AL0_10, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__AL1_11);
    }
#line 479 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 478 "hash_table.m"
      mercury__hash_table__AL_12 = mercury__hash_table__AL1_11;
#line 479 "hash_table.m"
    else
#line 480 "hash_table.m"
      {
#line 480 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 480 "hash_table.m"
        MR_Word mercury__hash_table__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_update: key not found"));

#line 480 "hash_table.m"
        {
#line 480 "hash_table.m"
          mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_30_30, ((MR_Box) (mercury__hash_table__V_16_16)));
        }
#line 480 "hash_table.m"
      }
#line 254 "array.opt"
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
#line 254 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7515 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 254 "array.opt"
    mercury__hash_table__Buckets_13 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 254 "array.opt"
}
#line 483 "hash_table.m"
    mercury__hash_table__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 483 "hash_table.m"
    mercury__hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 483 "hash_table.m"
    mercury__hash_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 483 "hash_table.m"
    mercury__hash_table__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 483 "hash_table.m"
    {
#line 483 "hash_table.m"
      mercury__hash_table__STATE_VARIABLE_HT_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 483 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 0) = ((MR_Box) (mercury__hash_table__V_22_22));
#line 483 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 1) = ((MR_Box) (mercury__hash_table__V_23_23));
#line 483 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 2) = ((MR_Box) (mercury__hash_table__V_24_24));
#line 483 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 3) = ((MR_Box) (mercury__hash_table__Buckets_13));
#line 483 "hash_table.m"
    }
#line 473 "hash_table.m"
    return mercury__hash_table__STATE_VARIABLE_HT_15;
#line 473 "hash_table.m"
  }
#line 156 "hash_table.m"
}

#line 148 "hash_table.m"
void MR_CALL 
mercury__hash_table__det_insert_4_p_0(
#line 148 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 148 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 148 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 148 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 148 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 148 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 148 "hash_table.m"
{
#line 469 "hash_table.m"
  {
#line 469 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 469 "hash_table.m"
    {
#line 469 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__det_insert_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 469 "hash_table.m"
  }
#line 148 "hash_table.m"
}

#line 146 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__det_insert_3_f_0(
#line 146 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_27,
#line 146 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_28,
#line 146 "hash_table.m"
  MR_Word mercury__hash_table__HT0_5,
#line 146 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 146 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 146 "hash_table.m"
{
#line 443 "hash_table.m"
  {
#line 443 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 443 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;
#line 443 "hash_table.m"
    MR_Integer mercury__hash_table__H_9;
#line 443 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants0_10;
#line 443 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_11;
#line 443 "hash_table.m"
    MR_Word mercury__hash_table__HashPred_12;
#line 443 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_13;
#line 443 "hash_table.m"
    MR_Word mercury__hash_table__AL0_14;
#line 443 "hash_table.m"
    MR_Word mercury__hash_table__AL_15;
#line 443 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_22;
#line 443 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants_23;
#line 443 "hash_table.m"
    MR_Word mercury__hash_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 443 "hash_table.m"
    MR_Integer mercury__hash_table__V_48_48;
#line 443 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 443 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_65;
#line 443 "hash_table.m"
    MR_Integer mercury__hash_table__V_66_66;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 224 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_68;
#line 335 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 335 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_65;
#line 249 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_30_69;
#line 249 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_30_70;
#line 254 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_51_51 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 7666 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_48_48  = Max;
#line 224 "array.opt"
}
#line 335 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_47_47, (MR_Integer) 1)));
#line 335 "hash_table.m"
    {
#line 335 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_47_47), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_65);
    }
#line 335 "hash_table.m"
    mercury__hash_table__Hash_65 = ((MR_Integer) mercury__hash_table__conv1_Hash_65);
#line 337 "hash_table.m"
    mercury__hash_table__V_66_66 = (mercury__hash_table__V_48_48 - (MR_Integer) 1);
#line 337 "hash_table.m"
    mercury__hash_table__H_9 = (mercury__hash_table__Hash_65 & mercury__hash_table__V_66_66);
#line 445 "hash_table.m"
    mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 445 "hash_table.m"
    mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 445 "hash_table.m"
    mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 445 "hash_table.m"
    mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array);
	Index =  mercury__hash_table__H_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 7709 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 249 "array.opt"
    mercury__hash_table__AL0_14 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 249 "array.opt"
}
#line 450 "hash_table.m"
#line 450 "hash_table.m"
    switch (MR_tag((MR_Word) mercury__hash_table__AL0_14)) {
#line 450 "hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 450 "hash_table.m"
      case (MR_Integer) 0:
#line 449 "hash_table.m"
        {
#line 449 "hash_table.m"
          mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 449 "hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 449 "hash_table.m"
        }
#line 450 "hash_table.m"
        break;
#line 450 "hash_table.m"
      case (MR_Integer) 1:
#line 457 "hash_table.m"
        {
#line 454 "hash_table.m"
          MR_Box mercury__hash_table__V_32_32;

#line 454 "hash_table.m"
          {
#line 454 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__AL0_14, mercury__hash_table__K_6, &mercury__hash_table__V_32_32);
          }
#line 457 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 455 "hash_table.m"
            {
#line 455 "hash_table.m"
              MR_Word mercury__hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 455 "hash_table.m"
              MR_Word mercury__hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

#line 455 "hash_table.m"
              {
#line 455 "hash_table.m"
                mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__hash_table__V_33_33)));
              }
#line 455 "hash_table.m"
            }
#line 457 "hash_table.m"
          else
#line 458 "hash_table.m"
            {
#line 458 "hash_table.m"
              mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 458 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 458 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 458 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 458 "hash_table.m"
            }
#line 457 "hash_table.m"
        }
#line 450 "hash_table.m"
        break;
#line 450 "hash_table.m"
      case (MR_Integer) 2:
#line 457 "hash_table.m"
        {
#line 454 "hash_table.m"
          MR_Box mercury__hash_table__V_21_21;

#line 454 "hash_table.m"
          {
#line 454 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__AL0_14, mercury__hash_table__K_6, &mercury__hash_table__V_21_21);
          }
#line 457 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 455 "hash_table.m"
            {
#line 455 "hash_table.m"
              MR_Word mercury__hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 455 "hash_table.m"
              MR_Word mercury__hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

#line 455 "hash_table.m"
              {
#line 455 "hash_table.m"
                mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__hash_table__V_24_24)));
              }
#line 455 "hash_table.m"
            }
#line 457 "hash_table.m"
          else
#line 458 "hash_table.m"
            {
#line 458 "hash_table.m"
              mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 458 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 458 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 458 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 458 "hash_table.m"
            }
#line 457 "hash_table.m"
        }
#line 450 "hash_table.m"
        break;
#line 450 "hash_table.m"
    }
#line 254 "array.opt"
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
#line 254 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7849 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 254 "array.opt"
    mercury__hash_table__Buckets_22 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 254 "array.opt"
}
#line 462 "hash_table.m"
    mercury__hash_table__NumOccupants_23 = (mercury__hash_table__NumOccupants0_10 + (MR_Integer) 1);
#line 463 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__NumOccupants_23 > mercury__hash_table__MaxOccupants_11);
#line 465 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 464 "hash_table.m"
      {
#line 464 "hash_table.m"
        return mercury__hash_table__HT_8 = mercury__hash_table__expand_4_f_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__NumOccupants_23, mercury__hash_table__MaxOccupants_11, mercury__hash_table__HashPred_12, mercury__hash_table__Buckets_22);
      }
#line 465 "hash_table.m"
    else
#line 466 "hash_table.m"
      {
#line 466 "hash_table.m"
        mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 466 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_23));
#line 466 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 466 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 466 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_22));
#line 466 "hash_table.m"
      }
#line 443 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 443 "hash_table.m"
  }
#line 146 "hash_table.m"
}

#line 139 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__f_101_108_101_109_32_58_61_3_f_0(
#line 139 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 139 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 139 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 139 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 139 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 139 "hash_table.m"
{
#line 389 "hash_table.m"
  {
#line 389 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 389 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__4_4;

#line 389 "hash_table.m"
    {
#line 389 "hash_table.m"
      return mercury__hash_table__HeadVar__4_4 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_6, mercury__hash_table__K_5, mercury__hash_table__V_7);
    }
#line 389 "hash_table.m"
    return mercury__hash_table__HeadVar__4_4;
#line 389 "hash_table.m"
  }
#line 139 "hash_table.m"
}

#line 132 "hash_table.m"
void MR_CALL 
mercury__hash_table__set_4_p_0(
#line 132 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 132 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 132 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 132 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 132 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 132 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 132 "hash_table.m"
{
#line 391 "hash_table.m"
  {
#line 391 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 391 "hash_table.m"
    {
#line 391 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 391 "hash_table.m"
  }
#line 132 "hash_table.m"
}

#line 130 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__set_3_f_0(
#line 130 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
#line 130 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
#line 130 "hash_table.m"
  MR_Word mercury__hash_table__HT0_5,
#line 130 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 130 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 130 "hash_table.m"
{
#line 348 "hash_table.m"
  {
#line 348 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 348 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;
#line 348 "hash_table.m"
    MR_Integer mercury__hash_table__H_9;
#line 348 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants0_10;
#line 348 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_11;
#line 348 "hash_table.m"
    MR_Word mercury__hash_table__HashPred_12;
#line 348 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_13;
#line 348 "hash_table.m"
    MR_Word mercury__hash_table__AL0_14;
#line 348 "hash_table.m"
    MR_Word mercury__hash_table__AL_15;
#line 348 "hash_table.m"
    MR_Word mercury__hash_table__MayExpand_16;
#line 348 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_23;
#line 348 "hash_table.m"
    MR_Word mercury__hash_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 348 "hash_table.m"
    MR_Integer mercury__hash_table__V_34_34;
#line 348 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 348 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_51;
#line 348 "hash_table.m"
    MR_Integer mercury__hash_table__V_52_52;
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 94 "hash_table.m"
    MR_Integer mercury__hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 224 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_54;
#line 335 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 335 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_51;
#line 249 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_55;
#line 249 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 254 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_56;
#line 254 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_37_37 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 8039 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_34_34  = Max;
#line 224 "array.opt"
}
#line 335 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_33_33, (MR_Integer) 1)));
#line 335 "hash_table.m"
    {
#line 335 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_33_33), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_51);
    }
#line 335 "hash_table.m"
    mercury__hash_table__Hash_51 = ((MR_Integer) mercury__hash_table__conv1_Hash_51);
#line 337 "hash_table.m"
    mercury__hash_table__V_52_52 = (mercury__hash_table__V_34_34 - (MR_Integer) 1);
#line 337 "hash_table.m"
    mercury__hash_table__H_9 = (mercury__hash_table__Hash_51 & mercury__hash_table__V_52_52);
#line 350 "hash_table.m"
    mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 350 "hash_table.m"
    mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 350 "hash_table.m"
    mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 350 "hash_table.m"
    mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 249 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array);
	Index =  mercury__hash_table__H_9 ;
		{
#line 249 "array.opt"

    Item = Array->elements[Index];

#line 8082 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 249 "array.opt"
    mercury__hash_table__AL0_14 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 249 "array.opt"
}
#line 356 "hash_table.m"
#line 356 "hash_table.m"
    switch (MR_tag((MR_Word) mercury__hash_table__AL0_14)) {
#line 356 "hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hash_table.m"
      case (MR_Integer) 0:
#line 353 "hash_table.m"
        {
#line 354 "hash_table.m"
          {
#line 354 "hash_table.m"
            mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "hash_table.m"
            MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 354 "hash_table.m"
            MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 354 "hash_table.m"
          }
#line 355 "hash_table.m"
          mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 353 "hash_table.m"
        }
#line 356 "hash_table.m"
        break;
#line 356 "hash_table.m"
      case (MR_Integer) 1:
#line 357 "hash_table.m"
        {
#line 357 "hash_table.m"
          MR_Box mercury__hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_14, (MR_Integer) 0));
#line 357 "hash_table.m"
          MR_Box mercury__hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_14, (MR_Integer) 1));

#line 358 "hash_table.m"
          {
#line 358 "hash_table.m"
            mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__K0_17, mercury__hash_table__K_6);
          }
#line 361 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 359 "hash_table.m"
            {
#line 359 "hash_table.m"
              {
#line 359 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K0_17;
#line 359 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 359 "hash_table.m"
              }
#line 360 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 0;
#line 359 "hash_table.m"
            }
#line 361 "hash_table.m"
          else
#line 362 "hash_table.m"
            {
#line 362 "hash_table.m"
              {
#line 362 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 362 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 362 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 362 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 362 "hash_table.m"
              }
#line 363 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 362 "hash_table.m"
            }
#line 357 "hash_table.m"
        }
#line 356 "hash_table.m"
        break;
#line 356 "hash_table.m"
      case (MR_Integer) 2:
#line 370 "hash_table.m"
        {
#line 370 "hash_table.m"
          MR_Word mercury__hash_table__AL1_22;

#line 367 "hash_table.m"
          {
#line 367 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__AL0_14, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__AL1_22);
          }
#line 370 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 368 "hash_table.m"
            {
#line 368 "hash_table.m"
              mercury__hash_table__AL_15 = mercury__hash_table__AL1_22;
#line 369 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 0;
#line 368 "hash_table.m"
            }
#line 370 "hash_table.m"
          else
#line 371 "hash_table.m"
            {
#line 371 "hash_table.m"
              {
#line 371 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 371 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 371 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 371 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 371 "hash_table.m"
              }
#line 372 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 371 "hash_table.m"
            }
#line 370 "hash_table.m"
        }
#line 356 "hash_table.m"
        break;
#line 356 "hash_table.m"
    }
#line 254 "array.opt"
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
#line 254 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 8238 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 254 "array.opt"
    mercury__hash_table__Buckets_23 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 254 "array.opt"
}
#line 379 "hash_table.m"
#line 379 "hash_table.m"
    switch (mercury__hash_table__MayExpand_16) {
#line 379 "hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 379 "hash_table.m"
      case (MR_Integer) 0:
#line 378 "hash_table.m"
        {
#line 378 "hash_table.m"
          mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 378 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants0_10));
#line 378 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 378 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 378 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_23));
#line 378 "hash_table.m"
        }
#line 379 "hash_table.m"
        break;
#line 379 "hash_table.m"
      case (MR_Integer) 1:
#line 380 "hash_table.m"
        {
#line 380 "hash_table.m"
          MR_Integer mercury__hash_table__NumOccupants_24 = (mercury__hash_table__NumOccupants0_10 + (MR_Integer) 1);

#line 382 "hash_table.m"
          mercury__hash_table__succeeded = (mercury__hash_table__NumOccupants_24 > mercury__hash_table__MaxOccupants_11);
#line 384 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 383 "hash_table.m"
            {
#line 383 "hash_table.m"
              return mercury__hash_table__HT_8 = mercury__hash_table__expand_4_f_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__TypeInfo_for_V_27, mercury__hash_table__NumOccupants_24, mercury__hash_table__MaxOccupants_11, mercury__hash_table__HashPred_12, mercury__hash_table__Buckets_23);
            }
#line 384 "hash_table.m"
          else
#line 385 "hash_table.m"
            {
#line 385 "hash_table.m"
              mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 385 "hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_24));
#line 385 "hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 385 "hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 385 "hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_23));
#line 385 "hash_table.m"
            }
#line 380 "hash_table.m"
        }
#line 379 "hash_table.m"
        break;
#line 379 "hash_table.m"
    }
#line 348 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 348 "hash_table.m"
  }
#line 130 "hash_table.m"
}

#line 123 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__copy_1_f_0(
#line 123 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_10,
#line 123 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_11,
#line 123 "hash_table.m"
  MR_Word mercury__hash_table__Orig_3)
#line 123 "hash_table.m"
{
#line 341 "hash_table.m"
  {
#line 341 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 341 "hash_table.m"
    MR_Word mercury__hash_table__Copy_4;
#line 341 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 0)));
#line 341 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 1)));
#line 341 "hash_table.m"
    MR_Word mercury__hash_table__HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 2)));
#line 341 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 3)));
#line 341 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_9;
#line 276 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_13_14;
#line 276 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv0_Array;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__copy_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_8 , Array0);
		{
#line 276 "array.opt"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);

#line 8361 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv0_Array );
#line 276 "array.opt"
    mercury__hash_table__Buckets_9 = (MR_ArrayPtr) mercury__hash_table__conv0_Array;
#line 276 "array.opt"
}
#line 344 "hash_table.m"
    {
#line 344 "hash_table.m"
      mercury__hash_table__Copy_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 344 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_5));
#line 344 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_6));
#line 344 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 2) = ((MR_Box) (mercury__hash_table__HashPred_7));
#line 344 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 3) = ((MR_Box) (mercury__hash_table__Buckets_9));
#line 344 "hash_table.m"
    }
#line 341 "hash_table.m"
    return mercury__hash_table__Copy_4;
#line 341 "hash_table.m"
  }
#line 123 "hash_table.m"
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
#line 318 "hash_table.m"
  {
#line 318 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 318 "hash_table.m"
    MR_Integer mercury__hash_table__HeadVar__2_2;
#line 318 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 3)));
#line 318 "hash_table.m"
    MR_Integer mercury__hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 0)));
#line 318 "hash_table.m"
    MR_Integer mercury__hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 1)));
#line 318 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 2)));
#line 224 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_14;

#line 224 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__num_buckets_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_4_4 , Array);
		{
#line 224 "array.opt"

    Max = Array->size;

#line 8463 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__HeadVar__2_2  = Max;
#line 224 "array.opt"
}
#line 318 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 318 "hash_table.m"
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
#line 706 "hash_table.m"
  while (MR_TRUE)
#line 706 "hash_table.m"
    {
#line 706 "hash_table.m"
      /* tailcall optimized into a loop */
#line 706 "hash_table.m"
      {
#line 706 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 706 "hash_table.m"
        MR_Integer mercury__hash_table__Int_5;
#line 702 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 73 "builtin.opt"
        MR_Box mercury__hash_table__conv0_Int_5;

#line 73 "builtin.opt"
        {
#line 73 "builtin.opt"
          mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_39_39, mercury__hash_table__T_3, &mercury__hash_table__conv0_Int_5);
        }
#line 73 "builtin.opt"
        if (mercury__hash_table__succeeded)
#line 73 "builtin.opt"
          {
#line 73 "builtin.opt"
            mercury__hash_table__Int_5 = ((MR_Integer) mercury__hash_table__conv0_Int_5);
#line 73 "builtin.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 73 "builtin.opt"
          }
#line 706 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 650 "hash_table.m"
          {
#line 653 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__Int_5 ;
		{
#line 653 "hash_table.m"

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

#line 8558 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 653 "hash_table.m"
}
#line 650 "hash_table.m"
          }
#line 706 "hash_table.m"
        else
#line 710 "hash_table.m"
          {
#line 710 "hash_table.m"
            MR_String mercury__hash_table__String_6;
#line 706 "hash_table.m"
            MR_Word mercury__hash_table__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 73 "builtin.opt"
            MR_Box mercury__hash_table__conv1_String_6;

#line 73 "builtin.opt"
            {
#line 73 "builtin.opt"
              mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_40_40, mercury__hash_table__T_3, &mercury__hash_table__conv1_String_6);
            }
#line 73 "builtin.opt"
            if (mercury__hash_table__succeeded)
#line 73 "builtin.opt"
              {
#line 73 "builtin.opt"
                mercury__hash_table__String_6 = ((MR_String) mercury__hash_table__conv1_String_6);
#line 73 "builtin.opt"
                mercury__hash_table__succeeded = MR_TRUE;
#line 73 "builtin.opt"
              }
#line 710 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 682 "hash_table.m"
              {
#line 682 "hash_table.m"
                *mercury__hash_table__H_4 = mercury__string__hash_1_f_0(mercury__hash_table__String_6);
              }
#line 710 "hash_table.m"
            else
#line 714 "hash_table.m"
              {
#line 714 "hash_table.m"
                MR_Float mercury__hash_table__Float_7;
#line 710 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 73 "builtin.opt"
                MR_Box mercury__hash_table__conv2_Float_7;

#line 73 "builtin.opt"
                {
#line 73 "builtin.opt"
                  mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_41_41, mercury__hash_table__T_3, &mercury__hash_table__conv2_Float_7);
                }
#line 73 "builtin.opt"
                if (mercury__hash_table__succeeded)
#line 73 "builtin.opt"
                  {
#line 73 "builtin.opt"
                    mercury__hash_table__Float_7 = MR_unbox_float(mercury__hash_table__conv2_Float_7);
#line 73 "builtin.opt"
                    mercury__hash_table__succeeded = MR_TRUE;
#line 73 "builtin.opt"
                  }
#line 714 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 66 "float.opt"
                  {
#line 66 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__hash_table__Float_7 ;
		{
#line 66 "float.opt"

    H = MR_hash_float(F);

#line 8643 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 66 "float.opt"
}
#line 66 "float.opt"
                  }
#line 714 "hash_table.m"
                else
#line 718 "hash_table.m"
                  {
#line 718 "hash_table.m"
                    MR_Char mercury__hash_table__Char_8;
#line 714 "hash_table.m"
                    MR_Word mercury__hash_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 73 "builtin.opt"
                    MR_Box mercury__hash_table__conv3_Char_8;

#line 73 "builtin.opt"
                    {
#line 73 "builtin.opt"
                      mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_42_42, mercury__hash_table__T_3, &mercury__hash_table__conv3_Char_8);
                    }
#line 73 "builtin.opt"
                    if (mercury__hash_table__succeeded)
#line 73 "builtin.opt"
                      {
#line 73 "builtin.opt"
                        mercury__hash_table__Char_8 = ((MR_Char) (MR_Word) mercury__hash_table__conv3_Char_8);
#line 73 "builtin.opt"
                        mercury__hash_table__succeeded = MR_TRUE;
#line 73 "builtin.opt"
                      }
#line 718 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 694 "hash_table.m"
                      {
#line 694 "hash_table.m"
                        MR_Integer mercury__hash_table__V_63_63;

#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__hash_table__Char_8 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8698 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_63_63  = Int;
#line 32 "char.opt"
}
#line 653 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__V_63_63 ;
		{
#line 653 "hash_table.m"

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

#line 8739 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 653 "hash_table.m"
}
#line 694 "hash_table.m"
                      }
#line 718 "hash_table.m"
                    else
#line 722 "hash_table.m"
                      {
#line 722 "hash_table.m"
                        MR_Word mercury__hash_table__Univ_9;
#line 718 "hash_table.m"
                        MR_Word mercury__hash_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 73 "builtin.opt"
                        MR_Box mercury__hash_table__conv4_Univ_9;

#line 73 "builtin.opt"
                        {
#line 73 "builtin.opt"
                          mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_43_43, mercury__hash_table__T_3, &mercury__hash_table__conv4_Univ_9);
                        }
#line 73 "builtin.opt"
                        if (mercury__hash_table__succeeded)
#line 73 "builtin.opt"
                          {
#line 73 "builtin.opt"
                            mercury__hash_table__Univ_9 = ((MR_Word) mercury__hash_table__conv4_Univ_9);
#line 73 "builtin.opt"
                            mercury__hash_table__succeeded = MR_TRUE;
#line 73 "builtin.opt"
                          }
#line 722 "hash_table.m"
                        if (mercury__hash_table__succeeded)
#line 720 "hash_table.m"
                          {
#line 720 "hash_table.m"
                            MR_Word mercury__hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__Univ_9, (MR_Integer) 0)));
#line 720 "hash_table.m"
                            MR_Box mercury__hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__hash_table__Univ_9, (MR_Integer) 1));

#line 720 "hash_table.m"
                            /* direct tailcall eliminated */
#line 720 "hash_table.m"
                            {
#line 720 "hash_table.m"
                              MR_Word mercury__hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__hash_table__TypeInfo_44_44;
#line 720 "hash_table.m"
                              MR_Box mercury__hash_table__T__tmp_copy_3 = mercury__hash_table__V_22_22;

#line 720 "hash_table.m"
                              mercury__hash_table__T_3 = mercury__hash_table__T__tmp_copy_3;
#line 720 "hash_table.m"
                              mercury__hash_table__TypeInfo_for_T_38 = mercury__hash_table__TypeInfo_for_T__tmp_copy_38;
#line 720 "hash_table.m"
                            }
#line 720 "hash_table.m"
                            continue;
#line 720 "hash_table.m"
                          }
#line 722 "hash_table.m"
                        else
#line 733 "hash_table.m"
                          {
#line 733 "hash_table.m"
                            MR_Word mercury__hash_table__TypeInfo_45_45;
#line 733 "hash_table.m"
                            MR_ArrayPtr mercury__hash_table__Array_10;
#line 722 "hash_table.m"
                            MR_ArrayPtr mercury__hash_table__conv5_Array_10;

#line 722 "hash_table.m"
                            {
#line 722 "hash_table.m"
                              mercury__hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__hash_table__TypeInfo_for_T_38, &mercury__hash_table__TypeInfo_45_45, mercury__hash_table__T_3, &mercury__hash_table__conv5_Array_10);
                            }
#line 722 "hash_table.m"
                            if (mercury__hash_table__succeeded)
#line 722 "hash_table.m"
                              {
#line 722 "hash_table.m"
                                mercury__hash_table__Array_10 = (MR_ArrayPtr) mercury__hash_table__conv5_Array_10;
#line 722 "hash_table.m"
                                mercury__hash_table__succeeded = MR_TRUE;
#line 722 "hash_table.m"
                              }
#line 733 "hash_table.m"
                            if (mercury__hash_table__succeeded)
#line 724 "hash_table.m"
                              {
#line 724 "hash_table.m"
                                {
#line 724 "hash_table.m"
                                  *mercury__hash_table__H_4 = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__hash_table__TypeInfo_45_45, mercury__hash_table__Array_10, (MR_Integer) 0);
                                }
#line 724 "hash_table.m"
                              }
#line 733 "hash_table.m"
                            else
#line 735 "hash_table.m"
                              {
#line 735 "hash_table.m"
                                MR_String mercury__hash_table__FunctorName_15;
#line 735 "hash_table.m"
                                MR_Integer mercury__hash_table__Arity_16;
#line 735 "hash_table.m"
                                MR_Word mercury__hash_table__Args_17;
#line 735 "hash_table.m"
                                MR_Integer mercury__hash_table__H0_18;
#line 735 "hash_table.m"
                                MR_Integer mercury__hash_table__H1_19;
#line 735 "hash_table.m"
                                MR_Integer mercury__hash_table__V_73_73;
#line 735 "hash_table.m"
                                MR_Integer mercury__hash_table__V_74_74;
#line 735 "hash_table.m"
                                MR_Integer mercury__hash_table__V_75_75;
#line 735 "hash_table.m"
                                MR_Integer mercury__hash_table__V_76_76;

#line 735 "hash_table.m"
                                {
#line 735 "hash_table.m"
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__T_3, (MR_Integer) 1, &mercury__hash_table__FunctorName_15, &mercury__hash_table__Arity_16, &mercury__hash_table__Args_17);
                                }
#line 682 "hash_table.m"
                                {
#line 682 "hash_table.m"
                                  mercury__hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__hash_table__FunctorName_15);
                                }
#line 753 "hash_table.m"
                                mercury__hash_table__V_73_73 = (mercury__hash_table__H0_18 << mercury__hash_table__Arity_16);
#line 135 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{
#line 135 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 8885 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_76_76  = Bits;
#line 135 "int.opt"
}
#line 754 "hash_table.m"
                                mercury__hash_table__V_75_75 = (mercury__hash_table__V_76_76 - mercury__hash_table__Arity_16);
#line 754 "hash_table.m"
                                mercury__hash_table__V_74_74 = (mercury__hash_table__H0_18 >> mercury__hash_table__V_75_75);
#line 753 "hash_table.m"
                                mercury__hash_table__H1_19 = (mercury__hash_table__V_73_73 ^ mercury__hash_table__V_74_74);
#line 738 "hash_table.m"
                                {
#line 738 "hash_table.m"
                                  mercury__hash_table__foldl__ho13_4_p_in__list_0(mercury__hash_table__Args_17, mercury__hash_table__H1_19, mercury__hash_table__H_4);
#line 738 "hash_table.m"
                                  return;
                                }
#line 735 "hash_table.m"
                              }
#line 733 "hash_table.m"
                          }
#line 722 "hash_table.m"
                      }
#line 718 "hash_table.m"
                  }
#line 714 "hash_table.m"
              }
#line 710 "hash_table.m"
          }
#line 706 "hash_table.m"
      }
#line 706 "hash_table.m"
      break;
#line 706 "hash_table.m"
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
#line 66 "float.opt"
  {
#line 66 "float.opt"
    MR_bool mercury__hash_table__succeeded;

#line 66 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__hash_table__F_3 ;
		{
#line 66 "float.opt"

    H = MR_hash_float(F);

#line 8953 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__HeadVar__2_2  = H;
#line 66 "float.opt"
}
#line 66 "float.opt"
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
#line 694 "hash_table.m"
  {
#line 694 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 694 "hash_table.m"
    MR_Integer mercury__hash_table__V_5_5;

#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__hash_table__C_3 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8994 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_5_5  = Int;
#line 32 "char.opt"
}
#line 653 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__V_5_5 ;
		{
#line 653 "hash_table.m"

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

#line 9035 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 653 "hash_table.m"
}
#line 694 "hash_table.m"
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
#line 682 "hash_table.m"
  {
#line 682 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 682 "hash_table.m"
    {
#line 682 "hash_table.m"
      *mercury__hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__hash_table__S_3);
    }
#line 682 "hash_table.m"
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
#line 650 "hash_table.m"
  {
#line 650 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 653 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__N_1 ;
		{
#line 653 "hash_table.m"

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

#line 9119 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_2  = H;
#line 653 "hash_table.m"
}
#line 650 "hash_table.m"
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
#line 314 "hash_table.m"
  {
#line 314 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 314 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__2_2;

#line 314 "hash_table.m"
    {
#line 314 "hash_table.m"
      return mercury__hash_table__HeadVar__2_2 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 314 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 314 "hash_table.m"
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
#line 313 "hash_table.m"
  {
#line 313 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 313 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__2_2;

#line 313 "hash_table.m"
    {
#line 313 "hash_table.m"
      return mercury__hash_table__HeadVar__2_2 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 313 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 313 "hash_table.m"
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
#line 307 "hash_table.m"
  {
#line 307 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 307 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__4_4;

#line 307 "hash_table.m"
    {
#line 307 "hash_table.m"
      return mercury__hash_table__HeadVar__4_4 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HashPred_5, mercury__hash_table__N_6, mercury__hash_table__MaxOccupancy_7);
    }
#line 307 "hash_table.m"
    return mercury__hash_table__HeadVar__4_4;
#line 307 "hash_table.m"
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
#line 294 "hash_table.m"
  {
#line 294 "hash_table.m"
    MR_bool mercury__hash_table__succeeded = (mercury__hash_table__N_6 <= (MR_Integer) 0);
#line 294 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;

#line 294 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 293 "hash_table.m"
      {
#line 293 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 293 "hash_table.m"
        MR_Word mercury__hash_table__V_13_13 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N =< 0"));

#line 293 "hash_table.m"
        {
#line 293 "hash_table.m"
          mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_28_28, ((MR_Box) (mercury__hash_table__V_13_13)));
        }
#line 293 "hash_table.m"
      }
#line 294 "hash_table.m"
    else
#line 297 "hash_table.m"
      {
#line 294 "hash_table.m"
        MR_Integer mercury__hash_table__V_15_15;

#line 135 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer Bits;

		{
#line 135 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 9312 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_15  = Bits;
#line 135 "int.opt"
}
#line 294 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__N_6 >= mercury__hash_table__V_15_15);
#line 297 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 295 "hash_table.m"
          {
#line 295 "hash_table.m"
            MR_Word mercury__hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 295 "hash_table.m"
            MR_Word mercury__hash_table__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N >= int.bits_per_int"));

#line 295 "hash_table.m"
            {
#line 295 "hash_table.m"
              mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_29_29, ((MR_Box) (mercury__hash_table__V_16_16)));
            }
#line 295 "hash_table.m"
          }
#line 297 "hash_table.m"
        else
#line 300 "hash_table.m"
          {
#line 297 "hash_table.m"
            mercury__hash_table__succeeded = (mercury__hash_table__MaxOccupancy_7 <= ((MR_Float) 0.0000000000000000));
#line 300 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 298 "hash_table.m"
              {
#line 298 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 298 "hash_table.m"
                MR_Word mercury__hash_table__V_19_19 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: MaxOccupancy =< 0.0"));

#line 298 "hash_table.m"
                {
#line 298 "hash_table.m"
                  mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_30_30, ((MR_Box) (mercury__hash_table__V_19_19)));
                }
#line 298 "hash_table.m"
              }
#line 300 "hash_table.m"
            else
#line 301 "hash_table.m"
              {
#line 301 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_31_31;
#line 301 "hash_table.m"
                MR_Word mercury__hash_table__TypeInfo_32_32;
#line 301 "hash_table.m"
                MR_Integer mercury__hash_table__NumBuckets_9;
#line 301 "hash_table.m"
                MR_Integer mercury__hash_table__MaxOccupants_10;
#line 301 "hash_table.m"
                MR_ArrayPtr mercury__hash_table__Buckets_11;
#line 301 "hash_table.m"
                MR_Float mercury__hash_table__V_22_22;
#line 301 "hash_table.m"
                MR_Float mercury__hash_table__V_23_23;
#line 301 "hash_table.m"
                MR_Word mercury__hash_table__V_24_24;
#line 166 "array.opt"
                MR_ArrayPtr mercury__hash_table__conv0_Buckets_11;

#line 301 "hash_table.m"
                {
#line 301 "hash_table.m"
                  mercury__hash_table__NumBuckets_9 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, mercury__hash_table__N_6);
                }
#line 35 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__hash_table__NumBuckets_9 ;
		{
#line 35 "float.opt"

    FloatVal = IntVal;

#line 9400 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_23_23  = FloatVal;
#line 35 "float.opt"
}
#line 302 "hash_table.m"
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

#line 9422 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__MaxOccupants_10  = Ceil;
#line 38 "float.opt"
}
#line 9429 "hash_table.c"
                mercury__hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 9431 "hash_table.c"
                {
#line 9433 "hash_table.c"
                  mercury__hash_table__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9435 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_31_31));
#line 9437 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_26));
#line 9439 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_27));
#line 9441 "hash_table.c"
                }
#line 303 "hash_table.m"
                mercury__hash_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "array.opt"
                {
#line 166 "array.opt"
                  mercury__array__init_3_p_0(mercury__hash_table__TypeInfo_32_32, mercury__hash_table__NumBuckets_9, ((MR_Box) (mercury__hash_table__V_24_24)), &mercury__hash_table__conv0_Buckets_11);
                }
#line 166 "array.opt"
                mercury__hash_table__Buckets_11 = (MR_ArrayPtr) mercury__hash_table__conv0_Buckets_11;
#line 304 "hash_table.m"
                {
#line 304 "hash_table.m"
                  mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 304 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) ((MR_Integer) 0));
#line 304 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_10));
#line 304 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_5));
#line 304 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_11));
#line 304 "hash_table.m"
                }
#line 301 "hash_table.m"
              }
#line 300 "hash_table.m"
          }
#line 297 "hash_table.m"
      }
#line 294 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 294 "hash_table.m"
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
