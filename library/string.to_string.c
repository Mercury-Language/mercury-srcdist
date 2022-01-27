/*
** Automatically generated from `string.to_string.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__string__to_string__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__string__to_string__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__string__to_string__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__string__to_string__Hi_9_9);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 193 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

#line 188 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

#line 184 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

#line 504 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
#line 504 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T1_6,
#line 504 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T2_7,
#line 504 "string.to_string.m"
  MR_Box mercury__string__to_string__X_3,
#line 504 "string.to_string.m"
  MR_Box * mercury__string__to_string__Y_4);

#line 496 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
#line 496 "string.to_string.m"
  MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_4,
#line 496 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_8,
#line 496 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_9);

#line 471 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
#line 471 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeCtorDesc_4,
#line 471 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_12,
#line 471 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_13);

#line 465 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
#line 465 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeDesc_4,
#line 465 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_6,
#line 465 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_7);

#line 457 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
#line 457 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 457 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 457 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 457 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 457 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 455 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
#line 455 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 455 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 455 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 455 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 455 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 454 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
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

#line 453 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
#line 453 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 453 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 453 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 453 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 453 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 443 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
#line 443 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 443 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 443 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 443 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 443 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 441 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
#line 441 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 441 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 441 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 441 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 441 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 440 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
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

#line 439 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
#line 439 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 439 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 439 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 439 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 439 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 418 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
#line 418 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 418 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 418 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 418 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 417 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
#line 417 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 417 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 417 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 417 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 416 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
#line 416 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 416 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 416 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 416 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 415 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 415 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 415 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

#line 405 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
#line 405 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 405 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 405 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 405 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

#line 403 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
#line 403 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 403 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 403 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 403 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

#line 402 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 402 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 402 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

#line 401 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
#line 401 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 401 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 401 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 401 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

#line 376 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
#line 376 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 376 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 376 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 376 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

#line 374 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
#line 374 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 374 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 374 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 374 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

#line 373 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 373 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 373 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

#line 372 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
#line 372 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 372 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 372 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 372 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

#line 364 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__adjust_priority_3_p_0(
#line 364 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_1,
#line 364 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__2_2,
#line 364 "string.to_string.m"
  MR_Integer * mercury__string__to_string__HeadVar__3_3);

#line 354 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
#line 354 "string.to_string.m"
  MR_String mercury__string__to_string__String_6,
#line 354 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_7,
#line 354 "string.to_string.m"
  MR_Integer mercury__string__to_string__OpPriority_8,
#line 354 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_10,
#line 354 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_11);

#line 325 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
#line 325 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 325 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 325 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 325 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 325 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 325 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

#line 323 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
#line 323 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 323 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 323 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 323 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 323 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 323 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

#line 321 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
#line 321 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 321 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 321 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 321 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 321 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 321 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

#line 319 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
#line 319 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 319 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 319 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 319 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 319 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 319 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

#line 206 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
#line 206 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 206 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 206 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 206 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 206 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 206 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

#line 204 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
#line 204 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 204 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 204 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 204 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 204 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 204 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

#line 202 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
#line 202 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 202 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 202 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 202 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 202 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 202 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

#line 200 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
#line 200 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 200 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 200 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 200 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 200 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 200 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

#line 83 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
#line 83 "string.to_string.m"
  MR_String mercury__string__to_string__String_4,
#line 83 "string.to_string.m"
  MR_Word mercury__string__to_string__RevStrings_5,
#line 83 "string.to_string.m"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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



#line 987 "string.to_string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 995 "string.to_string.c"
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

#line 1012 "string.to_string.c"
static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
#line 1015 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_1,
#line 1017 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_2)
#line 1019 "string.to_string.c"
{
#line 1021 "string.to_string.c"
  {
#line 1023 "string.to_string.c"
    MR_bool mercury__string__to_string__succeeded;

#line 1026 "string.to_string.c"
    {
#line 1028 "string.to_string.c"
      mercury__string__to_string__succeeded = mercury__string__to_string____Unify____revstrings_0_0(((MR_Word) mercury__string__to_string__wrapper_arg_1), ((MR_Word) mercury__string__to_string__wrapper_arg_2));
    }
#line 1031 "string.to_string.c"
    return mercury__string__to_string__succeeded;
#line 1033 "string.to_string.c"
  }
#line 1035 "string.to_string.c"
}

#line 1038 "string.to_string.c"
static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
#line 1041 "string.to_string.c"
  MR_Box * mercury__string__to_string__wrapper_arg_1,
#line 1043 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_2,
#line 1045 "string.to_string.c"
  MR_Box mercury__string__to_string__wrapper_arg_3)
#line 1047 "string.to_string.c"
{
#line 1049 "string.to_string.c"
  {
#line 1051 "string.to_string.c"
    MR_Word mercury__string__to_string__conv0_HeadVar__1_1;

#line 1054 "string.to_string.c"
    {
#line 1056 "string.to_string.c"
      mercury__string__to_string____Compare____revstrings_0_0(&mercury__string__to_string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__to_string__wrapper_arg_2), ((MR_Word) mercury__string__to_string__wrapper_arg_3));
    }
#line 1059 "string.to_string.c"
    *mercury__string__to_string__wrapper_arg_1 = ((MR_Box) (mercury__string__to_string__conv0_HeadVar__1_1));
#line 1061 "string.to_string.c"
  }
#line 1063 "string.to_string.c"
}

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__string__to_string__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__string__to_string__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__string__to_string__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__string__to_string__Hi_9_9)
#line 92 "version_array.opt"
{
#line 264 "version_array.opt"
  while (MR_TRUE)
#line 264 "version_array.opt"
    {
#line 264 "version_array.opt"
      /* tailcall optimized into a loop */
#line 264 "version_array.opt"
      {
#line 264 "version_array.opt"
        MR_bool mercury__string__to_string__succeeded = ((MR_Integer) 0 <= mercury__string__to_string__Hi_9_9);
#line 264 "version_array.opt"
        MR_Word mercury__string__to_string__HeadVar__5_5_10;

#line 264 "version_array.opt"
        if (mercury__string__to_string__succeeded)
#line 259 "version_array.opt"
          {
#line 259 "version_array.opt"
            MR_Word mercury__string__to_string__V_11_12;
#line 259 "version_array.opt"
            MR_Integer mercury__string__to_string__V_13_13;
#line 259 "version_array.opt"
            MR_Box mercury__string__to_string__V_12_14;

#line 261 "version_array.opt"
            {
#line 261 "version_array.opt"
              mercury__string__to_string__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__string__to_string__TypeInfo_for_T1_1_16, mercury__string__to_string__VA_7_7, mercury__string__to_string__Hi_9_9);
            }
#line 44 "list.opt"
            {
#line 44 "list.opt"
              mercury__string__to_string__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__V_11_12, 0) = mercury__string__to_string__V_12_14;
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__V_11_12, 1) = ((MR_Box) (mercury__string__to_string__Acc_8_8));
#line 44 "list.opt"
            }
#line 262 "version_array.opt"
            mercury__string__to_string__V_13_13 = (mercury__string__to_string__Hi_9_9 - (MR_Integer) 1);
#line 259 "version_array.opt"
            /* direct tailcall eliminated */
#line 259 "version_array.opt"
            {
#line 259 "version_array.opt"
              MR_Word mercury__string__to_string__Acc_8__tmp_copy_8 = mercury__string__to_string__V_11_12;
#line 259 "version_array.opt"
              MR_Integer mercury__string__to_string__Hi_9__tmp_copy_9 = mercury__string__to_string__V_13_13;

#line 259 "version_array.opt"
              mercury__string__to_string__Hi_9_9 = mercury__string__to_string__Hi_9__tmp_copy_9;
#line 259 "version_array.opt"
              mercury__string__to_string__Acc_8_8 = mercury__string__to_string__Acc_8__tmp_copy_8;
#line 259 "version_array.opt"
            }
#line 259 "version_array.opt"
            continue;
#line 259 "version_array.opt"
          }
#line 264 "version_array.opt"
        else
#line 265 "version_array.opt"
          mercury__string__to_string__HeadVar__5_5_10 = mercury__string__to_string__Acc_8_8;
#line 264 "version_array.opt"
        return mercury__string__to_string__HeadVar__5_5_10;
#line 264 "version_array.opt"
      }
#line 264 "version_array.opt"
      break;
#line 264 "version_array.opt"
    }
#line 92 "version_array.opt"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__string__to_string__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 193 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 193 "string.to_string.m"
{
#line 196 "string.to_string.m"
  {
#line 196 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 196 "string.to_string.m"
  }
#line 193 "string.to_string.m"
}

#line 188 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 188 "string.to_string.m"
{
#line 191 "string.to_string.m"
  {
#line 191 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 191 "string.to_string.m"
  }
#line 188 "string.to_string.m"
}

#line 184 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 184 "string.to_string.m"
{
#line 186 "string.to_string.m"
  {
#line 186 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 186 "string.to_string.m"
  }
#line 184 "string.to_string.m"
}

#line 79 "string.to_string.m"
void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0(
#line 79 "string.to_string.m"
  MR_Word * mercury__string__to_string__HeadVar__1_1,
#line 79 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__2_2,
#line 79 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3)
#line 79 "string.to_string.m"
{
#line 79 "string.to_string.m"
  {
#line 79 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 79 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_6_6 = (MR_Word) &mercury__string__to_string_scalar_common_1[1];
#line 79 "string.to_string.m"
    MR_Word mercury__string__to_string__Cast_HeadVar1_4 = mercury__string__to_string__HeadVar__2_2;
#line 79 "string.to_string.m"
    MR_Word mercury__string__to_string__Cast_HeadVar2_5 = mercury__string__to_string__HeadVar__3_3;

#line 79 "string.to_string.m"
    {
#line 79 "string.to_string.m"
      mercury__builtin__compare_3_p_0(mercury__string__to_string__TypeInfo_6_6, mercury__string__to_string__HeadVar__1_1, ((MR_Box) (mercury__string__to_string__Cast_HeadVar1_4)), ((MR_Box) (mercury__string__to_string__Cast_HeadVar2_5)));
#line 79 "string.to_string.m"
      return;
    }
#line 79 "string.to_string.m"
  }
#line 79 "string.to_string.m"
}

#line 79 "string.to_string.m"
MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0(
#line 79 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__1_1,
#line 79 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__2_2)
#line 79 "string.to_string.m"
{
#line 79 "string.to_string.m"
  {
#line 79 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 79 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_5_5 = (MR_Word) &mercury__string__to_string_scalar_common_1[1];
#line 79 "string.to_string.m"
    MR_Word mercury__string__to_string__Cast_HeadVar1_3 = mercury__string__to_string__HeadVar__1_1;
#line 79 "string.to_string.m"
    MR_Word mercury__string__to_string__Cast_HeadVar2_4 = mercury__string__to_string__HeadVar__2_2;

#line 79 "string.to_string.m"
    {
#line 79 "string.to_string.m"
      return mercury__string__to_string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__to_string__TypeInfo_5_5, ((MR_Box) (mercury__string__to_string__Cast_HeadVar1_3)), ((MR_Box) (mercury__string__to_string__Cast_HeadVar2_4)));
    }
#line 79 "string.to_string.m"
    return mercury__string__to_string__succeeded;
#line 79 "string.to_string.m"
  }
#line 79 "string.to_string.m"
}

#line 504 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
#line 504 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T1_6,
#line 504 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T2_7,
#line 504 "string.to_string.m"
  MR_Box mercury__string__to_string__X_3,
#line 504 "string.to_string.m"
  MR_Box * mercury__string__to_string__Y_4)
#line 504 "string.to_string.m"
{
#line 506 "string.to_string.m"
  {
#line 506 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 506 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_5;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__string__to_string__TypeInfo_for_T1_6, mercury__string__to_string__X_3, &mercury__string__to_string__V_5_5);
    }
#line 507 "string.to_string.m"
    {
#line 507 "string.to_string.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__string__to_string__TypeInfo_for_T2_7, mercury__string__to_string__V_5_5, mercury__string__to_string__Y_4);
#line 507 "string.to_string.m"
      return;
    }
#line 506 "string.to_string.m"
  }
#line 504 "string.to_string.m"
}

#line 496 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
#line 496 "string.to_string.m"
  MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_4,
#line 496 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_8,
#line 496 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_9)
#line 496 "string.to_string.m"
{
#line 499 "string.to_string.m"
  {
#line 499 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 499 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_6 = (MR_Word) mercury__string__to_string__PrivateBuiltinTypeInfo_4;
#line 499 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeDesc_7;
#line 499 "string.to_string.m"
    MR_String mercury__string__to_string__V_15_15;
#line 499 "string.to_string.m"
    MR_String mercury__string__to_string__V_17_17;

#line 501 "string.to_string.m"
    {
#line 501 "string.to_string.m"
      mercury__type_desc__type_info_to_type_desc_2_p_0(mercury__string__to_string__TypeInfo_6, &mercury__string__to_string__TypeDesc_7);
    }
#line 469 "string.to_string.m"
    {
#line 469 "string.to_string.m"
      mercury__string__to_string__V_17_17 = mercury__type_desc__type_name_1_f_0(mercury__string__to_string__TypeDesc_7);
    }
#line 55 "term_io.opt"
    {
#line 55 "term_io.opt"
      mercury__string__to_string__V_15_15 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__V_17_17, (MR_Integer) 1);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_9 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_15_15));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_8));
#line 85 "string.to_string.m"
    }
#line 499 "string.to_string.m"
  }
#line 496 "string.to_string.m"
}

#line 471 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
#line 471 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeCtorDesc_4,
#line 471 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_12,
#line 471 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_13)
#line 471 "string.to_string.m"
{
#line 474 "string.to_string.m"
  {
#line 474 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 474 "string.to_string.m"
    MR_String mercury__string__to_string__ModuleName_6;
#line 474 "string.to_string.m"
    MR_String mercury__string__to_string__Name0_7;
#line 474 "string.to_string.m"
    MR_Integer mercury__string__to_string__Arity0_8;
#line 474 "string.to_string.m"
    MR_String mercury__string__to_string__Name_9;
#line 474 "string.to_string.m"
    MR_Integer mercury__string__to_string__Arity_10;
#line 474 "string.to_string.m"
    MR_String mercury__string__to_string__String_11;

#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__string__to_string__TypeCtorDesc_4 ;
		{
#line 144 "type_desc.opt"
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
#line 1446 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__ModuleName_6  = TypeCtorModuleName;
	 mercury__string__to_string__Name0_7  = TypeCtorName;
	 mercury__string__to_string__Arity0_8  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 55 "term_io.opt"
    {
#line 55 "term_io.opt"
      mercury__string__to_string__Name_9 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Name0_7, (MR_Integer) 1);
    }
#line 479 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__ModuleName_6, (MR_String) "builtin") == 0);
#line 479 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 480 "string.to_string.m"
      mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Name_9, (MR_String) "func") == 0);
#line 486 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 485 "string.to_string.m"
      {
#line 485 "string.to_string.m"
        mercury__string__to_string__Arity_10 = (mercury__string__to_string__Arity0_8 - (MR_Integer) 1);
#line 485 "string.to_string.m"
      }
#line 486 "string.to_string.m"
    else
#line 487 "string.to_string.m"
      mercury__string__to_string__Arity_10 = mercury__string__to_string__Arity0_8;
#line 489 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__ModuleName_6, (MR_String) "builtin") == 0);
#line 491 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 490 "string.to_string.m"
      {
#line 490 "string.to_string.m"
        MR_String mercury__string__to_string__V_30_30;
#line 490 "string.to_string.m"
        MR_Word mercury__string__to_string__V_36_36 = (MR_Word) &mercury__string__to_string_scalar_common_5[0];
#line 490 "string.to_string.m"
        MR_String mercury__string__to_string__V_38_38;
#line 490 "string.to_string.m"
        MR_String mercury__string__to_string__V_39_39;
#line 490 "string.to_string.m"
        MR_Word mercury__string__to_string__MaybeWidth_7_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "string.to_string.m"
        MR_Word mercury__string__to_string__MaybePrec_8_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "string.to_string.m"
        MR_Word mercury__string__to_string__MaybeWidth_7_89;
#line 490 "string.to_string.m"
        MR_Word mercury__string__to_string__MaybePrec_8_90;

#line 38 "string.format.opt"
        {
#line 38 "string.format.opt"
          mercury__string__format__format_signed_int_component_5_p_0(mercury__string__to_string__V_36_36, mercury__string__to_string__MaybeWidth_7_78, mercury__string__to_string__MaybePrec_8_79, mercury__string__to_string__Arity_10, &mercury__string__to_string__V_30_30);
        }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) "/", mercury__string__to_string__V_30_30, &mercury__string__to_string__V_38_38);
        }
#line 20 "string.format.opt"
        mercury__string__to_string__MaybeWidth_7_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.format.opt"
        mercury__string__to_string__MaybePrec_8_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "string.format.opt"
        {
#line 22 "string.format.opt"
          mercury__string__format__format_string_component_5_p_0(mercury__string__to_string__V_36_36, mercury__string__to_string__MaybeWidth_7_89, mercury__string__to_string__MaybePrec_8_90, mercury__string__to_string__Name_9, &mercury__string__to_string__V_39_39);
        }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2(mercury__string__to_string__V_39_39, mercury__string__to_string__V_38_38, &mercury__string__to_string__String_11);
        }
#line 490 "string.to_string.m"
      }
#line 491 "string.to_string.m"
    else
#line 492 "string.to_string.m"
      {
#line 492 "string.to_string.m"
        MR_String mercury__string__to_string__V_46_46;
#line 492 "string.to_string.m"
        MR_Word mercury__string__to_string__V_52_52 = (MR_Word) &mercury__string__to_string_scalar_common_5[0];
#line 492 "string.to_string.m"
        MR_String mercury__string__to_string__V_54_54;
#line 492 "string.to_string.m"
        MR_String mercury__string__to_string__V_55_55;
#line 492 "string.to_string.m"
        MR_String mercury__string__to_string__V_62_62;
#line 492 "string.to_string.m"
        MR_String mercury__string__to_string__V_64_64;
#line 492 "string.to_string.m"
        MR_String mercury__string__to_string__V_65_65;

#line 492 "string.to_string.m"
        {
#line 492 "string.to_string.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__string__to_string__V_52_52, mercury__string__to_string__Arity_10, &mercury__string__to_string__V_46_46);
        }
#line 492 "string.to_string.m"
        {
#line 492 "string.to_string.m"
          mercury__string__to_string__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "/", mercury__string__to_string__V_46_46);
        }
#line 492 "string.to_string.m"
        {
#line 492 "string.to_string.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__string__to_string__V_52_52, mercury__string__to_string__Name_9, &mercury__string__to_string__V_55_55);
        }
#line 492 "string.to_string.m"
        {
#line 492 "string.to_string.m"
          mercury__string__to_string__V_62_62 = mercury__string__f_43_43_2_f_0(mercury__string__to_string__V_55_55, mercury__string__to_string__V_54_54);
        }
#line 492 "string.to_string.m"
        {
#line 492 "string.to_string.m"
          mercury__string__to_string__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) ".", mercury__string__to_string__V_62_62);
        }
#line 492 "string.to_string.m"
        {
#line 492 "string.to_string.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__string__to_string__V_52_52, mercury__string__to_string__ModuleName_6, &mercury__string__to_string__V_65_65);
        }
#line 492 "string.to_string.m"
        {
#line 492 "string.to_string.m"
          mercury__string__to_string__String_11 = mercury__string__f_43_43_2_f_0(mercury__string__to_string__V_65_65, mercury__string__to_string__V_64_64);
        }
#line 492 "string.to_string.m"
      }
#line 494 "string.to_string.m"
    {
#line 494 "string.to_string.m"
      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__String_11, mercury__string__to_string__STATE_VARIABLE_Rs_0_12, mercury__string__to_string__STATE_VARIABLE_Rs_13);
#line 494 "string.to_string.m"
      return;
    }
#line 474 "string.to_string.m"
  }
#line 471 "string.to_string.m"
}

#line 465 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
#line 465 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeDesc_4,
#line 465 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_6,
#line 465 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_7)
#line 465 "string.to_string.m"
{
#line 468 "string.to_string.m"
  {
#line 468 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 468 "string.to_string.m"
    MR_String mercury__string__to_string__V_8_8;
#line 468 "string.to_string.m"
    MR_String mercury__string__to_string__V_10_10;

#line 469 "string.to_string.m"
    {
#line 469 "string.to_string.m"
      mercury__string__to_string__V_10_10 = mercury__type_desc__type_name_1_f_0(mercury__string__to_string__TypeDesc_4);
    }
#line 55 "term_io.opt"
    {
#line 55 "term_io.opt"
      mercury__string__to_string__V_8_8 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__V_10_10, (MR_Integer) 1);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_7 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_8_8));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_6));
#line 85 "string.to_string.m"
    }
#line 468 "string.to_string.m"
  }
#line 465 "string.to_string.m"
}

#line 457 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
#line 457 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 457 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 457 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 457 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 457 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 457 "string.to_string.m"
{
#line 459 "string.to_string.m"
  {
#line 459 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_29;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_8_40;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_4_44;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_52;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_53_53;
#line 162 "version_array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
#line 1687 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 1689 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_53_53;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 85 "string.to_string.m"
    }
#line 180 "version_array.opt"
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1717 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
#line 162 "version_array.opt"
}
#line 166 "version_array.opt"
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
#line 196 "version_array.opt"
    {
#line 196 "version_array.opt"
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
#line 1731 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1733 "string.to_string.c"
    {
#line 1735 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1737 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 1739 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 1741 "string.to_string.c"
    }
#line 1743 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 1745 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
#line 1747 "string.to_string.c"
    {
#line 1749 "string.to_string.c"
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
#line 1752 "string.to_string.c"
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 85 "string.to_string.m"
    }
#line 459 "string.to_string.m"
  }
#line 457 "string.to_string.m"
}

#line 455 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
#line 455 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 455 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 455 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 455 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 455 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 455 "string.to_string.m"
{
#line 459 "string.to_string.m"
  {
#line 459 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_29;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_8_40;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_4_44;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_52;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_53_53;
#line 162 "version_array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
#line 1823 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 1825 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_53_53;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 85 "string.to_string.m"
    }
#line 180 "version_array.opt"
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1853 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
#line 162 "version_array.opt"
}
#line 166 "version_array.opt"
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
#line 196 "version_array.opt"
    {
#line 196 "version_array.opt"
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
#line 1867 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1869 "string.to_string.c"
    {
#line 1871 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1873 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 1875 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 1877 "string.to_string.c"
    }
#line 1879 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 1881 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
#line 1883 "string.to_string.c"
    {
#line 1885 "string.to_string.c"
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
#line 1888 "string.to_string.c"
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 85 "string.to_string.m"
    }
#line 459 "string.to_string.m"
  }
#line 455 "string.to_string.m"
}

#line 454 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
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
#line 459 "string.to_string.m"
  {
#line 459 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_29;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_8_40;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_4_44;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_52;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_53_53;
#line 162 "version_array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
#line 1959 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 1961 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_53_53;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 85 "string.to_string.m"
    }
#line 180 "version_array.opt"
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1989 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
#line 162 "version_array.opt"
}
#line 166 "version_array.opt"
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
#line 196 "version_array.opt"
    {
#line 196 "version_array.opt"
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
#line 2003 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2005 "string.to_string.c"
    {
#line 2007 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2009 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2011 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2013 "string.to_string.c"
    }
#line 2015 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2017 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2019 "string.to_string.c"
    {
#line 2021 "string.to_string.c"
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2024 "string.to_string.c"
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 85 "string.to_string.m"
    }
#line 459 "string.to_string.m"
  }
#line 454 "string.to_string.m"
}

#line 453 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
#line 453 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 453 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 453 "string.to_string.m"
  MR_Box mercury__string__to_string__Array_8,
#line 453 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 453 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 453 "string.to_string.m"
{
#line 459 "string.to_string.m"
  {
#line 459 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 459 "string.to_string.m"
    MR_Word mercury__string__to_string__V_5_29;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_8_40;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_4_44;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_52;
#line 459 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_53_53;
#line 162 "version_array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
#line 2095 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2097 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_53_53;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 85 "string.to_string.m"
    }
#line 180 "version_array.opt"
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 2125 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
#line 162 "version_array.opt"
}
#line 166 "version_array.opt"
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
#line 196 "version_array.opt"
    {
#line 196 "version_array.opt"
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
#line 2139 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2141 "string.to_string.c"
    {
#line 2143 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2145 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2147 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2149 "string.to_string.c"
    }
#line 2151 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2153 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2155 "string.to_string.c"
    {
#line 2157 "string.to_string.c"
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2160 "string.to_string.c"
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 85 "string.to_string.m"
    }
#line 459 "string.to_string.m"
  }
#line 453 "string.to_string.m"
}

#line 443 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
#line 443 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 443 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 443 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 443 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 443 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 443 "string.to_string.m"
{
#line 445 "string.to_string.m"
  {
#line 445 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__Low_5_28;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__High_6_29;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_39;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_40_40;
#line 245 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
#line 253 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
#line 2231 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2233 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_40_40;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 85 "string.to_string.m"
    }
#line 245 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 245 "array.opt"

    /* Array not used */
    Min = 0;

#line 2260 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__Low_5_28  = Min;
#line 245 "array.opt"
}
#line 253 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 253 "array.opt"

    Max = Array->size - 1;

#line 2280 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__High_6_29  = Max;
#line 253 "array.opt"
}
#line 334 "array.opt"
    {
#line 334 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__Low_5_28, mercury__string__to_string__High_6_29, &mercury__string__to_string__V_15_15);
    }
#line 2292 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2294 "string.to_string.c"
    {
#line 2296 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2298 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2300 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2302 "string.to_string.c"
    }
#line 2304 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2306 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2308 "string.to_string.c"
    {
#line 2310 "string.to_string.c"
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2313 "string.to_string.c"
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 85 "string.to_string.m"
    }
#line 445 "string.to_string.m"
  }
#line 443 "string.to_string.m"
}

#line 441 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
#line 441 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 441 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 441 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 441 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 441 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 441 "string.to_string.m"
{
#line 445 "string.to_string.m"
  {
#line 445 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__Low_5_28;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__High_6_29;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_39;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_40_40;
#line 245 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
#line 253 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
#line 2384 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2386 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_40_40;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 85 "string.to_string.m"
    }
#line 245 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 245 "array.opt"

    /* Array not used */
    Min = 0;

#line 2413 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__Low_5_28  = Min;
#line 245 "array.opt"
}
#line 253 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 253 "array.opt"

    Max = Array->size - 1;

#line 2433 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__High_6_29  = Max;
#line 253 "array.opt"
}
#line 334 "array.opt"
    {
#line 334 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__Low_5_28, mercury__string__to_string__High_6_29, &mercury__string__to_string__V_15_15);
    }
#line 2445 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2447 "string.to_string.c"
    {
#line 2449 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2451 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2453 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2455 "string.to_string.c"
    }
#line 2457 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2459 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2461 "string.to_string.c"
    {
#line 2463 "string.to_string.c"
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2466 "string.to_string.c"
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 85 "string.to_string.m"
    }
#line 445 "string.to_string.m"
  }
#line 441 "string.to_string.m"
}

#line 440 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
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
#line 445 "string.to_string.m"
  {
#line 445 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__Low_5_28;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__High_6_29;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_39;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_40_40;
#line 245 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
#line 253 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
#line 2537 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2539 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_40_40;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 85 "string.to_string.m"
    }
#line 245 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 245 "array.opt"

    /* Array not used */
    Min = 0;

#line 2566 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__Low_5_28  = Min;
#line 245 "array.opt"
}
#line 253 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 253 "array.opt"

    Max = Array->size - 1;

#line 2586 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__High_6_29  = Max;
#line 253 "array.opt"
}
#line 334 "array.opt"
    {
#line 334 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__Low_5_28, mercury__string__to_string__High_6_29, &mercury__string__to_string__V_15_15);
    }
#line 2598 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2600 "string.to_string.c"
    {
#line 2602 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2604 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2606 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2608 "string.to_string.c"
    }
#line 2610 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2612 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2614 "string.to_string.c"
    {
#line 2616 "string.to_string.c"
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2619 "string.to_string.c"
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 85 "string.to_string.m"
    }
#line 445 "string.to_string.m"
  }
#line 440 "string.to_string.m"
}

#line 439 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
#line 439 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
#line 439 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 439 "string.to_string.m"
  MR_ArrayPtr mercury__string__to_string__Array_8,
#line 439 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 439 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 439 "string.to_string.m"
{
#line 445 "string.to_string.m"
  {
#line 445 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_21_21;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__V_15_15;
#line 445 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__Low_5_28;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__High_6_29;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_39;
#line 445 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_40_40;
#line 245 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
#line 253 "array.opt"
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
#line 2690 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 2692 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_40_40;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
#line 85 "string.to_string.m"
    }
#line 245 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 245 "array.opt"

    /* Array not used */
    Min = 0;

#line 2719 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__Low_5_28  = Min;
#line 245 "array.opt"
}
#line 253 "array.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{
#line 253 "array.opt"

    Max = Array->size - 1;

#line 2739 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__High_6_29  = Max;
#line 253 "array.opt"
}
#line 334 "array.opt"
    {
#line 334 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__Low_5_28, mercury__string__to_string__High_6_29, &mercury__string__to_string__V_15_15);
    }
#line 2751 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2753 "string.to_string.c"
    {
#line 2755 "string.to_string.c"
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2757 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
#line 2759 "string.to_string.c"
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
#line 2761 "string.to_string.c"
    }
#line 2763 "string.to_string.c"
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 2765 "string.to_string.c"
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2767 "string.to_string.c"
    {
#line 2769 "string.to_string.c"
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
#line 2772 "string.to_string.c"
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
#line 85 "string.to_string.m"
    }
#line 445 "string.to_string.m"
  }
#line 439 "string.to_string.m"
}

#line 418 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
#line 418 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 418 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 418 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 418 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 418 "string.to_string.m"
{
#line 420 "string.to_string.m"
  {
#line 420 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 420 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
#line 420 "string.to_string.m"
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

#line 422 "string.to_string.m"
    {
#line 422 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 422 "string.to_string.m"
      return;
    }
#line 420 "string.to_string.m"
  }
#line 418 "string.to_string.m"
}

#line 417 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
#line 417 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 417 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 417 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 417 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 417 "string.to_string.m"
{
#line 420 "string.to_string.m"
  {
#line 420 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 420 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
#line 420 "string.to_string.m"
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

#line 422 "string.to_string.m"
    {
#line 422 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 422 "string.to_string.m"
      return;
    }
#line 420 "string.to_string.m"
  }
#line 417 "string.to_string.m"
}

#line 416 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
#line 416 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 416 "string.to_string.m"
  MR_Word mercury__string__to_string__X_8,
#line 416 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 416 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 416 "string.to_string.m"
{
#line 420 "string.to_string.m"
  {
#line 420 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 420 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
#line 420 "string.to_string.m"
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

#line 422 "string.to_string.m"
    {
#line 422 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 422 "string.to_string.m"
      return;
    }
#line 420 "string.to_string.m"
  }
#line 416 "string.to_string.m"
}

#line 415 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
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
#line 420 "string.to_string.m"
  {
#line 420 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 420 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
#line 420 "string.to_string.m"
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

#line 422 "string.to_string.m"
    {
#line 422 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 422 "string.to_string.m"
      return;
    }
#line 420 "string.to_string.m"
  }
#line 415 "string.to_string.m"
}

#line 405 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
#line 405 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 405 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 405 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 405 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
#line 405 "string.to_string.m"
{
#line 407 "string.to_string.m"
  while (MR_TRUE)
#line 407 "string.to_string.m"
    {
#line 407 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 407 "string.to_string.m"
      {
#line 407 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;

#line 407 "string.to_string.m"
        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
#line 407 "string.to_string.m"
        else
#line 408 "string.to_string.m"
          {
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 85 "string.to_string.m"
            {
#line 85 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
#line 85 "string.to_string.m"
            }
#line 410 "string.to_string.m"
            {
#line 410 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
#line 411 "string.to_string.m"
            /* direct tailcall eliminated */
#line 411 "string.to_string.m"
            {
#line 411 "string.to_string.m"
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
#line 411 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 411 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
#line 411 "string.to_string.m"
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
#line 411 "string.to_string.m"
            }
#line 411 "string.to_string.m"
            continue;
#line 408 "string.to_string.m"
          }
#line 407 "string.to_string.m"
      }
#line 407 "string.to_string.m"
      break;
#line 407 "string.to_string.m"
    }
#line 405 "string.to_string.m"
}

#line 403 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
#line 403 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 403 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 403 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 403 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
#line 403 "string.to_string.m"
{
#line 407 "string.to_string.m"
  while (MR_TRUE)
#line 407 "string.to_string.m"
    {
#line 407 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 407 "string.to_string.m"
      {
#line 407 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;

#line 407 "string.to_string.m"
        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
#line 407 "string.to_string.m"
        else
#line 408 "string.to_string.m"
          {
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 85 "string.to_string.m"
            {
#line 85 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
#line 85 "string.to_string.m"
            }
#line 410 "string.to_string.m"
            {
#line 410 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
#line 411 "string.to_string.m"
            /* direct tailcall eliminated */
#line 411 "string.to_string.m"
            {
#line 411 "string.to_string.m"
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
#line 411 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 411 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
#line 411 "string.to_string.m"
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
#line 411 "string.to_string.m"
            }
#line 411 "string.to_string.m"
            continue;
#line 408 "string.to_string.m"
          }
#line 407 "string.to_string.m"
      }
#line 407 "string.to_string.m"
      break;
#line 407 "string.to_string.m"
    }
#line 403 "string.to_string.m"
}

#line 402 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
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
#line 407 "string.to_string.m"
  while (MR_TRUE)
#line 407 "string.to_string.m"
    {
#line 407 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 407 "string.to_string.m"
      {
#line 407 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;

#line 407 "string.to_string.m"
        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
#line 407 "string.to_string.m"
        else
#line 408 "string.to_string.m"
          {
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 85 "string.to_string.m"
            {
#line 85 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
#line 85 "string.to_string.m"
            }
#line 410 "string.to_string.m"
            {
#line 410 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
#line 411 "string.to_string.m"
            /* direct tailcall eliminated */
#line 411 "string.to_string.m"
            {
#line 411 "string.to_string.m"
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
#line 411 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 411 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
#line 411 "string.to_string.m"
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
#line 411 "string.to_string.m"
            }
#line 411 "string.to_string.m"
            continue;
#line 408 "string.to_string.m"
          }
#line 407 "string.to_string.m"
      }
#line 407 "string.to_string.m"
      break;
#line 407 "string.to_string.m"
    }
#line 402 "string.to_string.m"
}

#line 401 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
#line 401 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_1,
#line 401 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__3_3,
#line 401 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
#line 401 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
#line 401 "string.to_string.m"
{
#line 407 "string.to_string.m"
  while (MR_TRUE)
#line 407 "string.to_string.m"
    {
#line 407 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 407 "string.to_string.m"
      {
#line 407 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;

#line 407 "string.to_string.m"
        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
#line 407 "string.to_string.m"
        else
#line 408 "string.to_string.m"
          {
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
#line 408 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 85 "string.to_string.m"
            {
#line 85 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
#line 85 "string.to_string.m"
            }
#line 410 "string.to_string.m"
            {
#line 410 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
#line 411 "string.to_string.m"
            /* direct tailcall eliminated */
#line 411 "string.to_string.m"
            {
#line 411 "string.to_string.m"
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
#line 411 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

#line 411 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
#line 411 "string.to_string.m"
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
#line 411 "string.to_string.m"
            }
#line 411 "string.to_string.m"
            continue;
#line 408 "string.to_string.m"
          }
#line 407 "string.to_string.m"
      }
#line 407 "string.to_string.m"
      break;
#line 407 "string.to_string.m"
    }
#line 401 "string.to_string.m"
}

#line 376 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
#line 376 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 376 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 376 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 376 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
#line 376 "string.to_string.m"
{
#line 378 "string.to_string.m"
  while (MR_TRUE)
#line 378 "string.to_string.m"
    {
#line 378 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 378 "string.to_string.m"
      {
#line 378 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 378 "string.to_string.m"
        MR_String mercury__string__to_string__Functor_10;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__Args_12;
#line 378 "string.to_string.m"
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 379 "string.to_string.m"
        MR_Integer mercury__string__to_string___Arity_11;
#line 387 "string.to_string.m"
        MR_Word mercury__string__to_string__ListHead_13;
#line 387 "string.to_string.m"
        MR_Word mercury__string__to_string__ListTail_14;
#line 381 "string.to_string.m"
        MR_Word mercury__string__to_string__V_18_18;
#line 381 "string.to_string.m"
        MR_Word mercury__string__to_string__V_19_19;

#line 379 "string.to_string.m"
        {
#line 379 "string.to_string.m"
          mercury__deconstruct__deconstruct_5_p_3(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
#line 381 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
#line 381 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 381 "string.to_string.m"
          {
#line 382 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 382 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 382 "string.to_string.m"
              {
#line 382 "string.to_string.m"
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 382 "string.to_string.m"
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 382 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 382 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 382 "string.to_string.m"
                  {
#line 382 "string.to_string.m"
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
#line 382 "string.to_string.m"
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
#line 382 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "string.to_string.m"
                  }
#line 382 "string.to_string.m"
              }
#line 381 "string.to_string.m"
          }
#line 387 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 384 "string.to_string.m"
          {
#line 384 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
#line 384 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 85 "string.to_string.m"
            {
#line 85 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 85 "string.to_string.m"
            }
#line 385 "string.to_string.m"
            {
#line 385 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
#line 386 "string.to_string.m"
            /* direct tailcall eliminated */
#line 386 "string.to_string.m"
            {
#line 386 "string.to_string.m"
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
#line 386 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 386 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
#line 386 "string.to_string.m"
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
#line 386 "string.to_string.m"
            }
#line 386 "string.to_string.m"
            continue;
#line 384 "string.to_string.m"
          }
#line 387 "string.to_string.m"
        else
#line 392 "string.to_string.m"
          {
#line 388 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
#line 388 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 389 "string.to_string.m"
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 392 "string.to_string.m"
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
#line 392 "string.to_string.m"
            else
#line 393 "string.to_string.m"
              {
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeInfo_29_29;
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
#line 393 "string.to_string.m"
                MR_Box mercury__string__to_string__V_26_26;
#line 393 "string.to_string.m"
                MR_Integer mercury__string__to_string__Priority_42;
#line 393 "string.to_string.m"
                MR_Integer mercury__string__to_string__V_43_43;
#line 3426 "string.to_string.c"
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 3428 "string.to_string.c"
                MR_Box mercury__string__to_string__conv1_V_43_43;

#line 85 "string.to_string.m"
                {
#line 85 "string.to_string.m"
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
#line 85 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 85 "string.to_string.m"
                }
#line 12 "univ.opt"
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 12 "univ.opt"
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 3445 "string.to_string.c"
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 3447 "string.to_string.c"
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3449 "string.to_string.c"
                {
#line 3451 "string.to_string.c"
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
#line 3454 "string.to_string.c"
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
#line 98 "string.to_string.m"
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
#line 99 "string.to_string.m"
                {
#line 99 "string.to_string.m"
                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
#line 99 "string.to_string.m"
                  return;
                }
#line 393 "string.to_string.m"
              }
#line 392 "string.to_string.m"
          }
#line 378 "string.to_string.m"
      }
#line 378 "string.to_string.m"
      break;
#line 378 "string.to_string.m"
    }
#line 376 "string.to_string.m"
}

#line 374 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
#line 374 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 374 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 374 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 374 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
#line 374 "string.to_string.m"
{
#line 378 "string.to_string.m"
  while (MR_TRUE)
#line 378 "string.to_string.m"
    {
#line 378 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 378 "string.to_string.m"
      {
#line 378 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 378 "string.to_string.m"
        MR_String mercury__string__to_string__Functor_10;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__Args_12;
#line 378 "string.to_string.m"
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 379 "string.to_string.m"
        MR_Integer mercury__string__to_string___Arity_11;
#line 387 "string.to_string.m"
        MR_Word mercury__string__to_string__ListHead_13;
#line 387 "string.to_string.m"
        MR_Word mercury__string__to_string__ListTail_14;
#line 381 "string.to_string.m"
        MR_Word mercury__string__to_string__V_18_18;
#line 381 "string.to_string.m"
        MR_Word mercury__string__to_string__V_19_19;

#line 379 "string.to_string.m"
        {
#line 379 "string.to_string.m"
          mercury__deconstruct__deconstruct_5_p_2(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
#line 381 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
#line 381 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 381 "string.to_string.m"
          {
#line 382 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 382 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 382 "string.to_string.m"
              {
#line 382 "string.to_string.m"
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 382 "string.to_string.m"
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 382 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 382 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 382 "string.to_string.m"
                  {
#line 382 "string.to_string.m"
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
#line 382 "string.to_string.m"
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
#line 382 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "string.to_string.m"
                  }
#line 382 "string.to_string.m"
              }
#line 381 "string.to_string.m"
          }
#line 387 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 384 "string.to_string.m"
          {
#line 384 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
#line 384 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 85 "string.to_string.m"
            {
#line 85 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 85 "string.to_string.m"
            }
#line 385 "string.to_string.m"
            {
#line 385 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
#line 386 "string.to_string.m"
            /* direct tailcall eliminated */
#line 386 "string.to_string.m"
            {
#line 386 "string.to_string.m"
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
#line 386 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 386 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
#line 386 "string.to_string.m"
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
#line 386 "string.to_string.m"
            }
#line 386 "string.to_string.m"
            continue;
#line 384 "string.to_string.m"
          }
#line 387 "string.to_string.m"
        else
#line 392 "string.to_string.m"
          {
#line 388 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
#line 388 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 389 "string.to_string.m"
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 392 "string.to_string.m"
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
#line 392 "string.to_string.m"
            else
#line 393 "string.to_string.m"
              {
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeInfo_29_29;
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
#line 393 "string.to_string.m"
                MR_Box mercury__string__to_string__V_26_26;
#line 393 "string.to_string.m"
                MR_Integer mercury__string__to_string__Priority_42;
#line 393 "string.to_string.m"
                MR_Integer mercury__string__to_string__V_43_43;
#line 3632 "string.to_string.c"
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 3634 "string.to_string.c"
                MR_Box mercury__string__to_string__conv1_V_43_43;

#line 85 "string.to_string.m"
                {
#line 85 "string.to_string.m"
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
#line 85 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 85 "string.to_string.m"
                }
#line 12 "univ.opt"
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 12 "univ.opt"
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 3651 "string.to_string.c"
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 3653 "string.to_string.c"
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3655 "string.to_string.c"
                {
#line 3657 "string.to_string.c"
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
#line 3660 "string.to_string.c"
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
#line 98 "string.to_string.m"
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
#line 99 "string.to_string.m"
                {
#line 99 "string.to_string.m"
                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
#line 99 "string.to_string.m"
                  return;
                }
#line 393 "string.to_string.m"
              }
#line 392 "string.to_string.m"
          }
#line 378 "string.to_string.m"
      }
#line 378 "string.to_string.m"
      break;
#line 378 "string.to_string.m"
    }
#line 374 "string.to_string.m"
}

#line 373 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
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
#line 378 "string.to_string.m"
  while (MR_TRUE)
#line 378 "string.to_string.m"
    {
#line 378 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 378 "string.to_string.m"
      {
#line 378 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 378 "string.to_string.m"
        MR_String mercury__string__to_string__Functor_10;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__Args_12;
#line 378 "string.to_string.m"
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 379 "string.to_string.m"
        MR_Integer mercury__string__to_string___Arity_11;
#line 387 "string.to_string.m"
        MR_Word mercury__string__to_string__ListHead_13;
#line 387 "string.to_string.m"
        MR_Word mercury__string__to_string__ListTail_14;
#line 381 "string.to_string.m"
        MR_Word mercury__string__to_string__V_18_18;
#line 381 "string.to_string.m"
        MR_Word mercury__string__to_string__V_19_19;

#line 379 "string.to_string.m"
        {
#line 379 "string.to_string.m"
          mercury__deconstruct__deconstruct_5_p_1(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
#line 381 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
#line 381 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 381 "string.to_string.m"
          {
#line 382 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 382 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 382 "string.to_string.m"
              {
#line 382 "string.to_string.m"
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 382 "string.to_string.m"
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 382 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 382 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 382 "string.to_string.m"
                  {
#line 382 "string.to_string.m"
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
#line 382 "string.to_string.m"
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
#line 382 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "string.to_string.m"
                  }
#line 382 "string.to_string.m"
              }
#line 381 "string.to_string.m"
          }
#line 387 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 384 "string.to_string.m"
          {
#line 384 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
#line 384 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 85 "string.to_string.m"
            {
#line 85 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 85 "string.to_string.m"
            }
#line 385 "string.to_string.m"
            {
#line 385 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
#line 386 "string.to_string.m"
            /* direct tailcall eliminated */
#line 386 "string.to_string.m"
            {
#line 386 "string.to_string.m"
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
#line 386 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 386 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
#line 386 "string.to_string.m"
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
#line 386 "string.to_string.m"
            }
#line 386 "string.to_string.m"
            continue;
#line 384 "string.to_string.m"
          }
#line 387 "string.to_string.m"
        else
#line 392 "string.to_string.m"
          {
#line 388 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
#line 388 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 389 "string.to_string.m"
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 392 "string.to_string.m"
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
#line 392 "string.to_string.m"
            else
#line 393 "string.to_string.m"
              {
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeInfo_29_29;
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
#line 393 "string.to_string.m"
                MR_Box mercury__string__to_string__V_26_26;
#line 393 "string.to_string.m"
                MR_Integer mercury__string__to_string__Priority_42;
#line 393 "string.to_string.m"
                MR_Integer mercury__string__to_string__V_43_43;
#line 3838 "string.to_string.c"
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 3840 "string.to_string.c"
                MR_Box mercury__string__to_string__conv1_V_43_43;

#line 85 "string.to_string.m"
                {
#line 85 "string.to_string.m"
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
#line 85 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 85 "string.to_string.m"
                }
#line 12 "univ.opt"
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 12 "univ.opt"
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 3857 "string.to_string.c"
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 3859 "string.to_string.c"
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3861 "string.to_string.c"
                {
#line 3863 "string.to_string.c"
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
#line 3866 "string.to_string.c"
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
#line 98 "string.to_string.m"
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
#line 99 "string.to_string.m"
                {
#line 99 "string.to_string.m"
                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
#line 99 "string.to_string.m"
                  return;
                }
#line 393 "string.to_string.m"
              }
#line 392 "string.to_string.m"
          }
#line 378 "string.to_string.m"
      }
#line 378 "string.to_string.m"
      break;
#line 378 "string.to_string.m"
    }
#line 373 "string.to_string.m"
}

#line 372 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
#line 372 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 372 "string.to_string.m"
  MR_Word mercury__string__to_string__Univ_8,
#line 372 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
#line 372 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
#line 372 "string.to_string.m"
{
#line 378 "string.to_string.m"
  while (MR_TRUE)
#line 378 "string.to_string.m"
    {
#line 378 "string.to_string.m"
      /* tailcall optimized into a loop */
#line 378 "string.to_string.m"
      {
#line 378 "string.to_string.m"
        MR_bool mercury__string__to_string__succeeded;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 378 "string.to_string.m"
        MR_String mercury__string__to_string__Functor_10;
#line 378 "string.to_string.m"
        MR_Word mercury__string__to_string__Args_12;
#line 378 "string.to_string.m"
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 379 "string.to_string.m"
        MR_Integer mercury__string__to_string___Arity_11;
#line 387 "string.to_string.m"
        MR_Word mercury__string__to_string__ListHead_13;
#line 387 "string.to_string.m"
        MR_Word mercury__string__to_string__ListTail_14;
#line 381 "string.to_string.m"
        MR_Word mercury__string__to_string__V_18_18;
#line 381 "string.to_string.m"
        MR_Word mercury__string__to_string__V_19_19;

#line 379 "string.to_string.m"
        {
#line 379 "string.to_string.m"
          mercury__deconstruct__deconstruct_5_p_0(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
#line 381 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
#line 381 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 381 "string.to_string.m"
          {
#line 382 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 382 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 382 "string.to_string.m"
              {
#line 382 "string.to_string.m"
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 382 "string.to_string.m"
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 382 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 382 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 382 "string.to_string.m"
                  {
#line 382 "string.to_string.m"
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
#line 382 "string.to_string.m"
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
#line 382 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "string.to_string.m"
                  }
#line 382 "string.to_string.m"
              }
#line 381 "string.to_string.m"
          }
#line 387 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 384 "string.to_string.m"
          {
#line 384 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
#line 384 "string.to_string.m"
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 85 "string.to_string.m"
            {
#line 85 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
#line 85 "string.to_string.m"
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 85 "string.to_string.m"
            }
#line 385 "string.to_string.m"
            {
#line 385 "string.to_string.m"
              mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
#line 386 "string.to_string.m"
            /* direct tailcall eliminated */
#line 386 "string.to_string.m"
            {
#line 386 "string.to_string.m"
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
#line 386 "string.to_string.m"
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 386 "string.to_string.m"
              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
#line 386 "string.to_string.m"
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
#line 386 "string.to_string.m"
            }
#line 386 "string.to_string.m"
            continue;
#line 384 "string.to_string.m"
          }
#line 387 "string.to_string.m"
        else
#line 392 "string.to_string.m"
          {
#line 388 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
#line 388 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 389 "string.to_string.m"
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 392 "string.to_string.m"
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
#line 392 "string.to_string.m"
            else
#line 393 "string.to_string.m"
              {
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeInfo_29_29;
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
#line 393 "string.to_string.m"
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
#line 393 "string.to_string.m"
                MR_Box mercury__string__to_string__V_26_26;
#line 393 "string.to_string.m"
                MR_Integer mercury__string__to_string__Priority_42;
#line 393 "string.to_string.m"
                MR_Integer mercury__string__to_string__V_43_43;
#line 4044 "string.to_string.c"
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
#line 4046 "string.to_string.c"
                MR_Box mercury__string__to_string__conv1_V_43_43;

#line 85 "string.to_string.m"
                {
#line 85 "string.to_string.m"
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
#line 85 "string.to_string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
#line 85 "string.to_string.m"
                }
#line 12 "univ.opt"
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
#line 12 "univ.opt"
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
#line 4063 "string.to_string.c"
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4065 "string.to_string.c"
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4067 "string.to_string.c"
                {
#line 4069 "string.to_string.c"
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
#line 4072 "string.to_string.c"
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
#line 98 "string.to_string.m"
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
#line 99 "string.to_string.m"
                {
#line 99 "string.to_string.m"
                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
#line 99 "string.to_string.m"
                  return;
                }
#line 393 "string.to_string.m"
              }
#line 392 "string.to_string.m"
          }
#line 378 "string.to_string.m"
      }
#line 378 "string.to_string.m"
      break;
#line 378 "string.to_string.m"
    }
#line 372 "string.to_string.m"
}

#line 364 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__adjust_priority_3_p_0(
#line 364 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_1,
#line 364 "string.to_string.m"
  MR_Word mercury__string__to_string__HeadVar__2_2,
#line 364 "string.to_string.m"
  MR_Integer * mercury__string__to_string__HeadVar__3_3)
#line 364 "string.to_string.m"
{
#line 367 "string.to_string.m"
  {
#line 367 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 367 "string.to_string.m"
#line 367 "string.to_string.m"
    switch (mercury__string__to_string__HeadVar__2_2) {
#line 367 "string.to_string.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 367 "string.to_string.m"
      case (MR_Integer) 0:
#line 368 "string.to_string.m"
        {
#line 368 "string.to_string.m"
          *mercury__string__to_string__HeadVar__3_3 = (mercury__string__to_string__Priority_1 - (MR_Integer) 1);
#line 368 "string.to_string.m"
        }
#line 367 "string.to_string.m"
        break;
#line 367 "string.to_string.m"
      case (MR_Integer) 1:
#line 367 "string.to_string.m"
        *mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__Priority_1;
#line 367 "string.to_string.m"
        break;
#line 367 "string.to_string.m"
    }
#line 367 "string.to_string.m"
  }
#line 364 "string.to_string.m"
}

#line 354 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
#line 354 "string.to_string.m"
  MR_String mercury__string__to_string__String_6,
#line 354 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_7,
#line 354 "string.to_string.m"
  MR_Integer mercury__string__to_string__OpPriority_8,
#line 354 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_10,
#line 354 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_11)
#line 354 "string.to_string.m"
{
#line 360 "string.to_string.m"
  {
#line 360 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__OpPriority_8 > mercury__string__to_string__Priority_7);

#line 360 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 85 "string.to_string.m"
      {
#line 85 "string.to_string.m"
        MR_Word base;
#line 85 "string.to_string.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
        *mercury__string__to_string__STATE_VARIABLE_Rs_11 = base;
#line 85 "string.to_string.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__String_6));
#line 85 "string.to_string.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_10));
#line 85 "string.to_string.m"
      }
#line 360 "string.to_string.m"
    else
#line 360 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_11 = mercury__string__to_string__STATE_VARIABLE_Rs_0_10;
#line 360 "string.to_string.m"
  }
#line 354 "string.to_string.m"
}

#line 325 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
#line 325 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 325 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 325 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 325 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 325 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 325 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
#line 325 "string.to_string.m"
{
#line 328 "string.to_string.m"
  {
#line 328 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 330 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
#line 330 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_18_18;
#line 4212 "string.to_string.c"
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
#line 4214 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
#line 4216 "string.to_string.c"
    MR_Box mercury__string__to_string__conv2_V_18_18;

#line 330 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 330 "string.to_string.m"
      {
#line 4223 "string.to_string.c"
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4225 "string.to_string.c"
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4227 "string.to_string.c"
        {
#line 4229 "string.to_string.c"
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
#line 330 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 330 "string.to_string.m"
          {
#line 4236 "string.to_string.c"
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4238 "string.to_string.c"
            {
#line 4240 "string.to_string.c"
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
#line 4243 "string.to_string.c"
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
#line 332 "string.to_string.m"
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
#line 330 "string.to_string.m"
          }
#line 330 "string.to_string.m"
      }
#line 337 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 334 "string.to_string.m"
      {
#line 334 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
#line 334 "string.to_string.m"
        MR_String mercury__string__to_string__V_21_21;
#line 334 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 85 "string.to_string.m"
        }
#line 55 "term_io.opt"
        {
#line 55 "term_io.opt"
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
#line 85 "string.to_string.m"
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
#line 85 "string.to_string.m"
        }
#line 334 "string.to_string.m"
      }
#line 337 "string.to_string.m"
    else
#line 338 "string.to_string.m"
      {
#line 338 "string.to_string.m"
        MR_String mercury__string__to_string__V_25_25;

#line 339 "string.to_string.m"
        {
#line 339 "string.to_string.m"
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 85 "string.to_string.m"
        }
#line 338 "string.to_string.m"
      }
#line 350 "string.to_string.m"
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 350 "string.to_string.m"
    else
#line 345 "string.to_string.m"
      {
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
#line 85 "string.to_string.m"
        }
#line 347 "string.to_string.m"
        {
#line 347 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
#line 348 "string.to_string.m"
        {
#line 348 "string.to_string.m"
          mercury__string__to_string__term_args_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          MR_Word base;
#line 85 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
#line 85 "string.to_string.m"
        }
#line 345 "string.to_string.m"
      }
#line 328 "string.to_string.m"
  }
#line 325 "string.to_string.m"
}

#line 323 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
#line 323 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 323 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 323 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 323 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 323 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 323 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
#line 323 "string.to_string.m"
{
#line 328 "string.to_string.m"
  {
#line 328 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 330 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
#line 330 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_18_18;
#line 4410 "string.to_string.c"
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
#line 4412 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
#line 4414 "string.to_string.c"
    MR_Box mercury__string__to_string__conv2_V_18_18;

#line 330 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 330 "string.to_string.m"
      {
#line 4421 "string.to_string.c"
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4423 "string.to_string.c"
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4425 "string.to_string.c"
        {
#line 4427 "string.to_string.c"
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
#line 330 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 330 "string.to_string.m"
          {
#line 4434 "string.to_string.c"
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4436 "string.to_string.c"
            {
#line 4438 "string.to_string.c"
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
#line 4441 "string.to_string.c"
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
#line 332 "string.to_string.m"
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
#line 330 "string.to_string.m"
          }
#line 330 "string.to_string.m"
      }
#line 337 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 334 "string.to_string.m"
      {
#line 334 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
#line 334 "string.to_string.m"
        MR_String mercury__string__to_string__V_21_21;
#line 334 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 85 "string.to_string.m"
        }
#line 55 "term_io.opt"
        {
#line 55 "term_io.opt"
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
#line 85 "string.to_string.m"
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
#line 85 "string.to_string.m"
        }
#line 334 "string.to_string.m"
      }
#line 337 "string.to_string.m"
    else
#line 338 "string.to_string.m"
      {
#line 338 "string.to_string.m"
        MR_String mercury__string__to_string__V_25_25;

#line 339 "string.to_string.m"
        {
#line 339 "string.to_string.m"
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 85 "string.to_string.m"
        }
#line 338 "string.to_string.m"
      }
#line 350 "string.to_string.m"
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 350 "string.to_string.m"
    else
#line 345 "string.to_string.m"
      {
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
#line 85 "string.to_string.m"
        }
#line 347 "string.to_string.m"
        {
#line 347 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
#line 348 "string.to_string.m"
        {
#line 348 "string.to_string.m"
          mercury__string__to_string__term_args_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          MR_Word base;
#line 85 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
#line 85 "string.to_string.m"
        }
#line 345 "string.to_string.m"
      }
#line 328 "string.to_string.m"
  }
#line 323 "string.to_string.m"
}

#line 321 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
#line 321 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 321 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 321 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 321 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 321 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 321 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
#line 321 "string.to_string.m"
{
#line 328 "string.to_string.m"
  {
#line 328 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 330 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
#line 330 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_18_18;
#line 4608 "string.to_string.c"
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
#line 4610 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
#line 4612 "string.to_string.c"
    MR_Box mercury__string__to_string__conv2_V_18_18;

#line 330 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 330 "string.to_string.m"
      {
#line 4619 "string.to_string.c"
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4621 "string.to_string.c"
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4623 "string.to_string.c"
        {
#line 4625 "string.to_string.c"
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
#line 330 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 330 "string.to_string.m"
          {
#line 4632 "string.to_string.c"
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4634 "string.to_string.c"
            {
#line 4636 "string.to_string.c"
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
#line 4639 "string.to_string.c"
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
#line 332 "string.to_string.m"
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
#line 330 "string.to_string.m"
          }
#line 330 "string.to_string.m"
      }
#line 337 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 334 "string.to_string.m"
      {
#line 334 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
#line 334 "string.to_string.m"
        MR_String mercury__string__to_string__V_21_21;
#line 334 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 85 "string.to_string.m"
        }
#line 55 "term_io.opt"
        {
#line 55 "term_io.opt"
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
#line 85 "string.to_string.m"
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
#line 85 "string.to_string.m"
        }
#line 334 "string.to_string.m"
      }
#line 337 "string.to_string.m"
    else
#line 338 "string.to_string.m"
      {
#line 338 "string.to_string.m"
        MR_String mercury__string__to_string__V_25_25;

#line 339 "string.to_string.m"
        {
#line 339 "string.to_string.m"
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 85 "string.to_string.m"
        }
#line 338 "string.to_string.m"
      }
#line 350 "string.to_string.m"
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 350 "string.to_string.m"
    else
#line 345 "string.to_string.m"
      {
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
#line 85 "string.to_string.m"
        }
#line 347 "string.to_string.m"
        {
#line 347 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
#line 348 "string.to_string.m"
        {
#line 348 "string.to_string.m"
          mercury__string__to_string__term_args_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          MR_Word base;
#line 85 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
#line 85 "string.to_string.m"
        }
#line 345 "string.to_string.m"
      }
#line 328 "string.to_string.m"
  }
#line 321 "string.to_string.m"
}

#line 319 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
#line 319 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_8,
#line 319 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_10,
#line 319 "string.to_string.m"
  MR_String mercury__string__to_string__Functor_11,
#line 319 "string.to_string.m"
  MR_Word mercury__string__to_string__Args_12,
#line 319 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
#line 319 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
#line 319 "string.to_string.m"
{
#line 328 "string.to_string.m"
  {
#line 328 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "string.to_string.m"
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 330 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
#line 330 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_18_18;
#line 4806 "string.to_string.c"
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
#line 4808 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
#line 4810 "string.to_string.c"
    MR_Box mercury__string__to_string__conv2_V_18_18;

#line 330 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 330 "string.to_string.m"
      {
#line 4817 "string.to_string.c"
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 4819 "string.to_string.c"
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4821 "string.to_string.c"
        {
#line 4823 "string.to_string.c"
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
#line 330 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 330 "string.to_string.m"
          {
#line 4830 "string.to_string.c"
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4832 "string.to_string.c"
            {
#line 4834 "string.to_string.c"
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
#line 4837 "string.to_string.c"
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
#line 332 "string.to_string.m"
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
#line 330 "string.to_string.m"
          }
#line 330 "string.to_string.m"
      }
#line 337 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 334 "string.to_string.m"
      {
#line 334 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
#line 334 "string.to_string.m"
        MR_String mercury__string__to_string__V_21_21;
#line 334 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 85 "string.to_string.m"
        }
#line 55 "term_io.opt"
        {
#line 55 "term_io.opt"
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
#line 85 "string.to_string.m"
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
#line 85 "string.to_string.m"
        }
#line 334 "string.to_string.m"
      }
#line 337 "string.to_string.m"
    else
#line 338 "string.to_string.m"
      {
#line 338 "string.to_string.m"
        MR_String mercury__string__to_string__V_25_25;

#line 339 "string.to_string.m"
        {
#line 339 "string.to_string.m"
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
#line 85 "string.to_string.m"
        }
#line 338 "string.to_string.m"
      }
#line 350 "string.to_string.m"
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "string.to_string.m"
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
#line 350 "string.to_string.m"
    else
#line 345 "string.to_string.m"
      {
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
#line 345 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
#line 85 "string.to_string.m"
        }
#line 347 "string.to_string.m"
        {
#line 347 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
#line 348 "string.to_string.m"
        {
#line 348 "string.to_string.m"
          mercury__string__to_string__term_args_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          MR_Word base;
#line 85 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
#line 85 "string.to_string.m"
        }
#line 345 "string.to_string.m"
      }
#line 328 "string.to_string.m"
  }
#line 319 "string.to_string.m"
}

#line 206 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
#line 206 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 206 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 206 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 206 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 206 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 206 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
#line 206 "string.to_string.m"
{
#line 209 "string.to_string.m"
  {
#line 209 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 209 "string.to_string.m"
    MR_String mercury__string__to_string__Functor_12;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__Args_14;
#line 210 "string.to_string.m"
    MR_Integer mercury__string__to_string___Arity_13;
#line 219 "string.to_string.m"
    MR_Word mercury__string__to_string__ListHead_15;
#line 219 "string.to_string.m"
    MR_Word mercury__string__to_string__ListTail_16;
#line 212 "string.to_string.m"
    MR_Word mercury__string__to_string__V_38_38;
#line 212 "string.to_string.m"
    MR_Word mercury__string__to_string__V_39_39;

#line 210 "string.to_string.m"
    {
#line 210 "string.to_string.m"
      mercury__deconstruct__deconstruct_5_p_3(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
#line 212 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
#line 212 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 212 "string.to_string.m"
      {
#line 213 "string.to_string.m"
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 213 "string.to_string.m"
          {
#line 213 "string.to_string.m"
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 213 "string.to_string.m"
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 213 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 213 "string.to_string.m"
              {
#line 213 "string.to_string.m"
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
#line 213 "string.to_string.m"
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
#line 213 "string.to_string.m"
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "string.to_string.m"
              }
#line 213 "string.to_string.m"
          }
#line 212 "string.to_string.m"
      }
#line 219 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 215 "string.to_string.m"
      {
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

#line 215 "string.to_string.m"
        {
#line 215 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
#line 216 "string.to_string.m"
        {
#line 216 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
#line 217 "string.to_string.m"
        {
#line 217 "string.to_string.m"
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
#line 218 "string.to_string.m"
        {
#line 218 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 218 "string.to_string.m"
          return;
        }
#line 215 "string.to_string.m"
      }
#line 219 "string.to_string.m"
    else
#line 224 "string.to_string.m"
      {
#line 220 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
#line 220 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 221 "string.to_string.m"
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 223 "string.to_string.m"
          {
#line 223 "string.to_string.m"
            {
#line 223 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 223 "string.to_string.m"
              return;
            }
#line 223 "string.to_string.m"
          }
#line 224 "string.to_string.m"
        else
#line 244 "string.to_string.m"
          {
#line 225 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
#line 244 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 230 "string.to_string.m"
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "string.to_string.m"
                {
#line 229 "string.to_string.m"
                  {
#line 229 "string.to_string.m"
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 229 "string.to_string.m"
                    return;
                  }
#line 228 "string.to_string.m"
                }
#line 230 "string.to_string.m"
              else
#line 230 "string.to_string.m"
                {
#line 230 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 230 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

#line 230 "string.to_string.m"
                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "string.to_string.m"
                    {
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
#line 231 "string.to_string.m"
                      MR_Box mercury__string__to_string__V_57_57;
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

#line 232 "string.to_string.m"
                      {
#line 232 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
#line 233 "string.to_string.m"
                      {
#line 233 "string.to_string.m"
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
#line 233 "string.to_string.m"
                      {
#line 233 "string.to_string.m"
                        mercury__string__to_string__value_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
#line 235 "string.to_string.m"
                      {
#line 235 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 235 "string.to_string.m"
                        return;
                      }
#line 231 "string.to_string.m"
                    }
#line 230 "string.to_string.m"
                  else
#line 237 "string.to_string.m"
                    {
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

#line 239 "string.to_string.m"
                      {
#line 239 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
#line 240 "string.to_string.m"
                      {
#line 240 "string.to_string.m"
                        mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
#line 241 "string.to_string.m"
                      {
#line 241 "string.to_string.m"
                        mercury__string__to_string__term_args_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
#line 242 "string.to_string.m"
                      {
#line 242 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 242 "string.to_string.m"
                        return;
                      }
#line 237 "string.to_string.m"
                    }
#line 230 "string.to_string.m"
                }
#line 244 "string.to_string.m"
            else
#line 271 "string.to_string.m"
              {
#line 271 "string.to_string.m"
                MR_Word mercury__string__to_string__Arg_22;
#line 245 "string.to_string.m"
                MR_Word mercury__string__to_string__V_63_63;

#line 245 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 245 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 245 "string.to_string.m"
                  {
#line 245 "string.to_string.m"
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 245 "string.to_string.m"
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 245 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 257 "string.to_string.m"
                  {
#line 257 "string.to_string.m"
                    MR_Integer mercury__string__to_string__OpPriority_23;
#line 257 "string.to_string.m"
                    MR_Word mercury__string__to_string__OpAssoc_24;
#line 248 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 248 "string.to_string.m"
                    {
#line 248 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
#line 257 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 250 "string.to_string.m"
                      {
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
#line 250 "string.to_string.m"
                        MR_Integer mercury__string__to_string__NewPriority_25;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
#line 250 "string.to_string.m"
                        MR_String mercury__string__to_string__V_66_66;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
#line 250 "string.to_string.m"
                        MR_Box mercury__string__to_string__V_70_70;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

#line 250 "string.to_string.m"
                        {
#line 250 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
#line 252 "string.to_string.m"
                        {
#line 252 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
#line 253 "string.to_string.m"
                        {
#line 253 "string.to_string.m"
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
#line 255 "string.to_string.m"
                        {
#line 255 "string.to_string.m"
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
#line 254 "string.to_string.m"
                        {
#line 254 "string.to_string.m"
                          mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
#line 256 "string.to_string.m"
                        {
#line 256 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 256 "string.to_string.m"
                          return;
                        }
#line 250 "string.to_string.m"
                      }
#line 257 "string.to_string.m"
                    else
#line 267 "string.to_string.m"
                      {
#line 267 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_120;
#line 267 "string.to_string.m"
                        MR_Word mercury__string__to_string__OpAssoc_121;
#line 258 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 258 "string.to_string.m"
                        {
#line 258 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
#line 267 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 260 "string.to_string.m"
                          {
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
#line 260 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_76_76;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
#line 260 "string.to_string.m"
                            MR_String mercury__string__to_string__V_80_80;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
#line 260 "string.to_string.m"
                            MR_Integer mercury__string__to_string__NewPriority_119;

#line 260 "string.to_string.m"
                            {
#line 260 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
#line 261 "string.to_string.m"
                            {
#line 261 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
#line 263 "string.to_string.m"
                            {
#line 263 "string.to_string.m"
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
#line 264 "string.to_string.m"
                            {
#line 264 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
#line 265 "string.to_string.m"
                            {
#line 265 "string.to_string.m"
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
#line 265 "string.to_string.m"
                            {
#line 265 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
#line 266 "string.to_string.m"
                            {
#line 266 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 266 "string.to_string.m"
                              return;
                            }
#line 260 "string.to_string.m"
                          }
#line 267 "string.to_string.m"
                        else
#line 268 "string.to_string.m"
                          {
#line 268 "string.to_string.m"
                            mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 268 "string.to_string.m"
                            return;
                          }
#line 267 "string.to_string.m"
                      }
#line 257 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
                else
#line 312 "string.to_string.m"
                  {
#line 312 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg1_26;
#line 312 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg2_27;
#line 272 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_85_85;
#line 272 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_86_86;

#line 272 "string.to_string.m"
                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 272 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 272 "string.to_string.m"
                      {
#line 272 "string.to_string.m"
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 272 "string.to_string.m"
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 272 "string.to_string.m"
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 272 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 272 "string.to_string.m"
                          {
#line 272 "string.to_string.m"
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
#line 272 "string.to_string.m"
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
#line 272 "string.to_string.m"
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "string.to_string.m"
                          }
#line 272 "string.to_string.m"
                      }
#line 312 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 293 "string.to_string.m"
                      {
#line 293 "string.to_string.m"
                        MR_Word mercury__string__to_string__LeftAssoc_28;
#line 293 "string.to_string.m"
                        MR_Word mercury__string__to_string__RightAssoc_29;
#line 293 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_124;
#line 275 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 275 "string.to_string.m"
                        {
#line 275 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
#line 293 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 278 "string.to_string.m"
                          {
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
#line 278 "string.to_string.m"
                            MR_Integer mercury__string__to_string__LeftPriority_30;
#line 278 "string.to_string.m"
                            MR_Integer mercury__string__to_string__RightPriority_31;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
#line 278 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_89_89;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
#line 278 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_99_99;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

#line 278 "string.to_string.m"
                            {
#line 278 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
#line 279 "string.to_string.m"
                            {
#line 279 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
#line 281 "string.to_string.m"
                            {
#line 281 "string.to_string.m"
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
#line 280 "string.to_string.m"
                            {
#line 280 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
#line 282 "string.to_string.m"
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
#line 284 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 283 "string.to_string.m"
                              {
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 283 "string.to_string.m"
                              }
#line 284 "string.to_string.m"
                            else
#line 285 "string.to_string.m"
                              {
#line 285 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
#line 285 "string.to_string.m"
                                MR_String mercury__string__to_string__V_95_95;
#line 285 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

#line 285 "string.to_string.m"
                                {
#line 285 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
#line 286 "string.to_string.m"
                                {
#line 286 "string.to_string.m"
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 286 "string.to_string.m"
                                {
#line 286 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
#line 287 "string.to_string.m"
                                {
#line 287 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 285 "string.to_string.m"
                              }
#line 289 "string.to_string.m"
                            {
#line 289 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
#line 291 "string.to_string.m"
                            {
#line 291 "string.to_string.m"
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
#line 290 "string.to_string.m"
                            {
#line 290 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
#line 292 "string.to_string.m"
                            {
#line 292 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 292 "string.to_string.m"
                              return;
                            }
#line 278 "string.to_string.m"
                          }
#line 293 "string.to_string.m"
                        else
#line 308 "string.to_string.m"
                          {
#line 308 "string.to_string.m"
                            MR_Word mercury__string__to_string__FirstAssoc_32;
#line 308 "string.to_string.m"
                            MR_Word mercury__string__to_string__SecondAssoc_33;
#line 308 "string.to_string.m"
                            MR_Integer mercury__string__to_string__OpPriority_123;
#line 294 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 294 "string.to_string.m"
                            {
#line 294 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
#line 308 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 297 "string.to_string.m"
                              {
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
#line 297 "string.to_string.m"
                                MR_Integer mercury__string__to_string__FirstPriority_34;
#line 297 "string.to_string.m"
                                MR_Integer mercury__string__to_string__SecondPriority_35;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
#line 297 "string.to_string.m"
                                MR_String mercury__string__to_string__V_105_105;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
#line 297 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_109_109;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
#line 297 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_113_113;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

#line 297 "string.to_string.m"
                                {
#line 297 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
#line 299 "string.to_string.m"
                                {
#line 299 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
#line 300 "string.to_string.m"
                                {
#line 300 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
#line 302 "string.to_string.m"
                                {
#line 302 "string.to_string.m"
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
#line 301 "string.to_string.m"
                                {
#line 301 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
#line 303 "string.to_string.m"
                                {
#line 303 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
#line 304 "string.to_string.m"
                                {
#line 304 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
#line 306 "string.to_string.m"
                                {
#line 306 "string.to_string.m"
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
#line 305 "string.to_string.m"
                                {
#line 305 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
#line 307 "string.to_string.m"
                                {
#line 307 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 307 "string.to_string.m"
                                  return;
                                }
#line 297 "string.to_string.m"
                              }
#line 308 "string.to_string.m"
                            else
#line 309 "string.to_string.m"
                              {
#line 309 "string.to_string.m"
                                mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 309 "string.to_string.m"
                                return;
                              }
#line 308 "string.to_string.m"
                          }
#line 293 "string.to_string.m"
                      }
#line 312 "string.to_string.m"
                    else
#line 313 "string.to_string.m"
                      {
#line 313 "string.to_string.m"
                        mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 313 "string.to_string.m"
                        return;
                      }
#line 312 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
              }
#line 244 "string.to_string.m"
          }
#line 224 "string.to_string.m"
      }
#line 209 "string.to_string.m"
  }
#line 206 "string.to_string.m"
}

#line 204 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
#line 204 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 204 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 204 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 204 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 204 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 204 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
#line 204 "string.to_string.m"
{
#line 209 "string.to_string.m"
  {
#line 209 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 209 "string.to_string.m"
    MR_String mercury__string__to_string__Functor_12;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__Args_14;
#line 210 "string.to_string.m"
    MR_Integer mercury__string__to_string___Arity_13;
#line 219 "string.to_string.m"
    MR_Word mercury__string__to_string__ListHead_15;
#line 219 "string.to_string.m"
    MR_Word mercury__string__to_string__ListTail_16;
#line 212 "string.to_string.m"
    MR_Word mercury__string__to_string__V_38_38;
#line 212 "string.to_string.m"
    MR_Word mercury__string__to_string__V_39_39;

#line 210 "string.to_string.m"
    {
#line 210 "string.to_string.m"
      mercury__deconstruct__deconstruct_5_p_2(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
#line 212 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
#line 212 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 212 "string.to_string.m"
      {
#line 213 "string.to_string.m"
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 213 "string.to_string.m"
          {
#line 213 "string.to_string.m"
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 213 "string.to_string.m"
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 213 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 213 "string.to_string.m"
              {
#line 213 "string.to_string.m"
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
#line 213 "string.to_string.m"
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
#line 213 "string.to_string.m"
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "string.to_string.m"
              }
#line 213 "string.to_string.m"
          }
#line 212 "string.to_string.m"
      }
#line 219 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 215 "string.to_string.m"
      {
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

#line 215 "string.to_string.m"
        {
#line 215 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
#line 216 "string.to_string.m"
        {
#line 216 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
#line 217 "string.to_string.m"
        {
#line 217 "string.to_string.m"
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
#line 218 "string.to_string.m"
        {
#line 218 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 218 "string.to_string.m"
          return;
        }
#line 215 "string.to_string.m"
      }
#line 219 "string.to_string.m"
    else
#line 224 "string.to_string.m"
      {
#line 220 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
#line 220 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 221 "string.to_string.m"
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 223 "string.to_string.m"
          {
#line 223 "string.to_string.m"
            {
#line 223 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 223 "string.to_string.m"
              return;
            }
#line 223 "string.to_string.m"
          }
#line 224 "string.to_string.m"
        else
#line 244 "string.to_string.m"
          {
#line 225 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
#line 244 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 230 "string.to_string.m"
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "string.to_string.m"
                {
#line 229 "string.to_string.m"
                  {
#line 229 "string.to_string.m"
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 229 "string.to_string.m"
                    return;
                  }
#line 228 "string.to_string.m"
                }
#line 230 "string.to_string.m"
              else
#line 230 "string.to_string.m"
                {
#line 230 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 230 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

#line 230 "string.to_string.m"
                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "string.to_string.m"
                    {
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
#line 231 "string.to_string.m"
                      MR_Box mercury__string__to_string__V_57_57;
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

#line 232 "string.to_string.m"
                      {
#line 232 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
#line 233 "string.to_string.m"
                      {
#line 233 "string.to_string.m"
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
#line 233 "string.to_string.m"
                      {
#line 233 "string.to_string.m"
                        mercury__string__to_string__value_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
#line 235 "string.to_string.m"
                      {
#line 235 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 235 "string.to_string.m"
                        return;
                      }
#line 231 "string.to_string.m"
                    }
#line 230 "string.to_string.m"
                  else
#line 237 "string.to_string.m"
                    {
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

#line 239 "string.to_string.m"
                      {
#line 239 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
#line 240 "string.to_string.m"
                      {
#line 240 "string.to_string.m"
                        mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
#line 241 "string.to_string.m"
                      {
#line 241 "string.to_string.m"
                        mercury__string__to_string__term_args_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
#line 242 "string.to_string.m"
                      {
#line 242 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 242 "string.to_string.m"
                        return;
                      }
#line 237 "string.to_string.m"
                    }
#line 230 "string.to_string.m"
                }
#line 244 "string.to_string.m"
            else
#line 271 "string.to_string.m"
              {
#line 271 "string.to_string.m"
                MR_Word mercury__string__to_string__Arg_22;
#line 245 "string.to_string.m"
                MR_Word mercury__string__to_string__V_63_63;

#line 245 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 245 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 245 "string.to_string.m"
                  {
#line 245 "string.to_string.m"
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 245 "string.to_string.m"
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 245 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 257 "string.to_string.m"
                  {
#line 257 "string.to_string.m"
                    MR_Integer mercury__string__to_string__OpPriority_23;
#line 257 "string.to_string.m"
                    MR_Word mercury__string__to_string__OpAssoc_24;
#line 248 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 248 "string.to_string.m"
                    {
#line 248 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
#line 257 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 250 "string.to_string.m"
                      {
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
#line 250 "string.to_string.m"
                        MR_Integer mercury__string__to_string__NewPriority_25;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
#line 250 "string.to_string.m"
                        MR_String mercury__string__to_string__V_66_66;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
#line 250 "string.to_string.m"
                        MR_Box mercury__string__to_string__V_70_70;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

#line 250 "string.to_string.m"
                        {
#line 250 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
#line 252 "string.to_string.m"
                        {
#line 252 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
#line 253 "string.to_string.m"
                        {
#line 253 "string.to_string.m"
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
#line 255 "string.to_string.m"
                        {
#line 255 "string.to_string.m"
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
#line 254 "string.to_string.m"
                        {
#line 254 "string.to_string.m"
                          mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
#line 256 "string.to_string.m"
                        {
#line 256 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 256 "string.to_string.m"
                          return;
                        }
#line 250 "string.to_string.m"
                      }
#line 257 "string.to_string.m"
                    else
#line 267 "string.to_string.m"
                      {
#line 267 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_120;
#line 267 "string.to_string.m"
                        MR_Word mercury__string__to_string__OpAssoc_121;
#line 258 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 258 "string.to_string.m"
                        {
#line 258 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
#line 267 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 260 "string.to_string.m"
                          {
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
#line 260 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_76_76;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
#line 260 "string.to_string.m"
                            MR_String mercury__string__to_string__V_80_80;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
#line 260 "string.to_string.m"
                            MR_Integer mercury__string__to_string__NewPriority_119;

#line 260 "string.to_string.m"
                            {
#line 260 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
#line 261 "string.to_string.m"
                            {
#line 261 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
#line 263 "string.to_string.m"
                            {
#line 263 "string.to_string.m"
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
#line 264 "string.to_string.m"
                            {
#line 264 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
#line 265 "string.to_string.m"
                            {
#line 265 "string.to_string.m"
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
#line 265 "string.to_string.m"
                            {
#line 265 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
#line 266 "string.to_string.m"
                            {
#line 266 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 266 "string.to_string.m"
                              return;
                            }
#line 260 "string.to_string.m"
                          }
#line 267 "string.to_string.m"
                        else
#line 268 "string.to_string.m"
                          {
#line 268 "string.to_string.m"
                            mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 268 "string.to_string.m"
                            return;
                          }
#line 267 "string.to_string.m"
                      }
#line 257 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
                else
#line 312 "string.to_string.m"
                  {
#line 312 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg1_26;
#line 312 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg2_27;
#line 272 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_85_85;
#line 272 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_86_86;

#line 272 "string.to_string.m"
                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 272 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 272 "string.to_string.m"
                      {
#line 272 "string.to_string.m"
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 272 "string.to_string.m"
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 272 "string.to_string.m"
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 272 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 272 "string.to_string.m"
                          {
#line 272 "string.to_string.m"
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
#line 272 "string.to_string.m"
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
#line 272 "string.to_string.m"
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "string.to_string.m"
                          }
#line 272 "string.to_string.m"
                      }
#line 312 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 293 "string.to_string.m"
                      {
#line 293 "string.to_string.m"
                        MR_Word mercury__string__to_string__LeftAssoc_28;
#line 293 "string.to_string.m"
                        MR_Word mercury__string__to_string__RightAssoc_29;
#line 293 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_124;
#line 275 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 275 "string.to_string.m"
                        {
#line 275 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
#line 293 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 278 "string.to_string.m"
                          {
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
#line 278 "string.to_string.m"
                            MR_Integer mercury__string__to_string__LeftPriority_30;
#line 278 "string.to_string.m"
                            MR_Integer mercury__string__to_string__RightPriority_31;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
#line 278 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_89_89;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
#line 278 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_99_99;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

#line 278 "string.to_string.m"
                            {
#line 278 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
#line 279 "string.to_string.m"
                            {
#line 279 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
#line 281 "string.to_string.m"
                            {
#line 281 "string.to_string.m"
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
#line 280 "string.to_string.m"
                            {
#line 280 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
#line 282 "string.to_string.m"
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
#line 284 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 283 "string.to_string.m"
                              {
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 283 "string.to_string.m"
                              }
#line 284 "string.to_string.m"
                            else
#line 285 "string.to_string.m"
                              {
#line 285 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
#line 285 "string.to_string.m"
                                MR_String mercury__string__to_string__V_95_95;
#line 285 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

#line 285 "string.to_string.m"
                                {
#line 285 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
#line 286 "string.to_string.m"
                                {
#line 286 "string.to_string.m"
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 286 "string.to_string.m"
                                {
#line 286 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
#line 287 "string.to_string.m"
                                {
#line 287 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 285 "string.to_string.m"
                              }
#line 289 "string.to_string.m"
                            {
#line 289 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
#line 291 "string.to_string.m"
                            {
#line 291 "string.to_string.m"
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
#line 290 "string.to_string.m"
                            {
#line 290 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
#line 292 "string.to_string.m"
                            {
#line 292 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 292 "string.to_string.m"
                              return;
                            }
#line 278 "string.to_string.m"
                          }
#line 293 "string.to_string.m"
                        else
#line 308 "string.to_string.m"
                          {
#line 308 "string.to_string.m"
                            MR_Word mercury__string__to_string__FirstAssoc_32;
#line 308 "string.to_string.m"
                            MR_Word mercury__string__to_string__SecondAssoc_33;
#line 308 "string.to_string.m"
                            MR_Integer mercury__string__to_string__OpPriority_123;
#line 294 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 294 "string.to_string.m"
                            {
#line 294 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
#line 308 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 297 "string.to_string.m"
                              {
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
#line 297 "string.to_string.m"
                                MR_Integer mercury__string__to_string__FirstPriority_34;
#line 297 "string.to_string.m"
                                MR_Integer mercury__string__to_string__SecondPriority_35;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
#line 297 "string.to_string.m"
                                MR_String mercury__string__to_string__V_105_105;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
#line 297 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_109_109;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
#line 297 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_113_113;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

#line 297 "string.to_string.m"
                                {
#line 297 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
#line 299 "string.to_string.m"
                                {
#line 299 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
#line 300 "string.to_string.m"
                                {
#line 300 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
#line 302 "string.to_string.m"
                                {
#line 302 "string.to_string.m"
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
#line 301 "string.to_string.m"
                                {
#line 301 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
#line 303 "string.to_string.m"
                                {
#line 303 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
#line 304 "string.to_string.m"
                                {
#line 304 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
#line 306 "string.to_string.m"
                                {
#line 306 "string.to_string.m"
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
#line 305 "string.to_string.m"
                                {
#line 305 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
#line 307 "string.to_string.m"
                                {
#line 307 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 307 "string.to_string.m"
                                  return;
                                }
#line 297 "string.to_string.m"
                              }
#line 308 "string.to_string.m"
                            else
#line 309 "string.to_string.m"
                              {
#line 309 "string.to_string.m"
                                mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 309 "string.to_string.m"
                                return;
                              }
#line 308 "string.to_string.m"
                          }
#line 293 "string.to_string.m"
                      }
#line 312 "string.to_string.m"
                    else
#line 313 "string.to_string.m"
                      {
#line 313 "string.to_string.m"
                        mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 313 "string.to_string.m"
                        return;
                      }
#line 312 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
              }
#line 244 "string.to_string.m"
          }
#line 224 "string.to_string.m"
      }
#line 209 "string.to_string.m"
  }
#line 204 "string.to_string.m"
}

#line 202 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
#line 202 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 202 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 202 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 202 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 202 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 202 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
#line 202 "string.to_string.m"
{
#line 209 "string.to_string.m"
  {
#line 209 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 209 "string.to_string.m"
    MR_String mercury__string__to_string__Functor_12;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__Args_14;
#line 210 "string.to_string.m"
    MR_Integer mercury__string__to_string___Arity_13;
#line 219 "string.to_string.m"
    MR_Word mercury__string__to_string__ListHead_15;
#line 219 "string.to_string.m"
    MR_Word mercury__string__to_string__ListTail_16;
#line 212 "string.to_string.m"
    MR_Word mercury__string__to_string__V_38_38;
#line 212 "string.to_string.m"
    MR_Word mercury__string__to_string__V_39_39;

#line 210 "string.to_string.m"
    {
#line 210 "string.to_string.m"
      mercury__deconstruct__deconstruct_5_p_1(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
#line 212 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
#line 212 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 212 "string.to_string.m"
      {
#line 213 "string.to_string.m"
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 213 "string.to_string.m"
          {
#line 213 "string.to_string.m"
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 213 "string.to_string.m"
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 213 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 213 "string.to_string.m"
              {
#line 213 "string.to_string.m"
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
#line 213 "string.to_string.m"
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
#line 213 "string.to_string.m"
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "string.to_string.m"
              }
#line 213 "string.to_string.m"
          }
#line 212 "string.to_string.m"
      }
#line 219 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 215 "string.to_string.m"
      {
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

#line 215 "string.to_string.m"
        {
#line 215 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
#line 216 "string.to_string.m"
        {
#line 216 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
#line 217 "string.to_string.m"
        {
#line 217 "string.to_string.m"
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
#line 218 "string.to_string.m"
        {
#line 218 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 218 "string.to_string.m"
          return;
        }
#line 215 "string.to_string.m"
      }
#line 219 "string.to_string.m"
    else
#line 224 "string.to_string.m"
      {
#line 220 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
#line 220 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 221 "string.to_string.m"
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 223 "string.to_string.m"
          {
#line 223 "string.to_string.m"
            {
#line 223 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 223 "string.to_string.m"
              return;
            }
#line 223 "string.to_string.m"
          }
#line 224 "string.to_string.m"
        else
#line 244 "string.to_string.m"
          {
#line 225 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
#line 244 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 230 "string.to_string.m"
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "string.to_string.m"
                {
#line 229 "string.to_string.m"
                  {
#line 229 "string.to_string.m"
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 229 "string.to_string.m"
                    return;
                  }
#line 228 "string.to_string.m"
                }
#line 230 "string.to_string.m"
              else
#line 230 "string.to_string.m"
                {
#line 230 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 230 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

#line 230 "string.to_string.m"
                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "string.to_string.m"
                    {
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
#line 231 "string.to_string.m"
                      MR_Box mercury__string__to_string__V_57_57;
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

#line 232 "string.to_string.m"
                      {
#line 232 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
#line 233 "string.to_string.m"
                      {
#line 233 "string.to_string.m"
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
#line 233 "string.to_string.m"
                      {
#line 233 "string.to_string.m"
                        mercury__string__to_string__value_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
#line 235 "string.to_string.m"
                      {
#line 235 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 235 "string.to_string.m"
                        return;
                      }
#line 231 "string.to_string.m"
                    }
#line 230 "string.to_string.m"
                  else
#line 237 "string.to_string.m"
                    {
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

#line 239 "string.to_string.m"
                      {
#line 239 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
#line 240 "string.to_string.m"
                      {
#line 240 "string.to_string.m"
                        mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
#line 241 "string.to_string.m"
                      {
#line 241 "string.to_string.m"
                        mercury__string__to_string__term_args_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
#line 242 "string.to_string.m"
                      {
#line 242 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 242 "string.to_string.m"
                        return;
                      }
#line 237 "string.to_string.m"
                    }
#line 230 "string.to_string.m"
                }
#line 244 "string.to_string.m"
            else
#line 271 "string.to_string.m"
              {
#line 271 "string.to_string.m"
                MR_Word mercury__string__to_string__Arg_22;
#line 245 "string.to_string.m"
                MR_Word mercury__string__to_string__V_63_63;

#line 245 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 245 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 245 "string.to_string.m"
                  {
#line 245 "string.to_string.m"
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 245 "string.to_string.m"
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 245 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 257 "string.to_string.m"
                  {
#line 257 "string.to_string.m"
                    MR_Integer mercury__string__to_string__OpPriority_23;
#line 257 "string.to_string.m"
                    MR_Word mercury__string__to_string__OpAssoc_24;
#line 248 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 248 "string.to_string.m"
                    {
#line 248 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
#line 257 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 250 "string.to_string.m"
                      {
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
#line 250 "string.to_string.m"
                        MR_Integer mercury__string__to_string__NewPriority_25;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
#line 250 "string.to_string.m"
                        MR_String mercury__string__to_string__V_66_66;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
#line 250 "string.to_string.m"
                        MR_Box mercury__string__to_string__V_70_70;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

#line 250 "string.to_string.m"
                        {
#line 250 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
#line 252 "string.to_string.m"
                        {
#line 252 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
#line 253 "string.to_string.m"
                        {
#line 253 "string.to_string.m"
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
#line 255 "string.to_string.m"
                        {
#line 255 "string.to_string.m"
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
#line 254 "string.to_string.m"
                        {
#line 254 "string.to_string.m"
                          mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
#line 256 "string.to_string.m"
                        {
#line 256 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 256 "string.to_string.m"
                          return;
                        }
#line 250 "string.to_string.m"
                      }
#line 257 "string.to_string.m"
                    else
#line 267 "string.to_string.m"
                      {
#line 267 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_120;
#line 267 "string.to_string.m"
                        MR_Word mercury__string__to_string__OpAssoc_121;
#line 258 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 258 "string.to_string.m"
                        {
#line 258 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
#line 267 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 260 "string.to_string.m"
                          {
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
#line 260 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_76_76;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
#line 260 "string.to_string.m"
                            MR_String mercury__string__to_string__V_80_80;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
#line 260 "string.to_string.m"
                            MR_Integer mercury__string__to_string__NewPriority_119;

#line 260 "string.to_string.m"
                            {
#line 260 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
#line 261 "string.to_string.m"
                            {
#line 261 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
#line 263 "string.to_string.m"
                            {
#line 263 "string.to_string.m"
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
#line 264 "string.to_string.m"
                            {
#line 264 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
#line 265 "string.to_string.m"
                            {
#line 265 "string.to_string.m"
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
#line 265 "string.to_string.m"
                            {
#line 265 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
#line 266 "string.to_string.m"
                            {
#line 266 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 266 "string.to_string.m"
                              return;
                            }
#line 260 "string.to_string.m"
                          }
#line 267 "string.to_string.m"
                        else
#line 268 "string.to_string.m"
                          {
#line 268 "string.to_string.m"
                            mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 268 "string.to_string.m"
                            return;
                          }
#line 267 "string.to_string.m"
                      }
#line 257 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
                else
#line 312 "string.to_string.m"
                  {
#line 312 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg1_26;
#line 312 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg2_27;
#line 272 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_85_85;
#line 272 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_86_86;

#line 272 "string.to_string.m"
                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 272 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 272 "string.to_string.m"
                      {
#line 272 "string.to_string.m"
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 272 "string.to_string.m"
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 272 "string.to_string.m"
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 272 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 272 "string.to_string.m"
                          {
#line 272 "string.to_string.m"
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
#line 272 "string.to_string.m"
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
#line 272 "string.to_string.m"
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "string.to_string.m"
                          }
#line 272 "string.to_string.m"
                      }
#line 312 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 293 "string.to_string.m"
                      {
#line 293 "string.to_string.m"
                        MR_Word mercury__string__to_string__LeftAssoc_28;
#line 293 "string.to_string.m"
                        MR_Word mercury__string__to_string__RightAssoc_29;
#line 293 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_124;
#line 275 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 275 "string.to_string.m"
                        {
#line 275 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
#line 293 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 278 "string.to_string.m"
                          {
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
#line 278 "string.to_string.m"
                            MR_Integer mercury__string__to_string__LeftPriority_30;
#line 278 "string.to_string.m"
                            MR_Integer mercury__string__to_string__RightPriority_31;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
#line 278 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_89_89;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
#line 278 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_99_99;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

#line 278 "string.to_string.m"
                            {
#line 278 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
#line 279 "string.to_string.m"
                            {
#line 279 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
#line 281 "string.to_string.m"
                            {
#line 281 "string.to_string.m"
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
#line 280 "string.to_string.m"
                            {
#line 280 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
#line 282 "string.to_string.m"
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
#line 284 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 283 "string.to_string.m"
                              {
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 283 "string.to_string.m"
                              }
#line 284 "string.to_string.m"
                            else
#line 285 "string.to_string.m"
                              {
#line 285 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
#line 285 "string.to_string.m"
                                MR_String mercury__string__to_string__V_95_95;
#line 285 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

#line 285 "string.to_string.m"
                                {
#line 285 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
#line 286 "string.to_string.m"
                                {
#line 286 "string.to_string.m"
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 286 "string.to_string.m"
                                {
#line 286 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
#line 287 "string.to_string.m"
                                {
#line 287 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 285 "string.to_string.m"
                              }
#line 289 "string.to_string.m"
                            {
#line 289 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
#line 291 "string.to_string.m"
                            {
#line 291 "string.to_string.m"
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
#line 290 "string.to_string.m"
                            {
#line 290 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
#line 292 "string.to_string.m"
                            {
#line 292 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 292 "string.to_string.m"
                              return;
                            }
#line 278 "string.to_string.m"
                          }
#line 293 "string.to_string.m"
                        else
#line 308 "string.to_string.m"
                          {
#line 308 "string.to_string.m"
                            MR_Word mercury__string__to_string__FirstAssoc_32;
#line 308 "string.to_string.m"
                            MR_Word mercury__string__to_string__SecondAssoc_33;
#line 308 "string.to_string.m"
                            MR_Integer mercury__string__to_string__OpPriority_123;
#line 294 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 294 "string.to_string.m"
                            {
#line 294 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
#line 308 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 297 "string.to_string.m"
                              {
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
#line 297 "string.to_string.m"
                                MR_Integer mercury__string__to_string__FirstPriority_34;
#line 297 "string.to_string.m"
                                MR_Integer mercury__string__to_string__SecondPriority_35;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
#line 297 "string.to_string.m"
                                MR_String mercury__string__to_string__V_105_105;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
#line 297 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_109_109;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
#line 297 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_113_113;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

#line 297 "string.to_string.m"
                                {
#line 297 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
#line 299 "string.to_string.m"
                                {
#line 299 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
#line 300 "string.to_string.m"
                                {
#line 300 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
#line 302 "string.to_string.m"
                                {
#line 302 "string.to_string.m"
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
#line 301 "string.to_string.m"
                                {
#line 301 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
#line 303 "string.to_string.m"
                                {
#line 303 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
#line 304 "string.to_string.m"
                                {
#line 304 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
#line 306 "string.to_string.m"
                                {
#line 306 "string.to_string.m"
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
#line 305 "string.to_string.m"
                                {
#line 305 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
#line 307 "string.to_string.m"
                                {
#line 307 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 307 "string.to_string.m"
                                  return;
                                }
#line 297 "string.to_string.m"
                              }
#line 308 "string.to_string.m"
                            else
#line 309 "string.to_string.m"
                              {
#line 309 "string.to_string.m"
                                mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 309 "string.to_string.m"
                                return;
                              }
#line 308 "string.to_string.m"
                          }
#line 293 "string.to_string.m"
                      }
#line 312 "string.to_string.m"
                    else
#line 313 "string.to_string.m"
                      {
#line 313 "string.to_string.m"
                        mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 313 "string.to_string.m"
                        return;
                      }
#line 312 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
              }
#line 244 "string.to_string.m"
          }
#line 224 "string.to_string.m"
      }
#line 209 "string.to_string.m"
  }
#line 202 "string.to_string.m"
}

#line 200 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
#line 200 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
#line 200 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 200 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 200 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 200 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
#line 200 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
#line 200 "string.to_string.m"
{
#line 209 "string.to_string.m"
  {
#line 209 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 209 "string.to_string.m"
    MR_String mercury__string__to_string__Functor_12;
#line 209 "string.to_string.m"
    MR_Word mercury__string__to_string__Args_14;
#line 210 "string.to_string.m"
    MR_Integer mercury__string__to_string___Arity_13;
#line 219 "string.to_string.m"
    MR_Word mercury__string__to_string__ListHead_15;
#line 219 "string.to_string.m"
    MR_Word mercury__string__to_string__ListTail_16;
#line 212 "string.to_string.m"
    MR_Word mercury__string__to_string__V_38_38;
#line 212 "string.to_string.m"
    MR_Word mercury__string__to_string__V_39_39;

#line 210 "string.to_string.m"
    {
#line 210 "string.to_string.m"
      mercury__deconstruct__deconstruct_5_p_0(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
#line 212 "string.to_string.m"
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
#line 212 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 212 "string.to_string.m"
      {
#line 213 "string.to_string.m"
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 213 "string.to_string.m"
          {
#line 213 "string.to_string.m"
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 213 "string.to_string.m"
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 213 "string.to_string.m"
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 213 "string.to_string.m"
              {
#line 213 "string.to_string.m"
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
#line 213 "string.to_string.m"
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
#line 213 "string.to_string.m"
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "string.to_string.m"
              }
#line 213 "string.to_string.m"
          }
#line 212 "string.to_string.m"
      }
#line 219 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 215 "string.to_string.m"
      {
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
#line 215 "string.to_string.m"
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

#line 215 "string.to_string.m"
        {
#line 215 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
#line 216 "string.to_string.m"
        {
#line 216 "string.to_string.m"
          mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
#line 217 "string.to_string.m"
        {
#line 217 "string.to_string.m"
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
#line 218 "string.to_string.m"
        {
#line 218 "string.to_string.m"
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 218 "string.to_string.m"
          return;
        }
#line 215 "string.to_string.m"
      }
#line 219 "string.to_string.m"
    else
#line 224 "string.to_string.m"
      {
#line 220 "string.to_string.m"
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
#line 220 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 221 "string.to_string.m"
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 223 "string.to_string.m"
          {
#line 223 "string.to_string.m"
            {
#line 223 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 223 "string.to_string.m"
              return;
            }
#line 223 "string.to_string.m"
          }
#line 224 "string.to_string.m"
        else
#line 244 "string.to_string.m"
          {
#line 225 "string.to_string.m"
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
#line 244 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 230 "string.to_string.m"
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "string.to_string.m"
                {
#line 229 "string.to_string.m"
                  {
#line 229 "string.to_string.m"
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 229 "string.to_string.m"
                    return;
                  }
#line 228 "string.to_string.m"
                }
#line 230 "string.to_string.m"
              else
#line 230 "string.to_string.m"
                {
#line 230 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 230 "string.to_string.m"
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

#line 230 "string.to_string.m"
                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "string.to_string.m"
                    {
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
#line 231 "string.to_string.m"
                      MR_Box mercury__string__to_string__V_57_57;
#line 231 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

#line 232 "string.to_string.m"
                      {
#line 232 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
#line 233 "string.to_string.m"
                      {
#line 233 "string.to_string.m"
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
#line 233 "string.to_string.m"
                      {
#line 233 "string.to_string.m"
                        mercury__string__to_string__value_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
#line 235 "string.to_string.m"
                      {
#line 235 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 235 "string.to_string.m"
                        return;
                      }
#line 231 "string.to_string.m"
                    }
#line 230 "string.to_string.m"
                  else
#line 237 "string.to_string.m"
                    {
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
#line 237 "string.to_string.m"
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

#line 239 "string.to_string.m"
                      {
#line 239 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
#line 240 "string.to_string.m"
                      {
#line 240 "string.to_string.m"
                        mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
#line 241 "string.to_string.m"
                      {
#line 241 "string.to_string.m"
                        mercury__string__to_string__term_args_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
#line 242 "string.to_string.m"
                      {
#line 242 "string.to_string.m"
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 242 "string.to_string.m"
                        return;
                      }
#line 237 "string.to_string.m"
                    }
#line 230 "string.to_string.m"
                }
#line 244 "string.to_string.m"
            else
#line 271 "string.to_string.m"
              {
#line 271 "string.to_string.m"
                MR_Word mercury__string__to_string__Arg_22;
#line 245 "string.to_string.m"
                MR_Word mercury__string__to_string__V_63_63;

#line 245 "string.to_string.m"
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 245 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 245 "string.to_string.m"
                  {
#line 245 "string.to_string.m"
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 245 "string.to_string.m"
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 245 "string.to_string.m"
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 257 "string.to_string.m"
                  {
#line 257 "string.to_string.m"
                    MR_Integer mercury__string__to_string__OpPriority_23;
#line 257 "string.to_string.m"
                    MR_Word mercury__string__to_string__OpAssoc_24;
#line 248 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 248 "string.to_string.m"
                    {
#line 248 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
#line 257 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 250 "string.to_string.m"
                      {
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
#line 250 "string.to_string.m"
                        MR_Integer mercury__string__to_string__NewPriority_25;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
#line 250 "string.to_string.m"
                        MR_String mercury__string__to_string__V_66_66;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
#line 250 "string.to_string.m"
                        MR_Box mercury__string__to_string__V_70_70;
#line 250 "string.to_string.m"
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

#line 250 "string.to_string.m"
                        {
#line 250 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
#line 251 "string.to_string.m"
                        {
#line 251 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
#line 252 "string.to_string.m"
                        {
#line 252 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
#line 253 "string.to_string.m"
                        {
#line 253 "string.to_string.m"
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
#line 255 "string.to_string.m"
                        {
#line 255 "string.to_string.m"
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
#line 254 "string.to_string.m"
                        {
#line 254 "string.to_string.m"
                          mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
#line 256 "string.to_string.m"
                        {
#line 256 "string.to_string.m"
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 256 "string.to_string.m"
                          return;
                        }
#line 250 "string.to_string.m"
                      }
#line 257 "string.to_string.m"
                    else
#line 267 "string.to_string.m"
                      {
#line 267 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_120;
#line 267 "string.to_string.m"
                        MR_Word mercury__string__to_string__OpAssoc_121;
#line 258 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 258 "string.to_string.m"
                        {
#line 258 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
#line 267 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 260 "string.to_string.m"
                          {
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
#line 260 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_76_76;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
#line 260 "string.to_string.m"
                            MR_String mercury__string__to_string__V_80_80;
#line 260 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
#line 260 "string.to_string.m"
                            MR_Integer mercury__string__to_string__NewPriority_119;

#line 260 "string.to_string.m"
                            {
#line 260 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
#line 261 "string.to_string.m"
                            {
#line 261 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
#line 263 "string.to_string.m"
                            {
#line 263 "string.to_string.m"
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
#line 262 "string.to_string.m"
                            {
#line 262 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
#line 264 "string.to_string.m"
                            {
#line 264 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
#line 265 "string.to_string.m"
                            {
#line 265 "string.to_string.m"
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
#line 265 "string.to_string.m"
                            {
#line 265 "string.to_string.m"
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
#line 266 "string.to_string.m"
                            {
#line 266 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 266 "string.to_string.m"
                              return;
                            }
#line 260 "string.to_string.m"
                          }
#line 267 "string.to_string.m"
                        else
#line 268 "string.to_string.m"
                          {
#line 268 "string.to_string.m"
                            mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 268 "string.to_string.m"
                            return;
                          }
#line 267 "string.to_string.m"
                      }
#line 257 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
                else
#line 312 "string.to_string.m"
                  {
#line 312 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg1_26;
#line 312 "string.to_string.m"
                    MR_Word mercury__string__to_string__Arg2_27;
#line 272 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_85_85;
#line 272 "string.to_string.m"
                    MR_Word mercury__string__to_string__V_86_86;

#line 272 "string.to_string.m"
                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 272 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 272 "string.to_string.m"
                      {
#line 272 "string.to_string.m"
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
#line 272 "string.to_string.m"
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
#line 272 "string.to_string.m"
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 272 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 272 "string.to_string.m"
                          {
#line 272 "string.to_string.m"
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
#line 272 "string.to_string.m"
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
#line 272 "string.to_string.m"
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "string.to_string.m"
                          }
#line 272 "string.to_string.m"
                      }
#line 312 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 293 "string.to_string.m"
                      {
#line 293 "string.to_string.m"
                        MR_Word mercury__string__to_string__LeftAssoc_28;
#line 293 "string.to_string.m"
                        MR_Word mercury__string__to_string__RightAssoc_29;
#line 293 "string.to_string.m"
                        MR_Integer mercury__string__to_string__OpPriority_124;
#line 275 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 275 "string.to_string.m"
                        {
#line 275 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
#line 293 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 278 "string.to_string.m"
                          {
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
#line 278 "string.to_string.m"
                            MR_Integer mercury__string__to_string__LeftPriority_30;
#line 278 "string.to_string.m"
                            MR_Integer mercury__string__to_string__RightPriority_31;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
#line 278 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_89_89;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
#line 278 "string.to_string.m"
                            MR_Box mercury__string__to_string__V_99_99;
#line 278 "string.to_string.m"
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

#line 278 "string.to_string.m"
                            {
#line 278 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
#line 279 "string.to_string.m"
                            {
#line 279 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
#line 281 "string.to_string.m"
                            {
#line 281 "string.to_string.m"
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
#line 280 "string.to_string.m"
                            {
#line 280 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
#line 282 "string.to_string.m"
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
#line 284 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 283 "string.to_string.m"
                              {
#line 283 "string.to_string.m"
                                {
#line 283 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 283 "string.to_string.m"
                              }
#line 284 "string.to_string.m"
                            else
#line 285 "string.to_string.m"
                              {
#line 285 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
#line 285 "string.to_string.m"
                                MR_String mercury__string__to_string__V_95_95;
#line 285 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

#line 285 "string.to_string.m"
                                {
#line 285 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
#line 286 "string.to_string.m"
                                {
#line 286 "string.to_string.m"
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 286 "string.to_string.m"
                                {
#line 286 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
#line 287 "string.to_string.m"
                                {
#line 287 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
#line 285 "string.to_string.m"
                              }
#line 289 "string.to_string.m"
                            {
#line 289 "string.to_string.m"
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
#line 291 "string.to_string.m"
                            {
#line 291 "string.to_string.m"
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
#line 290 "string.to_string.m"
                            {
#line 290 "string.to_string.m"
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
#line 292 "string.to_string.m"
                            {
#line 292 "string.to_string.m"
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 292 "string.to_string.m"
                              return;
                            }
#line 278 "string.to_string.m"
                          }
#line 293 "string.to_string.m"
                        else
#line 308 "string.to_string.m"
                          {
#line 308 "string.to_string.m"
                            MR_Word mercury__string__to_string__FirstAssoc_32;
#line 308 "string.to_string.m"
                            MR_Word mercury__string__to_string__SecondAssoc_33;
#line 308 "string.to_string.m"
                            MR_Integer mercury__string__to_string__OpPriority_123;
#line 294 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

#line 294 "string.to_string.m"
                            {
#line 294 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
#line 308 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 297 "string.to_string.m"
                              {
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
#line 297 "string.to_string.m"
                                MR_Integer mercury__string__to_string__FirstPriority_34;
#line 297 "string.to_string.m"
                                MR_Integer mercury__string__to_string__SecondPriority_35;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
#line 297 "string.to_string.m"
                                MR_String mercury__string__to_string__V_105_105;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
#line 297 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_109_109;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
#line 297 "string.to_string.m"
                                MR_Box mercury__string__to_string__V_113_113;
#line 297 "string.to_string.m"
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

#line 297 "string.to_string.m"
                                {
#line 297 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
#line 298 "string.to_string.m"
                                {
#line 298 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
#line 299 "string.to_string.m"
                                {
#line 299 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
#line 300 "string.to_string.m"
                                {
#line 300 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
#line 302 "string.to_string.m"
                                {
#line 302 "string.to_string.m"
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
#line 301 "string.to_string.m"
                                {
#line 301 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
#line 303 "string.to_string.m"
                                {
#line 303 "string.to_string.m"
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
#line 304 "string.to_string.m"
                                {
#line 304 "string.to_string.m"
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
#line 306 "string.to_string.m"
                                {
#line 306 "string.to_string.m"
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
#line 305 "string.to_string.m"
                                {
#line 305 "string.to_string.m"
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
#line 307 "string.to_string.m"
                                {
#line 307 "string.to_string.m"
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 307 "string.to_string.m"
                                  return;
                                }
#line 297 "string.to_string.m"
                              }
#line 308 "string.to_string.m"
                            else
#line 309 "string.to_string.m"
                              {
#line 309 "string.to_string.m"
                                mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 309 "string.to_string.m"
                                return;
                              }
#line 308 "string.to_string.m"
                          }
#line 293 "string.to_string.m"
                      }
#line 312 "string.to_string.m"
                    else
#line 313 "string.to_string.m"
                      {
#line 313 "string.to_string.m"
                        mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
#line 313 "string.to_string.m"
                        return;
                      }
#line 312 "string.to_string.m"
                  }
#line 271 "string.to_string.m"
              }
#line 244 "string.to_string.m"
          }
#line 224 "string.to_string.m"
      }
#line 209 "string.to_string.m"
  }
#line 200 "string.to_string.m"
}

#line 107 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_3(
#line 107 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
#line 107 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 107 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 107 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 107 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
#line 107 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
#line 107 "string.to_string.m"
{
#line 117 "string.to_string.m"
  {
#line 117 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 117 "string.to_string.m"
    MR_String mercury__string__to_string__String_12;
#line 115 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 107 "builtin.opt"
    MR_Box mercury__string__to_string__conv0_String_12;

#line 107 "builtin.opt"
    {
#line 107 "builtin.opt"
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
#line 107 "builtin.opt"
    if (mercury__string__to_string__succeeded)
#line 107 "builtin.opt"
      {
#line 107 "builtin.opt"
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
#line 107 "builtin.opt"
        mercury__string__to_string__succeeded = MR_TRUE;
#line 107 "builtin.opt"
      }
#line 117 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 116 "string.to_string.m"
      {
#line 116 "string.to_string.m"
        MR_String mercury__string__to_string__V_29_29;

#line 116 "string.to_string.m"
        {
#line 116 "string.to_string.m"
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          MR_Word base;
#line 85 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
#line 85 "string.to_string.m"
        }
#line 116 "string.to_string.m"
      }
#line 117 "string.to_string.m"
    else
#line 119 "string.to_string.m"
      {
#line 119 "string.to_string.m"
        MR_Char mercury__string__to_string__Char_13;
#line 117 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 117 "string.to_string.m"
        MR_Box mercury__string__to_string__conv1_Char_13;

#line 117 "string.to_string.m"
        {
#line 117 "string.to_string.m"
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
#line 117 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 117 "string.to_string.m"
          {
#line 117 "string.to_string.m"
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
#line 117 "string.to_string.m"
            mercury__string__to_string__succeeded = MR_TRUE;
#line 117 "string.to_string.m"
          }
#line 119 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 118 "string.to_string.m"
          {
#line 118 "string.to_string.m"
            MR_String mercury__string__to_string__V_31_31;

#line 118 "string.to_string.m"
            {
#line 118 "string.to_string.m"
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
#line 118 "string.to_string.m"
            {
#line 118 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 118 "string.to_string.m"
              return;
            }
#line 118 "string.to_string.m"
          }
#line 119 "string.to_string.m"
        else
#line 121 "string.to_string.m"
          {
#line 121 "string.to_string.m"
            MR_Integer mercury__string__to_string__Int_14;
#line 119 "string.to_string.m"
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 119 "string.to_string.m"
            MR_Box mercury__string__to_string__conv2_Int_14;

#line 119 "string.to_string.m"
            {
#line 119 "string.to_string.m"
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
#line 119 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 119 "string.to_string.m"
              {
#line 119 "string.to_string.m"
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
#line 119 "string.to_string.m"
                mercury__string__to_string__succeeded = MR_TRUE;
#line 119 "string.to_string.m"
              }
#line 121 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 120 "string.to_string.m"
              {
#line 120 "string.to_string.m"
                MR_String mercury__string__to_string__V_33_33;

#line 120 "string.to_string.m"
                {
#line 120 "string.to_string.m"
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
#line 120 "string.to_string.m"
                {
#line 120 "string.to_string.m"
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 120 "string.to_string.m"
                  return;
                }
#line 120 "string.to_string.m"
              }
#line 121 "string.to_string.m"
            else
#line 123 "string.to_string.m"
              {
#line 123 "string.to_string.m"
                MR_Float mercury__string__to_string__Float_15;
#line 121 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 121 "string.to_string.m"
                MR_Box mercury__string__to_string__conv3_Float_15;

#line 121 "string.to_string.m"
                {
#line 121 "string.to_string.m"
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
#line 121 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 121 "string.to_string.m"
                  {
#line 121 "string.to_string.m"
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
#line 121 "string.to_string.m"
                    mercury__string__to_string__succeeded = MR_TRUE;
#line 121 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 122 "string.to_string.m"
                  {
#line 122 "string.to_string.m"
                    MR_String mercury__string__to_string__V_35_35;

#line 122 "string.to_string.m"
                    {
#line 122 "string.to_string.m"
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
#line 122 "string.to_string.m"
                    {
#line 122 "string.to_string.m"
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 122 "string.to_string.m"
                      return;
                    }
#line 122 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
                else
#line 125 "string.to_string.m"
                  {
#line 125 "string.to_string.m"
                    MR_Box mercury__string__to_string__Bitmap_16;
#line 123 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 123 "string.to_string.m"
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

#line 123 "string.to_string.m"
                    {
#line 123 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
#line 123 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 123 "string.to_string.m"
                      {
#line 123 "string.to_string.m"
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
#line 123 "string.to_string.m"
                        mercury__string__to_string__succeeded = MR_TRUE;
#line 123 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 124 "string.to_string.m"
                      {
#line 124 "string.to_string.m"
                        MR_String mercury__string__to_string__V_37_37;
#line 124 "string.to_string.m"
                        MR_String mercury__string__to_string__V_39_39;

#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 124 "string.to_string.m"
                          return;
                        }
#line 124 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                    else
#line 127 "string.to_string.m"
                      {
#line 127 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeDesc_17;
#line 125 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 125 "string.to_string.m"
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

#line 125 "string.to_string.m"
                        {
#line 125 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
#line 125 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 125 "string.to_string.m"
                          {
#line 125 "string.to_string.m"
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
#line 125 "string.to_string.m"
                            mercury__string__to_string__succeeded = MR_TRUE;
#line 125 "string.to_string.m"
                          }
#line 127 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 126 "string.to_string.m"
                          {
#line 126 "string.to_string.m"
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 126 "string.to_string.m"
                            return;
                          }
#line 127 "string.to_string.m"
                        else
#line 129 "string.to_string.m"
                          {
#line 129 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
#line 127 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
#line 127 "string.to_string.m"
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

#line 127 "string.to_string.m"
                            {
#line 127 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
#line 127 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 127 "string.to_string.m"
                              {
#line 127 "string.to_string.m"
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
#line 127 "string.to_string.m"
                                mercury__string__to_string__succeeded = MR_TRUE;
#line 127 "string.to_string.m"
                              }
#line 129 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 128 "string.to_string.m"
                              {
#line 128 "string.to_string.m"
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 128 "string.to_string.m"
                                return;
                              }
#line 129 "string.to_string.m"
                            else
#line 131 "string.to_string.m"
                              {
#line 131 "string.to_string.m"
                                MR_Word mercury__string__to_string__C_Pointer_19;
#line 129 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 129 "string.to_string.m"
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

#line 129 "string.to_string.m"
                                {
#line 129 "string.to_string.m"
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
#line 129 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 129 "string.to_string.m"
                                  {
#line 129 "string.to_string.m"
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
#line 129 "string.to_string.m"
                                    mercury__string__to_string__succeeded = MR_TRUE;
#line 129 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 130 "string.to_string.m"
                                  {
#line 130 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_42_42;

#line 130 "string.to_string.m"
                                    {
#line 130 "string.to_string.m"
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
#line 130 "string.to_string.m"
                                    {
#line 130 "string.to_string.m"
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 130 "string.to_string.m"
                                      return;
                                    }
#line 130 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                                else
#line 157 "string.to_string.m"
                                  {
#line 157 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ElemType_22;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__TypeCtor_20;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ArgTypes_21;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_44_44;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_45_45;
#line 145 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_46_46;
#line 145 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_47_47;
#line 58 "type_desc.opt"
                                    MR_Box mercury__string__to_string__V_91_91;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 8427 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 8457 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 146 "string.to_string.m"
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 146 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 146 "string.to_string.m"
                                      {
#line 146 "string.to_string.m"
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
#line 146 "string.to_string.m"
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
#line 146 "string.to_string.m"
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 145 "string.to_string.m"
                                          {
#line 147 "string.to_string.m"
                                            {
#line 147 "string.to_string.m"
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
#line 147 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
#line 145 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 145 "string.to_string.m"
                                              {
#line 148 "string.to_string.m"
                                                {
#line 148 "string.to_string.m"
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
#line 148 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
#line 145 "string.to_string.m"
                                              }
#line 145 "string.to_string.m"
                                          }
#line 146 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 153 "string.to_string.m"
                                      {
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
#line 153 "string.to_string.m"
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
#line 74 "type_desc.opt"
                                        MR_Box mercury__string__to_string__Elem_23;
#line 155 "string.to_string.m"
                                        MR_Box mercury__string__to_string__conv8_Array_24;

#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 8535 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 154 "string.to_string.m"
                                        {
#line 154 "string.to_string.m"
                                          mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                        }
#line 8547 "string.to_string.c"
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 8549 "string.to_string.c"
                                        {
#line 8551 "string.to_string.c"
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8553 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
#line 8555 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
#line 8557 "string.to_string.c"
                                        }
#line 155 "string.to_string.m"
                                        {
#line 155 "string.to_string.m"
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
#line 155 "string.to_string.m"
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
#line 156 "string.to_string.m"
                                        {
#line 156 "string.to_string.m"
                                          mercury__string__to_string__array_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 156 "string.to_string.m"
                                          return;
                                        }
#line 153 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                    else
#line 167 "string.to_string.m"
                                      {
#line 167 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ElemType_72;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_49_49;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_50_50;
#line 158 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_51_51;
#line 158 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_52_52;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtor_60;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ArgTypes_61;
#line 58 "type_desc.opt"
                                        MR_Box mercury__string__to_string__V_92_92;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 8622 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 8652 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 159 "string.to_string.m"
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 159 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 159 "string.to_string.m"
                                          {
#line 159 "string.to_string.m"
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
#line 159 "string.to_string.m"
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
#line 159 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 158 "string.to_string.m"
                                              {
#line 160 "string.to_string.m"
                                                {
#line 160 "string.to_string.m"
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
#line 160 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
#line 158 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 158 "string.to_string.m"
                                                  {
#line 161 "string.to_string.m"
                                                    {
#line 161 "string.to_string.m"
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
#line 161 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
#line 158 "string.to_string.m"
                                                  }
#line 158 "string.to_string.m"
                                              }
#line 159 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 163 "string.to_string.m"
                                          {
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
#line 163 "string.to_string.m"
                                            MR_Box mercury__string__to_string__VersionArray_25;
#line 74 "type_desc.opt"
                                            MR_Box mercury__string__to_string__Elem_62;
#line 165 "string.to_string.m"
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 8730 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 164 "string.to_string.m"
                                            {
#line 164 "string.to_string.m"
                                              mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                            }
#line 8742 "string.to_string.c"
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 8744 "string.to_string.c"
                                            {
#line 8746 "string.to_string.c"
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8748 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
#line 8750 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
#line 8752 "string.to_string.c"
                                            }
#line 165 "string.to_string.m"
                                            {
#line 165 "string.to_string.m"
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
#line 165 "string.to_string.m"
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
#line 166 "string.to_string.m"
                                            {
#line 166 "string.to_string.m"
                                              mercury__string__to_string__version_array_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 166 "string.to_string.m"
                                              return;
                                            }
#line 163 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                        else
#line 180 "string.to_string.m"
                                          {
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_54_54;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_55_55;
#line 171 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_56_56;
#line 171 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_57_57;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtor_63;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ArgTypes_64;
#line 58 "type_desc.opt"
                                            MR_Box mercury__string__to_string__V_93_93;
#line 172 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ElemType_68;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 8817 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 8847 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 172 "string.to_string.m"
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
#line 172 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 172 "string.to_string.m"
                                              {
#line 172 "string.to_string.m"
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
#line 172 "string.to_string.m"
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
#line 172 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 171 "string.to_string.m"
                                                  {
#line 173 "string.to_string.m"
                                                    {
#line 173 "string.to_string.m"
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
#line 173 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
#line 171 "string.to_string.m"
                                                    if (mercury__string__to_string__succeeded)
#line 171 "string.to_string.m"
                                                      {
#line 174 "string.to_string.m"
                                                        {
#line 174 "string.to_string.m"
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
#line 174 "string.to_string.m"
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
#line 171 "string.to_string.m"
                                                      }
#line 171 "string.to_string.m"
                                                  }
#line 172 "string.to_string.m"
                                              }
#line 180 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 176 "string.to_string.m"
                                              {
#line 176 "string.to_string.m"
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
#line 176 "string.to_string.m"
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90;
#line 178 "string.to_string.m"
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

#line 177 "string.to_string.m"
                                                {
#line 177 "string.to_string.m"
                                                  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                                }
#line 8911 "string.to_string.c"
                                                mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
#line 178 "string.to_string.m"
                                                {
#line 178 "string.to_string.m"
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
#line 178 "string.to_string.m"
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
#line 179 "string.to_string.m"
                                                {
#line 179 "string.to_string.m"
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 179 "string.to_string.m"
                                                  return;
                                                }
#line 176 "string.to_string.m"
                                              }
#line 180 "string.to_string.m"
                                            else
#line 181 "string.to_string.m"
                                              {
#line 181 "string.to_string.m"
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 181 "string.to_string.m"
                                                return;
                                              }
#line 180 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                              }
#line 129 "string.to_string.m"
                          }
#line 127 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
              }
#line 121 "string.to_string.m"
          }
#line 119 "string.to_string.m"
      }
#line 117 "string.to_string.m"
  }
#line 107 "string.to_string.m"
}

#line 105 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_2(
#line 105 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
#line 105 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 105 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 105 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 105 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
#line 105 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
#line 105 "string.to_string.m"
{
#line 117 "string.to_string.m"
  {
#line 117 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 117 "string.to_string.m"
    MR_String mercury__string__to_string__String_12;
#line 115 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 107 "builtin.opt"
    MR_Box mercury__string__to_string__conv0_String_12;

#line 107 "builtin.opt"
    {
#line 107 "builtin.opt"
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
#line 107 "builtin.opt"
    if (mercury__string__to_string__succeeded)
#line 107 "builtin.opt"
      {
#line 107 "builtin.opt"
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
#line 107 "builtin.opt"
        mercury__string__to_string__succeeded = MR_TRUE;
#line 107 "builtin.opt"
      }
#line 117 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 116 "string.to_string.m"
      {
#line 116 "string.to_string.m"
        MR_String mercury__string__to_string__V_29_29;

#line 116 "string.to_string.m"
        {
#line 116 "string.to_string.m"
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          MR_Word base;
#line 85 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
#line 85 "string.to_string.m"
        }
#line 116 "string.to_string.m"
      }
#line 117 "string.to_string.m"
    else
#line 119 "string.to_string.m"
      {
#line 119 "string.to_string.m"
        MR_Char mercury__string__to_string__Char_13;
#line 117 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 117 "string.to_string.m"
        MR_Box mercury__string__to_string__conv1_Char_13;

#line 117 "string.to_string.m"
        {
#line 117 "string.to_string.m"
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
#line 117 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 117 "string.to_string.m"
          {
#line 117 "string.to_string.m"
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
#line 117 "string.to_string.m"
            mercury__string__to_string__succeeded = MR_TRUE;
#line 117 "string.to_string.m"
          }
#line 119 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 118 "string.to_string.m"
          {
#line 118 "string.to_string.m"
            MR_String mercury__string__to_string__V_31_31;

#line 118 "string.to_string.m"
            {
#line 118 "string.to_string.m"
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
#line 118 "string.to_string.m"
            {
#line 118 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 118 "string.to_string.m"
              return;
            }
#line 118 "string.to_string.m"
          }
#line 119 "string.to_string.m"
        else
#line 121 "string.to_string.m"
          {
#line 121 "string.to_string.m"
            MR_Integer mercury__string__to_string__Int_14;
#line 119 "string.to_string.m"
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 119 "string.to_string.m"
            MR_Box mercury__string__to_string__conv2_Int_14;

#line 119 "string.to_string.m"
            {
#line 119 "string.to_string.m"
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
#line 119 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 119 "string.to_string.m"
              {
#line 119 "string.to_string.m"
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
#line 119 "string.to_string.m"
                mercury__string__to_string__succeeded = MR_TRUE;
#line 119 "string.to_string.m"
              }
#line 121 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 120 "string.to_string.m"
              {
#line 120 "string.to_string.m"
                MR_String mercury__string__to_string__V_33_33;

#line 120 "string.to_string.m"
                {
#line 120 "string.to_string.m"
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
#line 120 "string.to_string.m"
                {
#line 120 "string.to_string.m"
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 120 "string.to_string.m"
                  return;
                }
#line 120 "string.to_string.m"
              }
#line 121 "string.to_string.m"
            else
#line 123 "string.to_string.m"
              {
#line 123 "string.to_string.m"
                MR_Float mercury__string__to_string__Float_15;
#line 121 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 121 "string.to_string.m"
                MR_Box mercury__string__to_string__conv3_Float_15;

#line 121 "string.to_string.m"
                {
#line 121 "string.to_string.m"
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
#line 121 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 121 "string.to_string.m"
                  {
#line 121 "string.to_string.m"
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
#line 121 "string.to_string.m"
                    mercury__string__to_string__succeeded = MR_TRUE;
#line 121 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 122 "string.to_string.m"
                  {
#line 122 "string.to_string.m"
                    MR_String mercury__string__to_string__V_35_35;

#line 122 "string.to_string.m"
                    {
#line 122 "string.to_string.m"
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
#line 122 "string.to_string.m"
                    {
#line 122 "string.to_string.m"
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 122 "string.to_string.m"
                      return;
                    }
#line 122 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
                else
#line 125 "string.to_string.m"
                  {
#line 125 "string.to_string.m"
                    MR_Box mercury__string__to_string__Bitmap_16;
#line 123 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 123 "string.to_string.m"
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

#line 123 "string.to_string.m"
                    {
#line 123 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
#line 123 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 123 "string.to_string.m"
                      {
#line 123 "string.to_string.m"
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
#line 123 "string.to_string.m"
                        mercury__string__to_string__succeeded = MR_TRUE;
#line 123 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 124 "string.to_string.m"
                      {
#line 124 "string.to_string.m"
                        MR_String mercury__string__to_string__V_37_37;
#line 124 "string.to_string.m"
                        MR_String mercury__string__to_string__V_39_39;

#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 124 "string.to_string.m"
                          return;
                        }
#line 124 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                    else
#line 127 "string.to_string.m"
                      {
#line 127 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeDesc_17;
#line 125 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 125 "string.to_string.m"
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

#line 125 "string.to_string.m"
                        {
#line 125 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
#line 125 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 125 "string.to_string.m"
                          {
#line 125 "string.to_string.m"
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
#line 125 "string.to_string.m"
                            mercury__string__to_string__succeeded = MR_TRUE;
#line 125 "string.to_string.m"
                          }
#line 127 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 126 "string.to_string.m"
                          {
#line 126 "string.to_string.m"
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 126 "string.to_string.m"
                            return;
                          }
#line 127 "string.to_string.m"
                        else
#line 129 "string.to_string.m"
                          {
#line 129 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
#line 127 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
#line 127 "string.to_string.m"
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

#line 127 "string.to_string.m"
                            {
#line 127 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
#line 127 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 127 "string.to_string.m"
                              {
#line 127 "string.to_string.m"
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
#line 127 "string.to_string.m"
                                mercury__string__to_string__succeeded = MR_TRUE;
#line 127 "string.to_string.m"
                              }
#line 129 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 128 "string.to_string.m"
                              {
#line 128 "string.to_string.m"
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 128 "string.to_string.m"
                                return;
                              }
#line 129 "string.to_string.m"
                            else
#line 131 "string.to_string.m"
                              {
#line 131 "string.to_string.m"
                                MR_Word mercury__string__to_string__C_Pointer_19;
#line 129 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 129 "string.to_string.m"
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

#line 129 "string.to_string.m"
                                {
#line 129 "string.to_string.m"
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
#line 129 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 129 "string.to_string.m"
                                  {
#line 129 "string.to_string.m"
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
#line 129 "string.to_string.m"
                                    mercury__string__to_string__succeeded = MR_TRUE;
#line 129 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 130 "string.to_string.m"
                                  {
#line 130 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_42_42;

#line 130 "string.to_string.m"
                                    {
#line 130 "string.to_string.m"
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
#line 130 "string.to_string.m"
                                    {
#line 130 "string.to_string.m"
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 130 "string.to_string.m"
                                      return;
                                    }
#line 130 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                                else
#line 157 "string.to_string.m"
                                  {
#line 157 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ElemType_22;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__TypeCtor_20;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ArgTypes_21;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_44_44;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_45_45;
#line 145 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_46_46;
#line 145 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_47_47;
#line 58 "type_desc.opt"
                                    MR_Box mercury__string__to_string__V_91_91;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 9393 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9423 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 146 "string.to_string.m"
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 146 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 146 "string.to_string.m"
                                      {
#line 146 "string.to_string.m"
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
#line 146 "string.to_string.m"
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
#line 146 "string.to_string.m"
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 145 "string.to_string.m"
                                          {
#line 147 "string.to_string.m"
                                            {
#line 147 "string.to_string.m"
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
#line 147 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
#line 145 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 145 "string.to_string.m"
                                              {
#line 148 "string.to_string.m"
                                                {
#line 148 "string.to_string.m"
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
#line 148 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
#line 145 "string.to_string.m"
                                              }
#line 145 "string.to_string.m"
                                          }
#line 146 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 153 "string.to_string.m"
                                      {
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
#line 153 "string.to_string.m"
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
#line 74 "type_desc.opt"
                                        MR_Box mercury__string__to_string__Elem_23;
#line 155 "string.to_string.m"
                                        MR_Box mercury__string__to_string__conv8_Array_24;

#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9501 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 154 "string.to_string.m"
                                        {
#line 154 "string.to_string.m"
                                          mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                        }
#line 9513 "string.to_string.c"
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 9515 "string.to_string.c"
                                        {
#line 9517 "string.to_string.c"
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9519 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
#line 9521 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
#line 9523 "string.to_string.c"
                                        }
#line 155 "string.to_string.m"
                                        {
#line 155 "string.to_string.m"
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
#line 155 "string.to_string.m"
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
#line 156 "string.to_string.m"
                                        {
#line 156 "string.to_string.m"
                                          mercury__string__to_string__array_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 156 "string.to_string.m"
                                          return;
                                        }
#line 153 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                    else
#line 167 "string.to_string.m"
                                      {
#line 167 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ElemType_72;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_49_49;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_50_50;
#line 158 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_51_51;
#line 158 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_52_52;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtor_60;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ArgTypes_61;
#line 58 "type_desc.opt"
                                        MR_Box mercury__string__to_string__V_92_92;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 9588 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9618 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 159 "string.to_string.m"
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 159 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 159 "string.to_string.m"
                                          {
#line 159 "string.to_string.m"
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
#line 159 "string.to_string.m"
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
#line 159 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 158 "string.to_string.m"
                                              {
#line 160 "string.to_string.m"
                                                {
#line 160 "string.to_string.m"
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
#line 160 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
#line 158 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 158 "string.to_string.m"
                                                  {
#line 161 "string.to_string.m"
                                                    {
#line 161 "string.to_string.m"
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
#line 161 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
#line 158 "string.to_string.m"
                                                  }
#line 158 "string.to_string.m"
                                              }
#line 159 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 163 "string.to_string.m"
                                          {
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
#line 163 "string.to_string.m"
                                            MR_Box mercury__string__to_string__VersionArray_25;
#line 74 "type_desc.opt"
                                            MR_Box mercury__string__to_string__Elem_62;
#line 165 "string.to_string.m"
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9696 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 164 "string.to_string.m"
                                            {
#line 164 "string.to_string.m"
                                              mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                            }
#line 9708 "string.to_string.c"
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 9710 "string.to_string.c"
                                            {
#line 9712 "string.to_string.c"
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9714 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
#line 9716 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
#line 9718 "string.to_string.c"
                                            }
#line 165 "string.to_string.m"
                                            {
#line 165 "string.to_string.m"
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
#line 165 "string.to_string.m"
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
#line 166 "string.to_string.m"
                                            {
#line 166 "string.to_string.m"
                                              mercury__string__to_string__version_array_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 166 "string.to_string.m"
                                              return;
                                            }
#line 163 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                        else
#line 180 "string.to_string.m"
                                          {
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_54_54;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_55_55;
#line 171 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_56_56;
#line 171 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_57_57;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtor_63;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ArgTypes_64;
#line 58 "type_desc.opt"
                                            MR_Box mercury__string__to_string__V_93_93;
#line 172 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ElemType_68;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 9783 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9813 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 172 "string.to_string.m"
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
#line 172 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 172 "string.to_string.m"
                                              {
#line 172 "string.to_string.m"
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
#line 172 "string.to_string.m"
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
#line 172 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 171 "string.to_string.m"
                                                  {
#line 173 "string.to_string.m"
                                                    {
#line 173 "string.to_string.m"
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
#line 173 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
#line 171 "string.to_string.m"
                                                    if (mercury__string__to_string__succeeded)
#line 171 "string.to_string.m"
                                                      {
#line 174 "string.to_string.m"
                                                        {
#line 174 "string.to_string.m"
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
#line 174 "string.to_string.m"
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
#line 171 "string.to_string.m"
                                                      }
#line 171 "string.to_string.m"
                                                  }
#line 172 "string.to_string.m"
                                              }
#line 180 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 176 "string.to_string.m"
                                              {
#line 176 "string.to_string.m"
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
#line 176 "string.to_string.m"
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90;
#line 178 "string.to_string.m"
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

#line 177 "string.to_string.m"
                                                {
#line 177 "string.to_string.m"
                                                  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                                }
#line 9877 "string.to_string.c"
                                                mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
#line 178 "string.to_string.m"
                                                {
#line 178 "string.to_string.m"
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
#line 178 "string.to_string.m"
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
#line 179 "string.to_string.m"
                                                {
#line 179 "string.to_string.m"
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 179 "string.to_string.m"
                                                  return;
                                                }
#line 176 "string.to_string.m"
                                              }
#line 180 "string.to_string.m"
                                            else
#line 181 "string.to_string.m"
                                              {
#line 181 "string.to_string.m"
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 181 "string.to_string.m"
                                                return;
                                              }
#line 180 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                              }
#line 129 "string.to_string.m"
                          }
#line 127 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
              }
#line 121 "string.to_string.m"
          }
#line 119 "string.to_string.m"
      }
#line 117 "string.to_string.m"
  }
#line 105 "string.to_string.m"
}

#line 104 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_1(
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
#line 117 "string.to_string.m"
  {
#line 117 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 117 "string.to_string.m"
    MR_String mercury__string__to_string__String_12;
#line 115 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 107 "builtin.opt"
    MR_Box mercury__string__to_string__conv0_String_12;

#line 107 "builtin.opt"
    {
#line 107 "builtin.opt"
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
#line 107 "builtin.opt"
    if (mercury__string__to_string__succeeded)
#line 107 "builtin.opt"
      {
#line 107 "builtin.opt"
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
#line 107 "builtin.opt"
        mercury__string__to_string__succeeded = MR_TRUE;
#line 107 "builtin.opt"
      }
#line 117 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 116 "string.to_string.m"
      {
#line 116 "string.to_string.m"
        MR_String mercury__string__to_string__V_29_29;

#line 116 "string.to_string.m"
        {
#line 116 "string.to_string.m"
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          MR_Word base;
#line 85 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
#line 85 "string.to_string.m"
        }
#line 116 "string.to_string.m"
      }
#line 117 "string.to_string.m"
    else
#line 119 "string.to_string.m"
      {
#line 119 "string.to_string.m"
        MR_Char mercury__string__to_string__Char_13;
#line 117 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 117 "string.to_string.m"
        MR_Box mercury__string__to_string__conv1_Char_13;

#line 117 "string.to_string.m"
        {
#line 117 "string.to_string.m"
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
#line 117 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 117 "string.to_string.m"
          {
#line 117 "string.to_string.m"
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
#line 117 "string.to_string.m"
            mercury__string__to_string__succeeded = MR_TRUE;
#line 117 "string.to_string.m"
          }
#line 119 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 118 "string.to_string.m"
          {
#line 118 "string.to_string.m"
            MR_String mercury__string__to_string__V_31_31;

#line 118 "string.to_string.m"
            {
#line 118 "string.to_string.m"
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
#line 118 "string.to_string.m"
            {
#line 118 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 118 "string.to_string.m"
              return;
            }
#line 118 "string.to_string.m"
          }
#line 119 "string.to_string.m"
        else
#line 121 "string.to_string.m"
          {
#line 121 "string.to_string.m"
            MR_Integer mercury__string__to_string__Int_14;
#line 119 "string.to_string.m"
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 119 "string.to_string.m"
            MR_Box mercury__string__to_string__conv2_Int_14;

#line 119 "string.to_string.m"
            {
#line 119 "string.to_string.m"
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
#line 119 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 119 "string.to_string.m"
              {
#line 119 "string.to_string.m"
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
#line 119 "string.to_string.m"
                mercury__string__to_string__succeeded = MR_TRUE;
#line 119 "string.to_string.m"
              }
#line 121 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 120 "string.to_string.m"
              {
#line 120 "string.to_string.m"
                MR_String mercury__string__to_string__V_33_33;

#line 120 "string.to_string.m"
                {
#line 120 "string.to_string.m"
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
#line 120 "string.to_string.m"
                {
#line 120 "string.to_string.m"
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 120 "string.to_string.m"
                  return;
                }
#line 120 "string.to_string.m"
              }
#line 121 "string.to_string.m"
            else
#line 123 "string.to_string.m"
              {
#line 123 "string.to_string.m"
                MR_Float mercury__string__to_string__Float_15;
#line 121 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 121 "string.to_string.m"
                MR_Box mercury__string__to_string__conv3_Float_15;

#line 121 "string.to_string.m"
                {
#line 121 "string.to_string.m"
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
#line 121 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 121 "string.to_string.m"
                  {
#line 121 "string.to_string.m"
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
#line 121 "string.to_string.m"
                    mercury__string__to_string__succeeded = MR_TRUE;
#line 121 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 122 "string.to_string.m"
                  {
#line 122 "string.to_string.m"
                    MR_String mercury__string__to_string__V_35_35;

#line 122 "string.to_string.m"
                    {
#line 122 "string.to_string.m"
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
#line 122 "string.to_string.m"
                    {
#line 122 "string.to_string.m"
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 122 "string.to_string.m"
                      return;
                    }
#line 122 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
                else
#line 125 "string.to_string.m"
                  {
#line 125 "string.to_string.m"
                    MR_Box mercury__string__to_string__Bitmap_16;
#line 123 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 123 "string.to_string.m"
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

#line 123 "string.to_string.m"
                    {
#line 123 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
#line 123 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 123 "string.to_string.m"
                      {
#line 123 "string.to_string.m"
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
#line 123 "string.to_string.m"
                        mercury__string__to_string__succeeded = MR_TRUE;
#line 123 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 124 "string.to_string.m"
                      {
#line 124 "string.to_string.m"
                        MR_String mercury__string__to_string__V_37_37;
#line 124 "string.to_string.m"
                        MR_String mercury__string__to_string__V_39_39;

#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 124 "string.to_string.m"
                          return;
                        }
#line 124 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                    else
#line 127 "string.to_string.m"
                      {
#line 127 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeDesc_17;
#line 125 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 125 "string.to_string.m"
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

#line 125 "string.to_string.m"
                        {
#line 125 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
#line 125 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 125 "string.to_string.m"
                          {
#line 125 "string.to_string.m"
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
#line 125 "string.to_string.m"
                            mercury__string__to_string__succeeded = MR_TRUE;
#line 125 "string.to_string.m"
                          }
#line 127 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 126 "string.to_string.m"
                          {
#line 126 "string.to_string.m"
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 126 "string.to_string.m"
                            return;
                          }
#line 127 "string.to_string.m"
                        else
#line 129 "string.to_string.m"
                          {
#line 129 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
#line 127 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
#line 127 "string.to_string.m"
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

#line 127 "string.to_string.m"
                            {
#line 127 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
#line 127 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 127 "string.to_string.m"
                              {
#line 127 "string.to_string.m"
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
#line 127 "string.to_string.m"
                                mercury__string__to_string__succeeded = MR_TRUE;
#line 127 "string.to_string.m"
                              }
#line 129 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 128 "string.to_string.m"
                              {
#line 128 "string.to_string.m"
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 128 "string.to_string.m"
                                return;
                              }
#line 129 "string.to_string.m"
                            else
#line 131 "string.to_string.m"
                              {
#line 131 "string.to_string.m"
                                MR_Word mercury__string__to_string__C_Pointer_19;
#line 129 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 129 "string.to_string.m"
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

#line 129 "string.to_string.m"
                                {
#line 129 "string.to_string.m"
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
#line 129 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 129 "string.to_string.m"
                                  {
#line 129 "string.to_string.m"
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
#line 129 "string.to_string.m"
                                    mercury__string__to_string__succeeded = MR_TRUE;
#line 129 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 130 "string.to_string.m"
                                  {
#line 130 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_42_42;

#line 130 "string.to_string.m"
                                    {
#line 130 "string.to_string.m"
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
#line 130 "string.to_string.m"
                                    {
#line 130 "string.to_string.m"
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 130 "string.to_string.m"
                                      return;
                                    }
#line 130 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                                else
#line 157 "string.to_string.m"
                                  {
#line 157 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ElemType_22;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__TypeCtor_20;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ArgTypes_21;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_44_44;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_45_45;
#line 145 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_46_46;
#line 145 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_47_47;
#line 58 "type_desc.opt"
                                    MR_Box mercury__string__to_string__V_91_91;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 10359 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10389 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 146 "string.to_string.m"
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 146 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 146 "string.to_string.m"
                                      {
#line 146 "string.to_string.m"
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
#line 146 "string.to_string.m"
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
#line 146 "string.to_string.m"
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 145 "string.to_string.m"
                                          {
#line 147 "string.to_string.m"
                                            {
#line 147 "string.to_string.m"
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
#line 147 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
#line 145 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 145 "string.to_string.m"
                                              {
#line 148 "string.to_string.m"
                                                {
#line 148 "string.to_string.m"
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
#line 148 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
#line 145 "string.to_string.m"
                                              }
#line 145 "string.to_string.m"
                                          }
#line 146 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 153 "string.to_string.m"
                                      {
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
#line 153 "string.to_string.m"
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
#line 74 "type_desc.opt"
                                        MR_Box mercury__string__to_string__Elem_23;
#line 155 "string.to_string.m"
                                        MR_Box mercury__string__to_string__conv8_Array_24;

#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 10467 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 154 "string.to_string.m"
                                        {
#line 154 "string.to_string.m"
                                          mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                        }
#line 10479 "string.to_string.c"
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 10481 "string.to_string.c"
                                        {
#line 10483 "string.to_string.c"
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10485 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
#line 10487 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
#line 10489 "string.to_string.c"
                                        }
#line 155 "string.to_string.m"
                                        {
#line 155 "string.to_string.m"
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
#line 155 "string.to_string.m"
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
#line 156 "string.to_string.m"
                                        {
#line 156 "string.to_string.m"
                                          mercury__string__to_string__array_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 156 "string.to_string.m"
                                          return;
                                        }
#line 153 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                    else
#line 167 "string.to_string.m"
                                      {
#line 167 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ElemType_72;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_49_49;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_50_50;
#line 158 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_51_51;
#line 158 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_52_52;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtor_60;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ArgTypes_61;
#line 58 "type_desc.opt"
                                        MR_Box mercury__string__to_string__V_92_92;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 10554 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10584 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 159 "string.to_string.m"
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 159 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 159 "string.to_string.m"
                                          {
#line 159 "string.to_string.m"
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
#line 159 "string.to_string.m"
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
#line 159 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 158 "string.to_string.m"
                                              {
#line 160 "string.to_string.m"
                                                {
#line 160 "string.to_string.m"
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
#line 160 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
#line 158 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 158 "string.to_string.m"
                                                  {
#line 161 "string.to_string.m"
                                                    {
#line 161 "string.to_string.m"
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
#line 161 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
#line 158 "string.to_string.m"
                                                  }
#line 158 "string.to_string.m"
                                              }
#line 159 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 163 "string.to_string.m"
                                          {
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
#line 163 "string.to_string.m"
                                            MR_Box mercury__string__to_string__VersionArray_25;
#line 74 "type_desc.opt"
                                            MR_Box mercury__string__to_string__Elem_62;
#line 165 "string.to_string.m"
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 10662 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 164 "string.to_string.m"
                                            {
#line 164 "string.to_string.m"
                                              mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                            }
#line 10674 "string.to_string.c"
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 10676 "string.to_string.c"
                                            {
#line 10678 "string.to_string.c"
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10680 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
#line 10682 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
#line 10684 "string.to_string.c"
                                            }
#line 165 "string.to_string.m"
                                            {
#line 165 "string.to_string.m"
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
#line 165 "string.to_string.m"
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
#line 166 "string.to_string.m"
                                            {
#line 166 "string.to_string.m"
                                              mercury__string__to_string__version_array_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 166 "string.to_string.m"
                                              return;
                                            }
#line 163 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                        else
#line 180 "string.to_string.m"
                                          {
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_54_54;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_55_55;
#line 171 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_56_56;
#line 171 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_57_57;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtor_63;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ArgTypes_64;
#line 58 "type_desc.opt"
                                            MR_Box mercury__string__to_string__V_93_93;
#line 172 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ElemType_68;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 10749 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10779 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 172 "string.to_string.m"
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
#line 172 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 172 "string.to_string.m"
                                              {
#line 172 "string.to_string.m"
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
#line 172 "string.to_string.m"
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
#line 172 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 171 "string.to_string.m"
                                                  {
#line 173 "string.to_string.m"
                                                    {
#line 173 "string.to_string.m"
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
#line 173 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
#line 171 "string.to_string.m"
                                                    if (mercury__string__to_string__succeeded)
#line 171 "string.to_string.m"
                                                      {
#line 174 "string.to_string.m"
                                                        {
#line 174 "string.to_string.m"
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
#line 174 "string.to_string.m"
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
#line 171 "string.to_string.m"
                                                      }
#line 171 "string.to_string.m"
                                                  }
#line 172 "string.to_string.m"
                                              }
#line 180 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 176 "string.to_string.m"
                                              {
#line 176 "string.to_string.m"
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
#line 176 "string.to_string.m"
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90;
#line 178 "string.to_string.m"
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

#line 177 "string.to_string.m"
                                                {
#line 177 "string.to_string.m"
                                                  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                                }
#line 10843 "string.to_string.c"
                                                mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
#line 178 "string.to_string.m"
                                                {
#line 178 "string.to_string.m"
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
#line 178 "string.to_string.m"
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
#line 179 "string.to_string.m"
                                                {
#line 179 "string.to_string.m"
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 179 "string.to_string.m"
                                                  return;
                                                }
#line 176 "string.to_string.m"
                                              }
#line 180 "string.to_string.m"
                                            else
#line 181 "string.to_string.m"
                                              {
#line 181 "string.to_string.m"
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 181 "string.to_string.m"
                                                return;
                                              }
#line 180 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                              }
#line 129 "string.to_string.m"
                          }
#line 127 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
              }
#line 121 "string.to_string.m"
          }
#line 119 "string.to_string.m"
      }
#line 117 "string.to_string.m"
  }
#line 104 "string.to_string.m"
}

#line 103 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_0(
#line 103 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
#line 103 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_7,
#line 103 "string.to_string.m"
  MR_Integer mercury__string__to_string__Priority_9,
#line 103 "string.to_string.m"
  MR_Box mercury__string__to_string__X_10,
#line 103 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
#line 103 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
#line 103 "string.to_string.m"
{
#line 117 "string.to_string.m"
  {
#line 117 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 117 "string.to_string.m"
    MR_String mercury__string__to_string__String_12;
#line 115 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 107 "builtin.opt"
    MR_Box mercury__string__to_string__conv0_String_12;

#line 107 "builtin.opt"
    {
#line 107 "builtin.opt"
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
#line 107 "builtin.opt"
    if (mercury__string__to_string__succeeded)
#line 107 "builtin.opt"
      {
#line 107 "builtin.opt"
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
#line 107 "builtin.opt"
        mercury__string__to_string__succeeded = MR_TRUE;
#line 107 "builtin.opt"
      }
#line 117 "string.to_string.m"
    if (mercury__string__to_string__succeeded)
#line 116 "string.to_string.m"
      {
#line 116 "string.to_string.m"
        MR_String mercury__string__to_string__V_29_29;

#line 116 "string.to_string.m"
        {
#line 116 "string.to_string.m"
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
#line 85 "string.to_string.m"
        {
#line 85 "string.to_string.m"
          MR_Word base;
#line 85 "string.to_string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
#line 85 "string.to_string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
#line 85 "string.to_string.m"
        }
#line 116 "string.to_string.m"
      }
#line 117 "string.to_string.m"
    else
#line 119 "string.to_string.m"
      {
#line 119 "string.to_string.m"
        MR_Char mercury__string__to_string__Char_13;
#line 117 "string.to_string.m"
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 117 "string.to_string.m"
        MR_Box mercury__string__to_string__conv1_Char_13;

#line 117 "string.to_string.m"
        {
#line 117 "string.to_string.m"
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
#line 117 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 117 "string.to_string.m"
          {
#line 117 "string.to_string.m"
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
#line 117 "string.to_string.m"
            mercury__string__to_string__succeeded = MR_TRUE;
#line 117 "string.to_string.m"
          }
#line 119 "string.to_string.m"
        if (mercury__string__to_string__succeeded)
#line 118 "string.to_string.m"
          {
#line 118 "string.to_string.m"
            MR_String mercury__string__to_string__V_31_31;

#line 118 "string.to_string.m"
            {
#line 118 "string.to_string.m"
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
#line 118 "string.to_string.m"
            {
#line 118 "string.to_string.m"
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 118 "string.to_string.m"
              return;
            }
#line 118 "string.to_string.m"
          }
#line 119 "string.to_string.m"
        else
#line 121 "string.to_string.m"
          {
#line 121 "string.to_string.m"
            MR_Integer mercury__string__to_string__Int_14;
#line 119 "string.to_string.m"
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 119 "string.to_string.m"
            MR_Box mercury__string__to_string__conv2_Int_14;

#line 119 "string.to_string.m"
            {
#line 119 "string.to_string.m"
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
#line 119 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 119 "string.to_string.m"
              {
#line 119 "string.to_string.m"
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
#line 119 "string.to_string.m"
                mercury__string__to_string__succeeded = MR_TRUE;
#line 119 "string.to_string.m"
              }
#line 121 "string.to_string.m"
            if (mercury__string__to_string__succeeded)
#line 120 "string.to_string.m"
              {
#line 120 "string.to_string.m"
                MR_String mercury__string__to_string__V_33_33;

#line 120 "string.to_string.m"
                {
#line 120 "string.to_string.m"
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
#line 120 "string.to_string.m"
                {
#line 120 "string.to_string.m"
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 120 "string.to_string.m"
                  return;
                }
#line 120 "string.to_string.m"
              }
#line 121 "string.to_string.m"
            else
#line 123 "string.to_string.m"
              {
#line 123 "string.to_string.m"
                MR_Float mercury__string__to_string__Float_15;
#line 121 "string.to_string.m"
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 121 "string.to_string.m"
                MR_Box mercury__string__to_string__conv3_Float_15;

#line 121 "string.to_string.m"
                {
#line 121 "string.to_string.m"
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
#line 121 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 121 "string.to_string.m"
                  {
#line 121 "string.to_string.m"
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
#line 121 "string.to_string.m"
                    mercury__string__to_string__succeeded = MR_TRUE;
#line 121 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
                if (mercury__string__to_string__succeeded)
#line 122 "string.to_string.m"
                  {
#line 122 "string.to_string.m"
                    MR_String mercury__string__to_string__V_35_35;

#line 122 "string.to_string.m"
                    {
#line 122 "string.to_string.m"
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
#line 122 "string.to_string.m"
                    {
#line 122 "string.to_string.m"
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 122 "string.to_string.m"
                      return;
                    }
#line 122 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
                else
#line 125 "string.to_string.m"
                  {
#line 125 "string.to_string.m"
                    MR_Box mercury__string__to_string__Bitmap_16;
#line 123 "string.to_string.m"
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 123 "string.to_string.m"
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

#line 123 "string.to_string.m"
                    {
#line 123 "string.to_string.m"
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
#line 123 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 123 "string.to_string.m"
                      {
#line 123 "string.to_string.m"
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
#line 123 "string.to_string.m"
                        mercury__string__to_string__succeeded = MR_TRUE;
#line 123 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                    if (mercury__string__to_string__succeeded)
#line 124 "string.to_string.m"
                      {
#line 124 "string.to_string.m"
                        MR_String mercury__string__to_string__V_37_37;
#line 124 "string.to_string.m"
                        MR_String mercury__string__to_string__V_39_39;

#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
#line 124 "string.to_string.m"
                        {
#line 124 "string.to_string.m"
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 124 "string.to_string.m"
                          return;
                        }
#line 124 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                    else
#line 127 "string.to_string.m"
                      {
#line 127 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeDesc_17;
#line 125 "string.to_string.m"
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 125 "string.to_string.m"
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

#line 125 "string.to_string.m"
                        {
#line 125 "string.to_string.m"
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
#line 125 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 125 "string.to_string.m"
                          {
#line 125 "string.to_string.m"
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
#line 125 "string.to_string.m"
                            mercury__string__to_string__succeeded = MR_TRUE;
#line 125 "string.to_string.m"
                          }
#line 127 "string.to_string.m"
                        if (mercury__string__to_string__succeeded)
#line 126 "string.to_string.m"
                          {
#line 126 "string.to_string.m"
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 126 "string.to_string.m"
                            return;
                          }
#line 127 "string.to_string.m"
                        else
#line 129 "string.to_string.m"
                          {
#line 129 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
#line 127 "string.to_string.m"
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
#line 127 "string.to_string.m"
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

#line 127 "string.to_string.m"
                            {
#line 127 "string.to_string.m"
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
#line 127 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 127 "string.to_string.m"
                              {
#line 127 "string.to_string.m"
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
#line 127 "string.to_string.m"
                                mercury__string__to_string__succeeded = MR_TRUE;
#line 127 "string.to_string.m"
                              }
#line 129 "string.to_string.m"
                            if (mercury__string__to_string__succeeded)
#line 128 "string.to_string.m"
                              {
#line 128 "string.to_string.m"
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 128 "string.to_string.m"
                                return;
                              }
#line 129 "string.to_string.m"
                            else
#line 131 "string.to_string.m"
                              {
#line 131 "string.to_string.m"
                                MR_Word mercury__string__to_string__C_Pointer_19;
#line 129 "string.to_string.m"
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 129 "string.to_string.m"
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

#line 129 "string.to_string.m"
                                {
#line 129 "string.to_string.m"
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
#line 129 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 129 "string.to_string.m"
                                  {
#line 129 "string.to_string.m"
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
#line 129 "string.to_string.m"
                                    mercury__string__to_string__succeeded = MR_TRUE;
#line 129 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                                if (mercury__string__to_string__succeeded)
#line 130 "string.to_string.m"
                                  {
#line 130 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_42_42;

#line 130 "string.to_string.m"
                                    {
#line 130 "string.to_string.m"
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
#line 130 "string.to_string.m"
                                    {
#line 130 "string.to_string.m"
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 130 "string.to_string.m"
                                      return;
                                    }
#line 130 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                                else
#line 157 "string.to_string.m"
                                  {
#line 157 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ElemType_22;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__TypeCtor_20;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__ArgTypes_21;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_44_44;
#line 145 "string.to_string.m"
                                    MR_Word mercury__string__to_string__V_45_45;
#line 145 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_46_46;
#line 145 "string.to_string.m"
                                    MR_String mercury__string__to_string__V_47_47;
#line 58 "type_desc.opt"
                                    MR_Box mercury__string__to_string__V_91_91;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 11325 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11355 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 146 "string.to_string.m"
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 146 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 146 "string.to_string.m"
                                      {
#line 146 "string.to_string.m"
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
#line 146 "string.to_string.m"
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
#line 146 "string.to_string.m"
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 145 "string.to_string.m"
                                          {
#line 147 "string.to_string.m"
                                            {
#line 147 "string.to_string.m"
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
#line 147 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
#line 145 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 145 "string.to_string.m"
                                              {
#line 148 "string.to_string.m"
                                                {
#line 148 "string.to_string.m"
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
#line 148 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
#line 145 "string.to_string.m"
                                              }
#line 145 "string.to_string.m"
                                          }
#line 146 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                    if (mercury__string__to_string__succeeded)
#line 153 "string.to_string.m"
                                      {
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
#line 153 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
#line 153 "string.to_string.m"
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
#line 74 "type_desc.opt"
                                        MR_Box mercury__string__to_string__Elem_23;
#line 155 "string.to_string.m"
                                        MR_Box mercury__string__to_string__conv8_Array_24;

#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 11433 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 154 "string.to_string.m"
                                        {
#line 154 "string.to_string.m"
                                          mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                        }
#line 11445 "string.to_string.c"
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 11447 "string.to_string.c"
                                        {
#line 11449 "string.to_string.c"
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11451 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
#line 11453 "string.to_string.c"
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
#line 11455 "string.to_string.c"
                                        }
#line 155 "string.to_string.m"
                                        {
#line 155 "string.to_string.m"
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
#line 155 "string.to_string.m"
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
#line 156 "string.to_string.m"
                                        {
#line 156 "string.to_string.m"
                                          mercury__string__to_string__array_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 156 "string.to_string.m"
                                          return;
                                        }
#line 153 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                    else
#line 167 "string.to_string.m"
                                      {
#line 167 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ElemType_72;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_49_49;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__V_50_50;
#line 158 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_51_51;
#line 158 "string.to_string.m"
                                        MR_String mercury__string__to_string__V_52_52;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__TypeCtor_60;
#line 158 "string.to_string.m"
                                        MR_Word mercury__string__to_string__ArgTypes_61;
#line 58 "type_desc.opt"
                                        MR_Box mercury__string__to_string__V_92_92;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 11520 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11550 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 159 "string.to_string.m"
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 159 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 159 "string.to_string.m"
                                          {
#line 159 "string.to_string.m"
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
#line 159 "string.to_string.m"
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
#line 159 "string.to_string.m"
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 158 "string.to_string.m"
                                              {
#line 160 "string.to_string.m"
                                                {
#line 160 "string.to_string.m"
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
#line 160 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
#line 158 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 158 "string.to_string.m"
                                                  {
#line 161 "string.to_string.m"
                                                    {
#line 161 "string.to_string.m"
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
#line 161 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
#line 158 "string.to_string.m"
                                                  }
#line 158 "string.to_string.m"
                                              }
#line 159 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                        if (mercury__string__to_string__succeeded)
#line 163 "string.to_string.m"
                                          {
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
#line 163 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
#line 163 "string.to_string.m"
                                            MR_Box mercury__string__to_string__VersionArray_25;
#line 74 "type_desc.opt"
                                            MR_Box mercury__string__to_string__Elem_62;
#line 165 "string.to_string.m"
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 11628 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 164 "string.to_string.m"
                                            {
#line 164 "string.to_string.m"
                                              mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                            }
#line 11640 "string.to_string.c"
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 11642 "string.to_string.c"
                                            {
#line 11644 "string.to_string.c"
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11646 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
#line 11648 "string.to_string.c"
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
#line 11650 "string.to_string.c"
                                            }
#line 165 "string.to_string.m"
                                            {
#line 165 "string.to_string.m"
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
#line 165 "string.to_string.m"
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
#line 166 "string.to_string.m"
                                            {
#line 166 "string.to_string.m"
                                              mercury__string__to_string__version_array_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 166 "string.to_string.m"
                                              return;
                                            }
#line 163 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                        else
#line 180 "string.to_string.m"
                                          {
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_54_54;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__V_55_55;
#line 171 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_56_56;
#line 171 "string.to_string.m"
                                            MR_String mercury__string__to_string__V_57_57;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__TypeCtor_63;
#line 171 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ArgTypes_64;
#line 58 "type_desc.opt"
                                            MR_Box mercury__string__to_string__V_93_93;
#line 172 "string.to_string.m"
                                            MR_Word mercury__string__to_string__ElemType_68;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
#line 58 "type_desc.opt"
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
#line 11715 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11745 "string.to_string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 172 "string.to_string.m"
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
#line 172 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 172 "string.to_string.m"
                                              {
#line 172 "string.to_string.m"
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
#line 172 "string.to_string.m"
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
#line 172 "string.to_string.m"
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "string.to_string.m"
                                                if (mercury__string__to_string__succeeded)
#line 171 "string.to_string.m"
                                                  {
#line 173 "string.to_string.m"
                                                    {
#line 173 "string.to_string.m"
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
#line 173 "string.to_string.m"
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
#line 171 "string.to_string.m"
                                                    if (mercury__string__to_string__succeeded)
#line 171 "string.to_string.m"
                                                      {
#line 174 "string.to_string.m"
                                                        {
#line 174 "string.to_string.m"
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
#line 174 "string.to_string.m"
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
#line 171 "string.to_string.m"
                                                      }
#line 171 "string.to_string.m"
                                                  }
#line 172 "string.to_string.m"
                                              }
#line 180 "string.to_string.m"
                                            if (mercury__string__to_string__succeeded)
#line 176 "string.to_string.m"
                                              {
#line 176 "string.to_string.m"
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
#line 176 "string.to_string.m"
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90;
#line 178 "string.to_string.m"
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

#line 177 "string.to_string.m"
                                                {
#line 177 "string.to_string.m"
                                                  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
                                                }
#line 11809 "string.to_string.c"
                                                mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
#line 178 "string.to_string.m"
                                                {
#line 178 "string.to_string.m"
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
#line 178 "string.to_string.m"
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
#line 179 "string.to_string.m"
                                                {
#line 179 "string.to_string.m"
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 179 "string.to_string.m"
                                                  return;
                                                }
#line 176 "string.to_string.m"
                                              }
#line 180 "string.to_string.m"
                                            else
#line 181 "string.to_string.m"
                                              {
#line 181 "string.to_string.m"
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
#line 181 "string.to_string.m"
                                                return;
                                              }
#line 180 "string.to_string.m"
                                          }
#line 167 "string.to_string.m"
                                      }
#line 157 "string.to_string.m"
                                  }
#line 131 "string.to_string.m"
                              }
#line 129 "string.to_string.m"
                          }
#line 127 "string.to_string.m"
                      }
#line 125 "string.to_string.m"
                  }
#line 123 "string.to_string.m"
              }
#line 121 "string.to_string.m"
          }
#line 119 "string.to_string.m"
      }
#line 117 "string.to_string.m"
  }
#line 103 "string.to_string.m"
}

#line 95 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_3(
#line 95 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
#line 95 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 95 "string.to_string.m"
  MR_Box mercury__string__to_string__X_8,
#line 95 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 95 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 95 "string.to_string.m"
{
#line 97 "string.to_string.m"
  {
#line 97 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 97 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 97 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_10;
#line 97 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_13_13;
#line 11886 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 11888 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_13_13;

#line 11891 "string.to_string.c"
    {
#line 11893 "string.to_string.c"
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
#line 11896 "string.to_string.c"
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 99 "string.to_string.m"
      return;
    }
#line 97 "string.to_string.m"
  }
#line 95 "string.to_string.m"
}

#line 93 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_2(
#line 93 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
#line 93 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 93 "string.to_string.m"
  MR_Box mercury__string__to_string__X_8,
#line 93 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 93 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 93 "string.to_string.m"
{
#line 97 "string.to_string.m"
  {
#line 97 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 97 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 97 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_10;
#line 97 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_13_13;
#line 11937 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 11939 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_13_13;

#line 11942 "string.to_string.c"
    {
#line 11944 "string.to_string.c"
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
#line 11947 "string.to_string.c"
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 99 "string.to_string.m"
      return;
    }
#line 97 "string.to_string.m"
  }
#line 93 "string.to_string.m"
}

#line 92 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_1(
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
#line 97 "string.to_string.m"
  {
#line 97 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 97 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 97 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_10;
#line 97 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_13_13;
#line 11988 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 11990 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_13_13;

#line 11993 "string.to_string.c"
    {
#line 11995 "string.to_string.c"
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
#line 11998 "string.to_string.c"
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 99 "string.to_string.m"
      return;
    }
#line 97 "string.to_string.m"
  }
#line 92 "string.to_string.m"
}

#line 91 "string.to_string.m"
void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_0(
#line 91 "string.to_string.m"
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
#line 91 "string.to_string.m"
  MR_Word mercury__string__to_string__NonCanon_6,
#line 91 "string.to_string.m"
  MR_Box mercury__string__to_string__X_8,
#line 91 "string.to_string.m"
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
#line 91 "string.to_string.m"
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
#line 91 "string.to_string.m"
{
#line 97 "string.to_string.m"
  {
#line 97 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 97 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 97 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_10;
#line 97 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_13_13;
#line 12039 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12041 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_13_13;

#line 12044 "string.to_string.c"
    {
#line 12046 "string.to_string.c"
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12049 "string.to_string.c"
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
#line 99 "string.to_string.m"
      return;
    }
#line 97 "string.to_string.m"
  }
#line 91 "string.to_string.m"
}

#line 83 "string.to_string.m"
static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
#line 83 "string.to_string.m"
  MR_String mercury__string__to_string__String_4,
#line 83 "string.to_string.m"
  MR_Word mercury__string__to_string__RevStrings_5,
#line 83 "string.to_string.m"
  MR_Word * mercury__string__to_string__HeadVar__3_3)
#line 83 "string.to_string.m"
{
#line 85 "string.to_string.m"
  {
#line 85 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;

#line 85 "string.to_string.m"
    {
#line 85 "string.to_string.m"
      MR_Word base;
#line 85 "string.to_string.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "string.to_string.m"
      *mercury__string__to_string__HeadVar__3_3 = base;
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__String_4));
#line 85 "string.to_string.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__RevStrings_5));
#line 85 "string.to_string.m"
    }
#line 85 "string.to_string.m"
  }
#line 83 "string.to_string.m"
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
#line 70 "string.to_string.m"
  {
#line 70 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__RevStrings_9;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__V_11_11;
#line 70 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_20;
#line 70 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_21_21;
#line 12131 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12133 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_21_21;

#line 12136 "string.to_string.c"
    {
#line 12138 "string.to_string.c"
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12141 "string.to_string.c"
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
#line 12150 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
#line 72 "string.to_string.m"
    {
#line 72 "string.to_string.m"
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
#line 70 "string.to_string.m"
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
#line 70 "string.to_string.m"
  {
#line 70 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__RevStrings_9;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__V_11_11;
#line 70 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_20;
#line 70 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_21_21;
#line 12198 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12200 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_21_21;

#line 12203 "string.to_string.c"
    {
#line 12205 "string.to_string.c"
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12208 "string.to_string.c"
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
#line 12217 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
#line 72 "string.to_string.m"
    {
#line 72 "string.to_string.m"
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
#line 70 "string.to_string.m"
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
#line 70 "string.to_string.m"
  {
#line 70 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__RevStrings_9;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__V_11_11;
#line 70 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_20;
#line 70 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_21_21;
#line 12265 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12267 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_21_21;

#line 12270 "string.to_string.c"
    {
#line 12272 "string.to_string.c"
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12275 "string.to_string.c"
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
#line 12284 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
#line 72 "string.to_string.m"
    {
#line 72 "string.to_string.m"
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
#line 70 "string.to_string.m"
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
#line 70 "string.to_string.m"
  {
#line 70 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__RevStrings_9;
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "string.to_string.m"
    MR_Word mercury__string__to_string__V_11_11;
#line 70 "string.to_string.m"
    MR_Integer mercury__string__to_string__Priority_20;
#line 70 "string.to_string.m"
    MR_Integer mercury__string__to_string__V_21_21;
#line 12332 "string.to_string.c"
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12334 "string.to_string.c"
    MR_Box mercury__string__to_string__conv1_V_21_21;

#line 12337 "string.to_string.c"
    {
#line 12339 "string.to_string.c"
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12342 "string.to_string.c"
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
#line 98 "string.to_string.m"
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
#line 99 "string.to_string.m"
    {
#line 99 "string.to_string.m"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
#line 12351 "string.to_string.c"
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
#line 72 "string.to_string.m"
    {
#line 72 "string.to_string.m"
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
#line 70 "string.to_string.m"
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
#line 67 "string.to_string.m"
  {
#line 67 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 67 "string.to_string.m"
    MR_String mercury__string__to_string__String_6;

#line 68 "string.to_string.m"
    {
#line 68 "string.to_string.m"
      mercury__string__to_string__string_ops_noncanon_impl_4_p_1(mercury__string__to_string__TypeInfo_for_T_8, (MR_Integer) 1, mercury__string__to_string__Univ_5, &mercury__string__to_string__String_6);
    }
#line 67 "string.to_string.m"
    return mercury__string__to_string__String_6;
#line 67 "string.to_string.m"
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
#line 63 "string.to_string.m"
  {
#line 63 "string.to_string.m"
    MR_bool mercury__string__to_string__succeeded;
#line 63 "string.to_string.m"
    MR_String mercury__string__to_string__String_4;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 64 "string.to_string.m"
    {
#line 64 "string.to_string.m"
      mercury__string__to_string__string_ops_noncanon_impl_4_p_1(mercury__string__to_string__TypeInfo_for_T_7, (MR_Integer) 1, mercury__string__to_string__Univ_3, &mercury__string__to_string__String_4);
    }
#line 63 "string.to_string.m"
    return mercury__string__to_string__String_4;
#line 63 "string.to_string.m"
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
