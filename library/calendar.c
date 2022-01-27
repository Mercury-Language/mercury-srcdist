/*
** Automatically generated from `calendar.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module calendar. */
/* :- implementation. */

/*
INIT mercury__calendar__init
ENDINIT
*/

#include "calendar.mih"


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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 91 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7];

#line 94 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_date_0_0[7];

#line 97 "calendar.c"
static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_date_0_0;

#line 100 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1];

#line 103 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1];

#line 106 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1];

#line 109 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1];

#line 112 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0;

#line 115 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1;

#line 118 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2;

#line 121 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3;

#line 124 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4;

#line 127 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5;

#line 130 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6;

#line 133 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_day_of_week_0[7];

#line 136 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_day_of_week_0[7];

#line 139 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_day_of_week_0[7];

#line 142 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4];

#line 145 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4];

#line 148 "calendar.c"
static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_duration_0_0;

#line 151 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1];

#line 154 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1];

#line 157 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1];

#line 160 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1];

#line 163 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0;

#line 166 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1;

#line 169 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2;

#line 172 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3;

#line 175 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4;

#line 178 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5;

#line 181 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6;

#line 184 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7;

#line 187 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8;

#line 190 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9;

#line 193 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10;

#line 196 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11;

#line 199 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_month_0[12];

#line 202 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_month_0[12];

#line 205 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_month_0[12];

#line 208 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0;

#line 211 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1;

#line 214 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_order_0[2];

#line 217 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2];

#line 220 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2];

#line 223 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
#line 226 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 228 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 231 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
#line 234 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 236 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 238 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 241 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
#line 244 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 246 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 249 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
#line 252 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 254 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 256 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 259 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
#line 262 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 264 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 267 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
#line 270 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 272 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 274 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 277 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
#line 280 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 282 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 285 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
#line 288 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 290 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 292 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 295 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
#line 298 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 300 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 303 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
#line 306 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 308 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 310 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 313 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
#line 316 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 318 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 321 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
#line 324 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 326 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 328 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 331 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
#line 334 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 336 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 339 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
#line 342 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 344 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 346 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 349 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
#line 352 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 354 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 357 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
#line 360 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 362 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 364 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 367 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
#line 370 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 372 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 375 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
#line 378 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 380 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 382 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 385 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
#line 388 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 390 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 393 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
#line 396 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 398 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 400 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 403 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
#line 406 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 408 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 411 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
#line 414 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 416 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 418 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 421 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
#line 424 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 426 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 429 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
#line 432 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 434 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 436 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 439 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
#line 442 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 444 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 447 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
#line 450 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 452 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 454 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 457 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
#line 460 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 462 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 465 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
#line 468 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 470 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 472 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 475 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
#line 478 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 480 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 483 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
#line 486 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 488 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 490 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 493 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
#line 496 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 498 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 501 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
#line 504 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 506 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 508 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 511 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
#line 514 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 516 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 519 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
#line 522 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 524 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 526 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 529 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
#line 532 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 534 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 537 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
#line 540 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 542 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 544 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 75 "string.opt"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0(
#line 75 "string.opt"
  MR_Char mercury__calendar__V_11_11,
#line 75 "string.opt"
  MR_String mercury__calendar__S_6_6,
#line 75 "string.opt"
  MR_Integer mercury__calendar__I_7_7,
#line 75 "string.opt"
  MR_Integer * mercury__calendar__Index_8_8);

#line 36 "list.int"
static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(
#line 36 "list.int"
  MR_Word mercury__calendar__V_8_8,
#line 36 "list.int"
  MR_Word mercury__calendar__V_9_9,
#line 36 "list.int"
  MR_Word mercury__calendar__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 880 "calendar.m"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 880 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_E_0_11,
#line 880 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_E_12);

#line 1025 "calendar.m"
static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
#line 1025 "calendar.m"
  MR_Integer mercury__calendar__BorrowVal_6,
#line 1025 "calendar.m"
  MR_Integer mercury__calendar__Val1_7,
#line 1025 "calendar.m"
  MR_Integer mercury__calendar__Val2_8,
#line 1025 "calendar.m"
  MR_Integer * mercury__calendar__Diff_9,
#line 1025 "calendar.m"
  MR_Integer * mercury__calendar__Borrow_10);

#line 969 "calendar.m"
static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
#line 969 "calendar.m"
  MR_Word mercury__calendar__OriginalOrder_5,
#line 969 "calendar.m"
  MR_Word mercury__calendar__DateA_6,
#line 969 "calendar.m"
  MR_Word mercury__calendar__DateB_7,
#line 969 "calendar.m"
  MR_Word * mercury__calendar__Duration_8);

#line 814 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
#line 814 "calendar.m"
  MR_Integer mercury__calendar__YearValue_4,
#line 814 "calendar.m"
  MR_Integer mercury__calendar__MonthValue_5);

#line 810 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
#line 810 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 810 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 810 "calendar.m"
  MR_Integer mercury__calendar__High_7);

#line 806 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
#line 806 "calendar.m"
  MR_Integer mercury__calendar__A_4,
#line 806 "calendar.m"
  MR_Integer mercury__calendar__B_5);

#line 802 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
#line 802 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 802 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 802 "calendar.m"
  MR_Integer mercury__calendar__High_7);

#line 758 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
#line 758 "calendar.m"
  MR_Integer mercury__calendar__Seconds_4,
#line 758 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_5);

#line 749 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
#line 749 "calendar.m"
  MR_Integer mercury__calendar__X_4,
#line 749 "calendar.m"
  MR_String mercury__calendar__Suffix_5);

#line 688 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
#line 688 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_3);

#line 645 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void);

#line 596 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
#line 596 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_10,
#line 596 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_11,
#line 596 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_12,
#line 596 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_13);

#line 560 "calendar.m"
static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
#line 560 "calendar.m"
  MR_Integer * mercury__calendar__Seconds_5,
#line 560 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_6,
#line 560 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_13,
#line 560 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_14);

#line 555 "calendar.m"
static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
#line 555 "calendar.m"
  MR_Integer * mercury__calendar__Minutes_4,
#line 555 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 555 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 550 "calendar.m"
static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
#line 550 "calendar.m"
  MR_Integer * mercury__calendar__Hours_4,
#line 550 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 550 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 545 "calendar.m"
static void MR_CALL 
mercury__calendar__read_days_3_p_0(
#line 545 "calendar.m"
  MR_Integer * mercury__calendar__Days_4,
#line 545 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 545 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 540 "calendar.m"
static void MR_CALL 
mercury__calendar__read_months_3_p_0(
#line 540 "calendar.m"
  MR_Integer * mercury__calendar__Months_4,
#line 540 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 540 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 531 "calendar.m"
static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
#line 531 "calendar.m"
  MR_Char * mercury__calendar__Char_4,
#line 531 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 531 "calendar.m"
  MR_Word * mercury__calendar__Rest_5);

#line 483 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
#line 483 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_13,
#line 483 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_14,
#line 483 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_N_0_15,
#line 483 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_N_16,
#line 483 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_17,
#line 483 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_18);

#line 477 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
#line 477 "calendar.m"
  MR_Integer * mercury__calendar__Val_5,
#line 477 "calendar.m"
  MR_Integer * mercury__calendar__N_6,
#line 477 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_8,
#line 477 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_9);

#line 462 "calendar.m"
static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
#line 462 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_4,
#line 462 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_9,
#line 462 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_10);


static /* final */ const MR_Box mercury__calendar_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__calendar_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__calendar_scalar_common_3[3][4];

static /* final */ const MR_Box mercury__calendar_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__calendar_scalar_common_5[6][7];

static /* final */ const MR_Box mercury__calendar_scalar_common_6[3][1];




static /* final */ const MR_Box mercury__calendar_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__calendar_scalar_common_5[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__calendar_scalar_common_5[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__calendar_scalar_common_5[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__calendar_scalar_common_5[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[3])))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__calendar_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__calendar_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__calendar_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_5[6][7] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1970)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1903)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1903)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1697)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1696)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_6[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 1266 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1277 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_date_0_0[7] = {
  (MR_String) "dt_year",
  (MR_String) "dt_month",
  (MR_String) "dt_day",
  (MR_String) "dt_hour",
  (MR_String) "dt_minute",
  (MR_String) "dt_second",
  (MR_String) "dt_microsecond"
};

#line 1288 "calendar.c"
static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_date_0_0 = {
  (MR_String) "date",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__calendar__calendar__field_types_date_0_0,
  mercury__calendar__calendar__field_names_date_0_0,
  NULL,
  NULL
};

#line 1303 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_date_0_0
};

#line 1308 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_date_0_0
  }
};

#line 1317 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_date_0_0
};

#line 1322 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1] = {
  (MR_Integer) 0
};

#line 1327 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_date_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__calendar____Unify____date_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____date_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "date",
  {
    mercury__calendar__calendar__du_name_ordered_date_0
  },
  {
    mercury__calendar__calendar__du_ptag_ordered_date_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_date_0
};

#line 1348 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_day_of_month_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____day_of_month_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____day_of_month_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "day_of_month",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1369 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0 = {
  (MR_String) "monday",
  (MR_Integer) 0
};

#line 1375 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1 = {
  (MR_String) "tuesday",
  (MR_Integer) 1
};

#line 1381 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2 = {
  (MR_String) "wednesday",
  (MR_Integer) 2
};

#line 1387 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3 = {
  (MR_String) "thursday",
  (MR_Integer) 3
};

#line 1393 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4 = {
  (MR_String) "friday",
  (MR_Integer) 4
};

#line 1399 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5 = {
  (MR_String) "saturday",
  (MR_Integer) 5
};

#line 1405 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6 = {
  (MR_String) "sunday",
  (MR_Integer) 6
};

#line 1411 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_day_of_week_0[7] = {
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6
};

#line 1422 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_day_of_week_0[7] = {
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2
};

#line 1433 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_day_of_week_0[7] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1444 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_day_of_week_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____day_of_week_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____day_of_week_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "day_of_week",
  {
    mercury__calendar__calendar__enum_name_ordered_day_of_week_0
  },
  {
    mercury__calendar__calendar__enum_value_ordered_day_of_week_0
  },
  (MR_Integer) 7,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_day_of_week_0
};

#line 1465 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_days_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____days_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____days_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "days",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1486 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1494 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4] = {
  (MR_String) "dur_months",
  (MR_String) "dur_days",
  (MR_String) "dur_seconds",
  (MR_String) "dur_microseconds"
};

#line 1502 "calendar.c"
static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_duration_0_0 = {
  (MR_String) "duration",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__calendar__calendar__field_types_duration_0_0,
  mercury__calendar__calendar__field_names_duration_0_0,
  NULL,
  NULL
};

#line 1517 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_duration_0_0
};

#line 1522 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_duration_0_0
  }
};

#line 1531 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_duration_0_0
};

#line 1536 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1] = {
  (MR_Integer) 0
};

#line 1541 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_duration_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__calendar____Unify____duration_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____duration_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "duration",
  {
    mercury__calendar__calendar__du_name_ordered_duration_0
  },
  {
    mercury__calendar__calendar__du_ptag_ordered_duration_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_duration_0
};

#line 1562 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_hour_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____hour_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____hour_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "hour",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1583 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_hours_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____hours_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____hours_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "hours",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1604 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_microsecond_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____microsecond_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____microsecond_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "microsecond",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1625 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_microseconds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____microseconds_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____microseconds_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "microseconds",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1646 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_minute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____minute_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____minute_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "minute",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1667 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_minutes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____minutes_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____minutes_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "minutes",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1688 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0 = {
  (MR_String) "january",
  (MR_Integer) 0
};

#line 1694 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1 = {
  (MR_String) "february",
  (MR_Integer) 1
};

#line 1700 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2 = {
  (MR_String) "march",
  (MR_Integer) 2
};

#line 1706 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3 = {
  (MR_String) "april",
  (MR_Integer) 3
};

#line 1712 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4 = {
  (MR_String) "may",
  (MR_Integer) 4
};

#line 1718 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5 = {
  (MR_String) "june",
  (MR_Integer) 5
};

#line 1724 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6 = {
  (MR_String) "july",
  (MR_Integer) 6
};

#line 1730 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7 = {
  (MR_String) "august",
  (MR_Integer) 7
};

#line 1736 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8 = {
  (MR_String) "september",
  (MR_Integer) 8
};

#line 1742 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9 = {
  (MR_String) "october",
  (MR_Integer) 9
};

#line 1748 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10 = {
  (MR_String) "november",
  (MR_Integer) 10
};

#line 1754 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11 = {
  (MR_String) "december",
  (MR_Integer) 11
};

#line 1760 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_month_0[12] = {
  &mercury__calendar__calendar__enum_functor_desc_month_0_0,
  &mercury__calendar__calendar__enum_functor_desc_month_0_1,
  &mercury__calendar__calendar__enum_functor_desc_month_0_2,
  &mercury__calendar__calendar__enum_functor_desc_month_0_3,
  &mercury__calendar__calendar__enum_functor_desc_month_0_4,
  &mercury__calendar__calendar__enum_functor_desc_month_0_5,
  &mercury__calendar__calendar__enum_functor_desc_month_0_6,
  &mercury__calendar__calendar__enum_functor_desc_month_0_7,
  &mercury__calendar__calendar__enum_functor_desc_month_0_8,
  &mercury__calendar__calendar__enum_functor_desc_month_0_9,
  &mercury__calendar__calendar__enum_functor_desc_month_0_10,
  &mercury__calendar__calendar__enum_functor_desc_month_0_11
};

#line 1776 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_month_0[12] = {
  &mercury__calendar__calendar__enum_functor_desc_month_0_3,
  &mercury__calendar__calendar__enum_functor_desc_month_0_7,
  &mercury__calendar__calendar__enum_functor_desc_month_0_11,
  &mercury__calendar__calendar__enum_functor_desc_month_0_1,
  &mercury__calendar__calendar__enum_functor_desc_month_0_0,
  &mercury__calendar__calendar__enum_functor_desc_month_0_6,
  &mercury__calendar__calendar__enum_functor_desc_month_0_5,
  &mercury__calendar__calendar__enum_functor_desc_month_0_2,
  &mercury__calendar__calendar__enum_functor_desc_month_0_4,
  &mercury__calendar__calendar__enum_functor_desc_month_0_10,
  &mercury__calendar__calendar__enum_functor_desc_month_0_9,
  &mercury__calendar__calendar__enum_functor_desc_month_0_8
};

#line 1792 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_month_0[12] = {
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 2
};

#line 1808 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_month_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____month_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____month_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "month",
  {
    mercury__calendar__calendar__enum_name_ordered_month_0
  },
  {
    mercury__calendar__calendar__enum_value_ordered_month_0
  },
  (MR_Integer) 12,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_month_0
};

#line 1829 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_months_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____months_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____months_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "months",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1850 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0 = {
  (MR_String) "ascending",
  (MR_Integer) 0
};

#line 1856 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1 = {
  (MR_String) "descending",
  (MR_Integer) 1
};

#line 1862 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_order_0[2] = {
  &mercury__calendar__calendar__enum_functor_desc_order_0_0,
  &mercury__calendar__calendar__enum_functor_desc_order_0_1
};

#line 1868 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2] = {
  &mercury__calendar__calendar__enum_functor_desc_order_0_0,
  &mercury__calendar__calendar__enum_functor_desc_order_0_1
};

#line 1874 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1880 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____order_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____order_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "order",
  {
    mercury__calendar__calendar__enum_name_ordered_order_0
  },
  {
    mercury__calendar__calendar__enum_value_ordered_order_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_order_0
};

#line 1901 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_second_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____second_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____second_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "second",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1922 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_seconds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____seconds_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____seconds_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "seconds",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1943 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_year_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____year_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____year_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "year",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1964 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_years_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____years_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____years_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "years",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1985 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
#line 1988 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 1990 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 1992 "calendar.c"
{
#line 1994 "calendar.c"
  {
#line 1996 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 1999 "calendar.c"
    {
#line 2001 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____date_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2004 "calendar.c"
    return mercury__calendar__succeeded;
#line 2006 "calendar.c"
  }
#line 2008 "calendar.c"
}

#line 2011 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
#line 2014 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2016 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2018 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2020 "calendar.c"
{
#line 2022 "calendar.c"
  {
#line 2024 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2027 "calendar.c"
    {
#line 2029 "calendar.c"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2032 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2034 "calendar.c"
  }
#line 2036 "calendar.c"
}

#line 2039 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
#line 2042 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2044 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2046 "calendar.c"
{
#line 2048 "calendar.c"
  {
#line 2050 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2053 "calendar.c"
    {
#line 2055 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____day_of_month_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2058 "calendar.c"
    return mercury__calendar__succeeded;
#line 2060 "calendar.c"
  }
#line 2062 "calendar.c"
}

#line 2065 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
#line 2068 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2070 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2072 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2074 "calendar.c"
{
#line 2076 "calendar.c"
  {
#line 2078 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2081 "calendar.c"
    {
#line 2083 "calendar.c"
      mercury__calendar____Compare____day_of_month_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2086 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2088 "calendar.c"
  }
#line 2090 "calendar.c"
}

#line 2093 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
#line 2096 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2098 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2100 "calendar.c"
{
#line 2102 "calendar.c"
  {
#line 2104 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2107 "calendar.c"
    {
#line 2109 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____day_of_week_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2112 "calendar.c"
    return mercury__calendar__succeeded;
#line 2114 "calendar.c"
  }
#line 2116 "calendar.c"
}

#line 2119 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
#line 2122 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2124 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2126 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2128 "calendar.c"
{
#line 2130 "calendar.c"
  {
#line 2132 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2135 "calendar.c"
    {
#line 2137 "calendar.c"
      mercury__calendar____Compare____day_of_week_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2140 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2142 "calendar.c"
  }
#line 2144 "calendar.c"
}

#line 2147 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
#line 2150 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2152 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2154 "calendar.c"
{
#line 2156 "calendar.c"
  {
#line 2158 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2161 "calendar.c"
    {
#line 2163 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____days_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2166 "calendar.c"
    return mercury__calendar__succeeded;
#line 2168 "calendar.c"
  }
#line 2170 "calendar.c"
}

#line 2173 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
#line 2176 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2178 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2180 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2182 "calendar.c"
{
#line 2184 "calendar.c"
  {
#line 2186 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2189 "calendar.c"
    {
#line 2191 "calendar.c"
      mercury__calendar____Compare____days_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2194 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2196 "calendar.c"
  }
#line 2198 "calendar.c"
}

#line 2201 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
#line 2204 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2206 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2208 "calendar.c"
{
#line 2210 "calendar.c"
  {
#line 2212 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2215 "calendar.c"
    {
#line 2217 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____duration_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2220 "calendar.c"
    return mercury__calendar__succeeded;
#line 2222 "calendar.c"
  }
#line 2224 "calendar.c"
}

#line 2227 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
#line 2230 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2232 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2234 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2236 "calendar.c"
{
#line 2238 "calendar.c"
  {
#line 2240 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2243 "calendar.c"
    {
#line 2245 "calendar.c"
      mercury__calendar____Compare____duration_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2248 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2250 "calendar.c"
  }
#line 2252 "calendar.c"
}

#line 2255 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
#line 2258 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2260 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2262 "calendar.c"
{
#line 2264 "calendar.c"
  {
#line 2266 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2269 "calendar.c"
    {
#line 2271 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____hour_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2274 "calendar.c"
    return mercury__calendar__succeeded;
#line 2276 "calendar.c"
  }
#line 2278 "calendar.c"
}

#line 2281 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
#line 2284 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2286 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2288 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2290 "calendar.c"
{
#line 2292 "calendar.c"
  {
#line 2294 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2297 "calendar.c"
    {
#line 2299 "calendar.c"
      mercury__calendar____Compare____hour_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2302 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2304 "calendar.c"
  }
#line 2306 "calendar.c"
}

#line 2309 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
#line 2312 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2314 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2316 "calendar.c"
{
#line 2318 "calendar.c"
  {
#line 2320 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2323 "calendar.c"
    {
#line 2325 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____hours_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2328 "calendar.c"
    return mercury__calendar__succeeded;
#line 2330 "calendar.c"
  }
#line 2332 "calendar.c"
}

#line 2335 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
#line 2338 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2340 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2342 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2344 "calendar.c"
{
#line 2346 "calendar.c"
  {
#line 2348 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2351 "calendar.c"
    {
#line 2353 "calendar.c"
      mercury__calendar____Compare____hours_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2356 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2358 "calendar.c"
  }
#line 2360 "calendar.c"
}

#line 2363 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
#line 2366 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2368 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2370 "calendar.c"
{
#line 2372 "calendar.c"
  {
#line 2374 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2377 "calendar.c"
    {
#line 2379 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____microsecond_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2382 "calendar.c"
    return mercury__calendar__succeeded;
#line 2384 "calendar.c"
  }
#line 2386 "calendar.c"
}

#line 2389 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
#line 2392 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2394 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2396 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2398 "calendar.c"
{
#line 2400 "calendar.c"
  {
#line 2402 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2405 "calendar.c"
    {
#line 2407 "calendar.c"
      mercury__calendar____Compare____microsecond_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2410 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2412 "calendar.c"
  }
#line 2414 "calendar.c"
}

#line 2417 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
#line 2420 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2422 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2424 "calendar.c"
{
#line 2426 "calendar.c"
  {
#line 2428 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2431 "calendar.c"
    {
#line 2433 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____microseconds_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2436 "calendar.c"
    return mercury__calendar__succeeded;
#line 2438 "calendar.c"
  }
#line 2440 "calendar.c"
}

#line 2443 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
#line 2446 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2448 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2450 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2452 "calendar.c"
{
#line 2454 "calendar.c"
  {
#line 2456 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2459 "calendar.c"
    {
#line 2461 "calendar.c"
      mercury__calendar____Compare____microseconds_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2464 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2466 "calendar.c"
  }
#line 2468 "calendar.c"
}

#line 2471 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
#line 2474 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2476 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2478 "calendar.c"
{
#line 2480 "calendar.c"
  {
#line 2482 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2485 "calendar.c"
    {
#line 2487 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____minute_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2490 "calendar.c"
    return mercury__calendar__succeeded;
#line 2492 "calendar.c"
  }
#line 2494 "calendar.c"
}

#line 2497 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
#line 2500 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2502 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2504 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2506 "calendar.c"
{
#line 2508 "calendar.c"
  {
#line 2510 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2513 "calendar.c"
    {
#line 2515 "calendar.c"
      mercury__calendar____Compare____minute_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2518 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2520 "calendar.c"
  }
#line 2522 "calendar.c"
}

#line 2525 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
#line 2528 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2530 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2532 "calendar.c"
{
#line 2534 "calendar.c"
  {
#line 2536 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2539 "calendar.c"
    {
#line 2541 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____minutes_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2544 "calendar.c"
    return mercury__calendar__succeeded;
#line 2546 "calendar.c"
  }
#line 2548 "calendar.c"
}

#line 2551 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
#line 2554 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2556 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2558 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2560 "calendar.c"
{
#line 2562 "calendar.c"
  {
#line 2564 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2567 "calendar.c"
    {
#line 2569 "calendar.c"
      mercury__calendar____Compare____minutes_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2572 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2574 "calendar.c"
  }
#line 2576 "calendar.c"
}

#line 2579 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
#line 2582 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2584 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2586 "calendar.c"
{
#line 2588 "calendar.c"
  {
#line 2590 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2593 "calendar.c"
    {
#line 2595 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____month_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2598 "calendar.c"
    return mercury__calendar__succeeded;
#line 2600 "calendar.c"
  }
#line 2602 "calendar.c"
}

#line 2605 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
#line 2608 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2610 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2612 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2614 "calendar.c"
{
#line 2616 "calendar.c"
  {
#line 2618 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2621 "calendar.c"
    {
#line 2623 "calendar.c"
      mercury__calendar____Compare____month_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2626 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2628 "calendar.c"
  }
#line 2630 "calendar.c"
}

#line 2633 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
#line 2636 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2638 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2640 "calendar.c"
{
#line 2642 "calendar.c"
  {
#line 2644 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2647 "calendar.c"
    {
#line 2649 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____months_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2652 "calendar.c"
    return mercury__calendar__succeeded;
#line 2654 "calendar.c"
  }
#line 2656 "calendar.c"
}

#line 2659 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
#line 2662 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2664 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2666 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2668 "calendar.c"
{
#line 2670 "calendar.c"
  {
#line 2672 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2675 "calendar.c"
    {
#line 2677 "calendar.c"
      mercury__calendar____Compare____months_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2680 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2682 "calendar.c"
  }
#line 2684 "calendar.c"
}

#line 2687 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
#line 2690 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2692 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2694 "calendar.c"
{
#line 2696 "calendar.c"
  {
#line 2698 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2701 "calendar.c"
    {
#line 2703 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____order_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2706 "calendar.c"
    return mercury__calendar__succeeded;
#line 2708 "calendar.c"
  }
#line 2710 "calendar.c"
}

#line 2713 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
#line 2716 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2718 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2720 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2722 "calendar.c"
{
#line 2724 "calendar.c"
  {
#line 2726 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2729 "calendar.c"
    {
#line 2731 "calendar.c"
      mercury__calendar____Compare____order_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2734 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2736 "calendar.c"
  }
#line 2738 "calendar.c"
}

#line 2741 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
#line 2744 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2746 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2748 "calendar.c"
{
#line 2750 "calendar.c"
  {
#line 2752 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2755 "calendar.c"
    {
#line 2757 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____second_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2760 "calendar.c"
    return mercury__calendar__succeeded;
#line 2762 "calendar.c"
  }
#line 2764 "calendar.c"
}

#line 2767 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
#line 2770 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2772 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2774 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2776 "calendar.c"
{
#line 2778 "calendar.c"
  {
#line 2780 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2783 "calendar.c"
    {
#line 2785 "calendar.c"
      mercury__calendar____Compare____second_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2788 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2790 "calendar.c"
  }
#line 2792 "calendar.c"
}

#line 2795 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
#line 2798 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2800 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2802 "calendar.c"
{
#line 2804 "calendar.c"
  {
#line 2806 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2809 "calendar.c"
    {
#line 2811 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____seconds_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2814 "calendar.c"
    return mercury__calendar__succeeded;
#line 2816 "calendar.c"
  }
#line 2818 "calendar.c"
}

#line 2821 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
#line 2824 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2826 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2828 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2830 "calendar.c"
{
#line 2832 "calendar.c"
  {
#line 2834 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2837 "calendar.c"
    {
#line 2839 "calendar.c"
      mercury__calendar____Compare____seconds_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2842 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2844 "calendar.c"
  }
#line 2846 "calendar.c"
}

#line 2849 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
#line 2852 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2854 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2856 "calendar.c"
{
#line 2858 "calendar.c"
  {
#line 2860 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2863 "calendar.c"
    {
#line 2865 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____year_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2868 "calendar.c"
    return mercury__calendar__succeeded;
#line 2870 "calendar.c"
  }
#line 2872 "calendar.c"
}

#line 2875 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
#line 2878 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2880 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2882 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2884 "calendar.c"
{
#line 2886 "calendar.c"
  {
#line 2888 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2891 "calendar.c"
    {
#line 2893 "calendar.c"
      mercury__calendar____Compare____year_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2896 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2898 "calendar.c"
  }
#line 2900 "calendar.c"
}

#line 2903 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
#line 2906 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2908 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2910 "calendar.c"
{
#line 2912 "calendar.c"
  {
#line 2914 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2917 "calendar.c"
    {
#line 2919 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____years_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2922 "calendar.c"
    return mercury__calendar__succeeded;
#line 2924 "calendar.c"
  }
#line 2926 "calendar.c"
}

#line 2929 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
#line 2932 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2934 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2936 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2938 "calendar.c"
{
#line 2940 "calendar.c"
  {
#line 2942 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2945 "calendar.c"
    {
#line 2947 "calendar.c"
      mercury__calendar____Compare____years_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2950 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2952 "calendar.c"
  }
#line 2954 "calendar.c"
}

#line 75 "string.opt"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0(
#line 75 "string.opt"
  MR_Char mercury__calendar__V_11_11,
#line 75 "string.opt"
  MR_String mercury__calendar__S_6_6,
#line 75 "string.opt"
  MR_Integer mercury__calendar__I_7_7,
#line 75 "string.opt"
  MR_Integer * mercury__calendar__Index_8_8)
#line 75 "string.opt"
{
#line 845 "string.opt"
  while (MR_TRUE)
#line 845 "string.opt"
    {
#line 845 "string.opt"
      /* tailcall optimized into a loop */
#line 845 "string.opt"
      {
#line 845 "string.opt"
        MR_bool mercury__calendar__succeeded;
#line 845 "string.opt"
        MR_Integer mercury__calendar__J_9_9;
#line 841 "string.opt"
        MR_Char mercury__calendar__Char_10_10;

#line 214 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__calendar__S_6_6 ;
	Index =  mercury__calendar__I_7_7 ;
		{
#line 214 "string.opt"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 3013 "calendar.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__calendar__J_9_9  = PrevIndex;
	 mercury__calendar__Char_10_10  = Ch;
#line 214 "string.opt"
	}
mercury__calendar__succeeded  = SUCCESS_INDICATOR;
}
#line 841 "string.opt"
        if (mercury__calendar__succeeded)
#line 692 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__V_11_11 == mercury__calendar__Char_10_10);
#line 845 "string.opt"
        if (mercury__calendar__succeeded)
#line 844 "string.opt"
          {
#line 844 "string.opt"
            /* direct tailcall eliminated */
#line 844 "string.opt"
            {
#line 844 "string.opt"
              MR_Integer mercury__calendar__I_7__tmp_copy_7 = mercury__calendar__J_9_9;

#line 844 "string.opt"
              mercury__calendar__I_7_7 = mercury__calendar__I_7__tmp_copy_7;
#line 844 "string.opt"
            }
#line 844 "string.opt"
            continue;
#line 844 "string.opt"
          }
#line 845 "string.opt"
        else
#line 846 "string.opt"
          *mercury__calendar__Index_8_8 = mercury__calendar__I_7_7;
#line 845 "string.opt"
      }
#line 845 "string.opt"
      break;
#line 845 "string.opt"
    }
#line 75 "string.opt"
}

#line 36 "list.int"
static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(
#line 36 "list.int"
  MR_Word mercury__calendar__V_8_8,
#line 36 "list.int"
  MR_Word mercury__calendar__V_9_9,
#line 36 "list.int"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 36 "list.int"
{
#line 613 "list.opt"
  while (MR_TRUE)
#line 613 "list.opt"
    {
#line 613 "list.opt"
      /* tailcall optimized into a loop */
#line 613 "list.opt"
      {
#line 613 "list.opt"
        MR_bool mercury__calendar__succeeded;

#line 613 "list.opt"
        if ((mercury__calendar__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "list.opt"
          mercury__calendar__succeeded = MR_TRUE;
#line 613 "list.opt"
        else
#line 614 "list.opt"
          {
#line 614 "list.opt"
            MR_Word mercury__calendar__X_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 614 "list.opt"
            MR_Word mercury__calendar__Xs_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 614 "list.opt"
            MR_Word mercury__calendar__DateA_13;
#line 614 "list.opt"
            MR_Word mercury__calendar__DateB_14;
#line 614 "list.opt"
            MR_Word mercury__calendar__CompRes_15;

#line 777 "calendar.m"
            {
#line 777 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_8_8, mercury__calendar__X_5_5, &mercury__calendar__DateA_13);
            }
#line 778 "calendar.m"
            {
#line 778 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_9_9, mercury__calendar__X_5_5, &mercury__calendar__DateB_14);
            }
#line 779 "calendar.m"
            {
#line 779 "calendar.m"
              mercury__calendar____Compare____date_0_0(&mercury__calendar__CompRes_15, mercury__calendar__DateA_13, mercury__calendar__DateB_14);
            }
#line 780 "calendar.m"
            if ((mercury__calendar__CompRes_15 == (MR_Integer) 1))
#line 780 "calendar.m"
              mercury__calendar__succeeded = MR_TRUE;
#line 780 "calendar.m"
            else
#line 780 "calendar.m"
              if ((mercury__calendar__CompRes_15 == (MR_Integer) 0))
#line 780 "calendar.m"
                mercury__calendar__succeeded = MR_TRUE;
#line 780 "calendar.m"
              else
#line 780 "calendar.m"
                mercury__calendar__succeeded = MR_FALSE;
#line 614 "list.opt"
            if (mercury__calendar__succeeded)
#line 616 "list.opt"
              {
#line 616 "list.opt"
                /* direct tailcall eliminated */
#line 616 "list.opt"
                {
#line 616 "list.opt"
                  MR_Word mercury__calendar__HeadVar__2__tmp_copy_2 = mercury__calendar__Xs_6_6;

#line 616 "list.opt"
                  mercury__calendar__HeadVar__2_2 = mercury__calendar__HeadVar__2__tmp_copy_2;
#line 616 "list.opt"
                }
#line 616 "list.opt"
                continue;
#line 616 "list.opt"
              }
#line 614 "list.opt"
          }
#line 613 "list.opt"
        return mercury__calendar__succeeded;
#line 613 "list.opt"
      }
#line 613 "list.opt"
      break;
#line 613 "list.opt"
    }
#line 36 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__calendar__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 880 "calendar.m"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 880 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_E_0_11,
#line 880 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_E_12)
#line 880 "calendar.m"
{
#line 891 "calendar.m"
  while (MR_TRUE)
#line 891 "calendar.m"
    {
#line 891 "calendar.m"
      /* tailcall optimized into a loop */
#line 891 "calendar.m"
      {
#line 891 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 891 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 891 "calendar.m"
        MR_Integer mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 891 "calendar.m"
        MR_Integer mercury__calendar__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 883 "calendar.m"
        MR_Integer mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 883 "calendar.m"
        MR_Integer mercury__calendar__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 883 "calendar.m"
        MR_Integer mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 883 "calendar.m"
        MR_Integer mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

#line 883 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_13_13 < (MR_Integer) 1);
#line 891 "calendar.m"
        if (mercury__calendar__succeeded)
#line 885 "calendar.m"
          {
#line 885 "calendar.m"
            MR_Integer mercury__calendar__Temp_9;
#line 885 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_15_15;
#line 885 "calendar.m"
            MR_Integer mercury__calendar__V_16_16;
#line 885 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 885 "calendar.m"
            MR_Integer mercury__calendar__V_20_20 = (mercury__calendar__V_58_58 - (MR_Integer) 1);
#line 885 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_24_24;
#line 885 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 885 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_28_28;
#line 885 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 885 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 885 "calendar.m"
            MR_Integer mercury__calendar__V_82_82;
#line 885 "calendar.m"
            MR_Integer mercury__calendar__V_94_94;
#line 884 "calendar.m"
            MR_Integer mercury__calendar__V_81_81;
#line 884 "calendar.m"
            MR_Integer mercury__calendar__V_84_84;
#line 884 "calendar.m"
            MR_Integer mercury__calendar__V_85_85;
#line 884 "calendar.m"
            MR_Integer mercury__calendar__V_86_86;
#line 884 "calendar.m"
            MR_Integer mercury__calendar__V_87_87;
#line 884 "calendar.m"
            MR_Integer mercury__calendar__V_83_83;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_96_96;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_97_97;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_98_98;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_99_99;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_100_100;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_95_95;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_108_108;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_109_109;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_110_110;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_111_111;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_112_112;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_113_113;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_107_107;

#line 885 "calendar.m"
            {
#line 885 "calendar.m"
              mercury__calendar__V_18_18 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_57_57, mercury__calendar__V_20_20);
            }
#line 884 "calendar.m"
            mercury__calendar__V_16_16 = (mercury__calendar__V_13_13 + mercury__calendar__V_18_18);
#line 884 "calendar.m"
            mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 884 "calendar.m"
            mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 884 "calendar.m"
            mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 884 "calendar.m"
            mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 884 "calendar.m"
            mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 884 "calendar.m"
            mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 884 "calendar.m"
            mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
#line 884 "calendar.m"
            {
#line 884 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 884 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 0) = ((MR_Box) (mercury__calendar__V_81_81));
#line 884 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 1) = ((MR_Box) (mercury__calendar__V_82_82));
#line 884 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 2) = ((MR_Box) (mercury__calendar__V_16_16));
#line 884 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 3) = ((MR_Box) (mercury__calendar__V_84_84));
#line 884 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 4) = ((MR_Box) (mercury__calendar__V_85_85));
#line 884 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 5) = ((MR_Box) (mercury__calendar__V_86_86));
#line 884 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 6) = ((MR_Box) (mercury__calendar__V_87_87));
#line 884 "calendar.m"
            }
#line 887 "calendar.m"
            mercury__calendar__Temp_9 = (mercury__calendar__V_82_82 + (MR_Integer) -1);
#line 888 "calendar.m"
            {
#line 888 "calendar.m"
              mercury__calendar__V_25_25 = mercury__calendar__modulo_3_f_0(mercury__calendar__Temp_9, (MR_Integer) 1, (MR_Integer) 13);
            }
#line 888 "calendar.m"
            mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 0)));
#line 888 "calendar.m"
            mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 1)));
#line 888 "calendar.m"
            mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 2)));
#line 888 "calendar.m"
            mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 3)));
#line 888 "calendar.m"
            mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 4)));
#line 888 "calendar.m"
            mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 5)));
#line 888 "calendar.m"
            mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 6)));
#line 888 "calendar.m"
            {
#line 888 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 0) = ((MR_Box) (mercury__calendar__V_94_94));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 1) = ((MR_Box) (mercury__calendar__V_25_25));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 2) = ((MR_Box) (mercury__calendar__V_96_96));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 3) = ((MR_Box) (mercury__calendar__V_97_97));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 4) = ((MR_Box) (mercury__calendar__V_98_98));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 5) = ((MR_Box) (mercury__calendar__V_99_99));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 6) = ((MR_Box) (mercury__calendar__V_100_100));
#line 888 "calendar.m"
            }
#line 889 "calendar.m"
            {
#line 889 "calendar.m"
              mercury__calendar__V_31_31 = mercury__calendar__fquotient_3_f_0(mercury__calendar__Temp_9, (MR_Integer) 1, (MR_Integer) 13);
            }
#line 889 "calendar.m"
            mercury__calendar__V_29_29 = (mercury__calendar__V_94_94 + mercury__calendar__V_31_31);
#line 889 "calendar.m"
            mercury__calendar__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 0)));
#line 889 "calendar.m"
            mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 1)));
#line 889 "calendar.m"
            mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 2)));
#line 889 "calendar.m"
            mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 3)));
#line 889 "calendar.m"
            mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 4)));
#line 889 "calendar.m"
            mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 5)));
#line 889 "calendar.m"
            mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 6)));
#line 889 "calendar.m"
            {
#line 889 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 889 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 0) = ((MR_Box) (mercury__calendar__V_29_29));
#line 889 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 1) = ((MR_Box) (mercury__calendar__V_108_108));
#line 889 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 2) = ((MR_Box) (mercury__calendar__V_109_109));
#line 889 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 3) = ((MR_Box) (mercury__calendar__V_110_110));
#line 889 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 4) = ((MR_Box) (mercury__calendar__V_111_111));
#line 889 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 5) = ((MR_Box) (mercury__calendar__V_112_112));
#line 889 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 6) = ((MR_Box) (mercury__calendar__V_113_113));
#line 889 "calendar.m"
            }
#line 890 "calendar.m"
            /* direct tailcall eliminated */
#line 890 "calendar.m"
            {
#line 890 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_E_28_28;

#line 890 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_0_11 = mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11;
#line 890 "calendar.m"
            }
#line 890 "calendar.m"
            continue;
#line 885 "calendar.m"
          }
#line 891 "calendar.m"
        else
#line 901 "calendar.m"
          {
#line 901 "calendar.m"
            MR_Integer mercury__calendar__MaxDaysInMonth_10;
#line 901 "calendar.m"
            MR_Integer mercury__calendar__V_37_37;
#line 901 "calendar.m"
            MR_Integer mercury__calendar__V_126_126;
#line 901 "calendar.m"
            MR_Integer mercury__calendar__V_127_127;
#line 901 "calendar.m"
            MR_Integer mercury__calendar__V_128_128;
#line 901 "calendar.m"
            MR_Integer mercury__calendar__V_129_129;
#line 901 "calendar.m"
            MR_Integer mercury__calendar__V_130_130;
#line 901 "calendar.m"
            MR_Integer mercury__calendar__V_131_131;
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

#line 892 "calendar.m"
            {
#line 892 "calendar.m"
              mercury__calendar__MaxDaysInMonth_10 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_35_35, mercury__calendar__V_114_114);
            }
#line 893 "calendar.m"
            mercury__calendar__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 893 "calendar.m"
            mercury__calendar__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 893 "calendar.m"
            mercury__calendar__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 893 "calendar.m"
            mercury__calendar__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 893 "calendar.m"
            mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 893 "calendar.m"
            mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 893 "calendar.m"
            mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
#line 893 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_37_37 > mercury__calendar__MaxDaysInMonth_10);
#line 901 "calendar.m"
            if (mercury__calendar__succeeded)
#line 895 "calendar.m"
              {
#line 895 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_38_38;
#line 895 "calendar.m"
                MR_Integer mercury__calendar__V_39_39 = (mercury__calendar__V_37_37 - mercury__calendar__MaxDaysInMonth_10);
#line 895 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_42_42;
#line 895 "calendar.m"
                MR_Integer mercury__calendar__V_43_43;
#line 895 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_46_46;
#line 895 "calendar.m"
                MR_Integer mercury__calendar__V_47_47;
#line 895 "calendar.m"
                MR_Integer mercury__calendar__V_49_49;
#line 895 "calendar.m"
                MR_Integer mercury__calendar__Temp_54;
#line 895 "calendar.m"
                MR_Integer mercury__calendar__V_139_139 = mercury__calendar__V_127_127;
#line 895 "calendar.m"
                MR_Integer mercury__calendar__V_151_151;
#line 898 "calendar.m"
                MR_Integer mercury__calendar__V_153_153;
#line 898 "calendar.m"
                MR_Integer mercury__calendar__V_154_154;
#line 898 "calendar.m"
                MR_Integer mercury__calendar__V_155_155;
#line 898 "calendar.m"
                MR_Integer mercury__calendar__V_156_156;
#line 898 "calendar.m"
                MR_Integer mercury__calendar__V_157_157;
#line 898 "calendar.m"
                MR_Integer mercury__calendar__V_152_152;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_165_165;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_166_166;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_167_167;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_168_168;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_169_169;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_170_170;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_164_164;

#line 895 "calendar.m"
                {
#line 895 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 895 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 0) = ((MR_Box) (mercury__calendar__V_126_126));
#line 895 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 1) = ((MR_Box) (mercury__calendar__V_139_139));
#line 895 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 2) = ((MR_Box) (mercury__calendar__V_39_39));
#line 895 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 3) = ((MR_Box) (mercury__calendar__V_128_128));
#line 895 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 4) = ((MR_Box) (mercury__calendar__V_129_129));
#line 895 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 5) = ((MR_Box) (mercury__calendar__V_130_130));
#line 895 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 6) = ((MR_Box) (mercury__calendar__V_131_131));
#line 895 "calendar.m"
                }
#line 897 "calendar.m"
                mercury__calendar__Temp_54 = (mercury__calendar__V_139_139 + (MR_Integer) 1);
#line 898 "calendar.m"
                {
#line 898 "calendar.m"
                  mercury__calendar__V_43_43 = mercury__calendar__modulo_3_f_0(mercury__calendar__Temp_54, (MR_Integer) 1, (MR_Integer) 13);
                }
#line 898 "calendar.m"
                mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 0)));
#line 898 "calendar.m"
                mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 1)));
#line 898 "calendar.m"
                mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 2)));
#line 898 "calendar.m"
                mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 3)));
#line 898 "calendar.m"
                mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 4)));
#line 898 "calendar.m"
                mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 5)));
#line 898 "calendar.m"
                mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 6)));
#line 898 "calendar.m"
                {
#line 898 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 898 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 0) = ((MR_Box) (mercury__calendar__V_151_151));
#line 898 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 1) = ((MR_Box) (mercury__calendar__V_43_43));
#line 898 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 2) = ((MR_Box) (mercury__calendar__V_153_153));
#line 898 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 3) = ((MR_Box) (mercury__calendar__V_154_154));
#line 898 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 4) = ((MR_Box) (mercury__calendar__V_155_155));
#line 898 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 5) = ((MR_Box) (mercury__calendar__V_156_156));
#line 898 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 6) = ((MR_Box) (mercury__calendar__V_157_157));
#line 898 "calendar.m"
                }
#line 899 "calendar.m"
                {
#line 899 "calendar.m"
                  mercury__calendar__V_49_49 = mercury__calendar__fquotient_3_f_0(mercury__calendar__Temp_54, (MR_Integer) 1, (MR_Integer) 13);
                }
#line 899 "calendar.m"
                mercury__calendar__V_47_47 = (mercury__calendar__V_151_151 + mercury__calendar__V_49_49);
#line 899 "calendar.m"
                mercury__calendar__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 0)));
#line 899 "calendar.m"
                mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 1)));
#line 899 "calendar.m"
                mercury__calendar__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 2)));
#line 899 "calendar.m"
                mercury__calendar__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 3)));
#line 899 "calendar.m"
                mercury__calendar__V_168_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 4)));
#line 899 "calendar.m"
                mercury__calendar__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 5)));
#line 899 "calendar.m"
                mercury__calendar__V_170_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 6)));
#line 899 "calendar.m"
                {
#line 899 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 0) = ((MR_Box) (mercury__calendar__V_47_47));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 1) = ((MR_Box) (mercury__calendar__V_165_165));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 2) = ((MR_Box) (mercury__calendar__V_166_166));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 3) = ((MR_Box) (mercury__calendar__V_167_167));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 4) = ((MR_Box) (mercury__calendar__V_168_168));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 5) = ((MR_Box) (mercury__calendar__V_169_169));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 6) = ((MR_Box) (mercury__calendar__V_170_170));
#line 899 "calendar.m"
                }
#line 900 "calendar.m"
                /* direct tailcall eliminated */
#line 900 "calendar.m"
                {
#line 900 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_E_46_46;

#line 900 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_0_11 = mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11;
#line 900 "calendar.m"
                }
#line 900 "calendar.m"
                continue;
#line 895 "calendar.m"
              }
#line 901 "calendar.m"
            else
#line 900 "calendar.m"
              *mercury__calendar__STATE_VARIABLE_E_12 = mercury__calendar__STATE_VARIABLE_E_0_11;
#line 901 "calendar.m"
          }
#line 891 "calendar.m"
      }
#line 891 "calendar.m"
      break;
#line 891 "calendar.m"
    }
#line 880 "calendar.m"
}

#line 175 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____years_0_0(
#line 175 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 175 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 175 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 175 "calendar.m"
{
#line 175 "calendar.m"
  {
#line 175 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 175 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 175 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 175 "calendar.m"
  }
#line 175 "calendar.m"
}

#line 175 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0(
#line 175 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 175 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 175 "calendar.m"
{
#line 175 "calendar.m"
  {
#line 175 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 175 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 175 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 175 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 175 "calendar.m"
    return mercury__calendar__succeeded;
#line 175 "calendar.m"
  }
#line 175 "calendar.m"
}

#line 39 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____year_0_0(
#line 39 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 39 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 39 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 39 "calendar.m"
{
#line 39 "calendar.m"
  {
#line 39 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 39 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 39 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 39 "calendar.m"
  }
#line 39 "calendar.m"
}

#line 39 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0(
#line 39 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 39 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 39 "calendar.m"
{
#line 39 "calendar.m"
  {
#line 39 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 39 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 39 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 39 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 39 "calendar.m"
    return mercury__calendar__succeeded;
#line 39 "calendar.m"
  }
#line 39 "calendar.m"
}

#line 180 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____seconds_0_0(
#line 180 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 180 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 180 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 180 "calendar.m"
{
#line 180 "calendar.m"
  {
#line 180 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 180 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 180 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 180 "calendar.m"
  }
#line 180 "calendar.m"
}

#line 180 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0(
#line 180 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 180 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 180 "calendar.m"
{
#line 180 "calendar.m"
  {
#line 180 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 180 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 180 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 180 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 180 "calendar.m"
    return mercury__calendar__succeeded;
#line 180 "calendar.m"
  }
#line 180 "calendar.m"
}

#line 43 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____second_0_0(
#line 43 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 43 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 43 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 43 "calendar.m"
{
#line 43 "calendar.m"
  {
#line 43 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 43 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 43 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 43 "calendar.m"
  }
#line 43 "calendar.m"
}

#line 43 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0(
#line 43 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 43 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 43 "calendar.m"
{
#line 43 "calendar.m"
  {
#line 43 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 43 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 43 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 43 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 43 "calendar.m"
    return mercury__calendar__succeeded;
#line 43 "calendar.m"
  }
#line 43 "calendar.m"
}

#line 956 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____order_0_0(
#line 956 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 956 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 956 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 956 "calendar.m"
{
#line 956 "calendar.m"
  {
#line 956 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 956 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 956 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 956 "calendar.m"
  }
#line 956 "calendar.m"
}

#line 956 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0(
#line 956 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_1,
#line 956 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 956 "calendar.m"
{
#line 4011 "calendar.c"
  {
#line 4013 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 4016 "calendar.c"
    return mercury__calendar__succeeded;
#line 4018 "calendar.c"
  }
#line 956 "calendar.m"
}

#line 176 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____months_0_0(
#line 176 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 176 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 176 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 176 "calendar.m"
{
#line 176 "calendar.m"
  {
#line 176 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 176 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 176 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 176 "calendar.m"
  }
#line 176 "calendar.m"
}

#line 176 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0(
#line 176 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 176 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 176 "calendar.m"
{
#line 176 "calendar.m"
  {
#line 176 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 176 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 176 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 176 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 176 "calendar.m"
    return mercury__calendar__succeeded;
#line 176 "calendar.m"
  }
#line 176 "calendar.m"
}

#line 46 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____month_0_0(
#line 46 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 46 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 46 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 46 "calendar.m"
{
#line 46 "calendar.m"
  {
#line 46 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 46 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 46 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 46 "calendar.m"
  }
#line 46 "calendar.m"
}

#line 46 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0(
#line 46 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_1,
#line 46 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 46 "calendar.m"
{
#line 4153 "calendar.c"
  {
#line 4155 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 4158 "calendar.c"
    return mercury__calendar__succeeded;
#line 4160 "calendar.c"
  }
#line 46 "calendar.m"
}

#line 179 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____minutes_0_0(
#line 179 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 179 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 179 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 179 "calendar.m"
{
#line 179 "calendar.m"
  {
#line 179 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 179 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 179 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 179 "calendar.m"
  }
#line 179 "calendar.m"
}

#line 179 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0(
#line 179 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 179 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 179 "calendar.m"
{
#line 179 "calendar.m"
  {
#line 179 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 179 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 179 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 179 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 179 "calendar.m"
    return mercury__calendar__succeeded;
#line 179 "calendar.m"
  }
#line 179 "calendar.m"
}

#line 42 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____minute_0_0(
#line 42 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 42 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 42 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 42 "calendar.m"
{
#line 42 "calendar.m"
  {
#line 42 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 42 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 42 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 42 "calendar.m"
  }
#line 42 "calendar.m"
}

#line 42 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0(
#line 42 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 42 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 42 "calendar.m"
{
#line 42 "calendar.m"
  {
#line 42 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 42 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 42 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 42 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 42 "calendar.m"
    return mercury__calendar__succeeded;
#line 42 "calendar.m"
  }
#line 42 "calendar.m"
}

#line 181 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____microseconds_0_0(
#line 181 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 181 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 181 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 181 "calendar.m"
{
#line 181 "calendar.m"
  {
#line 181 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 181 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 181 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 181 "calendar.m"
  }
#line 181 "calendar.m"
}

#line 181 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0(
#line 181 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 181 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 181 "calendar.m"
{
#line 181 "calendar.m"
  {
#line 181 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 181 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 181 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 181 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 181 "calendar.m"
    return mercury__calendar__succeeded;
#line 181 "calendar.m"
  }
#line 181 "calendar.m"
}

#line 44 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____microsecond_0_0(
#line 44 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 44 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 44 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 44 "calendar.m"
{
#line 44 "calendar.m"
  {
#line 44 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 44 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 44 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 44 "calendar.m"
  }
#line 44 "calendar.m"
}

#line 44 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0(
#line 44 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 44 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 44 "calendar.m"
{
#line 44 "calendar.m"
  {
#line 44 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 44 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 44 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 44 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 44 "calendar.m"
    return mercury__calendar__succeeded;
#line 44 "calendar.m"
  }
#line 44 "calendar.m"
}

#line 178 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____hours_0_0(
#line 178 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 178 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 178 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 178 "calendar.m"
{
#line 178 "calendar.m"
  {
#line 178 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 178 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 178 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 178 "calendar.m"
  }
#line 178 "calendar.m"
}

#line 178 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0(
#line 178 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 178 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 178 "calendar.m"
{
#line 178 "calendar.m"
  {
#line 178 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 178 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 178 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 178 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 178 "calendar.m"
    return mercury__calendar__succeeded;
#line 178 "calendar.m"
  }
#line 178 "calendar.m"
}

#line 41 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____hour_0_0(
#line 41 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 41 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 41 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 41 "calendar.m"
{
#line 41 "calendar.m"
  {
#line 41 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 41 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 41 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 41 "calendar.m"
  }
#line 41 "calendar.m"
}

#line 41 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0(
#line 41 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 41 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 41 "calendar.m"
{
#line 41 "calendar.m"
  {
#line 41 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 41 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 41 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 41 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 41 "calendar.m"
    return mercury__calendar__succeeded;
#line 41 "calendar.m"
  }
#line 41 "calendar.m"
}

#line 414 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____duration_0_0(
#line 414 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 414 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 414 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 414 "calendar.m"
{
#line 414 "calendar.m"
  {
#line 414 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 414 "calendar.m"
    MR_Integer mercury__calendar__CastX_15 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 414 "calendar.m"
    MR_Integer mercury__calendar__CastY_16 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 414 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_15 == mercury__calendar__CastY_16);
#line 414 "calendar.m"
    if (mercury__calendar__succeeded)
#line 4633 "calendar.c"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 414 "calendar.m"
    else
#line 414 "calendar.m"
      {
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 0)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 1)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 2)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 3)));
#line 414 "calendar.m"
        MR_Word mercury__calendar__V_12_12;

#line 66 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__V_4_4 < mercury__calendar__V_8_8);
#line 69 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
          mercury__calendar__V_12_12 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__calendar__succeeded = (mercury__calendar__V_4_4 == mercury__calendar__V_8_8);
#line 74 "private_builtin.opt"
            if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
              mercury__calendar__V_12_12 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__calendar__V_12_12 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 4680 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_12_12 == (MR_Integer) 0);
#line 414 "calendar.m"
        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 414 "calendar.m"
        if (mercury__calendar__succeeded)
#line 414 "calendar.m"
          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_12_12;
#line 414 "calendar.m"
        else
#line 414 "calendar.m"
          {
#line 414 "calendar.m"
            MR_Word mercury__calendar__V_13_13;

#line 66 "private_builtin.opt"
            mercury__calendar__succeeded = (mercury__calendar__V_5_5 < mercury__calendar__V_9_9);
#line 69 "private_builtin.opt"
            if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
              mercury__calendar__V_13_13 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__calendar__succeeded = (mercury__calendar__V_5_5 == mercury__calendar__V_9_9);
#line 74 "private_builtin.opt"
                if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                  mercury__calendar__V_13_13 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__calendar__V_13_13 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 4717 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_13_13 == (MR_Integer) 0);
#line 414 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 414 "calendar.m"
            if (mercury__calendar__succeeded)
#line 414 "calendar.m"
              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_13_13;
#line 414 "calendar.m"
            else
#line 414 "calendar.m"
              {
#line 414 "calendar.m"
                MR_Word mercury__calendar__V_14_14;

#line 66 "private_builtin.opt"
                mercury__calendar__succeeded = (mercury__calendar__V_6_6 < mercury__calendar__V_10_10);
#line 69 "private_builtin.opt"
                if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
                  mercury__calendar__V_14_14 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__calendar__succeeded = (mercury__calendar__V_6_6 == mercury__calendar__V_10_10);
#line 74 "private_builtin.opt"
                    if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                      mercury__calendar__V_14_14 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__calendar__V_14_14 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 4754 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_14_14 == (MR_Integer) 0);
#line 414 "calendar.m"
                mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 414 "calendar.m"
                if (mercury__calendar__succeeded)
#line 414 "calendar.m"
                  *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_14_14;
#line 414 "calendar.m"
                else
#line 69 "private_builtin.opt"
                  {
#line 66 "private_builtin.opt"
                    mercury__calendar__succeeded = (mercury__calendar__V_7_7 < mercury__calendar__V_11_11);
#line 69 "private_builtin.opt"
                    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
                      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__calendar__succeeded = (mercury__calendar__V_7_7 == mercury__calendar__V_11_11);
#line 74 "private_builtin.opt"
                        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 69 "private_builtin.opt"
                  }
#line 414 "calendar.m"
              }
#line 414 "calendar.m"
          }
#line 414 "calendar.m"
      }
#line 414 "calendar.m"
  }
#line 414 "calendar.m"
}

#line 414 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0(
#line 414 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 414 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 414 "calendar.m"
{
#line 414 "calendar.m"
  {
#line 414 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 414 "calendar.m"
    MR_Integer mercury__calendar__CastX_11 = (MR_Integer) mercury__calendar__HeadVar__1_1;
#line 414 "calendar.m"
    MR_Integer mercury__calendar__CastY_12 = (MR_Integer) mercury__calendar__HeadVar__2_2;

#line 414 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_11 == mercury__calendar__CastY_12);
#line 414 "calendar.m"
    if (mercury__calendar__succeeded)
#line 414 "calendar.m"
      mercury__calendar__succeeded = MR_TRUE;
#line 414 "calendar.m"
    else
#line 414 "calendar.m"
      {
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 414 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));

#line 4846 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_3_3 == mercury__calendar__V_7_7);
#line 414 "calendar.m"
        if (mercury__calendar__succeeded)
#line 414 "calendar.m"
          {
#line 4852 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_4_4 == mercury__calendar__V_8_8);
#line 414 "calendar.m"
            if (mercury__calendar__succeeded)
#line 414 "calendar.m"
              {
#line 4858 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_5_5 == mercury__calendar__V_9_9);
#line 414 "calendar.m"
                if (mercury__calendar__succeeded)
#line 4862 "calendar.c"
                  mercury__calendar__succeeded = (mercury__calendar__V_6_6 == mercury__calendar__V_10_10);
#line 414 "calendar.m"
              }
#line 414 "calendar.m"
          }
#line 414 "calendar.m"
      }
#line 414 "calendar.m"
    return mercury__calendar__succeeded;
#line 414 "calendar.m"
  }
#line 414 "calendar.m"
}

#line 177 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____days_0_0(
#line 177 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 177 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 177 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 177 "calendar.m"
{
#line 177 "calendar.m"
  {
#line 177 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 177 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 177 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 177 "calendar.m"
  }
#line 177 "calendar.m"
}

#line 177 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0(
#line 177 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 177 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 177 "calendar.m"
{
#line 177 "calendar.m"
  {
#line 177 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 177 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 177 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 177 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 177 "calendar.m"
    return mercury__calendar__succeeded;
#line 177 "calendar.m"
  }
#line 177 "calendar.m"
}

#line 60 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0(
#line 60 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 60 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 60 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 60 "calendar.m"
{
#line 60 "calendar.m"
  {
#line 60 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 60 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 60 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 60 "calendar.m"
  }
#line 60 "calendar.m"
}

#line 60 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0(
#line 60 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_1,
#line 60 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 60 "calendar.m"
{
#line 5007 "calendar.c"
  {
#line 5009 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 5012 "calendar.c"
    return mercury__calendar__succeeded;
#line 5014 "calendar.c"
  }
#line 60 "calendar.m"
}

#line 40 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0(
#line 40 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 40 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 40 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 40 "calendar.m"
{
#line 40 "calendar.m"
  {
#line 40 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 40 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 40 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 40 "calendar.m"
  }
#line 40 "calendar.m"
}

#line 40 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0(
#line 40 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 40 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 40 "calendar.m"
{
#line 40 "calendar.m"
  {
#line 40 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 40 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 40 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 40 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 40 "calendar.m"
    return mercury__calendar__succeeded;
#line 40 "calendar.m"
  }
#line 40 "calendar.m"
}

#line 403 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____date_0_0(
#line 403 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 403 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 403 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 403 "calendar.m"
{
#line 403 "calendar.m"
  {
#line 403 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 403 "calendar.m"
    MR_Integer mercury__calendar__CastX_24 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 403 "calendar.m"
    MR_Integer mercury__calendar__CastY_25 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 403 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_24 == mercury__calendar__CastY_25);
#line 403 "calendar.m"
    if (mercury__calendar__succeeded)
#line 5117 "calendar.c"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 403 "calendar.m"
    else
#line 403 "calendar.m"
      {
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 4)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 5)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 6)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 0)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 1)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 2)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 3)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 4)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 5)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 6)));
#line 403 "calendar.m"
        MR_Word mercury__calendar__V_18_18;

#line 66 "private_builtin.opt"
        mercury__calendar__succeeded = (mercury__calendar__V_4_4 < mercury__calendar__V_11_11);
#line 69 "private_builtin.opt"
        if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
          mercury__calendar__V_18_18 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__calendar__succeeded = (mercury__calendar__V_4_4 == mercury__calendar__V_11_11);
#line 74 "private_builtin.opt"
            if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
              mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__calendar__V_18_18 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 5176 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_18_18 == (MR_Integer) 0);
#line 403 "calendar.m"
        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 403 "calendar.m"
        if (mercury__calendar__succeeded)
#line 403 "calendar.m"
          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_18_18;
#line 403 "calendar.m"
        else
#line 403 "calendar.m"
          {
#line 403 "calendar.m"
            MR_Word mercury__calendar__V_19_19;

#line 66 "private_builtin.opt"
            mercury__calendar__succeeded = (mercury__calendar__V_5_5 < mercury__calendar__V_12_12);
#line 69 "private_builtin.opt"
            if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
              mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__calendar__succeeded = (mercury__calendar__V_5_5 == mercury__calendar__V_12_12);
#line 74 "private_builtin.opt"
                if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                  mercury__calendar__V_19_19 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__calendar__V_19_19 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 5213 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_19_19 == (MR_Integer) 0);
#line 403 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 403 "calendar.m"
            if (mercury__calendar__succeeded)
#line 403 "calendar.m"
              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_19_19;
#line 403 "calendar.m"
            else
#line 403 "calendar.m"
              {
#line 403 "calendar.m"
                MR_Word mercury__calendar__V_20_20;

#line 66 "private_builtin.opt"
                mercury__calendar__succeeded = (mercury__calendar__V_6_6 < mercury__calendar__V_13_13);
#line 69 "private_builtin.opt"
                if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
                  mercury__calendar__V_20_20 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__calendar__succeeded = (mercury__calendar__V_6_6 == mercury__calendar__V_13_13);
#line 74 "private_builtin.opt"
                    if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                      mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__calendar__V_20_20 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 5250 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_20_20 == (MR_Integer) 0);
#line 403 "calendar.m"
                mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 403 "calendar.m"
                if (mercury__calendar__succeeded)
#line 403 "calendar.m"
                  *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_20_20;
#line 403 "calendar.m"
                else
#line 403 "calendar.m"
                  {
#line 403 "calendar.m"
                    MR_Word mercury__calendar__V_21_21;

#line 66 "private_builtin.opt"
                    mercury__calendar__succeeded = (mercury__calendar__V_7_7 < mercury__calendar__V_14_14);
#line 69 "private_builtin.opt"
                    if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
                      mercury__calendar__V_21_21 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__calendar__succeeded = (mercury__calendar__V_7_7 == mercury__calendar__V_14_14);
#line 74 "private_builtin.opt"
                        if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                          mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          mercury__calendar__V_21_21 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 5287 "calendar.c"
                    mercury__calendar__succeeded = (mercury__calendar__V_21_21 == (MR_Integer) 0);
#line 403 "calendar.m"
                    mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 403 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 403 "calendar.m"
                      *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_21_21;
#line 403 "calendar.m"
                    else
#line 403 "calendar.m"
                      {
#line 403 "calendar.m"
                        MR_Word mercury__calendar__V_22_22;

#line 66 "private_builtin.opt"
                        mercury__calendar__succeeded = (mercury__calendar__V_8_8 < mercury__calendar__V_15_15);
#line 69 "private_builtin.opt"
                        if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
                          mercury__calendar__V_22_22 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                        else
#line 74 "private_builtin.opt"
                          {
#line 71 "private_builtin.opt"
                            mercury__calendar__succeeded = (mercury__calendar__V_8_8 == mercury__calendar__V_15_15);
#line 74 "private_builtin.opt"
                            if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                              mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                            else
#line 75 "private_builtin.opt"
                              mercury__calendar__V_22_22 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                          }
#line 5324 "calendar.c"
                        mercury__calendar__succeeded = (mercury__calendar__V_22_22 == (MR_Integer) 0);
#line 403 "calendar.m"
                        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 403 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 403 "calendar.m"
                          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_22_22;
#line 403 "calendar.m"
                        else
#line 403 "calendar.m"
                          {
#line 403 "calendar.m"
                            MR_Word mercury__calendar__V_23_23;

#line 66 "private_builtin.opt"
                            mercury__calendar__succeeded = (mercury__calendar__V_9_9 < mercury__calendar__V_16_16);
#line 69 "private_builtin.opt"
                            if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
                              mercury__calendar__V_23_23 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                            else
#line 74 "private_builtin.opt"
                              {
#line 71 "private_builtin.opt"
                                mercury__calendar__succeeded = (mercury__calendar__V_9_9 == mercury__calendar__V_16_16);
#line 74 "private_builtin.opt"
                                if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                                  mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                else
#line 75 "private_builtin.opt"
                                  mercury__calendar__V_23_23 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                              }
#line 5361 "calendar.c"
                            mercury__calendar__succeeded = (mercury__calendar__V_23_23 == (MR_Integer) 0);
#line 403 "calendar.m"
                            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 403 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 403 "calendar.m"
                              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_23_23;
#line 403 "calendar.m"
                            else
#line 69 "private_builtin.opt"
                              {
#line 66 "private_builtin.opt"
                                mercury__calendar__succeeded = (mercury__calendar__V_10_10 < mercury__calendar__V_17_17);
#line 69 "private_builtin.opt"
                                if (mercury__calendar__succeeded)
#line 68 "private_builtin.opt"
                                  *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                else
#line 74 "private_builtin.opt"
                                  {
#line 71 "private_builtin.opt"
                                    mercury__calendar__succeeded = (mercury__calendar__V_10_10 == mercury__calendar__V_17_17);
#line 74 "private_builtin.opt"
                                    if (mercury__calendar__succeeded)
#line 73 "private_builtin.opt"
                                      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                    else
#line 75 "private_builtin.opt"
                                      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                  }
#line 69 "private_builtin.opt"
                              }
#line 403 "calendar.m"
                          }
#line 403 "calendar.m"
                      }
#line 403 "calendar.m"
                  }
#line 403 "calendar.m"
              }
#line 403 "calendar.m"
          }
#line 403 "calendar.m"
      }
#line 403 "calendar.m"
  }
#line 403 "calendar.m"
}

#line 403 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0(
#line 403 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 403 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 403 "calendar.m"
{
#line 403 "calendar.m"
  {
#line 403 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 403 "calendar.m"
    MR_Integer mercury__calendar__CastX_17 = (MR_Integer) mercury__calendar__HeadVar__1_1;
#line 403 "calendar.m"
    MR_Integer mercury__calendar__CastY_18 = (MR_Integer) mercury__calendar__HeadVar__2_2;

#line 403 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_17 == mercury__calendar__CastY_18);
#line 403 "calendar.m"
    if (mercury__calendar__succeeded)
#line 403 "calendar.m"
      mercury__calendar__succeeded = MR_TRUE;
#line 403 "calendar.m"
    else
#line 403 "calendar.m"
      {
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 4)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 5)));
#line 403 "calendar.m"
        MR_Integer mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 6)));

#line 5471 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_3_3 == mercury__calendar__V_10_10);
#line 403 "calendar.m"
        if (mercury__calendar__succeeded)
#line 403 "calendar.m"
          {
#line 5477 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_4_4 == mercury__calendar__V_11_11);
#line 403 "calendar.m"
            if (mercury__calendar__succeeded)
#line 403 "calendar.m"
              {
#line 5483 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_5_5 == mercury__calendar__V_12_12);
#line 403 "calendar.m"
                if (mercury__calendar__succeeded)
#line 403 "calendar.m"
                  {
#line 5489 "calendar.c"
                    mercury__calendar__succeeded = (mercury__calendar__V_6_6 == mercury__calendar__V_13_13);
#line 403 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 403 "calendar.m"
                      {
#line 5495 "calendar.c"
                        mercury__calendar__succeeded = (mercury__calendar__V_7_7 == mercury__calendar__V_14_14);
#line 403 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 403 "calendar.m"
                          {
#line 5501 "calendar.c"
                            mercury__calendar__succeeded = (mercury__calendar__V_8_8 == mercury__calendar__V_15_15);
#line 403 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 5505 "calendar.c"
                              mercury__calendar__succeeded = (mercury__calendar__V_9_9 == mercury__calendar__V_16_16);
#line 403 "calendar.m"
                          }
#line 403 "calendar.m"
                      }
#line 403 "calendar.m"
                  }
#line 403 "calendar.m"
              }
#line 403 "calendar.m"
          }
#line 403 "calendar.m"
      }
#line 403 "calendar.m"
    return mercury__calendar__succeeded;
#line 403 "calendar.m"
  }
#line 403 "calendar.m"
}

#line 1153 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__tm_to_date_1_f_0(
#line 1153 "calendar.m"
  MR_Word mercury__calendar__TM_3)
#line 1153 "calendar.m"
{
#line 1155 "calendar.m"
  {
#line 1155 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1155 "calendar.m"
    MR_Word mercury__calendar__Date_4;
#line 1155 "calendar.m"
    MR_Integer mercury__calendar__TMYear_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 0)));
#line 1155 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 1)));
#line 1155 "calendar.m"
    MR_Integer mercury__calendar__Year_14 = ((MR_Integer) 1900 + mercury__calendar__TMYear_5);
#line 1155 "calendar.m"
    MR_Integer mercury__calendar__Month_15 = (mercury__calendar__TMMonth_6 + (MR_Integer) 1);
#line 1155 "calendar.m"
    MR_Integer mercury__calendar__Day_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 2)));
#line 1155 "calendar.m"
    MR_Integer mercury__calendar__Hour_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 3)));
#line 1155 "calendar.m"
    MR_Integer mercury__calendar__Minute_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 4)));
#line 1155 "calendar.m"
    MR_Integer mercury__calendar__Second_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 5)));
#line 1156 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 6)));
#line 1156 "calendar.m"
    MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 7)));
#line 1156 "calendar.m"
    MR_Word mercury__calendar__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 8)));

#line 1163 "calendar.m"
    {
#line 1163 "calendar.m"
      mercury__calendar__Date_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 0) = ((MR_Box) (mercury__calendar__Year_14));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 1) = ((MR_Box) (mercury__calendar__Month_15));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 2) = ((MR_Box) (mercury__calendar__Day_16));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 3) = ((MR_Box) (mercury__calendar__Hour_17));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 4) = ((MR_Box) (mercury__calendar__Minute_18));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 5) = ((MR_Box) (mercury__calendar__Second_19));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "calendar.m"
    }
#line 1155 "calendar.m"
    return mercury__calendar__Date_4;
#line 1155 "calendar.m"
  }
#line 1153 "calendar.m"
}

#line 1056 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_day_of_week_from_mod_1_f_0(
#line 1056 "calendar.m"
  MR_Integer mercury__calendar__Mod_3)
#line 1056 "calendar.m"
{
#line 1061 "calendar.m"
  {
#line 1061 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1061 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek_4;
#line 1061 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek0_5;

#line 1182 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 0))
#line 1182 "calendar.m"
      {
#line 1182 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 0;
#line 1182 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1182 "calendar.m"
      }
#line 1182 "calendar.m"
    else
#line 1182 "calendar.m"
      if ((mercury__calendar__Mod_3 == (MR_Integer) 1))
#line 1183 "calendar.m"
        {
#line 1183 "calendar.m"
          mercury__calendar__DayOfWeek0_5 = (MR_Integer) 1;
#line 1183 "calendar.m"
          mercury__calendar__succeeded = MR_TRUE;
#line 1183 "calendar.m"
        }
#line 1182 "calendar.m"
      else
#line 1182 "calendar.m"
        if ((mercury__calendar__Mod_3 == (MR_Integer) 2))
#line 1184 "calendar.m"
          {
#line 1184 "calendar.m"
            mercury__calendar__DayOfWeek0_5 = (MR_Integer) 2;
#line 1184 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1184 "calendar.m"
          }
#line 1182 "calendar.m"
        else
#line 1182 "calendar.m"
          if ((mercury__calendar__Mod_3 == (MR_Integer) 3))
#line 1185 "calendar.m"
            {
#line 1185 "calendar.m"
              mercury__calendar__DayOfWeek0_5 = (MR_Integer) 3;
#line 1185 "calendar.m"
              mercury__calendar__succeeded = MR_TRUE;
#line 1185 "calendar.m"
            }
#line 1182 "calendar.m"
          else
#line 1182 "calendar.m"
            if ((mercury__calendar__Mod_3 == (MR_Integer) 4))
#line 1186 "calendar.m"
              {
#line 1186 "calendar.m"
                mercury__calendar__DayOfWeek0_5 = (MR_Integer) 4;
#line 1186 "calendar.m"
                mercury__calendar__succeeded = MR_TRUE;
#line 1186 "calendar.m"
              }
#line 1182 "calendar.m"
            else
#line 1182 "calendar.m"
              if ((mercury__calendar__Mod_3 == (MR_Integer) 5))
#line 1187 "calendar.m"
                {
#line 1187 "calendar.m"
                  mercury__calendar__DayOfWeek0_5 = (MR_Integer) 5;
#line 1187 "calendar.m"
                  mercury__calendar__succeeded = MR_TRUE;
#line 1187 "calendar.m"
                }
#line 1182 "calendar.m"
              else
#line 1182 "calendar.m"
                if ((mercury__calendar__Mod_3 == (MR_Integer) 6))
#line 1188 "calendar.m"
                  {
#line 1188 "calendar.m"
                    mercury__calendar__DayOfWeek0_5 = (MR_Integer) 6;
#line 1188 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 1188 "calendar.m"
                  }
#line 1182 "calendar.m"
                else
#line 1182 "calendar.m"
                  mercury__calendar__succeeded = MR_FALSE;
#line 1061 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1060 "calendar.m"
      mercury__calendar__DayOfWeek_4 = mercury__calendar__DayOfWeek0_5;
#line 1061 "calendar.m"
    else
#line 1062 "calendar.m"
      {
#line 1062 "calendar.m"
        MR_String mercury__calendar__V_6_6;
#line 1062 "calendar.m"
        MR_String mercury__calendar__V_8_8;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Mod_3, (MR_Integer) 10, &mercury__calendar__V_8_8);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_day_of_week_from_mod: invalid mod: ", mercury__calendar__V_8_8, &mercury__calendar__V_6_6);
        }
#line 1062 "calendar.m"
        {
#line 1062 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 1062 "calendar.m"
      }
#line 1061 "calendar.m"
    return mercury__calendar__DayOfWeek_4;
#line 1061 "calendar.m"
  }
#line 1056 "calendar.m"
}

#line 1025 "calendar.m"
static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
#line 1025 "calendar.m"
  MR_Integer mercury__calendar__BorrowVal_6,
#line 1025 "calendar.m"
  MR_Integer mercury__calendar__Val1_7,
#line 1025 "calendar.m"
  MR_Integer mercury__calendar__Val2_8,
#line 1025 "calendar.m"
  MR_Integer * mercury__calendar__Diff_9,
#line 1025 "calendar.m"
  MR_Integer * mercury__calendar__Borrow_10)
#line 1025 "calendar.m"
{
#line 1032 "calendar.m"
  {
#line 1032 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Val1_7 >= mercury__calendar__Val2_8);

#line 1032 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1030 "calendar.m"
      {
#line 1030 "calendar.m"
        *mercury__calendar__Borrow_10 = (MR_Integer) 0;
#line 1031 "calendar.m"
        *mercury__calendar__Diff_9 = (mercury__calendar__Val1_7 - mercury__calendar__Val2_8);
#line 1030 "calendar.m"
      }
#line 1032 "calendar.m"
    else
#line 1033 "calendar.m"
      {
#line 1033 "calendar.m"
        MR_Integer mercury__calendar__V_11_11;

#line 1033 "calendar.m"
        *mercury__calendar__Borrow_10 = (MR_Integer) 1;
#line 1034 "calendar.m"
        mercury__calendar__V_11_11 = (mercury__calendar__BorrowVal_6 + mercury__calendar__Val1_7);
#line 1034 "calendar.m"
        *mercury__calendar__Diff_9 = (mercury__calendar__V_11_11 - mercury__calendar__Val2_8);
#line 1033 "calendar.m"
      }
#line 1032 "calendar.m"
  }
#line 1025 "calendar.m"
}

#line 969 "calendar.m"
static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
#line 969 "calendar.m"
  MR_Word mercury__calendar__OriginalOrder_5,
#line 969 "calendar.m"
  MR_Word mercury__calendar__DateA_6,
#line 969 "calendar.m"
  MR_Word mercury__calendar__DateB_7,
#line 969 "calendar.m"
  MR_Word * mercury__calendar__Duration_8)
#line 969 "calendar.m"
{
#line 974 "calendar.m"
  {
#line 974 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__MicroSecondA_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 974 "calendar.m"
    MR_Integer mercury__calendar__MicroSecondB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 974 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_12;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__SecondA_13;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__SecondB_14;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__Seconds_15;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__MinuteA_16;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__MinuteB_17;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__Minutes_18;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__HourA_19;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__HourB_20;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__Hours_21;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__DaysToBorrow_23;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__DayA_25;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__DayB_26;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__Days_28;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__MonthA_29;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__MonthB_30;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__Months_31;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__YearA_32;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__YearB_33;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__Years_34;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_35_35;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_36_36;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_37_37;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_39_39;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_40_40;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_42_42;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_43_43;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_45_45;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_63_63;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_64_64;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_66_66;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_67_67;
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 974 "calendar.m"
    MR_Integer mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 975 "calendar.m"
    MR_Integer mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 975 "calendar.m"
    MR_Integer mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 975 "calendar.m"
    MR_Integer mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 975 "calendar.m"
    MR_Integer mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 975 "calendar.m"
    MR_Integer mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 975 "calendar.m"
    MR_Integer mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_81_81;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_82_82;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_83_83;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_84_84;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_85_85;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_86_86;
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_87_87;
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_88_88;
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_89_89;
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_92_92;
#line 981 "calendar.m"
    MR_Integer mercury__calendar__V_93_93;
#line 981 "calendar.m"
    MR_Integer mercury__calendar__V_94_94;
#line 981 "calendar.m"
    MR_Integer mercury__calendar__V_95_95;
#line 981 "calendar.m"
    MR_Integer mercury__calendar__V_96_96;
#line 981 "calendar.m"
    MR_Integer mercury__calendar__V_97_97;
#line 981 "calendar.m"
    MR_Integer mercury__calendar__V_98_98;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_99_99;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_100_100;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_101_101;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_102_102;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_103_103;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_104_104;
#line 984 "calendar.m"
    MR_Integer mercury__calendar__V_105_105;
#line 984 "calendar.m"
    MR_Integer mercury__calendar__V_106_106;
#line 984 "calendar.m"
    MR_Integer mercury__calendar__V_107_107;
#line 984 "calendar.m"
    MR_Integer mercury__calendar__V_108_108;
#line 984 "calendar.m"
    MR_Integer mercury__calendar__V_109_109;
#line 984 "calendar.m"
    MR_Integer mercury__calendar__V_110_110;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_111_111;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_112_112;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_113_113;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_114_114;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_115_115;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_116_116;
#line 1004 "calendar.m"
    MR_Integer mercury__calendar__V_189_189;
#line 1004 "calendar.m"
    MR_Integer mercury__calendar__V_190_190;
#line 1004 "calendar.m"
    MR_Integer mercury__calendar__V_191_191;
#line 1004 "calendar.m"
    MR_Integer mercury__calendar__V_192_192;
#line 1004 "calendar.m"
    MR_Integer mercury__calendar__V_193_193;
#line 1004 "calendar.m"
    MR_Integer mercury__calendar__V_194_194;
#line 1005 "calendar.m"
    MR_Integer mercury__calendar__V_195_195;
#line 1005 "calendar.m"
    MR_Integer mercury__calendar__V_196_196;
#line 1005 "calendar.m"
    MR_Integer mercury__calendar__V_197_197;
#line 1005 "calendar.m"
    MR_Integer mercury__calendar__V_198_198;
#line 1005 "calendar.m"
    MR_Integer mercury__calendar__V_199_199;
#line 1005 "calendar.m"
    MR_Integer mercury__calendar__V_200_200;
#line 1007 "calendar.m"
    MR_Integer mercury__calendar__V_201_201;
#line 1007 "calendar.m"
    MR_Integer mercury__calendar__V_202_202;
#line 1007 "calendar.m"
    MR_Integer mercury__calendar__V_203_203;
#line 1007 "calendar.m"
    MR_Integer mercury__calendar__V_204_204;
#line 1007 "calendar.m"
    MR_Integer mercury__calendar__V_205_205;
#line 1007 "calendar.m"
    MR_Integer mercury__calendar__V_206_206;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_207_207;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_208_208;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_209_209;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_210_210;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_211_211;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_212_212;

#line 976 "calendar.m"
    {
#line 976 "calendar.m"
      mercury__calendar__V_35_35 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 976 "calendar.m"
    {
#line 976 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0(mercury__calendar__V_35_35, mercury__calendar__MicroSecondA_10, mercury__calendar__MicroSecondB_11, &mercury__calendar__MicroSeconds_12, &mercury__calendar__STATE_VARIABLE_Borrow_36_36);
    }
#line 978 "calendar.m"
    mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 978 "calendar.m"
    mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 978 "calendar.m"
    mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 978 "calendar.m"
    mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 978 "calendar.m"
    mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 978 "calendar.m"
    mercury__calendar__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 978 "calendar.m"
    mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 978 "calendar.m"
    mercury__calendar__SecondA_13 = (mercury__calendar__V_37_37 - mercury__calendar__STATE_VARIABLE_Borrow_36_36);
#line 979 "calendar.m"
    mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 979 "calendar.m"
    mercury__calendar__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 979 "calendar.m"
    mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 979 "calendar.m"
    mercury__calendar__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 979 "calendar.m"
    mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 979 "calendar.m"
    mercury__calendar__SecondB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 979 "calendar.m"
    mercury__calendar__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 980 "calendar.m"
    {
#line 980 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__SecondA_13, mercury__calendar__SecondB_14, &mercury__calendar__Seconds_15, &mercury__calendar__STATE_VARIABLE_Borrow_39_39);
    }
#line 981 "calendar.m"
    mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 981 "calendar.m"
    mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 981 "calendar.m"
    mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 981 "calendar.m"
    mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 981 "calendar.m"
    mercury__calendar__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 981 "calendar.m"
    mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 981 "calendar.m"
    mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 981 "calendar.m"
    mercury__calendar__MinuteA_16 = (mercury__calendar__V_40_40 - mercury__calendar__STATE_VARIABLE_Borrow_39_39);
#line 982 "calendar.m"
    mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 982 "calendar.m"
    mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 982 "calendar.m"
    mercury__calendar__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 982 "calendar.m"
    mercury__calendar__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 982 "calendar.m"
    mercury__calendar__MinuteB_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 982 "calendar.m"
    mercury__calendar__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 982 "calendar.m"
    mercury__calendar__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 983 "calendar.m"
    {
#line 983 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__MinuteA_16, mercury__calendar__MinuteB_17, &mercury__calendar__Minutes_18, &mercury__calendar__STATE_VARIABLE_Borrow_42_42);
    }
#line 984 "calendar.m"
    mercury__calendar__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 984 "calendar.m"
    mercury__calendar__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 984 "calendar.m"
    mercury__calendar__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 984 "calendar.m"
    mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 984 "calendar.m"
    mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 984 "calendar.m"
    mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 984 "calendar.m"
    mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 984 "calendar.m"
    mercury__calendar__HourA_19 = (mercury__calendar__V_43_43 - mercury__calendar__STATE_VARIABLE_Borrow_42_42);
#line 985 "calendar.m"
    mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 985 "calendar.m"
    mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 985 "calendar.m"
    mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 985 "calendar.m"
    mercury__calendar__HourB_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 985 "calendar.m"
    mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 985 "calendar.m"
    mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 985 "calendar.m"
    mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 986 "calendar.m"
    {
#line 986 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, mercury__calendar__HourA_19, mercury__calendar__HourB_20, &mercury__calendar__Hours_21, &mercury__calendar__STATE_VARIABLE_Borrow_45_45);
    }
#line 995 "calendar.m"
    if ((mercury__calendar__OriginalOrder_5 == (MR_Integer) 0))
#line 995 "calendar.m"
      {
#line 995 "calendar.m"
        MR_Integer mercury__calendar__DateBEndOfMonth_27;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_48_48;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_50_50;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_51_51;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_165_165;
#line 996 "calendar.m"
        MR_Integer mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 996 "calendar.m"
        MR_Integer mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 996 "calendar.m"
        MR_Integer mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 996 "calendar.m"
        MR_Integer mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 996 "calendar.m"
        MR_Integer mercury__calendar__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_166_166;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_167_167;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_168_168;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_169_169;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_170_170;
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_177_177;
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_178_178;
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_179_179;
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_180_180;
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_181_181;
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_182_182;
#line 1001 "calendar.m"
        MR_Integer mercury__calendar__V_183_183;
#line 1001 "calendar.m"
        MR_Integer mercury__calendar__V_184_184;
#line 1001 "calendar.m"
        MR_Integer mercury__calendar__V_185_185;
#line 1001 "calendar.m"
        MR_Integer mercury__calendar__V_186_186;
#line 1001 "calendar.m"
        MR_Integer mercury__calendar__V_187_187;
#line 1001 "calendar.m"
        MR_Integer mercury__calendar__V_188_188;

#line 996 "calendar.m"
        {
#line 996 "calendar.m"
          mercury__calendar__DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_46_46, mercury__calendar__V_153_153);
        }
#line 998 "calendar.m"
        mercury__calendar__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 998 "calendar.m"
        mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 998 "calendar.m"
        mercury__calendar__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 998 "calendar.m"
        mercury__calendar__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 998 "calendar.m"
        mercury__calendar__V_168_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 998 "calendar.m"
        mercury__calendar__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 998 "calendar.m"
        mercury__calendar__V_170_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 998 "calendar.m"
        {
#line 998 "calendar.m"
          mercury__calendar__DateBEndOfMonth_27 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_48_48, mercury__calendar__V_165_165);
        }
#line 1000 "calendar.m"
        mercury__calendar__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 1000 "calendar.m"
        mercury__calendar__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 1000 "calendar.m"
        mercury__calendar__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 1000 "calendar.m"
        mercury__calendar__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 1000 "calendar.m"
        mercury__calendar__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 1000 "calendar.m"
        mercury__calendar__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 1000 "calendar.m"
        mercury__calendar__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 1000 "calendar.m"
        mercury__calendar__V_50_50 = (mercury__calendar__V_51_51 - mercury__calendar__STATE_VARIABLE_Borrow_45_45);
#line 1000 "calendar.m"
        {
#line 1000 "calendar.m"
          mercury__calendar__DayA_25 = mercury__int__min_2_f_0(mercury__calendar__V_50_50, mercury__calendar__DateBEndOfMonth_27);
        }
#line 1001 "calendar.m"
        mercury__calendar__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 1001 "calendar.m"
        mercury__calendar__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 1001 "calendar.m"
        mercury__calendar__DayB_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 1001 "calendar.m"
        mercury__calendar__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 1001 "calendar.m"
        mercury__calendar__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 1001 "calendar.m"
        mercury__calendar__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 1001 "calendar.m"
        mercury__calendar__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 995 "calendar.m"
      }
#line 995 "calendar.m"
    else
#line 987 "calendar.m"
      {
#line 987 "calendar.m"
        MR_Word mercury__calendar__DateAMinus1Month_22;
#line 987 "calendar.m"
        MR_Integer mercury__calendar__DateAEndOfMonth_24;
#line 987 "calendar.m"
        MR_Word mercury__calendar__V_52_52 = (MR_Word) &mercury__calendar_scalar_common_3[2];
#line 987 "calendar.m"
        MR_Integer mercury__calendar__V_57_57;
#line 987 "calendar.m"
        MR_Integer mercury__calendar__V_59_59;
#line 987 "calendar.m"
        MR_Integer mercury__calendar__V_61_61;
#line 987 "calendar.m"
        MR_Integer mercury__calendar__V_62_62;
#line 987 "calendar.m"
        MR_Integer mercury__calendar__V_117_117;
#line 987 "calendar.m"
        MR_Integer mercury__calendar__V_129_129;
#line 989 "calendar.m"
        MR_Integer mercury__calendar__V_118_118;
#line 989 "calendar.m"
        MR_Integer mercury__calendar__V_119_119;
#line 989 "calendar.m"
        MR_Integer mercury__calendar__V_120_120;
#line 989 "calendar.m"
        MR_Integer mercury__calendar__V_121_121;
#line 989 "calendar.m"
        MR_Integer mercury__calendar__V_122_122;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_130_130;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_131_131;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_132_132;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_133_133;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_134_134;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_141_141;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_142_142;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_143_143;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_144_144;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_145_145;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_146_146;
#line 994 "calendar.m"
        MR_Integer mercury__calendar__V_147_147;
#line 994 "calendar.m"
        MR_Integer mercury__calendar__V_148_148;
#line 994 "calendar.m"
        MR_Integer mercury__calendar__V_149_149;
#line 994 "calendar.m"
        MR_Integer mercury__calendar__V_150_150;
#line 994 "calendar.m"
        MR_Integer mercury__calendar__V_151_151;
#line 994 "calendar.m"
        MR_Integer mercury__calendar__V_152_152;

#line 988 "calendar.m"
        {
#line 988 "calendar.m"
          mercury__calendar__add_duration_3_p_0(mercury__calendar__V_52_52, mercury__calendar__DateA_6, &mercury__calendar__DateAMinus1Month_22);
        }
#line 989 "calendar.m"
        mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 0)));
#line 989 "calendar.m"
        mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 1)));
#line 989 "calendar.m"
        mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 2)));
#line 989 "calendar.m"
        mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 3)));
#line 989 "calendar.m"
        mercury__calendar__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 4)));
#line 989 "calendar.m"
        mercury__calendar__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 5)));
#line 989 "calendar.m"
        mercury__calendar__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 6)));
#line 989 "calendar.m"
        {
#line 989 "calendar.m"
          mercury__calendar__DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_57_57, mercury__calendar__V_117_117);
        }
#line 991 "calendar.m"
        mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 991 "calendar.m"
        mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 991 "calendar.m"
        mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 991 "calendar.m"
        mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 991 "calendar.m"
        mercury__calendar__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 991 "calendar.m"
        mercury__calendar__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 991 "calendar.m"
        mercury__calendar__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 991 "calendar.m"
        {
#line 991 "calendar.m"
          mercury__calendar__DateAEndOfMonth_24 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_59_59, mercury__calendar__V_129_129);
        }
#line 993 "calendar.m"
        mercury__calendar__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 993 "calendar.m"
        mercury__calendar__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 993 "calendar.m"
        mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 993 "calendar.m"
        mercury__calendar__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 993 "calendar.m"
        mercury__calendar__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 993 "calendar.m"
        mercury__calendar__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 993 "calendar.m"
        mercury__calendar__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 993 "calendar.m"
        mercury__calendar__DayA_25 = (mercury__calendar__V_61_61 - mercury__calendar__STATE_VARIABLE_Borrow_45_45);
#line 994 "calendar.m"
        mercury__calendar__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 994 "calendar.m"
        mercury__calendar__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 994 "calendar.m"
        mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 994 "calendar.m"
        mercury__calendar__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 994 "calendar.m"
        mercury__calendar__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 994 "calendar.m"
        mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 994 "calendar.m"
        mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 994 "calendar.m"
        {
#line 994 "calendar.m"
          mercury__calendar__DayB_26 = mercury__int__min_2_f_0(mercury__calendar__V_62_62, mercury__calendar__DateAEndOfMonth_24);
        }
#line 987 "calendar.m"
      }
#line 1003 "calendar.m"
    {
#line 1003 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0(mercury__calendar__DaysToBorrow_23, mercury__calendar__DayA_25, mercury__calendar__DayB_26, &mercury__calendar__Days_28, &mercury__calendar__STATE_VARIABLE_Borrow_63_63);
    }
#line 1004 "calendar.m"
    mercury__calendar__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 1004 "calendar.m"
    mercury__calendar__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 1004 "calendar.m"
    mercury__calendar__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 1004 "calendar.m"
    mercury__calendar__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 1004 "calendar.m"
    mercury__calendar__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 1004 "calendar.m"
    mercury__calendar__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 1004 "calendar.m"
    mercury__calendar__V_194_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 1004 "calendar.m"
    mercury__calendar__MonthA_29 = (mercury__calendar__V_64_64 - mercury__calendar__STATE_VARIABLE_Borrow_63_63);
#line 1005 "calendar.m"
    mercury__calendar__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 1005 "calendar.m"
    mercury__calendar__MonthB_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 1005 "calendar.m"
    mercury__calendar__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 1005 "calendar.m"
    mercury__calendar__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 1005 "calendar.m"
    mercury__calendar__V_198_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 1005 "calendar.m"
    mercury__calendar__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 1005 "calendar.m"
    mercury__calendar__V_200_200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 1006 "calendar.m"
    {
#line 1006 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 12, mercury__calendar__MonthA_29, mercury__calendar__MonthB_30, &mercury__calendar__Months_31, &mercury__calendar__STATE_VARIABLE_Borrow_66_66);
    }
#line 1007 "calendar.m"
    mercury__calendar__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 1007 "calendar.m"
    mercury__calendar__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 1007 "calendar.m"
    mercury__calendar__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 1007 "calendar.m"
    mercury__calendar__V_203_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 1007 "calendar.m"
    mercury__calendar__V_204_204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 1007 "calendar.m"
    mercury__calendar__V_205_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 1007 "calendar.m"
    mercury__calendar__V_206_206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 1007 "calendar.m"
    mercury__calendar__YearA_32 = (mercury__calendar__V_67_67 - mercury__calendar__STATE_VARIABLE_Borrow_66_66);
#line 1008 "calendar.m"
    mercury__calendar__YearB_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 1008 "calendar.m"
    mercury__calendar__V_207_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 1008 "calendar.m"
    mercury__calendar__V_208_208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 1008 "calendar.m"
    mercury__calendar__V_209_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 1008 "calendar.m"
    mercury__calendar__V_210_210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 1008 "calendar.m"
    mercury__calendar__V_211_211 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 1008 "calendar.m"
    mercury__calendar__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 1009 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__YearA_32 >= mercury__calendar__YearB_33);
#line 1011 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1010 "calendar.m"
      mercury__calendar__Years_34 = (mercury__calendar__YearA_32 - mercury__calendar__YearB_33);
#line 1011 "calendar.m"
    else
#line 1014 "calendar.m"
      {
#line 1014 "calendar.m"
        {
#line 1014 "calendar.m"
          mercury__require__error_1_p_0((MR_String) "greedy_subtract_descending: left over years");
#line 1014 "calendar.m"
          return;
        }
#line 1014 "calendar.m"
      }
#line 1016 "calendar.m"
    {
#line 1016 "calendar.m"
      *mercury__calendar__Duration_8 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Years_34, mercury__calendar__Months_31, mercury__calendar__Days_28, mercury__calendar__Hours_21, mercury__calendar__Minutes_18, mercury__calendar__Seconds_15, mercury__calendar__MicroSeconds_12);
    }
#line 974 "calendar.m"
  }
#line 969 "calendar.m"
}

#line 814 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
#line 814 "calendar.m"
  MR_Integer mercury__calendar__YearValue_4,
#line 814 "calendar.m"
  MR_Integer mercury__calendar__MonthValue_5)
#line 814 "calendar.m"
{
#line 816 "calendar.m"
  {
#line 816 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__Max_6;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__M_7;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__Y_8;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_10_10;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = (mercury__calendar__MonthValue_5 - (MR_Integer) 1);
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_15_15;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_16_16;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_6_32;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_7_33;
#line 836 "calendar.m"
    MR_Integer mercury__calendar__Max0_9;

#line 113 "int.opt"
    {
#line 113 "int.opt"
      mercury__calendar__V_7_33 = mercury__int__div_2_f_0(mercury__calendar__V_11_11, (MR_Integer) 12);
    }
#line 112 "int.opt"
    mercury__calendar__V_6_32 = (mercury__calendar__V_7_33 * (MR_Integer) 12);
#line 111 "int.opt"
    mercury__calendar__V_10_10 = (mercury__calendar__V_11_11 - mercury__calendar__V_6_32);
#line 817 "calendar.m"
    mercury__calendar__M_7 = (mercury__calendar__V_10_10 + (MR_Integer) 1);
#line 818 "calendar.m"
    mercury__calendar__V_16_16 = (mercury__calendar__MonthValue_5 - (MR_Integer) 1);
#line 818 "calendar.m"
    {
#line 818 "calendar.m"
      mercury__calendar__V_15_15 = mercury__int__div_2_f_0(mercury__calendar__V_16_16, (MR_Integer) 12);
    }
#line 818 "calendar.m"
    mercury__calendar__Y_8 = (mercury__calendar__YearValue_4 + mercury__calendar__V_15_15);
#line 823 "calendar.m"
    if ((mercury__calendar__M_7 == (MR_Integer) 2))
#line 830 "calendar.m"
      {
#line 828 "calendar.m"
        {
#line 828 "calendar.m"
          MR_Integer mercury__calendar__V_23_23;
#line 828 "calendar.m"
          MR_Integer mercury__calendar__V_6_37;
#line 828 "calendar.m"
          MR_Integer mercury__calendar__V_7_38;

#line 113 "int.opt"
          {
#line 113 "int.opt"
            mercury__calendar__V_7_38 = mercury__int__div_2_f_0(mercury__calendar__Y_8, (MR_Integer) 400);
          }
#line 112 "int.opt"
          mercury__calendar__V_6_37 = (mercury__calendar__V_7_38 * (MR_Integer) 400);
#line 111 "int.opt"
          mercury__calendar__V_23_23 = (mercury__calendar__Y_8 - mercury__calendar__V_6_37);
#line 828 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__V_23_23 == (MR_Integer) 0);
#line 828 "calendar.m"
        }
#line 828 "calendar.m"
        if (!(mercury__calendar__succeeded))
#line 828 "calendar.m"
          {
#line 828 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 828 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 828 "calendar.m"
            MR_Integer mercury__calendar__V_6_47;
#line 828 "calendar.m"
            MR_Integer mercury__calendar__V_7_48;
#line 828 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 828 "calendar.m"
            MR_Integer mercury__calendar__V_6_42;
#line 828 "calendar.m"
            MR_Integer mercury__calendar__V_7_43;

#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__calendar__V_7_43 = mercury__int__div_2_f_0(mercury__calendar__Y_8, (MR_Integer) 100);
            }
#line 112 "int.opt"
            mercury__calendar__V_6_42 = (mercury__calendar__V_7_43 * (MR_Integer) 100);
#line 111 "int.opt"
            mercury__calendar__V_19_19 = (mercury__calendar__Y_8 - mercury__calendar__V_6_42);
#line 828 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_19_19 == (MR_Integer) 0);
#line 828 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 828 "calendar.m"
            if (mercury__calendar__succeeded)
#line 828 "calendar.m"
              {
#line 828 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 4;
#line 113 "int.opt"
                {
#line 113 "int.opt"
                  mercury__calendar__V_7_48 = mercury__int__div_2_f_0(mercury__calendar__Y_8, mercury__calendar__V_22_22);
                }
#line 112 "int.opt"
                mercury__calendar__V_6_47 = (mercury__calendar__V_7_48 * mercury__calendar__V_22_22);
#line 111 "int.opt"
                mercury__calendar__V_21_21 = (mercury__calendar__Y_8 - mercury__calendar__V_6_47);
#line 828 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_21_21 == (MR_Integer) 0);
#line 828 "calendar.m"
              }
#line 828 "calendar.m"
          }
#line 830 "calendar.m"
        if (mercury__calendar__succeeded)
#line 829 "calendar.m"
          mercury__calendar__Max0_9 = (MR_Integer) 29;
#line 830 "calendar.m"
        else
#line 831 "calendar.m"
          mercury__calendar__Max0_9 = (MR_Integer) 28;
#line 830 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 830 "calendar.m"
      }
#line 823 "calendar.m"
    else
#line 823 "calendar.m"
      if ((((((((mercury__calendar__M_7 == (MR_Integer) 4)) || ((mercury__calendar__M_7 == (MR_Integer) 6)))) || ((mercury__calendar__M_7 == (MR_Integer) 9)))) || ((mercury__calendar__M_7 == (MR_Integer) 11))))
#line 825 "calendar.m"
        {
#line 825 "calendar.m"
          mercury__calendar__Max0_9 = (MR_Integer) 30;
#line 825 "calendar.m"
          mercury__calendar__succeeded = MR_TRUE;
#line 825 "calendar.m"
        }
#line 823 "calendar.m"
      else
#line 823 "calendar.m"
        if ((((((((((((((mercury__calendar__M_7 == (MR_Integer) 1)) || ((mercury__calendar__M_7 == (MR_Integer) 3)))) || ((mercury__calendar__M_7 == (MR_Integer) 5)))) || ((mercury__calendar__M_7 == (MR_Integer) 7)))) || ((mercury__calendar__M_7 == (MR_Integer) 8)))) || ((mercury__calendar__M_7 == (MR_Integer) 10)))) || ((mercury__calendar__M_7 == (MR_Integer) 12))))
#line 822 "calendar.m"
          {
#line 822 "calendar.m"
            mercury__calendar__Max0_9 = (MR_Integer) 31;
#line 822 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 822 "calendar.m"
          }
#line 823 "calendar.m"
        else
#line 823 "calendar.m"
          mercury__calendar__succeeded = MR_FALSE;
#line 836 "calendar.m"
    if (mercury__calendar__succeeded)
#line 835 "calendar.m"
      mercury__calendar__Max_6 = mercury__calendar__Max0_9;
#line 836 "calendar.m"
    else
#line 838 "calendar.m"
      {
#line 838 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 838 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_13_62;
#line 838 "calendar.m"
        MR_Word mercury__calendar__TypeClassInfo_for_op_table_71;
#line 838 "calendar.m"
        MR_String mercury__calendar__V_25_25;
#line 838 "calendar.m"
        MR_String mercury__calendar__V_27_27;
#line 838 "calendar.m"
        MR_Word mercury__calendar__V_10_59;
#line 838 "calendar.m"
        MR_Word mercury__calendar__RevStrings_9_60;
#line 838 "calendar.m"
        MR_Word mercury__calendar__V_11_61;
#line 838 "calendar.m"
        MR_Integer mercury__calendar__Priority_10_68;
#line 838 "calendar.m"
        MR_Integer mercury__calendar__V_13_69;
#line 6694 "calendar.c"
        MR_Box MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box);
#line 6696 "calendar.c"
        MR_Box mercury__calendar__conv1_V_13_69;

#line 32 "ops.opt"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
        mercury__calendar__V_10_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6703 "calendar.c"
        mercury__calendar__TypeClassInfo_for_op_table_71 = (MR_Word) &mercury__calendar_scalar_common_1[0];
#line 6705 "calendar.c"
        mercury__calendar__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__calendar__TypeClassInfo_for_op_table_71, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6707 "calendar.c"
        {
#line 6709 "calendar.c"
          mercury__calendar__conv1_V_13_69 = mercury__calendar__func_0(((MR_Box) mercury__calendar__TypeClassInfo_for_op_table_71), ((MR_Box) ((MR_Integer) 0)));
        }
#line 6712 "calendar.c"
        mercury__calendar__V_13_69 = ((MR_Integer) mercury__calendar__conv1_V_13_69);
#line 27 "string.to_string.opt"
        mercury__calendar__Priority_10_68 = (mercury__calendar__V_13_69 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
        {
#line 30 "string.to_string.opt"
          mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__calendar__TypeCtorInfo_28_28, (MR_Integer) 1, mercury__calendar__Priority_10_68, ((MR_Box) (mercury__calendar__M_7)), mercury__calendar__V_10_59, &mercury__calendar__RevStrings_9_60);
        }
#line 6721 "calendar.c"
        mercury__calendar__TypeCtorInfo_13_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__calendar__TypeCtorInfo_13_62, mercury__calendar__RevStrings_9_60, &mercury__calendar__V_11_61);
        }
#line 24 "string.to_string.opt"
        {
#line 24 "string.to_string.opt"
          mercury__calendar__V_27_27 = mercury__string__append_list_1_f_0(mercury__calendar__V_11_61);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "max_day_in_month_for: unexpected value for M: ", mercury__calendar__V_27_27, &mercury__calendar__V_25_25);
        }
#line 838 "calendar.m"
        {
#line 838 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_25_25);
        }
#line 838 "calendar.m"
      }
#line 816 "calendar.m"
    return mercury__calendar__Max_6;
#line 816 "calendar.m"
  }
#line 814 "calendar.m"
}

#line 810 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
#line 810 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 810 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 810 "calendar.m"
  MR_Integer mercury__calendar__High_7)
#line 810 "calendar.m"
{
#line 812 "calendar.m"
  {
#line 812 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 812 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__4_4;
#line 812 "calendar.m"
    MR_Integer mercury__calendar__V_8_8;
#line 812 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = (mercury__calendar__A_5 - mercury__calendar__Low_6);
#line 812 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = (mercury__calendar__High_7 - mercury__calendar__Low_6);
#line 812 "calendar.m"
    MR_Integer mercury__calendar__V_13_13;
#line 812 "calendar.m"
    MR_Integer mercury__calendar__V_14_14;

#line 808 "calendar.m"
    {
#line 808 "calendar.m"
      mercury__calendar__V_14_14 = mercury__int__div_2_f_0(mercury__calendar__V_9_9, mercury__calendar__V_10_10);
    }
#line 808 "calendar.m"
    mercury__calendar__V_13_13 = (mercury__calendar__V_14_14 * mercury__calendar__V_10_10);
#line 808 "calendar.m"
    mercury__calendar__V_8_8 = (mercury__calendar__V_9_9 - mercury__calendar__V_13_13);
#line 812 "calendar.m"
    mercury__calendar__HeadVar__4_4 = (mercury__calendar__V_8_8 + mercury__calendar__Low_6);
#line 812 "calendar.m"
    return mercury__calendar__HeadVar__4_4;
#line 812 "calendar.m"
  }
#line 810 "calendar.m"
}

#line 806 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
#line 806 "calendar.m"
  MR_Integer mercury__calendar__A_4,
#line 806 "calendar.m"
  MR_Integer mercury__calendar__B_5)
#line 806 "calendar.m"
{
#line 808 "calendar.m"
  {
#line 808 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 808 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__3_3;
#line 808 "calendar.m"
    MR_Integer mercury__calendar__V_6_6;
#line 808 "calendar.m"
    MR_Integer mercury__calendar__V_7_7;

#line 808 "calendar.m"
    {
#line 808 "calendar.m"
      mercury__calendar__V_7_7 = mercury__int__div_2_f_0(mercury__calendar__A_4, mercury__calendar__B_5);
    }
#line 808 "calendar.m"
    mercury__calendar__V_6_6 = (mercury__calendar__V_7_7 * mercury__calendar__B_5);
#line 808 "calendar.m"
    mercury__calendar__HeadVar__3_3 = (mercury__calendar__A_4 - mercury__calendar__V_6_6);
#line 808 "calendar.m"
    return mercury__calendar__HeadVar__3_3;
#line 808 "calendar.m"
  }
#line 806 "calendar.m"
}

#line 802 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
#line 802 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 802 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 802 "calendar.m"
  MR_Integer mercury__calendar__High_7)
#line 802 "calendar.m"
{
#line 804 "calendar.m"
  {
#line 804 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 804 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__4_4;
#line 804 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = (mercury__calendar__A_5 - mercury__calendar__Low_6);
#line 804 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = (mercury__calendar__High_7 - mercury__calendar__Low_6);

#line 804 "calendar.m"
    {
#line 804 "calendar.m"
      return mercury__calendar__HeadVar__4_4 = mercury__int__div_2_f_0(mercury__calendar__V_8_8, mercury__calendar__V_9_9);
    }
#line 804 "calendar.m"
    return mercury__calendar__HeadVar__4_4;
#line 804 "calendar.m"
  }
#line 802 "calendar.m"
}

#line 785 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__test_dates_0_f_0(void)
#line 785 "calendar.m"
{
#line 787 "calendar.m"
  {
#line 787 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 787 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

#line 787 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 787 "calendar.m"
  }
#line 785 "calendar.m"
}

#line 758 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
#line 758 "calendar.m"
  MR_Integer mercury__calendar__Seconds_4,
#line 758 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_5)
#line 758 "calendar.m"
{
#line 763 "calendar.m"
  {
#line 763 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Seconds_4 == (MR_Integer) 0);
#line 763 "calendar.m"
    MR_String mercury__calendar__Str_6;

#line 761 "calendar.m"
    if (mercury__calendar__succeeded)
#line 761 "calendar.m"
      mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_5 == (MR_Integer) 0);
#line 763 "calendar.m"
    if (mercury__calendar__succeeded)
#line 762 "calendar.m"
      mercury__calendar__Str_6 = (MR_String) "";
#line 763 "calendar.m"
    else
#line 764 "calendar.m"
      {
#line 764 "calendar.m"
        MR_String mercury__calendar__V_7_7;
#line 764 "calendar.m"
        MR_String mercury__calendar__V_8_8;
#line 764 "calendar.m"
        MR_String mercury__calendar__V_9_9;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Seconds_4, (MR_Integer) 10, &mercury__calendar__V_7_7);
        }
#line 691 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_5 > (MR_Integer) 0);
#line 694 "calendar.m"
        if (mercury__calendar__succeeded)
#line 692 "calendar.m"
          {
#line 692 "calendar.m"
            MR_String mercury__calendar__V_23_23;
#line 692 "calendar.m"
            MR_String mercury__calendar__V_30_30;
#line 692 "calendar.m"
            MR_Word mercury__calendar__V_36_36 = (MR_Word) &mercury__calendar_scalar_common_6[1];
#line 692 "calendar.m"
            MR_Word mercury__calendar__MaybeWidth_9_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_6[2]);
#line 692 "calendar.m"
            MR_Word mercury__calendar__MaybePrec_10_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 692 "calendar.m"
            MR_Integer mercury__calendar__V_6_54;
#line 692 "calendar.m"
            MR_Integer mercury__calendar__V_7_55;
#line 692 "calendar.m"
            MR_Integer mercury__calendar__V_8_56;
#line 692 "calendar.m"
            MR_Integer mercury__calendar__End_6_62;
#line 692 "calendar.m"
            MR_Integer mercury__calendar__Index_7_63;
#line 465 "string.opt"
            MR_String mercury__calendar___RightString_7_72;

#line 46 "string.format.opt"
            {
#line 46 "string.format.opt"
              mercury__string__format__format_signed_int_component_5_p_0(mercury__calendar__V_36_36, mercury__calendar__MaybeWidth_9_43, mercury__calendar__MaybePrec_10_44, mercury__calendar__MicroSeconds_5, &mercury__calendar__V_30_30);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2((MR_String) ".", mercury__calendar__V_30_30, &mercury__calendar__V_23_23);
            }
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_23_23 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 6979 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_7_55  = Length;
#line 242 "string.opt"
}
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_23_23 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 6999 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__End_6_62  = Length;
#line 242 "string.opt"
}
#line 387 "string.opt"
            {
#line 387 "string.opt"
              mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, mercury__calendar__V_23_23, mercury__calendar__End_6_62, &mercury__calendar__Index_7_63);
            }
#line 385 "string.opt"
            mercury__calendar__V_8_56 = (mercury__calendar__End_6_62 - mercury__calendar__Index_7_63);
#line 569 "string.opt"
            mercury__calendar__V_6_54 = (mercury__calendar__V_7_55 - mercury__calendar__V_8_56);
#line 465 "string.opt"
            {
#line 465 "string.opt"
              mercury__string__split_4_p_0(mercury__calendar__V_23_23, mercury__calendar__V_6_54, &mercury__calendar__V_9_9, &mercury__calendar___RightString_7_72);
            }
#line 692 "calendar.m"
          }
#line 694 "calendar.m"
        else
#line 695 "calendar.m"
          mercury__calendar__V_9_9 = (MR_String) "";
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_9_9, (MR_String) "S", &mercury__calendar__V_8_8);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_7_7, mercury__calendar__V_8_8, &mercury__calendar__Str_6);
        }
#line 764 "calendar.m"
      }
#line 763 "calendar.m"
    return mercury__calendar__Str_6;
#line 763 "calendar.m"
  }
#line 758 "calendar.m"
}

#line 749 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
#line 749 "calendar.m"
  MR_Integer mercury__calendar__X_4,
#line 749 "calendar.m"
  MR_String mercury__calendar__Suffix_5)
#line 749 "calendar.m"
{
#line 751 "calendar.m"
  {
#line 751 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__X_4 == (MR_Integer) 0);
#line 751 "calendar.m"
    MR_String mercury__calendar__HeadVar__3_3;

#line 751 "calendar.m"
    if (mercury__calendar__succeeded)
#line 753 "calendar.m"
      mercury__calendar__HeadVar__3_3 = (MR_String) "";
#line 751 "calendar.m"
    else
#line 755 "calendar.m"
      {
#line 755 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__X_4, (MR_Integer) 10, &mercury__calendar__V_6_6);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_6_6, mercury__calendar__Suffix_5, &mercury__calendar__HeadVar__3_3);
        }
#line 755 "calendar.m"
      }
#line 751 "calendar.m"
    return mercury__calendar__HeadVar__3_3;
#line 751 "calendar.m"
  }
#line 749 "calendar.m"
}

#line 688 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
#line 688 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_3)
#line 688 "calendar.m"
{
#line 694 "calendar.m"
  {
#line 694 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_3 > (MR_Integer) 0);
#line 694 "calendar.m"
    MR_String mercury__calendar__Str_4;

#line 694 "calendar.m"
    if (mercury__calendar__succeeded)
#line 692 "calendar.m"
      {
#line 692 "calendar.m"
        MR_String mercury__calendar__V_8_8;
#line 692 "calendar.m"
        MR_String mercury__calendar__V_15_15;
#line 692 "calendar.m"
        MR_Word mercury__calendar__V_21_21 = (MR_Word) &mercury__calendar_scalar_common_6[1];
#line 692 "calendar.m"
        MR_Word mercury__calendar__MaybeWidth_9_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_6[2]);
#line 692 "calendar.m"
        MR_Word mercury__calendar__MaybePrec_10_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 692 "calendar.m"
        MR_Integer mercury__calendar__V_6_39;
#line 692 "calendar.m"
        MR_Integer mercury__calendar__V_7_40;
#line 692 "calendar.m"
        MR_Integer mercury__calendar__V_8_41;
#line 692 "calendar.m"
        MR_Integer mercury__calendar__End_6_47;
#line 692 "calendar.m"
        MR_Integer mercury__calendar__Index_7_48;
#line 465 "string.opt"
        MR_String mercury__calendar___RightString_7_57;

#line 46 "string.format.opt"
        {
#line 46 "string.format.opt"
          mercury__string__format__format_signed_int_component_5_p_0(mercury__calendar__V_21_21, mercury__calendar__MaybeWidth_9_28, mercury__calendar__MaybePrec_10_29, mercury__calendar__MicroSeconds_3, &mercury__calendar__V_15_15);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) ".", mercury__calendar__V_15_15, &mercury__calendar__V_8_8);
        }
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_8_8 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 7155 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_7_40  = Length;
#line 242 "string.opt"
}
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_8_8 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 7175 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__End_6_47  = Length;
#line 242 "string.opt"
}
#line 387 "string.opt"
        {
#line 387 "string.opt"
          mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, mercury__calendar__V_8_8, mercury__calendar__End_6_47, &mercury__calendar__Index_7_48);
        }
#line 385 "string.opt"
        mercury__calendar__V_8_41 = (mercury__calendar__End_6_47 - mercury__calendar__Index_7_48);
#line 569 "string.opt"
        mercury__calendar__V_6_39 = (mercury__calendar__V_7_40 - mercury__calendar__V_8_41);
#line 465 "string.opt"
        {
#line 465 "string.opt"
          mercury__string__split_4_p_0(mercury__calendar__V_8_8, mercury__calendar__V_6_39, &mercury__calendar__Str_4, &mercury__calendar___RightString_7_57);
        }
#line 692 "calendar.m"
      }
#line 694 "calendar.m"
    else
#line 695 "calendar.m"
      mercury__calendar__Str_4 = (MR_String) "";
#line 694 "calendar.m"
    return mercury__calendar__Str_4;
#line 694 "calendar.m"
  }
#line 688 "calendar.m"
}

#line 645 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void)
#line 645 "calendar.m"
{
#line 647 "calendar.m"
  {
#line 647 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 647 "calendar.m"
    return (MR_Integer) 1000000;
#line 647 "calendar.m"
  }
#line 645 "calendar.m"
}

#line 596 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
#line 596 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_10,
#line 596 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_11,
#line 596 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_12,
#line 596 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_13)
#line 596 "calendar.m"
{
#line 605 "calendar.m"
  while (MR_TRUE)
#line 605 "calendar.m"
    {
#line 605 "calendar.m"
      /* tailcall optimized into a loop */
#line 605 "calendar.m"
      {
#line 605 "calendar.m"
        MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_12)) == (MR_mktag((MR_Integer) 1)));
#line 605 "calendar.m"
        MR_Word mercury__calendar__Rest_8;
#line 605 "calendar.m"
        MR_Integer mercury__calendar__Digit_9;
#line 600 "calendar.m"
        MR_Char mercury__calendar__Char_7;

#line 600 "calendar.m"
        if (mercury__calendar__succeeded)
#line 600 "calendar.m"
          {
#line 600 "calendar.m"
            mercury__calendar__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_12, (MR_Integer) 0)));
#line 600 "calendar.m"
            mercury__calendar__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_12, (MR_Integer) 1)));
#line 601 "calendar.m"
            {
#line 601 "calendar.m"
              mercury__calendar__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__calendar__Char_7, &mercury__calendar__Digit_9);
            }
#line 600 "calendar.m"
          }
#line 605 "calendar.m"
        if (mercury__calendar__succeeded)
#line 603 "calendar.m"
          {
#line 603 "calendar.m"
            MR_Integer mercury__calendar__STATE_VARIABLE_Val_14_14;
#line 603 "calendar.m"
            MR_Integer mercury__calendar__V_15_15 = (mercury__calendar__STATE_VARIABLE_Val_0_10 * (MR_Integer) 10);

#line 603 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Val_14_14 = (mercury__calendar__V_15_15 + mercury__calendar__Digit_9);
#line 604 "calendar.m"
            /* direct tailcall eliminated */
#line 604 "calendar.m"
            {
#line 604 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_10 = mercury__calendar__STATE_VARIABLE_Val_14_14;
#line 604 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_12 = mercury__calendar__Rest_8;

#line 604 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Chars_0_12 = mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_12;
#line 604 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Val_0_10 = mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_10;
#line 604 "calendar.m"
            }
#line 604 "calendar.m"
            continue;
#line 603 "calendar.m"
          }
#line 605 "calendar.m"
        else
#line 606 "calendar.m"
          {
#line 606 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Chars_13 = mercury__calendar__STATE_VARIABLE_Chars_0_12;
#line 606 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Val_11 = mercury__calendar__STATE_VARIABLE_Val_0_10;
#line 606 "calendar.m"
          }
#line 605 "calendar.m"
      }
#line 605 "calendar.m"
      break;
#line 605 "calendar.m"
    }
#line 596 "calendar.m"
}

#line 560 "calendar.m"
static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
#line 560 "calendar.m"
  MR_Integer * mercury__calendar__Seconds_5,
#line 560 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_6,
#line 560 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_13,
#line 560 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_14)
#line 560 "calendar.m"
{
#line 572 "calendar.m"
  {
#line 572 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 572 "calendar.m"
    MR_Integer mercury__calendar__Seconds0_8;
#line 572 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds0_10;
#line 572 "calendar.m"
    MR_Word mercury__calendar__Chars3_12;
#line 565 "calendar.m"
    MR_Word mercury__calendar__Chars1_9;
#line 565 "calendar.m"
    MR_Word mercury__calendar__Chars2_11;
#line 565 "calendar.m"
    MR_Char mercury__calendar__V_17_17;
#line 473 "calendar.m"
    MR_Integer mercury__calendar__Fraction_29;
#line 473 "calendar.m"
    MR_Integer mercury__calendar__FractionDigits_30;
#line 473 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_12_32;
#line 467 "calendar.m"
    MR_Word mercury__calendar__Chars1_28;
#line 467 "calendar.m"
    MR_Integer mercury__calendar__V_33_33;
#line 467 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 467 "calendar.m"
    MR_Char mercury__calendar__V_40_40;
#line 467 "calendar.m"
    MR_Integer mercury__calendar__V_48_48;
#line 467 "calendar.m"
    MR_Integer mercury__calendar__V_49_49;

#line 594 "calendar.m"
    {
#line 594 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Seconds0_8, mercury__calendar__STATE_VARIABLE_Chars_0_13, &mercury__calendar__Chars1_9);
    }
#line 533 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_9)) == (MR_mktag((MR_Integer) 1)));
#line 533 "calendar.m"
    if (mercury__calendar__succeeded)
#line 533 "calendar.m"
      {
#line 533 "calendar.m"
        mercury__calendar__V_40_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_9, (MR_Integer) 0)));
#line 533 "calendar.m"
        mercury__calendar__Chars1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_9, (MR_Integer) 1)));
#line 467 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 46 == mercury__calendar__V_40_40);
#line 467 "calendar.m"
        if (mercury__calendar__succeeded)
#line 467 "calendar.m"
          {
#line 481 "calendar.m"
            mercury__calendar__V_48_48 = (MR_Integer) 0;
#line 481 "calendar.m"
            mercury__calendar__V_49_49 = (MR_Integer) 0;
#line 481 "calendar.m"
            {
#line 481 "calendar.m"
              mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_48_48, &mercury__calendar__Fraction_29, mercury__calendar__V_49_49, &mercury__calendar__FractionDigits_30, mercury__calendar__Chars1_28, &mercury__calendar__STATE_VARIABLE_Chars_12_32);
            }
#line 469 "calendar.m"
            mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 469 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__FractionDigits_30 > mercury__calendar__V_33_33);
#line 467 "calendar.m"
            if (mercury__calendar__succeeded)
#line 467 "calendar.m"
              {
#line 470 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 7;
#line 470 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__FractionDigits_30 < mercury__calendar__V_34_34);
#line 467 "calendar.m"
              }
#line 467 "calendar.m"
          }
#line 533 "calendar.m"
      }
#line 473 "calendar.m"
    if (mercury__calendar__succeeded)
#line 472 "calendar.m"
      {
#line 472 "calendar.m"
        MR_Integer mercury__calendar__V_35_35;
#line 472 "calendar.m"
        MR_Integer mercury__calendar__V_37_37;

#line 472 "calendar.m"
        mercury__calendar__Chars2_11 = mercury__calendar__STATE_VARIABLE_Chars_12_32;
#line 472 "calendar.m"
        mercury__calendar__V_37_37 = ((MR_Integer) 6 - mercury__calendar__FractionDigits_30);
#line 92 "int.opt"
        {
#line 92 "int.opt"
          mercury__int__pow_3_p_0((MR_Integer) 10, mercury__calendar__V_37_37, &mercury__calendar__V_35_35);
        }
#line 472 "calendar.m"
        mercury__calendar__MicroSeconds0_10 = (mercury__calendar__V_35_35 * mercury__calendar__Fraction_29);
#line 472 "calendar.m"
      }
#line 473 "calendar.m"
    else
#line 474 "calendar.m"
      {
#line 474 "calendar.m"
        mercury__calendar__MicroSeconds0_10 = (MR_Integer) 0;
#line 474 "calendar.m"
        mercury__calendar__Chars2_11 = mercury__calendar__Chars1_9;
#line 474 "calendar.m"
      }
#line 533 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars2_11)) == (MR_mktag((MR_Integer) 1)));
#line 533 "calendar.m"
    if (mercury__calendar__succeeded)
#line 533 "calendar.m"
      {
#line 533 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars2_11, (MR_Integer) 0)));
#line 533 "calendar.m"
        mercury__calendar__Chars3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars2_11, (MR_Integer) 1)));
#line 567 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 83 == mercury__calendar__V_17_17);
#line 533 "calendar.m"
      }
#line 572 "calendar.m"
    if (mercury__calendar__succeeded)
#line 569 "calendar.m"
      {
#line 569 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_14 = mercury__calendar__Chars3_12;
#line 570 "calendar.m"
        *mercury__calendar__Seconds_5 = mercury__calendar__Seconds0_8;
#line 571 "calendar.m"
        *mercury__calendar__MicroSeconds_6 = mercury__calendar__MicroSeconds0_10;
#line 569 "calendar.m"
      }
#line 572 "calendar.m"
    else
#line 573 "calendar.m"
      {
#line 573 "calendar.m"
        *mercury__calendar__Seconds_5 = (MR_Integer) 0;
#line 574 "calendar.m"
        *mercury__calendar__MicroSeconds_6 = (MR_Integer) 0;
#line 574 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_14 = mercury__calendar__STATE_VARIABLE_Chars_0_13;
#line 573 "calendar.m"
      }
#line 572 "calendar.m"
  }
#line 560 "calendar.m"
}

#line 555 "calendar.m"
static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
#line 555 "calendar.m"
  MR_Integer * mercury__calendar__Minutes_4,
#line 555 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 555 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 555 "calendar.m"
{
#line 557 "calendar.m"
  {
#line 557 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 587 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 587 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 582 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 582 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 594 "calendar.m"
    {
#line 594 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 583 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 583 "calendar.m"
    if (mercury__calendar__succeeded)
#line 583 "calendar.m"
      {
#line 583 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 583 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 583 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 77 == mercury__calendar__V_19_19);
#line 583 "calendar.m"
      }
#line 587 "calendar.m"
    if (mercury__calendar__succeeded)
#line 585 "calendar.m"
      {
#line 585 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 586 "calendar.m"
        *mercury__calendar__Minutes_4 = mercury__calendar__Int0_15;
#line 585 "calendar.m"
      }
#line 587 "calendar.m"
    else
#line 588 "calendar.m"
      {
#line 588 "calendar.m"
        *mercury__calendar__Minutes_4 = (MR_Integer) 0;
#line 588 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 588 "calendar.m"
      }
#line 557 "calendar.m"
  }
#line 555 "calendar.m"
}

#line 550 "calendar.m"
static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
#line 550 "calendar.m"
  MR_Integer * mercury__calendar__Hours_4,
#line 550 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 550 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 550 "calendar.m"
{
#line 552 "calendar.m"
  {
#line 552 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 587 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 587 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 582 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 582 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 594 "calendar.m"
    {
#line 594 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 583 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 583 "calendar.m"
    if (mercury__calendar__succeeded)
#line 583 "calendar.m"
      {
#line 583 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 583 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 583 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 72 == mercury__calendar__V_19_19);
#line 583 "calendar.m"
      }
#line 587 "calendar.m"
    if (mercury__calendar__succeeded)
#line 585 "calendar.m"
      {
#line 585 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 586 "calendar.m"
        *mercury__calendar__Hours_4 = mercury__calendar__Int0_15;
#line 585 "calendar.m"
      }
#line 587 "calendar.m"
    else
#line 588 "calendar.m"
      {
#line 588 "calendar.m"
        *mercury__calendar__Hours_4 = (MR_Integer) 0;
#line 588 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 588 "calendar.m"
      }
#line 552 "calendar.m"
  }
#line 550 "calendar.m"
}

#line 545 "calendar.m"
static void MR_CALL 
mercury__calendar__read_days_3_p_0(
#line 545 "calendar.m"
  MR_Integer * mercury__calendar__Days_4,
#line 545 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 545 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 545 "calendar.m"
{
#line 547 "calendar.m"
  {
#line 547 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 587 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 587 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 582 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 582 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 594 "calendar.m"
    {
#line 594 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 583 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 583 "calendar.m"
    if (mercury__calendar__succeeded)
#line 583 "calendar.m"
      {
#line 583 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 583 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 583 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 68 == mercury__calendar__V_19_19);
#line 583 "calendar.m"
      }
#line 587 "calendar.m"
    if (mercury__calendar__succeeded)
#line 585 "calendar.m"
      {
#line 585 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 586 "calendar.m"
        *mercury__calendar__Days_4 = mercury__calendar__Int0_15;
#line 585 "calendar.m"
      }
#line 587 "calendar.m"
    else
#line 588 "calendar.m"
      {
#line 588 "calendar.m"
        *mercury__calendar__Days_4 = (MR_Integer) 0;
#line 588 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 588 "calendar.m"
      }
#line 547 "calendar.m"
  }
#line 545 "calendar.m"
}

#line 540 "calendar.m"
static void MR_CALL 
mercury__calendar__read_months_3_p_0(
#line 540 "calendar.m"
  MR_Integer * mercury__calendar__Months_4,
#line 540 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 540 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 540 "calendar.m"
{
#line 542 "calendar.m"
  {
#line 542 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 587 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 587 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 582 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 582 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 594 "calendar.m"
    {
#line 594 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 583 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 583 "calendar.m"
    if (mercury__calendar__succeeded)
#line 583 "calendar.m"
      {
#line 583 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 583 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 583 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 77 == mercury__calendar__V_19_19);
#line 583 "calendar.m"
      }
#line 587 "calendar.m"
    if (mercury__calendar__succeeded)
#line 585 "calendar.m"
      {
#line 585 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 586 "calendar.m"
        *mercury__calendar__Months_4 = mercury__calendar__Int0_15;
#line 585 "calendar.m"
      }
#line 587 "calendar.m"
    else
#line 588 "calendar.m"
      {
#line 588 "calendar.m"
        *mercury__calendar__Months_4 = (MR_Integer) 0;
#line 588 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 588 "calendar.m"
      }
#line 542 "calendar.m"
  }
#line 540 "calendar.m"
}

#line 531 "calendar.m"
static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
#line 531 "calendar.m"
  MR_Char * mercury__calendar__Char_4,
#line 531 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 531 "calendar.m"
  MR_Word * mercury__calendar__Rest_5)
#line 531 "calendar.m"
{
#line 533 "calendar.m"
  {
#line 533 "calendar.m"
    MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));

#line 533 "calendar.m"
    if (mercury__calendar__succeeded)
#line 533 "calendar.m"
      {
#line 533 "calendar.m"
        *mercury__calendar__Char_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 533 "calendar.m"
        *mercury__calendar__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 533 "calendar.m"
      }
#line 533 "calendar.m"
    return mercury__calendar__succeeded;
#line 533 "calendar.m"
  }
#line 531 "calendar.m"
}

#line 483 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
#line 483 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_13,
#line 483 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_14,
#line 483 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_N_0_15,
#line 483 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_N_16,
#line 483 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_17,
#line 483 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_18)
#line 483 "calendar.m"
{
#line 493 "calendar.m"
  while (MR_TRUE)
#line 493 "calendar.m"
    {
#line 493 "calendar.m"
      /* tailcall optimized into a loop */
#line 493 "calendar.m"
      {
#line 493 "calendar.m"
        MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_17)) == (MR_mktag((MR_Integer) 1)));
#line 493 "calendar.m"
        MR_Word mercury__calendar__Rest_11;
#line 493 "calendar.m"
        MR_Integer mercury__calendar__Digit_12;
#line 488 "calendar.m"
        MR_Char mercury__calendar__Char_10;

#line 488 "calendar.m"
        if (mercury__calendar__succeeded)
#line 488 "calendar.m"
          {
#line 488 "calendar.m"
            mercury__calendar__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
#line 488 "calendar.m"
            mercury__calendar__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_17, (MR_Integer) 1)));
#line 489 "calendar.m"
            {
#line 489 "calendar.m"
              mercury__calendar__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__calendar__Char_10, &mercury__calendar__Digit_12);
            }
#line 488 "calendar.m"
          }
#line 493 "calendar.m"
        if (mercury__calendar__succeeded)
#line 491 "calendar.m"
          {
#line 491 "calendar.m"
            MR_Integer mercury__calendar__STATE_VARIABLE_Val_19_19;
#line 491 "calendar.m"
            MR_Integer mercury__calendar__V_20_20 = (mercury__calendar__STATE_VARIABLE_Val_0_13 * (MR_Integer) 10);
#line 491 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;

#line 491 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Val_19_19 = (mercury__calendar__V_20_20 + mercury__calendar__Digit_12);
#line 492 "calendar.m"
            mercury__calendar__V_23_23 = (mercury__calendar__STATE_VARIABLE_N_0_15 + (MR_Integer) 1);
#line 492 "calendar.m"
            /* direct tailcall eliminated */
#line 492 "calendar.m"
            {
#line 492 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_13 = mercury__calendar__STATE_VARIABLE_Val_19_19;
#line 492 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_N_0__tmp_copy_15 = mercury__calendar__V_23_23;
#line 492 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_17 = mercury__calendar__Rest_11;

#line 492 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Chars_0_17 = mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_17;
#line 492 "calendar.m"
              mercury__calendar__STATE_VARIABLE_N_0_15 = mercury__calendar__STATE_VARIABLE_N_0__tmp_copy_15;
#line 492 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Val_0_13 = mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_13;
#line 492 "calendar.m"
            }
#line 492 "calendar.m"
            continue;
#line 491 "calendar.m"
          }
#line 493 "calendar.m"
        else
#line 494 "calendar.m"
          {
#line 494 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Chars_18 = mercury__calendar__STATE_VARIABLE_Chars_0_17;
#line 494 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_N_16 = mercury__calendar__STATE_VARIABLE_N_0_15;
#line 494 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Val_14 = mercury__calendar__STATE_VARIABLE_Val_0_13;
#line 494 "calendar.m"
          }
#line 493 "calendar.m"
      }
#line 493 "calendar.m"
      break;
#line 493 "calendar.m"
    }
#line 483 "calendar.m"
}

#line 477 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
#line 477 "calendar.m"
  MR_Integer * mercury__calendar__Val_5,
#line 477 "calendar.m"
  MR_Integer * mercury__calendar__N_6,
#line 477 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_8,
#line 477 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_9)
#line 477 "calendar.m"
{
#line 480 "calendar.m"
  {
#line 480 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 481 "calendar.m"
    {
#line 481 "calendar.m"
      mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, mercury__calendar__Val_5, (MR_Integer) 0, mercury__calendar__N_6, mercury__calendar__STATE_VARIABLE_Chars_0_8, mercury__calendar__STATE_VARIABLE_Chars_9);
#line 481 "calendar.m"
      return;
    }
#line 480 "calendar.m"
  }
#line 477 "calendar.m"
}

#line 462 "calendar.m"
static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
#line 462 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_4,
#line 462 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_9,
#line 462 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_10)
#line 462 "calendar.m"
{
#line 473 "calendar.m"
  {
#line 473 "calendar.m"
    MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_9)) == (MR_mktag((MR_Integer) 1)));
#line 473 "calendar.m"
    MR_Integer mercury__calendar__Fraction_7;
#line 473 "calendar.m"
    MR_Integer mercury__calendar__FractionDigits_8;
#line 473 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_12_12;
#line 467 "calendar.m"
    MR_Word mercury__calendar__Chars1_6;
#line 467 "calendar.m"
    MR_Integer mercury__calendar__V_13_13;
#line 467 "calendar.m"
    MR_Integer mercury__calendar__V_14_14;
#line 467 "calendar.m"
    MR_Char mercury__calendar__V_20_20;
#line 467 "calendar.m"
    MR_Integer mercury__calendar__V_28_28;
#line 467 "calendar.m"
    MR_Integer mercury__calendar__V_29_29;

#line 533 "calendar.m"
    if (mercury__calendar__succeeded)
#line 533 "calendar.m"
      {
#line 533 "calendar.m"
        mercury__calendar__V_20_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_9, (MR_Integer) 0)));
#line 533 "calendar.m"
        mercury__calendar__Chars1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_9, (MR_Integer) 1)));
#line 467 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 46 == mercury__calendar__V_20_20);
#line 467 "calendar.m"
        if (mercury__calendar__succeeded)
#line 467 "calendar.m"
          {
#line 481 "calendar.m"
            mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 481 "calendar.m"
            mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 481 "calendar.m"
            {
#line 481 "calendar.m"
              mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_28_28, &mercury__calendar__Fraction_7, mercury__calendar__V_29_29, &mercury__calendar__FractionDigits_8, mercury__calendar__Chars1_6, &mercury__calendar__STATE_VARIABLE_Chars_12_12);
            }
#line 469 "calendar.m"
            mercury__calendar__V_13_13 = (MR_Integer) 0;
#line 469 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__FractionDigits_8 > mercury__calendar__V_13_13);
#line 467 "calendar.m"
            if (mercury__calendar__succeeded)
#line 467 "calendar.m"
              {
#line 470 "calendar.m"
                mercury__calendar__V_14_14 = (MR_Integer) 7;
#line 470 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__FractionDigits_8 < mercury__calendar__V_14_14);
#line 467 "calendar.m"
              }
#line 467 "calendar.m"
          }
#line 533 "calendar.m"
      }
#line 473 "calendar.m"
    if (mercury__calendar__succeeded)
#line 472 "calendar.m"
      {
#line 472 "calendar.m"
        MR_Integer mercury__calendar__V_15_15;
#line 472 "calendar.m"
        MR_Integer mercury__calendar__V_17_17;

#line 472 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_10 = mercury__calendar__STATE_VARIABLE_Chars_12_12;
#line 472 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Integer) 6 - mercury__calendar__FractionDigits_8);
#line 92 "int.opt"
        {
#line 92 "int.opt"
          mercury__int__pow_3_p_0((MR_Integer) 10, mercury__calendar__V_17_17, &mercury__calendar__V_15_15);
        }
#line 472 "calendar.m"
        *mercury__calendar__MicroSeconds_4 = (mercury__calendar__V_15_15 * mercury__calendar__Fraction_7);
#line 472 "calendar.m"
      }
#line 473 "calendar.m"
    else
#line 474 "calendar.m"
      {
#line 474 "calendar.m"
        *mercury__calendar__MicroSeconds_4 = (MR_Integer) 0;
#line 474 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_10 = mercury__calendar__STATE_VARIABLE_Chars_0_9;
#line 474 "calendar.m"
      }
#line 473 "calendar.m"
  }
#line 462 "calendar.m"
}

#line 387 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__same_date_2_p_0(
#line 387 "calendar.m"
  MR_Word mercury__calendar__A_3,
#line 387 "calendar.m"
  MR_Word mercury__calendar__B_4)
#line 387 "calendar.m"
{
#line 1235 "calendar.m"
  {
#line 1235 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1235 "calendar.m"
    MR_Integer mercury__calendar__Year_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 0)));
#line 1235 "calendar.m"
    MR_Integer mercury__calendar__Month_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 1)));
#line 1235 "calendar.m"
    MR_Integer mercury__calendar__Day_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 2)));
#line 1235 "calendar.m"
    MR_Integer mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 0)));
#line 1235 "calendar.m"
    MR_Integer mercury__calendar__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 1)));
#line 1235 "calendar.m"
    MR_Integer mercury__calendar__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 2)));
#line 1236 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 3)));
#line 1236 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 4)));
#line 1236 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 5)));
#line 1236 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 6)));
#line 1237 "calendar.m"
    MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 3)));
#line 1237 "calendar.m"
    MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 4)));
#line 1237 "calendar.m"
    MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 5)));
#line 1237 "calendar.m"
    MR_Integer mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 6)));

#line 1237 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Year_5 == mercury__calendar__V_16_16);
#line 1235 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1235 "calendar.m"
      {
#line 1237 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Month_6 == mercury__calendar__V_17_17);
#line 1235 "calendar.m"
        if (mercury__calendar__succeeded)
#line 1237 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__Day_7 == mercury__calendar__V_18_18);
#line 1235 "calendar.m"
      }
#line 1235 "calendar.m"
    return mercury__calendar__succeeded;
#line 1235 "calendar.m"
  }
#line 387 "calendar.m"
}

#line 378 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_5(
#line 378 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 378 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 378 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 378 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 378 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 378 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 378 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 378 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 378 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 378 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 378 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 378 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 378 "calendar.m"
{
#line 1220 "calendar.m"
  while (MR_TRUE)
#line 1220 "calendar.m"
    {
#line 1220 "calendar.m"
      /* tailcall optimized into a loop */
#line 1220 "calendar.m"
      {
#line 1220 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1220 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1221 "calendar.m"
        {
#line 1221 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1229 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1230 "calendar.m"
          {
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1230 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1230 "calendar.m"
          }
#line 1229 "calendar.m"
        else
#line 1225 "calendar.m"
          {
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1226 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1226 "calendar.m"
            {
#line 1226 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1225 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1225 "calendar.m"
              {
#line 1227 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1227 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1227 "calendar.m"
                {
#line 1227 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1227 "calendar.m"
                {
#line 1227 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1228 "calendar.m"
                /* direct tailcall eliminated */
#line 1228 "calendar.m"
                {
#line 1228 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1228 "calendar.m"
                }
#line 1228 "calendar.m"
                continue;
#line 1225 "calendar.m"
              }
#line 1225 "calendar.m"
          }
#line 1220 "calendar.m"
        return mercury__calendar__succeeded;
#line 1220 "calendar.m"
      }
#line 1220 "calendar.m"
      break;
#line 1220 "calendar.m"
    }
#line 378 "calendar.m"
}

#line 376 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_4(
#line 376 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 376 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 376 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 376 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 376 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 376 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 376 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 376 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 376 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 376 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 376 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 376 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 376 "calendar.m"
{
#line 1220 "calendar.m"
  while (MR_TRUE)
#line 1220 "calendar.m"
    {
#line 1220 "calendar.m"
      /* tailcall optimized into a loop */
#line 1220 "calendar.m"
      {
#line 1220 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1220 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1221 "calendar.m"
        {
#line 1221 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1229 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1230 "calendar.m"
          {
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1230 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1230 "calendar.m"
          }
#line 1229 "calendar.m"
        else
#line 1225 "calendar.m"
          {
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1226 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1226 "calendar.m"
            {
#line 1226 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1225 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1225 "calendar.m"
              {
#line 1227 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1227 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1227 "calendar.m"
                {
#line 1227 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1227 "calendar.m"
                {
#line 1227 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1228 "calendar.m"
                /* direct tailcall eliminated */
#line 1228 "calendar.m"
                {
#line 1228 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1228 "calendar.m"
                }
#line 1228 "calendar.m"
                continue;
#line 1225 "calendar.m"
              }
#line 1225 "calendar.m"
          }
#line 1220 "calendar.m"
        return mercury__calendar__succeeded;
#line 1220 "calendar.m"
      }
#line 1220 "calendar.m"
      break;
#line 1220 "calendar.m"
    }
#line 376 "calendar.m"
}

#line 374 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_3(
#line 374 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 374 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 374 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 374 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 374 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 374 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 374 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 374 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 374 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 374 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 374 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 374 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 374 "calendar.m"
{
#line 1220 "calendar.m"
  while (MR_TRUE)
#line 1220 "calendar.m"
    {
#line 1220 "calendar.m"
      /* tailcall optimized into a loop */
#line 1220 "calendar.m"
      {
#line 1220 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1220 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1221 "calendar.m"
        {
#line 1221 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1229 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1230 "calendar.m"
          {
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1230 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1230 "calendar.m"
          }
#line 1229 "calendar.m"
        else
#line 1225 "calendar.m"
          {
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1225 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1226 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1226 "calendar.m"
            {
#line 1226 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1225 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1225 "calendar.m"
              {
#line 1227 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1227 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1227 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1227 "calendar.m"
                {
#line 1227 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1227 "calendar.m"
                {
#line 1227 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1228 "calendar.m"
                /* direct tailcall eliminated */
#line 1228 "calendar.m"
                {
#line 1228 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1228 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1228 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1228 "calendar.m"
                }
#line 1228 "calendar.m"
                continue;
#line 1225 "calendar.m"
              }
#line 1225 "calendar.m"
          }
#line 1220 "calendar.m"
        return mercury__calendar__succeeded;
#line 1220 "calendar.m"
      }
#line 1220 "calendar.m"
      break;
#line 1220 "calendar.m"
    }
#line 374 "calendar.m"
}

#line 372 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_2(
#line 372 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 372 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 372 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 372 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 372 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 372 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 372 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 372 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 372 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 372 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 372 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 372 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 372 "calendar.m"
{
#line 1220 "calendar.m"
  while (MR_TRUE)
#line 1220 "calendar.m"
    {
#line 1220 "calendar.m"
      /* tailcall optimized into a loop */
#line 1220 "calendar.m"
      {
#line 1220 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1220 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1221 "calendar.m"
        {
#line 1221 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1229 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1230 "calendar.m"
          {
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1230 "calendar.m"
          }
#line 1229 "calendar.m"
        else
#line 1225 "calendar.m"
          {
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1226 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1226 "calendar.m"
            {
#line 1226 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1227 "calendar.m"
            {
#line 1227 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1227 "calendar.m"
            {
#line 1227 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1228 "calendar.m"
            /* direct tailcall eliminated */
#line 1228 "calendar.m"
            {
#line 1228 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1228 "calendar.m"
            }
#line 1228 "calendar.m"
            continue;
#line 1225 "calendar.m"
          }
#line 1220 "calendar.m"
      }
#line 1220 "calendar.m"
      break;
#line 1220 "calendar.m"
    }
#line 372 "calendar.m"
}

#line 370 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_1(
#line 370 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 370 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 370 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 370 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 370 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 370 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 370 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 370 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 370 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 370 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 370 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 370 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 370 "calendar.m"
{
#line 1220 "calendar.m"
  while (MR_TRUE)
#line 1220 "calendar.m"
    {
#line 1220 "calendar.m"
      /* tailcall optimized into a loop */
#line 1220 "calendar.m"
      {
#line 1220 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1220 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1221 "calendar.m"
        {
#line 1221 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1229 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1230 "calendar.m"
          {
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1230 "calendar.m"
          }
#line 1229 "calendar.m"
        else
#line 1225 "calendar.m"
          {
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1226 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1226 "calendar.m"
            {
#line 1226 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1227 "calendar.m"
            {
#line 1227 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1227 "calendar.m"
            {
#line 1227 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1228 "calendar.m"
            /* direct tailcall eliminated */
#line 1228 "calendar.m"
            {
#line 1228 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1228 "calendar.m"
            }
#line 1228 "calendar.m"
            continue;
#line 1225 "calendar.m"
          }
#line 1220 "calendar.m"
      }
#line 1220 "calendar.m"
      break;
#line 1220 "calendar.m"
    }
#line 370 "calendar.m"
}

#line 368 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_0(
#line 368 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 368 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 368 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 368 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 368 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 368 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 368 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 368 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 368 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 368 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 368 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 368 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 368 "calendar.m"
{
#line 1220 "calendar.m"
  while (MR_TRUE)
#line 1220 "calendar.m"
    {
#line 1220 "calendar.m"
      /* tailcall optimized into a loop */
#line 1220 "calendar.m"
      {
#line 1220 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1220 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1221 "calendar.m"
        {
#line 1221 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1229 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1230 "calendar.m"
          {
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1230 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1230 "calendar.m"
          }
#line 1229 "calendar.m"
        else
#line 1225 "calendar.m"
          {
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1225 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1225 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1226 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1226 "calendar.m"
            {
#line 1226 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1227 "calendar.m"
            {
#line 1227 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1227 "calendar.m"
            {
#line 1227 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1228 "calendar.m"
            /* direct tailcall eliminated */
#line 1228 "calendar.m"
            {
#line 1228 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1228 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1228 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1228 "calendar.m"
            }
#line 1228 "calendar.m"
            continue;
#line 1225 "calendar.m"
          }
#line 1220 "calendar.m"
      }
#line 1220 "calendar.m"
      break;
#line 1220 "calendar.m"
    }
#line 368 "calendar.m"
}

#line 360 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_5(
#line 360 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 360 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 360 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 360 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 360 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 360 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 360 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 360 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 360 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 360 "calendar.m"
{
#line 1207 "calendar.m"
  while (MR_TRUE)
#line 1207 "calendar.m"
    {
#line 1207 "calendar.m"
      /* tailcall optimized into a loop */
#line 1207 "calendar.m"
      {
#line 1207 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1207 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1208 "calendar.m"
        {
#line 1208 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1216 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1217 "calendar.m"
          {
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1217 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1217 "calendar.m"
          }
#line 1216 "calendar.m"
        else
#line 1212 "calendar.m"
          {
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1213 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1213 "calendar.m"
            {
#line 1213 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1212 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1212 "calendar.m"
              {
#line 1214 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1214 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1214 "calendar.m"
                {
#line 1214 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1214 "calendar.m"
                {
#line 1214 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1215 "calendar.m"
                /* direct tailcall eliminated */
#line 1215 "calendar.m"
                {
#line 1215 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1215 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1215 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1215 "calendar.m"
                }
#line 1215 "calendar.m"
                continue;
#line 1212 "calendar.m"
              }
#line 1212 "calendar.m"
          }
#line 1207 "calendar.m"
        return mercury__calendar__succeeded;
#line 1207 "calendar.m"
      }
#line 1207 "calendar.m"
      break;
#line 1207 "calendar.m"
    }
#line 360 "calendar.m"
}

#line 358 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_4(
#line 358 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 358 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 358 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 358 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 358 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 358 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 358 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 358 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 358 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 358 "calendar.m"
{
#line 1207 "calendar.m"
  while (MR_TRUE)
#line 1207 "calendar.m"
    {
#line 1207 "calendar.m"
      /* tailcall optimized into a loop */
#line 1207 "calendar.m"
      {
#line 1207 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1207 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1208 "calendar.m"
        {
#line 1208 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1216 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1217 "calendar.m"
          {
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1217 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1217 "calendar.m"
          }
#line 1216 "calendar.m"
        else
#line 1212 "calendar.m"
          {
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1213 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1213 "calendar.m"
            {
#line 1213 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1212 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1212 "calendar.m"
              {
#line 1214 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1214 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1214 "calendar.m"
                {
#line 1214 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1214 "calendar.m"
                {
#line 1214 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1215 "calendar.m"
                /* direct tailcall eliminated */
#line 1215 "calendar.m"
                {
#line 1215 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1215 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1215 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1215 "calendar.m"
                }
#line 1215 "calendar.m"
                continue;
#line 1212 "calendar.m"
              }
#line 1212 "calendar.m"
          }
#line 1207 "calendar.m"
        return mercury__calendar__succeeded;
#line 1207 "calendar.m"
      }
#line 1207 "calendar.m"
      break;
#line 1207 "calendar.m"
    }
#line 358 "calendar.m"
}

#line 356 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_3(
#line 356 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 356 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 356 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 356 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 356 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 356 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 356 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 356 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 356 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 356 "calendar.m"
{
#line 1207 "calendar.m"
  while (MR_TRUE)
#line 1207 "calendar.m"
    {
#line 1207 "calendar.m"
      /* tailcall optimized into a loop */
#line 1207 "calendar.m"
      {
#line 1207 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1207 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1208 "calendar.m"
        {
#line 1208 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1216 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1217 "calendar.m"
          {
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1217 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1217 "calendar.m"
          }
#line 1216 "calendar.m"
        else
#line 1212 "calendar.m"
          {
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1212 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1213 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1213 "calendar.m"
            {
#line 1213 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1212 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1212 "calendar.m"
              {
#line 1214 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1214 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1214 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1214 "calendar.m"
                {
#line 1214 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1214 "calendar.m"
                {
#line 1214 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1215 "calendar.m"
                /* direct tailcall eliminated */
#line 1215 "calendar.m"
                {
#line 1215 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1215 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1215 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1215 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1215 "calendar.m"
                }
#line 1215 "calendar.m"
                continue;
#line 1212 "calendar.m"
              }
#line 1212 "calendar.m"
          }
#line 1207 "calendar.m"
        return mercury__calendar__succeeded;
#line 1207 "calendar.m"
      }
#line 1207 "calendar.m"
      break;
#line 1207 "calendar.m"
    }
#line 356 "calendar.m"
}

#line 354 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_2(
#line 354 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 354 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 354 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 354 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 354 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 354 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 354 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 354 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 354 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 354 "calendar.m"
{
#line 1207 "calendar.m"
  while (MR_TRUE)
#line 1207 "calendar.m"
    {
#line 1207 "calendar.m"
      /* tailcall optimized into a loop */
#line 1207 "calendar.m"
      {
#line 1207 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1207 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1208 "calendar.m"
        {
#line 1208 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1216 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1217 "calendar.m"
          {
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1217 "calendar.m"
          }
#line 1216 "calendar.m"
        else
#line 1212 "calendar.m"
          {
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1213 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1213 "calendar.m"
            {
#line 1213 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1214 "calendar.m"
            {
#line 1214 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1214 "calendar.m"
            {
#line 1214 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1215 "calendar.m"
            /* direct tailcall eliminated */
#line 1215 "calendar.m"
            {
#line 1215 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1215 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1215 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1215 "calendar.m"
            }
#line 1215 "calendar.m"
            continue;
#line 1212 "calendar.m"
          }
#line 1207 "calendar.m"
      }
#line 1207 "calendar.m"
      break;
#line 1207 "calendar.m"
    }
#line 354 "calendar.m"
}

#line 352 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_1(
#line 352 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 352 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 352 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 352 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 352 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 352 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 352 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 352 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 352 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 352 "calendar.m"
{
#line 1207 "calendar.m"
  while (MR_TRUE)
#line 1207 "calendar.m"
    {
#line 1207 "calendar.m"
      /* tailcall optimized into a loop */
#line 1207 "calendar.m"
      {
#line 1207 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1207 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1208 "calendar.m"
        {
#line 1208 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1216 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1217 "calendar.m"
          {
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1217 "calendar.m"
          }
#line 1216 "calendar.m"
        else
#line 1212 "calendar.m"
          {
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1213 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1213 "calendar.m"
            {
#line 1213 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1214 "calendar.m"
            {
#line 1214 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1214 "calendar.m"
            {
#line 1214 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1215 "calendar.m"
            /* direct tailcall eliminated */
#line 1215 "calendar.m"
            {
#line 1215 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1215 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1215 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1215 "calendar.m"
            }
#line 1215 "calendar.m"
            continue;
#line 1212 "calendar.m"
          }
#line 1207 "calendar.m"
      }
#line 1207 "calendar.m"
      break;
#line 1207 "calendar.m"
    }
#line 352 "calendar.m"
}

#line 350 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_0(
#line 350 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 350 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 350 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 350 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 350 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 350 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 350 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 350 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 350 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 350 "calendar.m"
{
#line 1207 "calendar.m"
  while (MR_TRUE)
#line 1207 "calendar.m"
    {
#line 1207 "calendar.m"
      /* tailcall optimized into a loop */
#line 1207 "calendar.m"
      {
#line 1207 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1207 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1208 "calendar.m"
        {
#line 1208 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1216 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1217 "calendar.m"
          {
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1217 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1217 "calendar.m"
          }
#line 1216 "calendar.m"
        else
#line 1212 "calendar.m"
          {
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1212 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1212 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1213 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1213 "calendar.m"
            {
#line 1213 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1214 "calendar.m"
            {
#line 1214 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1214 "calendar.m"
            {
#line 1214 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1215 "calendar.m"
            /* direct tailcall eliminated */
#line 1215 "calendar.m"
            {
#line 1215 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1215 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1215 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1215 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1215 "calendar.m"
            }
#line 1215 "calendar.m"
            continue;
#line 1212 "calendar.m"
          }
#line 1207 "calendar.m"
      }
#line 1207 "calendar.m"
      break;
#line 1207 "calendar.m"
    }
#line 350 "calendar.m"
}

#line 344 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_5(
#line 344 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 344 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 344 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 344 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 344 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 344 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 344 "calendar.m"
{
#line 1194 "calendar.m"
  while (MR_TRUE)
#line 1194 "calendar.m"
    {
#line 1194 "calendar.m"
      /* tailcall optimized into a loop */
#line 1194 "calendar.m"
      {
#line 1194 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1194 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1195 "calendar.m"
        {
#line 1195 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1203 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1204 "calendar.m"
          {
#line 1204 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1204 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1204 "calendar.m"
          }
#line 1203 "calendar.m"
        else
#line 1199 "calendar.m"
          {
#line 1199 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1200 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1200 "calendar.m"
            {
#line 1200 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1199 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1199 "calendar.m"
              {
#line 1201 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1201 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1201 "calendar.m"
                {
#line 1201 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1201 "calendar.m"
                {
#line 1201 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1202 "calendar.m"
                /* direct tailcall eliminated */
#line 1202 "calendar.m"
                {
#line 1202 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1202 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1202 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1202 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1202 "calendar.m"
                }
#line 1202 "calendar.m"
                continue;
#line 1199 "calendar.m"
              }
#line 1199 "calendar.m"
          }
#line 1194 "calendar.m"
        return mercury__calendar__succeeded;
#line 1194 "calendar.m"
      }
#line 1194 "calendar.m"
      break;
#line 1194 "calendar.m"
    }
#line 344 "calendar.m"
}

#line 343 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_4(
#line 343 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 343 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 343 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 343 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 343 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 343 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 343 "calendar.m"
{
#line 1194 "calendar.m"
  while (MR_TRUE)
#line 1194 "calendar.m"
    {
#line 1194 "calendar.m"
      /* tailcall optimized into a loop */
#line 1194 "calendar.m"
      {
#line 1194 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1194 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1195 "calendar.m"
        {
#line 1195 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1203 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1204 "calendar.m"
          {
#line 1204 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1204 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1204 "calendar.m"
          }
#line 1203 "calendar.m"
        else
#line 1199 "calendar.m"
          {
#line 1199 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1200 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1200 "calendar.m"
            {
#line 1200 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1199 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1199 "calendar.m"
              {
#line 1201 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1201 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1201 "calendar.m"
                {
#line 1201 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1201 "calendar.m"
                {
#line 1201 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1202 "calendar.m"
                /* direct tailcall eliminated */
#line 1202 "calendar.m"
                {
#line 1202 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1202 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1202 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1202 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1202 "calendar.m"
                }
#line 1202 "calendar.m"
                continue;
#line 1199 "calendar.m"
              }
#line 1199 "calendar.m"
          }
#line 1194 "calendar.m"
        return mercury__calendar__succeeded;
#line 1194 "calendar.m"
      }
#line 1194 "calendar.m"
      break;
#line 1194 "calendar.m"
    }
#line 343 "calendar.m"
}

#line 342 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_3(
#line 342 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 342 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 342 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 342 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 342 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 342 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 342 "calendar.m"
{
#line 1194 "calendar.m"
  while (MR_TRUE)
#line 1194 "calendar.m"
    {
#line 1194 "calendar.m"
      /* tailcall optimized into a loop */
#line 1194 "calendar.m"
      {
#line 1194 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1194 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1195 "calendar.m"
        {
#line 1195 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1203 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1204 "calendar.m"
          {
#line 1204 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1204 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1204 "calendar.m"
          }
#line 1203 "calendar.m"
        else
#line 1199 "calendar.m"
          {
#line 1199 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1199 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1200 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1200 "calendar.m"
            {
#line 1200 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1199 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1199 "calendar.m"
              {
#line 1201 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1201 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1201 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1201 "calendar.m"
                {
#line 1201 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1201 "calendar.m"
                {
#line 1201 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1202 "calendar.m"
                /* direct tailcall eliminated */
#line 1202 "calendar.m"
                {
#line 1202 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1202 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1202 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1202 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1202 "calendar.m"
                }
#line 1202 "calendar.m"
                continue;
#line 1199 "calendar.m"
              }
#line 1199 "calendar.m"
          }
#line 1194 "calendar.m"
        return mercury__calendar__succeeded;
#line 1194 "calendar.m"
      }
#line 1194 "calendar.m"
      break;
#line 1194 "calendar.m"
    }
#line 342 "calendar.m"
}

#line 341 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_2(
#line 341 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 341 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 341 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 341 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 341 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 341 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 341 "calendar.m"
{
#line 1194 "calendar.m"
  while (MR_TRUE)
#line 1194 "calendar.m"
    {
#line 1194 "calendar.m"
      /* tailcall optimized into a loop */
#line 1194 "calendar.m"
      {
#line 1194 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1194 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1195 "calendar.m"
        {
#line 1195 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1203 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1204 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1203 "calendar.m"
        else
#line 1199 "calendar.m"
          {
#line 1199 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1200 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1200 "calendar.m"
            {
#line 1200 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1201 "calendar.m"
            {
#line 1201 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1201 "calendar.m"
            {
#line 1201 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1202 "calendar.m"
            /* direct tailcall eliminated */
#line 1202 "calendar.m"
            {
#line 1202 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1202 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1202 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1202 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1202 "calendar.m"
            }
#line 1202 "calendar.m"
            continue;
#line 1199 "calendar.m"
          }
#line 1194 "calendar.m"
      }
#line 1194 "calendar.m"
      break;
#line 1194 "calendar.m"
    }
#line 341 "calendar.m"
}

#line 340 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_1(
#line 340 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 340 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 340 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 340 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 340 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 340 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 340 "calendar.m"
{
#line 1194 "calendar.m"
  while (MR_TRUE)
#line 1194 "calendar.m"
    {
#line 1194 "calendar.m"
      /* tailcall optimized into a loop */
#line 1194 "calendar.m"
      {
#line 1194 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1194 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1195 "calendar.m"
        {
#line 1195 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1203 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1204 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1203 "calendar.m"
        else
#line 1199 "calendar.m"
          {
#line 1199 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1200 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1200 "calendar.m"
            {
#line 1200 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1201 "calendar.m"
            {
#line 1201 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1201 "calendar.m"
            {
#line 1201 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1202 "calendar.m"
            /* direct tailcall eliminated */
#line 1202 "calendar.m"
            {
#line 1202 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1202 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1202 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1202 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1202 "calendar.m"
            }
#line 1202 "calendar.m"
            continue;
#line 1199 "calendar.m"
          }
#line 1194 "calendar.m"
      }
#line 1194 "calendar.m"
      break;
#line 1194 "calendar.m"
    }
#line 340 "calendar.m"
}

#line 339 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_0(
#line 339 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 339 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 339 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 339 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 339 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 339 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 339 "calendar.m"
{
#line 1194 "calendar.m"
  while (MR_TRUE)
#line 1194 "calendar.m"
    {
#line 1194 "calendar.m"
      /* tailcall optimized into a loop */
#line 1194 "calendar.m"
      {
#line 1194 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1194 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1195 "calendar.m"
        {
#line 1195 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1203 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1204 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1203 "calendar.m"
        else
#line 1199 "calendar.m"
          {
#line 1199 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1199 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1200 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1200 "calendar.m"
            {
#line 1200 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1201 "calendar.m"
            {
#line 1201 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1201 "calendar.m"
            {
#line 1201 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1202 "calendar.m"
            /* direct tailcall eliminated */
#line 1202 "calendar.m"
            {
#line 1202 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1202 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1202 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1202 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1202 "calendar.m"
            }
#line 1202 "calendar.m"
            continue;
#line 1199 "calendar.m"
          }
#line 1194 "calendar.m"
      }
#line 1194 "calendar.m"
      break;
#line 1194 "calendar.m"
    }
#line 339 "calendar.m"
}

#line 322 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__day_duration_2_f_0(
#line 322 "calendar.m"
  MR_Word mercury__calendar__DateA_4,
#line 322 "calendar.m"
  MR_Word mercury__calendar__DateB_5)
#line 322 "calendar.m"
{
#line 910 "calendar.m"
  {
#line 910 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 910 "calendar.m"
    MR_Word mercury__calendar__Duration_6;
#line 910 "calendar.m"
    MR_Word mercury__calendar__CompResult_7;

#line 911 "calendar.m"
    {
#line 911 "calendar.m"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__CompResult_7, mercury__calendar__DateB_5, mercury__calendar__DateA_4);
    }
#line 915 "calendar.m"
    if ((mercury__calendar__CompResult_7 == (MR_Integer) 1))
#line 912 "calendar.m"
      {
#line 912 "calendar.m"
        MR_Word mercury__calendar__Duration0_8;
#line 912 "calendar.m"
        MR_Integer mercury__calendar__Months_88;
#line 912 "calendar.m"
        MR_Integer mercury__calendar__Days_89;
#line 912 "calendar.m"
        MR_Integer mercury__calendar__Seconds_90;
#line 912 "calendar.m"
        MR_Integer mercury__calendar__MicroSeconds_91;
#line 912 "calendar.m"
        MR_Integer mercury__calendar__V_92_92;
#line 912 "calendar.m"
        MR_Integer mercury__calendar__V_93_93;
#line 912 "calendar.m"
        MR_Integer mercury__calendar__V_94_94;
#line 912 "calendar.m"
        MR_Integer mercury__calendar__V_95_95;

#line 913 "calendar.m"
        {
#line 913 "calendar.m"
          mercury__calendar__Duration0_8 = mercury__calendar__day_duration_2_f_0(mercury__calendar__DateB_5, mercury__calendar__DateA_4);
        }
#line 1173 "calendar.m"
        mercury__calendar__Months_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 0)));
#line 1173 "calendar.m"
        mercury__calendar__Days_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 1)));
#line 1173 "calendar.m"
        mercury__calendar__Seconds_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 2)));
#line 1173 "calendar.m"
        mercury__calendar__MicroSeconds_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 3)));
#line 1174 "calendar.m"
        mercury__calendar__V_92_92 = ((MR_Integer) 0 - mercury__calendar__Months_88);
#line 1174 "calendar.m"
        mercury__calendar__V_93_93 = ((MR_Integer) 0 - mercury__calendar__Days_89);
#line 1174 "calendar.m"
        mercury__calendar__V_94_94 = ((MR_Integer) 0 - mercury__calendar__Seconds_90);
#line 1174 "calendar.m"
        mercury__calendar__V_95_95 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_91);
#line 1174 "calendar.m"
        {
#line 1174 "calendar.m"
          mercury__calendar__Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 0) = ((MR_Box) (mercury__calendar__V_92_92));
#line 1174 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 1) = ((MR_Box) (mercury__calendar__V_93_93));
#line 1174 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 2) = ((MR_Box) (mercury__calendar__V_94_94));
#line 1174 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 3) = ((MR_Box) (mercury__calendar__V_95_95));
#line 1174 "calendar.m"
        }
#line 912 "calendar.m"
      }
#line 915 "calendar.m"
    else
#line 915 "calendar.m"
      if ((mercury__calendar__CompResult_7 == (MR_Integer) 0))
#line 1176 "calendar.m"
        mercury__calendar__Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
#line 915 "calendar.m"
      else
#line 917 "calendar.m"
        {
#line 917 "calendar.m"
          MR_Integer mercury__calendar__MicroSecond1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 917 "calendar.m"
          MR_Integer mercury__calendar__MicroSecond2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 917 "calendar.m"
          MR_Integer mercury__calendar__MicroSeconds_12;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Second1_13;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Second2_14;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Seconds_15;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Minute1_16;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Minute2_17;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Minutes_18;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Hour1_19;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Hour2_20;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Hours_21;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__JDN1_22;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__JDN2_23;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__Days_24;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_26_26;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__V_27_27;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_29_29;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__V_30_30;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_32_32;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__V_33_33;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_35_35;
#line 917 "calendar.m"
          MR_Integer mercury__calendar__V_36_36;
#line 919 "calendar.m"
          MR_Integer mercury__calendar__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 919 "calendar.m"
          MR_Integer mercury__calendar__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 919 "calendar.m"
          MR_Integer mercury__calendar__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 919 "calendar.m"
          MR_Integer mercury__calendar__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 919 "calendar.m"
          MR_Integer mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 919 "calendar.m"
          MR_Integer mercury__calendar__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 920 "calendar.m"
          MR_Integer mercury__calendar__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 920 "calendar.m"
          MR_Integer mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 920 "calendar.m"
          MR_Integer mercury__calendar__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 920 "calendar.m"
          MR_Integer mercury__calendar__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 920 "calendar.m"
          MR_Integer mercury__calendar__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 920 "calendar.m"
          MR_Integer mercury__calendar__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 923 "calendar.m"
          MR_Integer mercury__calendar__V_51_51;
#line 923 "calendar.m"
          MR_Integer mercury__calendar__V_52_52;
#line 923 "calendar.m"
          MR_Integer mercury__calendar__V_53_53;
#line 923 "calendar.m"
          MR_Integer mercury__calendar__V_54_54;
#line 923 "calendar.m"
          MR_Integer mercury__calendar__V_55_55;
#line 923 "calendar.m"
          MR_Integer mercury__calendar__V_56_56;
#line 924 "calendar.m"
          MR_Integer mercury__calendar__V_57_57;
#line 924 "calendar.m"
          MR_Integer mercury__calendar__V_58_58;
#line 924 "calendar.m"
          MR_Integer mercury__calendar__V_59_59;
#line 924 "calendar.m"
          MR_Integer mercury__calendar__V_60_60;
#line 924 "calendar.m"
          MR_Integer mercury__calendar__V_61_61;
#line 924 "calendar.m"
          MR_Integer mercury__calendar__V_62_62;
#line 927 "calendar.m"
          MR_Integer mercury__calendar__V_63_63;
#line 927 "calendar.m"
          MR_Integer mercury__calendar__V_64_64;
#line 927 "calendar.m"
          MR_Integer mercury__calendar__V_65_65;
#line 927 "calendar.m"
          MR_Integer mercury__calendar__V_66_66;
#line 927 "calendar.m"
          MR_Integer mercury__calendar__V_67_67;
#line 927 "calendar.m"
          MR_Integer mercury__calendar__V_68_68;
#line 928 "calendar.m"
          MR_Integer mercury__calendar__V_69_69;
#line 928 "calendar.m"
          MR_Integer mercury__calendar__V_70_70;
#line 928 "calendar.m"
          MR_Integer mercury__calendar__V_71_71;
#line 928 "calendar.m"
          MR_Integer mercury__calendar__V_72_72;
#line 928 "calendar.m"
          MR_Integer mercury__calendar__V_73_73;
#line 928 "calendar.m"
          MR_Integer mercury__calendar__V_74_74;
#line 931 "calendar.m"
          MR_Integer mercury__calendar__V_75_75;
#line 931 "calendar.m"
          MR_Integer mercury__calendar__V_76_76;
#line 931 "calendar.m"
          MR_Integer mercury__calendar__V_77_77;
#line 931 "calendar.m"
          MR_Integer mercury__calendar__V_78_78;
#line 931 "calendar.m"
          MR_Integer mercury__calendar__V_79_79;
#line 931 "calendar.m"
          MR_Integer mercury__calendar__V_80_80;
#line 932 "calendar.m"
          MR_Integer mercury__calendar__V_81_81;
#line 932 "calendar.m"
          MR_Integer mercury__calendar__V_82_82;
#line 932 "calendar.m"
          MR_Integer mercury__calendar__V_83_83;
#line 932 "calendar.m"
          MR_Integer mercury__calendar__V_84_84;
#line 932 "calendar.m"
          MR_Integer mercury__calendar__V_85_85;
#line 932 "calendar.m"
          MR_Integer mercury__calendar__V_86_86;

#line 921 "calendar.m"
          {
#line 921 "calendar.m"
            mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 1000000, mercury__calendar__MicroSecond1_10, mercury__calendar__MicroSecond2_11, &mercury__calendar__MicroSeconds_12, &mercury__calendar__STATE_VARIABLE_Borrow_26_26);
          }
#line 923 "calendar.m"
          mercury__calendar__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 923 "calendar.m"
          mercury__calendar__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 923 "calendar.m"
          mercury__calendar__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 923 "calendar.m"
          mercury__calendar__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 923 "calendar.m"
          mercury__calendar__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 923 "calendar.m"
          mercury__calendar__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 923 "calendar.m"
          mercury__calendar__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 923 "calendar.m"
          mercury__calendar__Second1_13 = (mercury__calendar__V_27_27 - mercury__calendar__STATE_VARIABLE_Borrow_26_26);
#line 924 "calendar.m"
          mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 924 "calendar.m"
          mercury__calendar__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 924 "calendar.m"
          mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 924 "calendar.m"
          mercury__calendar__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 924 "calendar.m"
          mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 924 "calendar.m"
          mercury__calendar__Second2_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 924 "calendar.m"
          mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 925 "calendar.m"
          {
#line 925 "calendar.m"
            mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__Second1_13, mercury__calendar__Second2_14, &mercury__calendar__Seconds_15, &mercury__calendar__STATE_VARIABLE_Borrow_29_29);
          }
#line 927 "calendar.m"
          mercury__calendar__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 927 "calendar.m"
          mercury__calendar__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 927 "calendar.m"
          mercury__calendar__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 927 "calendar.m"
          mercury__calendar__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 927 "calendar.m"
          mercury__calendar__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 927 "calendar.m"
          mercury__calendar__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 927 "calendar.m"
          mercury__calendar__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 927 "calendar.m"
          mercury__calendar__Minute1_16 = (mercury__calendar__V_30_30 - mercury__calendar__STATE_VARIABLE_Borrow_29_29);
#line 928 "calendar.m"
          mercury__calendar__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 928 "calendar.m"
          mercury__calendar__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 928 "calendar.m"
          mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 928 "calendar.m"
          mercury__calendar__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 928 "calendar.m"
          mercury__calendar__Minute2_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 928 "calendar.m"
          mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 928 "calendar.m"
          mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 929 "calendar.m"
          {
#line 929 "calendar.m"
            mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__Minute1_16, mercury__calendar__Minute2_17, &mercury__calendar__Minutes_18, &mercury__calendar__STATE_VARIABLE_Borrow_32_32);
          }
#line 931 "calendar.m"
          mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 931 "calendar.m"
          mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 931 "calendar.m"
          mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 931 "calendar.m"
          mercury__calendar__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 931 "calendar.m"
          mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 931 "calendar.m"
          mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 931 "calendar.m"
          mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 931 "calendar.m"
          mercury__calendar__Hour1_19 = (mercury__calendar__V_33_33 - mercury__calendar__STATE_VARIABLE_Borrow_32_32);
#line 932 "calendar.m"
          mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 932 "calendar.m"
          mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 932 "calendar.m"
          mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 932 "calendar.m"
          mercury__calendar__Hour2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 932 "calendar.m"
          mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 932 "calendar.m"
          mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 932 "calendar.m"
          mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 933 "calendar.m"
          {
#line 933 "calendar.m"
            mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, mercury__calendar__Hour1_19, mercury__calendar__Hour2_20, &mercury__calendar__Hours_21, &mercury__calendar__STATE_VARIABLE_Borrow_35_35);
          }
#line 934 "calendar.m"
          {
#line 934 "calendar.m"
            mercury__calendar__JDN1_22 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__DateB_5);
          }
#line 935 "calendar.m"
          {
#line 935 "calendar.m"
            mercury__calendar__JDN2_23 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__DateA_4);
          }
#line 936 "calendar.m"
          mercury__calendar__V_36_36 = (mercury__calendar__JDN1_22 - mercury__calendar__STATE_VARIABLE_Borrow_35_35);
#line 936 "calendar.m"
          mercury__calendar__Days_24 = (mercury__calendar__V_36_36 - mercury__calendar__JDN2_23);
#line 937 "calendar.m"
          {
#line 937 "calendar.m"
            return mercury__calendar__Duration_6 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, mercury__calendar__Days_24, mercury__calendar__Hours_21, mercury__calendar__Minutes_18, mercury__calendar__Seconds_15, mercury__calendar__MicroSeconds_12);
          }
#line 917 "calendar.m"
        }
#line 910 "calendar.m"
    return mercury__calendar__Duration_6;
#line 910 "calendar.m"
  }
#line 322 "calendar.m"
}

#line 316 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__duration_2_f_0(
#line 316 "calendar.m"
  MR_Word mercury__calendar__DateA_4,
#line 316 "calendar.m"
  MR_Word mercury__calendar__DateB_5)
#line 316 "calendar.m"
{
#line 942 "calendar.m"
  {
#line 942 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 942 "calendar.m"
    MR_Word mercury__calendar__Duration_6;
#line 942 "calendar.m"
    MR_Word mercury__calendar__CompResult_7;

#line 943 "calendar.m"
    {
#line 943 "calendar.m"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__CompResult_7, mercury__calendar__DateB_5, mercury__calendar__DateA_4);
    }
#line 948 "calendar.m"
    if ((mercury__calendar__CompResult_7 == (MR_Integer) 1))
#line 945 "calendar.m"
      {
#line 945 "calendar.m"
        MR_Word mercury__calendar__Duration0_8;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__Months_12;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__Days_13;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__Seconds_14;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__MicroSeconds_15;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_16_16;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_17_17;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_18_18;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_19_19;

#line 946 "calendar.m"
        {
#line 946 "calendar.m"
          mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 0, mercury__calendar__DateA_4, mercury__calendar__DateB_5, &mercury__calendar__Duration0_8);
        }
#line 1173 "calendar.m"
        mercury__calendar__Months_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 0)));
#line 1173 "calendar.m"
        mercury__calendar__Days_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 1)));
#line 1173 "calendar.m"
        mercury__calendar__Seconds_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 2)));
#line 1173 "calendar.m"
        mercury__calendar__MicroSeconds_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 3)));
#line 1174 "calendar.m"
        mercury__calendar__V_16_16 = ((MR_Integer) 0 - mercury__calendar__Months_12);
#line 1174 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Integer) 0 - mercury__calendar__Days_13);
#line 1174 "calendar.m"
        mercury__calendar__V_18_18 = ((MR_Integer) 0 - mercury__calendar__Seconds_14);
#line 1174 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_15);
#line 1174 "calendar.m"
        {
#line 1174 "calendar.m"
          mercury__calendar__Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 0) = ((MR_Box) (mercury__calendar__V_16_16));
#line 1174 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 1) = ((MR_Box) (mercury__calendar__V_17_17));
#line 1174 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 2) = ((MR_Box) (mercury__calendar__V_18_18));
#line 1174 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 3) = ((MR_Box) (mercury__calendar__V_19_19));
#line 1174 "calendar.m"
        }
#line 945 "calendar.m"
      }
#line 948 "calendar.m"
    else
#line 948 "calendar.m"
      if ((mercury__calendar__CompResult_7 == (MR_Integer) 0))
#line 1176 "calendar.m"
        mercury__calendar__Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
#line 948 "calendar.m"
      else
#line 952 "calendar.m"
        {
#line 953 "calendar.m"
          {
#line 953 "calendar.m"
            mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 1, mercury__calendar__DateB_5, mercury__calendar__DateA_4, &mercury__calendar__Duration_6);
          }
#line 952 "calendar.m"
        }
#line 942 "calendar.m"
    return mercury__calendar__Duration_6;
#line 942 "calendar.m"
  }
#line 316 "calendar.m"
}

#line 289 "calendar.m"
void MR_CALL 
mercury__calendar__local_time_offset_3_p_0(
#line 289 "calendar.m"
  MR_Word * mercury__calendar__TZ_4)
#line 289 "calendar.m"
{
#line 1165 "calendar.m"
  {
#line 1165 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1165 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1165 "calendar.m"
    MR_Word mercury__calendar__LocalTM_7;
#line 1165 "calendar.m"
    MR_Word mercury__calendar__LocalTime_9;
#line 1165 "calendar.m"
    MR_Word mercury__calendar__GMTime_10;
#line 1165 "calendar.m"
    MR_Box mercury__calendar__Time_3_15;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Yr_5_16;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Mnt_6_17;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__MD_7_18;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Hrs_8_19;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Min_9_20;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Sec_10_21;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__YD_11_22;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__WD_12_23;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__N_13_24;
#line 1165 "calendar.m"
    MR_Word mercury__calendar__V_14_25;
#line 1165 "calendar.m"
    MR_Box mercury__calendar__Time_3_27;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__N_13_36;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__TMYear_40;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_41;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Year_49;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Month_50;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Day_51;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Hour_52;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Minute_53;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Second_54;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__TMYear_60;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_61;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Year_69;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Month_70;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Day_71;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Hour_72;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Minute_73;
#line 1165 "calendar.m"
    MR_Integer mercury__calendar__Second_74;
#line 127 "time.opt"
    MR_Integer mercury__calendar__YD_11_34;
#line 127 "time.opt"
    MR_Integer mercury__calendar__WD_12_35;
#line 96 "time.opt"
    MR_Word mercury__calendar__V_14_37;
#line 1156 "calendar.m"
    MR_Integer mercury__calendar__V_46_46;
#line 1156 "calendar.m"
    MR_Integer mercury__calendar__V_47_47;
#line 1156 "calendar.m"
    MR_Word mercury__calendar__V_48_48;

#line 1166 "calendar.m"
    {
#line 1166 "calendar.m"
      mercury__time__time_3_p_0(&mercury__calendar__TimeT_6);
    }
#line 89 "time.opt"
    mercury__calendar__Time_3_15 = (MR_Box) mercury__calendar__TimeT_6;
#line 107 "time.opt"
{
#define MR_PROC_LABEL mercury__calendar__local_time_offset_3_p_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__calendar__Time_3_15 , Time);
		{
#line 107 "time.opt"

    struct tm   *p;
    time_t      t;

    t = Time;

    p = localtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;

#line 11089 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__Yr_5_16  = Yr;
	 mercury__calendar__Mnt_6_17  = Mnt;
	 mercury__calendar__MD_7_18  = MD;
	 mercury__calendar__Hrs_8_19  = Hrs;
	 mercury__calendar__Min_9_20  = Min;
	 mercury__calendar__Sec_10_21  = Sec;
	 mercury__calendar__YD_11_22  = YD;
	 mercury__calendar__WD_12_23  = WD;
	 mercury__calendar__N_13_24  = N;
#line 107 "time.opt"
}
#line 92 "time.opt"
    {
#line 92 "time.opt"
      mercury__calendar__V_14_25 = mercury__time__int_to_maybe_dst_1_f_0(mercury__calendar__N_13_24);
    }
#line 91 "time.opt"
    {
#line 91 "time.opt"
      mercury__calendar__LocalTM_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 0) = ((MR_Box) (mercury__calendar__Yr_5_16));
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 1) = ((MR_Box) (mercury__calendar__Mnt_6_17));
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 2) = ((MR_Box) (mercury__calendar__MD_7_18));
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 3) = ((MR_Box) (mercury__calendar__Hrs_8_19));
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 4) = ((MR_Box) (mercury__calendar__Min_9_20));
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 5) = ((MR_Box) (mercury__calendar__Sec_10_21));
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 6) = ((MR_Box) (mercury__calendar__YD_11_22));
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 7) = ((MR_Box) (mercury__calendar__WD_12_23));
#line 91 "time.opt"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, 8) = ((MR_Box) (mercury__calendar__V_14_25));
#line 91 "time.opt"
    }
#line 93 "time.opt"
    mercury__calendar__Time_3_27 = (MR_Box) mercury__calendar__TimeT_6;
#line 127 "time.opt"
{
#define MR_PROC_LABEL mercury__calendar__local_time_offset_3_p_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__calendar__Time_3_27 , Time);
		{
#line 127 "time.opt"
{
    struct tm   *p;
    time_t      t;

    t = Time;

    p = gmtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;
}
#line 11173 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__TMYear_60  = Yr;
	 mercury__calendar__TMMonth_61  = Mnt;
	 mercury__calendar__Day_71  = MD;
	 mercury__calendar__Hour_72  = Hrs;
	 mercury__calendar__Minute_73  = Min;
	 mercury__calendar__Second_74  = Sec;
	 mercury__calendar__YD_11_34  = YD;
	 mercury__calendar__WD_12_35  = WD;
	 mercury__calendar__N_13_36  = N;
#line 127 "time.opt"
}
#line 96 "time.opt"
    {
#line 96 "time.opt"
      mercury__calendar__V_14_37 = mercury__time__int_to_maybe_dst_1_f_0(mercury__calendar__N_13_36);
    }
#line 1156 "calendar.m"
    mercury__calendar__TMYear_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 0)));
#line 1156 "calendar.m"
    mercury__calendar__TMMonth_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 1)));
#line 1156 "calendar.m"
    mercury__calendar__Day_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 2)));
#line 1156 "calendar.m"
    mercury__calendar__Hour_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 3)));
#line 1156 "calendar.m"
    mercury__calendar__Minute_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 4)));
#line 1156 "calendar.m"
    mercury__calendar__Second_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 5)));
#line 1156 "calendar.m"
    mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 6)));
#line 1156 "calendar.m"
    mercury__calendar__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 7)));
#line 1156 "calendar.m"
    mercury__calendar__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 8)));
#line 1157 "calendar.m"
    mercury__calendar__Year_49 = ((MR_Integer) 1900 + mercury__calendar__TMYear_40);
#line 1158 "calendar.m"
    mercury__calendar__Month_50 = (mercury__calendar__TMMonth_41 + (MR_Integer) 1);
#line 1163 "calendar.m"
    {
#line 1163 "calendar.m"
      mercury__calendar__LocalTime_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 0) = ((MR_Box) (mercury__calendar__Year_49));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 1) = ((MR_Box) (mercury__calendar__Month_50));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 2) = ((MR_Box) (mercury__calendar__Day_51));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 3) = ((MR_Box) (mercury__calendar__Hour_52));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 4) = ((MR_Box) (mercury__calendar__Minute_53));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 5) = ((MR_Box) (mercury__calendar__Second_54));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "calendar.m"
    }
#line 1157 "calendar.m"
    mercury__calendar__Year_69 = ((MR_Integer) 1900 + mercury__calendar__TMYear_60);
#line 1158 "calendar.m"
    mercury__calendar__Month_70 = (mercury__calendar__TMMonth_61 + (MR_Integer) 1);
#line 1163 "calendar.m"
    {
#line 1163 "calendar.m"
      mercury__calendar__GMTime_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 0) = ((MR_Box) (mercury__calendar__Year_69));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 1) = ((MR_Box) (mercury__calendar__Month_70));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 2) = ((MR_Box) (mercury__calendar__Day_71));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 3) = ((MR_Box) (mercury__calendar__Hour_72));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 4) = ((MR_Box) (mercury__calendar__Minute_73));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 5) = ((MR_Box) (mercury__calendar__Second_74));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "calendar.m"
    }
#line 1171 "calendar.m"
    {
#line 1171 "calendar.m"
      *mercury__calendar__TZ_4 = mercury__calendar__duration_2_f_0(mercury__calendar__GMTime_10, mercury__calendar__LocalTime_9);
    }
#line 1165 "calendar.m"
  }
#line 289 "calendar.m"
}

#line 273 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__duration_leq_2_p_0(
#line 273 "calendar.m"
  MR_Word mercury__calendar__DurA_3,
#line 273 "calendar.m"
  MR_Word mercury__calendar__DurB_4)
#line 273 "calendar.m"
{
#line 774 "calendar.m"
  {
#line 774 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 774 "calendar.m"
    MR_Word mercury__calendar__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

#line 775 "calendar.m"
    {
#line 775 "calendar.m"
      return mercury__calendar__succeeded = mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(mercury__calendar__DurA_3, mercury__calendar__DurB_4, mercury__calendar__V_10_10);
    }
#line 774 "calendar.m"
    return mercury__calendar__succeeded;
#line 774 "calendar.m"
  }
#line 273 "calendar.m"
}

#line 257 "calendar.m"
void MR_CALL 
mercury__calendar__add_duration_3_p_0(
#line 257 "calendar.m"
  MR_Word mercury__calendar__D_4,
#line 257 "calendar.m"
  MR_Word mercury__calendar__S_5,
#line 257 "calendar.m"
  MR_Word * mercury__calendar__E_6)
#line 257 "calendar.m"
{
#line 843 "calendar.m"
  {
#line 843 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__MaxDaysInMonth_9;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__TempDays_10;
#line 843 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_11_11 = (MR_Word) &mercury__calendar_scalar_common_5[1];
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_19_19;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 843 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_22_22;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_26_26;
#line 843 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_29_29;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_31_31;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_32_32;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 843 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_35_35;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_37_37;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_38_38;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_39_39;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_40_40;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_41_41;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_42_42;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_43_43;
#line 843 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_44_44;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_45_45;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_47_47;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_49_49;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_50_50;
#line 843 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_51_51;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_52_52;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_54_54;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_56_56;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_57_57;
#line 843 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_58_58;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_59_59;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_61_61;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_63_63;
#line 843 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_68_68;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_69_69;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_70_70;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_71_71;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_94_94;
#line 843 "calendar.m"
    MR_Integer mercury__calendar__V_160_160;
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 845 "calendar.m"
    MR_Integer mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 846 "calendar.m"
    MR_Integer mercury__calendar__V_82_82;
#line 846 "calendar.m"
    MR_Integer mercury__calendar__V_84_84;
#line 846 "calendar.m"
    MR_Integer mercury__calendar__V_85_85;
#line 846 "calendar.m"
    MR_Integer mercury__calendar__V_86_86;
#line 846 "calendar.m"
    MR_Integer mercury__calendar__V_87_87;
#line 846 "calendar.m"
    MR_Integer mercury__calendar__V_88_88;
#line 846 "calendar.m"
    MR_Integer mercury__calendar__V_83_83;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_89_89;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_92_92;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_93_93;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_96_96;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_97_97;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_98_98;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_99_99;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_100_100;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_101_101;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_95_95;
#line 851 "calendar.m"
    MR_Integer mercury__calendar__V_108_108;
#line 851 "calendar.m"
    MR_Integer mercury__calendar__V_109_109;
#line 851 "calendar.m"
    MR_Integer mercury__calendar__V_110_110;
#line 852 "calendar.m"
    MR_Integer mercury__calendar__V_111_111;
#line 852 "calendar.m"
    MR_Integer mercury__calendar__V_112_112;
#line 852 "calendar.m"
    MR_Integer mercury__calendar__V_113_113;
#line 852 "calendar.m"
    MR_Integer mercury__calendar__V_114_114;
#line 852 "calendar.m"
    MR_Integer mercury__calendar__V_115_115;
#line 852 "calendar.m"
    MR_Integer mercury__calendar__V_116_116;
#line 852 "calendar.m"
    MR_Integer mercury__calendar__V_117_117;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_118_118;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_119_119;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_120_120;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_121_121;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_122_122;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_123_123;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_124_124;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_125_125;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_126_126;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_127_127;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_128_128;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_129_129;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_130_130;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_131_131;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_133_133;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_132_132;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_134_134;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_135_135;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_136_136;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_137_137;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_138_138;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_139_139;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_140_140;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_141_141;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_142_142;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_143_143;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_145_145;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_146_146;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_144_144;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_147_147;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_148_148;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_149_149;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_150_150;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_151_151;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_152_152;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_153_153;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_154_154;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_155_155;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_157_157;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_158_158;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_159_159;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_156_156;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_161_161;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_162_162;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_163_163;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_164_164;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_165_165;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_65_65;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_172_172;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_173_173;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_174_174;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_175_175;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_176_176;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_177_177;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_190_190;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_191_191;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_192_192;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_193_193;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_194_194;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_196_196;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_197_197;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_198_198;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_199_199;
#line 875 "calendar.m"
    MR_Integer mercury__calendar__V_195_195;

#line 845 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_19_19 = (mercury__calendar__V_20_20 + mercury__calendar__V_21_21);
#line 846 "calendar.m"
    {
#line 846 "calendar.m"
      mercury__calendar__V_23_23 = mercury__calendar__modulo_3_f_0(mercury__calendar__STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    }
#line 846 "calendar.m"
    mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 0)));
#line 846 "calendar.m"
    mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 1)));
#line 846 "calendar.m"
    mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 2)));
#line 846 "calendar.m"
    mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 3)));
#line 846 "calendar.m"
    mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 4)));
#line 846 "calendar.m"
    mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 5)));
#line 846 "calendar.m"
    mercury__calendar__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 6)));
#line 846 "calendar.m"
    {
#line 846 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 846 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 0) = ((MR_Box) (mercury__calendar__V_82_82));
#line 846 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 1) = ((MR_Box) (mercury__calendar__V_23_23));
#line 846 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 2) = ((MR_Box) (mercury__calendar__V_84_84));
#line 846 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 3) = ((MR_Box) (mercury__calendar__V_85_85));
#line 846 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 4) = ((MR_Box) (mercury__calendar__V_86_86));
#line 846 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 5) = ((MR_Box) (mercury__calendar__V_87_87));
#line 846 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 6) = ((MR_Box) (mercury__calendar__V_88_88));
#line 846 "calendar.m"
    }
#line 847 "calendar.m"
    {
#line 847 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_26_26 = mercury__calendar__fquotient_3_f_0(mercury__calendar__STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    }
#line 849 "calendar.m"
    mercury__calendar__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 849 "calendar.m"
    mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 849 "calendar.m"
    mercury__calendar__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 849 "calendar.m"
    mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 849 "calendar.m"
    mercury__calendar__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 849 "calendar.m"
    mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 849 "calendar.m"
    mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 849 "calendar.m"
    mercury__calendar__V_30_30 = (mercury__calendar__V_31_31 + mercury__calendar__STATE_VARIABLE_Carry_26_26);
#line 849 "calendar.m"
    mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 0)));
#line 849 "calendar.m"
    mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 1)));
#line 849 "calendar.m"
    mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 2)));
#line 849 "calendar.m"
    mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 3)));
#line 849 "calendar.m"
    mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 4)));
#line 849 "calendar.m"
    mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 5)));
#line 849 "calendar.m"
    mercury__calendar__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 6)));
#line 849 "calendar.m"
    {
#line 849 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 849 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 0) = ((MR_Box) (mercury__calendar__V_30_30));
#line 849 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 1) = ((MR_Box) (mercury__calendar__V_96_96));
#line 849 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 2) = ((MR_Box) (mercury__calendar__V_97_97));
#line 849 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 3) = ((MR_Box) (mercury__calendar__V_98_98));
#line 849 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 4) = ((MR_Box) (mercury__calendar__V_99_99));
#line 849 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 5) = ((MR_Box) (mercury__calendar__V_100_100));
#line 849 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 6) = ((MR_Box) (mercury__calendar__V_101_101));
#line 849 "calendar.m"
    }
#line 851 "calendar.m"
    mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 851 "calendar.m"
    mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 851 "calendar.m"
    mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 851 "calendar.m"
    mercury__calendar__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 851 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_32_32 = (mercury__calendar__V_94_94 + mercury__calendar__V_34_34);
#line 852 "calendar.m"
    {
#line 852 "calendar.m"
      mercury__calendar__V_37_37 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 852 "calendar.m"
    {
#line 852 "calendar.m"
      mercury__calendar__V_36_36 = mercury__calendar__modulo_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_32_32, mercury__calendar__V_37_37);
    }
#line 852 "calendar.m"
    mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 0)));
#line 852 "calendar.m"
    mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 1)));
#line 852 "calendar.m"
    mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 2)));
#line 852 "calendar.m"
    mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 3)));
#line 852 "calendar.m"
    mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 4)));
#line 852 "calendar.m"
    mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 5)));
#line 852 "calendar.m"
    mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 6)));
#line 852 "calendar.m"
    {
#line 852 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 852 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 0) = ((MR_Box) (mercury__calendar__V_111_111));
#line 852 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 1) = ((MR_Box) (mercury__calendar__V_112_112));
#line 852 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 2) = ((MR_Box) (mercury__calendar__V_113_113));
#line 852 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 3) = ((MR_Box) (mercury__calendar__V_114_114));
#line 852 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 4) = ((MR_Box) (mercury__calendar__V_115_115));
#line 852 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 5) = ((MR_Box) (mercury__calendar__V_116_116));
#line 852 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 6) = ((MR_Box) (mercury__calendar__V_36_36));
#line 852 "calendar.m"
    }
#line 853 "calendar.m"
    {
#line 853 "calendar.m"
      mercury__calendar__V_39_39 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 853 "calendar.m"
    {
#line 853 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_38_38 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_32_32, mercury__calendar__V_39_39);
    }
#line 855 "calendar.m"
    mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 855 "calendar.m"
    mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 855 "calendar.m"
    mercury__calendar__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 855 "calendar.m"
    mercury__calendar__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 855 "calendar.m"
    mercury__calendar__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 855 "calendar.m"
    mercury__calendar__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 855 "calendar.m"
    mercury__calendar__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 855 "calendar.m"
    mercury__calendar__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 855 "calendar.m"
    mercury__calendar__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 855 "calendar.m"
    mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 855 "calendar.m"
    mercury__calendar__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 855 "calendar.m"
    mercury__calendar__V_41_41 = (mercury__calendar__V_42_42 + mercury__calendar__V_43_43);
#line 855 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_40_40 = (mercury__calendar__V_41_41 + mercury__calendar__STATE_VARIABLE_Carry_38_38);
#line 856 "calendar.m"
    {
#line 856 "calendar.m"
      mercury__calendar__V_45_45 = mercury__calendar__modulo_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    }
#line 856 "calendar.m"
    mercury__calendar__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 0)));
#line 856 "calendar.m"
    mercury__calendar__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 1)));
#line 856 "calendar.m"
    mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 2)));
#line 856 "calendar.m"
    mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 3)));
#line 856 "calendar.m"
    mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 4)));
#line 856 "calendar.m"
    mercury__calendar__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 5)));
#line 856 "calendar.m"
    mercury__calendar__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 6)));
#line 856 "calendar.m"
    {
#line 856 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 0) = ((MR_Box) (mercury__calendar__V_127_127));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 1) = ((MR_Box) (mercury__calendar__V_128_128));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 2) = ((MR_Box) (mercury__calendar__V_129_129));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 3) = ((MR_Box) (mercury__calendar__V_130_130));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 4) = ((MR_Box) (mercury__calendar__V_131_131));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 5) = ((MR_Box) (mercury__calendar__V_45_45));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 6) = ((MR_Box) (mercury__calendar__V_133_133));
#line 856 "calendar.m"
    }
#line 857 "calendar.m"
    {
#line 857 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_47_47 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    }
#line 859 "calendar.m"
    mercury__calendar__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 859 "calendar.m"
    mercury__calendar__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 859 "calendar.m"
    mercury__calendar__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 859 "calendar.m"
    mercury__calendar__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 859 "calendar.m"
    mercury__calendar__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 859 "calendar.m"
    mercury__calendar__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 859 "calendar.m"
    mercury__calendar__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 859 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_49_49 = (mercury__calendar__V_50_50 + mercury__calendar__STATE_VARIABLE_Carry_47_47);
#line 860 "calendar.m"
    {
#line 860 "calendar.m"
      mercury__calendar__V_52_52 = mercury__int__mod_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    }
#line 860 "calendar.m"
    mercury__calendar__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 0)));
#line 860 "calendar.m"
    mercury__calendar__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 1)));
#line 860 "calendar.m"
    mercury__calendar__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 2)));
#line 860 "calendar.m"
    mercury__calendar__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 3)));
#line 860 "calendar.m"
    mercury__calendar__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 4)));
#line 860 "calendar.m"
    mercury__calendar__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 5)));
#line 860 "calendar.m"
    mercury__calendar__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 6)));
#line 860 "calendar.m"
    {
#line 860 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 0) = ((MR_Box) (mercury__calendar__V_140_140));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 1) = ((MR_Box) (mercury__calendar__V_141_141));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 2) = ((MR_Box) (mercury__calendar__V_142_142));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 3) = ((MR_Box) (mercury__calendar__V_143_143));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 4) = ((MR_Box) (mercury__calendar__V_52_52));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 5) = ((MR_Box) (mercury__calendar__V_145_145));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 6) = ((MR_Box) (mercury__calendar__V_146_146));
#line 860 "calendar.m"
    }
#line 861 "calendar.m"
    {
#line 861 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_54_54 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    }
#line 863 "calendar.m"
    mercury__calendar__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 863 "calendar.m"
    mercury__calendar__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 863 "calendar.m"
    mercury__calendar__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 863 "calendar.m"
    mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 863 "calendar.m"
    mercury__calendar__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 863 "calendar.m"
    mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 863 "calendar.m"
    mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 863 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_56_56 = (mercury__calendar__V_57_57 + mercury__calendar__STATE_VARIABLE_Carry_54_54);
#line 864 "calendar.m"
    {
#line 864 "calendar.m"
      mercury__calendar__V_59_59 = mercury__int__mod_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    }
#line 864 "calendar.m"
    mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 0)));
#line 864 "calendar.m"
    mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 1)));
#line 864 "calendar.m"
    mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 2)));
#line 864 "calendar.m"
    mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 3)));
#line 864 "calendar.m"
    mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 4)));
#line 864 "calendar.m"
    mercury__calendar__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 5)));
#line 864 "calendar.m"
    mercury__calendar__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 6)));
#line 864 "calendar.m"
    {
#line 864 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 0) = ((MR_Box) (mercury__calendar__V_153_153));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 1) = ((MR_Box) (mercury__calendar__V_154_154));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 2) = ((MR_Box) (mercury__calendar__V_155_155));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 3) = ((MR_Box) (mercury__calendar__V_59_59));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 4) = ((MR_Box) (mercury__calendar__V_157_157));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 5) = ((MR_Box) (mercury__calendar__V_158_158));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 6) = ((MR_Box) (mercury__calendar__V_159_159));
#line 864 "calendar.m"
    }
#line 865 "calendar.m"
    {
#line 865 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_61_61 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    }
#line 867 "calendar.m"
    mercury__calendar__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
#line 867 "calendar.m"
    mercury__calendar__V_160_160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
#line 867 "calendar.m"
    mercury__calendar__V_161_161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
#line 867 "calendar.m"
    mercury__calendar__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
#line 867 "calendar.m"
    mercury__calendar__V_163_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
#line 867 "calendar.m"
    mercury__calendar__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
#line 867 "calendar.m"
    mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
#line 867 "calendar.m"
    {
#line 867 "calendar.m"
      mercury__calendar__MaxDaysInMonth_9 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_63_63, mercury__calendar__V_160_160);
    }
#line 868 "calendar.m"
    mercury__calendar__V_172_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 868 "calendar.m"
    mercury__calendar__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 868 "calendar.m"
    mercury__calendar__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 868 "calendar.m"
    mercury__calendar__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 868 "calendar.m"
    mercury__calendar__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 868 "calendar.m"
    mercury__calendar__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 868 "calendar.m"
    mercury__calendar__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 868 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__V_65_65 > mercury__calendar__MaxDaysInMonth_9);
#line 870 "calendar.m"
    if (mercury__calendar__succeeded)
#line 869 "calendar.m"
      mercury__calendar__TempDays_10 = mercury__calendar__MaxDaysInMonth_9;
#line 870 "calendar.m"
    else
#line 872 "calendar.m"
      {
#line 870 "calendar.m"
        MR_Integer mercury__calendar__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 870 "calendar.m"
        MR_Integer mercury__calendar__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 870 "calendar.m"
        MR_Integer mercury__calendar__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 870 "calendar.m"
        MR_Integer mercury__calendar__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 870 "calendar.m"
        MR_Integer mercury__calendar__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 870 "calendar.m"
        MR_Integer mercury__calendar__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 870 "calendar.m"
        MR_Integer mercury__calendar__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));

#line 870 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_66_66 < (MR_Integer) 1);
#line 872 "calendar.m"
        if (mercury__calendar__succeeded)
#line 871 "calendar.m"
          mercury__calendar__TempDays_10 = (MR_Integer) 1;
#line 872 "calendar.m"
        else
#line 873 "calendar.m"
          {
#line 873 "calendar.m"
            MR_Integer mercury__calendar__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 873 "calendar.m"
            MR_Integer mercury__calendar__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 873 "calendar.m"
            MR_Integer mercury__calendar__V_186_186;
#line 873 "calendar.m"
            MR_Integer mercury__calendar__V_187_187;
#line 873 "calendar.m"
            MR_Integer mercury__calendar__V_188_188;
#line 873 "calendar.m"
            MR_Integer mercury__calendar__V_189_189;

#line 873 "calendar.m"
            mercury__calendar__TempDays_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 873 "calendar.m"
            mercury__calendar__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 873 "calendar.m"
            mercury__calendar__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 873 "calendar.m"
            mercury__calendar__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 873 "calendar.m"
            mercury__calendar__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 873 "calendar.m"
          }
#line 872 "calendar.m"
      }
#line 875 "calendar.m"
    mercury__calendar__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 875 "calendar.m"
    mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 875 "calendar.m"
    mercury__calendar__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 875 "calendar.m"
    mercury__calendar__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 875 "calendar.m"
    mercury__calendar__V_70_70 = (mercury__calendar__TempDays_10 + mercury__calendar__V_71_71);
#line 875 "calendar.m"
    mercury__calendar__V_69_69 = (mercury__calendar__V_70_70 + mercury__calendar__STATE_VARIABLE_Carry_61_61);
#line 875 "calendar.m"
    mercury__calendar__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
#line 875 "calendar.m"
    mercury__calendar__V_194_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
#line 875 "calendar.m"
    mercury__calendar__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
#line 875 "calendar.m"
    mercury__calendar__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
#line 875 "calendar.m"
    mercury__calendar__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
#line 875 "calendar.m"
    mercury__calendar__V_198_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
#line 875 "calendar.m"
    mercury__calendar__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
#line 875 "calendar.m"
    {
#line 875 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 875 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 0) = ((MR_Box) (mercury__calendar__V_193_193));
#line 875 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 1) = ((MR_Box) (mercury__calendar__V_194_194));
#line 875 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 2) = ((MR_Box) (mercury__calendar__V_69_69));
#line 875 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 3) = ((MR_Box) (mercury__calendar__V_196_196));
#line 875 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 4) = ((MR_Box) (mercury__calendar__V_197_197));
#line 875 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 5) = ((MR_Box) (mercury__calendar__V_198_198));
#line 875 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 6) = ((MR_Box) (mercury__calendar__V_199_199));
#line 875 "calendar.m"
    }
#line 876 "calendar.m"
    {
#line 876 "calendar.m"
      mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__calendar__STATE_VARIABLE_E_68_68, mercury__calendar__E_6);
#line 876 "calendar.m"
      return;
    }
#line 843 "calendar.m"
  }
#line 257 "calendar.m"
}

#line 247 "calendar.m"
MR_String MR_CALL 
mercury__calendar__duration_to_string_1_f_0(
#line 247 "calendar.m"
  MR_Word mercury__calendar__Duration_1)
#line 247 "calendar.m"
{
#line 699 "calendar.m"
  {
#line 699 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 699 "calendar.m"
    MR_String mercury__calendar__Str_8;
#line 699 "calendar.m"
    MR_Integer mercury__calendar__Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 699 "calendar.m"
    MR_Integer mercury__calendar__Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 699 "calendar.m"
    MR_Integer mercury__calendar__Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 699 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));

#line 701 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Months_3 == (MR_Integer) 0);
#line 701 "calendar.m"
    if (mercury__calendar__succeeded)
#line 701 "calendar.m"
      {
#line 702 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Days_4 == (MR_Integer) 0);
#line 701 "calendar.m"
        if (mercury__calendar__succeeded)
#line 701 "calendar.m"
          {
#line 703 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Seconds_5 == (MR_Integer) 0);
#line 701 "calendar.m"
            if (mercury__calendar__succeeded)
#line 704 "calendar.m"
              mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 == (MR_Integer) 0);
#line 701 "calendar.m"
          }
#line 701 "calendar.m"
      }
#line 709 "calendar.m"
    if (mercury__calendar__succeeded)
#line 708 "calendar.m"
      mercury__calendar__Str_8 = (MR_String) "P0D";
#line 709 "calendar.m"
    else
#line 728 "calendar.m"
      {
#line 728 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_59_59;
#line 728 "calendar.m"
        MR_Integer mercury__calendar__Sign_9;
#line 728 "calendar.m"
        MR_String mercury__calendar__SignStr_10;
#line 728 "calendar.m"
        MR_Word mercury__calendar__TimePart_11;
#line 728 "calendar.m"
        MR_Word mercury__calendar__V_39_39;
#line 728 "calendar.m"
        MR_Word mercury__calendar__V_40_40;
#line 728 "calendar.m"
        MR_Word mercury__calendar__V_41_41;
#line 728 "calendar.m"
        MR_Word mercury__calendar__V_43_43;
#line 728 "calendar.m"
        MR_String mercury__calendar__V_44_44;
#line 728 "calendar.m"
        MR_Integer mercury__calendar__V_45_45;
#line 728 "calendar.m"
        MR_Integer mercury__calendar__V_46_46;
#line 728 "calendar.m"
        MR_Word mercury__calendar__V_48_48;
#line 728 "calendar.m"
        MR_String mercury__calendar__V_49_49;
#line 728 "calendar.m"
        MR_Integer mercury__calendar__V_50_50;
#line 728 "calendar.m"
        MR_Integer mercury__calendar__V_51_51;
#line 728 "calendar.m"
        MR_Word mercury__calendar__V_53_53;
#line 728 "calendar.m"
        MR_String mercury__calendar__V_54_54;
#line 728 "calendar.m"
        MR_Integer mercury__calendar__V_55_55;
#line 728 "calendar.m"
        MR_Integer mercury__calendar__V_56_56;
#line 728 "calendar.m"
        MR_Word mercury__calendar__V_58_58;
#line 711 "calendar.m"
        MR_Integer mercury__calendar__V_13_13;
#line 711 "calendar.m"
        MR_Integer mercury__calendar__V_14_14;
#line 711 "calendar.m"
        MR_Integer mercury__calendar__V_15_15;
#line 1080 "calendar.m"
        MR_Integer mercury__calendar__V_93_93;
#line 1080 "calendar.m"
        MR_Integer mercury__calendar__V_94_94;
#line 1080 "calendar.m"
        MR_Integer mercury__calendar__V_95_95;

#line 711 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Months_3 >= (MR_Integer) 0);
#line 711 "calendar.m"
        if (mercury__calendar__succeeded)
#line 711 "calendar.m"
          {
#line 712 "calendar.m"
            mercury__calendar__V_13_13 = (MR_Integer) 0;
#line 712 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Days_4 >= mercury__calendar__V_13_13);
#line 711 "calendar.m"
            if (mercury__calendar__succeeded)
#line 711 "calendar.m"
              {
#line 713 "calendar.m"
                mercury__calendar__V_14_14 = (MR_Integer) 0;
#line 713 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Seconds_5 >= mercury__calendar__V_14_14);
#line 711 "calendar.m"
                if (mercury__calendar__succeeded)
#line 711 "calendar.m"
                  {
#line 714 "calendar.m"
                    mercury__calendar__V_15_15 = (MR_Integer) 0;
#line 714 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 >= mercury__calendar__V_15_15);
#line 711 "calendar.m"
                  }
#line 711 "calendar.m"
              }
#line 711 "calendar.m"
          }
#line 718 "calendar.m"
        if (mercury__calendar__succeeded)
#line 716 "calendar.m"
          {
#line 716 "calendar.m"
            mercury__calendar__Sign_9 = (MR_Integer) 1;
#line 717 "calendar.m"
            mercury__calendar__SignStr_10 = (MR_String) "";
#line 716 "calendar.m"
          }
#line 718 "calendar.m"
        else
#line 726 "calendar.m"
          {
#line 719 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 719 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 719 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;

#line 719 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Months_3 <= (MR_Integer) 0);
#line 719 "calendar.m"
            if (mercury__calendar__succeeded)
#line 719 "calendar.m"
              {
#line 720 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 720 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Days_4 <= mercury__calendar__V_17_17);
#line 719 "calendar.m"
                if (mercury__calendar__succeeded)
#line 719 "calendar.m"
                  {
#line 721 "calendar.m"
                    mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 721 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Seconds_5 <= mercury__calendar__V_18_18);
#line 719 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 719 "calendar.m"
                      {
#line 722 "calendar.m"
                        mercury__calendar__V_19_19 = (MR_Integer) 0;
#line 722 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 <= mercury__calendar__V_19_19);
#line 719 "calendar.m"
                      }
#line 719 "calendar.m"
                  }
#line 719 "calendar.m"
              }
#line 726 "calendar.m"
            if (mercury__calendar__succeeded)
#line 724 "calendar.m"
              {
#line 724 "calendar.m"
                mercury__calendar__Sign_9 = (MR_Integer) -1;
#line 725 "calendar.m"
                mercury__calendar__SignStr_10 = (MR_String) "-";
#line 724 "calendar.m"
              }
#line 726 "calendar.m"
            else
#line 727 "calendar.m"
              {
#line 727 "calendar.m"
                {
#line 727 "calendar.m"
                  mercury__require__error_1_p_0((MR_String) "duration_to_string: duration components have mixed signs");
                }
#line 727 "calendar.m"
              }
#line 726 "calendar.m"
          }
#line 730 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Seconds_5 == (MR_Integer) 0);
#line 730 "calendar.m"
        if (mercury__calendar__succeeded)
#line 731 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 == (MR_Integer) 0);
#line 734 "calendar.m"
        if (mercury__calendar__succeeded)
#line 733 "calendar.m"
          mercury__calendar__TimePart_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "calendar.m"
        else
#line 735 "calendar.m"
          {
#line 735 "calendar.m"
            MR_Word mercury__calendar__V_22_22;
#line 735 "calendar.m"
            MR_String mercury__calendar__V_23_23;
#line 735 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 735 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 735 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 735 "calendar.m"
            MR_String mercury__calendar__V_28_28;
#line 735 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 735 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 735 "calendar.m"
            MR_Word mercury__calendar__V_32_32;
#line 735 "calendar.m"
            MR_String mercury__calendar__V_33_33;
#line 735 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 735 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 735 "calendar.m"
            MR_Integer mercury__calendar__V_36_36;
#line 735 "calendar.m"
            MR_Integer mercury__calendar__V_37_37;
#line 735 "calendar.m"
            MR_Word mercury__calendar__V_38_38;
#line 1084 "calendar.m"
            MR_Integer mercury__calendar__V_89_89;
#line 1084 "calendar.m"
            MR_Integer mercury__calendar__V_90_90;
#line 1084 "calendar.m"
            MR_Integer mercury__calendar__V_91_91;

#line 736 "calendar.m"
            {
#line 736 "calendar.m"
              mercury__calendar__V_25_25 = mercury__calendar__hours_1_f_0(mercury__calendar__Duration_1);
            }
#line 736 "calendar.m"
            mercury__calendar__V_24_24 = (mercury__calendar__Sign_9 * mercury__calendar__V_25_25);
#line 752 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_24_24 == (MR_Integer) 0);
#line 751 "calendar.m"
            if (mercury__calendar__succeeded)
#line 753 "calendar.m"
              mercury__calendar__V_23_23 = (MR_String) "";
#line 751 "calendar.m"
            else
#line 755 "calendar.m"
              {
#line 755 "calendar.m"
                MR_String mercury__calendar__V_62_62;

#line 705 "string.opt"
                {
#line 705 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__calendar__V_24_24, (MR_Integer) 10, &mercury__calendar__V_62_62);
                }
#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2(mercury__calendar__V_62_62, (MR_String) "H", &mercury__calendar__V_23_23);
                }
#line 755 "calendar.m"
              }
#line 737 "calendar.m"
            {
#line 737 "calendar.m"
              mercury__calendar__V_30_30 = mercury__calendar__minutes_1_f_0(mercury__calendar__Duration_1);
            }
#line 737 "calendar.m"
            mercury__calendar__V_29_29 = (mercury__calendar__Sign_9 * mercury__calendar__V_30_30);
#line 752 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_29_29 == (MR_Integer) 0);
#line 751 "calendar.m"
            if (mercury__calendar__succeeded)
#line 753 "calendar.m"
              mercury__calendar__V_28_28 = (MR_String) "";
#line 751 "calendar.m"
            else
#line 755 "calendar.m"
              {
#line 755 "calendar.m"
                MR_String mercury__calendar__V_76_76;

#line 705 "string.opt"
                {
#line 705 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__calendar__V_29_29, (MR_Integer) 10, &mercury__calendar__V_76_76);
                }
#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2(mercury__calendar__V_76_76, (MR_String) "M", &mercury__calendar__V_28_28);
                }
#line 755 "calendar.m"
              }
#line 738 "calendar.m"
            {
#line 738 "calendar.m"
              mercury__calendar__V_35_35 = mercury__calendar__seconds_1_f_0(mercury__calendar__Duration_1);
            }
#line 738 "calendar.m"
            mercury__calendar__V_34_34 = (mercury__calendar__Sign_9 * mercury__calendar__V_35_35);
#line 1084 "calendar.m"
            mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 1084 "calendar.m"
            mercury__calendar__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 1084 "calendar.m"
            mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 1084 "calendar.m"
            mercury__calendar__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
#line 739 "calendar.m"
            mercury__calendar__V_36_36 = (mercury__calendar__Sign_9 * mercury__calendar__V_37_37);
#line 738 "calendar.m"
            {
#line 738 "calendar.m"
              mercury__calendar__V_33_33 = mercury__calendar__seconds_duration_string_2_f_0(mercury__calendar__V_34_34, mercury__calendar__V_36_36);
            }
#line 740 "calendar.m"
            mercury__calendar__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "calendar.m"
            {
#line 740 "calendar.m"
              mercury__calendar__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 0) = ((MR_Box) (mercury__calendar__V_33_33));
#line 740 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 1) = ((MR_Box) (mercury__calendar__V_38_38));
#line 740 "calendar.m"
            }
#line 737 "calendar.m"
            {
#line 737 "calendar.m"
              mercury__calendar__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 0) = ((MR_Box) (mercury__calendar__V_28_28));
#line 737 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 1) = ((MR_Box) (mercury__calendar__V_32_32));
#line 737 "calendar.m"
            }
#line 736 "calendar.m"
            {
#line 736 "calendar.m"
              mercury__calendar__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 0) = ((MR_Box) (mercury__calendar__V_23_23));
#line 736 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 1) = ((MR_Box) (mercury__calendar__V_27_27));
#line 736 "calendar.m"
            }
#line 735 "calendar.m"
            {
#line 735 "calendar.m"
              mercury__calendar__TimePart_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_11, 0) = ((MR_Box) ((MR_String) "T"));
#line 735 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_11, 1) = ((MR_Box) (mercury__calendar__V_22_22));
#line 735 "calendar.m"
            }
#line 735 "calendar.m"
          }
#line 12500 "calendar.c"
        mercury__calendar__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 744 "calendar.m"
        {
#line 744 "calendar.m"
          mercury__calendar__V_46_46 = mercury__calendar__years_1_f_0(mercury__calendar__Duration_1);
        }
#line 744 "calendar.m"
        mercury__calendar__V_45_45 = (mercury__calendar__Sign_9 * mercury__calendar__V_46_46);
#line 744 "calendar.m"
        {
#line 744 "calendar.m"
          mercury__calendar__V_44_44 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_45_45, (MR_String) "Y");
        }
#line 745 "calendar.m"
        {
#line 745 "calendar.m"
          mercury__calendar__V_51_51 = mercury__calendar__months_1_f_0(mercury__calendar__Duration_1);
        }
#line 745 "calendar.m"
        mercury__calendar__V_50_50 = (mercury__calendar__Sign_9 * mercury__calendar__V_51_51);
#line 745 "calendar.m"
        {
#line 745 "calendar.m"
          mercury__calendar__V_49_49 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_50_50, (MR_String) "M");
        }
#line 1080 "calendar.m"
        mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 1080 "calendar.m"
        mercury__calendar__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 1080 "calendar.m"
        mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 1080 "calendar.m"
        mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
#line 746 "calendar.m"
        mercury__calendar__V_55_55 = (mercury__calendar__Sign_9 * mercury__calendar__V_56_56);
#line 746 "calendar.m"
        {
#line 746 "calendar.m"
          mercury__calendar__V_54_54 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_55_55, (MR_String) "D");
        }
#line 746 "calendar.m"
        mercury__calendar__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 746 "calendar.m"
        {
#line 746 "calendar.m"
          mercury__calendar__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_53_53, 0) = ((MR_Box) (mercury__calendar__V_54_54));
#line 746 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_53_53, 1) = ((MR_Box) (mercury__calendar__V_58_58));
#line 746 "calendar.m"
        }
#line 745 "calendar.m"
        {
#line 745 "calendar.m"
          mercury__calendar__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_48_48, 0) = ((MR_Box) (mercury__calendar__V_49_49));
#line 745 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_48_48, 1) = ((MR_Box) (mercury__calendar__V_53_53));
#line 745 "calendar.m"
        }
#line 744 "calendar.m"
        {
#line 744 "calendar.m"
          mercury__calendar__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_43_43, 0) = ((MR_Box) (mercury__calendar__V_44_44));
#line 744 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_43_43, 1) = ((MR_Box) (mercury__calendar__V_48_48));
#line 744 "calendar.m"
        }
#line 743 "calendar.m"
        {
#line 743 "calendar.m"
          mercury__calendar__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_41_41, 0) = ((MR_Box) ((MR_String) "P"));
#line 743 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_41_41, 1) = ((MR_Box) (mercury__calendar__V_43_43));
#line 743 "calendar.m"
        }
#line 743 "calendar.m"
        {
#line 743 "calendar.m"
          mercury__calendar__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_40_40, 0) = ((MR_Box) (mercury__calendar__SignStr_10));
#line 743 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_40_40, 1) = ((MR_Box) (mercury__calendar__V_41_41));
#line 743 "calendar.m"
        }
#line 746 "calendar.m"
        {
#line 746 "calendar.m"
          mercury__calendar__V_39_39 = mercury__list__f_43_43_2_f_0(mercury__calendar__TypeCtorInfo_59_59, mercury__calendar__V_40_40, mercury__calendar__TimePart_11);
        }
#line 742 "calendar.m"
        {
#line 742 "calendar.m"
          return mercury__calendar__Str_8 = mercury__string__append_list_1_f_0(mercury__calendar__V_39_39);
        }
#line 728 "calendar.m"
      }
#line 699 "calendar.m"
    return mercury__calendar__Str_8;
#line 699 "calendar.m"
  }
#line 247 "calendar.m"
}

#line 242 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_duration_from_string_1_f_0(
#line 242 "calendar.m"
  MR_String mercury__calendar__Str_3)
#line 242 "calendar.m"
{
#line 664 "calendar.m"
  {
#line 664 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 664 "calendar.m"
    MR_Word mercury__calendar__Duration_4;
#line 664 "calendar.m"
    MR_Word mercury__calendar__Duration0_5;

#line 662 "calendar.m"
    {
#line 662 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__duration_from_string_2_p_0(mercury__calendar__Str_3, &mercury__calendar__Duration0_5);
    }
#line 664 "calendar.m"
    if (mercury__calendar__succeeded)
#line 663 "calendar.m"
      mercury__calendar__Duration_4 = mercury__calendar__Duration0_5;
#line 664 "calendar.m"
    else
#line 665 "calendar.m"
      {
#line 665 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_duration_from_string: invalid duration: ", mercury__calendar__Str_3, &mercury__calendar__V_6_6);
        }
#line 665 "calendar.m"
        {
#line 665 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 665 "calendar.m"
      }
#line 664 "calendar.m"
    return mercury__calendar__Duration_4;
#line 664 "calendar.m"
  }
#line 242 "calendar.m"
}

#line 238 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__duration_from_string_2_p_0(
#line 238 "calendar.m"
  MR_String mercury__calendar__Str_3,
#line 238 "calendar.m"
  MR_Word * mercury__calendar__Duration_4)
#line 238 "calendar.m"
{
#line 499 "calendar.m"
  {
#line 499 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 499 "calendar.m"
    MR_Integer mercury__calendar__Sign_6;
#line 499 "calendar.m"
    MR_Integer mercury__calendar__Years_7;
#line 499 "calendar.m"
    MR_Integer mercury__calendar__Months_8;
#line 499 "calendar.m"
    MR_Integer mercury__calendar__Days_9;
#line 499 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_17_17;
#line 499 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_18_18;
#line 499 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_20_20;
#line 499 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_21_21;
#line 499 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_22_22;
#line 499 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_23_23;
#line 499 "calendar.m"
    MR_Char mercury__calendar__V_44_44;
#line 499 "calendar.m"
    MR_Char mercury__calendar__V_61_61;
#line 527 "calendar.m"
    MR_Word mercury__calendar__Rest_52;
#line 524 "calendar.m"
    MR_Char mercury__calendar__V_53_53;
#line 587 "calendar.m"
    MR_Integer mercury__calendar__Int0_68;
#line 587 "calendar.m"
    MR_Word mercury__calendar__Rest_70;
#line 582 "calendar.m"
    MR_Word mercury__calendar__Chars1_69;
#line 582 "calendar.m"
    MR_Char mercury__calendar__V_72_72;
#line 582 "calendar.m"
    MR_Integer mercury__calendar__V_77_77;
#line 514 "calendar.m"
    MR_Word mercury__calendar__TimePart_10;
#line 505 "calendar.m"
    MR_Char mercury__calendar__V_24_24;
#line 505 "calendar.m"
    MR_Char mercury__calendar__V_45_45;

#line 139 "string.opt"
    {
#line 139 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__calendar__Str_3, &mercury__calendar__STATE_VARIABLE_Chars_17_17);
    }
#line 524 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 524 "calendar.m"
    if (mercury__calendar__succeeded)
#line 524 "calendar.m"
      {
#line 524 "calendar.m"
        mercury__calendar__V_53_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_17_17, (MR_Integer) 0)));
#line 524 "calendar.m"
        mercury__calendar__Rest_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_17_17, (MR_Integer) 1)));
#line 524 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_53_53 == (MR_Char) 45);
#line 524 "calendar.m"
      }
#line 527 "calendar.m"
    if (mercury__calendar__succeeded)
#line 525 "calendar.m"
      {
#line 525 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_18_18 = mercury__calendar__Rest_52;
#line 526 "calendar.m"
        mercury__calendar__Sign_6 = (MR_Integer) -1;
#line 525 "calendar.m"
      }
#line 527 "calendar.m"
    else
#line 528 "calendar.m"
      {
#line 528 "calendar.m"
        mercury__calendar__Sign_6 = (MR_Integer) 1;
#line 528 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_18_18 = mercury__calendar__STATE_VARIABLE_Chars_17_17;
#line 528 "calendar.m"
      }
#line 533 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 533 "calendar.m"
    if (mercury__calendar__succeeded)
#line 533 "calendar.m"
      {
#line 533 "calendar.m"
        mercury__calendar__V_44_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_18_18, (MR_Integer) 0)));
#line 533 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_18_18, (MR_Integer) 1)));
#line 501 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 80 == mercury__calendar__V_44_44);
#line 499 "calendar.m"
        if (mercury__calendar__succeeded)
#line 499 "calendar.m"
          {
#line 538 "calendar.m"
            mercury__calendar__V_61_61 = (MR_Char) 89;
#line 594 "calendar.m"
            mercury__calendar__V_77_77 = (MR_Integer) 0;
#line 594 "calendar.m"
            {
#line 594 "calendar.m"
              mercury__calendar__read_int_2_4_p_0(mercury__calendar__V_77_77, &mercury__calendar__Int0_68, mercury__calendar__STATE_VARIABLE_Chars_20_20, &mercury__calendar__Chars1_69);
            }
#line 583 "calendar.m"
            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_69)) == (MR_mktag((MR_Integer) 1)));
#line 583 "calendar.m"
            if (mercury__calendar__succeeded)
#line 583 "calendar.m"
              {
#line 583 "calendar.m"
                mercury__calendar__V_72_72 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_69, (MR_Integer) 0)));
#line 583 "calendar.m"
                mercury__calendar__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_69, (MR_Integer) 1)));
#line 583 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_61_61 == mercury__calendar__V_72_72);
#line 583 "calendar.m"
              }
#line 587 "calendar.m"
            if (mercury__calendar__succeeded)
#line 585 "calendar.m"
              {
#line 585 "calendar.m"
                mercury__calendar__STATE_VARIABLE_Chars_21_21 = mercury__calendar__Rest_70;
#line 586 "calendar.m"
                mercury__calendar__Years_7 = mercury__calendar__Int0_68;
#line 585 "calendar.m"
              }
#line 587 "calendar.m"
            else
#line 588 "calendar.m"
              {
#line 588 "calendar.m"
                mercury__calendar__Years_7 = (MR_Integer) 0;
#line 588 "calendar.m"
                mercury__calendar__STATE_VARIABLE_Chars_21_21 = mercury__calendar__STATE_VARIABLE_Chars_20_20;
#line 588 "calendar.m"
              }
#line 503 "calendar.m"
            {
#line 503 "calendar.m"
              mercury__calendar__read_months_3_p_0(&mercury__calendar__Months_8, mercury__calendar__STATE_VARIABLE_Chars_21_21, &mercury__calendar__STATE_VARIABLE_Chars_22_22);
            }
#line 504 "calendar.m"
            {
#line 504 "calendar.m"
              mercury__calendar__read_days_3_p_0(&mercury__calendar__Days_9, mercury__calendar__STATE_VARIABLE_Chars_22_22, &mercury__calendar__STATE_VARIABLE_Chars_23_23);
            }
#line 505 "calendar.m"
            mercury__calendar__V_24_24 = (MR_Char) 84;
#line 533 "calendar.m"
            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 533 "calendar.m"
            if (mercury__calendar__succeeded)
#line 533 "calendar.m"
              {
#line 533 "calendar.m"
                mercury__calendar__V_45_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_23_23, (MR_Integer) 0)));
#line 533 "calendar.m"
                mercury__calendar__TimePart_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_23_23, (MR_Integer) 1)));
#line 505 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_24_24 == mercury__calendar__V_45_45);
#line 533 "calendar.m"
              }
#line 514 "calendar.m"
            if (mercury__calendar__succeeded)
#line 506 "calendar.m"
              {
#line 506 "calendar.m"
                MR_Integer mercury__calendar__Hours_13;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__Minutes_14;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__Seconds_15;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__MicroSeconds_16;
#line 506 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_25_25;
#line 506 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_26_26;
#line 506 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_27_27;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__V_28_28;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__V_29_29;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__V_30_30;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__V_31_31;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__V_32_32;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__V_33_33;
#line 506 "calendar.m"
                MR_Integer mercury__calendar__V_34_34;
#line 506 "calendar.m"
                MR_Char mercury__calendar__V_11_11;
#line 506 "calendar.m"
                MR_Word mercury__calendar__V_12_12;

#line 506 "calendar.m"
                mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__TimePart_10)) == (MR_mktag((MR_Integer) 1)));
#line 506 "calendar.m"
                if (mercury__calendar__succeeded)
#line 506 "calendar.m"
                  {
#line 506 "calendar.m"
                    mercury__calendar__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_10, (MR_Integer) 0)));
#line 506 "calendar.m"
                    mercury__calendar__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_10, (MR_Integer) 1)));
#line 507 "calendar.m"
                    {
#line 507 "calendar.m"
                      mercury__calendar__read_hours_3_p_0(&mercury__calendar__Hours_13, mercury__calendar__TimePart_10, &mercury__calendar__STATE_VARIABLE_Chars_25_25);
                    }
#line 508 "calendar.m"
                    {
#line 508 "calendar.m"
                      mercury__calendar__read_minutes_3_p_0(&mercury__calendar__Minutes_14, mercury__calendar__STATE_VARIABLE_Chars_25_25, &mercury__calendar__STATE_VARIABLE_Chars_26_26);
                    }
#line 509 "calendar.m"
                    {
#line 509 "calendar.m"
                      mercury__calendar__read_seconds_and_microseconds_4_p_0(&mercury__calendar__Seconds_15, &mercury__calendar__MicroSeconds_16, mercury__calendar__STATE_VARIABLE_Chars_26_26, &mercury__calendar__STATE_VARIABLE_Chars_27_27);
                    }
#line 510 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 506 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 506 "calendar.m"
                      {
#line 511 "calendar.m"
                        mercury__calendar__V_28_28 = (mercury__calendar__Sign_6 * mercury__calendar__Years_7);
#line 511 "calendar.m"
                        mercury__calendar__V_29_29 = (mercury__calendar__Sign_6 * mercury__calendar__Months_8);
#line 512 "calendar.m"
                        mercury__calendar__V_30_30 = (mercury__calendar__Sign_6 * mercury__calendar__Days_9);
#line 512 "calendar.m"
                        mercury__calendar__V_31_31 = (mercury__calendar__Sign_6 * mercury__calendar__Hours_13);
#line 512 "calendar.m"
                        mercury__calendar__V_32_32 = (mercury__calendar__Sign_6 * mercury__calendar__Minutes_14);
#line 512 "calendar.m"
                        mercury__calendar__V_33_33 = (mercury__calendar__Sign_6 * mercury__calendar__Seconds_15);
#line 513 "calendar.m"
                        mercury__calendar__V_34_34 = (mercury__calendar__Sign_6 * mercury__calendar__MicroSeconds_16);
#line 511 "calendar.m"
                        {
#line 511 "calendar.m"
                          *mercury__calendar__Duration_4 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_28_28, mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34);
                        }
#line 511 "calendar.m"
                        mercury__calendar__succeeded = MR_TRUE;
#line 506 "calendar.m"
                      }
#line 506 "calendar.m"
                  }
#line 506 "calendar.m"
              }
#line 514 "calendar.m"
            else
#line 515 "calendar.m"
              {
#line 515 "calendar.m"
                MR_Integer mercury__calendar__V_35_35;
#line 515 "calendar.m"
                MR_Integer mercury__calendar__V_36_36;
#line 515 "calendar.m"
                MR_Integer mercury__calendar__V_37_37;
#line 515 "calendar.m"
                MR_Integer mercury__calendar__V_38_38;
#line 515 "calendar.m"
                MR_Integer mercury__calendar__V_39_39;
#line 515 "calendar.m"
                MR_Integer mercury__calendar__V_40_40;
#line 515 "calendar.m"
                MR_Integer mercury__calendar__V_41_41;

#line 515 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "calendar.m"
                if (mercury__calendar__succeeded)
#line 515 "calendar.m"
                  {
#line 516 "calendar.m"
                    mercury__calendar__V_35_35 = (mercury__calendar__Sign_6 * mercury__calendar__Years_7);
#line 516 "calendar.m"
                    mercury__calendar__V_36_36 = (mercury__calendar__Sign_6 * mercury__calendar__Months_8);
#line 516 "calendar.m"
                    mercury__calendar__V_37_37 = (mercury__calendar__Sign_6 * mercury__calendar__Days_9);
#line 517 "calendar.m"
                    mercury__calendar__V_38_38 = (MR_Integer) 0;
#line 517 "calendar.m"
                    mercury__calendar__V_39_39 = (MR_Integer) 0;
#line 517 "calendar.m"
                    mercury__calendar__V_40_40 = (MR_Integer) 0;
#line 517 "calendar.m"
                    mercury__calendar__V_41_41 = (MR_Integer) 0;
#line 516 "calendar.m"
                    {
#line 516 "calendar.m"
                      *mercury__calendar__Duration_4 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_35_35, mercury__calendar__V_36_36, mercury__calendar__V_37_37, mercury__calendar__V_38_38, mercury__calendar__V_39_39, mercury__calendar__V_40_40, mercury__calendar__V_41_41);
                    }
#line 516 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 515 "calendar.m"
                  }
#line 515 "calendar.m"
              }
#line 499 "calendar.m"
          }
#line 533 "calendar.m"
      }
#line 499 "calendar.m"
    return mercury__calendar__succeeded;
#line 499 "calendar.m"
  }
#line 238 "calendar.m"
}

#line 213 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__negate_1_f_0(
#line 213 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1)
#line 213 "calendar.m"
{
#line 1173 "calendar.m"
  {
#line 1173 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1173 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1173 "calendar.m"
    MR_Integer mercury__calendar__Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1173 "calendar.m"
    MR_Integer mercury__calendar__Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1173 "calendar.m"
    MR_Integer mercury__calendar__Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1173 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1173 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) 0 - mercury__calendar__Months_3);
#line 1173 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) 0 - mercury__calendar__Days_4);
#line 1173 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) 0 - mercury__calendar__Seconds_5);
#line 1173 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_6);

#line 1174 "calendar.m"
    {
#line 1174 "calendar.m"
      mercury__calendar__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 0) = ((MR_Box) (mercury__calendar__V_7_7));
#line 1174 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 1) = ((MR_Box) (mercury__calendar__V_8_8));
#line 1174 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 2) = ((MR_Box) (mercury__calendar__V_9_9));
#line 1174 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 3) = ((MR_Box) (mercury__calendar__V_10_10));
#line 1174 "calendar.m"
    }
#line 1173 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1173 "calendar.m"
  }
#line 213 "calendar.m"
}

#line 209 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__zero_duration_0_f_0(void)
#line 209 "calendar.m"
{
#line 1176 "calendar.m"
  {
#line 1176 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1176 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_3[1];

#line 1176 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 1176 "calendar.m"
  }
#line 209 "calendar.m"
}

#line 203 "calendar.m"
void MR_CALL 
mercury__calendar__unpack_duration_8_p_0(
#line 203 "calendar.m"
  MR_Word mercury__calendar__Duration_9,
#line 203 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__2_2,
#line 203 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__3_3,
#line 203 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__4_4,
#line 203 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__5_5,
#line 203 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__6_6,
#line 203 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__7_7,
#line 203 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__8_8)
#line 203 "calendar.m"
{
#line 649 "calendar.m"
  {
#line 649 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_11_11;
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_12_12;
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_13_13;
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_15_15;
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_16_16;
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_17_17;

#line 650 "calendar.m"
    {
#line 650 "calendar.m"
      *mercury__calendar__HeadVar__2_2 = mercury__calendar__years_1_f_0(mercury__calendar__Duration_9);
    }
#line 650 "calendar.m"
    {
#line 650 "calendar.m"
      *mercury__calendar__HeadVar__3_3 = mercury__calendar__months_1_f_0(mercury__calendar__Duration_9);
    }
#line 1080 "calendar.m"
    mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 0)));
#line 1080 "calendar.m"
    *mercury__calendar__HeadVar__4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 1)));
#line 1080 "calendar.m"
    mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 2)));
#line 1080 "calendar.m"
    mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 3)));
#line 650 "calendar.m"
    {
#line 650 "calendar.m"
      *mercury__calendar__HeadVar__5_5 = mercury__calendar__hours_1_f_0(mercury__calendar__Duration_9);
    }
#line 651 "calendar.m"
    {
#line 651 "calendar.m"
      *mercury__calendar__HeadVar__6_6 = mercury__calendar__minutes_1_f_0(mercury__calendar__Duration_9);
    }
#line 651 "calendar.m"
    {
#line 651 "calendar.m"
      *mercury__calendar__HeadVar__7_7 = mercury__calendar__seconds_1_f_0(mercury__calendar__Duration_9);
    }
#line 1084 "calendar.m"
    mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 0)));
#line 1084 "calendar.m"
    mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 1)));
#line 1084 "calendar.m"
    mercury__calendar__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 2)));
#line 1084 "calendar.m"
    *mercury__calendar__HeadVar__8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 3)));
#line 649 "calendar.m"
  }
#line 203 "calendar.m"
}

#line 198 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__init_duration_7_f_0(
#line 198 "calendar.m"
  MR_Integer mercury__calendar__Years0_9,
#line 198 "calendar.m"
  MR_Integer mercury__calendar__Months0_10,
#line 198 "calendar.m"
  MR_Integer mercury__calendar__Days0_11,
#line 198 "calendar.m"
  MR_Integer mercury__calendar__Hours0_12,
#line 198 "calendar.m"
  MR_Integer mercury__calendar__Minutes0_13,
#line 198 "calendar.m"
  MR_Integer mercury__calendar__Seconds0_14,
#line 198 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds0_15)
#line 198 "calendar.m"
{
#line 611 "calendar.m"
  {
#line 611 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 611 "calendar.m"
    MR_Word mercury__calendar__HeadVar__8_8;
#line 611 "calendar.m"
    MR_Integer mercury__calendar__Months_16;
#line 611 "calendar.m"
    MR_Integer mercury__calendar__Days_17;
#line 611 "calendar.m"
    MR_Integer mercury__calendar__Seconds_18;
#line 611 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_19;

#line 614 "calendar.m"
    {
#line 614 "calendar.m"
      MR_Integer mercury__calendar__V_30_30;
#line 614 "calendar.m"
      MR_Integer mercury__calendar__V_31_31;
#line 614 "calendar.m"
      MR_Integer mercury__calendar__V_32_32;
#line 614 "calendar.m"
      MR_Integer mercury__calendar__V_33_33;
#line 614 "calendar.m"
      MR_Integer mercury__calendar__V_34_34;
#line 614 "calendar.m"
      MR_Integer mercury__calendar__V_35_35;

#line 614 "calendar.m"
      mercury__calendar__succeeded = (mercury__calendar__Years0_9 >= (MR_Integer) 0);
#line 614 "calendar.m"
      if (mercury__calendar__succeeded)
#line 614 "calendar.m"
        {
#line 615 "calendar.m"
          mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 615 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__Months0_10 >= mercury__calendar__V_30_30);
#line 614 "calendar.m"
          if (mercury__calendar__succeeded)
#line 614 "calendar.m"
            {
#line 616 "calendar.m"
              mercury__calendar__V_31_31 = (MR_Integer) 0;
#line 616 "calendar.m"
              mercury__calendar__succeeded = (mercury__calendar__Days0_11 >= mercury__calendar__V_31_31);
#line 614 "calendar.m"
              if (mercury__calendar__succeeded)
#line 614 "calendar.m"
                {
#line 617 "calendar.m"
                  mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 617 "calendar.m"
                  mercury__calendar__succeeded = (mercury__calendar__Hours0_12 >= mercury__calendar__V_32_32);
#line 614 "calendar.m"
                  if (mercury__calendar__succeeded)
#line 614 "calendar.m"
                    {
#line 618 "calendar.m"
                      mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 618 "calendar.m"
                      mercury__calendar__succeeded = (mercury__calendar__Minutes0_13 >= mercury__calendar__V_33_33);
#line 614 "calendar.m"
                      if (mercury__calendar__succeeded)
#line 614 "calendar.m"
                        {
#line 619 "calendar.m"
                          mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 619 "calendar.m"
                          mercury__calendar__succeeded = (mercury__calendar__Seconds0_14 >= mercury__calendar__V_34_34);
#line 614 "calendar.m"
                          if (mercury__calendar__succeeded)
#line 614 "calendar.m"
                            {
#line 620 "calendar.m"
                              mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 620 "calendar.m"
                              mercury__calendar__succeeded = (mercury__calendar__MicroSeconds0_15 >= mercury__calendar__V_35_35);
#line 614 "calendar.m"
                            }
#line 614 "calendar.m"
                        }
#line 614 "calendar.m"
                    }
#line 614 "calendar.m"
                }
#line 614 "calendar.m"
            }
#line 614 "calendar.m"
        }
#line 614 "calendar.m"
    }
#line 621 "calendar.m"
    if (!(mercury__calendar__succeeded))
#line 622 "calendar.m"
      {
#line 622 "calendar.m"
        MR_Integer mercury__calendar__V_23_23;
#line 622 "calendar.m"
        MR_Integer mercury__calendar__V_24_24;
#line 622 "calendar.m"
        MR_Integer mercury__calendar__V_25_25;
#line 622 "calendar.m"
        MR_Integer mercury__calendar__V_26_26;
#line 622 "calendar.m"
        MR_Integer mercury__calendar__V_27_27;
#line 622 "calendar.m"
        MR_Integer mercury__calendar__V_28_28;

#line 622 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Years0_9 <= (MR_Integer) 0);
#line 622 "calendar.m"
        if (mercury__calendar__succeeded)
#line 622 "calendar.m"
          {
#line 623 "calendar.m"
            mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 623 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Months0_10 <= mercury__calendar__V_23_23);
#line 622 "calendar.m"
            if (mercury__calendar__succeeded)
#line 622 "calendar.m"
              {
#line 624 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 624 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Days0_11 <= mercury__calendar__V_24_24);
#line 622 "calendar.m"
                if (mercury__calendar__succeeded)
#line 622 "calendar.m"
                  {
#line 625 "calendar.m"
                    mercury__calendar__V_25_25 = (MR_Integer) 0;
#line 625 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Hours0_12 <= mercury__calendar__V_25_25);
#line 622 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 622 "calendar.m"
                      {
#line 626 "calendar.m"
                        mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 626 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__Minutes0_13 <= mercury__calendar__V_26_26);
#line 622 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 622 "calendar.m"
                          {
#line 627 "calendar.m"
                            mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 627 "calendar.m"
                            mercury__calendar__succeeded = (mercury__calendar__Seconds0_14 <= mercury__calendar__V_27_27);
#line 622 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 622 "calendar.m"
                              {
#line 628 "calendar.m"
                                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 628 "calendar.m"
                                mercury__calendar__succeeded = (mercury__calendar__MicroSeconds0_15 <= mercury__calendar__V_28_28);
#line 622 "calendar.m"
                              }
#line 622 "calendar.m"
                          }
#line 622 "calendar.m"
                      }
#line 622 "calendar.m"
                  }
#line 622 "calendar.m"
              }
#line 622 "calendar.m"
          }
#line 622 "calendar.m"
      }
#line 637 "calendar.m"
    if (mercury__calendar__succeeded)
#line 631 "calendar.m"
      {
#line 631 "calendar.m"
        MR_Integer mercury__calendar__Seconds1_20;
#line 631 "calendar.m"
        MR_Integer mercury__calendar__Seconds2_21;
#line 631 "calendar.m"
        MR_Integer mercury__calendar__V_36_36 = (mercury__calendar__Years0_9 * (MR_Integer) 12);
#line 631 "calendar.m"
        MR_Integer mercury__calendar__V_38_38;
#line 631 "calendar.m"
        MR_Integer mercury__calendar__V_41_41;
#line 631 "calendar.m"
        MR_Integer mercury__calendar__V_42_42;
#line 631 "calendar.m"
        MR_Integer mercury__calendar__V_44_44;
#line 631 "calendar.m"
        MR_Integer mercury__calendar__V_46_46;

#line 631 "calendar.m"
        mercury__calendar__Months_16 = (mercury__calendar__V_36_36 + mercury__calendar__Months0_10);
#line 105 "int.opt"
        mercury__calendar__V_38_38 = (mercury__calendar__MicroSeconds0_15 / (MR_Integer) 1000000);
#line 632 "calendar.m"
        mercury__calendar__Seconds1_20 = (mercury__calendar__Seconds0_14 + mercury__calendar__V_38_38);
#line 124 "int.opt"
        mercury__calendar__MicroSeconds_19 = (mercury__calendar__MicroSeconds0_15 % (MR_Integer) 1000000);
#line 634 "calendar.m"
        mercury__calendar__V_42_42 = (mercury__calendar__Minutes0_13 * (MR_Integer) 60);
#line 634 "calendar.m"
        mercury__calendar__V_41_41 = (mercury__calendar__Seconds1_20 + mercury__calendar__V_42_42);
#line 634 "calendar.m"
        mercury__calendar__V_44_44 = (mercury__calendar__Hours0_12 * (MR_Integer) 3600);
#line 634 "calendar.m"
        mercury__calendar__Seconds2_21 = (mercury__calendar__V_41_41 + mercury__calendar__V_44_44);
#line 105 "int.opt"
        mercury__calendar__V_46_46 = (mercury__calendar__Seconds2_21 / (MR_Integer) 86400);
#line 635 "calendar.m"
        mercury__calendar__Days_17 = (mercury__calendar__Days0_11 + mercury__calendar__V_46_46);
#line 124 "int.opt"
        mercury__calendar__Seconds_18 = (mercury__calendar__Seconds2_21 % (MR_Integer) 86400);
#line 631 "calendar.m"
      }
#line 637 "calendar.m"
    else
#line 638 "calendar.m"
      {
#line 638 "calendar.m"
        {
#line 638 "calendar.m"
          mercury__require__error_1_p_0((MR_String) "init_duration: some components negative and some positive");
        }
#line 638 "calendar.m"
      }
#line 611 "calendar.m"
    {
#line 611 "calendar.m"
      mercury__calendar__HeadVar__8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 611 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 0) = ((MR_Box) (mercury__calendar__Months_16));
#line 611 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 1) = ((MR_Box) (mercury__calendar__Days_17));
#line 611 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 2) = ((MR_Box) (mercury__calendar__Seconds_18));
#line 611 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 3) = ((MR_Box) (mercury__calendar__MicroSeconds_19));
#line 611 "calendar.m"
    }
#line 611 "calendar.m"
    return mercury__calendar__HeadVar__8_8;
#line 611 "calendar.m"
  }
#line 198 "calendar.m"
}

#line 191 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__microseconds_1_f_0(
#line 191 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 191 "calendar.m"
{
#line 1084 "calendar.m"
  {
#line 1084 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));

#line 1084 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1084 "calendar.m"
  }
#line 191 "calendar.m"
}

#line 190 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__seconds_1_f_0(
#line 190 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 190 "calendar.m"
{
#line 1083 "calendar.m"
  {
#line 1083 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1083 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1083 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1083 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1083 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1083 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 124 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 % (MR_Integer) 60);
#line 1083 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1083 "calendar.m"
  }
#line 190 "calendar.m"
}

#line 189 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__minutes_1_f_0(
#line 189 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 189 "calendar.m"
{
#line 1082 "calendar.m"
  {
#line 1082 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__V_4_4;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 124 "int.opt"
    mercury__calendar__V_4_4 = (mercury__calendar__V_5_5 % (MR_Integer) 3600);
#line 105 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 60);
#line 1082 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1082 "calendar.m"
  }
#line 189 "calendar.m"
}

#line 188 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__hours_1_f_0(
#line 188 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 188 "calendar.m"
{
#line 1081 "calendar.m"
  {
#line 1081 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1081 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1081 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1081 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1081 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1081 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 105 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 3600);
#line 1081 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1081 "calendar.m"
  }
#line 188 "calendar.m"
}

#line 187 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__days_1_f_0(
#line 187 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 187 "calendar.m"
{
#line 1080 "calendar.m"
  {
#line 1080 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 1080 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1080 "calendar.m"
  }
#line 187 "calendar.m"
}

#line 186 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__months_1_f_0(
#line 186 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 186 "calendar.m"
{
#line 1079 "calendar.m"
  {
#line 1079 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 124 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 % (MR_Integer) 12);
#line 1079 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1079 "calendar.m"
  }
#line 186 "calendar.m"
}

#line 185 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__years_1_f_0(
#line 185 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 185 "calendar.m"
{
#line 1078 "calendar.m"
  {
#line 1078 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 105 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 12);
#line 1078 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1078 "calendar.m"
  }
#line 185 "calendar.m"
}

#line 160 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__unix_epoch_0_f_0(void)
#line 160 "calendar.m"
{
#line 1190 "calendar.m"
  {
#line 1190 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1190 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_5[0];

#line 1190 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 1190 "calendar.m"
  }
#line 160 "calendar.m"
}

#line 156 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__julian_day_number_1_f_0(
#line 156 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1)
#line 156 "calendar.m"
{
#line 1049 "calendar.m"
  {
#line 1049 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__JDN_10;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__Year_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__Month_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__Day_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__A_11;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__Y_12;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__M_13;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) 14 - mercury__calendar__Month_4);
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_17_17;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_19_19;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_20_20;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_25_25;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_26_26;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_27_27;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_28_28;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_29_29;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_38_38;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_40_40;
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 1049 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));

#line 1050 "calendar.m"
    {
#line 1050 "calendar.m"
      mercury__calendar__A_11 = mercury__int__div_2_f_0(mercury__calendar__V_14_14, (MR_Integer) 12);
    }
#line 1051 "calendar.m"
    mercury__calendar__V_17_17 = (mercury__calendar__Year_3 + (MR_Integer) 4800);
#line 1051 "calendar.m"
    mercury__calendar__Y_12 = (mercury__calendar__V_17_17 - mercury__calendar__A_11);
#line 1052 "calendar.m"
    mercury__calendar__V_20_20 = ((MR_Integer) 12 * mercury__calendar__A_11);
#line 1052 "calendar.m"
    mercury__calendar__V_19_19 = (mercury__calendar__Month_4 + mercury__calendar__V_20_20);
#line 1052 "calendar.m"
    mercury__calendar__M_13 = (mercury__calendar__V_19_19 - (MR_Integer) 3);
#line 1053 "calendar.m"
    mercury__calendar__V_30_30 = ((MR_Integer) 153 * mercury__calendar__M_13);
#line 1053 "calendar.m"
    mercury__calendar__V_29_29 = (mercury__calendar__V_30_30 + (MR_Integer) 2);
#line 1053 "calendar.m"
    {
#line 1053 "calendar.m"
      mercury__calendar__V_28_28 = mercury__int__div_2_f_0(mercury__calendar__V_29_29, (MR_Integer) 5);
    }
#line 1053 "calendar.m"
    mercury__calendar__V_27_27 = (mercury__calendar__Day_5 + mercury__calendar__V_28_28);
#line 1053 "calendar.m"
    mercury__calendar__V_34_34 = ((MR_Integer) 365 * mercury__calendar__Y_12);
#line 1053 "calendar.m"
    mercury__calendar__V_26_26 = (mercury__calendar__V_27_27 + mercury__calendar__V_34_34);
#line 1053 "calendar.m"
    {
#line 1053 "calendar.m"
      mercury__calendar__V_36_36 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 4);
    }
#line 1053 "calendar.m"
    mercury__calendar__V_25_25 = (mercury__calendar__V_26_26 + mercury__calendar__V_36_36);
#line 1053 "calendar.m"
    {
#line 1053 "calendar.m"
      mercury__calendar__V_38_38 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 100);
    }
#line 1053 "calendar.m"
    mercury__calendar__V_24_24 = (mercury__calendar__V_25_25 - mercury__calendar__V_38_38);
#line 1054 "calendar.m"
    {
#line 1054 "calendar.m"
      mercury__calendar__V_40_40 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 400);
    }
#line 1053 "calendar.m"
    mercury__calendar__V_23_23 = (mercury__calendar__V_24_24 + mercury__calendar__V_40_40);
#line 1054 "calendar.m"
    mercury__calendar__JDN_10 = (mercury__calendar__V_23_23 - (MR_Integer) 32045);
#line 1049 "calendar.m"
    return mercury__calendar__JDN_10;
#line 1049 "calendar.m"
  }
#line 156 "calendar.m"
}

#line 152 "calendar.m"
void MR_CALL 
mercury__calendar__current_utc_time_3_p_0(
#line 152 "calendar.m"
  MR_Word * mercury__calendar__Now_4)
#line 152 "calendar.m"
{
#line 1148 "calendar.m"
  {
#line 1148 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1148 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1148 "calendar.m"
    MR_Box mercury__calendar__Time_3_12;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__N_13_21;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__TMYear_25;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_26;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__Year_34;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__Month_35;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__Day_36;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__Hour_37;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__Minute_38;
#line 1148 "calendar.m"
    MR_Integer mercury__calendar__Second_39;
#line 127 "time.opt"
    MR_Integer mercury__calendar__YD_11_19;
#line 127 "time.opt"
    MR_Integer mercury__calendar__WD_12_20;
#line 96 "time.opt"
    MR_Word mercury__calendar__V_14_22;

#line 1149 "calendar.m"
    {
#line 1149 "calendar.m"
      mercury__time__time_3_p_0(&mercury__calendar__TimeT_6);
    }
#line 93 "time.opt"
    mercury__calendar__Time_3_12 = (MR_Box) mercury__calendar__TimeT_6;
#line 127 "time.opt"
{
#define MR_PROC_LABEL mercury__calendar__current_utc_time_3_p_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__calendar__Time_3_12 , Time);
		{
#line 127 "time.opt"
{
    struct tm   *p;
    time_t      t;

    t = Time;

    p = gmtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;
}
#line 13869 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__TMYear_25  = Yr;
	 mercury__calendar__TMMonth_26  = Mnt;
	 mercury__calendar__Day_36  = MD;
	 mercury__calendar__Hour_37  = Hrs;
	 mercury__calendar__Minute_38  = Min;
	 mercury__calendar__Second_39  = Sec;
	 mercury__calendar__YD_11_19  = YD;
	 mercury__calendar__WD_12_20  = WD;
	 mercury__calendar__N_13_21  = N;
#line 127 "time.opt"
}
#line 96 "time.opt"
    {
#line 96 "time.opt"
      mercury__calendar__V_14_22 = mercury__time__int_to_maybe_dst_1_f_0(mercury__calendar__N_13_21);
    }
#line 1157 "calendar.m"
    mercury__calendar__Year_34 = ((MR_Integer) 1900 + mercury__calendar__TMYear_25);
#line 1158 "calendar.m"
    mercury__calendar__Month_35 = (mercury__calendar__TMMonth_26 + (MR_Integer) 1);
#line 1163 "calendar.m"
    {
#line 1163 "calendar.m"
      MR_Word base;
#line 1163 "calendar.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "calendar.m"
      *mercury__calendar__Now_4 = base;
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_34));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_35));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_36));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_37));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_38));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_39));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "calendar.m"
    }
#line 1148 "calendar.m"
  }
#line 152 "calendar.m"
}

#line 148 "calendar.m"
void MR_CALL 
mercury__calendar__current_local_time_3_p_0(
#line 148 "calendar.m"
  MR_Word * mercury__calendar__Now_4)
#line 148 "calendar.m"
{
#line 1143 "calendar.m"
  {
#line 1143 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1143 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1143 "calendar.m"
    MR_Box mercury__calendar__Time_3_12;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__N_13_21;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__TMYear_25;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_26;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__Year_34;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__Month_35;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__Day_36;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__Hour_37;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__Minute_38;
#line 1143 "calendar.m"
    MR_Integer mercury__calendar__Second_39;
#line 107 "time.opt"
    MR_Integer mercury__calendar__YD_11_19;
#line 107 "time.opt"
    MR_Integer mercury__calendar__WD_12_20;
#line 92 "time.opt"
    MR_Word mercury__calendar__V_14_22;

#line 1144 "calendar.m"
    {
#line 1144 "calendar.m"
      mercury__time__time_3_p_0(&mercury__calendar__TimeT_6);
    }
#line 89 "time.opt"
    mercury__calendar__Time_3_12 = (MR_Box) mercury__calendar__TimeT_6;
#line 107 "time.opt"
{
#define MR_PROC_LABEL mercury__calendar__current_local_time_3_p_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__calendar__Time_3_12 , Time);
		{
#line 107 "time.opt"

    struct tm   *p;
    time_t      t;

    t = Time;

    p = localtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;

#line 14007 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__TMYear_25  = Yr;
	 mercury__calendar__TMMonth_26  = Mnt;
	 mercury__calendar__Day_36  = MD;
	 mercury__calendar__Hour_37  = Hrs;
	 mercury__calendar__Minute_38  = Min;
	 mercury__calendar__Second_39  = Sec;
	 mercury__calendar__YD_11_19  = YD;
	 mercury__calendar__WD_12_20  = WD;
	 mercury__calendar__N_13_21  = N;
#line 107 "time.opt"
}
#line 92 "time.opt"
    {
#line 92 "time.opt"
      mercury__calendar__V_14_22 = mercury__time__int_to_maybe_dst_1_f_0(mercury__calendar__N_13_21);
    }
#line 1157 "calendar.m"
    mercury__calendar__Year_34 = ((MR_Integer) 1900 + mercury__calendar__TMYear_25);
#line 1158 "calendar.m"
    mercury__calendar__Month_35 = (mercury__calendar__TMMonth_26 + (MR_Integer) 1);
#line 1163 "calendar.m"
    {
#line 1163 "calendar.m"
      MR_Word base;
#line 1163 "calendar.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "calendar.m"
      *mercury__calendar__Now_4 = base;
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_34));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_35));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_36));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_37));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_38));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_39));
#line 1163 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "calendar.m"
    }
#line 1143 "calendar.m"
  }
#line 148 "calendar.m"
}

#line 144 "calendar.m"
MR_String MR_CALL 
mercury__calendar__date_to_string_1_f_0(
#line 144 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 144 "calendar.m"
{
#line 674 "calendar.m"
  {
#line 674 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 674 "calendar.m"
    MR_String mercury__calendar__Str_4;
#line 674 "calendar.m"
    MR_Integer mercury__calendar__Year0_5;
#line 674 "calendar.m"
    MR_Word mercury__calendar__Month_6;
#line 674 "calendar.m"
    MR_Integer mercury__calendar__Day_7;
#line 674 "calendar.m"
    MR_Integer mercury__calendar__Hour_8;
#line 674 "calendar.m"
    MR_Integer mercury__calendar__Minute_9;
#line 674 "calendar.m"
    MR_Integer mercury__calendar__Second_10;
#line 674 "calendar.m"
    MR_Integer mercury__calendar__MicroSecond_11;
#line 674 "calendar.m"
    MR_String mercury__calendar__SignStr_12;
#line 674 "calendar.m"
    MR_Integer mercury__calendar__Year_13;
#line 674 "calendar.m"
    MR_String mercury__calendar__MicroSecondStr_14;
#line 674 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_35_35;
#line 674 "calendar.m"
    MR_Word mercury__calendar__V_41_41;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_42_42;
#line 674 "calendar.m"
    MR_Word mercury__calendar__V_48_48;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_50_50;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_52_52;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_53_53;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_61_61;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_63_63;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_64_64;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_72_72;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_74_74;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_75_75;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_83_83;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_85_85;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_86_86;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_94_94;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_96_96;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_97_97;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_105_105;
#line 674 "calendar.m"
    MR_String mercury__calendar__V_106_106;

#line 675 "calendar.m"
    {
#line 675 "calendar.m"
      mercury__calendar__unpack_date_8_p_0(mercury__calendar__Date_3, &mercury__calendar__Year0_5, &mercury__calendar__Month_6, &mercury__calendar__Day_7, &mercury__calendar__Hour_8, &mercury__calendar__Minute_9, &mercury__calendar__Second_10, &mercury__calendar__MicroSecond_11);
    }
#line 676 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Year0_5 < (MR_Integer) 0);
#line 679 "calendar.m"
    if (mercury__calendar__succeeded)
#line 677 "calendar.m"
      {
#line 677 "calendar.m"
        mercury__calendar__SignStr_12 = (MR_String) "-";
#line 678 "calendar.m"
        mercury__calendar__Year_13 = ((MR_Integer) 0 - mercury__calendar__Year0_5);
#line 677 "calendar.m"
      }
#line 679 "calendar.m"
    else
#line 680 "calendar.m"
      {
#line 680 "calendar.m"
        mercury__calendar__SignStr_12 = (MR_String) "";
#line 681 "calendar.m"
        mercury__calendar__Year_13 = mercury__calendar__Year0_5;
#line 680 "calendar.m"
      }
#line 683 "calendar.m"
    {
#line 683 "calendar.m"
      mercury__calendar__MicroSecondStr_14 = mercury__calendar__microsecond_string_1_f_0(mercury__calendar__MicroSecond_11);
    }
#line 685 "calendar.m"
    {
#line 685 "calendar.m"
      mercury__calendar__V_23_23 = mercury__calendar__month_to_int_1_f_0(mercury__calendar__Month_6);
    }
#line 14175 "calendar.c"
    mercury__calendar__V_41_41 = (MR_Word) &mercury__calendar_scalar_common_6[0];
#line 686 "calendar.m"
    {
#line 686 "calendar.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__calendar__V_41_41, mercury__calendar__MicroSecondStr_14, &mercury__calendar__V_35_35);
    }
#line 14182 "calendar.c"
    mercury__calendar__V_48_48 = (MR_Word) &mercury__calendar_scalar_common_6[1];
#line 686 "calendar.m"
    {
#line 686 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__Second_10, &mercury__calendar__V_42_42);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_50_50 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_42_42, mercury__calendar__V_35_35);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__V_50_50);
    }
#line 685 "calendar.m"
    {
#line 685 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__Minute_9, &mercury__calendar__V_53_53);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_61_61 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_53_53, mercury__calendar__V_52_52);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__V_61_61);
    }
#line 685 "calendar.m"
    {
#line 685 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__Hour_8, &mercury__calendar__V_64_64);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_72_72 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_64_64, mercury__calendar__V_63_63);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__calendar__V_72_72);
    }
#line 685 "calendar.m"
    {
#line 685 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__Day_7, &mercury__calendar__V_75_75);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_83_83 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_75_75, mercury__calendar__V_74_74);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__V_83_83);
    }
#line 685 "calendar.m"
    {
#line 685 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__V_23_23, &mercury__calendar__V_86_86);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_94_94 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_86_86, mercury__calendar__V_85_85);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__V_94_94);
    }
#line 685 "calendar.m"
    {
#line 685 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 4, mercury__calendar__Year_13, &mercury__calendar__V_97_97);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      mercury__calendar__V_105_105 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_97_97, mercury__calendar__V_96_96);
    }
#line 685 "calendar.m"
    {
#line 685 "calendar.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__calendar__V_41_41, mercury__calendar__SignStr_12, &mercury__calendar__V_106_106);
    }
#line 684 "calendar.m"
    {
#line 684 "calendar.m"
      return mercury__calendar__Str_4 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_106_106, mercury__calendar__V_105_105);
    }
#line 674 "calendar.m"
    return mercury__calendar__Str_4;
#line 674 "calendar.m"
  }
#line 144 "calendar.m"
}

#line 138 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_date_from_string_1_f_0(
#line 138 "calendar.m"
  MR_String mercury__calendar__Str_3)
#line 138 "calendar.m"
{
#line 656 "calendar.m"
  {
#line 656 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 656 "calendar.m"
    MR_Word mercury__calendar__Date_4;
#line 656 "calendar.m"
    MR_Word mercury__calendar__Date0_5;

#line 654 "calendar.m"
    {
#line 654 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__date_from_string_2_p_0(mercury__calendar__Str_3, &mercury__calendar__Date0_5);
    }
#line 656 "calendar.m"
    if (mercury__calendar__succeeded)
#line 655 "calendar.m"
      mercury__calendar__Date_4 = mercury__calendar__Date0_5;
#line 656 "calendar.m"
    else
#line 657 "calendar.m"
      {
#line 657 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_date_from_string: invalid date: ", mercury__calendar__Str_3, &mercury__calendar__V_6_6);
        }
#line 657 "calendar.m"
        {
#line 657 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 657 "calendar.m"
      }
#line 656 "calendar.m"
    return mercury__calendar__Date_4;
#line 656 "calendar.m"
  }
#line 138 "calendar.m"
}

#line 134 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__date_from_string_2_p_0(
#line 134 "calendar.m"
  MR_String mercury__calendar__Str_3,
#line 134 "calendar.m"
  MR_Word * mercury__calendar__Date_4)
#line 134 "calendar.m"
{
#line 429 "calendar.m"
  {
#line 429 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__YearChars_8;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__Year_9;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__Month_10;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__Day_11;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__Hour_12;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__Minute_13;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__Second_14;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__MicroSecond_15;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_16_16;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_19_19;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_22_22;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_23_23;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_25_25;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_26_26;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_27_27;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_28_28;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_29_29;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_31_31;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_32_32;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_33_33;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_34_34;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_35_35;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_37_37;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_38_38;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_39_39;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_40_40;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_41_41;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_42_42;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_43_43;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_44_44;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_45_45;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_46_46;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_47_47;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_48_48;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_49_49;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_50_50;
#line 429 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_51_51;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_53_53;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_54_54;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_55_55;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_56_56;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_57_57;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_58_58;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_59_59;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_60_60;
#line 429 "calendar.m"
    MR_Char mercury__calendar__V_61_61;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_62_62;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 429 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 434 "calendar.m"
    MR_Word mercury__calendar__Rest1_6;
#line 430 "calendar.m"
    MR_Char mercury__calendar__V_52_52;

#line 139 "string.opt"
    {
#line 139 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__calendar__Str_3, &mercury__calendar__STATE_VARIABLE_Chars_16_16);
    }
#line 533 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 533 "calendar.m"
    if (mercury__calendar__succeeded)
#line 533 "calendar.m"
      {
#line 533 "calendar.m"
        mercury__calendar__V_52_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_16_16, (MR_Integer) 0)));
#line 533 "calendar.m"
        mercury__calendar__Rest1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_16_16, (MR_Integer) 1)));
#line 430 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 45 == mercury__calendar__V_52_52);
#line 533 "calendar.m"
      }
#line 434 "calendar.m"
    if (mercury__calendar__succeeded)
#line 431 "calendar.m"
      {
#line 431 "calendar.m"
        MR_Integer mercury__calendar__Year0_7;

#line 481 "calendar.m"
        {
#line 481 "calendar.m"
          mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &mercury__calendar__Year0_7, (MR_Integer) 0, &mercury__calendar__YearChars_8, mercury__calendar__Rest1_6, &mercury__calendar__STATE_VARIABLE_Chars_19_19);
        }
#line 433 "calendar.m"
        mercury__calendar__Year_9 = ((MR_Integer) 0 - mercury__calendar__Year0_7);
#line 431 "calendar.m"
      }
#line 434 "calendar.m"
    else
#line 480 "calendar.m"
      {
#line 481 "calendar.m"
        {
#line 481 "calendar.m"
          mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &mercury__calendar__Year_9, (MR_Integer) 0, &mercury__calendar__YearChars_8, mercury__calendar__STATE_VARIABLE_Chars_16_16, &mercury__calendar__STATE_VARIABLE_Chars_19_19);
        }
#line 480 "calendar.m"
      }
#line 437 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__YearChars_8 >= (MR_Integer) 4);
#line 429 "calendar.m"
    if (mercury__calendar__succeeded)
#line 429 "calendar.m"
      {
#line 438 "calendar.m"
        mercury__calendar__V_22_22 = (MR_Char) 45;
#line 533 "calendar.m"
        mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 533 "calendar.m"
        if (mercury__calendar__succeeded)
#line 533 "calendar.m"
          {
#line 533 "calendar.m"
            mercury__calendar__V_53_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_19_19, (MR_Integer) 0)));
#line 533 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Chars_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_19_19, (MR_Integer) 1)));
#line 438 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_22_22 == mercury__calendar__V_53_53);
#line 429 "calendar.m"
            if (mercury__calendar__succeeded)
#line 429 "calendar.m"
              {
#line 439 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 2;
#line 481 "calendar.m"
                mercury__calendar__V_90_90 = (MR_Integer) 0;
#line 481 "calendar.m"
                mercury__calendar__V_91_91 = (MR_Integer) 0;
#line 481 "calendar.m"
                {
#line 481 "calendar.m"
                  mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_90_90, &mercury__calendar__Month_10, mercury__calendar__V_91_91, &mercury__calendar__V_54_54, mercury__calendar__STATE_VARIABLE_Chars_23_23, &mercury__calendar__STATE_VARIABLE_Chars_25_25);
                }
#line 439 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_24_24 == mercury__calendar__V_54_54);
#line 429 "calendar.m"
                if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                  {
#line 440 "calendar.m"
                    mercury__calendar__V_26_26 = (MR_Integer) 1;
#line 440 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Month_10 >= mercury__calendar__V_26_26);
#line 429 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                      {
#line 441 "calendar.m"
                        mercury__calendar__V_27_27 = (MR_Integer) 12;
#line 441 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__Month_10 <= mercury__calendar__V_27_27);
#line 429 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                          {
#line 442 "calendar.m"
                            mercury__calendar__V_28_28 = (MR_Char) 45;
#line 533 "calendar.m"
                            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 533 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 533 "calendar.m"
                              {
#line 533 "calendar.m"
                                mercury__calendar__V_55_55 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_25_25, (MR_Integer) 0)));
#line 533 "calendar.m"
                                mercury__calendar__STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_25_25, (MR_Integer) 1)));
#line 442 "calendar.m"
                                mercury__calendar__succeeded = (mercury__calendar__V_28_28 == mercury__calendar__V_55_55);
#line 429 "calendar.m"
                                if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                  {
#line 443 "calendar.m"
                                    mercury__calendar__V_30_30 = (MR_Integer) 2;
#line 443 "calendar.m"
                                    {
#line 443 "calendar.m"
                                      mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Day_11, &mercury__calendar__V_56_56, mercury__calendar__STATE_VARIABLE_Chars_29_29, &mercury__calendar__STATE_VARIABLE_Chars_31_31);
                                    }
#line 443 "calendar.m"
                                    mercury__calendar__succeeded = (mercury__calendar__V_30_30 == mercury__calendar__V_56_56);
#line 429 "calendar.m"
                                    if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                      {
#line 444 "calendar.m"
                                        mercury__calendar__V_32_32 = (MR_Integer) 1;
#line 444 "calendar.m"
                                        mercury__calendar__succeeded = (mercury__calendar__Day_11 >= mercury__calendar__V_32_32);
#line 429 "calendar.m"
                                        if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                          {
#line 445 "calendar.m"
                                            {
#line 445 "calendar.m"
                                              mercury__calendar__V_33_33 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Year_9, mercury__calendar__Month_10);
                                            }
#line 445 "calendar.m"
                                            mercury__calendar__succeeded = (mercury__calendar__Day_11 <= mercury__calendar__V_33_33);
#line 429 "calendar.m"
                                            if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                              {
#line 446 "calendar.m"
                                                mercury__calendar__V_34_34 = (MR_Char) 32;
#line 533 "calendar.m"
                                                mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 533 "calendar.m"
                                                if (mercury__calendar__succeeded)
#line 533 "calendar.m"
                                                  {
#line 533 "calendar.m"
                                                    mercury__calendar__V_57_57 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
#line 533 "calendar.m"
                                                    mercury__calendar__STATE_VARIABLE_Chars_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_31_31, (MR_Integer) 1)));
#line 446 "calendar.m"
                                                    mercury__calendar__succeeded = (mercury__calendar__V_34_34 == mercury__calendar__V_57_57);
#line 429 "calendar.m"
                                                    if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                      {
#line 447 "calendar.m"
                                                        mercury__calendar__V_36_36 = (MR_Integer) 2;
#line 447 "calendar.m"
                                                        {
#line 447 "calendar.m"
                                                          mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Hour_12, &mercury__calendar__V_58_58, mercury__calendar__STATE_VARIABLE_Chars_35_35, &mercury__calendar__STATE_VARIABLE_Chars_37_37);
                                                        }
#line 447 "calendar.m"
                                                        mercury__calendar__succeeded = (mercury__calendar__V_36_36 == mercury__calendar__V_58_58);
#line 429 "calendar.m"
                                                        if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                          {
#line 448 "calendar.m"
                                                            mercury__calendar__V_38_38 = (MR_Integer) 0;
#line 448 "calendar.m"
                                                            mercury__calendar__succeeded = (mercury__calendar__Hour_12 >= mercury__calendar__V_38_38);
#line 429 "calendar.m"
                                                            if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                              {
#line 449 "calendar.m"
                                                                mercury__calendar__V_39_39 = (MR_Integer) 23;
#line 449 "calendar.m"
                                                                mercury__calendar__succeeded = (mercury__calendar__Hour_12 <= mercury__calendar__V_39_39);
#line 429 "calendar.m"
                                                                if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                  {
#line 450 "calendar.m"
                                                                    mercury__calendar__V_40_40 = (MR_Char) 58;
#line 450 "calendar.m"
                                                                    {
#line 450 "calendar.m"
                                                                      mercury__calendar__succeeded = mercury__calendar__read_char_3_p_0(&mercury__calendar__V_59_59, mercury__calendar__STATE_VARIABLE_Chars_37_37, &mercury__calendar__STATE_VARIABLE_Chars_41_41);
                                                                    }
#line 429 "calendar.m"
                                                                    if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                      {
#line 450 "calendar.m"
                                                                        mercury__calendar__succeeded = (mercury__calendar__V_40_40 == mercury__calendar__V_59_59);
#line 429 "calendar.m"
                                                                        if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                          {
#line 451 "calendar.m"
                                                                            mercury__calendar__V_42_42 = (MR_Integer) 2;
#line 451 "calendar.m"
                                                                            {
#line 451 "calendar.m"
                                                                              mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Minute_13, &mercury__calendar__V_60_60, mercury__calendar__STATE_VARIABLE_Chars_41_41, &mercury__calendar__STATE_VARIABLE_Chars_43_43);
                                                                            }
#line 451 "calendar.m"
                                                                            mercury__calendar__succeeded = (mercury__calendar__V_42_42 == mercury__calendar__V_60_60);
#line 429 "calendar.m"
                                                                            if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                              {
#line 452 "calendar.m"
                                                                                mercury__calendar__V_44_44 = (MR_Integer) 0;
#line 452 "calendar.m"
                                                                                mercury__calendar__succeeded = (mercury__calendar__Minute_13 >= mercury__calendar__V_44_44);
#line 429 "calendar.m"
                                                                                if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                                  {
#line 453 "calendar.m"
                                                                                    mercury__calendar__V_45_45 = (MR_Integer) 59;
#line 453 "calendar.m"
                                                                                    mercury__calendar__succeeded = (mercury__calendar__Minute_13 <= mercury__calendar__V_45_45);
#line 429 "calendar.m"
                                                                                    if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                                      {
#line 454 "calendar.m"
                                                                                        mercury__calendar__V_46_46 = (MR_Char) 58;
#line 454 "calendar.m"
                                                                                        {
#line 454 "calendar.m"
                                                                                          mercury__calendar__succeeded = mercury__calendar__read_char_3_p_0(&mercury__calendar__V_61_61, mercury__calendar__STATE_VARIABLE_Chars_43_43, &mercury__calendar__STATE_VARIABLE_Chars_47_47);
                                                                                        }
#line 429 "calendar.m"
                                                                                        if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                                          {
#line 454 "calendar.m"
                                                                                            mercury__calendar__succeeded = (mercury__calendar__V_46_46 == mercury__calendar__V_61_61);
#line 429 "calendar.m"
                                                                                            if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                                              {
#line 455 "calendar.m"
                                                                                                mercury__calendar__V_48_48 = (MR_Integer) 2;
#line 455 "calendar.m"
                                                                                                {
#line 455 "calendar.m"
                                                                                                  mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Second_14, &mercury__calendar__V_62_62, mercury__calendar__STATE_VARIABLE_Chars_47_47, &mercury__calendar__STATE_VARIABLE_Chars_49_49);
                                                                                                }
#line 455 "calendar.m"
                                                                                                mercury__calendar__succeeded = (mercury__calendar__V_48_48 == mercury__calendar__V_62_62);
#line 429 "calendar.m"
                                                                                                if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                                                  {
#line 456 "calendar.m"
                                                                                                    mercury__calendar__V_50_50 = (MR_Integer) 62;
#line 456 "calendar.m"
                                                                                                    mercury__calendar__succeeded = (mercury__calendar__Second_14 < mercury__calendar__V_50_50);
#line 429 "calendar.m"
                                                                                                    if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                                                      {
#line 457 "calendar.m"
                                                                                                        {
#line 457 "calendar.m"
                                                                                                          mercury__calendar__read_microseconds_3_p_0(&mercury__calendar__MicroSecond_15, mercury__calendar__STATE_VARIABLE_Chars_49_49, &mercury__calendar__STATE_VARIABLE_Chars_51_51);
                                                                                                        }
#line 458 "calendar.m"
                                                                                                        mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "calendar.m"
                                                                                                        if (mercury__calendar__succeeded)
#line 429 "calendar.m"
                                                                                                          {
#line 459 "calendar.m"
                                                                                                            {
#line 459 "calendar.m"
                                                                                                              MR_Word base;
#line 459 "calendar.m"
                                                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 459 "calendar.m"
                                                                                                              *mercury__calendar__Date_4 = base;
#line 459 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_9));
#line 459 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_10));
#line 459 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_11));
#line 459 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_12));
#line 459 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_13));
#line 459 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_14));
#line 459 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__calendar__MicroSecond_15));
#line 459 "calendar.m"
                                                                                                            }
#line 459 "calendar.m"
                                                                                                            mercury__calendar__succeeded = MR_TRUE;
#line 429 "calendar.m"
                                                                                                          }
#line 429 "calendar.m"
                                                                                                      }
#line 429 "calendar.m"
                                                                                                  }
#line 429 "calendar.m"
                                                                                              }
#line 429 "calendar.m"
                                                                                          }
#line 429 "calendar.m"
                                                                                      }
#line 429 "calendar.m"
                                                                                  }
#line 429 "calendar.m"
                                                                              }
#line 429 "calendar.m"
                                                                          }
#line 429 "calendar.m"
                                                                      }
#line 429 "calendar.m"
                                                                  }
#line 429 "calendar.m"
                                                              }
#line 429 "calendar.m"
                                                          }
#line 429 "calendar.m"
                                                      }
#line 533 "calendar.m"
                                                  }
#line 429 "calendar.m"
                                              }
#line 429 "calendar.m"
                                          }
#line 429 "calendar.m"
                                      }
#line 429 "calendar.m"
                                  }
#line 533 "calendar.m"
                              }
#line 429 "calendar.m"
                          }
#line 429 "calendar.m"
                      }
#line 429 "calendar.m"
                  }
#line 429 "calendar.m"
              }
#line 533 "calendar.m"
          }
#line 429 "calendar.m"
      }
#line 429 "calendar.m"
    return mercury__calendar__succeeded;
#line 429 "calendar.m"
  }
#line 134 "calendar.m"
}

#line 127 "calendar.m"
void MR_CALL 
mercury__calendar__unpack_date_8_p_0(
#line 127 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 127 "calendar.m"
  MR_Integer * mercury__calendar__Year_9,
#line 127 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__3_3,
#line 127 "calendar.m"
  MR_Integer * mercury__calendar__Day_11,
#line 127 "calendar.m"
  MR_Integer * mercury__calendar__Hour_12,
#line 127 "calendar.m"
  MR_Integer * mercury__calendar__Minute_13,
#line 127 "calendar.m"
  MR_Integer * mercury__calendar__Second_14,
#line 127 "calendar.m"
  MR_Integer * mercury__calendar__MicroSecond_15)
#line 127 "calendar.m"
{
#line 1140 "calendar.m"
  {
#line 1140 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1140 "calendar.m"
    MR_Integer mercury__calendar__Month_10;

#line 1140 "calendar.m"
    *mercury__calendar__Year_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1140 "calendar.m"
    mercury__calendar__Month_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1140 "calendar.m"
    *mercury__calendar__Day_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1140 "calendar.m"
    *mercury__calendar__Hour_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1140 "calendar.m"
    *mercury__calendar__Minute_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 1140 "calendar.m"
    *mercury__calendar__Second_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 1140 "calendar.m"
    *mercury__calendar__MicroSecond_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));
#line 1141 "calendar.m"
    {
#line 1141 "calendar.m"
      *mercury__calendar__HeadVar__3_3 = mercury__calendar__det_int_to_month_1_f_0(mercury__calendar__Month_10);
    }
#line 1140 "calendar.m"
  }
#line 127 "calendar.m"
}

#line 122 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_init_date_7_f_0(
#line 122 "calendar.m"
  MR_Integer mercury__calendar__Year_9,
#line 122 "calendar.m"
  MR_Word mercury__calendar__Month_10,
#line 122 "calendar.m"
  MR_Integer mercury__calendar__Day_11,
#line 122 "calendar.m"
  MR_Integer mercury__calendar__Hour_12,
#line 122 "calendar.m"
  MR_Integer mercury__calendar__Minute_13,
#line 122 "calendar.m"
  MR_Integer mercury__calendar__Second_14,
#line 122 "calendar.m"
  MR_Integer mercury__calendar__MicroSecond_15)
#line 122 "calendar.m"
{
#line 1134 "calendar.m"
  {
#line 1134 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1134 "calendar.m"
    MR_Word mercury__calendar__Date_16;
#line 1134 "calendar.m"
    MR_Word mercury__calendar__Date0_17;

#line 1132 "calendar.m"
    {
#line 1132 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__init_date_8_p_0(mercury__calendar__Year_9, mercury__calendar__Month_10, mercury__calendar__Day_11, mercury__calendar__Hour_12, mercury__calendar__Minute_13, mercury__calendar__Second_14, mercury__calendar__MicroSecond_15, &mercury__calendar__Date0_17);
    }
#line 1134 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1133 "calendar.m"
      mercury__calendar__Date_16 = mercury__calendar__Date0_17;
#line 1134 "calendar.m"
    else
#line 1135 "calendar.m"
      {
#line 1135 "calendar.m"
        MR_String mercury__calendar__V_18_18;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_22_22;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_23_23;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_24_24;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_25_25;
#line 1135 "calendar.m"
        MR_Integer mercury__calendar__V_26_26;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_27_27;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_28_28;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_29_29;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_30_30;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_31_31;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_32_32;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_33_33;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_34_34;
#line 1135 "calendar.m"
        MR_Word mercury__calendar__V_35_35;

#line 1136 "calendar.m"
        {
#line 1136 "calendar.m"
          mercury__calendar__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_23_23, 0) = ((MR_Box) (mercury__calendar__Year_9));
#line 1136 "calendar.m"
        }
#line 1106 "calendar.m"
        {
#line 1106 "calendar.m"
          mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_26_26, mercury__calendar__Month_10);
        }
#line 1136 "calendar.m"
        {
#line 1136 "calendar.m"
          mercury__calendar__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_25_25, 0) = ((MR_Box) (mercury__calendar__V_26_26));
#line 1136 "calendar.m"
        }
#line 1136 "calendar.m"
        {
#line 1136 "calendar.m"
          mercury__calendar__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_28_28, 0) = ((MR_Box) (mercury__calendar__Day_11));
#line 1136 "calendar.m"
        }
#line 1136 "calendar.m"
        {
#line 1136 "calendar.m"
          mercury__calendar__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_30_30, 0) = ((MR_Box) (mercury__calendar__Hour_12));
#line 1136 "calendar.m"
        }
#line 1137 "calendar.m"
        {
#line 1137 "calendar.m"
          mercury__calendar__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 0) = ((MR_Box) (mercury__calendar__Minute_13));
#line 1137 "calendar.m"
        }
#line 1137 "calendar.m"
        {
#line 1137 "calendar.m"
          mercury__calendar__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_34_34, 0) = ((MR_Box) (mercury__calendar__Second_14));
#line 1137 "calendar.m"
        }
#line 1137 "calendar.m"
        mercury__calendar__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "calendar.m"
        {
#line 1137 "calendar.m"
          mercury__calendar__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_33_33, 0) = ((MR_Box) (mercury__calendar__V_34_34));
#line 1137 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_33_33, 1) = ((MR_Box) (mercury__calendar__V_35_35));
#line 1137 "calendar.m"
        }
#line 1137 "calendar.m"
        {
#line 1137 "calendar.m"
          mercury__calendar__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_31_31, 0) = ((MR_Box) (mercury__calendar__V_32_32));
#line 1137 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_31_31, 1) = ((MR_Box) (mercury__calendar__V_33_33));
#line 1137 "calendar.m"
        }
#line 1136 "calendar.m"
        {
#line 1136 "calendar.m"
          mercury__calendar__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_29_29, 0) = ((MR_Box) (mercury__calendar__V_30_30));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_29_29, 1) = ((MR_Box) (mercury__calendar__V_31_31));
#line 1136 "calendar.m"
        }
#line 1136 "calendar.m"
        {
#line 1136 "calendar.m"
          mercury__calendar__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 0) = ((MR_Box) (mercury__calendar__V_28_28));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 1) = ((MR_Box) (mercury__calendar__V_29_29));
#line 1136 "calendar.m"
        }
#line 1136 "calendar.m"
        {
#line 1136 "calendar.m"
          mercury__calendar__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_24_24, 0) = ((MR_Box) (mercury__calendar__V_25_25));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_24_24, 1) = ((MR_Box) (mercury__calendar__V_27_27));
#line 1136 "calendar.m"
        }
#line 1136 "calendar.m"
        {
#line 1136 "calendar.m"
          mercury__calendar__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 0) = ((MR_Box) (mercury__calendar__V_23_23));
#line 1136 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 1) = ((MR_Box) (mercury__calendar__V_24_24));
#line 1136 "calendar.m"
        }
#line 739 "string.opt"
        {
#line 739 "string.opt"
          mercury__string__format__format_impl_3_p_0((MR_String) "calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", mercury__calendar__V_22_22, &mercury__calendar__V_18_18);
        }
#line 1135 "calendar.m"
        {
#line 1135 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_18_18);
        }
#line 1135 "calendar.m"
      }
#line 1134 "calendar.m"
    return mercury__calendar__Date_16;
#line 1134 "calendar.m"
  }
#line 122 "calendar.m"
}

#line 117 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__init_date_8_p_0(
#line 117 "calendar.m"
  MR_Integer mercury__calendar__Year_9,
#line 117 "calendar.m"
  MR_Word mercury__calendar__Month_10,
#line 117 "calendar.m"
  MR_Integer mercury__calendar__Day_11,
#line 117 "calendar.m"
  MR_Integer mercury__calendar__Hour_12,
#line 117 "calendar.m"
  MR_Integer mercury__calendar__Minute_13,
#line 117 "calendar.m"
  MR_Integer mercury__calendar__Second_14,
#line 117 "calendar.m"
  MR_Integer mercury__calendar__MicroSecond_15,
#line 117 "calendar.m"
  MR_Word * mercury__calendar__Date_16)
#line 117 "calendar.m"
{
#line 1120 "calendar.m"
  {
#line 1120 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Day_11 >= (MR_Integer) 1);
#line 1120 "calendar.m"
    MR_Integer mercury__calendar__V_18_18;
#line 1120 "calendar.m"
    MR_Integer mercury__calendar__V_19_19;
#line 1120 "calendar.m"
    MR_Integer mercury__calendar__V_20_20;
#line 1120 "calendar.m"
    MR_Integer mercury__calendar__V_21_21;
#line 1120 "calendar.m"
    MR_Integer mercury__calendar__V_22_22;
#line 1120 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 1120 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;

#line 1120 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1120 "calendar.m"
      {
#line 1106 "calendar.m"
        {
#line 1106 "calendar.m"
          mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_19_19, mercury__calendar__Month_10);
        }
#line 1122 "calendar.m"
        {
#line 1122 "calendar.m"
          mercury__calendar__V_18_18 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Year_9, mercury__calendar__V_19_19);
        }
#line 1122 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Day_11 <= mercury__calendar__V_18_18);
#line 1120 "calendar.m"
        if (mercury__calendar__succeeded)
#line 1120 "calendar.m"
          {
#line 1123 "calendar.m"
            mercury__calendar__V_20_20 = (MR_Integer) 24;
#line 1123 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Hour_12 < mercury__calendar__V_20_20);
#line 1120 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1120 "calendar.m"
              {
#line 1124 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 60;
#line 1124 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Minute_13 < mercury__calendar__V_21_21);
#line 1120 "calendar.m"
                if (mercury__calendar__succeeded)
#line 1120 "calendar.m"
                  {
#line 1125 "calendar.m"
                    mercury__calendar__V_22_22 = (MR_Integer) 62;
#line 1125 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Second_14 < mercury__calendar__V_22_22);
#line 1120 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 1120 "calendar.m"
                      {
#line 1126 "calendar.m"
                        mercury__calendar__V_23_23 = (MR_Integer) 1000000;
#line 1126 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__MicroSecond_15 < mercury__calendar__V_23_23);
#line 1120 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 1120 "calendar.m"
                          {
#line 1106 "calendar.m"
                            {
#line 1106 "calendar.m"
                              mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_24_24, mercury__calendar__Month_10);
                            }
#line 1127 "calendar.m"
                            {
#line 1127 "calendar.m"
                              MR_Word base;
#line 1127 "calendar.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "calendar.m"
                              *mercury__calendar__Date_16 = base;
#line 1127 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_9));
#line 1127 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__V_24_24));
#line 1127 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_11));
#line 1127 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_12));
#line 1127 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_13));
#line 1127 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_14));
#line 1127 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__calendar__MicroSecond_15));
#line 1127 "calendar.m"
                            }
#line 1127 "calendar.m"
                            mercury__calendar__succeeded = MR_TRUE;
#line 1120 "calendar.m"
                          }
#line 1120 "calendar.m"
                      }
#line 1120 "calendar.m"
                  }
#line 1120 "calendar.m"
              }
#line 1120 "calendar.m"
          }
#line 1120 "calendar.m"
      }
#line 1120 "calendar.m"
    return mercury__calendar__succeeded;
#line 1120 "calendar.m"
  }
#line 117 "calendar.m"
}

#line 112 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__month_to_int0_1_f_0(
#line 112 "calendar.m"
  MR_Word mercury__calendar__Month_3)
#line 112 "calendar.m"
{
#line 1108 "calendar.m"
  {
#line 1108 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1108 "calendar.m"
    MR_Integer mercury__calendar__Int_4;
#line 1108 "calendar.m"
    MR_Integer mercury__calendar__V_7_7;

#line 1109 "calendar.m"
    {
#line 1109 "calendar.m"
      mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_7_7, mercury__calendar__Month_3);
    }
#line 1109 "calendar.m"
    mercury__calendar__Int_4 = (mercury__calendar__V_7_7 - (MR_Integer) 1);
#line 1108 "calendar.m"
    return mercury__calendar__Int_4;
#line 1108 "calendar.m"
  }
#line 112 "calendar.m"
}

#line 107 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__month_to_int_1_f_0(
#line 107 "calendar.m"
  MR_Word mercury__calendar__Month_3)
#line 107 "calendar.m"
{
#line 1106 "calendar.m"
  {
#line 1106 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1106 "calendar.m"
    MR_Integer mercury__calendar__Int_4;

#line 1106 "calendar.m"
    {
#line 1106 "calendar.m"
      mercury__calendar__int_to_month_2_p_1(&mercury__calendar__Int_4, mercury__calendar__Month_3);
    }
#line 1106 "calendar.m"
    return mercury__calendar__Int_4;
#line 1106 "calendar.m"
  }
#line 107 "calendar.m"
}

#line 102 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_int0_to_month_1_f_0(
#line 102 "calendar.m"
  MR_Integer mercury__calendar__Int_3)
#line 102 "calendar.m"
{
#line 1111 "calendar.m"
  {
#line 1111 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1111 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1111 "calendar.m"
    MR_Word mercury__calendar__Month_4;
#line 1108 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = (mercury__calendar__Int_3 + (MR_Integer) 1);

#line 1109 "calendar.m"
    {
#line 1109 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__V_11_11, &mercury__calendar__Month_4);
    }
#line 1111 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1111 "calendar.m"
      mercury__calendar__HeadVar__2_2 = mercury__calendar__Month_4;
#line 1111 "calendar.m"
    else
#line 1114 "calendar.m"
      {
#line 1114 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_8_8 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_month_0;
#line 1114 "calendar.m"
        MR_String mercury__calendar__V_5_5;
#line 1114 "calendar.m"
        MR_String mercury__calendar__V_7_7;
#line 1114 "calendar.m"
        MR_Box mercury__calendar__conv0_HeadVar__2_2;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Int_3, (MR_Integer) 10, &mercury__calendar__V_7_7);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_int0_to_month: invalid month: ", mercury__calendar__V_7_7, &mercury__calendar__V_5_5);
        }
#line 1114 "calendar.m"
        {
#line 1114 "calendar.m"
          mercury__calendar__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__calendar__TypeCtorInfo_8_8, mercury__calendar__V_5_5);
        }
#line 1114 "calendar.m"
        mercury__calendar__HeadVar__2_2 = ((MR_Word) mercury__calendar__conv0_HeadVar__2_2);
#line 1114 "calendar.m"
      }
#line 1111 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1111 "calendar.m"
  }
#line 102 "calendar.m"
}

#line 97 "calendar.m"
void MR_CALL 
mercury__calendar__int0_to_month_2_p_1(
#line 97 "calendar.m"
  MR_Integer * mercury__calendar__Int_3,
#line 97 "calendar.m"
  MR_Word mercury__calendar__Month_4)
#line 97 "calendar.m"
{
#line 1108 "calendar.m"
  {
#line 1108 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1108 "calendar.m"
    MR_Integer mercury__calendar__V_5_5;

#line 1109 "calendar.m"
    {
#line 1109 "calendar.m"
      mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_5_5, mercury__calendar__Month_4);
    }
#line 1109 "calendar.m"
    *mercury__calendar__Int_3 = (mercury__calendar__V_5_5 - (MR_Integer) 1);
#line 1108 "calendar.m"
  }
#line 97 "calendar.m"
}

#line 96 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__int0_to_month_2_p_0(
#line 96 "calendar.m"
  MR_Integer mercury__calendar__Int_3,
#line 96 "calendar.m"
  MR_Word * mercury__calendar__Month_4)
#line 96 "calendar.m"
{
#line 1108 "calendar.m"
  {
#line 1108 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1108 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = (mercury__calendar__Int_3 + (MR_Integer) 1);

#line 1109 "calendar.m"
    {
#line 1109 "calendar.m"
      return mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__V_5_5, mercury__calendar__Month_4);
    }
#line 1108 "calendar.m"
    return mercury__calendar__succeeded;
#line 1108 "calendar.m"
  }
#line 96 "calendar.m"
}

#line 90 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_int_to_month_1_f_0(
#line 90 "calendar.m"
  MR_Integer mercury__calendar__Int_3)
#line 90 "calendar.m"
{
#line 1099 "calendar.m"
  {
#line 1099 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1099 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1099 "calendar.m"
    MR_Word mercury__calendar__Month_4;

#line 1100 "calendar.m"
    {
#line 1100 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__Int_3, &mercury__calendar__Month_4);
    }
#line 1099 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1099 "calendar.m"
      mercury__calendar__HeadVar__2_2 = mercury__calendar__Month_4;
#line 1099 "calendar.m"
    else
#line 1102 "calendar.m"
      {
#line 1102 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_8_8 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_month_0;
#line 1102 "calendar.m"
        MR_String mercury__calendar__V_5_5;
#line 1102 "calendar.m"
        MR_String mercury__calendar__V_7_7;
#line 1102 "calendar.m"
        MR_Box mercury__calendar__conv0_HeadVar__2_2;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Int_3, (MR_Integer) 10, &mercury__calendar__V_7_7);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_int_to_month: invalid month: ", mercury__calendar__V_7_7, &mercury__calendar__V_5_5);
        }
#line 1102 "calendar.m"
        {
#line 1102 "calendar.m"
          mercury__calendar__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__calendar__TypeCtorInfo_8_8, mercury__calendar__V_5_5);
        }
#line 1102 "calendar.m"
        mercury__calendar__HeadVar__2_2 = ((MR_Word) mercury__calendar__conv0_HeadVar__2_2);
#line 1102 "calendar.m"
      }
#line 1099 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1099 "calendar.m"
  }
#line 90 "calendar.m"
}

#line 85 "calendar.m"
void MR_CALL 
mercury__calendar__int_to_month_2_p_1(
#line 85 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__1_1,
#line 85 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 85 "calendar.m"
{
#line 1086 "calendar.m"
  {
#line 1086 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 1086 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 3))
#line 1089 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 4;
#line 1086 "calendar.m"
    else
#line 1086 "calendar.m"
      if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 7))
#line 1093 "calendar.m"
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 8;
#line 1086 "calendar.m"
      else
#line 1086 "calendar.m"
        if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 11))
#line 1097 "calendar.m"
          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 12;
#line 1086 "calendar.m"
        else
#line 1086 "calendar.m"
          if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 1))
#line 1087 "calendar.m"
            *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 1086 "calendar.m"
          else
#line 1086 "calendar.m"
            if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 0))
#line 1086 "calendar.m"
              *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 1086 "calendar.m"
            else
#line 1086 "calendar.m"
              if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 6))
#line 1092 "calendar.m"
                *mercury__calendar__HeadVar__1_1 = (MR_Integer) 7;
#line 1086 "calendar.m"
              else
#line 1086 "calendar.m"
                if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 5))
#line 1091 "calendar.m"
                  *mercury__calendar__HeadVar__1_1 = (MR_Integer) 6;
#line 1086 "calendar.m"
                else
#line 1086 "calendar.m"
                  if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 2))
#line 1088 "calendar.m"
                    *mercury__calendar__HeadVar__1_1 = (MR_Integer) 3;
#line 1086 "calendar.m"
                  else
#line 1086 "calendar.m"
                    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 4))
#line 1090 "calendar.m"
                      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 5;
#line 1086 "calendar.m"
                    else
#line 1086 "calendar.m"
                      if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 10))
#line 1096 "calendar.m"
                        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 11;
#line 1086 "calendar.m"
                      else
#line 1086 "calendar.m"
                        if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 9))
#line 1095 "calendar.m"
                          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 10;
#line 1086 "calendar.m"
                        else
#line 1094 "calendar.m"
                          *mercury__calendar__HeadVar__1_1 = (MR_Integer) 9;
#line 1086 "calendar.m"
  }
#line 85 "calendar.m"
}

#line 84 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__int_to_month_2_p_0(
#line 84 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 84 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__2_2)
#line 84 "calendar.m"
{
#line 1086 "calendar.m"
  {
#line 1086 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 1086 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 1))
#line 1086 "calendar.m"
      {
#line 1086 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 0;
#line 1086 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1086 "calendar.m"
      }
#line 1086 "calendar.m"
    else
#line 1086 "calendar.m"
      if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 2))
#line 1087 "calendar.m"
        {
#line 1087 "calendar.m"
          *mercury__calendar__HeadVar__2_2 = (MR_Integer) 1;
#line 1087 "calendar.m"
          mercury__calendar__succeeded = MR_TRUE;
#line 1087 "calendar.m"
        }
#line 1086 "calendar.m"
      else
#line 1086 "calendar.m"
        if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 3))
#line 1088 "calendar.m"
          {
#line 1088 "calendar.m"
            *mercury__calendar__HeadVar__2_2 = (MR_Integer) 2;
#line 1088 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1088 "calendar.m"
          }
#line 1086 "calendar.m"
        else
#line 1086 "calendar.m"
          if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 4))
#line 1089 "calendar.m"
            {
#line 1089 "calendar.m"
              *mercury__calendar__HeadVar__2_2 = (MR_Integer) 3;
#line 1089 "calendar.m"
              mercury__calendar__succeeded = MR_TRUE;
#line 1089 "calendar.m"
            }
#line 1086 "calendar.m"
          else
#line 1086 "calendar.m"
            if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 5))
#line 1090 "calendar.m"
              {
#line 1090 "calendar.m"
                *mercury__calendar__HeadVar__2_2 = (MR_Integer) 4;
#line 1090 "calendar.m"
                mercury__calendar__succeeded = MR_TRUE;
#line 1090 "calendar.m"
              }
#line 1086 "calendar.m"
            else
#line 1086 "calendar.m"
              if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 6))
#line 1091 "calendar.m"
                {
#line 1091 "calendar.m"
                  *mercury__calendar__HeadVar__2_2 = (MR_Integer) 5;
#line 1091 "calendar.m"
                  mercury__calendar__succeeded = MR_TRUE;
#line 1091 "calendar.m"
                }
#line 1086 "calendar.m"
              else
#line 1086 "calendar.m"
                if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 7))
#line 1092 "calendar.m"
                  {
#line 1092 "calendar.m"
                    *mercury__calendar__HeadVar__2_2 = (MR_Integer) 6;
#line 1092 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 1092 "calendar.m"
                  }
#line 1086 "calendar.m"
                else
#line 1086 "calendar.m"
                  if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 8))
#line 1093 "calendar.m"
                    {
#line 1093 "calendar.m"
                      *mercury__calendar__HeadVar__2_2 = (MR_Integer) 7;
#line 1093 "calendar.m"
                      mercury__calendar__succeeded = MR_TRUE;
#line 1093 "calendar.m"
                    }
#line 1086 "calendar.m"
                  else
#line 1086 "calendar.m"
                    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 9))
#line 1094 "calendar.m"
                      {
#line 1094 "calendar.m"
                        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 8;
#line 1094 "calendar.m"
                        mercury__calendar__succeeded = MR_TRUE;
#line 1094 "calendar.m"
                      }
#line 1086 "calendar.m"
                    else
#line 1086 "calendar.m"
                      if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 10))
#line 1095 "calendar.m"
                        {
#line 1095 "calendar.m"
                          *mercury__calendar__HeadVar__2_2 = (MR_Integer) 9;
#line 1095 "calendar.m"
                          mercury__calendar__succeeded = MR_TRUE;
#line 1095 "calendar.m"
                        }
#line 1086 "calendar.m"
                      else
#line 1086 "calendar.m"
                        if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 11))
#line 1096 "calendar.m"
                          {
#line 1096 "calendar.m"
                            *mercury__calendar__HeadVar__2_2 = (MR_Integer) 10;
#line 1096 "calendar.m"
                            mercury__calendar__succeeded = MR_TRUE;
#line 1096 "calendar.m"
                          }
#line 1086 "calendar.m"
                        else
#line 1086 "calendar.m"
                          if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 12))
#line 1097 "calendar.m"
                            {
#line 1097 "calendar.m"
                              *mercury__calendar__HeadVar__2_2 = (MR_Integer) 11;
#line 1097 "calendar.m"
                              mercury__calendar__succeeded = MR_TRUE;
#line 1097 "calendar.m"
                            }
#line 1086 "calendar.m"
                          else
#line 1086 "calendar.m"
                            mercury__calendar__succeeded = MR_FALSE;
#line 1086 "calendar.m"
    return mercury__calendar__succeeded;
#line 1086 "calendar.m"
  }
#line 84 "calendar.m"
}

#line 78 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__microsecond_1_f_0(
#line 78 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 78 "calendar.m"
{
#line 1076 "calendar.m"
  {
#line 1076 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));

#line 1076 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1076 "calendar.m"
  }
#line 78 "calendar.m"
}

#line 77 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__second_1_f_0(
#line 77 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 77 "calendar.m"
{
#line 1075 "calendar.m"
  {
#line 1075 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1075 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1075 "calendar.m"
  }
#line 77 "calendar.m"
}

#line 76 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__minute_1_f_0(
#line 76 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 76 "calendar.m"
{
#line 1074 "calendar.m"
  {
#line 1074 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1074 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1074 "calendar.m"
  }
#line 76 "calendar.m"
}

#line 75 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__hour_1_f_0(
#line 75 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 75 "calendar.m"
{
#line 1073 "calendar.m"
  {
#line 1073 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1073 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1073 "calendar.m"
  }
#line 75 "calendar.m"
}

#line 74 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__day_of_week_1_f_0(
#line 74 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 74 "calendar.m"
{
#line 1044 "calendar.m"
  {
#line 1044 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1044 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek_4;
#line 1044 "calendar.m"
    MR_Integer mercury__calendar__JDN_5;
#line 1044 "calendar.m"
    MR_Integer mercury__calendar__Mod_6;
#line 1044 "calendar.m"
    MR_Integer mercury__calendar__V_6_11;
#line 1044 "calendar.m"
    MR_Integer mercury__calendar__V_7_12;

#line 1045 "calendar.m"
    {
#line 1045 "calendar.m"
      mercury__calendar__JDN_5 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__Date_3);
    }
#line 113 "int.opt"
    {
#line 113 "int.opt"
      mercury__calendar__V_7_12 = mercury__int__div_2_f_0(mercury__calendar__JDN_5, (MR_Integer) 7);
    }
#line 112 "int.opt"
    mercury__calendar__V_6_11 = (mercury__calendar__V_7_12 * (MR_Integer) 7);
#line 111 "int.opt"
    mercury__calendar__Mod_6 = (mercury__calendar__JDN_5 - mercury__calendar__V_6_11);
#line 1047 "calendar.m"
    {
#line 1047 "calendar.m"
      return mercury__calendar__DayOfWeek_4 = mercury__calendar__det_day_of_week_from_mod_1_f_0(mercury__calendar__Mod_6);
    }
#line 1044 "calendar.m"
    return mercury__calendar__DayOfWeek_4;
#line 1044 "calendar.m"
  }
#line 74 "calendar.m"
}

#line 73 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__day_of_month_1_f_0(
#line 73 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 73 "calendar.m"
{
#line 1072 "calendar.m"
  {
#line 1072 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1072 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1072 "calendar.m"
  }
#line 73 "calendar.m"
}

#line 72 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__month_1_f_0(
#line 72 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 72 "calendar.m"
{
#line 1071 "calendar.m"
  {
#line 1071 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1071 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1071 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1071 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1071 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1071 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1071 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1071 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1071 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1071 "calendar.m"
    {
#line 1071 "calendar.m"
      return mercury__calendar__HeadVar__2_2 = mercury__calendar__det_int_to_month_1_f_0(mercury__calendar__V_4_4);
    }
#line 1071 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1071 "calendar.m"
  }
#line 72 "calendar.m"
}

#line 71 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__year_1_f_0(
#line 71 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 71 "calendar.m"
{
#line 1070 "calendar.m"
  {
#line 1070 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1070 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1070 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1070 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1070 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1070 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1070 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1070 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1070 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1070 "calendar.m"
  }
#line 71 "calendar.m"
}

void mercury__calendar__init(void)
{
}

void mercury__calendar__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_date_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_day_of_month_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_day_of_week_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_days_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_duration_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_hour_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_hours_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_microsecond_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_microseconds_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_minute_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_minutes_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_month_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_months_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_order_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_second_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_seconds_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_year_0);
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_years_0);
}

void mercury__calendar__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module calendar. */
