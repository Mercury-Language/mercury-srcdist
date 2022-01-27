/*
** Automatically generated from `string.to_string.m'
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


/* :- module string.to_string. */
/* :- implementation. */

/*
INIT mercury__string__to_string__init
ENDINIT
*/

#include "string.to_string.mih"


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




#line 93 "string.to_string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0;

#line 96 "string.to_string.c"
static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
#line 99 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_1,
#line 101 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_2);

#line 104 "string.to_string.c"
static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
#line 107 "string.to_string.c"
  MR_Box * mercury__string__to_string__wrapper_arg_1,
#line 109 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_2,
#line 111 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_3);

#line 50 "version_array.opt"
static MR_Word MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 50 "version_array.opt"
  MR_Word mercury__string__to_string__TypeInfo_for_T1_1_16,
#line 50 "version_array.opt"
  MR_Box mercury__string__to_string__V_7_7,
#line 50 "version_array.opt"
  MR_Word mercury__string__to_string__V_8_8,
#line 50 "version_array.opt"
  MR_Integer mercury__string__to_string__V_9_9);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 190 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

#line 185 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

#line 181 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

#line 501 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
#line 501 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T1_6,
#line 501 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T2_7,
#line 501 "string.to_string.m"
  MR_Box mercury__string__to_string__X_3,
#line 501 "string.to_string.m"
  MR_Box * mercury__string__to_string__Y_4);

#line 493 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
#line 493 "string.to_string.m"
  MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_4,
#line 493 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_8,
#line 493 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_9);

#line 468 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
#line 468 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeCtorDesc_4,
#line 468 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_12,
#line 468 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_13);

#line 462 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
#line 462 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeDesc_4,
#line 462 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_6,
#line 462 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_7);

#line 454 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
#line 454 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 454 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 454 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 454 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 454 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 452 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
#line 452 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 452 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 452 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 452 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 452 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 451 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
#line 451 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 451 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 451 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 451 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 451 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 450 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
#line 450 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 450 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 450 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 450 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 450 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 440 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
#line 440 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 440 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 440 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 440 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 440 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 438 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
#line 438 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 438 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 438 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 438 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 438 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 437 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
#line 437 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 437 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 437 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 437 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 437 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 436 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
#line 436 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 436 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 436 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 436 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 436 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 415 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 415 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 414 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
#line 414 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 414 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 414 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 414 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 413 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
#line 413 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 413 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 413 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 413 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 412 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
#line 412 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 412 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 412 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 412 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 402 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 402 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

#line 400 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
#line 400 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 400 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 400 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 400 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

#line 399 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
#line 399 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 399 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 399 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 399 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

#line 398 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
#line 398 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 398 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 398 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 398 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

#line 373 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 373 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

#line 371 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
#line 371 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 371 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 371 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 371 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

#line 370 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
#line 370 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 370 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 370 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 370 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

#line 369 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
#line 369 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 369 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 369 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 369 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

#line 361 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__adjust_priority_3_p_0(
#line 361 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_1,
#line 361 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__2_2,
#line 361 "string.to_string.m"
  MR_Integer * mercury__string__to_string__HeadVar__3_3);

#line 351 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
#line 351 "string.to_string.m"
  MR_String mercury__string__to_string__String_6,
#line 351 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_7,
#line 351 "string.to_string.m"
  MR_Integer mercury__string__to_string__OpPriority_8,
#line 351 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_10,
#line 351 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_11);

#line 322 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
#line 322 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 322 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 322 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 322 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 322 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 322 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

#line 320 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
#line 320 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 320 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 320 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 320 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 320 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 320 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

#line 318 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
#line 318 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 318 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 318 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 318 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 318 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 318 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

#line 316 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
#line 316 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 316 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 316 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 316 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 316 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 316 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

#line 203 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
#line 203 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 203 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 203 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 203 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 203 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 203 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

#line 201 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
#line 201 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 201 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 201 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 201 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 201 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 201 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

#line 199 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
#line 199 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 199 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 199 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 199 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 199 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 199 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

#line 197 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
#line 197 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 197 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 197 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 197 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 197 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 197 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

#line 80 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
#line 80 "string.to_string.m"
  MR_String mercury__string__to_string__String_4,
#line 80 "string.to_string.m"
  MR_Word mercury__string__to_string__RevStrings_5,
#line 80 "string.to_string.m"
  MR_Word * mercury__string__to_string__HeadVar__3_3);


static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 797 "string.to_string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 805 "string.to_string.c"
const MR_TypeCtorInfo_Struct mercury__string__to_string__string__to_string__type_ctor_info_revstrings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__string__to_string____Unify____revstrings_0_0_10001)),
  ((MR_Box) (mercury__string__to_string____Compare____revstrings_0_0_10001)),
  (MR_String) "string.to_string",
  (MR_String) "revstrings",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 822 "string.to_string.c"
static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
#line 825 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_1,
#line 827 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_2)
#line 829 "string.to_string.c"
{
#line 831 "string.to_string.c"
  {
#line 833 "string.to_string.c"
    MR_bool mercury__string__to_string__succeeded;

#line 836 "string.to_string.c"
    {
#line 838 "string.to_string.c"
      mercury__string__to_string__succeeded = mercury__string__to_string____Unify____revstrings_0_0(((MR_Word) mercury__string__to_string__wrapper_arg_1), ((MR_Word) mercury__string__to_string__wrapper_arg_2));
    }
#line 841 "string.to_string.c"
    return mercury__string__to_string__succeeded;
#line 843 "string.to_string.c"
  }
#line 845 "string.to_string.c"
}

#line 848 "string.to_string.c"
static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
#line 851 "string.to_string.c"
  MR_Box * mercury__string__to_string__wrapper_arg_1,
#line 853 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_2,
#line 855 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_3)
#line 857 "string.to_string.c"
{
#line 859 "string.to_string.c"
  {
#line 861 "string.to_string.c"
    MR_Word mercury__string__to_string__conv0_HeadVar__1_1;

#line 864 "string.to_string.c"
    {
#line 866 "string.to_string.c"
      mercury__string__to_string____Compare____revstrings_0_0(&mercury__string__to_string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__to_string__wrapper_arg_2), ((MR_Word) mercury__string__to_string__wrapper_arg_3));
    }
#line 869 "string.to_string.c"
    *mercury__string__to_string__wrapper_arg_1 = ((MR_Box) (mercury__string__to_string__conv0_HeadVar__1_1));
#line 871 "string.to_string.c"
  }
#line 873 "string.to_string.c"
}

#line 50 "version_array.opt"
static MR_Word MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 50 "version_array.opt"
  MR_Word mercury__string__to_string__TypeInfo_for_T1_1_16,
#line 50 "version_array.opt"
  MR_Box mercury__string__to_string__V_7_7,
#line 50 "version_array.opt"
  MR_Word mercury__string__to_string__V_8_8,
#line 50 "version_array.opt"
  MR_Integer mercury__string__to_string__V_9_9)
#line 50 "version_array.opt"
{
#line 222 "version_array.opt"
  while (MR_TRUE)
#line 222 "version_array.opt"
    {
#line 222 "version_array.opt"
      /* tailcall optimized into a loop */
#line 222 "version_array.opt"
      {
#line 222 "version_array.opt"
        MR_bool mercury__string__to_string__succeeded = ((MR_Integer) 0 <= mercury__string__to_string__V_9_9);
#line 222 "version_array.opt"
        MR_Word mercury__string__to_string__V_5_10;

#line 222 "version_array.opt"
        if (mercury__string__to_string__succeeded)
#line 217 "version_array.opt"
          {
#line 217 "version_array.opt"
            MR_Word mercury__string__to_string__V_11_12;
#line 217 "version_array.opt"
            MR_Integer mercury__string__to_string__V_13_13;
#line 217 "version_array.opt"
            MR_Box mercury__string__to_string__V_12_14;

#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__string__to_string__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__string__to_string__TypeInfo_for_T1_1_16, mercury__string__to_string__V_7_7, mercury__string__to_string__V_9_9);
            }
#line 54 "list.opt"
            {
#line 54 "list.opt"
              mercury__string__to_string__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 54 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__V_11_12, 0) = mercury__string__to_string__V_12_14;
#line 54 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__V_11_12, 1) = ((MR_Box) (mercury__string__to_string__V_8_8));
#line 54 "list.opt"
            }
#line 220 "version_array.opt"
            mercury__string__to_string__V_13_13 = (mercury__string__to_string__V_9_9 - (MR_Integer) 1);
#line 217 "version_array.opt"
            /* direct tailcall eliminated */
#line 217 "version_array.opt"
            {
#line 217 "version_array.opt"
              MR_Word mercury__string__to_string__V_8__tmp_copy_8 = mercury__string__to_string__V_11_12;
#line 217 "version_array.opt"
              MR_Integer mercury__string__to_string__V_9__tmp_copy_9 = mercury__string__to_string__V_13_13;

#line 217 "version_array.opt"
              mercury__string__to_string__V_9_9 = mercury__string__to_string__V_9__tmp_copy_9;
#line 217 "version_array.opt"
              mercury__string__to_string__V_8_8 = mercury__string__to_string__V_8__tmp_copy_8;
#line 217 "version_array.opt"
            }
#line 217 "version_array.opt"
            continue;
#line 217 "version_array.opt"
          }
#line 222 "version_array.opt"
        else
#line 223 "version_array.opt"
          mercury__string__to_string__V_5_10 = mercury__string__to_string__V_8_8;
#line 222 "version_array.opt"
        return mercury__string__to_string__V_5_10;
#line 222 "version_array.opt"
      }
#line 222 "version_array.opt"
      break;
#line 222 "version_array.opt"
    }
#line 50 "version_array.opt"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__string__to_string__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 190 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 190 "string.to_string.m"
{
#line 193 "string.to_string.m"
  {
#line 193 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 193 "string.to_string.m"
  }
#line 190 "string.to_string.m"
}

#line 185 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 185 "string.to_string.m"
{
#line 188 "string.to_string.m"
  {
#line 188 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 188 "string.to_string.m"
  }
#line 185 "string.to_string.m"
}

#line 181 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 181 "string.to_string.m"
{
#line 183 "string.to_string.m"
  {
#line 183 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 183 "string.to_string.m"
  }
#line 181 "string.to_string.m"
}

#line 76 "string.to_string.m"
void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0(
#line 76 "string.to_string.m"
  MR_Word * mercury__string__to_string__HeadVar__1_1,
#line 76 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__2_2,
#line 76 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3)
#line 76 "string.to_string.m"
{
#line 76 "string.to_string.m"
  {
#line 76 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 76 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_6_6 = (MR_Word) &mercury__string__to_string_scalar_common_1[1];
#line 76 "string.to_string.m"
    MR_Word mercury__string__to_string__Cast_HeadVar1_4 = mercury__string__to_string__HeadVar__2_2;
#line 76 "string.to_string.m"
    MR_Word mercury__string__to_string__Cast_HeadVar2_5 = mercury__string__to_string__HeadVar__3_3;

#line 76 "string.to_string.m"
    {
#line 76 "string.to_string.m"
      mercury__builtin__compare_3_p_0(mercury__string__to_string__TypeInfo_6_6, mercury__string__to_string__HeadVar__1_1, ((MR_Box) (mercury__string__to_string__Cast_HeadVar1_4)), ((MR_Box) (mercury__string__to_string__Cast_HeadVar2_5)));
#line 76 "string.to_string.m"
      return;
    }
#line 76 "string.to_string.m"
  }
#line 76 "string.to_string.m"
}

#line 76 "string.to_string.m"
MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0(
#line 76 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__1_1,
#line 76 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__2_2)
#line 76 "string.to_string.m"
{
#line 76 "string.to_string.m"
  {
#line 76 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 76 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_5_5 = (MR_Word) &mercury__string__to_string_scalar_common_1[1];
#line 76 "string.to_string.m"
    MR_Word mercury__string__to_string__Cast_HeadVar1_3 = mercury__string__to_string__HeadVar__1_1;
#line 76 "string.to_string.m"
    MR_Word mercury__string__to_string__Cast_HeadVar2_4 = mercury__string__to_string__HeadVar__2_2;

#line 76 "string.to_string.m"
    {
#line 76 "string.to_string.m"
      return mercury__string__to_string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__to_string__TypeInfo_5_5, ((MR_Box) (mercury__string__to_string__Cast_HeadVar1_3)), ((MR_Box) (mercury__string__to_string__Cast_HeadVar2_4)));
    }
#line 76 "string.to_string.m"
    return mercury__string__to_string__succeeded;
#line 76 "string.to_string.m"
  }
#line 76 "string.to_string.m"
}

#line 501 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
#line 501 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T1_6,
#line 501 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T2_7,
#line 501 "string.to_string.m"
  MR_Box mercury__string__to_string__X_3,
#line 501 "string.to_string.m"
  MR_Box * mercury__string__to_string__Y_4)
#line 501 "string.to_string.m"
{
#line 503 "string.to_string.m"
  {
#line 503 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 503 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_5;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__string__to_string__TypeInfo_for_T1_6, mercury__string__to_string__X_3, &mercury__string__to_string__V_5_5);
    }
#line 504 "string.to_string.m"
    {
#line 504 "string.to_string.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__string__to_string__TypeInfo_for_T2_7, mercury__string__to_string__V_5_5, mercury__string__to_string__Y_4);
#line 504 "string.to_string.m"
      return;
    }
#line 503 "string.to_string.m"
  }
#line 501 "string.to_string.m"
}

#line 493 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
#line 493 "string.to_string.m"
  MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_4,
#line 493 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_8,
#line 493 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_9)
#line 493 "string.to_string.m"
{
#line 496 "string.to_string.m"
  {
#line 496 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 496 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_6 = (MR_Word) mercury__string__to_string__PrivateBuiltinTypeInfo_4;
#line 496 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeDesc_7;
#line 496 "string.to_string.m"
    MR_String mercury__string__to_string__V_15_15;
#line 496 "string.to_string.m"
    MR_String mercury__string__to_string__V_17_17;

#line 498 "string.to_string.m"
    {
#line 498 "string.to_string.m"
      mercury__type_desc__type_info_to_type_desc_2_p_0(mercury__string__to_string__TypeInfo_6, &mercury__string__to_string__TypeDesc_7);
    }
#line 466 "string.to_string.m"
    {
#line 466 "string.to_string.m"
      mercury__string__to_string__V_17_17 = mercury__type_desc__type_name_1_f_0(mercury__string__to_string__TypeDesc_7);
    }
#line 72 "term_io.opt"
    {
#line 72 "term_io.opt"
      mercury__string__to_string__V_15_15 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__V_17_17, (MR_Integer) 1);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_9 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_15_15));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_8));
#line 82 "string.to_string.m"
    }
#line 496 "string.to_string.m"
  }
#line 493 "string.to_string.m"
}

#line 468 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
#line 468 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeCtorDesc_4,
#line 468 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_12,
#line 468 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_13)
#line 468 "string.to_string.m"
{
#line 471 "string.to_string.m"
  {
#line 471 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 471 "string.to_string.m"
    MR_String mercury__string__to_string__ModuleName_6;
#line 471 "string.to_string.m"
    MR_String mercury__string__to_string__Name0_7;
#line 471 "string.to_string.m"
    MR_Integer mercury__string__to_string__Arity0_8;
#line 471 "string.to_string.m"
    MR_String mercury__string__to_string__Name_9;
#line 471 "string.to_string.m"
    MR_Integer mercury__string__to_string__Arity_10;
#line 471 "string.to_string.m"
    MR_String mercury__string__to_string__String_11;

#line 123 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__string__to_string__TypeCtorDesc_4 ;
		{
#line 123 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 1256 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__ModuleName_6  = TypeCtorModuleName;
	 mercury__string__to_string__Name0_7  = TypeCtorName;
	 mercury__string__to_string__Arity0_8  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 72 "term_io.opt"
    {
#line 72 "term_io.opt"
      mercury__string__to_string__Name_9 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Name0_7, (MR_Integer) 1);
    }
#line 476 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__ModuleName_6, (MR_String) "builtin") == 0);
#line 476 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 477 "string.to_string.m"
      mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Name_9, (MR_String) "func") == 0);
#line 483 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 482 "string.to_string.m"
      {
#line 482 "string.to_string.m"
        mercury__string__to_string__Arity_10 = (mercury__string__to_string__Arity0_8 - (MR_Integer) 1);
#line 482 "string.to_string.m"
      }
#line 483 "string.to_string.m"
    else
#line 484 "string.to_string.m"
      mercury__string__to_string__Arity_10 = mercury__string__to_string__Arity0_8;
#line 486 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__ModuleName_6, (MR_String) "builtin") == 0);
#line 488 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 487 "string.to_string.m"
      {
#line 487 "string.to_string.m"
        MR_String mercury__string__to_string__V_30_30;
#line 487 "string.to_string.m"
        MR_Word mercury__string__to_string__V_36_36 = (MR_Word) &mercury__string__to_string_scalar_common_5[0];
#line 487 "string.to_string.m"
        MR_String mercury__string__to_string__V_38_38;
#line 487 "string.to_string.m"
        MR_String mercury__string__to_string__V_39_39;
#line 487 "string.to_string.m"
        MR_Word mercury__string__to_string__V_7_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "string.to_string.m"
        MR_Word mercury__string__to_string__V_8_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "string.to_string.m"
        MR_Word mercury__string__to_string__V_7_89;
#line 487 "string.to_string.m"
        MR_Word mercury__string__to_string__V_8_90;

#line 57 "string.format.opt"
        {
#line 57 "string.format.opt"
          mercury__string__format__format_signed_int_component_5_p_0(mercury__string__to_string__V_36_36, mercury__string__to_string__V_7_78, mercury__string__to_string__V_8_79, mercury__string__to_string__Arity_10, &mercury__string__to_string__V_30_30);
        }
#line 390 "string.opt"
        {
#line 390 "string.opt"
          mercury__string__append_3_p_2((MR_String) "/", mercury__string__to_string__V_30_30, &mercury__string__to_string__V_38_38);
        }
#line 39 "string.format.opt"
        mercury__string__to_string__V_7_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 40 "string.format.opt"
        mercury__string__to_string__V_8_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 41 "string.format.opt"
        {
#line 41 "string.format.opt"
          mercury__string__format__format_string_component_5_p_0(mercury__string__to_string__V_36_36, mercury__string__to_string__V_7_89, mercury__string__to_string__V_8_90, mercury__string__to_string__Name_9, &mercury__string__to_string__V_39_39);
        }
#line 390 "string.opt"
        {
#line 390 "string.opt"
          mercury__string__append_3_p_2(mercury__string__to_string__V_39_39, mercury__string__to_string__V_38_38, &mercury__string__to_string__String_11);
        }
#line 487 "string.to_string.m"
      }
#line 488 "string.to_string.m"
    else
#line 489 "string.to_string.m"
      {
#line 489 "string.to_string.m"
        MR_String mercury__string__to_string__V_46_46;
#line 489 "string.to_string.m"
        MR_Word mercury__string__to_string__V_52_52 = (MR_Word) &mercury__string__to_string_scalar_common_5[0];
#line 489 "string.to_string.m"
        MR_String mercury__string__to_string__V_54_54;
#line 489 "string.to_string.m"
        MR_String mercury__string__to_string__V_55_55;
#line 489 "string.to_string.m"
        MR_String mercury__string__to_string__V_62_62;
#line 489 "string.to_string.m"
        MR_String mercury__string__to_string__V_64_64;
#line 489 "string.to_string.m"
        MR_String mercury__string__to_string__V_65_65;

#line 489 "string.to_string.m"
        {
#line 489 "string.to_string.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__string__to_string__V_52_52, mercury__string__to_string__Arity_10, &mercury__string__to_string__V_46_46);
        }
#line 489 "string.to_string.m"
        {
#line 489 "string.to_string.m"
          mercury__string__to_string__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "/", mercury__string__to_string__V_46_46);
        }
#line 489 "string.to_string.m"
        {
#line 489 "string.to_string.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__string__to_string__V_52_52, mercury__string__to_string__Name_9, &mercury__string__to_string__V_55_55);
        }
#line 489 "string.to_string.m"
        {
#line 489 "string.to_string.m"
          mercury__string__to_string__V_62_62 = mercury__string__f_43_43_2_f_0(mercury__string__to_string__V_55_55, mercury__string__to_string__V_54_54);
        }
#line 489 "string.to_string.m"
        {
#line 489 "string.to_string.m"
          mercury__string__to_string__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) ".", mercury__string__to_string__V_62_62);
        }
#line 489 "string.to_string.m"
        {
#line 489 "string.to_string.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__string__to_string__V_52_52, mercury__string__to_string__ModuleName_6, &mercury__string__to_string__V_65_65);
        }
#line 489 "string.to_string.m"
        {
#line 489 "string.to_string.m"
          mercury__string__to_string__String_11 = mercury__string__f_43_43_2_f_0(mercury__string__to_string__V_65_65, mercury__string__to_string__V_64_64);
        }
#line 489 "string.to_string.m"
      }
#line 491 "string.to_string.m"
    {
#line 491 "string.to_string.m"
      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__String_11, mercury__string__to_string__STATE_VARIABLE_Rs_0_12, mercury__string__to_string__STATE_VARIABLE_Rs_13);
#line 491 "string.to_string.m"
      return;
    }
#line 471 "string.to_string.m"
  }
#line 468 "string.to_string.m"
}

#line 462 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
#line 462 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeDesc_4,
#line 462 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_6,
#line 462 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_7)
#line 462 "string.to_string.m"
{
#line 465 "string.to_string.m"
  {
#line 465 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 465 "string.to_string.m"
    MR_String mercury__string__to_string__V_8_8;
#line 465 "string.to_string.m"
    MR_String mercury__string__to_string__V_10_10;

#line 466 "string.to_string.m"
    {
#line 466 "string.to_string.m"
      mercury__string__to_string__V_10_10 = mercury__type_desc__type_name_1_f_0(mercury__string__to_string__TypeDesc_4);
    }
#line 72 "term_io.opt"
    {
#line 72 "term_io.opt"
      mercury__string__to_string__V_8_8 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__V_10_10, (MR_Integer) 1);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_7 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_8_8));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_6));
#line 82 "string.to_string.m"
    }
#line 465 "string.to_string.m"
  }
#line 462 "string.to_string.m"
}

#line 454 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
#line 454 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 454 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 454 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 454 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 454 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 454 "string.to_string.m"
{
#line 456 "string.to_string.m"
  {
#line 456 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_29;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_8_40;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_4_44;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_52;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_53_53;
#line 120 "version_array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
#line 1497 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 1499 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_53_53;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 82 "string.to_string.m"
    }
#line 138 "version_array.opt"
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 120 "version_array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{
#line 120 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1527 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
#line 120 "version_array.opt"
}
#line 124 "version_array.opt"
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
#line 1541 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1543 "string.to_string.c"
    {
#line 1545 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1547 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 1549 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 1551 "string.to_string.c"
    }
#line 1553 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 1555 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
#line 1557 "string.to_string.c"
    {
#line 1559 "string.to_string.c"
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
#line 1562 "string.to_string.c"
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 82 "string.to_string.m"
    }
#line 456 "string.to_string.m"
  }
#line 454 "string.to_string.m"
}

#line 452 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
#line 452 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 452 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 452 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 452 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 452 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 452 "string.to_string.m"
{
#line 456 "string.to_string.m"
  {
#line 456 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_29;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_8_40;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_4_44;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_52;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_53_53;
#line 120 "version_array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
#line 1633 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 1635 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_53_53;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 82 "string.to_string.m"
    }
#line 138 "version_array.opt"
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 120 "version_array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{
#line 120 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1663 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
#line 120 "version_array.opt"
}
#line 124 "version_array.opt"
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
#line 1677 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1679 "string.to_string.c"
    {
#line 1681 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1683 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 1685 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 1687 "string.to_string.c"
    }
#line 1689 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 1691 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
#line 1693 "string.to_string.c"
    {
#line 1695 "string.to_string.c"
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
#line 1698 "string.to_string.c"
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 82 "string.to_string.m"
    }
#line 456 "string.to_string.m"
  }
#line 452 "string.to_string.m"
}

#line 451 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
#line 451 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 451 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 451 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 451 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 451 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 451 "string.to_string.m"
{
#line 456 "string.to_string.m"
  {
#line 456 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_29;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_8_40;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_4_44;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_52;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_53_53;
#line 120 "version_array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
#line 1769 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 1771 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_53_53;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 82 "string.to_string.m"
    }
#line 138 "version_array.opt"
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 120 "version_array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{
#line 120 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1799 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
#line 120 "version_array.opt"
}
#line 124 "version_array.opt"
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
#line 1813 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1815 "string.to_string.c"
    {
#line 1817 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1819 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 1821 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 1823 "string.to_string.c"
    }
#line 1825 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 1827 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
#line 1829 "string.to_string.c"
    {
#line 1831 "string.to_string.c"
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
#line 1834 "string.to_string.c"
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 82 "string.to_string.m"
    }
#line 456 "string.to_string.m"
  }
#line 451 "string.to_string.m"
}

#line 450 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
#line 450 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 450 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 450 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 450 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 450 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 450 "string.to_string.m"
{
#line 456 "string.to_string.m"
  {
#line 456 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 456 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_29;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_8_40;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_4_44;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_52;
#line 456 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_53_53;
#line 120 "version_array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
#line 1905 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 1907 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_53_53;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 82 "string.to_string.m"
    }
#line 138 "version_array.opt"
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 120 "version_array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{
#line 120 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1935 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
#line 120 "version_array.opt"
}
#line 124 "version_array.opt"
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
#line 1949 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1951 "string.to_string.c"
    {
#line 1953 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1955 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 1957 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 1959 "string.to_string.c"
    }
#line 1961 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 1963 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
#line 1965 "string.to_string.c"
    {
#line 1967 "string.to_string.c"
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
#line 1970 "string.to_string.c"
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 82 "string.to_string.m"
    }
#line 456 "string.to_string.m"
  }
#line 450 "string.to_string.m"
}

#line 440 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
#line 440 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 440 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 440 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 440 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 440 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 440 "string.to_string.m"
{
#line 442 "string.to_string.m"
  {
#line 442 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_5_28;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_6_29;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_39;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_40_40;
#line 217 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
#line 225 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
#line 2041 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2043 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_40_40;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 82 "string.to_string.m"
    }
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 217 "array.opt"

    /* Array not used */
    Min = 0;

#line 2070 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_5_28  = Min;
#line 217 "array.opt"
}
#line 225 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 225 "array.opt"

    Max = Array->size - 1;

#line 2090 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_6_29  = Max;
#line 225 "array.opt"
}
#line 306 "array.opt"
    {
#line 306 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_28, mercury__string__to_string__V_6_29, &mercury__string__to_string__V_15_15);
    }
#line 2102 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2104 "string.to_string.c"
    {
#line 2106 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2108 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2110 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2112 "string.to_string.c"
    }
#line 2114 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2116 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2118 "string.to_string.c"
    {
#line 2120 "string.to_string.c"
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2123 "string.to_string.c"
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 82 "string.to_string.m"
    }
#line 442 "string.to_string.m"
  }
#line 440 "string.to_string.m"
}

#line 438 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
#line 438 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 438 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 438 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 438 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 438 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 438 "string.to_string.m"
{
#line 442 "string.to_string.m"
  {
#line 442 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_5_28;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_6_29;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_39;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_40_40;
#line 217 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
#line 225 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
#line 2194 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2196 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_40_40;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 82 "string.to_string.m"
    }
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 217 "array.opt"

    /* Array not used */
    Min = 0;

#line 2223 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_5_28  = Min;
#line 217 "array.opt"
}
#line 225 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 225 "array.opt"

    Max = Array->size - 1;

#line 2243 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_6_29  = Max;
#line 225 "array.opt"
}
#line 306 "array.opt"
    {
#line 306 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_28, mercury__string__to_string__V_6_29, &mercury__string__to_string__V_15_15);
    }
#line 2255 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2257 "string.to_string.c"
    {
#line 2259 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2261 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2263 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2265 "string.to_string.c"
    }
#line 2267 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2269 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2271 "string.to_string.c"
    {
#line 2273 "string.to_string.c"
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2276 "string.to_string.c"
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 82 "string.to_string.m"
    }
#line 442 "string.to_string.m"
  }
#line 438 "string.to_string.m"
}

#line 437 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
#line 437 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 437 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 437 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 437 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 437 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 437 "string.to_string.m"
{
#line 442 "string.to_string.m"
  {
#line 442 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_5_28;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_6_29;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_39;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_40_40;
#line 217 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
#line 225 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
#line 2347 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2349 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_40_40;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 82 "string.to_string.m"
    }
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 217 "array.opt"

    /* Array not used */
    Min = 0;

#line 2376 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_5_28  = Min;
#line 217 "array.opt"
}
#line 225 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 225 "array.opt"

    Max = Array->size - 1;

#line 2396 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_6_29  = Max;
#line 225 "array.opt"
}
#line 306 "array.opt"
    {
#line 306 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_28, mercury__string__to_string__V_6_29, &mercury__string__to_string__V_15_15);
    }
#line 2408 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2410 "string.to_string.c"
    {
#line 2412 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2414 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2416 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2418 "string.to_string.c"
    }
#line 2420 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2422 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2424 "string.to_string.c"
    {
#line 2426 "string.to_string.c"
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2429 "string.to_string.c"
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 82 "string.to_string.m"
    }
#line 442 "string.to_string.m"
  }
#line 437 "string.to_string.m"
}

#line 436 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
#line 436 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 436 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 436 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 436 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 436 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 436 "string.to_string.m"
{
#line 442 "string.to_string.m"
  {
#line 442 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 442 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_5_28;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_6_29;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_39;
#line 442 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_40_40;
#line 217 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
#line 225 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
#line 2500 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2502 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_40_40;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 82 "string.to_string.m"
    }
#line 217 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 217 "array.opt"

    /* Array not used */
    Min = 0;

#line 2529 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_5_28  = Min;
#line 217 "array.opt"
}
#line 225 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 225 "array.opt"

    Max = Array->size - 1;

#line 2549 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_6_29  = Max;
#line 225 "array.opt"
}
#line 306 "array.opt"
    {
#line 306 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_28, mercury__string__to_string__V_6_29, &mercury__string__to_string__V_15_15);
    }
#line 2561 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2563 "string.to_string.c"
    {
#line 2565 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2567 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2569 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2571 "string.to_string.c"
    }
#line 2573 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2575 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2577 "string.to_string.c"
    {
#line 2579 "string.to_string.c"
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2582 "string.to_string.c"
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 82 "string.to_string.m"
    }
#line 442 "string.to_string.m"
  }
#line 436 "string.to_string.m"
}

#line 415 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 415 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 415 "string.to_string.m"
{
#line 417 "string.to_string.m"
  {
#line 417 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 417 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
#line 417 "string.to_string.m"
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

#line 419 "string.to_string.m"
    {
#line 419 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 419 "string.to_string.m"
      return;
    }
#line 417 "string.to_string.m"
  }
#line 415 "string.to_string.m"
}

#line 414 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
#line 414 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 414 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 414 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 414 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 414 "string.to_string.m"
{
#line 417 "string.to_string.m"
  {
#line 417 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 417 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
#line 417 "string.to_string.m"
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

#line 419 "string.to_string.m"
    {
#line 419 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 419 "string.to_string.m"
      return;
    }
#line 417 "string.to_string.m"
  }
#line 414 "string.to_string.m"
}

#line 413 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
#line 413 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 413 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 413 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 413 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 413 "string.to_string.m"
{
#line 417 "string.to_string.m"
  {
#line 417 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 417 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
#line 417 "string.to_string.m"
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

#line 419 "string.to_string.m"
    {
#line 419 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 419 "string.to_string.m"
      return;
    }
#line 417 "string.to_string.m"
  }
#line 413 "string.to_string.m"
}

#line 412 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
#line 412 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 412 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 412 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 412 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 412 "string.to_string.m"
{
#line 417 "string.to_string.m"
  {
#line 417 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 417 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
#line 417 "string.to_string.m"
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

#line 419 "string.to_string.m"
    {
#line 419 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 419 "string.to_string.m"
      return;
    }
#line 417 "string.to_string.m"
  }
#line 412 "string.to_string.m"
}

#line 402 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 402 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
#line 402 "string.to_string.m"
{
#line 404 "string.to_string.m"
  while (MR_TRUE)
#line 404 "string.to_string.m"
    {
#line 404 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 404 "string.to_string.m"
      {
#line 404 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;

#line 404 "string.to_string.m"
        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
#line 404 "string.to_string.m"
        else
#line 405 "string.to_string.m"
          {
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 82 "string.to_string.m"
            {
#line 82 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
#line 82 "string.to_string.m"
            }
#line 407 "string.to_string.m"
            {
#line 407 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
#line 408 "string.to_string.m"
            /* direct tailcall eliminated */
#line 408 "string.to_string.m"
            {
#line 408 "string.to_string.m"
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
#line 408 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 408 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
#line 408 "string.to_string.m"
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
#line 408 "string.to_string.m"
            }
#line 408 "string.to_string.m"
            continue;
#line 405 "string.to_string.m"
          }
#line 404 "string.to_string.m"
      }
#line 404 "string.to_string.m"
      break;
#line 404 "string.to_string.m"
    }
#line 402 "string.to_string.m"
}

#line 400 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
#line 400 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 400 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 400 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 400 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
#line 400 "string.to_string.m"
{
#line 404 "string.to_string.m"
  while (MR_TRUE)
#line 404 "string.to_string.m"
    {
#line 404 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 404 "string.to_string.m"
      {
#line 404 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;

#line 404 "string.to_string.m"
        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
#line 404 "string.to_string.m"
        else
#line 405 "string.to_string.m"
          {
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 82 "string.to_string.m"
            {
#line 82 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
#line 82 "string.to_string.m"
            }
#line 407 "string.to_string.m"
            {
#line 407 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
#line 408 "string.to_string.m"
            /* direct tailcall eliminated */
#line 408 "string.to_string.m"
            {
#line 408 "string.to_string.m"
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
#line 408 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 408 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
#line 408 "string.to_string.m"
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
#line 408 "string.to_string.m"
            }
#line 408 "string.to_string.m"
            continue;
#line 405 "string.to_string.m"
          }
#line 404 "string.to_string.m"
      }
#line 404 "string.to_string.m"
      break;
#line 404 "string.to_string.m"
    }
#line 400 "string.to_string.m"
}

#line 399 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
#line 399 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 399 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 399 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 399 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
#line 399 "string.to_string.m"
{
#line 404 "string.to_string.m"
  while (MR_TRUE)
#line 404 "string.to_string.m"
    {
#line 404 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 404 "string.to_string.m"
      {
#line 404 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;

#line 404 "string.to_string.m"
        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
#line 404 "string.to_string.m"
        else
#line 405 "string.to_string.m"
          {
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 82 "string.to_string.m"
            {
#line 82 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
#line 82 "string.to_string.m"
            }
#line 407 "string.to_string.m"
            {
#line 407 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
#line 408 "string.to_string.m"
            /* direct tailcall eliminated */
#line 408 "string.to_string.m"
            {
#line 408 "string.to_string.m"
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
#line 408 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 408 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
#line 408 "string.to_string.m"
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
#line 408 "string.to_string.m"
            }
#line 408 "string.to_string.m"
            continue;
#line 405 "string.to_string.m"
          }
#line 404 "string.to_string.m"
      }
#line 404 "string.to_string.m"
      break;
#line 404 "string.to_string.m"
    }
#line 399 "string.to_string.m"
}

#line 398 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
#line 398 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 398 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 398 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 398 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
#line 398 "string.to_string.m"
{
#line 404 "string.to_string.m"
  while (MR_TRUE)
#line 404 "string.to_string.m"
    {
#line 404 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 404 "string.to_string.m"
      {
#line 404 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;

#line 404 "string.to_string.m"
        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
#line 404 "string.to_string.m"
        else
#line 405 "string.to_string.m"
          {
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
#line 405 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 82 "string.to_string.m"
            {
#line 82 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
#line 82 "string.to_string.m"
            }
#line 407 "string.to_string.m"
            {
#line 407 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
#line 408 "string.to_string.m"
            /* direct tailcall eliminated */
#line 408 "string.to_string.m"
            {
#line 408 "string.to_string.m"
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
#line 408 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 408 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
#line 408 "string.to_string.m"
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
#line 408 "string.to_string.m"
            }
#line 408 "string.to_string.m"
            continue;
#line 405 "string.to_string.m"
          }
#line 404 "string.to_string.m"
      }
#line 404 "string.to_string.m"
      break;
#line 404 "string.to_string.m"
    }
#line 398 "string.to_string.m"
}

#line 373 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 373 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
#line 373 "string.to_string.m"
{
#line 375 "string.to_string.m"
  while (MR_TRUE)
#line 375 "string.to_string.m"
    {
#line 375 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 375 "string.to_string.m"
      {
#line 375 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;
#line 375 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 375 "string.to_string.m"
        MR_String mercury__string__to_string__Functor_10;
#line 375 "string.to_string.m"
        MR_Word mercury__string__to_string__Args_12;
#line 375 "string.to_string.m"
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 376 "string.to_string.m"
        MR_Integer mercury__string__to_string___Arity_11;
#line 384 "string.to_string.m"
        MR_Word mercury__string__to_string__ListHead_13;
#line 384 "string.to_string.m"
        MR_Word mercury__string__to_string__ListTail_14;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__V_18_18;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__V_19_19;

#line 376 "string.to_string.m"
        {
#line 376 "string.to_string.m"
          mercury__deconstruct__deconstruct_5_p_3(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
#line 378 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
#line 378 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 378 "string.to_string.m"
          {
#line 379 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 379 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 379 "string.to_string.m"
              {
#line 379 "string.to_string.m"
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 379 "string.to_string.m"
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 379 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 379 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 379 "string.to_string.m"
                  {
#line 379 "string.to_string.m"
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
#line 379 "string.to_string.m"
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
#line 379 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "string.to_string.m"
                  }
#line 379 "string.to_string.m"
              }
#line 378 "string.to_string.m"
          }
#line 384 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 381 "string.to_string.m"
          {
#line 381 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
#line 381 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 82 "string.to_string.m"
            {
#line 82 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 82 "string.to_string.m"
            }
#line 382 "string.to_string.m"
            {
#line 382 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
#line 383 "string.to_string.m"
            /* direct tailcall eliminated */
#line 383 "string.to_string.m"
            {
#line 383 "string.to_string.m"
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
#line 383 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 383 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
#line 383 "string.to_string.m"
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
#line 383 "string.to_string.m"
            }
#line 383 "string.to_string.m"
            continue;
#line 381 "string.to_string.m"
          }
#line 384 "string.to_string.m"
        else
#line 389 "string.to_string.m"
          {
#line 385 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
#line 385 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 386 "string.to_string.m"
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 389 "string.to_string.m"
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
#line 389 "string.to_string.m"
            else
#line 390 "string.to_string.m"
              {
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeInfo_29_29;
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
#line 390 "string.to_string.m"
                MR_Box mercury__string__to_string__V_26_26;
#line 390 "string.to_string.m"
                MR_Integer mercury__string__to_string__Priority_42;
#line 390 "string.to_string.m"
                MR_Integer mercury__string__to_string__V_43_43;
#line 3236 "string.to_string.c"
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 3238 "string.to_string.c"
                MR_Box mercury__string__to_string__conv1_V_43_43;

#line 82 "string.to_string.m"
                {
#line 82 "string.to_string.m"
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
#line 82 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 82 "string.to_string.m"
                }
#line 17 "univ.opt"
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 17 "univ.opt"
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 3255 "string.to_string.c"
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 3257 "string.to_string.c"
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3259 "string.to_string.c"
                {
#line 3261 "string.to_string.c"
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
#line 3264 "string.to_string.c"
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
#line 95 "string.to_string.m"
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
#line 96 "string.to_string.m"
                {
#line 96 "string.to_string.m"
                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
#line 96 "string.to_string.m"
                  return;
                }
#line 390 "string.to_string.m"
              }
#line 389 "string.to_string.m"
          }
#line 375 "string.to_string.m"
      }
#line 375 "string.to_string.m"
      break;
#line 375 "string.to_string.m"
    }
#line 373 "string.to_string.m"
}

#line 371 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
#line 371 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 371 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 371 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 371 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
#line 371 "string.to_string.m"
{
#line 375 "string.to_string.m"
  while (MR_TRUE)
#line 375 "string.to_string.m"
    {
#line 375 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 375 "string.to_string.m"
      {
#line 375 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;
#line 375 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 375 "string.to_string.m"
        MR_String mercury__string__to_string__Functor_10;
#line 375 "string.to_string.m"
        MR_Word mercury__string__to_string__Args_12;
#line 375 "string.to_string.m"
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 376 "string.to_string.m"
        MR_Integer mercury__string__to_string___Arity_11;
#line 384 "string.to_string.m"
        MR_Word mercury__string__to_string__ListHead_13;
#line 384 "string.to_string.m"
        MR_Word mercury__string__to_string__ListTail_14;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__V_18_18;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__V_19_19;

#line 376 "string.to_string.m"
        {
#line 376 "string.to_string.m"
          mercury__deconstruct__deconstruct_5_p_2(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
#line 378 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
#line 378 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 378 "string.to_string.m"
          {
#line 379 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 379 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 379 "string.to_string.m"
              {
#line 379 "string.to_string.m"
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 379 "string.to_string.m"
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 379 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 379 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 379 "string.to_string.m"
                  {
#line 379 "string.to_string.m"
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
#line 379 "string.to_string.m"
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
#line 379 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "string.to_string.m"
                  }
#line 379 "string.to_string.m"
              }
#line 378 "string.to_string.m"
          }
#line 384 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 381 "string.to_string.m"
          {
#line 381 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
#line 381 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 82 "string.to_string.m"
            {
#line 82 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 82 "string.to_string.m"
            }
#line 382 "string.to_string.m"
            {
#line 382 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
#line 383 "string.to_string.m"
            /* direct tailcall eliminated */
#line 383 "string.to_string.m"
            {
#line 383 "string.to_string.m"
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
#line 383 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 383 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
#line 383 "string.to_string.m"
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
#line 383 "string.to_string.m"
            }
#line 383 "string.to_string.m"
            continue;
#line 381 "string.to_string.m"
          }
#line 384 "string.to_string.m"
        else
#line 389 "string.to_string.m"
          {
#line 385 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
#line 385 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 386 "string.to_string.m"
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 389 "string.to_string.m"
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
#line 389 "string.to_string.m"
            else
#line 390 "string.to_string.m"
              {
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeInfo_29_29;
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
#line 390 "string.to_string.m"
                MR_Box mercury__string__to_string__V_26_26;
#line 390 "string.to_string.m"
                MR_Integer mercury__string__to_string__Priority_42;
#line 390 "string.to_string.m"
                MR_Integer mercury__string__to_string__V_43_43;
#line 3442 "string.to_string.c"
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 3444 "string.to_string.c"
                MR_Box mercury__string__to_string__conv1_V_43_43;

#line 82 "string.to_string.m"
                {
#line 82 "string.to_string.m"
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
#line 82 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 82 "string.to_string.m"
                }
#line 17 "univ.opt"
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 17 "univ.opt"
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 3461 "string.to_string.c"
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 3463 "string.to_string.c"
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3465 "string.to_string.c"
                {
#line 3467 "string.to_string.c"
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
#line 3470 "string.to_string.c"
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
#line 95 "string.to_string.m"
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
#line 96 "string.to_string.m"
                {
#line 96 "string.to_string.m"
                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
#line 96 "string.to_string.m"
                  return;
                }
#line 390 "string.to_string.m"
              }
#line 389 "string.to_string.m"
          }
#line 375 "string.to_string.m"
      }
#line 375 "string.to_string.m"
      break;
#line 375 "string.to_string.m"
    }
#line 371 "string.to_string.m"
}

#line 370 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
#line 370 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 370 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 370 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 370 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
#line 370 "string.to_string.m"
{
#line 375 "string.to_string.m"
  while (MR_TRUE)
#line 375 "string.to_string.m"
    {
#line 375 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 375 "string.to_string.m"
      {
#line 375 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;
#line 375 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 375 "string.to_string.m"
        MR_String mercury__string__to_string__Functor_10;
#line 375 "string.to_string.m"
        MR_Word mercury__string__to_string__Args_12;
#line 375 "string.to_string.m"
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 376 "string.to_string.m"
        MR_Integer mercury__string__to_string___Arity_11;
#line 384 "string.to_string.m"
        MR_Word mercury__string__to_string__ListHead_13;
#line 384 "string.to_string.m"
        MR_Word mercury__string__to_string__ListTail_14;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__V_18_18;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__V_19_19;

#line 376 "string.to_string.m"
        {
#line 376 "string.to_string.m"
          mercury__deconstruct__deconstruct_5_p_1(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
#line 378 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
#line 378 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 378 "string.to_string.m"
          {
#line 379 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 379 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 379 "string.to_string.m"
              {
#line 379 "string.to_string.m"
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 379 "string.to_string.m"
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 379 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 379 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 379 "string.to_string.m"
                  {
#line 379 "string.to_string.m"
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
#line 379 "string.to_string.m"
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
#line 379 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "string.to_string.m"
                  }
#line 379 "string.to_string.m"
              }
#line 378 "string.to_string.m"
          }
#line 384 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 381 "string.to_string.m"
          {
#line 381 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
#line 381 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 82 "string.to_string.m"
            {
#line 82 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 82 "string.to_string.m"
            }
#line 382 "string.to_string.m"
            {
#line 382 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
#line 383 "string.to_string.m"
            /* direct tailcall eliminated */
#line 383 "string.to_string.m"
            {
#line 383 "string.to_string.m"
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
#line 383 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 383 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
#line 383 "string.to_string.m"
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
#line 383 "string.to_string.m"
            }
#line 383 "string.to_string.m"
            continue;
#line 381 "string.to_string.m"
          }
#line 384 "string.to_string.m"
        else
#line 389 "string.to_string.m"
          {
#line 385 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
#line 385 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 386 "string.to_string.m"
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 389 "string.to_string.m"
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
#line 389 "string.to_string.m"
            else
#line 390 "string.to_string.m"
              {
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeInfo_29_29;
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
#line 390 "string.to_string.m"
                MR_Box mercury__string__to_string__V_26_26;
#line 390 "string.to_string.m"
                MR_Integer mercury__string__to_string__Priority_42;
#line 390 "string.to_string.m"
                MR_Integer mercury__string__to_string__V_43_43;
#line 3648 "string.to_string.c"
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 3650 "string.to_string.c"
                MR_Box mercury__string__to_string__conv1_V_43_43;

#line 82 "string.to_string.m"
                {
#line 82 "string.to_string.m"
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
#line 82 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 82 "string.to_string.m"
                }
#line 17 "univ.opt"
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 17 "univ.opt"
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 3667 "string.to_string.c"
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 3669 "string.to_string.c"
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3671 "string.to_string.c"
                {
#line 3673 "string.to_string.c"
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
#line 3676 "string.to_string.c"
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
#line 95 "string.to_string.m"
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
#line 96 "string.to_string.m"
                {
#line 96 "string.to_string.m"
                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
#line 96 "string.to_string.m"
                  return;
                }
#line 390 "string.to_string.m"
              }
#line 389 "string.to_string.m"
          }
#line 375 "string.to_string.m"
      }
#line 375 "string.to_string.m"
      break;
#line 375 "string.to_string.m"
    }
#line 370 "string.to_string.m"
}

#line 369 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
#line 369 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 369 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 369 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 369 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
#line 369 "string.to_string.m"
{
#line 375 "string.to_string.m"
  while (MR_TRUE)
#line 375 "string.to_string.m"
    {
#line 375 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 375 "string.to_string.m"
      {
#line 375 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;
#line 375 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 375 "string.to_string.m"
        MR_String mercury__string__to_string__Functor_10;
#line 375 "string.to_string.m"
        MR_Word mercury__string__to_string__Args_12;
#line 375 "string.to_string.m"
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 376 "string.to_string.m"
        MR_Integer mercury__string__to_string___Arity_11;
#line 384 "string.to_string.m"
        MR_Word mercury__string__to_string__ListHead_13;
#line 384 "string.to_string.m"
        MR_Word mercury__string__to_string__ListTail_14;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__V_18_18;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__V_19_19;

#line 376 "string.to_string.m"
        {
#line 376 "string.to_string.m"
          mercury__deconstruct__deconstruct_5_p_0(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
#line 378 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
#line 378 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 378 "string.to_string.m"
          {
#line 379 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 379 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 379 "string.to_string.m"
              {
#line 379 "string.to_string.m"
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 379 "string.to_string.m"
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 379 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 379 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 379 "string.to_string.m"
                  {
#line 379 "string.to_string.m"
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
#line 379 "string.to_string.m"
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
#line 379 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "string.to_string.m"
                  }
#line 379 "string.to_string.m"
              }
#line 378 "string.to_string.m"
          }
#line 384 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 381 "string.to_string.m"
          {
#line 381 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
#line 381 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 82 "string.to_string.m"
            {
#line 82 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
#line 82 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 82 "string.to_string.m"
            }
#line 382 "string.to_string.m"
            {
#line 382 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
#line 383 "string.to_string.m"
            /* direct tailcall eliminated */
#line 383 "string.to_string.m"
            {
#line 383 "string.to_string.m"
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
#line 383 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 383 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
#line 383 "string.to_string.m"
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
#line 383 "string.to_string.m"
            }
#line 383 "string.to_string.m"
            continue;
#line 381 "string.to_string.m"
          }
#line 384 "string.to_string.m"
        else
#line 389 "string.to_string.m"
          {
#line 385 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
#line 385 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 386 "string.to_string.m"
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 389 "string.to_string.m"
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
#line 389 "string.to_string.m"
            else
#line 390 "string.to_string.m"
              {
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeInfo_29_29;
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
#line 390 "string.to_string.m"
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
#line 390 "string.to_string.m"
                MR_Box mercury__string__to_string__V_26_26;
#line 390 "string.to_string.m"
                MR_Integer mercury__string__to_string__Priority_42;
#line 390 "string.to_string.m"
                MR_Integer mercury__string__to_string__V_43_43;
#line 3854 "string.to_string.c"
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 3856 "string.to_string.c"
                MR_Box mercury__string__to_string__conv1_V_43_43;

#line 82 "string.to_string.m"
                {
#line 82 "string.to_string.m"
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
#line 82 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 82 "string.to_string.m"
                }
#line 17 "univ.opt"
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 17 "univ.opt"
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 3873 "string.to_string.c"
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 3875 "string.to_string.c"
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3877 "string.to_string.c"
                {
#line 3879 "string.to_string.c"
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
#line 3882 "string.to_string.c"
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
#line 95 "string.to_string.m"
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
#line 96 "string.to_string.m"
                {
#line 96 "string.to_string.m"
                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
#line 96 "string.to_string.m"
                  return;
                }
#line 390 "string.to_string.m"
              }
#line 389 "string.to_string.m"
          }
#line 375 "string.to_string.m"
      }
#line 375 "string.to_string.m"
      break;
#line 375 "string.to_string.m"
    }
#line 369 "string.to_string.m"
}

#line 361 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__adjust_priority_3_p_0(
#line 361 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_1,
#line 361 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__2_2,
#line 361 "string.to_string.m"
  MR_Integer * mercury__string__to_string__HeadVar__3_3)
#line 361 "string.to_string.m"
{
#line 364 "string.to_string.m"
  {
#line 364 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 364 "string.to_string.m"
#line 364 "string.to_string.m"
    switch (mercury__string__to_string__HeadVar__2_2) {
#line 364 "string.to_string.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 364 "string.to_string.m"
      case (MR_Integer) 0:
#line 365 "string.to_string.m"
        {
#line 365 "string.to_string.m"
          *mercury__string__to_string__HeadVar__3_3 = (mercury__string__to_string__Priority_1 - (MR_Integer) 1);
#line 365 "string.to_string.m"
        }
#line 364 "string.to_string.m"
        break;
#line 364 "string.to_string.m"
      case (MR_Integer) 1:
#line 364 "string.to_string.m"
        *mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__Priority_1;
#line 364 "string.to_string.m"
        break;
#line 364 "string.to_string.m"
    }
#line 364 "string.to_string.m"
  }
#line 361 "string.to_string.m"
}

#line 351 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
#line 351 "string.to_string.m"
  MR_String mercury__string__to_string__String_6,
#line 351 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_7,
#line 351 "string.to_string.m"
  MR_Integer mercury__string__to_string__OpPriority_8,
#line 351 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_10,
#line 351 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_11)
#line 351 "string.to_string.m"
{
#line 357 "string.to_string.m"
  {
#line 357 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__OpPriority_8 > mercury__string__to_string__Priority_7);

#line 357 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 82 "string.to_string.m"
      {
#line 82 "string.to_string.m"
        MR_Word base;
#line 82 "string.to_string.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
        *mercury__string__to_string__STATE_VARIABLE_Rs_11 = base;
#line 82 "string.to_string.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__String_6));
#line 82 "string.to_string.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_10));
#line 82 "string.to_string.m"
      }
#line 357 "string.to_string.m"
    else
#line 357 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_11 = mercury__string__to_string__STATE_VARIABLE_Rs_0_10;
#line 357 "string.to_string.m"
  }
#line 351 "string.to_string.m"
}

#line 322 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
#line 322 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 322 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 322 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 322 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 322 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 322 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
#line 322 "string.to_string.m"
{
#line 325 "string.to_string.m"
  {
#line 325 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 327 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
#line 327 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_18_18;
#line 4022 "string.to_string.c"
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
#line 4024 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
#line 4026 "string.to_string.c"
    MR_Box mercury__string__to_string__conv2_V_18_18;

#line 327 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 327 "string.to_string.m"
      {
#line 4033 "string.to_string.c"
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4035 "string.to_string.c"
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4037 "string.to_string.c"
        {
#line 4039 "string.to_string.c"
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
#line 327 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 327 "string.to_string.m"
          {
#line 4046 "string.to_string.c"
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4048 "string.to_string.c"
            {
#line 4050 "string.to_string.c"
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
#line 4053 "string.to_string.c"
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
#line 329 "string.to_string.m"
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
#line 327 "string.to_string.m"
          }
#line 327 "string.to_string.m"
      }
#line 334 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 331 "string.to_string.m"
      {
#line 331 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
#line 331 "string.to_string.m"
        MR_String mercury__string__to_string__V_21_21;
#line 331 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 82 "string.to_string.m"
        }
#line 72 "term_io.opt"
        {
#line 72 "term_io.opt"
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
#line 82 "string.to_string.m"
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
#line 82 "string.to_string.m"
        }
#line 331 "string.to_string.m"
      }
#line 334 "string.to_string.m"
    else
#line 335 "string.to_string.m"
      {
#line 335 "string.to_string.m"
        MR_String mercury__string__to_string__V_25_25;

#line 336 "string.to_string.m"
        {
#line 336 "string.to_string.m"
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 82 "string.to_string.m"
        }
#line 335 "string.to_string.m"
      }
#line 347 "string.to_string.m"
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 347 "string.to_string.m"
    else
#line 342 "string.to_string.m"
      {
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
#line 82 "string.to_string.m"
        }
#line 344 "string.to_string.m"
        {
#line 344 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
#line 345 "string.to_string.m"
        {
#line 345 "string.to_string.m"
          mercury__string__to_string__term_args_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          MR_Word base;
#line 82 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
#line 82 "string.to_string.m"
        }
#line 342 "string.to_string.m"
      }
#line 325 "string.to_string.m"
  }
#line 322 "string.to_string.m"
}

#line 320 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
#line 320 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 320 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 320 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 320 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 320 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 320 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
#line 320 "string.to_string.m"
{
#line 325 "string.to_string.m"
  {
#line 325 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 327 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
#line 327 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_18_18;
#line 4220 "string.to_string.c"
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
#line 4222 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
#line 4224 "string.to_string.c"
    MR_Box mercury__string__to_string__conv2_V_18_18;

#line 327 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 327 "string.to_string.m"
      {
#line 4231 "string.to_string.c"
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4233 "string.to_string.c"
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4235 "string.to_string.c"
        {
#line 4237 "string.to_string.c"
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
#line 327 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 327 "string.to_string.m"
          {
#line 4244 "string.to_string.c"
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4246 "string.to_string.c"
            {
#line 4248 "string.to_string.c"
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
#line 4251 "string.to_string.c"
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
#line 329 "string.to_string.m"
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
#line 327 "string.to_string.m"
          }
#line 327 "string.to_string.m"
      }
#line 334 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 331 "string.to_string.m"
      {
#line 331 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
#line 331 "string.to_string.m"
        MR_String mercury__string__to_string__V_21_21;
#line 331 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 82 "string.to_string.m"
        }
#line 72 "term_io.opt"
        {
#line 72 "term_io.opt"
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
#line 82 "string.to_string.m"
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
#line 82 "string.to_string.m"
        }
#line 331 "string.to_string.m"
      }
#line 334 "string.to_string.m"
    else
#line 335 "string.to_string.m"
      {
#line 335 "string.to_string.m"
        MR_String mercury__string__to_string__V_25_25;

#line 336 "string.to_string.m"
        {
#line 336 "string.to_string.m"
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 82 "string.to_string.m"
        }
#line 335 "string.to_string.m"
      }
#line 347 "string.to_string.m"
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 347 "string.to_string.m"
    else
#line 342 "string.to_string.m"
      {
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
#line 82 "string.to_string.m"
        }
#line 344 "string.to_string.m"
        {
#line 344 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
#line 345 "string.to_string.m"
        {
#line 345 "string.to_string.m"
          mercury__string__to_string__term_args_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          MR_Word base;
#line 82 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
#line 82 "string.to_string.m"
        }
#line 342 "string.to_string.m"
      }
#line 325 "string.to_string.m"
  }
#line 320 "string.to_string.m"
}

#line 318 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
#line 318 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 318 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 318 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 318 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 318 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 318 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
#line 318 "string.to_string.m"
{
#line 325 "string.to_string.m"
  {
#line 325 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 327 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
#line 327 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_18_18;
#line 4418 "string.to_string.c"
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
#line 4420 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
#line 4422 "string.to_string.c"
    MR_Box mercury__string__to_string__conv2_V_18_18;

#line 327 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 327 "string.to_string.m"
      {
#line 4429 "string.to_string.c"
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4431 "string.to_string.c"
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4433 "string.to_string.c"
        {
#line 4435 "string.to_string.c"
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
#line 327 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 327 "string.to_string.m"
          {
#line 4442 "string.to_string.c"
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4444 "string.to_string.c"
            {
#line 4446 "string.to_string.c"
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
#line 4449 "string.to_string.c"
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
#line 329 "string.to_string.m"
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
#line 327 "string.to_string.m"
          }
#line 327 "string.to_string.m"
      }
#line 334 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 331 "string.to_string.m"
      {
#line 331 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
#line 331 "string.to_string.m"
        MR_String mercury__string__to_string__V_21_21;
#line 331 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 82 "string.to_string.m"
        }
#line 72 "term_io.opt"
        {
#line 72 "term_io.opt"
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
#line 82 "string.to_string.m"
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
#line 82 "string.to_string.m"
        }
#line 331 "string.to_string.m"
      }
#line 334 "string.to_string.m"
    else
#line 335 "string.to_string.m"
      {
#line 335 "string.to_string.m"
        MR_String mercury__string__to_string__V_25_25;

#line 336 "string.to_string.m"
        {
#line 336 "string.to_string.m"
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 82 "string.to_string.m"
        }
#line 335 "string.to_string.m"
      }
#line 347 "string.to_string.m"
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 347 "string.to_string.m"
    else
#line 342 "string.to_string.m"
      {
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
#line 82 "string.to_string.m"
        }
#line 344 "string.to_string.m"
        {
#line 344 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
#line 345 "string.to_string.m"
        {
#line 345 "string.to_string.m"
          mercury__string__to_string__term_args_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          MR_Word base;
#line 82 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
#line 82 "string.to_string.m"
        }
#line 342 "string.to_string.m"
      }
#line 325 "string.to_string.m"
  }
#line 318 "string.to_string.m"
}

#line 316 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
#line 316 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 316 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 316 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 316 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 316 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 316 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
#line 316 "string.to_string.m"
{
#line 325 "string.to_string.m"
  {
#line 325 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 327 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
#line 327 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_18_18;
#line 4616 "string.to_string.c"
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
#line 4618 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
#line 4620 "string.to_string.c"
    MR_Box mercury__string__to_string__conv2_V_18_18;

#line 327 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 327 "string.to_string.m"
      {
#line 4627 "string.to_string.c"
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4629 "string.to_string.c"
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4631 "string.to_string.c"
        {
#line 4633 "string.to_string.c"
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
#line 327 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 327 "string.to_string.m"
          {
#line 4640 "string.to_string.c"
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4642 "string.to_string.c"
            {
#line 4644 "string.to_string.c"
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
#line 4647 "string.to_string.c"
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
#line 329 "string.to_string.m"
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
#line 327 "string.to_string.m"
          }
#line 327 "string.to_string.m"
      }
#line 334 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 331 "string.to_string.m"
      {
#line 331 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
#line 331 "string.to_string.m"
        MR_String mercury__string__to_string__V_21_21;
#line 331 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 82 "string.to_string.m"
        }
#line 72 "term_io.opt"
        {
#line 72 "term_io.opt"
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
#line 82 "string.to_string.m"
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
#line 82 "string.to_string.m"
        }
#line 331 "string.to_string.m"
      }
#line 334 "string.to_string.m"
    else
#line 335 "string.to_string.m"
      {
#line 335 "string.to_string.m"
        MR_String mercury__string__to_string__V_25_25;

#line 336 "string.to_string.m"
        {
#line 336 "string.to_string.m"
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 82 "string.to_string.m"
        }
#line 335 "string.to_string.m"
      }
#line 347 "string.to_string.m"
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 347 "string.to_string.m"
    else
#line 342 "string.to_string.m"
      {
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
#line 342 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
#line 82 "string.to_string.m"
        }
#line 344 "string.to_string.m"
        {
#line 344 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
#line 345 "string.to_string.m"
        {
#line 345 "string.to_string.m"
          mercury__string__to_string__term_args_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          MR_Word base;
#line 82 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
#line 82 "string.to_string.m"
        }
#line 342 "string.to_string.m"
      }
#line 325 "string.to_string.m"
  }
#line 316 "string.to_string.m"
}

#line 203 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
#line 203 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 203 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 203 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 203 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 203 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 203 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
#line 203 "string.to_string.m"
{
#line 206 "string.to_string.m"
  {
#line 206 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 206 "string.to_string.m"
    MR_String mercury__string__to_string__Functor_12;
#line 206 "string.to_string.m"
    MR_Word mercury__string__to_string__Args_14;
#line 207 "string.to_string.m"
    MR_Integer mercury__string__to_string___Arity_13;
#line 216 "string.to_string.m"
    MR_Word mercury__string__to_string__ListHead_15;
#line 216 "string.to_string.m"
    MR_Word mercury__string__to_string__ListTail_16;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__V_38_38;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__V_39_39;

#line 207 "string.to_string.m"
    {
#line 207 "string.to_string.m"
      mercury__deconstruct__deconstruct_5_p_3(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
#line 209 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
#line 209 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 209 "string.to_string.m"
      {
#line 210 "string.to_string.m"
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 210 "string.to_string.m"
          {
#line 210 "string.to_string.m"
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 210 "string.to_string.m"
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 210 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 210 "string.to_string.m"
              {
#line 210 "string.to_string.m"
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
#line 210 "string.to_string.m"
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
#line 210 "string.to_string.m"
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "string.to_string.m"
              }
#line 210 "string.to_string.m"
          }
#line 209 "string.to_string.m"
      }
#line 216 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 212 "string.to_string.m"
      {
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

#line 212 "string.to_string.m"
        {
#line 212 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
#line 213 "string.to_string.m"
        {
#line 213 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
#line 214 "string.to_string.m"
        {
#line 214 "string.to_string.m"
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
#line 215 "string.to_string.m"
        {
#line 215 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 215 "string.to_string.m"
          return;
        }
#line 212 "string.to_string.m"
      }
#line 216 "string.to_string.m"
    else
#line 221 "string.to_string.m"
      {
#line 217 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
#line 217 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 218 "string.to_string.m"
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 220 "string.to_string.m"
          {
#line 220 "string.to_string.m"
            {
#line 220 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 220 "string.to_string.m"
              return;
            }
#line 220 "string.to_string.m"
          }
#line 221 "string.to_string.m"
        else
#line 241 "string.to_string.m"
          {
#line 222 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
#line 241 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 227 "string.to_string.m"
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "string.to_string.m"
                {
#line 226 "string.to_string.m"
                  {
#line 226 "string.to_string.m"
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 226 "string.to_string.m"
                    return;
                  }
#line 225 "string.to_string.m"
                }
#line 227 "string.to_string.m"
              else
#line 227 "string.to_string.m"
                {
#line 227 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 227 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

#line 227 "string.to_string.m"
                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "string.to_string.m"
                    {
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
#line 228 "string.to_string.m"
                      MR_Box mercury__string__to_string__V_57_57;
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

#line 229 "string.to_string.m"
                      {
#line 229 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
#line 230 "string.to_string.m"
                      {
#line 230 "string.to_string.m"
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
#line 230 "string.to_string.m"
                      {
#line 230 "string.to_string.m"
                        mercury__string__to_string__value_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
#line 232 "string.to_string.m"
                      {
#line 232 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 232 "string.to_string.m"
                        return;
                      }
#line 228 "string.to_string.m"
                    }
#line 227 "string.to_string.m"
                  else
#line 234 "string.to_string.m"
                    {
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

#line 236 "string.to_string.m"
                      {
#line 236 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
#line 237 "string.to_string.m"
                      {
#line 237 "string.to_string.m"
                        mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
#line 238 "string.to_string.m"
                      {
#line 238 "string.to_string.m"
                        mercury__string__to_string__term_args_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
#line 239 "string.to_string.m"
                      {
#line 239 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 239 "string.to_string.m"
                        return;
                      }
#line 234 "string.to_string.m"
                    }
#line 227 "string.to_string.m"
                }
#line 241 "string.to_string.m"
            else
#line 268 "string.to_string.m"
              {
#line 268 "string.to_string.m"
                MR_Word mercury__string__to_string__Arg_22;
#line 242 "string.to_string.m"
                MR_Word mercury__string__to_string__V_63_63;

#line 242 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 242 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 242 "string.to_string.m"
                  {
#line 242 "string.to_string.m"
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 242 "string.to_string.m"
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 242 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 254 "string.to_string.m"
                  {
#line 254 "string.to_string.m"
                    MR_Integer mercury__string__to_string__OpPriority_23;
#line 254 "string.to_string.m"
                    MR_Word mercury__string__to_string__OpAssoc_24;
#line 245 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 245 "string.to_string.m"
                    {
#line 245 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
#line 254 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 247 "string.to_string.m"
                      {
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
#line 247 "string.to_string.m"
                        MR_Integer mercury__string__to_string__NewPriority_25;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
#line 247 "string.to_string.m"
                        MR_String mercury__string__to_string__V_66_66;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
#line 247 "string.to_string.m"
                        MR_Box mercury__string__to_string__V_70_70;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

#line 247 "string.to_string.m"
                        {
#line 247 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
#line 248 "string.to_string.m"
                        {
#line 248 "string.to_string.m"
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
#line 248 "string.to_string.m"
                        {
#line 248 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
#line 249 "string.to_string.m"
                        {
#line 249 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
#line 250 "string.to_string.m"
                        {
#line 250 "string.to_string.m"
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
#line 252 "string.to_string.m"
                        {
#line 252 "string.to_string.m"
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
#line 253 "string.to_string.m"
                        {
#line 253 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 253 "string.to_string.m"
                          return;
                        }
#line 247 "string.to_string.m"
                      }
#line 254 "string.to_string.m"
                    else
#line 264 "string.to_string.m"
                      {
#line 264 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_120;
#line 264 "string.to_string.m"
                        MR_Word mercury__string__to_string__OpAssoc_121;
#line 255 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 255 "string.to_string.m"
                        {
#line 255 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
#line 264 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 257 "string.to_string.m"
                          {
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
#line 257 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_76_76;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
#line 257 "string.to_string.m"
                            MR_String mercury__string__to_string__V_80_80;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
#line 257 "string.to_string.m"
                            MR_Integer mercury__string__to_string__NewPriority_119;

#line 257 "string.to_string.m"
                            {
#line 257 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
#line 258 "string.to_string.m"
                            {
#line 258 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
#line 260 "string.to_string.m"
                            {
#line 260 "string.to_string.m"
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
#line 259 "string.to_string.m"
                            {
#line 259 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
#line 261 "string.to_string.m"
                            {
#line 261 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
#line 263 "string.to_string.m"
                            {
#line 263 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 263 "string.to_string.m"
                              return;
                            }
#line 257 "string.to_string.m"
                          }
#line 264 "string.to_string.m"
                        else
#line 265 "string.to_string.m"
                          {
#line 265 "string.to_string.m"
                            mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 265 "string.to_string.m"
                            return;
                          }
#line 264 "string.to_string.m"
                      }
#line 254 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
                else
#line 309 "string.to_string.m"
                  {
#line 309 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg1_26;
#line 309 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg2_27;
#line 269 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_85_85;
#line 269 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_86_86;

#line 269 "string.to_string.m"
                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 269 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 269 "string.to_string.m"
                      {
#line 269 "string.to_string.m"
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 269 "string.to_string.m"
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 269 "string.to_string.m"
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 269 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 269 "string.to_string.m"
                          {
#line 269 "string.to_string.m"
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
#line 269 "string.to_string.m"
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
#line 269 "string.to_string.m"
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "string.to_string.m"
                          }
#line 269 "string.to_string.m"
                      }
#line 309 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 290 "string.to_string.m"
                      {
#line 290 "string.to_string.m"
                        MR_Word mercury__string__to_string__LeftAssoc_28;
#line 290 "string.to_string.m"
                        MR_Word mercury__string__to_string__RightAssoc_29;
#line 290 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_124;
#line 272 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 272 "string.to_string.m"
                        {
#line 272 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
#line 290 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 275 "string.to_string.m"
                          {
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
#line 275 "string.to_string.m"
                            MR_Integer mercury__string__to_string__LeftPriority_30;
#line 275 "string.to_string.m"
                            MR_Integer mercury__string__to_string__RightPriority_31;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
#line 275 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_89_89;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
#line 275 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_99_99;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

#line 275 "string.to_string.m"
                            {
#line 275 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
#line 276 "string.to_string.m"
                            {
#line 276 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
#line 278 "string.to_string.m"
                            {
#line 278 "string.to_string.m"
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
#line 277 "string.to_string.m"
                            {
#line 277 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
#line 279 "string.to_string.m"
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
#line 281 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 280 "string.to_string.m"
                              {
#line 280 "string.to_string.m"
                                {
#line 280 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 280 "string.to_string.m"
                              }
#line 281 "string.to_string.m"
                            else
#line 282 "string.to_string.m"
                              {
#line 282 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
#line 282 "string.to_string.m"
                                MR_String mercury__string__to_string__V_95_95;
#line 282 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

#line 282 "string.to_string.m"
                                {
#line 282 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
#line 284 "string.to_string.m"
                                {
#line 284 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 282 "string.to_string.m"
                              }
#line 286 "string.to_string.m"
                            {
#line 286 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
#line 288 "string.to_string.m"
                            {
#line 288 "string.to_string.m"
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
#line 287 "string.to_string.m"
                            {
#line 287 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
#line 289 "string.to_string.m"
                            {
#line 289 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 289 "string.to_string.m"
                              return;
                            }
#line 275 "string.to_string.m"
                          }
#line 290 "string.to_string.m"
                        else
#line 305 "string.to_string.m"
                          {
#line 305 "string.to_string.m"
                            MR_Word mercury__string__to_string__FirstAssoc_32;
#line 305 "string.to_string.m"
                            MR_Word mercury__string__to_string__SecondAssoc_33;
#line 305 "string.to_string.m"
                            MR_Integer mercury__string__to_string__OpPriority_123;
#line 291 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 291 "string.to_string.m"
                            {
#line 291 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
#line 305 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 294 "string.to_string.m"
                              {
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
#line 294 "string.to_string.m"
                                MR_Integer mercury__string__to_string__FirstPriority_34;
#line 294 "string.to_string.m"
                                MR_Integer mercury__string__to_string__SecondPriority_35;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
#line 294 "string.to_string.m"
                                MR_String mercury__string__to_string__V_105_105;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
#line 294 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_109_109;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
#line 294 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_113_113;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

#line 294 "string.to_string.m"
                                {
#line 294 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
#line 295 "string.to_string.m"
                                {
#line 295 "string.to_string.m"
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 295 "string.to_string.m"
                                {
#line 295 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
#line 296 "string.to_string.m"
                                {
#line 296 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
#line 297 "string.to_string.m"
                                {
#line 297 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
#line 299 "string.to_string.m"
                                {
#line 299 "string.to_string.m"
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
#line 300 "string.to_string.m"
                                {
#line 300 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
#line 301 "string.to_string.m"
                                {
#line 301 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
#line 303 "string.to_string.m"
                                {
#line 303 "string.to_string.m"
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
#line 302 "string.to_string.m"
                                {
#line 302 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
#line 304 "string.to_string.m"
                                {
#line 304 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 304 "string.to_string.m"
                                  return;
                                }
#line 294 "string.to_string.m"
                              }
#line 305 "string.to_string.m"
                            else
#line 306 "string.to_string.m"
                              {
#line 306 "string.to_string.m"
                                mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 306 "string.to_string.m"
                                return;
                              }
#line 305 "string.to_string.m"
                          }
#line 290 "string.to_string.m"
                      }
#line 309 "string.to_string.m"
                    else
#line 310 "string.to_string.m"
                      {
#line 310 "string.to_string.m"
                        mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 310 "string.to_string.m"
                        return;
                      }
#line 309 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
              }
#line 241 "string.to_string.m"
          }
#line 221 "string.to_string.m"
      }
#line 206 "string.to_string.m"
  }
#line 203 "string.to_string.m"
}

#line 201 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
#line 201 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 201 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 201 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 201 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 201 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 201 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
#line 201 "string.to_string.m"
{
#line 206 "string.to_string.m"
  {
#line 206 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 206 "string.to_string.m"
    MR_String mercury__string__to_string__Functor_12;
#line 206 "string.to_string.m"
    MR_Word mercury__string__to_string__Args_14;
#line 207 "string.to_string.m"
    MR_Integer mercury__string__to_string___Arity_13;
#line 216 "string.to_string.m"
    MR_Word mercury__string__to_string__ListHead_15;
#line 216 "string.to_string.m"
    MR_Word mercury__string__to_string__ListTail_16;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__V_38_38;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__V_39_39;

#line 207 "string.to_string.m"
    {
#line 207 "string.to_string.m"
      mercury__deconstruct__deconstruct_5_p_2(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
#line 209 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
#line 209 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 209 "string.to_string.m"
      {
#line 210 "string.to_string.m"
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 210 "string.to_string.m"
          {
#line 210 "string.to_string.m"
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 210 "string.to_string.m"
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 210 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 210 "string.to_string.m"
              {
#line 210 "string.to_string.m"
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
#line 210 "string.to_string.m"
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
#line 210 "string.to_string.m"
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "string.to_string.m"
              }
#line 210 "string.to_string.m"
          }
#line 209 "string.to_string.m"
      }
#line 216 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 212 "string.to_string.m"
      {
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

#line 212 "string.to_string.m"
        {
#line 212 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
#line 213 "string.to_string.m"
        {
#line 213 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
#line 214 "string.to_string.m"
        {
#line 214 "string.to_string.m"
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
#line 215 "string.to_string.m"
        {
#line 215 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 215 "string.to_string.m"
          return;
        }
#line 212 "string.to_string.m"
      }
#line 216 "string.to_string.m"
    else
#line 221 "string.to_string.m"
      {
#line 217 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
#line 217 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 218 "string.to_string.m"
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 220 "string.to_string.m"
          {
#line 220 "string.to_string.m"
            {
#line 220 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 220 "string.to_string.m"
              return;
            }
#line 220 "string.to_string.m"
          }
#line 221 "string.to_string.m"
        else
#line 241 "string.to_string.m"
          {
#line 222 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
#line 241 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 227 "string.to_string.m"
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "string.to_string.m"
                {
#line 226 "string.to_string.m"
                  {
#line 226 "string.to_string.m"
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 226 "string.to_string.m"
                    return;
                  }
#line 225 "string.to_string.m"
                }
#line 227 "string.to_string.m"
              else
#line 227 "string.to_string.m"
                {
#line 227 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 227 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

#line 227 "string.to_string.m"
                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "string.to_string.m"
                    {
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
#line 228 "string.to_string.m"
                      MR_Box mercury__string__to_string__V_57_57;
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

#line 229 "string.to_string.m"
                      {
#line 229 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
#line 230 "string.to_string.m"
                      {
#line 230 "string.to_string.m"
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
#line 230 "string.to_string.m"
                      {
#line 230 "string.to_string.m"
                        mercury__string__to_string__value_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
#line 232 "string.to_string.m"
                      {
#line 232 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 232 "string.to_string.m"
                        return;
                      }
#line 228 "string.to_string.m"
                    }
#line 227 "string.to_string.m"
                  else
#line 234 "string.to_string.m"
                    {
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

#line 236 "string.to_string.m"
                      {
#line 236 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
#line 237 "string.to_string.m"
                      {
#line 237 "string.to_string.m"
                        mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
#line 238 "string.to_string.m"
                      {
#line 238 "string.to_string.m"
                        mercury__string__to_string__term_args_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
#line 239 "string.to_string.m"
                      {
#line 239 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 239 "string.to_string.m"
                        return;
                      }
#line 234 "string.to_string.m"
                    }
#line 227 "string.to_string.m"
                }
#line 241 "string.to_string.m"
            else
#line 268 "string.to_string.m"
              {
#line 268 "string.to_string.m"
                MR_Word mercury__string__to_string__Arg_22;
#line 242 "string.to_string.m"
                MR_Word mercury__string__to_string__V_63_63;

#line 242 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 242 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 242 "string.to_string.m"
                  {
#line 242 "string.to_string.m"
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 242 "string.to_string.m"
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 242 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 254 "string.to_string.m"
                  {
#line 254 "string.to_string.m"
                    MR_Integer mercury__string__to_string__OpPriority_23;
#line 254 "string.to_string.m"
                    MR_Word mercury__string__to_string__OpAssoc_24;
#line 245 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 245 "string.to_string.m"
                    {
#line 245 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
#line 254 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 247 "string.to_string.m"
                      {
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
#line 247 "string.to_string.m"
                        MR_Integer mercury__string__to_string__NewPriority_25;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
#line 247 "string.to_string.m"
                        MR_String mercury__string__to_string__V_66_66;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
#line 247 "string.to_string.m"
                        MR_Box mercury__string__to_string__V_70_70;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

#line 247 "string.to_string.m"
                        {
#line 247 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
#line 248 "string.to_string.m"
                        {
#line 248 "string.to_string.m"
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
#line 248 "string.to_string.m"
                        {
#line 248 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
#line 249 "string.to_string.m"
                        {
#line 249 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
#line 250 "string.to_string.m"
                        {
#line 250 "string.to_string.m"
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
#line 252 "string.to_string.m"
                        {
#line 252 "string.to_string.m"
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
#line 253 "string.to_string.m"
                        {
#line 253 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 253 "string.to_string.m"
                          return;
                        }
#line 247 "string.to_string.m"
                      }
#line 254 "string.to_string.m"
                    else
#line 264 "string.to_string.m"
                      {
#line 264 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_120;
#line 264 "string.to_string.m"
                        MR_Word mercury__string__to_string__OpAssoc_121;
#line 255 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 255 "string.to_string.m"
                        {
#line 255 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
#line 264 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 257 "string.to_string.m"
                          {
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
#line 257 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_76_76;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
#line 257 "string.to_string.m"
                            MR_String mercury__string__to_string__V_80_80;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
#line 257 "string.to_string.m"
                            MR_Integer mercury__string__to_string__NewPriority_119;

#line 257 "string.to_string.m"
                            {
#line 257 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
#line 258 "string.to_string.m"
                            {
#line 258 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
#line 260 "string.to_string.m"
                            {
#line 260 "string.to_string.m"
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
#line 259 "string.to_string.m"
                            {
#line 259 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
#line 261 "string.to_string.m"
                            {
#line 261 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
#line 263 "string.to_string.m"
                            {
#line 263 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 263 "string.to_string.m"
                              return;
                            }
#line 257 "string.to_string.m"
                          }
#line 264 "string.to_string.m"
                        else
#line 265 "string.to_string.m"
                          {
#line 265 "string.to_string.m"
                            mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 265 "string.to_string.m"
                            return;
                          }
#line 264 "string.to_string.m"
                      }
#line 254 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
                else
#line 309 "string.to_string.m"
                  {
#line 309 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg1_26;
#line 309 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg2_27;
#line 269 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_85_85;
#line 269 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_86_86;

#line 269 "string.to_string.m"
                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 269 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 269 "string.to_string.m"
                      {
#line 269 "string.to_string.m"
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 269 "string.to_string.m"
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 269 "string.to_string.m"
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 269 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 269 "string.to_string.m"
                          {
#line 269 "string.to_string.m"
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
#line 269 "string.to_string.m"
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
#line 269 "string.to_string.m"
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "string.to_string.m"
                          }
#line 269 "string.to_string.m"
                      }
#line 309 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 290 "string.to_string.m"
                      {
#line 290 "string.to_string.m"
                        MR_Word mercury__string__to_string__LeftAssoc_28;
#line 290 "string.to_string.m"
                        MR_Word mercury__string__to_string__RightAssoc_29;
#line 290 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_124;
#line 272 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 272 "string.to_string.m"
                        {
#line 272 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
#line 290 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 275 "string.to_string.m"
                          {
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
#line 275 "string.to_string.m"
                            MR_Integer mercury__string__to_string__LeftPriority_30;
#line 275 "string.to_string.m"
                            MR_Integer mercury__string__to_string__RightPriority_31;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
#line 275 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_89_89;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
#line 275 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_99_99;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

#line 275 "string.to_string.m"
                            {
#line 275 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
#line 276 "string.to_string.m"
                            {
#line 276 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
#line 278 "string.to_string.m"
                            {
#line 278 "string.to_string.m"
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
#line 277 "string.to_string.m"
                            {
#line 277 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
#line 279 "string.to_string.m"
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
#line 281 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 280 "string.to_string.m"
                              {
#line 280 "string.to_string.m"
                                {
#line 280 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 280 "string.to_string.m"
                              }
#line 281 "string.to_string.m"
                            else
#line 282 "string.to_string.m"
                              {
#line 282 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
#line 282 "string.to_string.m"
                                MR_String mercury__string__to_string__V_95_95;
#line 282 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

#line 282 "string.to_string.m"
                                {
#line 282 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
#line 284 "string.to_string.m"
                                {
#line 284 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 282 "string.to_string.m"
                              }
#line 286 "string.to_string.m"
                            {
#line 286 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
#line 288 "string.to_string.m"
                            {
#line 288 "string.to_string.m"
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
#line 287 "string.to_string.m"
                            {
#line 287 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
#line 289 "string.to_string.m"
                            {
#line 289 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 289 "string.to_string.m"
                              return;
                            }
#line 275 "string.to_string.m"
                          }
#line 290 "string.to_string.m"
                        else
#line 305 "string.to_string.m"
                          {
#line 305 "string.to_string.m"
                            MR_Word mercury__string__to_string__FirstAssoc_32;
#line 305 "string.to_string.m"
                            MR_Word mercury__string__to_string__SecondAssoc_33;
#line 305 "string.to_string.m"
                            MR_Integer mercury__string__to_string__OpPriority_123;
#line 291 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 291 "string.to_string.m"
                            {
#line 291 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
#line 305 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 294 "string.to_string.m"
                              {
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
#line 294 "string.to_string.m"
                                MR_Integer mercury__string__to_string__FirstPriority_34;
#line 294 "string.to_string.m"
                                MR_Integer mercury__string__to_string__SecondPriority_35;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
#line 294 "string.to_string.m"
                                MR_String mercury__string__to_string__V_105_105;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
#line 294 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_109_109;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
#line 294 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_113_113;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

#line 294 "string.to_string.m"
                                {
#line 294 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
#line 295 "string.to_string.m"
                                {
#line 295 "string.to_string.m"
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 295 "string.to_string.m"
                                {
#line 295 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
#line 296 "string.to_string.m"
                                {
#line 296 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
#line 297 "string.to_string.m"
                                {
#line 297 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
#line 299 "string.to_string.m"
                                {
#line 299 "string.to_string.m"
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
#line 300 "string.to_string.m"
                                {
#line 300 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
#line 301 "string.to_string.m"
                                {
#line 301 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
#line 303 "string.to_string.m"
                                {
#line 303 "string.to_string.m"
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
#line 302 "string.to_string.m"
                                {
#line 302 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
#line 304 "string.to_string.m"
                                {
#line 304 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 304 "string.to_string.m"
                                  return;
                                }
#line 294 "string.to_string.m"
                              }
#line 305 "string.to_string.m"
                            else
#line 306 "string.to_string.m"
                              {
#line 306 "string.to_string.m"
                                mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 306 "string.to_string.m"
                                return;
                              }
#line 305 "string.to_string.m"
                          }
#line 290 "string.to_string.m"
                      }
#line 309 "string.to_string.m"
                    else
#line 310 "string.to_string.m"
                      {
#line 310 "string.to_string.m"
                        mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 310 "string.to_string.m"
                        return;
                      }
#line 309 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
              }
#line 241 "string.to_string.m"
          }
#line 221 "string.to_string.m"
      }
#line 206 "string.to_string.m"
  }
#line 201 "string.to_string.m"
}

#line 199 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
#line 199 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 199 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 199 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 199 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 199 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 199 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
#line 199 "string.to_string.m"
{
#line 206 "string.to_string.m"
  {
#line 206 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 206 "string.to_string.m"
    MR_String mercury__string__to_string__Functor_12;
#line 206 "string.to_string.m"
    MR_Word mercury__string__to_string__Args_14;
#line 207 "string.to_string.m"
    MR_Integer mercury__string__to_string___Arity_13;
#line 216 "string.to_string.m"
    MR_Word mercury__string__to_string__ListHead_15;
#line 216 "string.to_string.m"
    MR_Word mercury__string__to_string__ListTail_16;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__V_38_38;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__V_39_39;

#line 207 "string.to_string.m"
    {
#line 207 "string.to_string.m"
      mercury__deconstruct__deconstruct_5_p_1(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
#line 209 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
#line 209 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 209 "string.to_string.m"
      {
#line 210 "string.to_string.m"
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 210 "string.to_string.m"
          {
#line 210 "string.to_string.m"
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 210 "string.to_string.m"
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 210 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 210 "string.to_string.m"
              {
#line 210 "string.to_string.m"
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
#line 210 "string.to_string.m"
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
#line 210 "string.to_string.m"
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "string.to_string.m"
              }
#line 210 "string.to_string.m"
          }
#line 209 "string.to_string.m"
      }
#line 216 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 212 "string.to_string.m"
      {
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

#line 212 "string.to_string.m"
        {
#line 212 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
#line 213 "string.to_string.m"
        {
#line 213 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
#line 214 "string.to_string.m"
        {
#line 214 "string.to_string.m"
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
#line 215 "string.to_string.m"
        {
#line 215 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 215 "string.to_string.m"
          return;
        }
#line 212 "string.to_string.m"
      }
#line 216 "string.to_string.m"
    else
#line 221 "string.to_string.m"
      {
#line 217 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
#line 217 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 218 "string.to_string.m"
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 220 "string.to_string.m"
          {
#line 220 "string.to_string.m"
            {
#line 220 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 220 "string.to_string.m"
              return;
            }
#line 220 "string.to_string.m"
          }
#line 221 "string.to_string.m"
        else
#line 241 "string.to_string.m"
          {
#line 222 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
#line 241 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 227 "string.to_string.m"
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "string.to_string.m"
                {
#line 226 "string.to_string.m"
                  {
#line 226 "string.to_string.m"
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 226 "string.to_string.m"
                    return;
                  }
#line 225 "string.to_string.m"
                }
#line 227 "string.to_string.m"
              else
#line 227 "string.to_string.m"
                {
#line 227 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 227 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

#line 227 "string.to_string.m"
                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "string.to_string.m"
                    {
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
#line 228 "string.to_string.m"
                      MR_Box mercury__string__to_string__V_57_57;
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

#line 229 "string.to_string.m"
                      {
#line 229 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
#line 230 "string.to_string.m"
                      {
#line 230 "string.to_string.m"
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
#line 230 "string.to_string.m"
                      {
#line 230 "string.to_string.m"
                        mercury__string__to_string__value_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
#line 232 "string.to_string.m"
                      {
#line 232 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 232 "string.to_string.m"
                        return;
                      }
#line 228 "string.to_string.m"
                    }
#line 227 "string.to_string.m"
                  else
#line 234 "string.to_string.m"
                    {
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

#line 236 "string.to_string.m"
                      {
#line 236 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
#line 237 "string.to_string.m"
                      {
#line 237 "string.to_string.m"
                        mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
#line 238 "string.to_string.m"
                      {
#line 238 "string.to_string.m"
                        mercury__string__to_string__term_args_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
#line 239 "string.to_string.m"
                      {
#line 239 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 239 "string.to_string.m"
                        return;
                      }
#line 234 "string.to_string.m"
                    }
#line 227 "string.to_string.m"
                }
#line 241 "string.to_string.m"
            else
#line 268 "string.to_string.m"
              {
#line 268 "string.to_string.m"
                MR_Word mercury__string__to_string__Arg_22;
#line 242 "string.to_string.m"
                MR_Word mercury__string__to_string__V_63_63;

#line 242 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 242 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 242 "string.to_string.m"
                  {
#line 242 "string.to_string.m"
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 242 "string.to_string.m"
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 242 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 254 "string.to_string.m"
                  {
#line 254 "string.to_string.m"
                    MR_Integer mercury__string__to_string__OpPriority_23;
#line 254 "string.to_string.m"
                    MR_Word mercury__string__to_string__OpAssoc_24;
#line 245 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 245 "string.to_string.m"
                    {
#line 245 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
#line 254 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 247 "string.to_string.m"
                      {
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
#line 247 "string.to_string.m"
                        MR_Integer mercury__string__to_string__NewPriority_25;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
#line 247 "string.to_string.m"
                        MR_String mercury__string__to_string__V_66_66;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
#line 247 "string.to_string.m"
                        MR_Box mercury__string__to_string__V_70_70;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

#line 247 "string.to_string.m"
                        {
#line 247 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
#line 248 "string.to_string.m"
                        {
#line 248 "string.to_string.m"
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
#line 248 "string.to_string.m"
                        {
#line 248 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
#line 249 "string.to_string.m"
                        {
#line 249 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
#line 250 "string.to_string.m"
                        {
#line 250 "string.to_string.m"
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
#line 252 "string.to_string.m"
                        {
#line 252 "string.to_string.m"
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
#line 253 "string.to_string.m"
                        {
#line 253 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 253 "string.to_string.m"
                          return;
                        }
#line 247 "string.to_string.m"
                      }
#line 254 "string.to_string.m"
                    else
#line 264 "string.to_string.m"
                      {
#line 264 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_120;
#line 264 "string.to_string.m"
                        MR_Word mercury__string__to_string__OpAssoc_121;
#line 255 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 255 "string.to_string.m"
                        {
#line 255 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
#line 264 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 257 "string.to_string.m"
                          {
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
#line 257 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_76_76;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
#line 257 "string.to_string.m"
                            MR_String mercury__string__to_string__V_80_80;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
#line 257 "string.to_string.m"
                            MR_Integer mercury__string__to_string__NewPriority_119;

#line 257 "string.to_string.m"
                            {
#line 257 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
#line 258 "string.to_string.m"
                            {
#line 258 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
#line 260 "string.to_string.m"
                            {
#line 260 "string.to_string.m"
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
#line 259 "string.to_string.m"
                            {
#line 259 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
#line 261 "string.to_string.m"
                            {
#line 261 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
#line 263 "string.to_string.m"
                            {
#line 263 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 263 "string.to_string.m"
                              return;
                            }
#line 257 "string.to_string.m"
                          }
#line 264 "string.to_string.m"
                        else
#line 265 "string.to_string.m"
                          {
#line 265 "string.to_string.m"
                            mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 265 "string.to_string.m"
                            return;
                          }
#line 264 "string.to_string.m"
                      }
#line 254 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
                else
#line 309 "string.to_string.m"
                  {
#line 309 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg1_26;
#line 309 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg2_27;
#line 269 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_85_85;
#line 269 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_86_86;

#line 269 "string.to_string.m"
                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 269 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 269 "string.to_string.m"
                      {
#line 269 "string.to_string.m"
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 269 "string.to_string.m"
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 269 "string.to_string.m"
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 269 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 269 "string.to_string.m"
                          {
#line 269 "string.to_string.m"
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
#line 269 "string.to_string.m"
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
#line 269 "string.to_string.m"
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "string.to_string.m"
                          }
#line 269 "string.to_string.m"
                      }
#line 309 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 290 "string.to_string.m"
                      {
#line 290 "string.to_string.m"
                        MR_Word mercury__string__to_string__LeftAssoc_28;
#line 290 "string.to_string.m"
                        MR_Word mercury__string__to_string__RightAssoc_29;
#line 290 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_124;
#line 272 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 272 "string.to_string.m"
                        {
#line 272 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
#line 290 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 275 "string.to_string.m"
                          {
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
#line 275 "string.to_string.m"
                            MR_Integer mercury__string__to_string__LeftPriority_30;
#line 275 "string.to_string.m"
                            MR_Integer mercury__string__to_string__RightPriority_31;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
#line 275 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_89_89;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
#line 275 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_99_99;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

#line 275 "string.to_string.m"
                            {
#line 275 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
#line 276 "string.to_string.m"
                            {
#line 276 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
#line 278 "string.to_string.m"
                            {
#line 278 "string.to_string.m"
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
#line 277 "string.to_string.m"
                            {
#line 277 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
#line 279 "string.to_string.m"
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
#line 281 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 280 "string.to_string.m"
                              {
#line 280 "string.to_string.m"
                                {
#line 280 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 280 "string.to_string.m"
                              }
#line 281 "string.to_string.m"
                            else
#line 282 "string.to_string.m"
                              {
#line 282 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
#line 282 "string.to_string.m"
                                MR_String mercury__string__to_string__V_95_95;
#line 282 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

#line 282 "string.to_string.m"
                                {
#line 282 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
#line 284 "string.to_string.m"
                                {
#line 284 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 282 "string.to_string.m"
                              }
#line 286 "string.to_string.m"
                            {
#line 286 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
#line 288 "string.to_string.m"
                            {
#line 288 "string.to_string.m"
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
#line 287 "string.to_string.m"
                            {
#line 287 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
#line 289 "string.to_string.m"
                            {
#line 289 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 289 "string.to_string.m"
                              return;
                            }
#line 275 "string.to_string.m"
                          }
#line 290 "string.to_string.m"
                        else
#line 305 "string.to_string.m"
                          {
#line 305 "string.to_string.m"
                            MR_Word mercury__string__to_string__FirstAssoc_32;
#line 305 "string.to_string.m"
                            MR_Word mercury__string__to_string__SecondAssoc_33;
#line 305 "string.to_string.m"
                            MR_Integer mercury__string__to_string__OpPriority_123;
#line 291 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 291 "string.to_string.m"
                            {
#line 291 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
#line 305 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 294 "string.to_string.m"
                              {
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
#line 294 "string.to_string.m"
                                MR_Integer mercury__string__to_string__FirstPriority_34;
#line 294 "string.to_string.m"
                                MR_Integer mercury__string__to_string__SecondPriority_35;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
#line 294 "string.to_string.m"
                                MR_String mercury__string__to_string__V_105_105;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
#line 294 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_109_109;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
#line 294 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_113_113;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

#line 294 "string.to_string.m"
                                {
#line 294 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
#line 295 "string.to_string.m"
                                {
#line 295 "string.to_string.m"
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 295 "string.to_string.m"
                                {
#line 295 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
#line 296 "string.to_string.m"
                                {
#line 296 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
#line 297 "string.to_string.m"
                                {
#line 297 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
#line 299 "string.to_string.m"
                                {
#line 299 "string.to_string.m"
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
#line 300 "string.to_string.m"
                                {
#line 300 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
#line 301 "string.to_string.m"
                                {
#line 301 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
#line 303 "string.to_string.m"
                                {
#line 303 "string.to_string.m"
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
#line 302 "string.to_string.m"
                                {
#line 302 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
#line 304 "string.to_string.m"
                                {
#line 304 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 304 "string.to_string.m"
                                  return;
                                }
#line 294 "string.to_string.m"
                              }
#line 305 "string.to_string.m"
                            else
#line 306 "string.to_string.m"
                              {
#line 306 "string.to_string.m"
                                mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 306 "string.to_string.m"
                                return;
                              }
#line 305 "string.to_string.m"
                          }
#line 290 "string.to_string.m"
                      }
#line 309 "string.to_string.m"
                    else
#line 310 "string.to_string.m"
                      {
#line 310 "string.to_string.m"
                        mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 310 "string.to_string.m"
                        return;
                      }
#line 309 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
              }
#line 241 "string.to_string.m"
          }
#line 221 "string.to_string.m"
      }
#line 206 "string.to_string.m"
  }
#line 199 "string.to_string.m"
}

#line 197 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
#line 197 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 197 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 197 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 197 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 197 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 197 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
#line 197 "string.to_string.m"
{
#line 206 "string.to_string.m"
  {
#line 206 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 206 "string.to_string.m"
    MR_String mercury__string__to_string__Functor_12;
#line 206 "string.to_string.m"
    MR_Word mercury__string__to_string__Args_14;
#line 207 "string.to_string.m"
    MR_Integer mercury__string__to_string___Arity_13;
#line 216 "string.to_string.m"
    MR_Word mercury__string__to_string__ListHead_15;
#line 216 "string.to_string.m"
    MR_Word mercury__string__to_string__ListTail_16;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__V_38_38;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__V_39_39;

#line 207 "string.to_string.m"
    {
#line 207 "string.to_string.m"
      mercury__deconstruct__deconstruct_5_p_0(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
#line 209 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
#line 209 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 209 "string.to_string.m"
      {
#line 210 "string.to_string.m"
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 210 "string.to_string.m"
          {
#line 210 "string.to_string.m"
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 210 "string.to_string.m"
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 210 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 210 "string.to_string.m"
              {
#line 210 "string.to_string.m"
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
#line 210 "string.to_string.m"
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
#line 210 "string.to_string.m"
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "string.to_string.m"
              }
#line 210 "string.to_string.m"
          }
#line 209 "string.to_string.m"
      }
#line 216 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 212 "string.to_string.m"
      {
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
#line 212 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

#line 212 "string.to_string.m"
        {
#line 212 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
#line 213 "string.to_string.m"
        {
#line 213 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
#line 214 "string.to_string.m"
        {
#line 214 "string.to_string.m"
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
#line 215 "string.to_string.m"
        {
#line 215 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 215 "string.to_string.m"
          return;
        }
#line 212 "string.to_string.m"
      }
#line 216 "string.to_string.m"
    else
#line 221 "string.to_string.m"
      {
#line 217 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
#line 217 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 218 "string.to_string.m"
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 220 "string.to_string.m"
          {
#line 220 "string.to_string.m"
            {
#line 220 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 220 "string.to_string.m"
              return;
            }
#line 220 "string.to_string.m"
          }
#line 221 "string.to_string.m"
        else
#line 241 "string.to_string.m"
          {
#line 222 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
#line 241 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 227 "string.to_string.m"
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "string.to_string.m"
                {
#line 226 "string.to_string.m"
                  {
#line 226 "string.to_string.m"
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 226 "string.to_string.m"
                    return;
                  }
#line 225 "string.to_string.m"
                }
#line 227 "string.to_string.m"
              else
#line 227 "string.to_string.m"
                {
#line 227 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 227 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

#line 227 "string.to_string.m"
                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "string.to_string.m"
                    {
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
#line 228 "string.to_string.m"
                      MR_Box mercury__string__to_string__V_57_57;
#line 228 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

#line 229 "string.to_string.m"
                      {
#line 229 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
#line 230 "string.to_string.m"
                      {
#line 230 "string.to_string.m"
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
#line 230 "string.to_string.m"
                      {
#line 230 "string.to_string.m"
                        mercury__string__to_string__value_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
#line 232 "string.to_string.m"
                      {
#line 232 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 232 "string.to_string.m"
                        return;
                      }
#line 228 "string.to_string.m"
                    }
#line 227 "string.to_string.m"
                  else
#line 234 "string.to_string.m"
                    {
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
#line 234 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

#line 236 "string.to_string.m"
                      {
#line 236 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
#line 237 "string.to_string.m"
                      {
#line 237 "string.to_string.m"
                        mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
#line 238 "string.to_string.m"
                      {
#line 238 "string.to_string.m"
                        mercury__string__to_string__term_args_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
#line 239 "string.to_string.m"
                      {
#line 239 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 239 "string.to_string.m"
                        return;
                      }
#line 234 "string.to_string.m"
                    }
#line 227 "string.to_string.m"
                }
#line 241 "string.to_string.m"
            else
#line 268 "string.to_string.m"
              {
#line 268 "string.to_string.m"
                MR_Word mercury__string__to_string__Arg_22;
#line 242 "string.to_string.m"
                MR_Word mercury__string__to_string__V_63_63;

#line 242 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 242 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 242 "string.to_string.m"
                  {
#line 242 "string.to_string.m"
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 242 "string.to_string.m"
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 242 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 254 "string.to_string.m"
                  {
#line 254 "string.to_string.m"
                    MR_Integer mercury__string__to_string__OpPriority_23;
#line 254 "string.to_string.m"
                    MR_Word mercury__string__to_string__OpAssoc_24;
#line 245 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 245 "string.to_string.m"
                    {
#line 245 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
#line 254 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 247 "string.to_string.m"
                      {
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
#line 247 "string.to_string.m"
                        MR_Integer mercury__string__to_string__NewPriority_25;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
#line 247 "string.to_string.m"
                        MR_String mercury__string__to_string__V_66_66;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
#line 247 "string.to_string.m"
                        MR_Box mercury__string__to_string__V_70_70;
#line 247 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

#line 247 "string.to_string.m"
                        {
#line 247 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
#line 248 "string.to_string.m"
                        {
#line 248 "string.to_string.m"
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
#line 248 "string.to_string.m"
                        {
#line 248 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
#line 249 "string.to_string.m"
                        {
#line 249 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
#line 250 "string.to_string.m"
                        {
#line 250 "string.to_string.m"
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
#line 252 "string.to_string.m"
                        {
#line 252 "string.to_string.m"
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
#line 253 "string.to_string.m"
                        {
#line 253 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 253 "string.to_string.m"
                          return;
                        }
#line 247 "string.to_string.m"
                      }
#line 254 "string.to_string.m"
                    else
#line 264 "string.to_string.m"
                      {
#line 264 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_120;
#line 264 "string.to_string.m"
                        MR_Word mercury__string__to_string__OpAssoc_121;
#line 255 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 255 "string.to_string.m"
                        {
#line 255 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
#line 264 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 257 "string.to_string.m"
                          {
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
#line 257 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_76_76;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
#line 257 "string.to_string.m"
                            MR_String mercury__string__to_string__V_80_80;
#line 257 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
#line 257 "string.to_string.m"
                            MR_Integer mercury__string__to_string__NewPriority_119;

#line 257 "string.to_string.m"
                            {
#line 257 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
#line 258 "string.to_string.m"
                            {
#line 258 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
#line 260 "string.to_string.m"
                            {
#line 260 "string.to_string.m"
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
#line 259 "string.to_string.m"
                            {
#line 259 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
#line 261 "string.to_string.m"
                            {
#line 261 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
#line 263 "string.to_string.m"
                            {
#line 263 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 263 "string.to_string.m"
                              return;
                            }
#line 257 "string.to_string.m"
                          }
#line 264 "string.to_string.m"
                        else
#line 265 "string.to_string.m"
                          {
#line 265 "string.to_string.m"
                            mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 265 "string.to_string.m"
                            return;
                          }
#line 264 "string.to_string.m"
                      }
#line 254 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
                else
#line 309 "string.to_string.m"
                  {
#line 309 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg1_26;
#line 309 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg2_27;
#line 269 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_85_85;
#line 269 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_86_86;

#line 269 "string.to_string.m"
                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 269 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 269 "string.to_string.m"
                      {
#line 269 "string.to_string.m"
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 269 "string.to_string.m"
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 269 "string.to_string.m"
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 269 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 269 "string.to_string.m"
                          {
#line 269 "string.to_string.m"
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
#line 269 "string.to_string.m"
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
#line 269 "string.to_string.m"
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "string.to_string.m"
                          }
#line 269 "string.to_string.m"
                      }
#line 309 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 290 "string.to_string.m"
                      {
#line 290 "string.to_string.m"
                        MR_Word mercury__string__to_string__LeftAssoc_28;
#line 290 "string.to_string.m"
                        MR_Word mercury__string__to_string__RightAssoc_29;
#line 290 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_124;
#line 272 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 272 "string.to_string.m"
                        {
#line 272 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
#line 290 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 275 "string.to_string.m"
                          {
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
#line 275 "string.to_string.m"
                            MR_Integer mercury__string__to_string__LeftPriority_30;
#line 275 "string.to_string.m"
                            MR_Integer mercury__string__to_string__RightPriority_31;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
#line 275 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_89_89;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
#line 275 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_99_99;
#line 275 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

#line 275 "string.to_string.m"
                            {
#line 275 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
#line 276 "string.to_string.m"
                            {
#line 276 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
#line 278 "string.to_string.m"
                            {
#line 278 "string.to_string.m"
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
#line 277 "string.to_string.m"
                            {
#line 277 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
#line 279 "string.to_string.m"
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
#line 281 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 280 "string.to_string.m"
                              {
#line 280 "string.to_string.m"
                                {
#line 280 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 280 "string.to_string.m"
                              }
#line 281 "string.to_string.m"
                            else
#line 282 "string.to_string.m"
                              {
#line 282 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
#line 282 "string.to_string.m"
                                MR_String mercury__string__to_string__V_95_95;
#line 282 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

#line 282 "string.to_string.m"
                                {
#line 282 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
#line 284 "string.to_string.m"
                                {
#line 284 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 282 "string.to_string.m"
                              }
#line 286 "string.to_string.m"
                            {
#line 286 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
#line 288 "string.to_string.m"
                            {
#line 288 "string.to_string.m"
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
#line 287 "string.to_string.m"
                            {
#line 287 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
#line 289 "string.to_string.m"
                            {
#line 289 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 289 "string.to_string.m"
                              return;
                            }
#line 275 "string.to_string.m"
                          }
#line 290 "string.to_string.m"
                        else
#line 305 "string.to_string.m"
                          {
#line 305 "string.to_string.m"
                            MR_Word mercury__string__to_string__FirstAssoc_32;
#line 305 "string.to_string.m"
                            MR_Word mercury__string__to_string__SecondAssoc_33;
#line 305 "string.to_string.m"
                            MR_Integer mercury__string__to_string__OpPriority_123;
#line 291 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 291 "string.to_string.m"
                            {
#line 291 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
#line 305 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 294 "string.to_string.m"
                              {
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
#line 294 "string.to_string.m"
                                MR_Integer mercury__string__to_string__FirstPriority_34;
#line 294 "string.to_string.m"
                                MR_Integer mercury__string__to_string__SecondPriority_35;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
#line 294 "string.to_string.m"
                                MR_String mercury__string__to_string__V_105_105;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
#line 294 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_109_109;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
#line 294 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_113_113;
#line 294 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

#line 294 "string.to_string.m"
                                {
#line 294 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
#line 295 "string.to_string.m"
                                {
#line 295 "string.to_string.m"
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 295 "string.to_string.m"
                                {
#line 295 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
#line 296 "string.to_string.m"
                                {
#line 296 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
#line 297 "string.to_string.m"
                                {
#line 297 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
#line 299 "string.to_string.m"
                                {
#line 299 "string.to_string.m"
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
#line 300 "string.to_string.m"
                                {
#line 300 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
#line 301 "string.to_string.m"
                                {
#line 301 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
#line 303 "string.to_string.m"
                                {
#line 303 "string.to_string.m"
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
#line 302 "string.to_string.m"
                                {
#line 302 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
#line 304 "string.to_string.m"
                                {
#line 304 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 304 "string.to_string.m"
                                  return;
                                }
#line 294 "string.to_string.m"
                              }
#line 305 "string.to_string.m"
                            else
#line 306 "string.to_string.m"
                              {
#line 306 "string.to_string.m"
                                mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 306 "string.to_string.m"
                                return;
                              }
#line 305 "string.to_string.m"
                          }
#line 290 "string.to_string.m"
                      }
#line 309 "string.to_string.m"
                    else
#line 310 "string.to_string.m"
                      {
#line 310 "string.to_string.m"
                        mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 310 "string.to_string.m"
                        return;
                      }
#line 309 "string.to_string.m"
                  }
#line 268 "string.to_string.m"
              }
#line 241 "string.to_string.m"
          }
#line 221 "string.to_string.m"
      }
#line 206 "string.to_string.m"
  }
#line 197 "string.to_string.m"
}

#line 104 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_3(
#line 104 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
#line 104 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 104 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 104 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 104 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
#line 104 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
#line 104 "string.to_string.m"
{
#line 114 "string.to_string.m"
  {
#line 114 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 114 "string.to_string.m"
    MR_String mercury__string__to_string__String_12;
#line 112 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 70 "builtin.opt"
    MR_Box mercury__string__to_string__conv0_String_12;

#line 70 "builtin.opt"
    {
#line 70 "builtin.opt"
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
#line 70 "builtin.opt"
    if (mercury__string__to_string__succeeded)
#line 70 "builtin.opt"
      {
#line 70 "builtin.opt"
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
#line 70 "builtin.opt"
        mercury__string__to_string__succeeded = MR_TRUE;
#line 70 "builtin.opt"
      }
#line 114 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 113 "string.to_string.m"
      {
#line 113 "string.to_string.m"
        MR_String mercury__string__to_string__V_29_29;

#line 113 "string.to_string.m"
        {
#line 113 "string.to_string.m"
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          MR_Word base;
#line 82 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
#line 82 "string.to_string.m"
        }
#line 113 "string.to_string.m"
      }
#line 114 "string.to_string.m"
    else
#line 116 "string.to_string.m"
      {
#line 116 "string.to_string.m"
        MR_Char mercury__string__to_string__Char_13;
#line 114 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 114 "string.to_string.m"
        MR_Box mercury__string__to_string__conv1_Char_13;

#line 114 "string.to_string.m"
        {
#line 114 "string.to_string.m"
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
#line 114 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 114 "string.to_string.m"
          {
#line 114 "string.to_string.m"
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
#line 114 "string.to_string.m"
            mercury__string__to_string__succeeded = MR_TRUE;
#line 114 "string.to_string.m"
          }
#line 116 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 115 "string.to_string.m"
          {
#line 115 "string.to_string.m"
            MR_String mercury__string__to_string__V_31_31;

#line 115 "string.to_string.m"
            {
#line 115 "string.to_string.m"
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
#line 115 "string.to_string.m"
            {
#line 115 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 115 "string.to_string.m"
              return;
            }
#line 115 "string.to_string.m"
          }
#line 116 "string.to_string.m"
        else
#line 118 "string.to_string.m"
          {
#line 118 "string.to_string.m"
            MR_Integer mercury__string__to_string__Int_14;
#line 116 "string.to_string.m"
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 116 "string.to_string.m"
            MR_Box mercury__string__to_string__conv2_Int_14;

#line 116 "string.to_string.m"
            {
#line 116 "string.to_string.m"
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
#line 116 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 116 "string.to_string.m"
              {
#line 116 "string.to_string.m"
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
#line 116 "string.to_string.m"
                mercury__string__to_string__succeeded = MR_TRUE;
#line 116 "string.to_string.m"
              }
#line 118 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 117 "string.to_string.m"
              {
#line 117 "string.to_string.m"
                MR_String mercury__string__to_string__V_33_33;

#line 117 "string.to_string.m"
                {
#line 117 "string.to_string.m"
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
#line 117 "string.to_string.m"
                {
#line 117 "string.to_string.m"
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 117 "string.to_string.m"
                  return;
                }
#line 117 "string.to_string.m"
              }
#line 118 "string.to_string.m"
            else
#line 120 "string.to_string.m"
              {
#line 120 "string.to_string.m"
                MR_Float mercury__string__to_string__Float_15;
#line 118 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 118 "string.to_string.m"
                MR_Box mercury__string__to_string__conv3_Float_15;

#line 118 "string.to_string.m"
                {
#line 118 "string.to_string.m"
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
#line 118 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 118 "string.to_string.m"
                  {
#line 118 "string.to_string.m"
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
#line 118 "string.to_string.m"
                    mercury__string__to_string__succeeded = MR_TRUE;
#line 118 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 119 "string.to_string.m"
                  {
#line 119 "string.to_string.m"
                    MR_String mercury__string__to_string__V_35_35;

#line 119 "string.to_string.m"
                    {
#line 119 "string.to_string.m"
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
#line 119 "string.to_string.m"
                    {
#line 119 "string.to_string.m"
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 119 "string.to_string.m"
                      return;
                    }
#line 119 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
                else
#line 122 "string.to_string.m"
                  {
#line 122 "string.to_string.m"
                    MR_Box mercury__string__to_string__Bitmap_16;
#line 120 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 120 "string.to_string.m"
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

#line 120 "string.to_string.m"
                    {
#line 120 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
#line 120 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 120 "string.to_string.m"
                      {
#line 120 "string.to_string.m"
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
#line 120 "string.to_string.m"
                        mercury__string__to_string__succeeded = MR_TRUE;
#line 120 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 121 "string.to_string.m"
                      {
#line 121 "string.to_string.m"
                        MR_String mercury__string__to_string__V_37_37;
#line 121 "string.to_string.m"
                        MR_String mercury__string__to_string__V_39_39;

#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 121 "string.to_string.m"
                          return;
                        }
#line 121 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                    else
#line 124 "string.to_string.m"
                      {
#line 124 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeDesc_17;
#line 122 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 122 "string.to_string.m"
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

#line 122 "string.to_string.m"
                        {
#line 122 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
#line 122 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 122 "string.to_string.m"
                          {
#line 122 "string.to_string.m"
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
#line 122 "string.to_string.m"
                            mercury__string__to_string__succeeded = MR_TRUE;
#line 122 "string.to_string.m"
                          }
#line 124 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 123 "string.to_string.m"
                          {
#line 123 "string.to_string.m"
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 123 "string.to_string.m"
                            return;
                          }
#line 124 "string.to_string.m"
                        else
#line 126 "string.to_string.m"
                          {
#line 126 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
#line 124 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
#line 124 "string.to_string.m"
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

#line 124 "string.to_string.m"
                            {
#line 124 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
#line 124 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 124 "string.to_string.m"
                              {
#line 124 "string.to_string.m"
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
#line 124 "string.to_string.m"
                                mercury__string__to_string__succeeded = MR_TRUE;
#line 124 "string.to_string.m"
                              }
#line 126 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 125 "string.to_string.m"
                              {
#line 125 "string.to_string.m"
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 125 "string.to_string.m"
                                return;
                              }
#line 126 "string.to_string.m"
                            else
#line 128 "string.to_string.m"
                              {
#line 128 "string.to_string.m"
                                MR_Word mercury__string__to_string__C_Pointer_19;
#line 126 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 126 "string.to_string.m"
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

#line 126 "string.to_string.m"
                                {
#line 126 "string.to_string.m"
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
#line 126 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 126 "string.to_string.m"
                                  {
#line 126 "string.to_string.m"
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
#line 126 "string.to_string.m"
                                    mercury__string__to_string__succeeded = MR_TRUE;
#line 126 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 127 "string.to_string.m"
                                  {
#line 127 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_42_42;

#line 127 "string.to_string.m"
                                    {
#line 127 "string.to_string.m"
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
#line 127 "string.to_string.m"
                                    {
#line 127 "string.to_string.m"
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 127 "string.to_string.m"
                                      return;
                                    }
#line 127 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                                else
#line 154 "string.to_string.m"
                                  {
#line 154 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ElemType_22;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__TypeCtor_20;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ArgTypes_21;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_44_44;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_45_45;
#line 142 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_46_46;
#line 142 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_47_47;
#line 37 "type_desc.opt"
                                    MR_Box mercury__string__to_string__V_91_91;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 8237 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 8267 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 143 "string.to_string.m"
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 143 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 143 "string.to_string.m"
                                      {
#line 143 "string.to_string.m"
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
#line 143 "string.to_string.m"
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
#line 143 "string.to_string.m"
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 142 "string.to_string.m"
                                          {
#line 144 "string.to_string.m"
                                            {
#line 144 "string.to_string.m"
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
#line 144 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
#line 142 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 142 "string.to_string.m"
                                              {
#line 145 "string.to_string.m"
                                                {
#line 145 "string.to_string.m"
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
#line 145 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
#line 142 "string.to_string.m"
                                              }
#line 142 "string.to_string.m"
                                          }
#line 143 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 150 "string.to_string.m"
                                      {
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
#line 150 "string.to_string.m"
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
#line 53 "type_desc.opt"
                                        MR_Box mercury__string__to_string__Elem_23;
#line 152 "string.to_string.m"
                                        MR_Box mercury__string__to_string__conv8_Array_24;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{
#line 53 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 8345 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
#line 53 "type_desc.opt"
}
#line 151 "string.to_string.m"
                                        {
#line 151 "string.to_string.m"
                                          mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                        }
#line 8357 "string.to_string.c"
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 8359 "string.to_string.c"
                                        {
#line 8361 "string.to_string.c"
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8363 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
#line 8365 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
#line 8367 "string.to_string.c"
                                        }
#line 152 "string.to_string.m"
                                        {
#line 152 "string.to_string.m"
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
#line 152 "string.to_string.m"
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
#line 153 "string.to_string.m"
                                        {
#line 153 "string.to_string.m"
                                          mercury__string__to_string__array_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 153 "string.to_string.m"
                                          return;
                                        }
#line 150 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                    else
#line 164 "string.to_string.m"
                                      {
#line 164 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ElemType_72;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_49_49;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_50_50;
#line 155 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_51_51;
#line 155 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_52_52;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtor_60;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ArgTypes_61;
#line 37 "type_desc.opt"
                                        MR_Box mercury__string__to_string__V_92_92;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 8432 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 8462 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 156 "string.to_string.m"
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 156 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 156 "string.to_string.m"
                                          {
#line 156 "string.to_string.m"
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
#line 156 "string.to_string.m"
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
#line 156 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 155 "string.to_string.m"
                                              {
#line 157 "string.to_string.m"
                                                {
#line 157 "string.to_string.m"
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
#line 157 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
#line 155 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 155 "string.to_string.m"
                                                  {
#line 158 "string.to_string.m"
                                                    {
#line 158 "string.to_string.m"
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
#line 158 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
#line 155 "string.to_string.m"
                                                  }
#line 155 "string.to_string.m"
                                              }
#line 156 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 160 "string.to_string.m"
                                          {
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
#line 160 "string.to_string.m"
                                            MR_Box mercury__string__to_string__VersionArray_25;
#line 53 "type_desc.opt"
                                            MR_Box mercury__string__to_string__Elem_62;
#line 162 "string.to_string.m"
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{
#line 53 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 8540 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
#line 53 "type_desc.opt"
}
#line 161 "string.to_string.m"
                                            {
#line 161 "string.to_string.m"
                                              mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                            }
#line 8552 "string.to_string.c"
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 8554 "string.to_string.c"
                                            {
#line 8556 "string.to_string.c"
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8558 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
#line 8560 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
#line 8562 "string.to_string.c"
                                            }
#line 162 "string.to_string.m"
                                            {
#line 162 "string.to_string.m"
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
#line 162 "string.to_string.m"
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
#line 163 "string.to_string.m"
                                            {
#line 163 "string.to_string.m"
                                              mercury__string__to_string__version_array_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 163 "string.to_string.m"
                                              return;
                                            }
#line 160 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                        else
#line 177 "string.to_string.m"
                                          {
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_54_54;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_55_55;
#line 168 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_56_56;
#line 168 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_57_57;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtor_63;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ArgTypes_64;
#line 37 "type_desc.opt"
                                            MR_Box mercury__string__to_string__V_93_93;
#line 169 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ElemType_68;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 8627 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 8657 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 169 "string.to_string.m"
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
#line 169 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 169 "string.to_string.m"
                                              {
#line 169 "string.to_string.m"
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
#line 169 "string.to_string.m"
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
#line 169 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 168 "string.to_string.m"
                                                  {
#line 170 "string.to_string.m"
                                                    {
#line 170 "string.to_string.m"
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
#line 170 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
#line 168 "string.to_string.m"
                                                    if (mercury__string__to_string__succeeded)
#line 168 "string.to_string.m"
                                                      {
#line 171 "string.to_string.m"
                                                        {
#line 171 "string.to_string.m"
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
#line 171 "string.to_string.m"
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
#line 168 "string.to_string.m"
                                                      }
#line 168 "string.to_string.m"
                                                  }
#line 169 "string.to_string.m"
                                              }
#line 177 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 173 "string.to_string.m"
                                              {
#line 173 "string.to_string.m"
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
#line 173 "string.to_string.m"
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90;
#line 175 "string.to_string.m"
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

#line 174 "string.to_string.m"
                                                {
#line 174 "string.to_string.m"
                                                  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                                }
#line 8721 "string.to_string.c"
                                                mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
#line 175 "string.to_string.m"
                                                {
#line 175 "string.to_string.m"
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
#line 175 "string.to_string.m"
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
#line 176 "string.to_string.m"
                                                {
#line 176 "string.to_string.m"
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 176 "string.to_string.m"
                                                  return;
                                                }
#line 173 "string.to_string.m"
                                              }
#line 177 "string.to_string.m"
                                            else
#line 178 "string.to_string.m"
                                              {
#line 178 "string.to_string.m"
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 178 "string.to_string.m"
                                                return;
                                              }
#line 177 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                              }
#line 126 "string.to_string.m"
                          }
#line 124 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
              }
#line 118 "string.to_string.m"
          }
#line 116 "string.to_string.m"
      }
#line 114 "string.to_string.m"
  }
#line 104 "string.to_string.m"
}

#line 102 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_2(
#line 102 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
#line 102 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 102 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 102 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 102 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
#line 102 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
#line 102 "string.to_string.m"
{
#line 114 "string.to_string.m"
  {
#line 114 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 114 "string.to_string.m"
    MR_String mercury__string__to_string__String_12;
#line 112 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 70 "builtin.opt"
    MR_Box mercury__string__to_string__conv0_String_12;

#line 70 "builtin.opt"
    {
#line 70 "builtin.opt"
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
#line 70 "builtin.opt"
    if (mercury__string__to_string__succeeded)
#line 70 "builtin.opt"
      {
#line 70 "builtin.opt"
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
#line 70 "builtin.opt"
        mercury__string__to_string__succeeded = MR_TRUE;
#line 70 "builtin.opt"
      }
#line 114 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 113 "string.to_string.m"
      {
#line 113 "string.to_string.m"
        MR_String mercury__string__to_string__V_29_29;

#line 113 "string.to_string.m"
        {
#line 113 "string.to_string.m"
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          MR_Word base;
#line 82 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
#line 82 "string.to_string.m"
        }
#line 113 "string.to_string.m"
      }
#line 114 "string.to_string.m"
    else
#line 116 "string.to_string.m"
      {
#line 116 "string.to_string.m"
        MR_Char mercury__string__to_string__Char_13;
#line 114 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 114 "string.to_string.m"
        MR_Box mercury__string__to_string__conv1_Char_13;

#line 114 "string.to_string.m"
        {
#line 114 "string.to_string.m"
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
#line 114 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 114 "string.to_string.m"
          {
#line 114 "string.to_string.m"
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
#line 114 "string.to_string.m"
            mercury__string__to_string__succeeded = MR_TRUE;
#line 114 "string.to_string.m"
          }
#line 116 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 115 "string.to_string.m"
          {
#line 115 "string.to_string.m"
            MR_String mercury__string__to_string__V_31_31;

#line 115 "string.to_string.m"
            {
#line 115 "string.to_string.m"
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
#line 115 "string.to_string.m"
            {
#line 115 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 115 "string.to_string.m"
              return;
            }
#line 115 "string.to_string.m"
          }
#line 116 "string.to_string.m"
        else
#line 118 "string.to_string.m"
          {
#line 118 "string.to_string.m"
            MR_Integer mercury__string__to_string__Int_14;
#line 116 "string.to_string.m"
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 116 "string.to_string.m"
            MR_Box mercury__string__to_string__conv2_Int_14;

#line 116 "string.to_string.m"
            {
#line 116 "string.to_string.m"
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
#line 116 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 116 "string.to_string.m"
              {
#line 116 "string.to_string.m"
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
#line 116 "string.to_string.m"
                mercury__string__to_string__succeeded = MR_TRUE;
#line 116 "string.to_string.m"
              }
#line 118 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 117 "string.to_string.m"
              {
#line 117 "string.to_string.m"
                MR_String mercury__string__to_string__V_33_33;

#line 117 "string.to_string.m"
                {
#line 117 "string.to_string.m"
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
#line 117 "string.to_string.m"
                {
#line 117 "string.to_string.m"
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 117 "string.to_string.m"
                  return;
                }
#line 117 "string.to_string.m"
              }
#line 118 "string.to_string.m"
            else
#line 120 "string.to_string.m"
              {
#line 120 "string.to_string.m"
                MR_Float mercury__string__to_string__Float_15;
#line 118 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 118 "string.to_string.m"
                MR_Box mercury__string__to_string__conv3_Float_15;

#line 118 "string.to_string.m"
                {
#line 118 "string.to_string.m"
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
#line 118 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 118 "string.to_string.m"
                  {
#line 118 "string.to_string.m"
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
#line 118 "string.to_string.m"
                    mercury__string__to_string__succeeded = MR_TRUE;
#line 118 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 119 "string.to_string.m"
                  {
#line 119 "string.to_string.m"
                    MR_String mercury__string__to_string__V_35_35;

#line 119 "string.to_string.m"
                    {
#line 119 "string.to_string.m"
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
#line 119 "string.to_string.m"
                    {
#line 119 "string.to_string.m"
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 119 "string.to_string.m"
                      return;
                    }
#line 119 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
                else
#line 122 "string.to_string.m"
                  {
#line 122 "string.to_string.m"
                    MR_Box mercury__string__to_string__Bitmap_16;
#line 120 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 120 "string.to_string.m"
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

#line 120 "string.to_string.m"
                    {
#line 120 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
#line 120 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 120 "string.to_string.m"
                      {
#line 120 "string.to_string.m"
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
#line 120 "string.to_string.m"
                        mercury__string__to_string__succeeded = MR_TRUE;
#line 120 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 121 "string.to_string.m"
                      {
#line 121 "string.to_string.m"
                        MR_String mercury__string__to_string__V_37_37;
#line 121 "string.to_string.m"
                        MR_String mercury__string__to_string__V_39_39;

#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 121 "string.to_string.m"
                          return;
                        }
#line 121 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                    else
#line 124 "string.to_string.m"
                      {
#line 124 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeDesc_17;
#line 122 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 122 "string.to_string.m"
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

#line 122 "string.to_string.m"
                        {
#line 122 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
#line 122 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 122 "string.to_string.m"
                          {
#line 122 "string.to_string.m"
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
#line 122 "string.to_string.m"
                            mercury__string__to_string__succeeded = MR_TRUE;
#line 122 "string.to_string.m"
                          }
#line 124 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 123 "string.to_string.m"
                          {
#line 123 "string.to_string.m"
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 123 "string.to_string.m"
                            return;
                          }
#line 124 "string.to_string.m"
                        else
#line 126 "string.to_string.m"
                          {
#line 126 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
#line 124 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
#line 124 "string.to_string.m"
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

#line 124 "string.to_string.m"
                            {
#line 124 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
#line 124 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 124 "string.to_string.m"
                              {
#line 124 "string.to_string.m"
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
#line 124 "string.to_string.m"
                                mercury__string__to_string__succeeded = MR_TRUE;
#line 124 "string.to_string.m"
                              }
#line 126 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 125 "string.to_string.m"
                              {
#line 125 "string.to_string.m"
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 125 "string.to_string.m"
                                return;
                              }
#line 126 "string.to_string.m"
                            else
#line 128 "string.to_string.m"
                              {
#line 128 "string.to_string.m"
                                MR_Word mercury__string__to_string__C_Pointer_19;
#line 126 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 126 "string.to_string.m"
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

#line 126 "string.to_string.m"
                                {
#line 126 "string.to_string.m"
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
#line 126 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 126 "string.to_string.m"
                                  {
#line 126 "string.to_string.m"
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
#line 126 "string.to_string.m"
                                    mercury__string__to_string__succeeded = MR_TRUE;
#line 126 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 127 "string.to_string.m"
                                  {
#line 127 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_42_42;

#line 127 "string.to_string.m"
                                    {
#line 127 "string.to_string.m"
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
#line 127 "string.to_string.m"
                                    {
#line 127 "string.to_string.m"
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 127 "string.to_string.m"
                                      return;
                                    }
#line 127 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                                else
#line 154 "string.to_string.m"
                                  {
#line 154 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ElemType_22;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__TypeCtor_20;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ArgTypes_21;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_44_44;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_45_45;
#line 142 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_46_46;
#line 142 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_47_47;
#line 37 "type_desc.opt"
                                    MR_Box mercury__string__to_string__V_91_91;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 9203 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9233 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 143 "string.to_string.m"
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 143 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 143 "string.to_string.m"
                                      {
#line 143 "string.to_string.m"
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
#line 143 "string.to_string.m"
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
#line 143 "string.to_string.m"
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 142 "string.to_string.m"
                                          {
#line 144 "string.to_string.m"
                                            {
#line 144 "string.to_string.m"
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
#line 144 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
#line 142 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 142 "string.to_string.m"
                                              {
#line 145 "string.to_string.m"
                                                {
#line 145 "string.to_string.m"
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
#line 145 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
#line 142 "string.to_string.m"
                                              }
#line 142 "string.to_string.m"
                                          }
#line 143 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 150 "string.to_string.m"
                                      {
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
#line 150 "string.to_string.m"
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
#line 53 "type_desc.opt"
                                        MR_Box mercury__string__to_string__Elem_23;
#line 152 "string.to_string.m"
                                        MR_Box mercury__string__to_string__conv8_Array_24;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{
#line 53 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9311 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
#line 53 "type_desc.opt"
}
#line 151 "string.to_string.m"
                                        {
#line 151 "string.to_string.m"
                                          mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                        }
#line 9323 "string.to_string.c"
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 9325 "string.to_string.c"
                                        {
#line 9327 "string.to_string.c"
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9329 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
#line 9331 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
#line 9333 "string.to_string.c"
                                        }
#line 152 "string.to_string.m"
                                        {
#line 152 "string.to_string.m"
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
#line 152 "string.to_string.m"
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
#line 153 "string.to_string.m"
                                        {
#line 153 "string.to_string.m"
                                          mercury__string__to_string__array_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 153 "string.to_string.m"
                                          return;
                                        }
#line 150 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                    else
#line 164 "string.to_string.m"
                                      {
#line 164 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ElemType_72;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_49_49;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_50_50;
#line 155 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_51_51;
#line 155 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_52_52;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtor_60;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ArgTypes_61;
#line 37 "type_desc.opt"
                                        MR_Box mercury__string__to_string__V_92_92;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 9398 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9428 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 156 "string.to_string.m"
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 156 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 156 "string.to_string.m"
                                          {
#line 156 "string.to_string.m"
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
#line 156 "string.to_string.m"
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
#line 156 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 155 "string.to_string.m"
                                              {
#line 157 "string.to_string.m"
                                                {
#line 157 "string.to_string.m"
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
#line 157 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
#line 155 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 155 "string.to_string.m"
                                                  {
#line 158 "string.to_string.m"
                                                    {
#line 158 "string.to_string.m"
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
#line 158 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
#line 155 "string.to_string.m"
                                                  }
#line 155 "string.to_string.m"
                                              }
#line 156 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 160 "string.to_string.m"
                                          {
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
#line 160 "string.to_string.m"
                                            MR_Box mercury__string__to_string__VersionArray_25;
#line 53 "type_desc.opt"
                                            MR_Box mercury__string__to_string__Elem_62;
#line 162 "string.to_string.m"
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{
#line 53 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9506 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
#line 53 "type_desc.opt"
}
#line 161 "string.to_string.m"
                                            {
#line 161 "string.to_string.m"
                                              mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                            }
#line 9518 "string.to_string.c"
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 9520 "string.to_string.c"
                                            {
#line 9522 "string.to_string.c"
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9524 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
#line 9526 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
#line 9528 "string.to_string.c"
                                            }
#line 162 "string.to_string.m"
                                            {
#line 162 "string.to_string.m"
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
#line 162 "string.to_string.m"
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
#line 163 "string.to_string.m"
                                            {
#line 163 "string.to_string.m"
                                              mercury__string__to_string__version_array_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 163 "string.to_string.m"
                                              return;
                                            }
#line 160 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                        else
#line 177 "string.to_string.m"
                                          {
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_54_54;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_55_55;
#line 168 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_56_56;
#line 168 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_57_57;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtor_63;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ArgTypes_64;
#line 37 "type_desc.opt"
                                            MR_Box mercury__string__to_string__V_93_93;
#line 169 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ElemType_68;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 9593 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9623 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 169 "string.to_string.m"
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
#line 169 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 169 "string.to_string.m"
                                              {
#line 169 "string.to_string.m"
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
#line 169 "string.to_string.m"
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
#line 169 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 168 "string.to_string.m"
                                                  {
#line 170 "string.to_string.m"
                                                    {
#line 170 "string.to_string.m"
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
#line 170 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
#line 168 "string.to_string.m"
                                                    if (mercury__string__to_string__succeeded)
#line 168 "string.to_string.m"
                                                      {
#line 171 "string.to_string.m"
                                                        {
#line 171 "string.to_string.m"
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
#line 171 "string.to_string.m"
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
#line 168 "string.to_string.m"
                                                      }
#line 168 "string.to_string.m"
                                                  }
#line 169 "string.to_string.m"
                                              }
#line 177 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 173 "string.to_string.m"
                                              {
#line 173 "string.to_string.m"
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
#line 173 "string.to_string.m"
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90;
#line 175 "string.to_string.m"
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

#line 174 "string.to_string.m"
                                                {
#line 174 "string.to_string.m"
                                                  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                                }
#line 9687 "string.to_string.c"
                                                mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
#line 175 "string.to_string.m"
                                                {
#line 175 "string.to_string.m"
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
#line 175 "string.to_string.m"
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
#line 176 "string.to_string.m"
                                                {
#line 176 "string.to_string.m"
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 176 "string.to_string.m"
                                                  return;
                                                }
#line 173 "string.to_string.m"
                                              }
#line 177 "string.to_string.m"
                                            else
#line 178 "string.to_string.m"
                                              {
#line 178 "string.to_string.m"
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 178 "string.to_string.m"
                                                return;
                                              }
#line 177 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                              }
#line 126 "string.to_string.m"
                          }
#line 124 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
              }
#line 118 "string.to_string.m"
          }
#line 116 "string.to_string.m"
      }
#line 114 "string.to_string.m"
  }
#line 102 "string.to_string.m"
}

#line 101 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_1(
#line 101 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
#line 101 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 101 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 101 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 101 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
#line 101 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
#line 101 "string.to_string.m"
{
#line 114 "string.to_string.m"
  {
#line 114 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 114 "string.to_string.m"
    MR_String mercury__string__to_string__String_12;
#line 112 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 70 "builtin.opt"
    MR_Box mercury__string__to_string__conv0_String_12;

#line 70 "builtin.opt"
    {
#line 70 "builtin.opt"
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
#line 70 "builtin.opt"
    if (mercury__string__to_string__succeeded)
#line 70 "builtin.opt"
      {
#line 70 "builtin.opt"
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
#line 70 "builtin.opt"
        mercury__string__to_string__succeeded = MR_TRUE;
#line 70 "builtin.opt"
      }
#line 114 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 113 "string.to_string.m"
      {
#line 113 "string.to_string.m"
        MR_String mercury__string__to_string__V_29_29;

#line 113 "string.to_string.m"
        {
#line 113 "string.to_string.m"
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          MR_Word base;
#line 82 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
#line 82 "string.to_string.m"
        }
#line 113 "string.to_string.m"
      }
#line 114 "string.to_string.m"
    else
#line 116 "string.to_string.m"
      {
#line 116 "string.to_string.m"
        MR_Char mercury__string__to_string__Char_13;
#line 114 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 114 "string.to_string.m"
        MR_Box mercury__string__to_string__conv1_Char_13;

#line 114 "string.to_string.m"
        {
#line 114 "string.to_string.m"
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
#line 114 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 114 "string.to_string.m"
          {
#line 114 "string.to_string.m"
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
#line 114 "string.to_string.m"
            mercury__string__to_string__succeeded = MR_TRUE;
#line 114 "string.to_string.m"
          }
#line 116 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 115 "string.to_string.m"
          {
#line 115 "string.to_string.m"
            MR_String mercury__string__to_string__V_31_31;

#line 115 "string.to_string.m"
            {
#line 115 "string.to_string.m"
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
#line 115 "string.to_string.m"
            {
#line 115 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 115 "string.to_string.m"
              return;
            }
#line 115 "string.to_string.m"
          }
#line 116 "string.to_string.m"
        else
#line 118 "string.to_string.m"
          {
#line 118 "string.to_string.m"
            MR_Integer mercury__string__to_string__Int_14;
#line 116 "string.to_string.m"
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 116 "string.to_string.m"
            MR_Box mercury__string__to_string__conv2_Int_14;

#line 116 "string.to_string.m"
            {
#line 116 "string.to_string.m"
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
#line 116 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 116 "string.to_string.m"
              {
#line 116 "string.to_string.m"
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
#line 116 "string.to_string.m"
                mercury__string__to_string__succeeded = MR_TRUE;
#line 116 "string.to_string.m"
              }
#line 118 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 117 "string.to_string.m"
              {
#line 117 "string.to_string.m"
                MR_String mercury__string__to_string__V_33_33;

#line 117 "string.to_string.m"
                {
#line 117 "string.to_string.m"
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
#line 117 "string.to_string.m"
                {
#line 117 "string.to_string.m"
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 117 "string.to_string.m"
                  return;
                }
#line 117 "string.to_string.m"
              }
#line 118 "string.to_string.m"
            else
#line 120 "string.to_string.m"
              {
#line 120 "string.to_string.m"
                MR_Float mercury__string__to_string__Float_15;
#line 118 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 118 "string.to_string.m"
                MR_Box mercury__string__to_string__conv3_Float_15;

#line 118 "string.to_string.m"
                {
#line 118 "string.to_string.m"
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
#line 118 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 118 "string.to_string.m"
                  {
#line 118 "string.to_string.m"
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
#line 118 "string.to_string.m"
                    mercury__string__to_string__succeeded = MR_TRUE;
#line 118 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 119 "string.to_string.m"
                  {
#line 119 "string.to_string.m"
                    MR_String mercury__string__to_string__V_35_35;

#line 119 "string.to_string.m"
                    {
#line 119 "string.to_string.m"
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
#line 119 "string.to_string.m"
                    {
#line 119 "string.to_string.m"
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 119 "string.to_string.m"
                      return;
                    }
#line 119 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
                else
#line 122 "string.to_string.m"
                  {
#line 122 "string.to_string.m"
                    MR_Box mercury__string__to_string__Bitmap_16;
#line 120 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 120 "string.to_string.m"
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

#line 120 "string.to_string.m"
                    {
#line 120 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
#line 120 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 120 "string.to_string.m"
                      {
#line 120 "string.to_string.m"
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
#line 120 "string.to_string.m"
                        mercury__string__to_string__succeeded = MR_TRUE;
#line 120 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 121 "string.to_string.m"
                      {
#line 121 "string.to_string.m"
                        MR_String mercury__string__to_string__V_37_37;
#line 121 "string.to_string.m"
                        MR_String mercury__string__to_string__V_39_39;

#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 121 "string.to_string.m"
                          return;
                        }
#line 121 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                    else
#line 124 "string.to_string.m"
                      {
#line 124 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeDesc_17;
#line 122 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 122 "string.to_string.m"
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

#line 122 "string.to_string.m"
                        {
#line 122 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
#line 122 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 122 "string.to_string.m"
                          {
#line 122 "string.to_string.m"
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
#line 122 "string.to_string.m"
                            mercury__string__to_string__succeeded = MR_TRUE;
#line 122 "string.to_string.m"
                          }
#line 124 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 123 "string.to_string.m"
                          {
#line 123 "string.to_string.m"
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 123 "string.to_string.m"
                            return;
                          }
#line 124 "string.to_string.m"
                        else
#line 126 "string.to_string.m"
                          {
#line 126 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
#line 124 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
#line 124 "string.to_string.m"
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

#line 124 "string.to_string.m"
                            {
#line 124 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
#line 124 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 124 "string.to_string.m"
                              {
#line 124 "string.to_string.m"
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
#line 124 "string.to_string.m"
                                mercury__string__to_string__succeeded = MR_TRUE;
#line 124 "string.to_string.m"
                              }
#line 126 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 125 "string.to_string.m"
                              {
#line 125 "string.to_string.m"
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 125 "string.to_string.m"
                                return;
                              }
#line 126 "string.to_string.m"
                            else
#line 128 "string.to_string.m"
                              {
#line 128 "string.to_string.m"
                                MR_Word mercury__string__to_string__C_Pointer_19;
#line 126 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 126 "string.to_string.m"
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

#line 126 "string.to_string.m"
                                {
#line 126 "string.to_string.m"
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
#line 126 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 126 "string.to_string.m"
                                  {
#line 126 "string.to_string.m"
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
#line 126 "string.to_string.m"
                                    mercury__string__to_string__succeeded = MR_TRUE;
#line 126 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 127 "string.to_string.m"
                                  {
#line 127 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_42_42;

#line 127 "string.to_string.m"
                                    {
#line 127 "string.to_string.m"
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
#line 127 "string.to_string.m"
                                    {
#line 127 "string.to_string.m"
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 127 "string.to_string.m"
                                      return;
                                    }
#line 127 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                                else
#line 154 "string.to_string.m"
                                  {
#line 154 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ElemType_22;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__TypeCtor_20;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ArgTypes_21;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_44_44;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_45_45;
#line 142 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_46_46;
#line 142 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_47_47;
#line 37 "type_desc.opt"
                                    MR_Box mercury__string__to_string__V_91_91;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 10169 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10199 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 143 "string.to_string.m"
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 143 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 143 "string.to_string.m"
                                      {
#line 143 "string.to_string.m"
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
#line 143 "string.to_string.m"
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
#line 143 "string.to_string.m"
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 142 "string.to_string.m"
                                          {
#line 144 "string.to_string.m"
                                            {
#line 144 "string.to_string.m"
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
#line 144 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
#line 142 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 142 "string.to_string.m"
                                              {
#line 145 "string.to_string.m"
                                                {
#line 145 "string.to_string.m"
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
#line 145 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
#line 142 "string.to_string.m"
                                              }
#line 142 "string.to_string.m"
                                          }
#line 143 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 150 "string.to_string.m"
                                      {
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
#line 150 "string.to_string.m"
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
#line 53 "type_desc.opt"
                                        MR_Box mercury__string__to_string__Elem_23;
#line 152 "string.to_string.m"
                                        MR_Box mercury__string__to_string__conv8_Array_24;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{
#line 53 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 10277 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
#line 53 "type_desc.opt"
}
#line 151 "string.to_string.m"
                                        {
#line 151 "string.to_string.m"
                                          mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                        }
#line 10289 "string.to_string.c"
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 10291 "string.to_string.c"
                                        {
#line 10293 "string.to_string.c"
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10295 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
#line 10297 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
#line 10299 "string.to_string.c"
                                        }
#line 152 "string.to_string.m"
                                        {
#line 152 "string.to_string.m"
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
#line 152 "string.to_string.m"
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
#line 153 "string.to_string.m"
                                        {
#line 153 "string.to_string.m"
                                          mercury__string__to_string__array_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 153 "string.to_string.m"
                                          return;
                                        }
#line 150 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                    else
#line 164 "string.to_string.m"
                                      {
#line 164 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ElemType_72;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_49_49;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_50_50;
#line 155 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_51_51;
#line 155 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_52_52;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtor_60;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ArgTypes_61;
#line 37 "type_desc.opt"
                                        MR_Box mercury__string__to_string__V_92_92;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 10364 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10394 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 156 "string.to_string.m"
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 156 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 156 "string.to_string.m"
                                          {
#line 156 "string.to_string.m"
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
#line 156 "string.to_string.m"
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
#line 156 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 155 "string.to_string.m"
                                              {
#line 157 "string.to_string.m"
                                                {
#line 157 "string.to_string.m"
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
#line 157 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
#line 155 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 155 "string.to_string.m"
                                                  {
#line 158 "string.to_string.m"
                                                    {
#line 158 "string.to_string.m"
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
#line 158 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
#line 155 "string.to_string.m"
                                                  }
#line 155 "string.to_string.m"
                                              }
#line 156 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 160 "string.to_string.m"
                                          {
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
#line 160 "string.to_string.m"
                                            MR_Box mercury__string__to_string__VersionArray_25;
#line 53 "type_desc.opt"
                                            MR_Box mercury__string__to_string__Elem_62;
#line 162 "string.to_string.m"
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{
#line 53 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 10472 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
#line 53 "type_desc.opt"
}
#line 161 "string.to_string.m"
                                            {
#line 161 "string.to_string.m"
                                              mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                            }
#line 10484 "string.to_string.c"
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 10486 "string.to_string.c"
                                            {
#line 10488 "string.to_string.c"
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10490 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
#line 10492 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
#line 10494 "string.to_string.c"
                                            }
#line 162 "string.to_string.m"
                                            {
#line 162 "string.to_string.m"
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
#line 162 "string.to_string.m"
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
#line 163 "string.to_string.m"
                                            {
#line 163 "string.to_string.m"
                                              mercury__string__to_string__version_array_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 163 "string.to_string.m"
                                              return;
                                            }
#line 160 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                        else
#line 177 "string.to_string.m"
                                          {
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_54_54;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_55_55;
#line 168 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_56_56;
#line 168 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_57_57;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtor_63;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ArgTypes_64;
#line 37 "type_desc.opt"
                                            MR_Box mercury__string__to_string__V_93_93;
#line 169 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ElemType_68;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 10559 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10589 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 169 "string.to_string.m"
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
#line 169 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 169 "string.to_string.m"
                                              {
#line 169 "string.to_string.m"
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
#line 169 "string.to_string.m"
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
#line 169 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 168 "string.to_string.m"
                                                  {
#line 170 "string.to_string.m"
                                                    {
#line 170 "string.to_string.m"
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
#line 170 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
#line 168 "string.to_string.m"
                                                    if (mercury__string__to_string__succeeded)
#line 168 "string.to_string.m"
                                                      {
#line 171 "string.to_string.m"
                                                        {
#line 171 "string.to_string.m"
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
#line 171 "string.to_string.m"
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
#line 168 "string.to_string.m"
                                                      }
#line 168 "string.to_string.m"
                                                  }
#line 169 "string.to_string.m"
                                              }
#line 177 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 173 "string.to_string.m"
                                              {
#line 173 "string.to_string.m"
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
#line 173 "string.to_string.m"
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90;
#line 175 "string.to_string.m"
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

#line 174 "string.to_string.m"
                                                {
#line 174 "string.to_string.m"
                                                  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                                }
#line 10653 "string.to_string.c"
                                                mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
#line 175 "string.to_string.m"
                                                {
#line 175 "string.to_string.m"
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
#line 175 "string.to_string.m"
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
#line 176 "string.to_string.m"
                                                {
#line 176 "string.to_string.m"
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 176 "string.to_string.m"
                                                  return;
                                                }
#line 173 "string.to_string.m"
                                              }
#line 177 "string.to_string.m"
                                            else
#line 178 "string.to_string.m"
                                              {
#line 178 "string.to_string.m"
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 178 "string.to_string.m"
                                                return;
                                              }
#line 177 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                              }
#line 126 "string.to_string.m"
                          }
#line 124 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
              }
#line 118 "string.to_string.m"
          }
#line 116 "string.to_string.m"
      }
#line 114 "string.to_string.m"
  }
#line 101 "string.to_string.m"
}

#line 100 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_0(
#line 100 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
#line 100 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 100 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 100 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 100 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
#line 100 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
#line 100 "string.to_string.m"
{
#line 114 "string.to_string.m"
  {
#line 114 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 114 "string.to_string.m"
    MR_String mercury__string__to_string__String_12;
#line 112 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 70 "builtin.opt"
    MR_Box mercury__string__to_string__conv0_String_12;

#line 70 "builtin.opt"
    {
#line 70 "builtin.opt"
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
#line 70 "builtin.opt"
    if (mercury__string__to_string__succeeded)
#line 70 "builtin.opt"
      {
#line 70 "builtin.opt"
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
#line 70 "builtin.opt"
        mercury__string__to_string__succeeded = MR_TRUE;
#line 70 "builtin.opt"
      }
#line 114 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 113 "string.to_string.m"
      {
#line 113 "string.to_string.m"
        MR_String mercury__string__to_string__V_29_29;

#line 113 "string.to_string.m"
        {
#line 113 "string.to_string.m"
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
#line 82 "string.to_string.m"
        {
#line 82 "string.to_string.m"
          MR_Word base;
#line 82 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
#line 82 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
#line 82 "string.to_string.m"
        }
#line 113 "string.to_string.m"
      }
#line 114 "string.to_string.m"
    else
#line 116 "string.to_string.m"
      {
#line 116 "string.to_string.m"
        MR_Char mercury__string__to_string__Char_13;
#line 114 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 114 "string.to_string.m"
        MR_Box mercury__string__to_string__conv1_Char_13;

#line 114 "string.to_string.m"
        {
#line 114 "string.to_string.m"
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
#line 114 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 114 "string.to_string.m"
          {
#line 114 "string.to_string.m"
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
#line 114 "string.to_string.m"
            mercury__string__to_string__succeeded = MR_TRUE;
#line 114 "string.to_string.m"
          }
#line 116 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 115 "string.to_string.m"
          {
#line 115 "string.to_string.m"
            MR_String mercury__string__to_string__V_31_31;

#line 115 "string.to_string.m"
            {
#line 115 "string.to_string.m"
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
#line 115 "string.to_string.m"
            {
#line 115 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 115 "string.to_string.m"
              return;
            }
#line 115 "string.to_string.m"
          }
#line 116 "string.to_string.m"
        else
#line 118 "string.to_string.m"
          {
#line 118 "string.to_string.m"
            MR_Integer mercury__string__to_string__Int_14;
#line 116 "string.to_string.m"
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 116 "string.to_string.m"
            MR_Box mercury__string__to_string__conv2_Int_14;

#line 116 "string.to_string.m"
            {
#line 116 "string.to_string.m"
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
#line 116 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 116 "string.to_string.m"
              {
#line 116 "string.to_string.m"
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
#line 116 "string.to_string.m"
                mercury__string__to_string__succeeded = MR_TRUE;
#line 116 "string.to_string.m"
              }
#line 118 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 117 "string.to_string.m"
              {
#line 117 "string.to_string.m"
                MR_String mercury__string__to_string__V_33_33;

#line 117 "string.to_string.m"
                {
#line 117 "string.to_string.m"
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
#line 117 "string.to_string.m"
                {
#line 117 "string.to_string.m"
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 117 "string.to_string.m"
                  return;
                }
#line 117 "string.to_string.m"
              }
#line 118 "string.to_string.m"
            else
#line 120 "string.to_string.m"
              {
#line 120 "string.to_string.m"
                MR_Float mercury__string__to_string__Float_15;
#line 118 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 118 "string.to_string.m"
                MR_Box mercury__string__to_string__conv3_Float_15;

#line 118 "string.to_string.m"
                {
#line 118 "string.to_string.m"
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
#line 118 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 118 "string.to_string.m"
                  {
#line 118 "string.to_string.m"
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
#line 118 "string.to_string.m"
                    mercury__string__to_string__succeeded = MR_TRUE;
#line 118 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 119 "string.to_string.m"
                  {
#line 119 "string.to_string.m"
                    MR_String mercury__string__to_string__V_35_35;

#line 119 "string.to_string.m"
                    {
#line 119 "string.to_string.m"
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
#line 119 "string.to_string.m"
                    {
#line 119 "string.to_string.m"
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 119 "string.to_string.m"
                      return;
                    }
#line 119 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
                else
#line 122 "string.to_string.m"
                  {
#line 122 "string.to_string.m"
                    MR_Box mercury__string__to_string__Bitmap_16;
#line 120 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 120 "string.to_string.m"
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

#line 120 "string.to_string.m"
                    {
#line 120 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
#line 120 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 120 "string.to_string.m"
                      {
#line 120 "string.to_string.m"
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
#line 120 "string.to_string.m"
                        mercury__string__to_string__succeeded = MR_TRUE;
#line 120 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 121 "string.to_string.m"
                      {
#line 121 "string.to_string.m"
                        MR_String mercury__string__to_string__V_37_37;
#line 121 "string.to_string.m"
                        MR_String mercury__string__to_string__V_39_39;

#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
#line 121 "string.to_string.m"
                        {
#line 121 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 121 "string.to_string.m"
                          return;
                        }
#line 121 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                    else
#line 124 "string.to_string.m"
                      {
#line 124 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeDesc_17;
#line 122 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 122 "string.to_string.m"
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

#line 122 "string.to_string.m"
                        {
#line 122 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
#line 122 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 122 "string.to_string.m"
                          {
#line 122 "string.to_string.m"
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
#line 122 "string.to_string.m"
                            mercury__string__to_string__succeeded = MR_TRUE;
#line 122 "string.to_string.m"
                          }
#line 124 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 123 "string.to_string.m"
                          {
#line 123 "string.to_string.m"
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 123 "string.to_string.m"
                            return;
                          }
#line 124 "string.to_string.m"
                        else
#line 126 "string.to_string.m"
                          {
#line 126 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
#line 124 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
#line 124 "string.to_string.m"
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

#line 124 "string.to_string.m"
                            {
#line 124 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
#line 124 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 124 "string.to_string.m"
                              {
#line 124 "string.to_string.m"
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
#line 124 "string.to_string.m"
                                mercury__string__to_string__succeeded = MR_TRUE;
#line 124 "string.to_string.m"
                              }
#line 126 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 125 "string.to_string.m"
                              {
#line 125 "string.to_string.m"
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 125 "string.to_string.m"
                                return;
                              }
#line 126 "string.to_string.m"
                            else
#line 128 "string.to_string.m"
                              {
#line 128 "string.to_string.m"
                                MR_Word mercury__string__to_string__C_Pointer_19;
#line 126 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 126 "string.to_string.m"
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

#line 126 "string.to_string.m"
                                {
#line 126 "string.to_string.m"
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
#line 126 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 126 "string.to_string.m"
                                  {
#line 126 "string.to_string.m"
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
#line 126 "string.to_string.m"
                                    mercury__string__to_string__succeeded = MR_TRUE;
#line 126 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 127 "string.to_string.m"
                                  {
#line 127 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_42_42;

#line 127 "string.to_string.m"
                                    {
#line 127 "string.to_string.m"
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
#line 127 "string.to_string.m"
                                    {
#line 127 "string.to_string.m"
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 127 "string.to_string.m"
                                      return;
                                    }
#line 127 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                                else
#line 154 "string.to_string.m"
                                  {
#line 154 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ElemType_22;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__TypeCtor_20;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ArgTypes_21;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_44_44;
#line 142 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_45_45;
#line 142 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_46_46;
#line 142 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_47_47;
#line 37 "type_desc.opt"
                                    MR_Box mercury__string__to_string__V_91_91;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 11135 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11165 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 143 "string.to_string.m"
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 143 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 143 "string.to_string.m"
                                      {
#line 143 "string.to_string.m"
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
#line 143 "string.to_string.m"
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
#line 143 "string.to_string.m"
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 142 "string.to_string.m"
                                          {
#line 144 "string.to_string.m"
                                            {
#line 144 "string.to_string.m"
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
#line 144 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
#line 142 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 142 "string.to_string.m"
                                              {
#line 145 "string.to_string.m"
                                                {
#line 145 "string.to_string.m"
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
#line 145 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
#line 142 "string.to_string.m"
                                              }
#line 142 "string.to_string.m"
                                          }
#line 143 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 150 "string.to_string.m"
                                      {
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
#line 150 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
#line 150 "string.to_string.m"
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
#line 53 "type_desc.opt"
                                        MR_Box mercury__string__to_string__Elem_23;
#line 152 "string.to_string.m"
                                        MR_Box mercury__string__to_string__conv8_Array_24;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{
#line 53 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 11243 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
#line 53 "type_desc.opt"
}
#line 151 "string.to_string.m"
                                        {
#line 151 "string.to_string.m"
                                          mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                        }
#line 11255 "string.to_string.c"
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 11257 "string.to_string.c"
                                        {
#line 11259 "string.to_string.c"
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11261 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
#line 11263 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
#line 11265 "string.to_string.c"
                                        }
#line 152 "string.to_string.m"
                                        {
#line 152 "string.to_string.m"
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
#line 152 "string.to_string.m"
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
#line 153 "string.to_string.m"
                                        {
#line 153 "string.to_string.m"
                                          mercury__string__to_string__array_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 153 "string.to_string.m"
                                          return;
                                        }
#line 150 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                    else
#line 164 "string.to_string.m"
                                      {
#line 164 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ElemType_72;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_49_49;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_50_50;
#line 155 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_51_51;
#line 155 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_52_52;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtor_60;
#line 155 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ArgTypes_61;
#line 37 "type_desc.opt"
                                        MR_Box mercury__string__to_string__V_92_92;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 11330 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11360 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 156 "string.to_string.m"
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 156 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 156 "string.to_string.m"
                                          {
#line 156 "string.to_string.m"
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
#line 156 "string.to_string.m"
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
#line 156 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 155 "string.to_string.m"
                                              {
#line 157 "string.to_string.m"
                                                {
#line 157 "string.to_string.m"
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
#line 157 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
#line 155 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 155 "string.to_string.m"
                                                  {
#line 158 "string.to_string.m"
                                                    {
#line 158 "string.to_string.m"
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
#line 158 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
#line 155 "string.to_string.m"
                                                  }
#line 155 "string.to_string.m"
                                              }
#line 156 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 160 "string.to_string.m"
                                          {
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
#line 160 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
#line 160 "string.to_string.m"
                                            MR_Box mercury__string__to_string__VersionArray_25;
#line 53 "type_desc.opt"
                                            MR_Box mercury__string__to_string__Elem_62;
#line 162 "string.to_string.m"
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{
#line 53 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 11438 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
#line 53 "type_desc.opt"
}
#line 161 "string.to_string.m"
                                            {
#line 161 "string.to_string.m"
                                              mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                            }
#line 11450 "string.to_string.c"
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 11452 "string.to_string.c"
                                            {
#line 11454 "string.to_string.c"
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11456 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
#line 11458 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
#line 11460 "string.to_string.c"
                                            }
#line 162 "string.to_string.m"
                                            {
#line 162 "string.to_string.m"
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
#line 162 "string.to_string.m"
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
#line 163 "string.to_string.m"
                                            {
#line 163 "string.to_string.m"
                                              mercury__string__to_string__version_array_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 163 "string.to_string.m"
                                              return;
                                            }
#line 160 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                        else
#line 177 "string.to_string.m"
                                          {
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_54_54;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_55_55;
#line 168 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_56_56;
#line 168 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_57_57;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtor_63;
#line 168 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ArgTypes_64;
#line 37 "type_desc.opt"
                                            MR_Box mercury__string__to_string__V_93_93;
#line 169 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ElemType_68;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 37 "type_desc.opt"
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
#line 11525 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 57 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
		{
#line 57 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11555 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
#line 57 "type_desc.opt"
}
#line 169 "string.to_string.m"
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
#line 169 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 169 "string.to_string.m"
                                              {
#line 169 "string.to_string.m"
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
#line 169 "string.to_string.m"
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
#line 169 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 168 "string.to_string.m"
                                                  {
#line 170 "string.to_string.m"
                                                    {
#line 170 "string.to_string.m"
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
#line 170 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
#line 168 "string.to_string.m"
                                                    if (mercury__string__to_string__succeeded)
#line 168 "string.to_string.m"
                                                      {
#line 171 "string.to_string.m"
                                                        {
#line 171 "string.to_string.m"
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
#line 171 "string.to_string.m"
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
#line 168 "string.to_string.m"
                                                      }
#line 168 "string.to_string.m"
                                                  }
#line 169 "string.to_string.m"
                                              }
#line 177 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 173 "string.to_string.m"
                                              {
#line 173 "string.to_string.m"
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
#line 173 "string.to_string.m"
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90;
#line 175 "string.to_string.m"
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

#line 174 "string.to_string.m"
                                                {
#line 174 "string.to_string.m"
                                                  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                                }
#line 11619 "string.to_string.c"
                                                mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
#line 175 "string.to_string.m"
                                                {
#line 175 "string.to_string.m"
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
#line 175 "string.to_string.m"
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
#line 176 "string.to_string.m"
                                                {
#line 176 "string.to_string.m"
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 176 "string.to_string.m"
                                                  return;
                                                }
#line 173 "string.to_string.m"
                                              }
#line 177 "string.to_string.m"
                                            else
#line 178 "string.to_string.m"
                                              {
#line 178 "string.to_string.m"
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 178 "string.to_string.m"
                                                return;
                                              }
#line 177 "string.to_string.m"
                                          }
#line 164 "string.to_string.m"
                                      }
#line 154 "string.to_string.m"
                                  }
#line 128 "string.to_string.m"
                              }
#line 126 "string.to_string.m"
                          }
#line 124 "string.to_string.m"
                      }
#line 122 "string.to_string.m"
                  }
#line 120 "string.to_string.m"
              }
#line 118 "string.to_string.m"
          }
#line 116 "string.to_string.m"
      }
#line 114 "string.to_string.m"
  }
#line 100 "string.to_string.m"
}

#line 92 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_3(
#line 92 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
#line 92 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 92 "string.to_string.m"
  MR_Box mercury__string__to_string__X_8,
#line 92 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 92 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 92 "string.to_string.m"
{
#line 94 "string.to_string.m"
  {
#line 94 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 94 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 94 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_10;
#line 94 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_13_13;
#line 11696 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 11698 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_13_13;

#line 11701 "string.to_string.c"
    {
#line 11703 "string.to_string.c"
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
#line 11706 "string.to_string.c"
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 96 "string.to_string.m"
      return;
    }
#line 94 "string.to_string.m"
  }
#line 92 "string.to_string.m"
}

#line 90 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_2(
#line 90 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
#line 90 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 90 "string.to_string.m"
  MR_Box mercury__string__to_string__X_8,
#line 90 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 90 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 90 "string.to_string.m"
{
#line 94 "string.to_string.m"
  {
#line 94 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 94 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 94 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_10;
#line 94 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_13_13;
#line 11747 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 11749 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_13_13;

#line 11752 "string.to_string.c"
    {
#line 11754 "string.to_string.c"
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
#line 11757 "string.to_string.c"
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 96 "string.to_string.m"
      return;
    }
#line 94 "string.to_string.m"
  }
#line 90 "string.to_string.m"
}

#line 89 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_1(
#line 89 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
#line 89 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 89 "string.to_string.m"
  MR_Box mercury__string__to_string__X_8,
#line 89 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 89 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 89 "string.to_string.m"
{
#line 94 "string.to_string.m"
  {
#line 94 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 94 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 94 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_10;
#line 94 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_13_13;
#line 11798 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 11800 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_13_13;

#line 11803 "string.to_string.c"
    {
#line 11805 "string.to_string.c"
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
#line 11808 "string.to_string.c"
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 96 "string.to_string.m"
      return;
    }
#line 94 "string.to_string.m"
  }
#line 89 "string.to_string.m"
}

#line 88 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_0(
#line 88 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
#line 88 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 88 "string.to_string.m"
  MR_Box mercury__string__to_string__X_8,
#line 88 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 88 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 88 "string.to_string.m"
{
#line 94 "string.to_string.m"
  {
#line 94 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 94 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 94 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_10;
#line 94 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_13_13;
#line 11849 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 11851 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_13_13;

#line 11854 "string.to_string.c"
    {
#line 11856 "string.to_string.c"
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
#line 11859 "string.to_string.c"
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 96 "string.to_string.m"
      return;
    }
#line 94 "string.to_string.m"
  }
#line 88 "string.to_string.m"
}

#line 80 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
#line 80 "string.to_string.m"
  MR_String mercury__string__to_string__String_4,
#line 80 "string.to_string.m"
  MR_Word mercury__string__to_string__RevStrings_5,
#line 80 "string.to_string.m"
  MR_Word * mercury__string__to_string__HeadVar__3_3)
#line 80 "string.to_string.m"
{
#line 82 "string.to_string.m"
  {
#line 82 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 82 "string.to_string.m"
    {
#line 82 "string.to_string.m"
      MR_Word base;
#line 82 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "string.to_string.m"
      *mercury__string__to_string__HeadVar__3_3 = base;
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__String_4));
#line 82 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__RevStrings_5));
#line 82 "string.to_string.m"
    }
#line 82 "string.to_string.m"
  }
#line 80 "string.to_string.m"
}

#line 38 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_3(
#line 38 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_12,
#line 38 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_5,
#line 38 "string.to_string.m"
  MR_Box mercury__string__to_string__X_7,
#line 38 "string.to_string.m"
  MR_String * mercury__string__to_string__String_8)
#line 38 "string.to_string.m"
{
#line 67 "string.to_string.m"
  {
#line 67 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__RevStrings_9;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__V_11_11;
#line 67 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_20;
#line 67 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_21_21;
#line 11941 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 11943 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_21_21;

#line 11946 "string.to_string.c"
    {
#line 11948 "string.to_string.c"
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
#line 11951 "string.to_string.c"
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
#line 11960 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 131 "list.opt"
    {
#line 131 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
#line 69 "string.to_string.m"
    {
#line 69 "string.to_string.m"
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
#line 67 "string.to_string.m"
  }
#line 38 "string.to_string.m"
}

#line 36 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_2(
#line 36 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_12,
#line 36 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_5,
#line 36 "string.to_string.m"
  MR_Box mercury__string__to_string__X_7,
#line 36 "string.to_string.m"
  MR_String * mercury__string__to_string__String_8)
#line 36 "string.to_string.m"
{
#line 67 "string.to_string.m"
  {
#line 67 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__RevStrings_9;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__V_11_11;
#line 67 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_20;
#line 67 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_21_21;
#line 12008 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12010 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_21_21;

#line 12013 "string.to_string.c"
    {
#line 12015 "string.to_string.c"
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12018 "string.to_string.c"
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
#line 12027 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 131 "list.opt"
    {
#line 131 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
#line 69 "string.to_string.m"
    {
#line 69 "string.to_string.m"
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
#line 67 "string.to_string.m"
  }
#line 36 "string.to_string.m"
}

#line 35 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_1(
#line 35 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_12,
#line 35 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_5,
#line 35 "string.to_string.m"
  MR_Box mercury__string__to_string__X_7,
#line 35 "string.to_string.m"
  MR_String * mercury__string__to_string__String_8)
#line 35 "string.to_string.m"
{
#line 67 "string.to_string.m"
  {
#line 67 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__RevStrings_9;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__V_11_11;
#line 67 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_20;
#line 67 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_21_21;
#line 12075 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12077 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_21_21;

#line 12080 "string.to_string.c"
    {
#line 12082 "string.to_string.c"
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12085 "string.to_string.c"
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
#line 12094 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 131 "list.opt"
    {
#line 131 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
#line 69 "string.to_string.m"
    {
#line 69 "string.to_string.m"
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
#line 67 "string.to_string.m"
  }
#line 35 "string.to_string.m"
}

#line 34 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_0(
#line 34 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_12,
#line 34 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_5,
#line 34 "string.to_string.m"
  MR_Box mercury__string__to_string__X_7,
#line 34 "string.to_string.m"
  MR_String * mercury__string__to_string__String_8)
#line 34 "string.to_string.m"
{
#line 67 "string.to_string.m"
  {
#line 67 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__RevStrings_9;
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 67 "string.to_string.m"
    MR_Word mercury__string__to_string__V_11_11;
#line 67 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_20;
#line 67 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_21_21;
#line 12142 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12144 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_21_21;

#line 12147 "string.to_string.c"
    {
#line 12149 "string.to_string.c"
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12152 "string.to_string.c"
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
#line 95 "string.to_string.m"
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
#line 96 "string.to_string.m"
    {
#line 96 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
#line 12161 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 131 "list.opt"
    {
#line 131 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
#line 69 "string.to_string.m"
    {
#line 69 "string.to_string.m"
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
#line 67 "string.to_string.m"
  }
#line 34 "string.to_string.m"
}

#line 31 "string.to_string.m"
MR_String MR_CALL 
mercury__string__to_string__string_ops_impl_2_f_0(
#line 31 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_8,
#line 31 "string.to_string.m"
  MR_Box mercury__string__to_string__Univ_5)
#line 31 "string.to_string.m"
{
#line 64 "string.to_string.m"
  {
#line 64 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 64 "string.to_string.m"
    MR_String mercury__string__to_string__String_6;

#line 65 "string.to_string.m"
    {
#line 65 "string.to_string.m"
      mercury__string__to_string__string_ops_noncanon_impl_4_p_1(mercury__string__to_string__TypeInfo_for_T_8, (MR_Integer) 1, mercury__string__to_string__Univ_5, &mercury__string__to_string__String_6);
    }
#line 64 "string.to_string.m"
    return mercury__string__to_string__String_6;
#line 64 "string.to_string.m"
  }
#line 31 "string.to_string.m"
}

#line 29 "string.to_string.m"
MR_String MR_CALL 
mercury__string__to_string__string_impl_1_f_0(
#line 29 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_7,
#line 29 "string.to_string.m"
  MR_Box mercury__string__to_string__Univ_3)
#line 29 "string.to_string.m"
{
#line 60 "string.to_string.m"
  {
#line 60 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 60 "string.to_string.m"
    MR_String mercury__string__to_string__String_4;

#line 35 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 61 "string.to_string.m"
    {
#line 61 "string.to_string.m"
      mercury__string__to_string__string_ops_noncanon_impl_4_p_1(mercury__string__to_string__TypeInfo_for_T_7, (MR_Integer) 1, mercury__string__to_string__Univ_3, &mercury__string__to_string__String_4);
    }
#line 60 "string.to_string.m"
    return mercury__string__to_string__String_4;
#line 60 "string.to_string.m"
  }
#line 29 "string.to_string.m"
}

void mercury__string__to_string__init(void)
{
}

void mercury__string__to_string__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__to_string__string__to_string__type_ctor_info_revstrings_0);
}

void mercury__string__to_string__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.to_string. */
