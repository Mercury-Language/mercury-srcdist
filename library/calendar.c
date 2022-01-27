/*
** Automatically generated from `calendar.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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




#line 93 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7];

#line 96 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_date_0_0[7];

#line 99 "calendar.c"
static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_date_0_0;

#line 102 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1];

#line 105 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1];

#line 108 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1];

#line 111 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1];

#line 114 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0;

#line 117 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1;

#line 120 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2;

#line 123 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3;

#line 126 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4;

#line 129 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5;

#line 132 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6;

#line 135 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_day_of_week_0[7];

#line 138 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_day_of_week_0[7];

#line 141 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_day_of_week_0[7];

#line 144 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4];

#line 147 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4];

#line 150 "calendar.c"
static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_duration_0_0;

#line 153 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1];

#line 156 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1];

#line 159 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1];

#line 162 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1];

#line 165 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0;

#line 168 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1;

#line 171 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2;

#line 174 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3;

#line 177 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4;

#line 180 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5;

#line 183 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6;

#line 186 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7;

#line 189 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8;

#line 192 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9;

#line 195 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10;

#line 198 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11;

#line 201 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_month_0[12];

#line 204 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_month_0[12];

#line 207 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_month_0[12];

#line 210 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0;

#line 213 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1;

#line 216 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_order_0[2];

#line 219 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2];

#line 222 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2];

#line 225 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
#line 228 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 230 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 233 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
#line 236 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 238 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 240 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 243 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0_10001(
#line 246 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 248 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 251 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____date_time_0_0_10001(
#line 254 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 256 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 258 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 261 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
#line 264 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 266 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 269 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
#line 272 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 274 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 276 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 279 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
#line 282 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 284 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 287 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
#line 290 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 292 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 294 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 297 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
#line 300 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 302 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 305 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
#line 308 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 310 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 312 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 315 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
#line 318 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 320 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 323 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
#line 326 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 328 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 330 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 333 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
#line 336 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 338 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 341 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
#line 344 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 346 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 348 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 351 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
#line 354 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 356 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 359 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
#line 362 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 364 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 366 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 369 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
#line 372 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 374 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 377 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
#line 380 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 382 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 384 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 387 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
#line 390 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 392 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 395 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
#line 398 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 400 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 402 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 405 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
#line 408 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 410 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 413 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
#line 416 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 418 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 420 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 423 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
#line 426 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 428 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 431 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
#line 434 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 436 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 438 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 441 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
#line 444 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 446 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 449 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
#line 452 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 454 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 456 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 459 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
#line 462 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 464 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 467 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
#line 470 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 472 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 474 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 477 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
#line 480 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 482 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 485 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
#line 488 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 490 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 492 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 495 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
#line 498 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 500 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 503 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
#line 506 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 508 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 510 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 513 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
#line 516 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 518 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 521 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
#line 524 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 526 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 528 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 531 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
#line 534 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 536 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 539 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
#line 542 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 544 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 546 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 549 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
#line 552 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 554 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 557 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
#line 560 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 562 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 564 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 79 "string.opt"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0(
#line 79 "string.opt"
  MR_Char mercury__calendar__V_11_11,
#line 79 "string.opt"
  MR_String mercury__calendar__S_6_6,
#line 79 "string.opt"
  MR_Integer mercury__calendar__I_7_7,
#line 79 "string.opt"
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

#line 884 "calendar.m"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 884 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_E_0_11,
#line 884 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_E_12);

#line 1029 "calendar.m"
static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
#line 1029 "calendar.m"
  MR_Integer mercury__calendar__BorrowVal_6,
#line 1029 "calendar.m"
  MR_Integer mercury__calendar__Val1_7,
#line 1029 "calendar.m"
  MR_Integer mercury__calendar__Val2_8,
#line 1029 "calendar.m"
  MR_Integer * mercury__calendar__Diff_9,
#line 1029 "calendar.m"
  MR_Integer * mercury__calendar__Borrow_10);

#line 973 "calendar.m"
static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
#line 973 "calendar.m"
  MR_Word mercury__calendar__OriginalOrder_5,
#line 973 "calendar.m"
  MR_Word mercury__calendar__DateA_6,
#line 973 "calendar.m"
  MR_Word mercury__calendar__DateB_7,
#line 973 "calendar.m"
  MR_Word * mercury__calendar__Duration_8);

#line 818 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
#line 818 "calendar.m"
  MR_Integer mercury__calendar__YearValue_4,
#line 818 "calendar.m"
  MR_Integer mercury__calendar__MonthValue_5);

#line 814 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
#line 814 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 814 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 814 "calendar.m"
  MR_Integer mercury__calendar__High_7);

#line 810 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
#line 810 "calendar.m"
  MR_Integer mercury__calendar__A_4,
#line 810 "calendar.m"
  MR_Integer mercury__calendar__B_5);

#line 806 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
#line 806 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 806 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 806 "calendar.m"
  MR_Integer mercury__calendar__High_7);

#line 762 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
#line 762 "calendar.m"
  MR_Integer mercury__calendar__Seconds_4,
#line 762 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_5);

#line 753 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
#line 753 "calendar.m"
  MR_Integer mercury__calendar__X_4,
#line 753 "calendar.m"
  MR_String mercury__calendar__Suffix_5);

#line 692 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
#line 692 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_3);

#line 649 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void);

#line 600 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
#line 600 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_10,
#line 600 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_11,
#line 600 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_12,
#line 600 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_13);

#line 564 "calendar.m"
static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
#line 564 "calendar.m"
  MR_Integer * mercury__calendar__Seconds_5,
#line 564 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_6,
#line 564 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_13,
#line 564 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_14);

#line 559 "calendar.m"
static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
#line 559 "calendar.m"
  MR_Integer * mercury__calendar__Minutes_4,
#line 559 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 559 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 554 "calendar.m"
static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
#line 554 "calendar.m"
  MR_Integer * mercury__calendar__Hours_4,
#line 554 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 554 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 549 "calendar.m"
static void MR_CALL 
mercury__calendar__read_days_3_p_0(
#line 549 "calendar.m"
  MR_Integer * mercury__calendar__Days_4,
#line 549 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 549 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 544 "calendar.m"
static void MR_CALL 
mercury__calendar__read_months_3_p_0(
#line 544 "calendar.m"
  MR_Integer * mercury__calendar__Months_4,
#line 544 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 544 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 535 "calendar.m"
static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
#line 535 "calendar.m"
  MR_Char * mercury__calendar__Char_4,
#line 535 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 535 "calendar.m"
  MR_Word * mercury__calendar__Rest_5);

#line 487 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
#line 487 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_13,
#line 487 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_14,
#line 487 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_N_0_15,
#line 487 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_N_16,
#line 487 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_17,
#line 487 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_18);

#line 481 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
#line 481 "calendar.m"
  MR_Integer * mercury__calendar__Val_5,
#line 481 "calendar.m"
  MR_Integer * mercury__calendar__N_6,
#line 481 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_8,
#line 481 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_9);

#line 466 "calendar.m"
static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
#line 466 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_4,
#line 466 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_9,
#line 466 "calendar.m"
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



#line 1286 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1297 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_date_0_0[7] = {
  (MR_String) "dt_year",
  (MR_String) "dt_month",
  (MR_String) "dt_day",
  (MR_String) "dt_hour",
  (MR_String) "dt_minute",
  (MR_String) "dt_second",
  (MR_String) "dt_microsecond"
};

#line 1308 "calendar.c"
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

#line 1323 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_date_0_0
};

#line 1328 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_date_0_0
  }
};

#line 1337 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_date_0_0
};

#line 1342 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1] = {
  (MR_Integer) 0
};

#line 1347 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_date_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__calendar____Unify____date_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____date_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "date",
  {     mercury__calendar__calendar__du_name_ordered_date_0 },
  {     mercury__calendar__calendar__du_ptag_ordered_date_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_date_0
};

#line 1364 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_date_time_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____date_time_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____date_time_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "date_time",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__calendar__calendar__type_ctor_info_date_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1381 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_day_of_month_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____day_of_month_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____day_of_month_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "day_of_month",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1398 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0 = {
  (MR_String) "monday",
  (MR_Integer) 0
};

#line 1404 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1 = {
  (MR_String) "tuesday",
  (MR_Integer) 1
};

#line 1410 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2 = {
  (MR_String) "wednesday",
  (MR_Integer) 2
};

#line 1416 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3 = {
  (MR_String) "thursday",
  (MR_Integer) 3
};

#line 1422 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4 = {
  (MR_String) "friday",
  (MR_Integer) 4
};

#line 1428 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5 = {
  (MR_String) "saturday",
  (MR_Integer) 5
};

#line 1434 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6 = {
  (MR_String) "sunday",
  (MR_Integer) 6
};

#line 1440 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_day_of_week_0[7] = {
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6
};

#line 1451 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_day_of_week_0[7] = {
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2
};

#line 1462 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_day_of_week_0[7] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1473 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_day_of_week_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____day_of_week_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____day_of_week_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "day_of_week",
  {     mercury__calendar__calendar__enum_name_ordered_day_of_week_0 },
  {     mercury__calendar__calendar__enum_value_ordered_day_of_week_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_day_of_week_0
};

#line 1490 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_days_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____days_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____days_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "days",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1507 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1515 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4] = {
  (MR_String) "dur_months",
  (MR_String) "dur_days",
  (MR_String) "dur_seconds",
  (MR_String) "dur_microseconds"
};

#line 1523 "calendar.c"
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

#line 1538 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_duration_0_0
};

#line 1543 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_duration_0_0
  }
};

#line 1552 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_duration_0_0
};

#line 1557 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1] = {
  (MR_Integer) 0
};

#line 1562 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_duration_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__calendar____Unify____duration_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____duration_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "duration",
  {     mercury__calendar__calendar__du_name_ordered_duration_0 },
  {     mercury__calendar__calendar__du_ptag_ordered_duration_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_duration_0
};

#line 1579 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_hour_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____hour_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____hour_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "hour",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1596 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_hours_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____hours_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____hours_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "hours",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1613 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_microsecond_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____microsecond_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____microsecond_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "microsecond",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1630 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_microseconds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____microseconds_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____microseconds_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "microseconds",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1647 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_minute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____minute_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____minute_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "minute",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1664 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_minutes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____minutes_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____minutes_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "minutes",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1681 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0 = {
  (MR_String) "january",
  (MR_Integer) 0
};

#line 1687 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1 = {
  (MR_String) "february",
  (MR_Integer) 1
};

#line 1693 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2 = {
  (MR_String) "march",
  (MR_Integer) 2
};

#line 1699 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3 = {
  (MR_String) "april",
  (MR_Integer) 3
};

#line 1705 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4 = {
  (MR_String) "may",
  (MR_Integer) 4
};

#line 1711 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5 = {
  (MR_String) "june",
  (MR_Integer) 5
};

#line 1717 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6 = {
  (MR_String) "july",
  (MR_Integer) 6
};

#line 1723 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7 = {
  (MR_String) "august",
  (MR_Integer) 7
};

#line 1729 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8 = {
  (MR_String) "september",
  (MR_Integer) 8
};

#line 1735 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9 = {
  (MR_String) "october",
  (MR_Integer) 9
};

#line 1741 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10 = {
  (MR_String) "november",
  (MR_Integer) 10
};

#line 1747 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11 = {
  (MR_String) "december",
  (MR_Integer) 11
};

#line 1753 "calendar.c"
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

#line 1769 "calendar.c"
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

#line 1785 "calendar.c"
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

#line 1801 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_month_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____month_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____month_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "month",
  {     mercury__calendar__calendar__enum_name_ordered_month_0 },
  {     mercury__calendar__calendar__enum_value_ordered_month_0 },
  (MR_Integer) 12,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_month_0
};

#line 1818 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_months_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____months_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____months_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "months",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1835 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0 = {
  (MR_String) "ascending",
  (MR_Integer) 0
};

#line 1841 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1 = {
  (MR_String) "descending",
  (MR_Integer) 1
};

#line 1847 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_order_0[2] = {
  &mercury__calendar__calendar__enum_functor_desc_order_0_0,
  &mercury__calendar__calendar__enum_functor_desc_order_0_1
};

#line 1853 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2] = {
  &mercury__calendar__calendar__enum_functor_desc_order_0_0,
  &mercury__calendar__calendar__enum_functor_desc_order_0_1
};

#line 1859 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1865 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____order_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____order_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "order",
  {     mercury__calendar__calendar__enum_name_ordered_order_0 },
  {     mercury__calendar__calendar__enum_value_ordered_order_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__calendar__calendar__functor_number_map_order_0
};

#line 1882 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_second_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____second_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____second_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "second",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1899 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_seconds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____seconds_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____seconds_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "seconds",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1916 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_year_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____year_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____year_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "year",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1933 "calendar.c"
const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_years_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____years_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____years_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "years",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1950 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
#line 1953 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 1955 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 1957 "calendar.c"
{
#line 1959 "calendar.c"
  {
#line 1961 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 1964 "calendar.c"
    {
#line 1966 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____date_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 1969 "calendar.c"
    return mercury__calendar__succeeded;
#line 1971 "calendar.c"
  }
#line 1973 "calendar.c"
}

#line 1976 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
#line 1979 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 1981 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 1983 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 1985 "calendar.c"
{
#line 1987 "calendar.c"
  {
#line 1989 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 1992 "calendar.c"
    {
#line 1994 "calendar.c"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 1997 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 1999 "calendar.c"
  }
#line 2001 "calendar.c"
}

#line 2004 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0_10001(
#line 2007 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2009 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2011 "calendar.c"
{
#line 2013 "calendar.c"
  {
#line 2015 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2018 "calendar.c"
    {
#line 2020 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____date_time_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2023 "calendar.c"
    return mercury__calendar__succeeded;
#line 2025 "calendar.c"
  }
#line 2027 "calendar.c"
}

#line 2030 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____date_time_0_0_10001(
#line 2033 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2035 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2037 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2039 "calendar.c"
{
#line 2041 "calendar.c"
  {
#line 2043 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2046 "calendar.c"
    {
#line 2048 "calendar.c"
      mercury__calendar____Compare____date_time_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2051 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2053 "calendar.c"
  }
#line 2055 "calendar.c"
}

#line 2058 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
#line 2061 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2063 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2065 "calendar.c"
{
#line 2067 "calendar.c"
  {
#line 2069 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2072 "calendar.c"
    {
#line 2074 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____day_of_month_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2077 "calendar.c"
    return mercury__calendar__succeeded;
#line 2079 "calendar.c"
  }
#line 2081 "calendar.c"
}

#line 2084 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
#line 2087 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2089 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2091 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2093 "calendar.c"
{
#line 2095 "calendar.c"
  {
#line 2097 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2100 "calendar.c"
    {
#line 2102 "calendar.c"
      mercury__calendar____Compare____day_of_month_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2105 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2107 "calendar.c"
  }
#line 2109 "calendar.c"
}

#line 2112 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
#line 2115 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2117 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2119 "calendar.c"
{
#line 2121 "calendar.c"
  {
#line 2123 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2126 "calendar.c"
    {
#line 2128 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____day_of_week_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2131 "calendar.c"
    return mercury__calendar__succeeded;
#line 2133 "calendar.c"
  }
#line 2135 "calendar.c"
}

#line 2138 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
#line 2141 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2143 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2145 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2147 "calendar.c"
{
#line 2149 "calendar.c"
  {
#line 2151 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2154 "calendar.c"
    {
#line 2156 "calendar.c"
      mercury__calendar____Compare____day_of_week_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2159 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2161 "calendar.c"
  }
#line 2163 "calendar.c"
}

#line 2166 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
#line 2169 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2171 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2173 "calendar.c"
{
#line 2175 "calendar.c"
  {
#line 2177 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2180 "calendar.c"
    {
#line 2182 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____days_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2185 "calendar.c"
    return mercury__calendar__succeeded;
#line 2187 "calendar.c"
  }
#line 2189 "calendar.c"
}

#line 2192 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
#line 2195 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2197 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2199 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2201 "calendar.c"
{
#line 2203 "calendar.c"
  {
#line 2205 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2208 "calendar.c"
    {
#line 2210 "calendar.c"
      mercury__calendar____Compare____days_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2213 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2215 "calendar.c"
  }
#line 2217 "calendar.c"
}

#line 2220 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
#line 2223 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2225 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2227 "calendar.c"
{
#line 2229 "calendar.c"
  {
#line 2231 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2234 "calendar.c"
    {
#line 2236 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____duration_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2239 "calendar.c"
    return mercury__calendar__succeeded;
#line 2241 "calendar.c"
  }
#line 2243 "calendar.c"
}

#line 2246 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
#line 2249 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2251 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2253 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2255 "calendar.c"
{
#line 2257 "calendar.c"
  {
#line 2259 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2262 "calendar.c"
    {
#line 2264 "calendar.c"
      mercury__calendar____Compare____duration_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2267 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2269 "calendar.c"
  }
#line 2271 "calendar.c"
}

#line 2274 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
#line 2277 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2279 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2281 "calendar.c"
{
#line 2283 "calendar.c"
  {
#line 2285 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2288 "calendar.c"
    {
#line 2290 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____hour_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2293 "calendar.c"
    return mercury__calendar__succeeded;
#line 2295 "calendar.c"
  }
#line 2297 "calendar.c"
}

#line 2300 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
#line 2303 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2305 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2307 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2309 "calendar.c"
{
#line 2311 "calendar.c"
  {
#line 2313 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2316 "calendar.c"
    {
#line 2318 "calendar.c"
      mercury__calendar____Compare____hour_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2321 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2323 "calendar.c"
  }
#line 2325 "calendar.c"
}

#line 2328 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
#line 2331 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2333 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2335 "calendar.c"
{
#line 2337 "calendar.c"
  {
#line 2339 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2342 "calendar.c"
    {
#line 2344 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____hours_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2347 "calendar.c"
    return mercury__calendar__succeeded;
#line 2349 "calendar.c"
  }
#line 2351 "calendar.c"
}

#line 2354 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
#line 2357 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2359 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2361 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2363 "calendar.c"
{
#line 2365 "calendar.c"
  {
#line 2367 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2370 "calendar.c"
    {
#line 2372 "calendar.c"
      mercury__calendar____Compare____hours_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2375 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2377 "calendar.c"
  }
#line 2379 "calendar.c"
}

#line 2382 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
#line 2385 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2387 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2389 "calendar.c"
{
#line 2391 "calendar.c"
  {
#line 2393 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2396 "calendar.c"
    {
#line 2398 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____microsecond_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2401 "calendar.c"
    return mercury__calendar__succeeded;
#line 2403 "calendar.c"
  }
#line 2405 "calendar.c"
}

#line 2408 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
#line 2411 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2413 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2415 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2417 "calendar.c"
{
#line 2419 "calendar.c"
  {
#line 2421 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2424 "calendar.c"
    {
#line 2426 "calendar.c"
      mercury__calendar____Compare____microsecond_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2429 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2431 "calendar.c"
  }
#line 2433 "calendar.c"
}

#line 2436 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
#line 2439 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2441 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2443 "calendar.c"
{
#line 2445 "calendar.c"
  {
#line 2447 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2450 "calendar.c"
    {
#line 2452 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____microseconds_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2455 "calendar.c"
    return mercury__calendar__succeeded;
#line 2457 "calendar.c"
  }
#line 2459 "calendar.c"
}

#line 2462 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
#line 2465 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2467 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2469 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2471 "calendar.c"
{
#line 2473 "calendar.c"
  {
#line 2475 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2478 "calendar.c"
    {
#line 2480 "calendar.c"
      mercury__calendar____Compare____microseconds_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2483 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2485 "calendar.c"
  }
#line 2487 "calendar.c"
}

#line 2490 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
#line 2493 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2495 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2497 "calendar.c"
{
#line 2499 "calendar.c"
  {
#line 2501 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2504 "calendar.c"
    {
#line 2506 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____minute_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2509 "calendar.c"
    return mercury__calendar__succeeded;
#line 2511 "calendar.c"
  }
#line 2513 "calendar.c"
}

#line 2516 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
#line 2519 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2521 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2523 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2525 "calendar.c"
{
#line 2527 "calendar.c"
  {
#line 2529 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2532 "calendar.c"
    {
#line 2534 "calendar.c"
      mercury__calendar____Compare____minute_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2537 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2539 "calendar.c"
  }
#line 2541 "calendar.c"
}

#line 2544 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
#line 2547 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2549 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2551 "calendar.c"
{
#line 2553 "calendar.c"
  {
#line 2555 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2558 "calendar.c"
    {
#line 2560 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____minutes_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2563 "calendar.c"
    return mercury__calendar__succeeded;
#line 2565 "calendar.c"
  }
#line 2567 "calendar.c"
}

#line 2570 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
#line 2573 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2575 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2577 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2579 "calendar.c"
{
#line 2581 "calendar.c"
  {
#line 2583 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2586 "calendar.c"
    {
#line 2588 "calendar.c"
      mercury__calendar____Compare____minutes_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2591 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2593 "calendar.c"
  }
#line 2595 "calendar.c"
}

#line 2598 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
#line 2601 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2603 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2605 "calendar.c"
{
#line 2607 "calendar.c"
  {
#line 2609 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2612 "calendar.c"
    {
#line 2614 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____month_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2617 "calendar.c"
    return mercury__calendar__succeeded;
#line 2619 "calendar.c"
  }
#line 2621 "calendar.c"
}

#line 2624 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
#line 2627 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2629 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2631 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2633 "calendar.c"
{
#line 2635 "calendar.c"
  {
#line 2637 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2640 "calendar.c"
    {
#line 2642 "calendar.c"
      mercury__calendar____Compare____month_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2645 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2647 "calendar.c"
  }
#line 2649 "calendar.c"
}

#line 2652 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
#line 2655 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2657 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2659 "calendar.c"
{
#line 2661 "calendar.c"
  {
#line 2663 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2666 "calendar.c"
    {
#line 2668 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____months_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2671 "calendar.c"
    return mercury__calendar__succeeded;
#line 2673 "calendar.c"
  }
#line 2675 "calendar.c"
}

#line 2678 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
#line 2681 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2683 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2685 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2687 "calendar.c"
{
#line 2689 "calendar.c"
  {
#line 2691 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2694 "calendar.c"
    {
#line 2696 "calendar.c"
      mercury__calendar____Compare____months_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2699 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2701 "calendar.c"
  }
#line 2703 "calendar.c"
}

#line 2706 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
#line 2709 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2711 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2713 "calendar.c"
{
#line 2715 "calendar.c"
  {
#line 2717 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2720 "calendar.c"
    {
#line 2722 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____order_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2725 "calendar.c"
    return mercury__calendar__succeeded;
#line 2727 "calendar.c"
  }
#line 2729 "calendar.c"
}

#line 2732 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
#line 2735 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2737 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2739 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2741 "calendar.c"
{
#line 2743 "calendar.c"
  {
#line 2745 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2748 "calendar.c"
    {
#line 2750 "calendar.c"
      mercury__calendar____Compare____order_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2753 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2755 "calendar.c"
  }
#line 2757 "calendar.c"
}

#line 2760 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
#line 2763 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2765 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2767 "calendar.c"
{
#line 2769 "calendar.c"
  {
#line 2771 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2774 "calendar.c"
    {
#line 2776 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____second_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2779 "calendar.c"
    return mercury__calendar__succeeded;
#line 2781 "calendar.c"
  }
#line 2783 "calendar.c"
}

#line 2786 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
#line 2789 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2791 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2793 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2795 "calendar.c"
{
#line 2797 "calendar.c"
  {
#line 2799 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2802 "calendar.c"
    {
#line 2804 "calendar.c"
      mercury__calendar____Compare____second_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2807 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2809 "calendar.c"
  }
#line 2811 "calendar.c"
}

#line 2814 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
#line 2817 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2819 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2821 "calendar.c"
{
#line 2823 "calendar.c"
  {
#line 2825 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2828 "calendar.c"
    {
#line 2830 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____seconds_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2833 "calendar.c"
    return mercury__calendar__succeeded;
#line 2835 "calendar.c"
  }
#line 2837 "calendar.c"
}

#line 2840 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
#line 2843 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2845 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2847 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2849 "calendar.c"
{
#line 2851 "calendar.c"
  {
#line 2853 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2856 "calendar.c"
    {
#line 2858 "calendar.c"
      mercury__calendar____Compare____seconds_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2861 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2863 "calendar.c"
  }
#line 2865 "calendar.c"
}

#line 2868 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
#line 2871 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2873 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2875 "calendar.c"
{
#line 2877 "calendar.c"
  {
#line 2879 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2882 "calendar.c"
    {
#line 2884 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____year_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2887 "calendar.c"
    return mercury__calendar__succeeded;
#line 2889 "calendar.c"
  }
#line 2891 "calendar.c"
}

#line 2894 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
#line 2897 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2899 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2901 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2903 "calendar.c"
{
#line 2905 "calendar.c"
  {
#line 2907 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2910 "calendar.c"
    {
#line 2912 "calendar.c"
      mercury__calendar____Compare____year_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2915 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2917 "calendar.c"
  }
#line 2919 "calendar.c"
}

#line 2922 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
#line 2925 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2927 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2929 "calendar.c"
{
#line 2931 "calendar.c"
  {
#line 2933 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2936 "calendar.c"
    {
#line 2938 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____years_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2941 "calendar.c"
    return mercury__calendar__succeeded;
#line 2943 "calendar.c"
  }
#line 2945 "calendar.c"
}

#line 2948 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
#line 2951 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2953 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2955 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2957 "calendar.c"
{
#line 2959 "calendar.c"
  {
#line 2961 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2964 "calendar.c"
    {
#line 2966 "calendar.c"
      mercury__calendar____Compare____years_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2969 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2971 "calendar.c"
  }
#line 2973 "calendar.c"
}

#line 79 "string.opt"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0(
#line 79 "string.opt"
  MR_Char mercury__calendar__V_11_11,
#line 79 "string.opt"
  MR_String mercury__calendar__S_6_6,
#line 79 "string.opt"
  MR_Integer mercury__calendar__I_7_7,
#line 79 "string.opt"
  MR_Integer * mercury__calendar__Index_8_8)
#line 79 "string.opt"
{
#line 861 "string.opt"
  while (MR_TRUE)
#line 861 "string.opt"
    {
#line 861 "string.opt"
      /* tailcall optimized into a loop */
#line 861 "string.opt"
      {
#line 861 "string.opt"
        MR_bool mercury__calendar__succeeded;
#line 861 "string.opt"
        MR_Integer mercury__calendar__J_9_9;
#line 857 "string.opt"
        MR_Char mercury__calendar__Char_10_10;

#line 222 "string.opt"
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
#line 222 "string.opt"

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

#line 3032 "calendar.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__calendar__J_9_9  = PrevIndex;
	 mercury__calendar__Char_10_10  = Ch;
#line 222 "string.opt"
	}
mercury__calendar__succeeded  = SUCCESS_INDICATOR;
}
#line 857 "string.opt"
        if (mercury__calendar__succeeded)
#line 696 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__V_11_11 == mercury__calendar__Char_10_10);
#line 861 "string.opt"
        if (mercury__calendar__succeeded)
#line 860 "string.opt"
          {
#line 860 "string.opt"
            /* direct tailcall eliminated */
#line 860 "string.opt"
            {
#line 860 "string.opt"
              MR_Integer mercury__calendar__I_7__tmp_copy_7 = mercury__calendar__J_9_9;

#line 860 "string.opt"
              mercury__calendar__I_7_7 = mercury__calendar__I_7__tmp_copy_7;
#line 860 "string.opt"
            }
#line 860 "string.opt"
            continue;
#line 860 "string.opt"
          }
#line 861 "string.opt"
        else
#line 862 "string.opt"
          *mercury__calendar__Index_8_8 = mercury__calendar__I_7_7;
#line 861 "string.opt"
      }
#line 861 "string.opt"
      break;
#line 861 "string.opt"
    }
#line 79 "string.opt"
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

#line 781 "calendar.m"
            {
#line 781 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_8_8, mercury__calendar__X_5_5, &mercury__calendar__DateA_13);
            }
#line 782 "calendar.m"
            {
#line 782 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_9_9, mercury__calendar__X_5_5, &mercury__calendar__DateB_14);
            }
#line 783 "calendar.m"
            {
#line 783 "calendar.m"
              mercury__calendar____Compare____date_0_0(&mercury__calendar__CompRes_15, mercury__calendar__DateA_13, mercury__calendar__DateB_14);
            }
#line 784 "calendar.m"
            if ((mercury__calendar__CompRes_15 == (MR_Integer) 1))
#line 784 "calendar.m"
              mercury__calendar__succeeded = MR_TRUE;
#line 784 "calendar.m"
            else
#line 784 "calendar.m"
            if ((mercury__calendar__CompRes_15 == (MR_Integer) 0))
#line 784 "calendar.m"
              mercury__calendar__succeeded = MR_TRUE;
#line 784 "calendar.m"
            else
#line 784 "calendar.m"
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

#line 884 "calendar.m"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 884 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_E_0_11,
#line 884 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_E_12)
#line 884 "calendar.m"
{
#line 895 "calendar.m"
  while (MR_TRUE)
#line 895 "calendar.m"
    {
#line 895 "calendar.m"
      /* tailcall optimized into a loop */
#line 895 "calendar.m"
      {
#line 895 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 895 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 895 "calendar.m"
        MR_Integer mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 895 "calendar.m"
        MR_Integer mercury__calendar__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 887 "calendar.m"
        MR_Integer mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 887 "calendar.m"
        MR_Integer mercury__calendar__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 887 "calendar.m"
        MR_Integer mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 887 "calendar.m"
        MR_Integer mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

#line 887 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_13_13 < (MR_Integer) 1);
#line 895 "calendar.m"
        if (mercury__calendar__succeeded)
#line 889 "calendar.m"
          {
#line 889 "calendar.m"
            MR_Integer mercury__calendar__Temp_9;
#line 889 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_15_15;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_16_16;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_20_20 = (mercury__calendar__V_58_58 - (MR_Integer) 1);
#line 889 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_24_24;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 889 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_28_28;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_82_82;
#line 889 "calendar.m"
            MR_Integer mercury__calendar__V_94_94;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_81_81;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_84_84;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_85_85;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_86_86;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_87_87;
#line 888 "calendar.m"
            MR_Integer mercury__calendar__V_83_83;
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_96_96;
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_97_97;
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_98_98;
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_99_99;
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_100_100;
#line 892 "calendar.m"
            MR_Integer mercury__calendar__V_95_95;
#line 893 "calendar.m"
            MR_Integer mercury__calendar__V_108_108;
#line 893 "calendar.m"
            MR_Integer mercury__calendar__V_109_109;
#line 893 "calendar.m"
            MR_Integer mercury__calendar__V_110_110;
#line 893 "calendar.m"
            MR_Integer mercury__calendar__V_111_111;
#line 893 "calendar.m"
            MR_Integer mercury__calendar__V_112_112;
#line 893 "calendar.m"
            MR_Integer mercury__calendar__V_113_113;
#line 893 "calendar.m"
            MR_Integer mercury__calendar__V_107_107;

#line 889 "calendar.m"
            {
#line 889 "calendar.m"
              mercury__calendar__V_18_18 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_57_57, mercury__calendar__V_20_20);
            }
#line 888 "calendar.m"
            mercury__calendar__V_16_16 = (mercury__calendar__V_13_13 + mercury__calendar__V_18_18);
#line 888 "calendar.m"
            mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 888 "calendar.m"
            mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 888 "calendar.m"
            mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 888 "calendar.m"
            mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 888 "calendar.m"
            mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 888 "calendar.m"
            mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 888 "calendar.m"
            mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
#line 888 "calendar.m"
            {
#line 888 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 0) = ((MR_Box) (mercury__calendar__V_81_81));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 1) = ((MR_Box) (mercury__calendar__V_82_82));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 2) = ((MR_Box) (mercury__calendar__V_16_16));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 3) = ((MR_Box) (mercury__calendar__V_84_84));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 4) = ((MR_Box) (mercury__calendar__V_85_85));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 5) = ((MR_Box) (mercury__calendar__V_86_86));
#line 888 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 6) = ((MR_Box) (mercury__calendar__V_87_87));
#line 888 "calendar.m"
            }
#line 891 "calendar.m"
            mercury__calendar__Temp_9 = (mercury__calendar__V_82_82 + (MR_Integer) -1);
#line 892 "calendar.m"
            {
#line 892 "calendar.m"
              mercury__calendar__V_25_25 = mercury__calendar__modulo_3_f_0(mercury__calendar__Temp_9, (MR_Integer) 1, (MR_Integer) 13);
            }
#line 892 "calendar.m"
            mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 0)));
#line 892 "calendar.m"
            mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 1)));
#line 892 "calendar.m"
            mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 2)));
#line 892 "calendar.m"
            mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 3)));
#line 892 "calendar.m"
            mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 4)));
#line 892 "calendar.m"
            mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 5)));
#line 892 "calendar.m"
            mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 6)));
#line 892 "calendar.m"
            {
#line 892 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 892 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 0) = ((MR_Box) (mercury__calendar__V_94_94));
#line 892 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 1) = ((MR_Box) (mercury__calendar__V_25_25));
#line 892 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 2) = ((MR_Box) (mercury__calendar__V_96_96));
#line 892 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 3) = ((MR_Box) (mercury__calendar__V_97_97));
#line 892 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 4) = ((MR_Box) (mercury__calendar__V_98_98));
#line 892 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 5) = ((MR_Box) (mercury__calendar__V_99_99));
#line 892 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 6) = ((MR_Box) (mercury__calendar__V_100_100));
#line 892 "calendar.m"
            }
#line 893 "calendar.m"
            {
#line 893 "calendar.m"
              mercury__calendar__V_31_31 = mercury__calendar__fquotient_3_f_0(mercury__calendar__Temp_9, (MR_Integer) 1, (MR_Integer) 13);
            }
#line 893 "calendar.m"
            mercury__calendar__V_29_29 = (mercury__calendar__V_94_94 + mercury__calendar__V_31_31);
#line 893 "calendar.m"
            mercury__calendar__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 0)));
#line 893 "calendar.m"
            mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 1)));
#line 893 "calendar.m"
            mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 2)));
#line 893 "calendar.m"
            mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 3)));
#line 893 "calendar.m"
            mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 4)));
#line 893 "calendar.m"
            mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 5)));
#line 893 "calendar.m"
            mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 6)));
#line 893 "calendar.m"
            {
#line 893 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 893 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 0) = ((MR_Box) (mercury__calendar__V_29_29));
#line 893 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 1) = ((MR_Box) (mercury__calendar__V_108_108));
#line 893 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 2) = ((MR_Box) (mercury__calendar__V_109_109));
#line 893 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 3) = ((MR_Box) (mercury__calendar__V_110_110));
#line 893 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 4) = ((MR_Box) (mercury__calendar__V_111_111));
#line 893 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 5) = ((MR_Box) (mercury__calendar__V_112_112));
#line 893 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 6) = ((MR_Box) (mercury__calendar__V_113_113));
#line 893 "calendar.m"
            }
#line 894 "calendar.m"
            /* direct tailcall eliminated */
#line 894 "calendar.m"
            {
#line 894 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_E_28_28;

#line 894 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_0_11 = mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11;
#line 894 "calendar.m"
            }
#line 894 "calendar.m"
            continue;
#line 889 "calendar.m"
          }
#line 895 "calendar.m"
        else
#line 905 "calendar.m"
          {
#line 905 "calendar.m"
            MR_Integer mercury__calendar__MaxDaysInMonth_10;
#line 905 "calendar.m"
            MR_Integer mercury__calendar__V_37_37;
#line 905 "calendar.m"
            MR_Integer mercury__calendar__V_126_126;
#line 905 "calendar.m"
            MR_Integer mercury__calendar__V_127_127;
#line 905 "calendar.m"
            MR_Integer mercury__calendar__V_128_128;
#line 905 "calendar.m"
            MR_Integer mercury__calendar__V_129_129;
#line 905 "calendar.m"
            MR_Integer mercury__calendar__V_130_130;
#line 905 "calendar.m"
            MR_Integer mercury__calendar__V_131_131;
#line 896 "calendar.m"
            MR_Integer mercury__calendar__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 896 "calendar.m"
            MR_Integer mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 896 "calendar.m"
            MR_Integer mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 896 "calendar.m"
            MR_Integer mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 896 "calendar.m"
            MR_Integer mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 896 "calendar.m"
            MR_Integer mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 896 "calendar.m"
            MR_Integer mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

#line 896 "calendar.m"
            {
#line 896 "calendar.m"
              mercury__calendar__MaxDaysInMonth_10 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_35_35, mercury__calendar__V_114_114);
            }
#line 897 "calendar.m"
            mercury__calendar__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 897 "calendar.m"
            mercury__calendar__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 897 "calendar.m"
            mercury__calendar__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 897 "calendar.m"
            mercury__calendar__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 897 "calendar.m"
            mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 897 "calendar.m"
            mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 897 "calendar.m"
            mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
#line 897 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_37_37 > mercury__calendar__MaxDaysInMonth_10);
#line 905 "calendar.m"
            if (mercury__calendar__succeeded)
#line 899 "calendar.m"
              {
#line 899 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_38_38;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_39_39 = (mercury__calendar__V_37_37 - mercury__calendar__MaxDaysInMonth_10);
#line 899 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_42_42;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_43_43;
#line 899 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_46_46;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_47_47;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_49_49;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__Temp_54;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_139_139 = mercury__calendar__V_127_127;
#line 899 "calendar.m"
                MR_Integer mercury__calendar__V_151_151;
#line 902 "calendar.m"
                MR_Integer mercury__calendar__V_153_153;
#line 902 "calendar.m"
                MR_Integer mercury__calendar__V_154_154;
#line 902 "calendar.m"
                MR_Integer mercury__calendar__V_155_155;
#line 902 "calendar.m"
                MR_Integer mercury__calendar__V_156_156;
#line 902 "calendar.m"
                MR_Integer mercury__calendar__V_157_157;
#line 902 "calendar.m"
                MR_Integer mercury__calendar__V_152_152;
#line 903 "calendar.m"
                MR_Integer mercury__calendar__V_165_165;
#line 903 "calendar.m"
                MR_Integer mercury__calendar__V_166_166;
#line 903 "calendar.m"
                MR_Integer mercury__calendar__V_167_167;
#line 903 "calendar.m"
                MR_Integer mercury__calendar__V_168_168;
#line 903 "calendar.m"
                MR_Integer mercury__calendar__V_169_169;
#line 903 "calendar.m"
                MR_Integer mercury__calendar__V_170_170;
#line 903 "calendar.m"
                MR_Integer mercury__calendar__V_164_164;

#line 899 "calendar.m"
                {
#line 899 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 0) = ((MR_Box) (mercury__calendar__V_126_126));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 1) = ((MR_Box) (mercury__calendar__V_139_139));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 2) = ((MR_Box) (mercury__calendar__V_39_39));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 3) = ((MR_Box) (mercury__calendar__V_128_128));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 4) = ((MR_Box) (mercury__calendar__V_129_129));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 5) = ((MR_Box) (mercury__calendar__V_130_130));
#line 899 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 6) = ((MR_Box) (mercury__calendar__V_131_131));
#line 899 "calendar.m"
                }
#line 901 "calendar.m"
                mercury__calendar__Temp_54 = (mercury__calendar__V_139_139 + (MR_Integer) 1);
#line 902 "calendar.m"
                {
#line 902 "calendar.m"
                  mercury__calendar__V_43_43 = mercury__calendar__modulo_3_f_0(mercury__calendar__Temp_54, (MR_Integer) 1, (MR_Integer) 13);
                }
#line 902 "calendar.m"
                mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 0)));
#line 902 "calendar.m"
                mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 1)));
#line 902 "calendar.m"
                mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 2)));
#line 902 "calendar.m"
                mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 3)));
#line 902 "calendar.m"
                mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 4)));
#line 902 "calendar.m"
                mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 5)));
#line 902 "calendar.m"
                mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 6)));
#line 902 "calendar.m"
                {
#line 902 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 902 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 0) = ((MR_Box) (mercury__calendar__V_151_151));
#line 902 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 1) = ((MR_Box) (mercury__calendar__V_43_43));
#line 902 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 2) = ((MR_Box) (mercury__calendar__V_153_153));
#line 902 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 3) = ((MR_Box) (mercury__calendar__V_154_154));
#line 902 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 4) = ((MR_Box) (mercury__calendar__V_155_155));
#line 902 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 5) = ((MR_Box) (mercury__calendar__V_156_156));
#line 902 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 6) = ((MR_Box) (mercury__calendar__V_157_157));
#line 902 "calendar.m"
                }
#line 903 "calendar.m"
                {
#line 903 "calendar.m"
                  mercury__calendar__V_49_49 = mercury__calendar__fquotient_3_f_0(mercury__calendar__Temp_54, (MR_Integer) 1, (MR_Integer) 13);
                }
#line 903 "calendar.m"
                mercury__calendar__V_47_47 = (mercury__calendar__V_151_151 + mercury__calendar__V_49_49);
#line 903 "calendar.m"
                mercury__calendar__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 0)));
#line 903 "calendar.m"
                mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 1)));
#line 903 "calendar.m"
                mercury__calendar__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 2)));
#line 903 "calendar.m"
                mercury__calendar__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 3)));
#line 903 "calendar.m"
                mercury__calendar__V_168_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 4)));
#line 903 "calendar.m"
                mercury__calendar__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 5)));
#line 903 "calendar.m"
                mercury__calendar__V_170_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 6)));
#line 903 "calendar.m"
                {
#line 903 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 903 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 0) = ((MR_Box) (mercury__calendar__V_47_47));
#line 903 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 1) = ((MR_Box) (mercury__calendar__V_165_165));
#line 903 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 2) = ((MR_Box) (mercury__calendar__V_166_166));
#line 903 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 3) = ((MR_Box) (mercury__calendar__V_167_167));
#line 903 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 4) = ((MR_Box) (mercury__calendar__V_168_168));
#line 903 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 5) = ((MR_Box) (mercury__calendar__V_169_169));
#line 903 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 6) = ((MR_Box) (mercury__calendar__V_170_170));
#line 903 "calendar.m"
                }
#line 904 "calendar.m"
                /* direct tailcall eliminated */
#line 904 "calendar.m"
                {
#line 904 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_E_46_46;

#line 904 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_0_11 = mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11;
#line 904 "calendar.m"
                }
#line 904 "calendar.m"
                continue;
#line 899 "calendar.m"
              }
#line 905 "calendar.m"
            else
#line 905 "calendar.m"
              *mercury__calendar__STATE_VARIABLE_E_12 = mercury__calendar__STATE_VARIABLE_E_0_11;
#line 905 "calendar.m"
          }
#line 895 "calendar.m"
      }
#line 895 "calendar.m"
      break;
#line 895 "calendar.m"
    }
#line 884 "calendar.m"
}

#line 179 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____years_0_0(
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
mercury__calendar____Unify____years_0_0(
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

#line 43 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____year_0_0(
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
mercury__calendar____Unify____year_0_0(
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

#line 184 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____seconds_0_0(
#line 184 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 184 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 184 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 184 "calendar.m"
{
#line 184 "calendar.m"
  {
#line 184 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 184 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 184 "calendar.m"
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
#line 184 "calendar.m"
  }
#line 184 "calendar.m"
}

#line 184 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0(
#line 184 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 184 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 184 "calendar.m"
{
#line 184 "calendar.m"
  {
#line 184 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 184 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 184 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 184 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 184 "calendar.m"
    return mercury__calendar__succeeded;
#line 184 "calendar.m"
  }
#line 184 "calendar.m"
}

#line 47 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____second_0_0(
#line 47 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 47 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 47 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 47 "calendar.m"
{
#line 47 "calendar.m"
  {
#line 47 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 47 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 47 "calendar.m"
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
#line 47 "calendar.m"
  }
#line 47 "calendar.m"
}

#line 47 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0(
#line 47 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 47 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 47 "calendar.m"
{
#line 47 "calendar.m"
  {
#line 47 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 47 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 47 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 47 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 47 "calendar.m"
    return mercury__calendar__succeeded;
#line 47 "calendar.m"
  }
#line 47 "calendar.m"
}

#line 960 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____order_0_0(
#line 960 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 960 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 960 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 960 "calendar.m"
{
#line 960 "calendar.m"
  {
#line 960 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 960 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 960 "calendar.m"
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
#line 960 "calendar.m"
  }
#line 960 "calendar.m"
}

#line 960 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0(
#line 960 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_1,
#line 960 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 960 "calendar.m"
{
#line 4030 "calendar.c"
  {
#line 4032 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 4035 "calendar.c"
    return mercury__calendar__succeeded;
#line 4037 "calendar.c"
  }
#line 960 "calendar.m"
}

#line 180 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____months_0_0(
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
mercury__calendar____Unify____months_0_0(
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

#line 50 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____month_0_0(
#line 50 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 50 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 50 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 50 "calendar.m"
{
#line 50 "calendar.m"
  {
#line 50 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 50 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 50 "calendar.m"
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
#line 50 "calendar.m"
  }
#line 50 "calendar.m"
}

#line 50 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0(
#line 50 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_1,
#line 50 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 50 "calendar.m"
{
#line 4172 "calendar.c"
  {
#line 4174 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 4177 "calendar.c"
    return mercury__calendar__succeeded;
#line 4179 "calendar.c"
  }
#line 50 "calendar.m"
}

#line 183 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____minutes_0_0(
#line 183 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 183 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 183 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 183 "calendar.m"
{
#line 183 "calendar.m"
  {
#line 183 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 183 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 183 "calendar.m"
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
#line 183 "calendar.m"
  }
#line 183 "calendar.m"
}

#line 183 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0(
#line 183 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 183 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 183 "calendar.m"
{
#line 183 "calendar.m"
  {
#line 183 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 183 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 183 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 183 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 183 "calendar.m"
    return mercury__calendar__succeeded;
#line 183 "calendar.m"
  }
#line 183 "calendar.m"
}

#line 46 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____minute_0_0(
#line 46 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 46 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 46 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 46 "calendar.m"
{
#line 46 "calendar.m"
  {
#line 46 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 46 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 46 "calendar.m"
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
#line 46 "calendar.m"
  }
#line 46 "calendar.m"
}

#line 46 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0(
#line 46 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 46 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 46 "calendar.m"
{
#line 46 "calendar.m"
  {
#line 46 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 46 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 46 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 46 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 46 "calendar.m"
    return mercury__calendar__succeeded;
#line 46 "calendar.m"
  }
#line 46 "calendar.m"
}

#line 185 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____microseconds_0_0(
#line 185 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 185 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 185 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 185 "calendar.m"
{
#line 185 "calendar.m"
  {
#line 185 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 185 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 185 "calendar.m"
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
#line 185 "calendar.m"
  }
#line 185 "calendar.m"
}

#line 185 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0(
#line 185 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 185 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 185 "calendar.m"
{
#line 185 "calendar.m"
  {
#line 185 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 185 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 185 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 185 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 185 "calendar.m"
    return mercury__calendar__succeeded;
#line 185 "calendar.m"
  }
#line 185 "calendar.m"
}

#line 48 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____microsecond_0_0(
#line 48 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 48 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 48 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 48 "calendar.m"
{
#line 48 "calendar.m"
  {
#line 48 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 48 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 48 "calendar.m"
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
#line 48 "calendar.m"
  }
#line 48 "calendar.m"
}

#line 48 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0(
#line 48 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 48 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 48 "calendar.m"
{
#line 48 "calendar.m"
  {
#line 48 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 48 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 48 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 48 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 48 "calendar.m"
    return mercury__calendar__succeeded;
#line 48 "calendar.m"
  }
#line 48 "calendar.m"
}

#line 182 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____hours_0_0(
#line 182 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 182 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 182 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 182 "calendar.m"
{
#line 182 "calendar.m"
  {
#line 182 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 182 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 182 "calendar.m"
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
#line 182 "calendar.m"
  }
#line 182 "calendar.m"
}

#line 182 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0(
#line 182 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 182 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 182 "calendar.m"
{
#line 182 "calendar.m"
  {
#line 182 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 182 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 182 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 182 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 182 "calendar.m"
    return mercury__calendar__succeeded;
#line 182 "calendar.m"
  }
#line 182 "calendar.m"
}

#line 45 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____hour_0_0(
#line 45 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 45 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 45 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 45 "calendar.m"
{
#line 45 "calendar.m"
  {
#line 45 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 45 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 45 "calendar.m"
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
#line 45 "calendar.m"
  }
#line 45 "calendar.m"
}

#line 45 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0(
#line 45 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 45 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 45 "calendar.m"
{
#line 45 "calendar.m"
  {
#line 45 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 45 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 45 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 45 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 45 "calendar.m"
    return mercury__calendar__succeeded;
#line 45 "calendar.m"
  }
#line 45 "calendar.m"
}

#line 418 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____duration_0_0(
#line 418 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 418 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 418 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 418 "calendar.m"
{
#line 418 "calendar.m"
  {
#line 418 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 418 "calendar.m"
    MR_Integer mercury__calendar__CastX_15 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 418 "calendar.m"
    MR_Integer mercury__calendar__CastY_16 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 418 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_15 == mercury__calendar__CastY_16);
#line 418 "calendar.m"
    if (mercury__calendar__succeeded)
#line 4652 "calendar.c"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 418 "calendar.m"
    else
#line 418 "calendar.m"
      {
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 0)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 2)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 3)));
#line 418 "calendar.m"
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
#line 4699 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_12_12 == (MR_Integer) 0);
#line 418 "calendar.m"
        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 418 "calendar.m"
        if (mercury__calendar__succeeded)
#line 418 "calendar.m"
          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_12_12;
#line 418 "calendar.m"
        else
#line 418 "calendar.m"
          {
#line 418 "calendar.m"
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
#line 4736 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_13_13 == (MR_Integer) 0);
#line 418 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 418 "calendar.m"
            if (mercury__calendar__succeeded)
#line 418 "calendar.m"
              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_13_13;
#line 418 "calendar.m"
            else
#line 418 "calendar.m"
              {
#line 418 "calendar.m"
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
#line 4773 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_14_14 == (MR_Integer) 0);
#line 418 "calendar.m"
                mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 418 "calendar.m"
                if (mercury__calendar__succeeded)
#line 418 "calendar.m"
                  *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_14_14;
#line 418 "calendar.m"
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
#line 418 "calendar.m"
              }
#line 418 "calendar.m"
          }
#line 418 "calendar.m"
      }
#line 418 "calendar.m"
  }
#line 418 "calendar.m"
}

#line 418 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0(
#line 418 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 418 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 418 "calendar.m"
{
#line 418 "calendar.m"
  {
#line 418 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 418 "calendar.m"
    MR_Integer mercury__calendar__CastX_11 = (MR_Integer) mercury__calendar__HeadVar__1_1;
#line 418 "calendar.m"
    MR_Integer mercury__calendar__CastY_12 = (MR_Integer) mercury__calendar__HeadVar__2_2;

#line 418 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_11 == mercury__calendar__CastY_12);
#line 418 "calendar.m"
    if (mercury__calendar__succeeded)
#line 418 "calendar.m"
      mercury__calendar__succeeded = MR_TRUE;
#line 418 "calendar.m"
    else
#line 418 "calendar.m"
      {
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 418 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));

#line 4865 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_3_3 == mercury__calendar__V_7_7);
#line 418 "calendar.m"
        if (mercury__calendar__succeeded)
#line 418 "calendar.m"
          {
#line 4871 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_4_4 == mercury__calendar__V_8_8);
#line 418 "calendar.m"
            if (mercury__calendar__succeeded)
#line 418 "calendar.m"
              {
#line 4877 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_5_5 == mercury__calendar__V_9_9);
#line 418 "calendar.m"
                if (mercury__calendar__succeeded)
#line 4881 "calendar.c"
                  mercury__calendar__succeeded = (mercury__calendar__V_6_6 == mercury__calendar__V_10_10);
#line 418 "calendar.m"
              }
#line 418 "calendar.m"
          }
#line 418 "calendar.m"
      }
#line 418 "calendar.m"
    return mercury__calendar__succeeded;
#line 418 "calendar.m"
  }
#line 418 "calendar.m"
}

#line 181 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____days_0_0(
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
mercury__calendar____Unify____days_0_0(
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

#line 64 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0(
#line 64 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 64 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 64 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 64 "calendar.m"
{
#line 64 "calendar.m"
  {
#line 64 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 64 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 64 "calendar.m"
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
#line 64 "calendar.m"
  }
#line 64 "calendar.m"
}

#line 64 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0(
#line 64 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_1,
#line 64 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 64 "calendar.m"
{
#line 5026 "calendar.c"
  {
#line 5028 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 5031 "calendar.c"
    return mercury__calendar__succeeded;
#line 5033 "calendar.c"
  }
#line 64 "calendar.m"
}

#line 44 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0(
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
mercury__calendar____Unify____day_of_month_0_0(
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

#line 39 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____date_time_0_0(
#line 39 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 39 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 39 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 39 "calendar.m"
{
#line 39 "calendar.m"
  {
#line 39 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 39 "calendar.m"
    MR_Word mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 39 "calendar.m"
    MR_Word mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

#line 39 "calendar.m"
    {
#line 39 "calendar.m"
      mercury__calendar____Compare____date_0_0(mercury__calendar__HeadVar__1_1, mercury__calendar__Cast_HeadVar1_4, mercury__calendar__Cast_HeadVar2_5);
#line 39 "calendar.m"
      return;
    }
#line 39 "calendar.m"
  }
#line 39 "calendar.m"
}

#line 39 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0(
#line 39 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 39 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 39 "calendar.m"
{
#line 39 "calendar.m"
  {
#line 39 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 39 "calendar.m"
    MR_Word mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 39 "calendar.m"
    MR_Word mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 39 "calendar.m"
    {
#line 39 "calendar.m"
      return mercury__calendar__succeeded = mercury__calendar____Unify____date_0_0(mercury__calendar__Cast_HeadVar1_3, mercury__calendar__Cast_HeadVar2_4);
    }
#line 39 "calendar.m"
    return mercury__calendar__succeeded;
#line 39 "calendar.m"
  }
#line 39 "calendar.m"
}

#line 407 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____date_0_0(
#line 407 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 407 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 407 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 407 "calendar.m"
{
#line 407 "calendar.m"
  {
#line 407 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 407 "calendar.m"
    MR_Integer mercury__calendar__CastX_24 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 407 "calendar.m"
    MR_Integer mercury__calendar__CastY_25 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 407 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_24 == mercury__calendar__CastY_25);
#line 407 "calendar.m"
    if (mercury__calendar__succeeded)
#line 5198 "calendar.c"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 407 "calendar.m"
    else
#line 407 "calendar.m"
      {
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 4)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 5)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 6)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 0)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 1)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 2)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 3)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 4)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 5)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 6)));
#line 407 "calendar.m"
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
#line 5257 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_18_18 == (MR_Integer) 0);
#line 407 "calendar.m"
        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 407 "calendar.m"
        if (mercury__calendar__succeeded)
#line 407 "calendar.m"
          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_18_18;
#line 407 "calendar.m"
        else
#line 407 "calendar.m"
          {
#line 407 "calendar.m"
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
#line 5294 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_19_19 == (MR_Integer) 0);
#line 407 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 407 "calendar.m"
            if (mercury__calendar__succeeded)
#line 407 "calendar.m"
              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_19_19;
#line 407 "calendar.m"
            else
#line 407 "calendar.m"
              {
#line 407 "calendar.m"
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
#line 5331 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_20_20 == (MR_Integer) 0);
#line 407 "calendar.m"
                mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 407 "calendar.m"
                if (mercury__calendar__succeeded)
#line 407 "calendar.m"
                  *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_20_20;
#line 407 "calendar.m"
                else
#line 407 "calendar.m"
                  {
#line 407 "calendar.m"
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
#line 5368 "calendar.c"
                    mercury__calendar__succeeded = (mercury__calendar__V_21_21 == (MR_Integer) 0);
#line 407 "calendar.m"
                    mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 407 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 407 "calendar.m"
                      *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_21_21;
#line 407 "calendar.m"
                    else
#line 407 "calendar.m"
                      {
#line 407 "calendar.m"
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
#line 5405 "calendar.c"
                        mercury__calendar__succeeded = (mercury__calendar__V_22_22 == (MR_Integer) 0);
#line 407 "calendar.m"
                        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 407 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 407 "calendar.m"
                          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_22_22;
#line 407 "calendar.m"
                        else
#line 407 "calendar.m"
                          {
#line 407 "calendar.m"
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
#line 5442 "calendar.c"
                            mercury__calendar__succeeded = (mercury__calendar__V_23_23 == (MR_Integer) 0);
#line 407 "calendar.m"
                            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 407 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 407 "calendar.m"
                              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_23_23;
#line 407 "calendar.m"
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
#line 407 "calendar.m"
                          }
#line 407 "calendar.m"
                      }
#line 407 "calendar.m"
                  }
#line 407 "calendar.m"
              }
#line 407 "calendar.m"
          }
#line 407 "calendar.m"
      }
#line 407 "calendar.m"
  }
#line 407 "calendar.m"
}

#line 407 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0(
#line 407 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 407 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 407 "calendar.m"
{
#line 407 "calendar.m"
  {
#line 407 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 407 "calendar.m"
    MR_Integer mercury__calendar__CastX_17 = (MR_Integer) mercury__calendar__HeadVar__1_1;
#line 407 "calendar.m"
    MR_Integer mercury__calendar__CastY_18 = (MR_Integer) mercury__calendar__HeadVar__2_2;

#line 407 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_17 == mercury__calendar__CastY_18);
#line 407 "calendar.m"
    if (mercury__calendar__succeeded)
#line 407 "calendar.m"
      mercury__calendar__succeeded = MR_TRUE;
#line 407 "calendar.m"
    else
#line 407 "calendar.m"
      {
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 4)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 5)));
#line 407 "calendar.m"
        MR_Integer mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 6)));

#line 5552 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_3_3 == mercury__calendar__V_10_10);
#line 407 "calendar.m"
        if (mercury__calendar__succeeded)
#line 407 "calendar.m"
          {
#line 5558 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_4_4 == mercury__calendar__V_11_11);
#line 407 "calendar.m"
            if (mercury__calendar__succeeded)
#line 407 "calendar.m"
              {
#line 5564 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_5_5 == mercury__calendar__V_12_12);
#line 407 "calendar.m"
                if (mercury__calendar__succeeded)
#line 407 "calendar.m"
                  {
#line 5570 "calendar.c"
                    mercury__calendar__succeeded = (mercury__calendar__V_6_6 == mercury__calendar__V_13_13);
#line 407 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 407 "calendar.m"
                      {
#line 5576 "calendar.c"
                        mercury__calendar__succeeded = (mercury__calendar__V_7_7 == mercury__calendar__V_14_14);
#line 407 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 407 "calendar.m"
                          {
#line 5582 "calendar.c"
                            mercury__calendar__succeeded = (mercury__calendar__V_8_8 == mercury__calendar__V_15_15);
#line 407 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 5586 "calendar.c"
                              mercury__calendar__succeeded = (mercury__calendar__V_9_9 == mercury__calendar__V_16_16);
#line 407 "calendar.m"
                          }
#line 407 "calendar.m"
                      }
#line 407 "calendar.m"
                  }
#line 407 "calendar.m"
              }
#line 407 "calendar.m"
          }
#line 407 "calendar.m"
      }
#line 407 "calendar.m"
    return mercury__calendar__succeeded;
#line 407 "calendar.m"
  }
#line 407 "calendar.m"
}

#line 1157 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__tm_to_date_1_f_0(
#line 1157 "calendar.m"
  MR_Word mercury__calendar__TM_3)
#line 1157 "calendar.m"
{
#line 1159 "calendar.m"
  {
#line 1159 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1159 "calendar.m"
    MR_Word mercury__calendar__Date_4;
#line 1159 "calendar.m"
    MR_Integer mercury__calendar__TMYear_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 0)));
#line 1159 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 1)));
#line 1159 "calendar.m"
    MR_Integer mercury__calendar__Year_14 = ((MR_Integer) 1900 + mercury__calendar__TMYear_5);
#line 1159 "calendar.m"
    MR_Integer mercury__calendar__Month_15 = (mercury__calendar__TMMonth_6 + (MR_Integer) 1);
#line 1159 "calendar.m"
    MR_Integer mercury__calendar__Day_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 2)));
#line 1159 "calendar.m"
    MR_Integer mercury__calendar__Hour_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 3)));
#line 1159 "calendar.m"
    MR_Integer mercury__calendar__Minute_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 4)));
#line 1159 "calendar.m"
    MR_Integer mercury__calendar__Second_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 5)));
#line 1160 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 6)));
#line 1160 "calendar.m"
    MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 7)));
#line 1160 "calendar.m"
    MR_Word mercury__calendar__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 8)));

#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      mercury__calendar__Date_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 0) = ((MR_Box) (mercury__calendar__Year_14));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 1) = ((MR_Box) (mercury__calendar__Month_15));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 2) = ((MR_Box) (mercury__calendar__Day_16));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 3) = ((MR_Box) (mercury__calendar__Hour_17));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 4) = ((MR_Box) (mercury__calendar__Minute_18));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 5) = ((MR_Box) (mercury__calendar__Second_19));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1167 "calendar.m"
    }
#line 1159 "calendar.m"
    return mercury__calendar__Date_4;
#line 1159 "calendar.m"
  }
#line 1157 "calendar.m"
}

#line 1060 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_day_of_week_from_mod_1_f_0(
#line 1060 "calendar.m"
  MR_Integer mercury__calendar__Mod_3)
#line 1060 "calendar.m"
{
#line 1065 "calendar.m"
  {
#line 1065 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1065 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek_4;
#line 1065 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek0_5;

#line 1186 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 0))
#line 1186 "calendar.m"
      {
#line 1186 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 0;
#line 1186 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1186 "calendar.m"
      }
#line 1186 "calendar.m"
    else
#line 1186 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 1))
#line 1187 "calendar.m"
      {
#line 1187 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 1;
#line 1187 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1187 "calendar.m"
      }
#line 1186 "calendar.m"
    else
#line 1186 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 2))
#line 1188 "calendar.m"
      {
#line 1188 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 2;
#line 1188 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1188 "calendar.m"
      }
#line 1186 "calendar.m"
    else
#line 1186 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 3))
#line 1189 "calendar.m"
      {
#line 1189 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 3;
#line 1189 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1189 "calendar.m"
      }
#line 1186 "calendar.m"
    else
#line 1186 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 4))
#line 1190 "calendar.m"
      {
#line 1190 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 4;
#line 1190 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1190 "calendar.m"
      }
#line 1186 "calendar.m"
    else
#line 1186 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 5))
#line 1191 "calendar.m"
      {
#line 1191 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 5;
#line 1191 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1191 "calendar.m"
      }
#line 1186 "calendar.m"
    else
#line 1186 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 6))
#line 1192 "calendar.m"
      {
#line 1192 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 6;
#line 1192 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1192 "calendar.m"
      }
#line 1186 "calendar.m"
    else
#line 1186 "calendar.m"
      mercury__calendar__succeeded = MR_FALSE;
#line 1065 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1064 "calendar.m"
      mercury__calendar__DayOfWeek_4 = mercury__calendar__DayOfWeek0_5;
#line 1065 "calendar.m"
    else
#line 1066 "calendar.m"
      {
#line 1066 "calendar.m"
        MR_String mercury__calendar__V_6_6;
#line 1066 "calendar.m"
        MR_String mercury__calendar__V_8_8;

#line 714 "string.opt"
        {
#line 714 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Mod_3, (MR_Integer) 10, &mercury__calendar__V_8_8);
        }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_day_of_week_from_mod: invalid mod: ", mercury__calendar__V_8_8, &mercury__calendar__V_6_6);
        }
#line 1066 "calendar.m"
        {
#line 1066 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 1066 "calendar.m"
      }
#line 1065 "calendar.m"
    return mercury__calendar__DayOfWeek_4;
#line 1065 "calendar.m"
  }
#line 1060 "calendar.m"
}

#line 1029 "calendar.m"
static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
#line 1029 "calendar.m"
  MR_Integer mercury__calendar__BorrowVal_6,
#line 1029 "calendar.m"
  MR_Integer mercury__calendar__Val1_7,
#line 1029 "calendar.m"
  MR_Integer mercury__calendar__Val2_8,
#line 1029 "calendar.m"
  MR_Integer * mercury__calendar__Diff_9,
#line 1029 "calendar.m"
  MR_Integer * mercury__calendar__Borrow_10)
#line 1029 "calendar.m"
{
#line 1036 "calendar.m"
  {
#line 1036 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Val1_7 >= mercury__calendar__Val2_8);

#line 1036 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1034 "calendar.m"
      {
#line 1034 "calendar.m"
        *mercury__calendar__Borrow_10 = (MR_Integer) 0;
#line 1035 "calendar.m"
        *mercury__calendar__Diff_9 = (mercury__calendar__Val1_7 - mercury__calendar__Val2_8);
#line 1034 "calendar.m"
      }
#line 1036 "calendar.m"
    else
#line 1037 "calendar.m"
      {
#line 1037 "calendar.m"
        MR_Integer mercury__calendar__V_11_11;

#line 1037 "calendar.m"
        *mercury__calendar__Borrow_10 = (MR_Integer) 1;
#line 1038 "calendar.m"
        mercury__calendar__V_11_11 = (mercury__calendar__BorrowVal_6 + mercury__calendar__Val1_7);
#line 1038 "calendar.m"
        *mercury__calendar__Diff_9 = (mercury__calendar__V_11_11 - mercury__calendar__Val2_8);
#line 1037 "calendar.m"
      }
#line 1036 "calendar.m"
  }
#line 1029 "calendar.m"
}

#line 973 "calendar.m"
static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
#line 973 "calendar.m"
  MR_Word mercury__calendar__OriginalOrder_5,
#line 973 "calendar.m"
  MR_Word mercury__calendar__DateA_6,
#line 973 "calendar.m"
  MR_Word mercury__calendar__DateB_7,
#line 973 "calendar.m"
  MR_Word * mercury__calendar__Duration_8)
#line 973 "calendar.m"
{
#line 978 "calendar.m"
  {
#line 978 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__MicroSecondA_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 978 "calendar.m"
    MR_Integer mercury__calendar__MicroSecondB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 978 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_12;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__SecondA_13;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__SecondB_14;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__Seconds_15;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__MinuteA_16;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__MinuteB_17;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__Minutes_18;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__HourA_19;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__HourB_20;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__Hours_21;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__DaysToBorrow_23;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__DayA_25;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__DayB_26;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__Days_28;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__MonthA_29;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__MonthB_30;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__Months_31;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__YearA_32;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__YearB_33;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__Years_34;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_35_35;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_36_36;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_37_37;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_39_39;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_40_40;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_42_42;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_43_43;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_45_45;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_63_63;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_64_64;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_66_66;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_67_67;
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 978 "calendar.m"
    MR_Integer mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 979 "calendar.m"
    MR_Integer mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_81_81;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_82_82;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_83_83;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_84_84;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_85_85;
#line 982 "calendar.m"
    MR_Integer mercury__calendar__V_86_86;
#line 983 "calendar.m"
    MR_Integer mercury__calendar__V_87_87;
#line 983 "calendar.m"
    MR_Integer mercury__calendar__V_88_88;
#line 983 "calendar.m"
    MR_Integer mercury__calendar__V_89_89;
#line 983 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 983 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 983 "calendar.m"
    MR_Integer mercury__calendar__V_92_92;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_93_93;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_94_94;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_95_95;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_96_96;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_97_97;
#line 985 "calendar.m"
    MR_Integer mercury__calendar__V_98_98;
#line 986 "calendar.m"
    MR_Integer mercury__calendar__V_99_99;
#line 986 "calendar.m"
    MR_Integer mercury__calendar__V_100_100;
#line 986 "calendar.m"
    MR_Integer mercury__calendar__V_101_101;
#line 986 "calendar.m"
    MR_Integer mercury__calendar__V_102_102;
#line 986 "calendar.m"
    MR_Integer mercury__calendar__V_103_103;
#line 986 "calendar.m"
    MR_Integer mercury__calendar__V_104_104;
#line 988 "calendar.m"
    MR_Integer mercury__calendar__V_105_105;
#line 988 "calendar.m"
    MR_Integer mercury__calendar__V_106_106;
#line 988 "calendar.m"
    MR_Integer mercury__calendar__V_107_107;
#line 988 "calendar.m"
    MR_Integer mercury__calendar__V_108_108;
#line 988 "calendar.m"
    MR_Integer mercury__calendar__V_109_109;
#line 988 "calendar.m"
    MR_Integer mercury__calendar__V_110_110;
#line 989 "calendar.m"
    MR_Integer mercury__calendar__V_111_111;
#line 989 "calendar.m"
    MR_Integer mercury__calendar__V_112_112;
#line 989 "calendar.m"
    MR_Integer mercury__calendar__V_113_113;
#line 989 "calendar.m"
    MR_Integer mercury__calendar__V_114_114;
#line 989 "calendar.m"
    MR_Integer mercury__calendar__V_115_115;
#line 989 "calendar.m"
    MR_Integer mercury__calendar__V_116_116;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_189_189;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_190_190;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_191_191;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_192_192;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_193_193;
#line 1008 "calendar.m"
    MR_Integer mercury__calendar__V_194_194;
#line 1009 "calendar.m"
    MR_Integer mercury__calendar__V_195_195;
#line 1009 "calendar.m"
    MR_Integer mercury__calendar__V_196_196;
#line 1009 "calendar.m"
    MR_Integer mercury__calendar__V_197_197;
#line 1009 "calendar.m"
    MR_Integer mercury__calendar__V_198_198;
#line 1009 "calendar.m"
    MR_Integer mercury__calendar__V_199_199;
#line 1009 "calendar.m"
    MR_Integer mercury__calendar__V_200_200;
#line 1011 "calendar.m"
    MR_Integer mercury__calendar__V_201_201;
#line 1011 "calendar.m"
    MR_Integer mercury__calendar__V_202_202;
#line 1011 "calendar.m"
    MR_Integer mercury__calendar__V_203_203;
#line 1011 "calendar.m"
    MR_Integer mercury__calendar__V_204_204;
#line 1011 "calendar.m"
    MR_Integer mercury__calendar__V_205_205;
#line 1011 "calendar.m"
    MR_Integer mercury__calendar__V_206_206;
#line 1012 "calendar.m"
    MR_Integer mercury__calendar__V_207_207;
#line 1012 "calendar.m"
    MR_Integer mercury__calendar__V_208_208;
#line 1012 "calendar.m"
    MR_Integer mercury__calendar__V_209_209;
#line 1012 "calendar.m"
    MR_Integer mercury__calendar__V_210_210;
#line 1012 "calendar.m"
    MR_Integer mercury__calendar__V_211_211;
#line 1012 "calendar.m"
    MR_Integer mercury__calendar__V_212_212;

#line 980 "calendar.m"
    {
#line 980 "calendar.m"
      mercury__calendar__V_35_35 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 980 "calendar.m"
    {
#line 980 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0(mercury__calendar__V_35_35, mercury__calendar__MicroSecondA_10, mercury__calendar__MicroSecondB_11, &mercury__calendar__MicroSeconds_12, &mercury__calendar__STATE_VARIABLE_Borrow_36_36);
    }
#line 982 "calendar.m"
    mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 982 "calendar.m"
    mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 982 "calendar.m"
    mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 982 "calendar.m"
    mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 982 "calendar.m"
    mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 982 "calendar.m"
    mercury__calendar__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 982 "calendar.m"
    mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 982 "calendar.m"
    mercury__calendar__SecondA_13 = (mercury__calendar__V_37_37 - mercury__calendar__STATE_VARIABLE_Borrow_36_36);
#line 983 "calendar.m"
    mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 983 "calendar.m"
    mercury__calendar__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 983 "calendar.m"
    mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 983 "calendar.m"
    mercury__calendar__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 983 "calendar.m"
    mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 983 "calendar.m"
    mercury__calendar__SecondB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 983 "calendar.m"
    mercury__calendar__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 984 "calendar.m"
    {
#line 984 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__SecondA_13, mercury__calendar__SecondB_14, &mercury__calendar__Seconds_15, &mercury__calendar__STATE_VARIABLE_Borrow_39_39);
    }
#line 985 "calendar.m"
    mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 985 "calendar.m"
    mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 985 "calendar.m"
    mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 985 "calendar.m"
    mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 985 "calendar.m"
    mercury__calendar__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 985 "calendar.m"
    mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 985 "calendar.m"
    mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 985 "calendar.m"
    mercury__calendar__MinuteA_16 = (mercury__calendar__V_40_40 - mercury__calendar__STATE_VARIABLE_Borrow_39_39);
#line 986 "calendar.m"
    mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 986 "calendar.m"
    mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 986 "calendar.m"
    mercury__calendar__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 986 "calendar.m"
    mercury__calendar__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 986 "calendar.m"
    mercury__calendar__MinuteB_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 986 "calendar.m"
    mercury__calendar__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 986 "calendar.m"
    mercury__calendar__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 987 "calendar.m"
    {
#line 987 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__MinuteA_16, mercury__calendar__MinuteB_17, &mercury__calendar__Minutes_18, &mercury__calendar__STATE_VARIABLE_Borrow_42_42);
    }
#line 988 "calendar.m"
    mercury__calendar__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 988 "calendar.m"
    mercury__calendar__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 988 "calendar.m"
    mercury__calendar__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 988 "calendar.m"
    mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 988 "calendar.m"
    mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 988 "calendar.m"
    mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 988 "calendar.m"
    mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 988 "calendar.m"
    mercury__calendar__HourA_19 = (mercury__calendar__V_43_43 - mercury__calendar__STATE_VARIABLE_Borrow_42_42);
#line 989 "calendar.m"
    mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 989 "calendar.m"
    mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 989 "calendar.m"
    mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 989 "calendar.m"
    mercury__calendar__HourB_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 989 "calendar.m"
    mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 989 "calendar.m"
    mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 989 "calendar.m"
    mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 990 "calendar.m"
    {
#line 990 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, mercury__calendar__HourA_19, mercury__calendar__HourB_20, &mercury__calendar__Hours_21, &mercury__calendar__STATE_VARIABLE_Borrow_45_45);
    }
#line 999 "calendar.m"
    if ((mercury__calendar__OriginalOrder_5 == (MR_Integer) 0))
#line 999 "calendar.m"
      {
#line 999 "calendar.m"
        MR_Integer mercury__calendar__DateBEndOfMonth_27;
#line 999 "calendar.m"
        MR_Integer mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 999 "calendar.m"
        MR_Integer mercury__calendar__V_48_48;
#line 999 "calendar.m"
        MR_Integer mercury__calendar__V_50_50;
#line 999 "calendar.m"
        MR_Integer mercury__calendar__V_51_51;
#line 999 "calendar.m"
        MR_Integer mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 999 "calendar.m"
        MR_Integer mercury__calendar__V_165_165;
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 1000 "calendar.m"
        MR_Integer mercury__calendar__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 1002 "calendar.m"
        MR_Integer mercury__calendar__V_166_166;
#line 1002 "calendar.m"
        MR_Integer mercury__calendar__V_167_167;
#line 1002 "calendar.m"
        MR_Integer mercury__calendar__V_168_168;
#line 1002 "calendar.m"
        MR_Integer mercury__calendar__V_169_169;
#line 1002 "calendar.m"
        MR_Integer mercury__calendar__V_170_170;
#line 1004 "calendar.m"
        MR_Integer mercury__calendar__V_177_177;
#line 1004 "calendar.m"
        MR_Integer mercury__calendar__V_178_178;
#line 1004 "calendar.m"
        MR_Integer mercury__calendar__V_179_179;
#line 1004 "calendar.m"
        MR_Integer mercury__calendar__V_180_180;
#line 1004 "calendar.m"
        MR_Integer mercury__calendar__V_181_181;
#line 1004 "calendar.m"
        MR_Integer mercury__calendar__V_182_182;
#line 1005 "calendar.m"
        MR_Integer mercury__calendar__V_183_183;
#line 1005 "calendar.m"
        MR_Integer mercury__calendar__V_184_184;
#line 1005 "calendar.m"
        MR_Integer mercury__calendar__V_185_185;
#line 1005 "calendar.m"
        MR_Integer mercury__calendar__V_186_186;
#line 1005 "calendar.m"
        MR_Integer mercury__calendar__V_187_187;
#line 1005 "calendar.m"
        MR_Integer mercury__calendar__V_188_188;

#line 1000 "calendar.m"
        {
#line 1000 "calendar.m"
          mercury__calendar__DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_46_46, mercury__calendar__V_153_153);
        }
#line 1002 "calendar.m"
        mercury__calendar__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 1002 "calendar.m"
        mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 1002 "calendar.m"
        mercury__calendar__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 1002 "calendar.m"
        mercury__calendar__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 1002 "calendar.m"
        mercury__calendar__V_168_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 1002 "calendar.m"
        mercury__calendar__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 1002 "calendar.m"
        mercury__calendar__V_170_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 1002 "calendar.m"
        {
#line 1002 "calendar.m"
          mercury__calendar__DateBEndOfMonth_27 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_48_48, mercury__calendar__V_165_165);
        }
#line 1004 "calendar.m"
        mercury__calendar__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 1004 "calendar.m"
        mercury__calendar__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 1004 "calendar.m"
        mercury__calendar__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 1004 "calendar.m"
        mercury__calendar__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 1004 "calendar.m"
        mercury__calendar__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 1004 "calendar.m"
        mercury__calendar__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 1004 "calendar.m"
        mercury__calendar__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 1004 "calendar.m"
        mercury__calendar__V_50_50 = (mercury__calendar__V_51_51 - mercury__calendar__STATE_VARIABLE_Borrow_45_45);
#line 1004 "calendar.m"
        {
#line 1004 "calendar.m"
          mercury__calendar__DayA_25 = mercury__int__min_2_f_0(mercury__calendar__V_50_50, mercury__calendar__DateBEndOfMonth_27);
        }
#line 1005 "calendar.m"
        mercury__calendar__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 1005 "calendar.m"
        mercury__calendar__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 1005 "calendar.m"
        mercury__calendar__DayB_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 1005 "calendar.m"
        mercury__calendar__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 1005 "calendar.m"
        mercury__calendar__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 1005 "calendar.m"
        mercury__calendar__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 1005 "calendar.m"
        mercury__calendar__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 999 "calendar.m"
      }
#line 999 "calendar.m"
    else
#line 991 "calendar.m"
      {
#line 991 "calendar.m"
        MR_Word mercury__calendar__DateAMinus1Month_22;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__DateAEndOfMonth_24;
#line 991 "calendar.m"
        MR_Word mercury__calendar__V_52_52 = (MR_Word) &mercury__calendar_scalar_common_3[2];
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_57_57;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_59_59;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_61_61;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_62_62;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_117_117;
#line 991 "calendar.m"
        MR_Integer mercury__calendar__V_129_129;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_118_118;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_119_119;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_120_120;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_121_121;
#line 993 "calendar.m"
        MR_Integer mercury__calendar__V_122_122;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_130_130;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_131_131;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_132_132;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_133_133;
#line 995 "calendar.m"
        MR_Integer mercury__calendar__V_134_134;
#line 997 "calendar.m"
        MR_Integer mercury__calendar__V_141_141;
#line 997 "calendar.m"
        MR_Integer mercury__calendar__V_142_142;
#line 997 "calendar.m"
        MR_Integer mercury__calendar__V_143_143;
#line 997 "calendar.m"
        MR_Integer mercury__calendar__V_144_144;
#line 997 "calendar.m"
        MR_Integer mercury__calendar__V_145_145;
#line 997 "calendar.m"
        MR_Integer mercury__calendar__V_146_146;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_147_147;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_148_148;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_149_149;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_150_150;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_151_151;
#line 998 "calendar.m"
        MR_Integer mercury__calendar__V_152_152;

#line 992 "calendar.m"
        {
#line 992 "calendar.m"
          mercury__calendar__add_duration_3_p_0(mercury__calendar__V_52_52, mercury__calendar__DateA_6, &mercury__calendar__DateAMinus1Month_22);
        }
#line 993 "calendar.m"
        mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 0)));
#line 993 "calendar.m"
        mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 1)));
#line 993 "calendar.m"
        mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 2)));
#line 993 "calendar.m"
        mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 3)));
#line 993 "calendar.m"
        mercury__calendar__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 4)));
#line 993 "calendar.m"
        mercury__calendar__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 5)));
#line 993 "calendar.m"
        mercury__calendar__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 6)));
#line 993 "calendar.m"
        {
#line 993 "calendar.m"
          mercury__calendar__DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_57_57, mercury__calendar__V_117_117);
        }
#line 995 "calendar.m"
        mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 995 "calendar.m"
        mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 995 "calendar.m"
        mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 995 "calendar.m"
        mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 995 "calendar.m"
        mercury__calendar__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 995 "calendar.m"
        mercury__calendar__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 995 "calendar.m"
        mercury__calendar__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 995 "calendar.m"
        {
#line 995 "calendar.m"
          mercury__calendar__DateAEndOfMonth_24 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_59_59, mercury__calendar__V_129_129);
        }
#line 997 "calendar.m"
        mercury__calendar__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 997 "calendar.m"
        mercury__calendar__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 997 "calendar.m"
        mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 997 "calendar.m"
        mercury__calendar__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 997 "calendar.m"
        mercury__calendar__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 997 "calendar.m"
        mercury__calendar__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 997 "calendar.m"
        mercury__calendar__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 997 "calendar.m"
        mercury__calendar__DayA_25 = (mercury__calendar__V_61_61 - mercury__calendar__STATE_VARIABLE_Borrow_45_45);
#line 998 "calendar.m"
        mercury__calendar__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 998 "calendar.m"
        mercury__calendar__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 998 "calendar.m"
        mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 998 "calendar.m"
        mercury__calendar__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 998 "calendar.m"
        mercury__calendar__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 998 "calendar.m"
        mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 998 "calendar.m"
        mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 998 "calendar.m"
        {
#line 998 "calendar.m"
          mercury__calendar__DayB_26 = mercury__int__min_2_f_0(mercury__calendar__V_62_62, mercury__calendar__DateAEndOfMonth_24);
        }
#line 991 "calendar.m"
      }
#line 1007 "calendar.m"
    {
#line 1007 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0(mercury__calendar__DaysToBorrow_23, mercury__calendar__DayA_25, mercury__calendar__DayB_26, &mercury__calendar__Days_28, &mercury__calendar__STATE_VARIABLE_Borrow_63_63);
    }
#line 1008 "calendar.m"
    mercury__calendar__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 1008 "calendar.m"
    mercury__calendar__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 1008 "calendar.m"
    mercury__calendar__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 1008 "calendar.m"
    mercury__calendar__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 1008 "calendar.m"
    mercury__calendar__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 1008 "calendar.m"
    mercury__calendar__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 1008 "calendar.m"
    mercury__calendar__V_194_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 1008 "calendar.m"
    mercury__calendar__MonthA_29 = (mercury__calendar__V_64_64 - mercury__calendar__STATE_VARIABLE_Borrow_63_63);
#line 1009 "calendar.m"
    mercury__calendar__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 1009 "calendar.m"
    mercury__calendar__MonthB_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 1009 "calendar.m"
    mercury__calendar__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 1009 "calendar.m"
    mercury__calendar__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 1009 "calendar.m"
    mercury__calendar__V_198_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 1009 "calendar.m"
    mercury__calendar__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 1009 "calendar.m"
    mercury__calendar__V_200_200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 1010 "calendar.m"
    {
#line 1010 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 12, mercury__calendar__MonthA_29, mercury__calendar__MonthB_30, &mercury__calendar__Months_31, &mercury__calendar__STATE_VARIABLE_Borrow_66_66);
    }
#line 1011 "calendar.m"
    mercury__calendar__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 1011 "calendar.m"
    mercury__calendar__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 1011 "calendar.m"
    mercury__calendar__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 1011 "calendar.m"
    mercury__calendar__V_203_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 1011 "calendar.m"
    mercury__calendar__V_204_204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 1011 "calendar.m"
    mercury__calendar__V_205_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 1011 "calendar.m"
    mercury__calendar__V_206_206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 1011 "calendar.m"
    mercury__calendar__YearA_32 = (mercury__calendar__V_67_67 - mercury__calendar__STATE_VARIABLE_Borrow_66_66);
#line 1012 "calendar.m"
    mercury__calendar__YearB_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 1012 "calendar.m"
    mercury__calendar__V_207_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 1012 "calendar.m"
    mercury__calendar__V_208_208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 1012 "calendar.m"
    mercury__calendar__V_209_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 1012 "calendar.m"
    mercury__calendar__V_210_210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 1012 "calendar.m"
    mercury__calendar__V_211_211 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 1012 "calendar.m"
    mercury__calendar__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 1013 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__YearA_32 >= mercury__calendar__YearB_33);
#line 1015 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1014 "calendar.m"
      mercury__calendar__Years_34 = (mercury__calendar__YearA_32 - mercury__calendar__YearB_33);
#line 1015 "calendar.m"
    else
#line 1018 "calendar.m"
      {
#line 1018 "calendar.m"
        {
#line 1018 "calendar.m"
          mercury__require__error_1_p_0((MR_String) "greedy_subtract_descending: left over years");
#line 1018 "calendar.m"
          return;
        }
#line 1018 "calendar.m"
      }
#line 1020 "calendar.m"
    {
#line 1020 "calendar.m"
      *mercury__calendar__Duration_8 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Years_34, mercury__calendar__Months_31, mercury__calendar__Days_28, mercury__calendar__Hours_21, mercury__calendar__Minutes_18, mercury__calendar__Seconds_15, mercury__calendar__MicroSeconds_12);
    }
#line 978 "calendar.m"
  }
#line 973 "calendar.m"
}

#line 818 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
#line 818 "calendar.m"
  MR_Integer mercury__calendar__YearValue_4,
#line 818 "calendar.m"
  MR_Integer mercury__calendar__MonthValue_5)
#line 818 "calendar.m"
{
#line 820 "calendar.m"
  {
#line 820 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 820 "calendar.m"
    MR_Integer mercury__calendar__Max_6;
#line 820 "calendar.m"
    MR_Integer mercury__calendar__M_7;
#line 820 "calendar.m"
    MR_Integer mercury__calendar__Y_8;
#line 820 "calendar.m"
    MR_Integer mercury__calendar__V_10_10;
#line 820 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = (mercury__calendar__MonthValue_5 - (MR_Integer) 1);
#line 820 "calendar.m"
    MR_Integer mercury__calendar__V_15_15;
#line 820 "calendar.m"
    MR_Integer mercury__calendar__V_16_16;
#line 820 "calendar.m"
    MR_Integer mercury__calendar__V_6_32;
#line 820 "calendar.m"
    MR_Integer mercury__calendar__V_7_33;
#line 840 "calendar.m"
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
#line 821 "calendar.m"
    mercury__calendar__M_7 = (mercury__calendar__V_10_10 + (MR_Integer) 1);
#line 822 "calendar.m"
    mercury__calendar__V_16_16 = (mercury__calendar__MonthValue_5 - (MR_Integer) 1);
#line 822 "calendar.m"
    {
#line 822 "calendar.m"
      mercury__calendar__V_15_15 = mercury__int__div_2_f_0(mercury__calendar__V_16_16, (MR_Integer) 12);
    }
#line 822 "calendar.m"
    mercury__calendar__Y_8 = (mercury__calendar__YearValue_4 + mercury__calendar__V_15_15);
#line 827 "calendar.m"
    if ((mercury__calendar__M_7 == (MR_Integer) 2))
#line 834 "calendar.m"
      {
#line 832 "calendar.m"
        {
#line 832 "calendar.m"
          MR_Integer mercury__calendar__V_23_23;
#line 832 "calendar.m"
          MR_Integer mercury__calendar__V_6_37;
#line 832 "calendar.m"
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
#line 832 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__V_23_23 == (MR_Integer) 0);
#line 832 "calendar.m"
        }
#line 832 "calendar.m"
        if (!(mercury__calendar__succeeded))
#line 832 "calendar.m"
          {
#line 832 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 832 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 832 "calendar.m"
            MR_Integer mercury__calendar__V_6_47;
#line 832 "calendar.m"
            MR_Integer mercury__calendar__V_7_48;
#line 832 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 832 "calendar.m"
            MR_Integer mercury__calendar__V_6_42;
#line 832 "calendar.m"
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
#line 832 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_19_19 == (MR_Integer) 0);
#line 832 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 832 "calendar.m"
            if (mercury__calendar__succeeded)
#line 832 "calendar.m"
              {
#line 832 "calendar.m"
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
#line 832 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_21_21 == (MR_Integer) 0);
#line 832 "calendar.m"
              }
#line 832 "calendar.m"
          }
#line 834 "calendar.m"
        if (mercury__calendar__succeeded)
#line 833 "calendar.m"
          mercury__calendar__Max0_9 = (MR_Integer) 29;
#line 834 "calendar.m"
        else
#line 835 "calendar.m"
          mercury__calendar__Max0_9 = (MR_Integer) 28;
#line 834 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 834 "calendar.m"
      }
#line 827 "calendar.m"
    else
#line 827 "calendar.m"
    if ((((((((mercury__calendar__M_7 == (MR_Integer) 4)) || ((mercury__calendar__M_7 == (MR_Integer) 6)))) || ((mercury__calendar__M_7 == (MR_Integer) 9)))) || ((mercury__calendar__M_7 == (MR_Integer) 11))))
#line 829 "calendar.m"
      {
#line 829 "calendar.m"
        mercury__calendar__Max0_9 = (MR_Integer) 30;
#line 829 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 829 "calendar.m"
      }
#line 827 "calendar.m"
    else
#line 827 "calendar.m"
    if ((((((((((((((mercury__calendar__M_7 == (MR_Integer) 1)) || ((mercury__calendar__M_7 == (MR_Integer) 3)))) || ((mercury__calendar__M_7 == (MR_Integer) 5)))) || ((mercury__calendar__M_7 == (MR_Integer) 7)))) || ((mercury__calendar__M_7 == (MR_Integer) 8)))) || ((mercury__calendar__M_7 == (MR_Integer) 10)))) || ((mercury__calendar__M_7 == (MR_Integer) 12))))
#line 826 "calendar.m"
      {
#line 826 "calendar.m"
        mercury__calendar__Max0_9 = (MR_Integer) 31;
#line 826 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 826 "calendar.m"
      }
#line 827 "calendar.m"
    else
#line 827 "calendar.m"
      mercury__calendar__succeeded = MR_FALSE;
#line 840 "calendar.m"
    if (mercury__calendar__succeeded)
#line 839 "calendar.m"
      mercury__calendar__Max_6 = mercury__calendar__Max0_9;
#line 840 "calendar.m"
    else
#line 842 "calendar.m"
      {
#line 842 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 842 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_13_62;
#line 842 "calendar.m"
        MR_Word mercury__calendar__TypeClassInfo_for_op_table_71;
#line 842 "calendar.m"
        MR_String mercury__calendar__V_25_25;
#line 842 "calendar.m"
        MR_String mercury__calendar__V_27_27;
#line 842 "calendar.m"
        MR_Word mercury__calendar__V_10_59;
#line 842 "calendar.m"
        MR_Word mercury__calendar__RevStrings_9_60;
#line 842 "calendar.m"
        MR_Word mercury__calendar__V_11_61;
#line 842 "calendar.m"
        MR_Integer mercury__calendar__Priority_10_68;
#line 842 "calendar.m"
        MR_Integer mercury__calendar__V_13_69;
#line 6775 "calendar.c"
        MR_Box MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box);
#line 6777 "calendar.c"
        MR_Box mercury__calendar__conv1_V_13_69;

#line 32 "ops.opt"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
        mercury__calendar__V_10_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6784 "calendar.c"
        mercury__calendar__TypeClassInfo_for_op_table_71 = (MR_Word) &mercury__calendar_scalar_common_1[0];
#line 6786 "calendar.c"
        mercury__calendar__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__calendar__TypeClassInfo_for_op_table_71, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6788 "calendar.c"
        {
#line 6790 "calendar.c"
          mercury__calendar__conv1_V_13_69 = mercury__calendar__func_0(((MR_Box) mercury__calendar__TypeClassInfo_for_op_table_71), ((MR_Box) ((MR_Integer) 0)));
        }
#line 6793 "calendar.c"
        mercury__calendar__V_13_69 = ((MR_Integer) mercury__calendar__conv1_V_13_69);
#line 27 "string.to_string.opt"
        mercury__calendar__Priority_10_68 = (mercury__calendar__V_13_69 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
        {
#line 30 "string.to_string.opt"
          mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__calendar__TypeCtorInfo_28_28, (MR_Integer) 1, mercury__calendar__Priority_10_68, ((MR_Box) (mercury__calendar__M_7)), mercury__calendar__V_10_59, &mercury__calendar__RevStrings_9_60);
        }
#line 6802 "calendar.c"
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
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) "max_day_in_month_for: unexpected value for M: ", mercury__calendar__V_27_27, &mercury__calendar__V_25_25);
        }
#line 842 "calendar.m"
        {
#line 842 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_25_25);
        }
#line 842 "calendar.m"
      }
#line 820 "calendar.m"
    return mercury__calendar__Max_6;
#line 820 "calendar.m"
  }
#line 818 "calendar.m"
}

#line 814 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
#line 814 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 814 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 814 "calendar.m"
  MR_Integer mercury__calendar__High_7)
#line 814 "calendar.m"
{
#line 816 "calendar.m"
  {
#line 816 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__4_4;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_8_8;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = (mercury__calendar__A_5 - mercury__calendar__Low_6);
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = (mercury__calendar__High_7 - mercury__calendar__Low_6);
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_13_13;
#line 816 "calendar.m"
    MR_Integer mercury__calendar__V_14_14;

#line 812 "calendar.m"
    {
#line 812 "calendar.m"
      mercury__calendar__V_14_14 = mercury__int__div_2_f_0(mercury__calendar__V_9_9, mercury__calendar__V_10_10);
    }
#line 812 "calendar.m"
    mercury__calendar__V_13_13 = (mercury__calendar__V_14_14 * mercury__calendar__V_10_10);
#line 812 "calendar.m"
    mercury__calendar__V_8_8 = (mercury__calendar__V_9_9 - mercury__calendar__V_13_13);
#line 816 "calendar.m"
    mercury__calendar__HeadVar__4_4 = (mercury__calendar__V_8_8 + mercury__calendar__Low_6);
#line 816 "calendar.m"
    return mercury__calendar__HeadVar__4_4;
#line 816 "calendar.m"
  }
#line 814 "calendar.m"
}

#line 810 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
#line 810 "calendar.m"
  MR_Integer mercury__calendar__A_4,
#line 810 "calendar.m"
  MR_Integer mercury__calendar__B_5)
#line 810 "calendar.m"
{
#line 812 "calendar.m"
  {
#line 812 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 812 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__3_3;
#line 812 "calendar.m"
    MR_Integer mercury__calendar__V_6_6;
#line 812 "calendar.m"
    MR_Integer mercury__calendar__V_7_7;

#line 812 "calendar.m"
    {
#line 812 "calendar.m"
      mercury__calendar__V_7_7 = mercury__int__div_2_f_0(mercury__calendar__A_4, mercury__calendar__B_5);
    }
#line 812 "calendar.m"
    mercury__calendar__V_6_6 = (mercury__calendar__V_7_7 * mercury__calendar__B_5);
#line 812 "calendar.m"
    mercury__calendar__HeadVar__3_3 = (mercury__calendar__A_4 - mercury__calendar__V_6_6);
#line 812 "calendar.m"
    return mercury__calendar__HeadVar__3_3;
#line 812 "calendar.m"
  }
#line 810 "calendar.m"
}

#line 806 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
#line 806 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 806 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 806 "calendar.m"
  MR_Integer mercury__calendar__High_7)
#line 806 "calendar.m"
{
#line 808 "calendar.m"
  {
#line 808 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 808 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__4_4;
#line 808 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = (mercury__calendar__A_5 - mercury__calendar__Low_6);
#line 808 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = (mercury__calendar__High_7 - mercury__calendar__Low_6);

#line 808 "calendar.m"
    {
#line 808 "calendar.m"
      return mercury__calendar__HeadVar__4_4 = mercury__int__div_2_f_0(mercury__calendar__V_8_8, mercury__calendar__V_9_9);
    }
#line 808 "calendar.m"
    return mercury__calendar__HeadVar__4_4;
#line 808 "calendar.m"
  }
#line 806 "calendar.m"
}

#line 789 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__test_dates_0_f_0(void)
#line 789 "calendar.m"
{
#line 791 "calendar.m"
  {
#line 791 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 791 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

#line 791 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 791 "calendar.m"
  }
#line 789 "calendar.m"
}

#line 762 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
#line 762 "calendar.m"
  MR_Integer mercury__calendar__Seconds_4,
#line 762 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_5)
#line 762 "calendar.m"
{
#line 767 "calendar.m"
  {
#line 767 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Seconds_4 == (MR_Integer) 0);
#line 767 "calendar.m"
    MR_String mercury__calendar__Str_6;

#line 765 "calendar.m"
    if (mercury__calendar__succeeded)
#line 765 "calendar.m"
      mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_5 == (MR_Integer) 0);
#line 767 "calendar.m"
    if (mercury__calendar__succeeded)
#line 766 "calendar.m"
      mercury__calendar__Str_6 = (MR_String) "";
#line 767 "calendar.m"
    else
#line 768 "calendar.m"
      {
#line 768 "calendar.m"
        MR_String mercury__calendar__V_7_7;
#line 768 "calendar.m"
        MR_String mercury__calendar__V_8_8;
#line 768 "calendar.m"
        MR_String mercury__calendar__V_9_9;

#line 714 "string.opt"
        {
#line 714 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Seconds_4, (MR_Integer) 10, &mercury__calendar__V_7_7);
        }
#line 695 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_5 > (MR_Integer) 0);
#line 698 "calendar.m"
        if (mercury__calendar__succeeded)
#line 696 "calendar.m"
          {
#line 696 "calendar.m"
            MR_String mercury__calendar__V_23_23;
#line 696 "calendar.m"
            MR_String mercury__calendar__V_30_30;
#line 696 "calendar.m"
            MR_Word mercury__calendar__V_36_36 = (MR_Word) &mercury__calendar_scalar_common_6[1];
#line 696 "calendar.m"
            MR_Word mercury__calendar__MaybeWidth_9_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_6[2]);
#line 696 "calendar.m"
            MR_Word mercury__calendar__MaybePrec_10_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "calendar.m"
            MR_Integer mercury__calendar__V_6_54;
#line 696 "calendar.m"
            MR_Integer mercury__calendar__V_7_55;
#line 696 "calendar.m"
            MR_Integer mercury__calendar__V_8_56;
#line 696 "calendar.m"
            MR_Integer mercury__calendar__End_6_62;
#line 696 "calendar.m"
            MR_Integer mercury__calendar__Index_7_63;
#line 474 "string.opt"
            MR_String mercury__calendar___RightString_7_72;

#line 46 "string.format.opt"
            {
#line 46 "string.format.opt"
              mercury__string__format__format_signed_int_component_5_p_0(mercury__calendar__V_36_36, mercury__calendar__MaybeWidth_9_43, mercury__calendar__MaybePrec_10_44, mercury__calendar__MicroSeconds_5, &mercury__calendar__V_30_30);
            }
#line 415 "string.opt"
            {
#line 415 "string.opt"
              mercury__string__append_3_p_2((MR_String) ".", mercury__calendar__V_30_30, &mercury__calendar__V_23_23);
            }
#line 250 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_23_23 ;
		{
#line 250 "string.opt"

    Length = strlen(Str);

#line 7060 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_7_55  = Length;
#line 250 "string.opt"
}
#line 250 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_23_23 ;
		{
#line 250 "string.opt"

    Length = strlen(Str);

#line 7080 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__End_6_62  = Length;
#line 250 "string.opt"
}
#line 396 "string.opt"
            {
#line 396 "string.opt"
              mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, mercury__calendar__V_23_23, mercury__calendar__End_6_62, &mercury__calendar__Index_7_63);
            }
#line 394 "string.opt"
            mercury__calendar__V_8_56 = (mercury__calendar__End_6_62 - mercury__calendar__Index_7_63);
#line 578 "string.opt"
            mercury__calendar__V_6_54 = (mercury__calendar__V_7_55 - mercury__calendar__V_8_56);
#line 474 "string.opt"
            {
#line 474 "string.opt"
              mercury__string__split_4_p_0(mercury__calendar__V_23_23, mercury__calendar__V_6_54, &mercury__calendar__V_9_9, &mercury__calendar___RightString_7_72);
            }
#line 696 "calendar.m"
          }
#line 698 "calendar.m"
        else
#line 699 "calendar.m"
          mercury__calendar__V_9_9 = (MR_String) "";
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_9_9, (MR_String) "S", &mercury__calendar__V_8_8);
        }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_7_7, mercury__calendar__V_8_8, &mercury__calendar__Str_6);
        }
#line 768 "calendar.m"
      }
#line 767 "calendar.m"
    return mercury__calendar__Str_6;
#line 767 "calendar.m"
  }
#line 762 "calendar.m"
}

#line 753 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
#line 753 "calendar.m"
  MR_Integer mercury__calendar__X_4,
#line 753 "calendar.m"
  MR_String mercury__calendar__Suffix_5)
#line 753 "calendar.m"
{
#line 755 "calendar.m"
  {
#line 755 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__X_4 == (MR_Integer) 0);
#line 755 "calendar.m"
    MR_String mercury__calendar__HeadVar__3_3;

#line 755 "calendar.m"
    if (mercury__calendar__succeeded)
#line 757 "calendar.m"
      mercury__calendar__HeadVar__3_3 = (MR_String) "";
#line 755 "calendar.m"
    else
#line 759 "calendar.m"
      {
#line 759 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 714 "string.opt"
        {
#line 714 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__X_4, (MR_Integer) 10, &mercury__calendar__V_6_6);
        }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_6_6, mercury__calendar__Suffix_5, &mercury__calendar__HeadVar__3_3);
        }
#line 759 "calendar.m"
      }
#line 755 "calendar.m"
    return mercury__calendar__HeadVar__3_3;
#line 755 "calendar.m"
  }
#line 753 "calendar.m"
}

#line 692 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
#line 692 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_3)
#line 692 "calendar.m"
{
#line 698 "calendar.m"
  {
#line 698 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_3 > (MR_Integer) 0);
#line 698 "calendar.m"
    MR_String mercury__calendar__Str_4;

#line 698 "calendar.m"
    if (mercury__calendar__succeeded)
#line 696 "calendar.m"
      {
#line 696 "calendar.m"
        MR_String mercury__calendar__V_8_8;
#line 696 "calendar.m"
        MR_String mercury__calendar__V_15_15;
#line 696 "calendar.m"
        MR_Word mercury__calendar__V_21_21 = (MR_Word) &mercury__calendar_scalar_common_6[1];
#line 696 "calendar.m"
        MR_Word mercury__calendar__MaybeWidth_9_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_6[2]);
#line 696 "calendar.m"
        MR_Word mercury__calendar__MaybePrec_10_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "calendar.m"
        MR_Integer mercury__calendar__V_6_39;
#line 696 "calendar.m"
        MR_Integer mercury__calendar__V_7_40;
#line 696 "calendar.m"
        MR_Integer mercury__calendar__V_8_41;
#line 696 "calendar.m"
        MR_Integer mercury__calendar__End_6_47;
#line 696 "calendar.m"
        MR_Integer mercury__calendar__Index_7_48;
#line 474 "string.opt"
        MR_String mercury__calendar___RightString_7_57;

#line 46 "string.format.opt"
        {
#line 46 "string.format.opt"
          mercury__string__format__format_signed_int_component_5_p_0(mercury__calendar__V_21_21, mercury__calendar__MaybeWidth_9_28, mercury__calendar__MaybePrec_10_29, mercury__calendar__MicroSeconds_3, &mercury__calendar__V_15_15);
        }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) ".", mercury__calendar__V_15_15, &mercury__calendar__V_8_8);
        }
#line 250 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_8_8 ;
		{
#line 250 "string.opt"

    Length = strlen(Str);

#line 7236 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_7_40  = Length;
#line 250 "string.opt"
}
#line 250 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_8_8 ;
		{
#line 250 "string.opt"

    Length = strlen(Str);

#line 7256 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__End_6_47  = Length;
#line 250 "string.opt"
}
#line 396 "string.opt"
        {
#line 396 "string.opt"
          mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, mercury__calendar__V_8_8, mercury__calendar__End_6_47, &mercury__calendar__Index_7_48);
        }
#line 394 "string.opt"
        mercury__calendar__V_8_41 = (mercury__calendar__End_6_47 - mercury__calendar__Index_7_48);
#line 578 "string.opt"
        mercury__calendar__V_6_39 = (mercury__calendar__V_7_40 - mercury__calendar__V_8_41);
#line 474 "string.opt"
        {
#line 474 "string.opt"
          mercury__string__split_4_p_0(mercury__calendar__V_8_8, mercury__calendar__V_6_39, &mercury__calendar__Str_4, &mercury__calendar___RightString_7_57);
        }
#line 696 "calendar.m"
      }
#line 698 "calendar.m"
    else
#line 699 "calendar.m"
      mercury__calendar__Str_4 = (MR_String) "";
#line 698 "calendar.m"
    return mercury__calendar__Str_4;
#line 698 "calendar.m"
  }
#line 692 "calendar.m"
}

#line 649 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void)
#line 649 "calendar.m"
{
#line 651 "calendar.m"
  {
#line 651 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 651 "calendar.m"
    return (MR_Integer) 1000000;
#line 651 "calendar.m"
  }
#line 649 "calendar.m"
}

#line 600 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
#line 600 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_10,
#line 600 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_11,
#line 600 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_12,
#line 600 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_13)
#line 600 "calendar.m"
{
#line 609 "calendar.m"
  while (MR_TRUE)
#line 609 "calendar.m"
    {
#line 609 "calendar.m"
      /* tailcall optimized into a loop */
#line 609 "calendar.m"
      {
#line 609 "calendar.m"
        MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_12)) == (MR_mktag((MR_Integer) 1)));
#line 609 "calendar.m"
        MR_Word mercury__calendar__Rest_8;
#line 609 "calendar.m"
        MR_Integer mercury__calendar__Digit_9;
#line 604 "calendar.m"
        MR_Char mercury__calendar__Char_7;

#line 604 "calendar.m"
        if (mercury__calendar__succeeded)
#line 604 "calendar.m"
          {
#line 604 "calendar.m"
            mercury__calendar__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_12, (MR_Integer) 0)));
#line 604 "calendar.m"
            mercury__calendar__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_12, (MR_Integer) 1)));
#line 605 "calendar.m"
            {
#line 605 "calendar.m"
              mercury__calendar__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__calendar__Char_7, &mercury__calendar__Digit_9);
            }
#line 604 "calendar.m"
          }
#line 609 "calendar.m"
        if (mercury__calendar__succeeded)
#line 607 "calendar.m"
          {
#line 607 "calendar.m"
            MR_Integer mercury__calendar__STATE_VARIABLE_Val_14_14;
#line 607 "calendar.m"
            MR_Integer mercury__calendar__V_15_15 = (mercury__calendar__STATE_VARIABLE_Val_0_10 * (MR_Integer) 10);

#line 607 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Val_14_14 = (mercury__calendar__V_15_15 + mercury__calendar__Digit_9);
#line 608 "calendar.m"
            /* direct tailcall eliminated */
#line 608 "calendar.m"
            {
#line 608 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_10 = mercury__calendar__STATE_VARIABLE_Val_14_14;
#line 608 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_12 = mercury__calendar__Rest_8;

#line 608 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Chars_0_12 = mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_12;
#line 608 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Val_0_10 = mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_10;
#line 608 "calendar.m"
            }
#line 608 "calendar.m"
            continue;
#line 607 "calendar.m"
          }
#line 609 "calendar.m"
        else
#line 610 "calendar.m"
          {
#line 610 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Chars_13 = mercury__calendar__STATE_VARIABLE_Chars_0_12;
#line 610 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Val_11 = mercury__calendar__STATE_VARIABLE_Val_0_10;
#line 610 "calendar.m"
          }
#line 609 "calendar.m"
      }
#line 609 "calendar.m"
      break;
#line 609 "calendar.m"
    }
#line 600 "calendar.m"
}

#line 564 "calendar.m"
static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
#line 564 "calendar.m"
  MR_Integer * mercury__calendar__Seconds_5,
#line 564 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_6,
#line 564 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_13,
#line 564 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_14)
#line 564 "calendar.m"
{
#line 576 "calendar.m"
  {
#line 576 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 576 "calendar.m"
    MR_Integer mercury__calendar__Seconds0_8;
#line 576 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds0_10;
#line 576 "calendar.m"
    MR_Word mercury__calendar__Chars3_12;
#line 569 "calendar.m"
    MR_Word mercury__calendar__Chars1_9;
#line 569 "calendar.m"
    MR_Word mercury__calendar__Chars2_11;
#line 569 "calendar.m"
    MR_Char mercury__calendar__V_17_17;
#line 477 "calendar.m"
    MR_Integer mercury__calendar__Fraction_29;
#line 477 "calendar.m"
    MR_Integer mercury__calendar__FractionDigits_30;
#line 477 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_12_32;
#line 471 "calendar.m"
    MR_Word mercury__calendar__Chars1_28;
#line 471 "calendar.m"
    MR_Integer mercury__calendar__V_33_33;
#line 471 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 471 "calendar.m"
    MR_Char mercury__calendar__V_40_40;
#line 471 "calendar.m"
    MR_Integer mercury__calendar__V_48_48;
#line 471 "calendar.m"
    MR_Integer mercury__calendar__V_49_49;

#line 598 "calendar.m"
    {
#line 598 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Seconds0_8, mercury__calendar__STATE_VARIABLE_Chars_0_13, &mercury__calendar__Chars1_9);
    }
#line 537 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_9)) == (MR_mktag((MR_Integer) 1)));
#line 537 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        mercury__calendar__V_40_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_9, (MR_Integer) 0)));
#line 537 "calendar.m"
        mercury__calendar__Chars1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_9, (MR_Integer) 1)));
#line 471 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 46 == mercury__calendar__V_40_40);
#line 471 "calendar.m"
        if (mercury__calendar__succeeded)
#line 471 "calendar.m"
          {
#line 485 "calendar.m"
            mercury__calendar__V_48_48 = (MR_Integer) 0;
#line 485 "calendar.m"
            mercury__calendar__V_49_49 = (MR_Integer) 0;
#line 485 "calendar.m"
            {
#line 485 "calendar.m"
              mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_48_48, &mercury__calendar__Fraction_29, mercury__calendar__V_49_49, &mercury__calendar__FractionDigits_30, mercury__calendar__Chars1_28, &mercury__calendar__STATE_VARIABLE_Chars_12_32);
            }
#line 473 "calendar.m"
            mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 473 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__FractionDigits_30 > mercury__calendar__V_33_33);
#line 471 "calendar.m"
            if (mercury__calendar__succeeded)
#line 471 "calendar.m"
              {
#line 474 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 7;
#line 474 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__FractionDigits_30 < mercury__calendar__V_34_34);
#line 471 "calendar.m"
              }
#line 471 "calendar.m"
          }
#line 537 "calendar.m"
      }
#line 477 "calendar.m"
    if (mercury__calendar__succeeded)
#line 476 "calendar.m"
      {
#line 476 "calendar.m"
        MR_Integer mercury__calendar__V_35_35;
#line 476 "calendar.m"
        MR_Integer mercury__calendar__V_37_37;

#line 476 "calendar.m"
        mercury__calendar__Chars2_11 = mercury__calendar__STATE_VARIABLE_Chars_12_32;
#line 476 "calendar.m"
        mercury__calendar__V_37_37 = ((MR_Integer) 6 - mercury__calendar__FractionDigits_30);
#line 92 "int.opt"
        {
#line 92 "int.opt"
          mercury__int__pow_3_p_0((MR_Integer) 10, mercury__calendar__V_37_37, &mercury__calendar__V_35_35);
        }
#line 476 "calendar.m"
        mercury__calendar__MicroSeconds0_10 = (mercury__calendar__V_35_35 * mercury__calendar__Fraction_29);
#line 476 "calendar.m"
      }
#line 477 "calendar.m"
    else
#line 478 "calendar.m"
      {
#line 478 "calendar.m"
        mercury__calendar__MicroSeconds0_10 = (MR_Integer) 0;
#line 478 "calendar.m"
        mercury__calendar__Chars2_11 = mercury__calendar__Chars1_9;
#line 478 "calendar.m"
      }
#line 537 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars2_11)) == (MR_mktag((MR_Integer) 1)));
#line 537 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars2_11, (MR_Integer) 0)));
#line 537 "calendar.m"
        mercury__calendar__Chars3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars2_11, (MR_Integer) 1)));
#line 571 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 83 == mercury__calendar__V_17_17);
#line 537 "calendar.m"
      }
#line 576 "calendar.m"
    if (mercury__calendar__succeeded)
#line 573 "calendar.m"
      {
#line 573 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_14 = mercury__calendar__Chars3_12;
#line 574 "calendar.m"
        *mercury__calendar__Seconds_5 = mercury__calendar__Seconds0_8;
#line 575 "calendar.m"
        *mercury__calendar__MicroSeconds_6 = mercury__calendar__MicroSeconds0_10;
#line 573 "calendar.m"
      }
#line 576 "calendar.m"
    else
#line 577 "calendar.m"
      {
#line 577 "calendar.m"
        *mercury__calendar__Seconds_5 = (MR_Integer) 0;
#line 578 "calendar.m"
        *mercury__calendar__MicroSeconds_6 = (MR_Integer) 0;
#line 577 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_14 = mercury__calendar__STATE_VARIABLE_Chars_0_13;
#line 577 "calendar.m"
      }
#line 576 "calendar.m"
  }
#line 564 "calendar.m"
}

#line 559 "calendar.m"
static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
#line 559 "calendar.m"
  MR_Integer * mercury__calendar__Minutes_4,
#line 559 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 559 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 559 "calendar.m"
{
#line 561 "calendar.m"
  {
#line 561 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 591 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 591 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 586 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 586 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 598 "calendar.m"
    {
#line 598 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 587 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 587 "calendar.m"
    if (mercury__calendar__succeeded)
#line 587 "calendar.m"
      {
#line 587 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 587 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 587 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 77 == mercury__calendar__V_19_19);
#line 587 "calendar.m"
      }
#line 591 "calendar.m"
    if (mercury__calendar__succeeded)
#line 589 "calendar.m"
      {
#line 589 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 590 "calendar.m"
        *mercury__calendar__Minutes_4 = mercury__calendar__Int0_15;
#line 589 "calendar.m"
      }
#line 591 "calendar.m"
    else
#line 592 "calendar.m"
      {
#line 592 "calendar.m"
        *mercury__calendar__Minutes_4 = (MR_Integer) 0;
#line 592 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 592 "calendar.m"
      }
#line 561 "calendar.m"
  }
#line 559 "calendar.m"
}

#line 554 "calendar.m"
static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
#line 554 "calendar.m"
  MR_Integer * mercury__calendar__Hours_4,
#line 554 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 554 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 554 "calendar.m"
{
#line 556 "calendar.m"
  {
#line 556 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 591 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 591 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 586 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 586 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 598 "calendar.m"
    {
#line 598 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 587 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 587 "calendar.m"
    if (mercury__calendar__succeeded)
#line 587 "calendar.m"
      {
#line 587 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 587 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 587 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 72 == mercury__calendar__V_19_19);
#line 587 "calendar.m"
      }
#line 591 "calendar.m"
    if (mercury__calendar__succeeded)
#line 589 "calendar.m"
      {
#line 589 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 590 "calendar.m"
        *mercury__calendar__Hours_4 = mercury__calendar__Int0_15;
#line 589 "calendar.m"
      }
#line 591 "calendar.m"
    else
#line 592 "calendar.m"
      {
#line 592 "calendar.m"
        *mercury__calendar__Hours_4 = (MR_Integer) 0;
#line 592 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 592 "calendar.m"
      }
#line 556 "calendar.m"
  }
#line 554 "calendar.m"
}

#line 549 "calendar.m"
static void MR_CALL 
mercury__calendar__read_days_3_p_0(
#line 549 "calendar.m"
  MR_Integer * mercury__calendar__Days_4,
#line 549 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 549 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 549 "calendar.m"
{
#line 551 "calendar.m"
  {
#line 551 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 591 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 591 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 586 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 586 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 598 "calendar.m"
    {
#line 598 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 587 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 587 "calendar.m"
    if (mercury__calendar__succeeded)
#line 587 "calendar.m"
      {
#line 587 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 587 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 587 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 68 == mercury__calendar__V_19_19);
#line 587 "calendar.m"
      }
#line 591 "calendar.m"
    if (mercury__calendar__succeeded)
#line 589 "calendar.m"
      {
#line 589 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 590 "calendar.m"
        *mercury__calendar__Days_4 = mercury__calendar__Int0_15;
#line 589 "calendar.m"
      }
#line 591 "calendar.m"
    else
#line 592 "calendar.m"
      {
#line 592 "calendar.m"
        *mercury__calendar__Days_4 = (MR_Integer) 0;
#line 592 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 592 "calendar.m"
      }
#line 551 "calendar.m"
  }
#line 549 "calendar.m"
}

#line 544 "calendar.m"
static void MR_CALL 
mercury__calendar__read_months_3_p_0(
#line 544 "calendar.m"
  MR_Integer * mercury__calendar__Months_4,
#line 544 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 544 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 544 "calendar.m"
{
#line 546 "calendar.m"
  {
#line 546 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 591 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 591 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 586 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 586 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 598 "calendar.m"
    {
#line 598 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 587 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 587 "calendar.m"
    if (mercury__calendar__succeeded)
#line 587 "calendar.m"
      {
#line 587 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 587 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 587 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 77 == mercury__calendar__V_19_19);
#line 587 "calendar.m"
      }
#line 591 "calendar.m"
    if (mercury__calendar__succeeded)
#line 589 "calendar.m"
      {
#line 589 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 590 "calendar.m"
        *mercury__calendar__Months_4 = mercury__calendar__Int0_15;
#line 589 "calendar.m"
      }
#line 591 "calendar.m"
    else
#line 592 "calendar.m"
      {
#line 592 "calendar.m"
        *mercury__calendar__Months_4 = (MR_Integer) 0;
#line 592 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 592 "calendar.m"
      }
#line 546 "calendar.m"
  }
#line 544 "calendar.m"
}

#line 535 "calendar.m"
static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
#line 535 "calendar.m"
  MR_Char * mercury__calendar__Char_4,
#line 535 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 535 "calendar.m"
  MR_Word * mercury__calendar__Rest_5)
#line 535 "calendar.m"
{
#line 537 "calendar.m"
  {
#line 537 "calendar.m"
    MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));

#line 537 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        *mercury__calendar__Char_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 537 "calendar.m"
        *mercury__calendar__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 537 "calendar.m"
      }
#line 537 "calendar.m"
    return mercury__calendar__succeeded;
#line 537 "calendar.m"
  }
#line 535 "calendar.m"
}

#line 487 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
#line 487 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_13,
#line 487 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_14,
#line 487 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_N_0_15,
#line 487 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_N_16,
#line 487 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_17,
#line 487 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_18)
#line 487 "calendar.m"
{
#line 497 "calendar.m"
  while (MR_TRUE)
#line 497 "calendar.m"
    {
#line 497 "calendar.m"
      /* tailcall optimized into a loop */
#line 497 "calendar.m"
      {
#line 497 "calendar.m"
        MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_17)) == (MR_mktag((MR_Integer) 1)));
#line 497 "calendar.m"
        MR_Word mercury__calendar__Rest_11;
#line 497 "calendar.m"
        MR_Integer mercury__calendar__Digit_12;
#line 492 "calendar.m"
        MR_Char mercury__calendar__Char_10;

#line 492 "calendar.m"
        if (mercury__calendar__succeeded)
#line 492 "calendar.m"
          {
#line 492 "calendar.m"
            mercury__calendar__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
#line 492 "calendar.m"
            mercury__calendar__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_17, (MR_Integer) 1)));
#line 493 "calendar.m"
            {
#line 493 "calendar.m"
              mercury__calendar__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__calendar__Char_10, &mercury__calendar__Digit_12);
            }
#line 492 "calendar.m"
          }
#line 497 "calendar.m"
        if (mercury__calendar__succeeded)
#line 495 "calendar.m"
          {
#line 495 "calendar.m"
            MR_Integer mercury__calendar__STATE_VARIABLE_Val_19_19;
#line 495 "calendar.m"
            MR_Integer mercury__calendar__V_20_20 = (mercury__calendar__STATE_VARIABLE_Val_0_13 * (MR_Integer) 10);
#line 495 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;

#line 495 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Val_19_19 = (mercury__calendar__V_20_20 + mercury__calendar__Digit_12);
#line 496 "calendar.m"
            mercury__calendar__V_23_23 = (mercury__calendar__STATE_VARIABLE_N_0_15 + (MR_Integer) 1);
#line 496 "calendar.m"
            /* direct tailcall eliminated */
#line 496 "calendar.m"
            {
#line 496 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_13 = mercury__calendar__STATE_VARIABLE_Val_19_19;
#line 496 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_N_0__tmp_copy_15 = mercury__calendar__V_23_23;
#line 496 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_17 = mercury__calendar__Rest_11;

#line 496 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Chars_0_17 = mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_17;
#line 496 "calendar.m"
              mercury__calendar__STATE_VARIABLE_N_0_15 = mercury__calendar__STATE_VARIABLE_N_0__tmp_copy_15;
#line 496 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Val_0_13 = mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_13;
#line 496 "calendar.m"
            }
#line 496 "calendar.m"
            continue;
#line 495 "calendar.m"
          }
#line 497 "calendar.m"
        else
#line 498 "calendar.m"
          {
#line 498 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Chars_18 = mercury__calendar__STATE_VARIABLE_Chars_0_17;
#line 498 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_N_16 = mercury__calendar__STATE_VARIABLE_N_0_15;
#line 498 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Val_14 = mercury__calendar__STATE_VARIABLE_Val_0_13;
#line 498 "calendar.m"
          }
#line 497 "calendar.m"
      }
#line 497 "calendar.m"
      break;
#line 497 "calendar.m"
    }
#line 487 "calendar.m"
}

#line 481 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
#line 481 "calendar.m"
  MR_Integer * mercury__calendar__Val_5,
#line 481 "calendar.m"
  MR_Integer * mercury__calendar__N_6,
#line 481 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_8,
#line 481 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_9)
#line 481 "calendar.m"
{
#line 484 "calendar.m"
  {
#line 484 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 485 "calendar.m"
    {
#line 485 "calendar.m"
      mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, mercury__calendar__Val_5, (MR_Integer) 0, mercury__calendar__N_6, mercury__calendar__STATE_VARIABLE_Chars_0_8, mercury__calendar__STATE_VARIABLE_Chars_9);
#line 485 "calendar.m"
      return;
    }
#line 484 "calendar.m"
  }
#line 481 "calendar.m"
}

#line 466 "calendar.m"
static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
#line 466 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_4,
#line 466 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_9,
#line 466 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_10)
#line 466 "calendar.m"
{
#line 477 "calendar.m"
  {
#line 477 "calendar.m"
    MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_9)) == (MR_mktag((MR_Integer) 1)));
#line 477 "calendar.m"
    MR_Integer mercury__calendar__Fraction_7;
#line 477 "calendar.m"
    MR_Integer mercury__calendar__FractionDigits_8;
#line 477 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_12_12;
#line 471 "calendar.m"
    MR_Word mercury__calendar__Chars1_6;
#line 471 "calendar.m"
    MR_Integer mercury__calendar__V_13_13;
#line 471 "calendar.m"
    MR_Integer mercury__calendar__V_14_14;
#line 471 "calendar.m"
    MR_Char mercury__calendar__V_20_20;
#line 471 "calendar.m"
    MR_Integer mercury__calendar__V_28_28;
#line 471 "calendar.m"
    MR_Integer mercury__calendar__V_29_29;

#line 537 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        mercury__calendar__V_20_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_9, (MR_Integer) 0)));
#line 537 "calendar.m"
        mercury__calendar__Chars1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_9, (MR_Integer) 1)));
#line 471 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 46 == mercury__calendar__V_20_20);
#line 471 "calendar.m"
        if (mercury__calendar__succeeded)
#line 471 "calendar.m"
          {
#line 485 "calendar.m"
            mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 485 "calendar.m"
            mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 485 "calendar.m"
            {
#line 485 "calendar.m"
              mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_28_28, &mercury__calendar__Fraction_7, mercury__calendar__V_29_29, &mercury__calendar__FractionDigits_8, mercury__calendar__Chars1_6, &mercury__calendar__STATE_VARIABLE_Chars_12_12);
            }
#line 473 "calendar.m"
            mercury__calendar__V_13_13 = (MR_Integer) 0;
#line 473 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__FractionDigits_8 > mercury__calendar__V_13_13);
#line 471 "calendar.m"
            if (mercury__calendar__succeeded)
#line 471 "calendar.m"
              {
#line 474 "calendar.m"
                mercury__calendar__V_14_14 = (MR_Integer) 7;
#line 474 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__FractionDigits_8 < mercury__calendar__V_14_14);
#line 471 "calendar.m"
              }
#line 471 "calendar.m"
          }
#line 537 "calendar.m"
      }
#line 477 "calendar.m"
    if (mercury__calendar__succeeded)
#line 476 "calendar.m"
      {
#line 476 "calendar.m"
        MR_Integer mercury__calendar__V_15_15;
#line 476 "calendar.m"
        MR_Integer mercury__calendar__V_17_17;

#line 476 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_10 = mercury__calendar__STATE_VARIABLE_Chars_12_12;
#line 476 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Integer) 6 - mercury__calendar__FractionDigits_8);
#line 92 "int.opt"
        {
#line 92 "int.opt"
          mercury__int__pow_3_p_0((MR_Integer) 10, mercury__calendar__V_17_17, &mercury__calendar__V_15_15);
        }
#line 476 "calendar.m"
        *mercury__calendar__MicroSeconds_4 = (mercury__calendar__V_15_15 * mercury__calendar__Fraction_7);
#line 476 "calendar.m"
      }
#line 477 "calendar.m"
    else
#line 478 "calendar.m"
      {
#line 478 "calendar.m"
        *mercury__calendar__MicroSeconds_4 = (MR_Integer) 0;
#line 478 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_10 = mercury__calendar__STATE_VARIABLE_Chars_0_9;
#line 478 "calendar.m"
      }
#line 477 "calendar.m"
  }
#line 466 "calendar.m"
}

#line 391 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__same_date_2_p_0(
#line 391 "calendar.m"
  MR_Word mercury__calendar__A_3,
#line 391 "calendar.m"
  MR_Word mercury__calendar__B_4)
#line 391 "calendar.m"
{
#line 1239 "calendar.m"
  {
#line 1239 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1239 "calendar.m"
    MR_Integer mercury__calendar__Year_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 0)));
#line 1239 "calendar.m"
    MR_Integer mercury__calendar__Month_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 1)));
#line 1239 "calendar.m"
    MR_Integer mercury__calendar__Day_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 2)));
#line 1239 "calendar.m"
    MR_Integer mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 0)));
#line 1239 "calendar.m"
    MR_Integer mercury__calendar__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 1)));
#line 1239 "calendar.m"
    MR_Integer mercury__calendar__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 2)));
#line 1240 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 3)));
#line 1240 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 4)));
#line 1240 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 5)));
#line 1240 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 6)));
#line 1241 "calendar.m"
    MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 3)));
#line 1241 "calendar.m"
    MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 4)));
#line 1241 "calendar.m"
    MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 5)));
#line 1241 "calendar.m"
    MR_Integer mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 6)));

#line 1241 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Year_5 == mercury__calendar__V_16_16);
#line 1239 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1239 "calendar.m"
      {
#line 1241 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Month_6 == mercury__calendar__V_17_17);
#line 1239 "calendar.m"
        if (mercury__calendar__succeeded)
#line 1241 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__Day_7 == mercury__calendar__V_18_18);
#line 1239 "calendar.m"
      }
#line 1239 "calendar.m"
    return mercury__calendar__succeeded;
#line 1239 "calendar.m"
  }
#line 391 "calendar.m"
}

#line 382 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_5(
#line 382 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 382 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 382 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 382 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 382 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 382 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 382 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 382 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 382 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 382 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 382 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 382 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 382 "calendar.m"
{
#line 1224 "calendar.m"
  while (MR_TRUE)
#line 1224 "calendar.m"
    {
#line 1224 "calendar.m"
      /* tailcall optimized into a loop */
#line 1224 "calendar.m"
      {
#line 1224 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1224 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1225 "calendar.m"
        {
#line 1225 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1233 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1234 "calendar.m"
          {
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1234 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1234 "calendar.m"
          }
#line 1233 "calendar.m"
        else
#line 1229 "calendar.m"
          {
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1230 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1230 "calendar.m"
            {
#line 1230 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1229 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1229 "calendar.m"
              {
#line 1231 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1231 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1231 "calendar.m"
                {
#line 1231 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1231 "calendar.m"
                {
#line 1231 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1232 "calendar.m"
                /* direct tailcall eliminated */
#line 1232 "calendar.m"
                {
#line 1232 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1232 "calendar.m"
                }
#line 1232 "calendar.m"
                continue;
#line 1229 "calendar.m"
              }
#line 1229 "calendar.m"
          }
#line 1224 "calendar.m"
        return mercury__calendar__succeeded;
#line 1224 "calendar.m"
      }
#line 1224 "calendar.m"
      break;
#line 1224 "calendar.m"
    }
#line 382 "calendar.m"
}

#line 380 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_4(
#line 380 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 380 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 380 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 380 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 380 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 380 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 380 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 380 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 380 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 380 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 380 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 380 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 380 "calendar.m"
{
#line 1224 "calendar.m"
  while (MR_TRUE)
#line 1224 "calendar.m"
    {
#line 1224 "calendar.m"
      /* tailcall optimized into a loop */
#line 1224 "calendar.m"
      {
#line 1224 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1224 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1225 "calendar.m"
        {
#line 1225 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1233 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1234 "calendar.m"
          {
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1234 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1234 "calendar.m"
          }
#line 1233 "calendar.m"
        else
#line 1229 "calendar.m"
          {
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1230 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1230 "calendar.m"
            {
#line 1230 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1229 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1229 "calendar.m"
              {
#line 1231 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1231 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1231 "calendar.m"
                {
#line 1231 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1231 "calendar.m"
                {
#line 1231 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1232 "calendar.m"
                /* direct tailcall eliminated */
#line 1232 "calendar.m"
                {
#line 1232 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1232 "calendar.m"
                }
#line 1232 "calendar.m"
                continue;
#line 1229 "calendar.m"
              }
#line 1229 "calendar.m"
          }
#line 1224 "calendar.m"
        return mercury__calendar__succeeded;
#line 1224 "calendar.m"
      }
#line 1224 "calendar.m"
      break;
#line 1224 "calendar.m"
    }
#line 380 "calendar.m"
}

#line 378 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_3(
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
#line 1224 "calendar.m"
  while (MR_TRUE)
#line 1224 "calendar.m"
    {
#line 1224 "calendar.m"
      /* tailcall optimized into a loop */
#line 1224 "calendar.m"
      {
#line 1224 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1224 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1225 "calendar.m"
        {
#line 1225 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1233 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1234 "calendar.m"
          {
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1234 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1234 "calendar.m"
          }
#line 1233 "calendar.m"
        else
#line 1229 "calendar.m"
          {
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1229 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1230 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1230 "calendar.m"
            {
#line 1230 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1229 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1229 "calendar.m"
              {
#line 1231 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1231 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1231 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1231 "calendar.m"
                {
#line 1231 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1231 "calendar.m"
                {
#line 1231 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1232 "calendar.m"
                /* direct tailcall eliminated */
#line 1232 "calendar.m"
                {
#line 1232 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1232 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1232 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1232 "calendar.m"
                }
#line 1232 "calendar.m"
                continue;
#line 1229 "calendar.m"
              }
#line 1229 "calendar.m"
          }
#line 1224 "calendar.m"
        return mercury__calendar__succeeded;
#line 1224 "calendar.m"
      }
#line 1224 "calendar.m"
      break;
#line 1224 "calendar.m"
    }
#line 378 "calendar.m"
}

#line 376 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_2(
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
#line 1224 "calendar.m"
  while (MR_TRUE)
#line 1224 "calendar.m"
    {
#line 1224 "calendar.m"
      /* tailcall optimized into a loop */
#line 1224 "calendar.m"
      {
#line 1224 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1224 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1225 "calendar.m"
        {
#line 1225 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1233 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1234 "calendar.m"
          {
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1234 "calendar.m"
          }
#line 1233 "calendar.m"
        else
#line 1229 "calendar.m"
          {
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1230 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1230 "calendar.m"
            {
#line 1230 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1231 "calendar.m"
            {
#line 1231 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1231 "calendar.m"
            {
#line 1231 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1232 "calendar.m"
            /* direct tailcall eliminated */
#line 1232 "calendar.m"
            {
#line 1232 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1232 "calendar.m"
            }
#line 1232 "calendar.m"
            continue;
#line 1229 "calendar.m"
          }
#line 1224 "calendar.m"
      }
#line 1224 "calendar.m"
      break;
#line 1224 "calendar.m"
    }
#line 376 "calendar.m"
}

#line 374 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_1(
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
#line 1224 "calendar.m"
  while (MR_TRUE)
#line 1224 "calendar.m"
    {
#line 1224 "calendar.m"
      /* tailcall optimized into a loop */
#line 1224 "calendar.m"
      {
#line 1224 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1224 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1225 "calendar.m"
        {
#line 1225 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1233 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1234 "calendar.m"
          {
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1234 "calendar.m"
          }
#line 1233 "calendar.m"
        else
#line 1229 "calendar.m"
          {
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1230 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1230 "calendar.m"
            {
#line 1230 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1231 "calendar.m"
            {
#line 1231 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1231 "calendar.m"
            {
#line 1231 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1232 "calendar.m"
            /* direct tailcall eliminated */
#line 1232 "calendar.m"
            {
#line 1232 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1232 "calendar.m"
            }
#line 1232 "calendar.m"
            continue;
#line 1229 "calendar.m"
          }
#line 1224 "calendar.m"
      }
#line 1224 "calendar.m"
      break;
#line 1224 "calendar.m"
    }
#line 374 "calendar.m"
}

#line 372 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_0(
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
#line 1224 "calendar.m"
  while (MR_TRUE)
#line 1224 "calendar.m"
    {
#line 1224 "calendar.m"
      /* tailcall optimized into a loop */
#line 1224 "calendar.m"
      {
#line 1224 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1224 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1225 "calendar.m"
        {
#line 1225 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1233 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1234 "calendar.m"
          {
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1234 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1234 "calendar.m"
          }
#line 1233 "calendar.m"
        else
#line 1229 "calendar.m"
          {
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1229 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1229 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1230 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1230 "calendar.m"
            {
#line 1230 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1231 "calendar.m"
            {
#line 1231 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1231 "calendar.m"
            {
#line 1231 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1232 "calendar.m"
            /* direct tailcall eliminated */
#line 1232 "calendar.m"
            {
#line 1232 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1232 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1232 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1232 "calendar.m"
            }
#line 1232 "calendar.m"
            continue;
#line 1229 "calendar.m"
          }
#line 1224 "calendar.m"
      }
#line 1224 "calendar.m"
      break;
#line 1224 "calendar.m"
    }
#line 372 "calendar.m"
}

#line 364 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_5(
#line 364 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 364 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 364 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 364 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 364 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 364 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 364 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 364 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 364 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 364 "calendar.m"
{
#line 1211 "calendar.m"
  while (MR_TRUE)
#line 1211 "calendar.m"
    {
#line 1211 "calendar.m"
      /* tailcall optimized into a loop */
#line 1211 "calendar.m"
      {
#line 1211 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1211 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1212 "calendar.m"
        {
#line 1212 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1220 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1221 "calendar.m"
          {
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1221 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1221 "calendar.m"
          }
#line 1220 "calendar.m"
        else
#line 1216 "calendar.m"
          {
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1217 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1217 "calendar.m"
            {
#line 1217 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1216 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1216 "calendar.m"
              {
#line 1218 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1218 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1218 "calendar.m"
                {
#line 1218 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1218 "calendar.m"
                {
#line 1218 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1219 "calendar.m"
                /* direct tailcall eliminated */
#line 1219 "calendar.m"
                {
#line 1219 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1219 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1219 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1219 "calendar.m"
                }
#line 1219 "calendar.m"
                continue;
#line 1216 "calendar.m"
              }
#line 1216 "calendar.m"
          }
#line 1211 "calendar.m"
        return mercury__calendar__succeeded;
#line 1211 "calendar.m"
      }
#line 1211 "calendar.m"
      break;
#line 1211 "calendar.m"
    }
#line 364 "calendar.m"
}

#line 362 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_4(
#line 362 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 362 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 362 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 362 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 362 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 362 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 362 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 362 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 362 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 362 "calendar.m"
{
#line 1211 "calendar.m"
  while (MR_TRUE)
#line 1211 "calendar.m"
    {
#line 1211 "calendar.m"
      /* tailcall optimized into a loop */
#line 1211 "calendar.m"
      {
#line 1211 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1211 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1212 "calendar.m"
        {
#line 1212 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1220 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1221 "calendar.m"
          {
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1221 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1221 "calendar.m"
          }
#line 1220 "calendar.m"
        else
#line 1216 "calendar.m"
          {
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1217 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1217 "calendar.m"
            {
#line 1217 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1216 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1216 "calendar.m"
              {
#line 1218 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1218 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1218 "calendar.m"
                {
#line 1218 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1218 "calendar.m"
                {
#line 1218 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1219 "calendar.m"
                /* direct tailcall eliminated */
#line 1219 "calendar.m"
                {
#line 1219 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1219 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1219 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1219 "calendar.m"
                }
#line 1219 "calendar.m"
                continue;
#line 1216 "calendar.m"
              }
#line 1216 "calendar.m"
          }
#line 1211 "calendar.m"
        return mercury__calendar__succeeded;
#line 1211 "calendar.m"
      }
#line 1211 "calendar.m"
      break;
#line 1211 "calendar.m"
    }
#line 362 "calendar.m"
}

#line 360 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_3(
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
#line 1211 "calendar.m"
  while (MR_TRUE)
#line 1211 "calendar.m"
    {
#line 1211 "calendar.m"
      /* tailcall optimized into a loop */
#line 1211 "calendar.m"
      {
#line 1211 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1211 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1212 "calendar.m"
        {
#line 1212 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1220 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1221 "calendar.m"
          {
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1221 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1221 "calendar.m"
          }
#line 1220 "calendar.m"
        else
#line 1216 "calendar.m"
          {
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1216 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1217 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1217 "calendar.m"
            {
#line 1217 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1216 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1216 "calendar.m"
              {
#line 1218 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1218 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1218 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1218 "calendar.m"
                {
#line 1218 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1218 "calendar.m"
                {
#line 1218 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1219 "calendar.m"
                /* direct tailcall eliminated */
#line 1219 "calendar.m"
                {
#line 1219 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1219 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1219 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1219 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1219 "calendar.m"
                }
#line 1219 "calendar.m"
                continue;
#line 1216 "calendar.m"
              }
#line 1216 "calendar.m"
          }
#line 1211 "calendar.m"
        return mercury__calendar__succeeded;
#line 1211 "calendar.m"
      }
#line 1211 "calendar.m"
      break;
#line 1211 "calendar.m"
    }
#line 360 "calendar.m"
}

#line 358 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_2(
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
#line 1211 "calendar.m"
  while (MR_TRUE)
#line 1211 "calendar.m"
    {
#line 1211 "calendar.m"
      /* tailcall optimized into a loop */
#line 1211 "calendar.m"
      {
#line 1211 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1211 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1212 "calendar.m"
        {
#line 1212 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1220 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1221 "calendar.m"
          {
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1221 "calendar.m"
          }
#line 1220 "calendar.m"
        else
#line 1216 "calendar.m"
          {
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1217 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1217 "calendar.m"
            {
#line 1217 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1218 "calendar.m"
            {
#line 1218 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1218 "calendar.m"
            {
#line 1218 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1219 "calendar.m"
            /* direct tailcall eliminated */
#line 1219 "calendar.m"
            {
#line 1219 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1219 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1219 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1219 "calendar.m"
            }
#line 1219 "calendar.m"
            continue;
#line 1216 "calendar.m"
          }
#line 1211 "calendar.m"
      }
#line 1211 "calendar.m"
      break;
#line 1211 "calendar.m"
    }
#line 358 "calendar.m"
}

#line 356 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_1(
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
#line 1211 "calendar.m"
  while (MR_TRUE)
#line 1211 "calendar.m"
    {
#line 1211 "calendar.m"
      /* tailcall optimized into a loop */
#line 1211 "calendar.m"
      {
#line 1211 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1211 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1212 "calendar.m"
        {
#line 1212 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1220 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1221 "calendar.m"
          {
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1221 "calendar.m"
          }
#line 1220 "calendar.m"
        else
#line 1216 "calendar.m"
          {
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1217 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1217 "calendar.m"
            {
#line 1217 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1218 "calendar.m"
            {
#line 1218 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1218 "calendar.m"
            {
#line 1218 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1219 "calendar.m"
            /* direct tailcall eliminated */
#line 1219 "calendar.m"
            {
#line 1219 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1219 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1219 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1219 "calendar.m"
            }
#line 1219 "calendar.m"
            continue;
#line 1216 "calendar.m"
          }
#line 1211 "calendar.m"
      }
#line 1211 "calendar.m"
      break;
#line 1211 "calendar.m"
    }
#line 356 "calendar.m"
}

#line 354 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_0(
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
#line 1211 "calendar.m"
  while (MR_TRUE)
#line 1211 "calendar.m"
    {
#line 1211 "calendar.m"
      /* tailcall optimized into a loop */
#line 1211 "calendar.m"
      {
#line 1211 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1211 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1212 "calendar.m"
        {
#line 1212 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1220 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1221 "calendar.m"
          {
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1221 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1221 "calendar.m"
          }
#line 1220 "calendar.m"
        else
#line 1216 "calendar.m"
          {
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1216 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1216 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1217 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1217 "calendar.m"
            {
#line 1217 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1218 "calendar.m"
            {
#line 1218 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1218 "calendar.m"
            {
#line 1218 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1219 "calendar.m"
            /* direct tailcall eliminated */
#line 1219 "calendar.m"
            {
#line 1219 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1219 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1219 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1219 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1219 "calendar.m"
            }
#line 1219 "calendar.m"
            continue;
#line 1216 "calendar.m"
          }
#line 1211 "calendar.m"
      }
#line 1211 "calendar.m"
      break;
#line 1211 "calendar.m"
    }
#line 354 "calendar.m"
}

#line 348 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_5(
#line 348 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 348 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 348 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 348 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 348 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 348 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 348 "calendar.m"
{
#line 1198 "calendar.m"
  while (MR_TRUE)
#line 1198 "calendar.m"
    {
#line 1198 "calendar.m"
      /* tailcall optimized into a loop */
#line 1198 "calendar.m"
      {
#line 1198 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1198 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1199 "calendar.m"
        {
#line 1199 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1207 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1208 "calendar.m"
          {
#line 1208 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1208 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1208 "calendar.m"
          }
#line 1207 "calendar.m"
        else
#line 1203 "calendar.m"
          {
#line 1203 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1204 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1204 "calendar.m"
            {
#line 1204 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1203 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1203 "calendar.m"
              {
#line 1205 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1205 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1205 "calendar.m"
                {
#line 1205 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1205 "calendar.m"
                {
#line 1205 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1206 "calendar.m"
                /* direct tailcall eliminated */
#line 1206 "calendar.m"
                {
#line 1206 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1206 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1206 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1206 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1206 "calendar.m"
                }
#line 1206 "calendar.m"
                continue;
#line 1203 "calendar.m"
              }
#line 1203 "calendar.m"
          }
#line 1198 "calendar.m"
        return mercury__calendar__succeeded;
#line 1198 "calendar.m"
      }
#line 1198 "calendar.m"
      break;
#line 1198 "calendar.m"
    }
#line 348 "calendar.m"
}

#line 347 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_4(
#line 347 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 347 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 347 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 347 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 347 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 347 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 347 "calendar.m"
{
#line 1198 "calendar.m"
  while (MR_TRUE)
#line 1198 "calendar.m"
    {
#line 1198 "calendar.m"
      /* tailcall optimized into a loop */
#line 1198 "calendar.m"
      {
#line 1198 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1198 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1199 "calendar.m"
        {
#line 1199 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1207 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1208 "calendar.m"
          {
#line 1208 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1208 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1208 "calendar.m"
          }
#line 1207 "calendar.m"
        else
#line 1203 "calendar.m"
          {
#line 1203 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1204 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1204 "calendar.m"
            {
#line 1204 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1203 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1203 "calendar.m"
              {
#line 1205 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1205 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1205 "calendar.m"
                {
#line 1205 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1205 "calendar.m"
                {
#line 1205 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1206 "calendar.m"
                /* direct tailcall eliminated */
#line 1206 "calendar.m"
                {
#line 1206 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1206 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1206 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1206 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1206 "calendar.m"
                }
#line 1206 "calendar.m"
                continue;
#line 1203 "calendar.m"
              }
#line 1203 "calendar.m"
          }
#line 1198 "calendar.m"
        return mercury__calendar__succeeded;
#line 1198 "calendar.m"
      }
#line 1198 "calendar.m"
      break;
#line 1198 "calendar.m"
    }
#line 347 "calendar.m"
}

#line 346 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_3(
#line 346 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 346 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 346 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 346 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 346 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 346 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 346 "calendar.m"
{
#line 1198 "calendar.m"
  while (MR_TRUE)
#line 1198 "calendar.m"
    {
#line 1198 "calendar.m"
      /* tailcall optimized into a loop */
#line 1198 "calendar.m"
      {
#line 1198 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1198 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1199 "calendar.m"
        {
#line 1199 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1207 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1208 "calendar.m"
          {
#line 1208 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1208 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1208 "calendar.m"
          }
#line 1207 "calendar.m"
        else
#line 1203 "calendar.m"
          {
#line 1203 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1203 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1204 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1204 "calendar.m"
            {
#line 1204 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1203 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1203 "calendar.m"
              {
#line 1205 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1205 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1205 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1205 "calendar.m"
                {
#line 1205 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1205 "calendar.m"
                {
#line 1205 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1206 "calendar.m"
                /* direct tailcall eliminated */
#line 1206 "calendar.m"
                {
#line 1206 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1206 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1206 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1206 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1206 "calendar.m"
                }
#line 1206 "calendar.m"
                continue;
#line 1203 "calendar.m"
              }
#line 1203 "calendar.m"
          }
#line 1198 "calendar.m"
        return mercury__calendar__succeeded;
#line 1198 "calendar.m"
      }
#line 1198 "calendar.m"
      break;
#line 1198 "calendar.m"
    }
#line 346 "calendar.m"
}

#line 345 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_2(
#line 345 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 345 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 345 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 345 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 345 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 345 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 345 "calendar.m"
{
#line 1198 "calendar.m"
  while (MR_TRUE)
#line 1198 "calendar.m"
    {
#line 1198 "calendar.m"
      /* tailcall optimized into a loop */
#line 1198 "calendar.m"
      {
#line 1198 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1198 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1199 "calendar.m"
        {
#line 1199 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1207 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1208 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1207 "calendar.m"
        else
#line 1203 "calendar.m"
          {
#line 1203 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1204 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1204 "calendar.m"
            {
#line 1204 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1205 "calendar.m"
            {
#line 1205 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1205 "calendar.m"
            {
#line 1205 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1206 "calendar.m"
            /* direct tailcall eliminated */
#line 1206 "calendar.m"
            {
#line 1206 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1206 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1206 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1206 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1206 "calendar.m"
            }
#line 1206 "calendar.m"
            continue;
#line 1203 "calendar.m"
          }
#line 1198 "calendar.m"
      }
#line 1198 "calendar.m"
      break;
#line 1198 "calendar.m"
    }
#line 345 "calendar.m"
}

#line 344 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_1(
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
#line 1198 "calendar.m"
  while (MR_TRUE)
#line 1198 "calendar.m"
    {
#line 1198 "calendar.m"
      /* tailcall optimized into a loop */
#line 1198 "calendar.m"
      {
#line 1198 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1198 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1199 "calendar.m"
        {
#line 1199 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1207 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1208 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1207 "calendar.m"
        else
#line 1203 "calendar.m"
          {
#line 1203 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1204 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1204 "calendar.m"
            {
#line 1204 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1205 "calendar.m"
            {
#line 1205 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1205 "calendar.m"
            {
#line 1205 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1206 "calendar.m"
            /* direct tailcall eliminated */
#line 1206 "calendar.m"
            {
#line 1206 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1206 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1206 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1206 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1206 "calendar.m"
            }
#line 1206 "calendar.m"
            continue;
#line 1203 "calendar.m"
          }
#line 1198 "calendar.m"
      }
#line 1198 "calendar.m"
      break;
#line 1198 "calendar.m"
    }
#line 344 "calendar.m"
}

#line 343 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_0(
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
#line 1198 "calendar.m"
  while (MR_TRUE)
#line 1198 "calendar.m"
    {
#line 1198 "calendar.m"
      /* tailcall optimized into a loop */
#line 1198 "calendar.m"
      {
#line 1198 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1198 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1199 "calendar.m"
        {
#line 1199 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1207 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1208 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1207 "calendar.m"
        else
#line 1203 "calendar.m"
          {
#line 1203 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1203 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1204 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1204 "calendar.m"
            {
#line 1204 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1205 "calendar.m"
            {
#line 1205 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1205 "calendar.m"
            {
#line 1205 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1206 "calendar.m"
            /* direct tailcall eliminated */
#line 1206 "calendar.m"
            {
#line 1206 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1206 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1206 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1206 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1206 "calendar.m"
            }
#line 1206 "calendar.m"
            continue;
#line 1203 "calendar.m"
          }
#line 1198 "calendar.m"
      }
#line 1198 "calendar.m"
      break;
#line 1198 "calendar.m"
    }
#line 343 "calendar.m"
}

#line 326 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__day_duration_2_f_0(
#line 326 "calendar.m"
  MR_Word mercury__calendar__DateA_4,
#line 326 "calendar.m"
  MR_Word mercury__calendar__DateB_5)
#line 326 "calendar.m"
{
#line 914 "calendar.m"
  {
#line 914 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 914 "calendar.m"
    MR_Word mercury__calendar__Duration_6;
#line 914 "calendar.m"
    MR_Word mercury__calendar__CompResult_7;

#line 915 "calendar.m"
    {
#line 915 "calendar.m"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__CompResult_7, mercury__calendar__DateB_5, mercury__calendar__DateA_4);
    }
#line 919 "calendar.m"
    if ((mercury__calendar__CompResult_7 == (MR_Integer) 1))
#line 916 "calendar.m"
      {
#line 916 "calendar.m"
        MR_Word mercury__calendar__Duration0_8;
#line 916 "calendar.m"
        MR_Integer mercury__calendar__Months_88;
#line 916 "calendar.m"
        MR_Integer mercury__calendar__Days_89;
#line 916 "calendar.m"
        MR_Integer mercury__calendar__Seconds_90;
#line 916 "calendar.m"
        MR_Integer mercury__calendar__MicroSeconds_91;
#line 916 "calendar.m"
        MR_Integer mercury__calendar__V_92_92;
#line 916 "calendar.m"
        MR_Integer mercury__calendar__V_93_93;
#line 916 "calendar.m"
        MR_Integer mercury__calendar__V_94_94;
#line 916 "calendar.m"
        MR_Integer mercury__calendar__V_95_95;

#line 917 "calendar.m"
        {
#line 917 "calendar.m"
          mercury__calendar__Duration0_8 = mercury__calendar__day_duration_2_f_0(mercury__calendar__DateB_5, mercury__calendar__DateA_4);
        }
#line 1177 "calendar.m"
        mercury__calendar__Months_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 0)));
#line 1177 "calendar.m"
        mercury__calendar__Days_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 1)));
#line 1177 "calendar.m"
        mercury__calendar__Seconds_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 2)));
#line 1177 "calendar.m"
        mercury__calendar__MicroSeconds_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 3)));
#line 1178 "calendar.m"
        mercury__calendar__V_92_92 = ((MR_Integer) 0 - mercury__calendar__Months_88);
#line 1178 "calendar.m"
        mercury__calendar__V_93_93 = ((MR_Integer) 0 - mercury__calendar__Days_89);
#line 1178 "calendar.m"
        mercury__calendar__V_94_94 = ((MR_Integer) 0 - mercury__calendar__Seconds_90);
#line 1178 "calendar.m"
        mercury__calendar__V_95_95 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_91);
#line 1178 "calendar.m"
        {
#line 1178 "calendar.m"
          mercury__calendar__Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 0) = ((MR_Box) (mercury__calendar__V_92_92));
#line 1178 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 1) = ((MR_Box) (mercury__calendar__V_93_93));
#line 1178 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 2) = ((MR_Box) (mercury__calendar__V_94_94));
#line 1178 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 3) = ((MR_Box) (mercury__calendar__V_95_95));
#line 1178 "calendar.m"
        }
#line 916 "calendar.m"
      }
#line 919 "calendar.m"
    else
#line 919 "calendar.m"
    if ((mercury__calendar__CompResult_7 == (MR_Integer) 0))
#line 1180 "calendar.m"
      mercury__calendar__Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
#line 919 "calendar.m"
    else
#line 921 "calendar.m"
      {
#line 921 "calendar.m"
        MR_Integer mercury__calendar__MicroSecond1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 921 "calendar.m"
        MR_Integer mercury__calendar__MicroSecond2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 921 "calendar.m"
        MR_Integer mercury__calendar__MicroSeconds_12;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Second1_13;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Second2_14;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Seconds_15;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Minute1_16;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Minute2_17;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Minutes_18;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Hour1_19;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Hour2_20;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Hours_21;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__JDN1_22;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__JDN2_23;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__Days_24;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_26_26;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__V_27_27;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_29_29;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__V_30_30;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_32_32;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__V_33_33;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_35_35;
#line 921 "calendar.m"
        MR_Integer mercury__calendar__V_36_36;
#line 923 "calendar.m"
        MR_Integer mercury__calendar__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 923 "calendar.m"
        MR_Integer mercury__calendar__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 923 "calendar.m"
        MR_Integer mercury__calendar__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 923 "calendar.m"
        MR_Integer mercury__calendar__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 923 "calendar.m"
        MR_Integer mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 923 "calendar.m"
        MR_Integer mercury__calendar__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 924 "calendar.m"
        MR_Integer mercury__calendar__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 924 "calendar.m"
        MR_Integer mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 924 "calendar.m"
        MR_Integer mercury__calendar__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 924 "calendar.m"
        MR_Integer mercury__calendar__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 924 "calendar.m"
        MR_Integer mercury__calendar__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 924 "calendar.m"
        MR_Integer mercury__calendar__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 927 "calendar.m"
        MR_Integer mercury__calendar__V_51_51;
#line 927 "calendar.m"
        MR_Integer mercury__calendar__V_52_52;
#line 927 "calendar.m"
        MR_Integer mercury__calendar__V_53_53;
#line 927 "calendar.m"
        MR_Integer mercury__calendar__V_54_54;
#line 927 "calendar.m"
        MR_Integer mercury__calendar__V_55_55;
#line 927 "calendar.m"
        MR_Integer mercury__calendar__V_56_56;
#line 928 "calendar.m"
        MR_Integer mercury__calendar__V_57_57;
#line 928 "calendar.m"
        MR_Integer mercury__calendar__V_58_58;
#line 928 "calendar.m"
        MR_Integer mercury__calendar__V_59_59;
#line 928 "calendar.m"
        MR_Integer mercury__calendar__V_60_60;
#line 928 "calendar.m"
        MR_Integer mercury__calendar__V_61_61;
#line 928 "calendar.m"
        MR_Integer mercury__calendar__V_62_62;
#line 931 "calendar.m"
        MR_Integer mercury__calendar__V_63_63;
#line 931 "calendar.m"
        MR_Integer mercury__calendar__V_64_64;
#line 931 "calendar.m"
        MR_Integer mercury__calendar__V_65_65;
#line 931 "calendar.m"
        MR_Integer mercury__calendar__V_66_66;
#line 931 "calendar.m"
        MR_Integer mercury__calendar__V_67_67;
#line 931 "calendar.m"
        MR_Integer mercury__calendar__V_68_68;
#line 932 "calendar.m"
        MR_Integer mercury__calendar__V_69_69;
#line 932 "calendar.m"
        MR_Integer mercury__calendar__V_70_70;
#line 932 "calendar.m"
        MR_Integer mercury__calendar__V_71_71;
#line 932 "calendar.m"
        MR_Integer mercury__calendar__V_72_72;
#line 932 "calendar.m"
        MR_Integer mercury__calendar__V_73_73;
#line 932 "calendar.m"
        MR_Integer mercury__calendar__V_74_74;
#line 935 "calendar.m"
        MR_Integer mercury__calendar__V_75_75;
#line 935 "calendar.m"
        MR_Integer mercury__calendar__V_76_76;
#line 935 "calendar.m"
        MR_Integer mercury__calendar__V_77_77;
#line 935 "calendar.m"
        MR_Integer mercury__calendar__V_78_78;
#line 935 "calendar.m"
        MR_Integer mercury__calendar__V_79_79;
#line 935 "calendar.m"
        MR_Integer mercury__calendar__V_80_80;
#line 936 "calendar.m"
        MR_Integer mercury__calendar__V_81_81;
#line 936 "calendar.m"
        MR_Integer mercury__calendar__V_82_82;
#line 936 "calendar.m"
        MR_Integer mercury__calendar__V_83_83;
#line 936 "calendar.m"
        MR_Integer mercury__calendar__V_84_84;
#line 936 "calendar.m"
        MR_Integer mercury__calendar__V_85_85;
#line 936 "calendar.m"
        MR_Integer mercury__calendar__V_86_86;

#line 925 "calendar.m"
        {
#line 925 "calendar.m"
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 1000000, mercury__calendar__MicroSecond1_10, mercury__calendar__MicroSecond2_11, &mercury__calendar__MicroSeconds_12, &mercury__calendar__STATE_VARIABLE_Borrow_26_26);
        }
#line 927 "calendar.m"
        mercury__calendar__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 927 "calendar.m"
        mercury__calendar__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 927 "calendar.m"
        mercury__calendar__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 927 "calendar.m"
        mercury__calendar__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 927 "calendar.m"
        mercury__calendar__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 927 "calendar.m"
        mercury__calendar__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 927 "calendar.m"
        mercury__calendar__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 927 "calendar.m"
        mercury__calendar__Second1_13 = (mercury__calendar__V_27_27 - mercury__calendar__STATE_VARIABLE_Borrow_26_26);
#line 928 "calendar.m"
        mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 928 "calendar.m"
        mercury__calendar__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 928 "calendar.m"
        mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 928 "calendar.m"
        mercury__calendar__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 928 "calendar.m"
        mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 928 "calendar.m"
        mercury__calendar__Second2_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 928 "calendar.m"
        mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 929 "calendar.m"
        {
#line 929 "calendar.m"
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__Second1_13, mercury__calendar__Second2_14, &mercury__calendar__Seconds_15, &mercury__calendar__STATE_VARIABLE_Borrow_29_29);
        }
#line 931 "calendar.m"
        mercury__calendar__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 931 "calendar.m"
        mercury__calendar__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 931 "calendar.m"
        mercury__calendar__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 931 "calendar.m"
        mercury__calendar__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 931 "calendar.m"
        mercury__calendar__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 931 "calendar.m"
        mercury__calendar__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 931 "calendar.m"
        mercury__calendar__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 931 "calendar.m"
        mercury__calendar__Minute1_16 = (mercury__calendar__V_30_30 - mercury__calendar__STATE_VARIABLE_Borrow_29_29);
#line 932 "calendar.m"
        mercury__calendar__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 932 "calendar.m"
        mercury__calendar__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 932 "calendar.m"
        mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 932 "calendar.m"
        mercury__calendar__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 932 "calendar.m"
        mercury__calendar__Minute2_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 932 "calendar.m"
        mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 932 "calendar.m"
        mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 933 "calendar.m"
        {
#line 933 "calendar.m"
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__Minute1_16, mercury__calendar__Minute2_17, &mercury__calendar__Minutes_18, &mercury__calendar__STATE_VARIABLE_Borrow_32_32);
        }
#line 935 "calendar.m"
        mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 935 "calendar.m"
        mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 935 "calendar.m"
        mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 935 "calendar.m"
        mercury__calendar__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 935 "calendar.m"
        mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 935 "calendar.m"
        mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 935 "calendar.m"
        mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 935 "calendar.m"
        mercury__calendar__Hour1_19 = (mercury__calendar__V_33_33 - mercury__calendar__STATE_VARIABLE_Borrow_32_32);
#line 936 "calendar.m"
        mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 936 "calendar.m"
        mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 936 "calendar.m"
        mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 936 "calendar.m"
        mercury__calendar__Hour2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 936 "calendar.m"
        mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 936 "calendar.m"
        mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 936 "calendar.m"
        mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 937 "calendar.m"
        {
#line 937 "calendar.m"
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, mercury__calendar__Hour1_19, mercury__calendar__Hour2_20, &mercury__calendar__Hours_21, &mercury__calendar__STATE_VARIABLE_Borrow_35_35);
        }
#line 938 "calendar.m"
        {
#line 938 "calendar.m"
          mercury__calendar__JDN1_22 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__DateB_5);
        }
#line 939 "calendar.m"
        {
#line 939 "calendar.m"
          mercury__calendar__JDN2_23 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__DateA_4);
        }
#line 940 "calendar.m"
        mercury__calendar__V_36_36 = (mercury__calendar__JDN1_22 - mercury__calendar__STATE_VARIABLE_Borrow_35_35);
#line 940 "calendar.m"
        mercury__calendar__Days_24 = (mercury__calendar__V_36_36 - mercury__calendar__JDN2_23);
#line 941 "calendar.m"
        {
#line 941 "calendar.m"
          return mercury__calendar__Duration_6 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, mercury__calendar__Days_24, mercury__calendar__Hours_21, mercury__calendar__Minutes_18, mercury__calendar__Seconds_15, mercury__calendar__MicroSeconds_12);
        }
#line 921 "calendar.m"
      }
#line 914 "calendar.m"
    return mercury__calendar__Duration_6;
#line 914 "calendar.m"
  }
#line 326 "calendar.m"
}

#line 320 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__duration_2_f_0(
#line 320 "calendar.m"
  MR_Word mercury__calendar__DateA_4,
#line 320 "calendar.m"
  MR_Word mercury__calendar__DateB_5)
#line 320 "calendar.m"
{
#line 946 "calendar.m"
  {
#line 946 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 946 "calendar.m"
    MR_Word mercury__calendar__Duration_6;
#line 946 "calendar.m"
    MR_Word mercury__calendar__CompResult_7;

#line 947 "calendar.m"
    {
#line 947 "calendar.m"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__CompResult_7, mercury__calendar__DateB_5, mercury__calendar__DateA_4);
    }
#line 952 "calendar.m"
    if ((mercury__calendar__CompResult_7 == (MR_Integer) 1))
#line 949 "calendar.m"
      {
#line 949 "calendar.m"
        MR_Word mercury__calendar__Duration0_8;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__Months_12;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__Days_13;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__Seconds_14;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__MicroSeconds_15;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_16_16;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_17_17;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_18_18;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_19_19;

#line 950 "calendar.m"
        {
#line 950 "calendar.m"
          mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 0, mercury__calendar__DateA_4, mercury__calendar__DateB_5, &mercury__calendar__Duration0_8);
        }
#line 1177 "calendar.m"
        mercury__calendar__Months_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 0)));
#line 1177 "calendar.m"
        mercury__calendar__Days_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 1)));
#line 1177 "calendar.m"
        mercury__calendar__Seconds_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 2)));
#line 1177 "calendar.m"
        mercury__calendar__MicroSeconds_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 3)));
#line 1178 "calendar.m"
        mercury__calendar__V_16_16 = ((MR_Integer) 0 - mercury__calendar__Months_12);
#line 1178 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Integer) 0 - mercury__calendar__Days_13);
#line 1178 "calendar.m"
        mercury__calendar__V_18_18 = ((MR_Integer) 0 - mercury__calendar__Seconds_14);
#line 1178 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_15);
#line 1178 "calendar.m"
        {
#line 1178 "calendar.m"
          mercury__calendar__Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 0) = ((MR_Box) (mercury__calendar__V_16_16));
#line 1178 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 1) = ((MR_Box) (mercury__calendar__V_17_17));
#line 1178 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 2) = ((MR_Box) (mercury__calendar__V_18_18));
#line 1178 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 3) = ((MR_Box) (mercury__calendar__V_19_19));
#line 1178 "calendar.m"
        }
#line 949 "calendar.m"
      }
#line 952 "calendar.m"
    else
#line 952 "calendar.m"
    if ((mercury__calendar__CompResult_7 == (MR_Integer) 0))
#line 1180 "calendar.m"
      mercury__calendar__Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
#line 952 "calendar.m"
    else
#line 956 "calendar.m"
      {
#line 957 "calendar.m"
        {
#line 957 "calendar.m"
          mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 1, mercury__calendar__DateB_5, mercury__calendar__DateA_4, &mercury__calendar__Duration_6);
        }
#line 956 "calendar.m"
      }
#line 946 "calendar.m"
    return mercury__calendar__Duration_6;
#line 946 "calendar.m"
  }
#line 320 "calendar.m"
}

#line 293 "calendar.m"
void MR_CALL 
mercury__calendar__local_time_offset_3_p_0(
#line 293 "calendar.m"
  MR_Word * mercury__calendar__TZ_4)
#line 293 "calendar.m"
{
#line 1169 "calendar.m"
  {
#line 1169 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1169 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1169 "calendar.m"
    MR_Word mercury__calendar__LocalTM_7;
#line 1169 "calendar.m"
    MR_Word mercury__calendar__LocalTime_9;
#line 1169 "calendar.m"
    MR_Word mercury__calendar__GMTime_10;
#line 1169 "calendar.m"
    MR_Box mercury__calendar__Time_3_15;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Yr_5_16;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Mnt_6_17;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__MD_7_18;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Hrs_8_19;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Min_9_20;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Sec_10_21;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__YD_11_22;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__WD_12_23;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__N_13_24;
#line 1169 "calendar.m"
    MR_Word mercury__calendar__V_14_25;
#line 1169 "calendar.m"
    MR_Box mercury__calendar__Time_3_27;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__N_13_36;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__TMYear_40;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_41;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Year_49;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Month_50;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Day_51;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Hour_52;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Minute_53;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Second_54;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__TMYear_60;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_61;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Year_69;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Month_70;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Day_71;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Hour_72;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Minute_73;
#line 1169 "calendar.m"
    MR_Integer mercury__calendar__Second_74;
#line 127 "time.opt"
    MR_Integer mercury__calendar__YD_11_34;
#line 127 "time.opt"
    MR_Integer mercury__calendar__WD_12_35;
#line 96 "time.opt"
    MR_Word mercury__calendar__V_14_37;
#line 1160 "calendar.m"
    MR_Integer mercury__calendar__V_46_46;
#line 1160 "calendar.m"
    MR_Integer mercury__calendar__V_47_47;
#line 1160 "calendar.m"
    MR_Word mercury__calendar__V_48_48;

#line 1170 "calendar.m"
    {
#line 1170 "calendar.m"
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

#line 11170 "calendar.c"

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
#line 11254 "calendar.c"

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
#line 1160 "calendar.m"
    mercury__calendar__TMYear_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 0)));
#line 1160 "calendar.m"
    mercury__calendar__TMMonth_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 1)));
#line 1160 "calendar.m"
    mercury__calendar__Day_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 2)));
#line 1160 "calendar.m"
    mercury__calendar__Hour_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 3)));
#line 1160 "calendar.m"
    mercury__calendar__Minute_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 4)));
#line 1160 "calendar.m"
    mercury__calendar__Second_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 5)));
#line 1160 "calendar.m"
    mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 6)));
#line 1160 "calendar.m"
    mercury__calendar__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 7)));
#line 1160 "calendar.m"
    mercury__calendar__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 8)));
#line 1161 "calendar.m"
    mercury__calendar__Year_49 = ((MR_Integer) 1900 + mercury__calendar__TMYear_40);
#line 1162 "calendar.m"
    mercury__calendar__Month_50 = (mercury__calendar__TMMonth_41 + (MR_Integer) 1);
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      mercury__calendar__LocalTime_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 0) = ((MR_Box) (mercury__calendar__Year_49));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 1) = ((MR_Box) (mercury__calendar__Month_50));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 2) = ((MR_Box) (mercury__calendar__Day_51));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 3) = ((MR_Box) (mercury__calendar__Hour_52));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 4) = ((MR_Box) (mercury__calendar__Minute_53));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 5) = ((MR_Box) (mercury__calendar__Second_54));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1167 "calendar.m"
    }
#line 1161 "calendar.m"
    mercury__calendar__Year_69 = ((MR_Integer) 1900 + mercury__calendar__TMYear_60);
#line 1162 "calendar.m"
    mercury__calendar__Month_70 = (mercury__calendar__TMMonth_61 + (MR_Integer) 1);
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      mercury__calendar__GMTime_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 0) = ((MR_Box) (mercury__calendar__Year_69));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 1) = ((MR_Box) (mercury__calendar__Month_70));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 2) = ((MR_Box) (mercury__calendar__Day_71));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 3) = ((MR_Box) (mercury__calendar__Hour_72));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 4) = ((MR_Box) (mercury__calendar__Minute_73));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 5) = ((MR_Box) (mercury__calendar__Second_74));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1167 "calendar.m"
    }
#line 1175 "calendar.m"
    {
#line 1175 "calendar.m"
      *mercury__calendar__TZ_4 = mercury__calendar__duration_2_f_0(mercury__calendar__GMTime_10, mercury__calendar__LocalTime_9);
    }
#line 1169 "calendar.m"
  }
#line 293 "calendar.m"
}

#line 277 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__duration_leq_2_p_0(
#line 277 "calendar.m"
  MR_Word mercury__calendar__DurA_3,
#line 277 "calendar.m"
  MR_Word mercury__calendar__DurB_4)
#line 277 "calendar.m"
{
#line 778 "calendar.m"
  {
#line 778 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 778 "calendar.m"
    MR_Word mercury__calendar__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

#line 779 "calendar.m"
    {
#line 779 "calendar.m"
      return mercury__calendar__succeeded = mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(mercury__calendar__DurA_3, mercury__calendar__DurB_4, mercury__calendar__V_10_10);
    }
#line 778 "calendar.m"
    return mercury__calendar__succeeded;
#line 778 "calendar.m"
  }
#line 277 "calendar.m"
}

#line 261 "calendar.m"
void MR_CALL 
mercury__calendar__add_duration_3_p_0(
#line 261 "calendar.m"
  MR_Word mercury__calendar__D_4,
#line 261 "calendar.m"
  MR_Word mercury__calendar__S_5,
#line 261 "calendar.m"
  MR_Word * mercury__calendar__E_6)
#line 261 "calendar.m"
{
#line 847 "calendar.m"
  {
#line 847 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__MaxDaysInMonth_9;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__TempDays_10;
#line 847 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_11_11 = (MR_Word) &mercury__calendar_scalar_common_5[1];
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_19_19;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 847 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_22_22;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_26_26;
#line 847 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_29_29;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_31_31;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_32_32;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 847 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_35_35;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_37_37;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_38_38;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_39_39;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_40_40;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_41_41;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_42_42;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_43_43;
#line 847 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_44_44;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_45_45;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_47_47;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_49_49;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_50_50;
#line 847 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_51_51;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_52_52;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_54_54;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_56_56;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_57_57;
#line 847 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_58_58;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_59_59;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_61_61;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_63_63;
#line 847 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_68_68;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_69_69;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_70_70;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_71_71;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_94_94;
#line 847 "calendar.m"
    MR_Integer mercury__calendar__V_160_160;
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 849 "calendar.m"
    MR_Integer mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 850 "calendar.m"
    MR_Integer mercury__calendar__V_82_82;
#line 850 "calendar.m"
    MR_Integer mercury__calendar__V_84_84;
#line 850 "calendar.m"
    MR_Integer mercury__calendar__V_85_85;
#line 850 "calendar.m"
    MR_Integer mercury__calendar__V_86_86;
#line 850 "calendar.m"
    MR_Integer mercury__calendar__V_87_87;
#line 850 "calendar.m"
    MR_Integer mercury__calendar__V_88_88;
#line 850 "calendar.m"
    MR_Integer mercury__calendar__V_83_83;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_89_89;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_92_92;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_93_93;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_96_96;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_97_97;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_98_98;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_99_99;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_100_100;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_101_101;
#line 853 "calendar.m"
    MR_Integer mercury__calendar__V_95_95;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_108_108;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_109_109;
#line 855 "calendar.m"
    MR_Integer mercury__calendar__V_110_110;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_111_111;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_112_112;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_113_113;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_114_114;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_115_115;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_116_116;
#line 856 "calendar.m"
    MR_Integer mercury__calendar__V_117_117;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_118_118;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_119_119;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_120_120;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_121_121;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_122_122;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_123_123;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_124_124;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_125_125;
#line 859 "calendar.m"
    MR_Integer mercury__calendar__V_126_126;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_127_127;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_128_128;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_129_129;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_130_130;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_131_131;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_133_133;
#line 860 "calendar.m"
    MR_Integer mercury__calendar__V_132_132;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_134_134;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_135_135;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_136_136;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_137_137;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_138_138;
#line 863 "calendar.m"
    MR_Integer mercury__calendar__V_139_139;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_140_140;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_141_141;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_142_142;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_143_143;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_145_145;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_146_146;
#line 864 "calendar.m"
    MR_Integer mercury__calendar__V_144_144;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_147_147;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_148_148;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_149_149;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_150_150;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_151_151;
#line 867 "calendar.m"
    MR_Integer mercury__calendar__V_152_152;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_153_153;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_154_154;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_155_155;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_157_157;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_158_158;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_159_159;
#line 868 "calendar.m"
    MR_Integer mercury__calendar__V_156_156;
#line 871 "calendar.m"
    MR_Integer mercury__calendar__V_161_161;
#line 871 "calendar.m"
    MR_Integer mercury__calendar__V_162_162;
#line 871 "calendar.m"
    MR_Integer mercury__calendar__V_163_163;
#line 871 "calendar.m"
    MR_Integer mercury__calendar__V_164_164;
#line 871 "calendar.m"
    MR_Integer mercury__calendar__V_165_165;
#line 872 "calendar.m"
    MR_Integer mercury__calendar__V_65_65;
#line 872 "calendar.m"
    MR_Integer mercury__calendar__V_172_172;
#line 872 "calendar.m"
    MR_Integer mercury__calendar__V_173_173;
#line 872 "calendar.m"
    MR_Integer mercury__calendar__V_174_174;
#line 872 "calendar.m"
    MR_Integer mercury__calendar__V_175_175;
#line 872 "calendar.m"
    MR_Integer mercury__calendar__V_176_176;
#line 872 "calendar.m"
    MR_Integer mercury__calendar__V_177_177;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_190_190;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_191_191;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_192_192;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_193_193;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_194_194;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_196_196;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_197_197;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_198_198;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_199_199;
#line 879 "calendar.m"
    MR_Integer mercury__calendar__V_195_195;

#line 849 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_19_19 = (mercury__calendar__V_20_20 + mercury__calendar__V_21_21);
#line 850 "calendar.m"
    {
#line 850 "calendar.m"
      mercury__calendar__V_23_23 = mercury__calendar__modulo_3_f_0(mercury__calendar__STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    }
#line 850 "calendar.m"
    mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 0)));
#line 850 "calendar.m"
    mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 1)));
#line 850 "calendar.m"
    mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 2)));
#line 850 "calendar.m"
    mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 3)));
#line 850 "calendar.m"
    mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 4)));
#line 850 "calendar.m"
    mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 5)));
#line 850 "calendar.m"
    mercury__calendar__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 6)));
#line 850 "calendar.m"
    {
#line 850 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 850 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 0) = ((MR_Box) (mercury__calendar__V_82_82));
#line 850 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 1) = ((MR_Box) (mercury__calendar__V_23_23));
#line 850 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 2) = ((MR_Box) (mercury__calendar__V_84_84));
#line 850 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 3) = ((MR_Box) (mercury__calendar__V_85_85));
#line 850 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 4) = ((MR_Box) (mercury__calendar__V_86_86));
#line 850 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 5) = ((MR_Box) (mercury__calendar__V_87_87));
#line 850 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 6) = ((MR_Box) (mercury__calendar__V_88_88));
#line 850 "calendar.m"
    }
#line 851 "calendar.m"
    {
#line 851 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_26_26 = mercury__calendar__fquotient_3_f_0(mercury__calendar__STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    }
#line 853 "calendar.m"
    mercury__calendar__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 853 "calendar.m"
    mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 853 "calendar.m"
    mercury__calendar__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 853 "calendar.m"
    mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 853 "calendar.m"
    mercury__calendar__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 853 "calendar.m"
    mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 853 "calendar.m"
    mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 853 "calendar.m"
    mercury__calendar__V_30_30 = (mercury__calendar__V_31_31 + mercury__calendar__STATE_VARIABLE_Carry_26_26);
#line 853 "calendar.m"
    mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 0)));
#line 853 "calendar.m"
    mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 1)));
#line 853 "calendar.m"
    mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 2)));
#line 853 "calendar.m"
    mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 3)));
#line 853 "calendar.m"
    mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 4)));
#line 853 "calendar.m"
    mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 5)));
#line 853 "calendar.m"
    mercury__calendar__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 6)));
#line 853 "calendar.m"
    {
#line 853 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 853 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 0) = ((MR_Box) (mercury__calendar__V_30_30));
#line 853 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 1) = ((MR_Box) (mercury__calendar__V_96_96));
#line 853 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 2) = ((MR_Box) (mercury__calendar__V_97_97));
#line 853 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 3) = ((MR_Box) (mercury__calendar__V_98_98));
#line 853 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 4) = ((MR_Box) (mercury__calendar__V_99_99));
#line 853 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 5) = ((MR_Box) (mercury__calendar__V_100_100));
#line 853 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 6) = ((MR_Box) (mercury__calendar__V_101_101));
#line 853 "calendar.m"
    }
#line 855 "calendar.m"
    mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 855 "calendar.m"
    mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 855 "calendar.m"
    mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 855 "calendar.m"
    mercury__calendar__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 855 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_32_32 = (mercury__calendar__V_94_94 + mercury__calendar__V_34_34);
#line 856 "calendar.m"
    {
#line 856 "calendar.m"
      mercury__calendar__V_37_37 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 856 "calendar.m"
    {
#line 856 "calendar.m"
      mercury__calendar__V_36_36 = mercury__calendar__modulo_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_32_32, mercury__calendar__V_37_37);
    }
#line 856 "calendar.m"
    mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 0)));
#line 856 "calendar.m"
    mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 1)));
#line 856 "calendar.m"
    mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 2)));
#line 856 "calendar.m"
    mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 3)));
#line 856 "calendar.m"
    mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 4)));
#line 856 "calendar.m"
    mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 5)));
#line 856 "calendar.m"
    mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 6)));
#line 856 "calendar.m"
    {
#line 856 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 0) = ((MR_Box) (mercury__calendar__V_111_111));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 1) = ((MR_Box) (mercury__calendar__V_112_112));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 2) = ((MR_Box) (mercury__calendar__V_113_113));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 3) = ((MR_Box) (mercury__calendar__V_114_114));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 4) = ((MR_Box) (mercury__calendar__V_115_115));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 5) = ((MR_Box) (mercury__calendar__V_116_116));
#line 856 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 6) = ((MR_Box) (mercury__calendar__V_36_36));
#line 856 "calendar.m"
    }
#line 857 "calendar.m"
    {
#line 857 "calendar.m"
      mercury__calendar__V_39_39 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 857 "calendar.m"
    {
#line 857 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_38_38 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_32_32, mercury__calendar__V_39_39);
    }
#line 859 "calendar.m"
    mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 859 "calendar.m"
    mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 859 "calendar.m"
    mercury__calendar__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 859 "calendar.m"
    mercury__calendar__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 859 "calendar.m"
    mercury__calendar__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 859 "calendar.m"
    mercury__calendar__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 859 "calendar.m"
    mercury__calendar__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 859 "calendar.m"
    mercury__calendar__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 859 "calendar.m"
    mercury__calendar__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 859 "calendar.m"
    mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 859 "calendar.m"
    mercury__calendar__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 859 "calendar.m"
    mercury__calendar__V_41_41 = (mercury__calendar__V_42_42 + mercury__calendar__V_43_43);
#line 859 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_40_40 = (mercury__calendar__V_41_41 + mercury__calendar__STATE_VARIABLE_Carry_38_38);
#line 860 "calendar.m"
    {
#line 860 "calendar.m"
      mercury__calendar__V_45_45 = mercury__calendar__modulo_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    }
#line 860 "calendar.m"
    mercury__calendar__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 0)));
#line 860 "calendar.m"
    mercury__calendar__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 1)));
#line 860 "calendar.m"
    mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 2)));
#line 860 "calendar.m"
    mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 3)));
#line 860 "calendar.m"
    mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 4)));
#line 860 "calendar.m"
    mercury__calendar__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 5)));
#line 860 "calendar.m"
    mercury__calendar__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 6)));
#line 860 "calendar.m"
    {
#line 860 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 0) = ((MR_Box) (mercury__calendar__V_127_127));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 1) = ((MR_Box) (mercury__calendar__V_128_128));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 2) = ((MR_Box) (mercury__calendar__V_129_129));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 3) = ((MR_Box) (mercury__calendar__V_130_130));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 4) = ((MR_Box) (mercury__calendar__V_131_131));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 5) = ((MR_Box) (mercury__calendar__V_45_45));
#line 860 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 6) = ((MR_Box) (mercury__calendar__V_133_133));
#line 860 "calendar.m"
    }
#line 861 "calendar.m"
    {
#line 861 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_47_47 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    }
#line 863 "calendar.m"
    mercury__calendar__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 863 "calendar.m"
    mercury__calendar__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 863 "calendar.m"
    mercury__calendar__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 863 "calendar.m"
    mercury__calendar__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 863 "calendar.m"
    mercury__calendar__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 863 "calendar.m"
    mercury__calendar__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 863 "calendar.m"
    mercury__calendar__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 863 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_49_49 = (mercury__calendar__V_50_50 + mercury__calendar__STATE_VARIABLE_Carry_47_47);
#line 864 "calendar.m"
    {
#line 864 "calendar.m"
      mercury__calendar__V_52_52 = mercury__int__mod_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    }
#line 864 "calendar.m"
    mercury__calendar__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 0)));
#line 864 "calendar.m"
    mercury__calendar__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 1)));
#line 864 "calendar.m"
    mercury__calendar__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 2)));
#line 864 "calendar.m"
    mercury__calendar__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 3)));
#line 864 "calendar.m"
    mercury__calendar__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 4)));
#line 864 "calendar.m"
    mercury__calendar__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 5)));
#line 864 "calendar.m"
    mercury__calendar__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 6)));
#line 864 "calendar.m"
    {
#line 864 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 0) = ((MR_Box) (mercury__calendar__V_140_140));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 1) = ((MR_Box) (mercury__calendar__V_141_141));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 2) = ((MR_Box) (mercury__calendar__V_142_142));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 3) = ((MR_Box) (mercury__calendar__V_143_143));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 4) = ((MR_Box) (mercury__calendar__V_52_52));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 5) = ((MR_Box) (mercury__calendar__V_145_145));
#line 864 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 6) = ((MR_Box) (mercury__calendar__V_146_146));
#line 864 "calendar.m"
    }
#line 865 "calendar.m"
    {
#line 865 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_54_54 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    }
#line 867 "calendar.m"
    mercury__calendar__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 867 "calendar.m"
    mercury__calendar__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 867 "calendar.m"
    mercury__calendar__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 867 "calendar.m"
    mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 867 "calendar.m"
    mercury__calendar__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 867 "calendar.m"
    mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 867 "calendar.m"
    mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 867 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_56_56 = (mercury__calendar__V_57_57 + mercury__calendar__STATE_VARIABLE_Carry_54_54);
#line 868 "calendar.m"
    {
#line 868 "calendar.m"
      mercury__calendar__V_59_59 = mercury__int__mod_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    }
#line 868 "calendar.m"
    mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 0)));
#line 868 "calendar.m"
    mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 1)));
#line 868 "calendar.m"
    mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 2)));
#line 868 "calendar.m"
    mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 3)));
#line 868 "calendar.m"
    mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 4)));
#line 868 "calendar.m"
    mercury__calendar__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 5)));
#line 868 "calendar.m"
    mercury__calendar__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 6)));
#line 868 "calendar.m"
    {
#line 868 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 868 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 0) = ((MR_Box) (mercury__calendar__V_153_153));
#line 868 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 1) = ((MR_Box) (mercury__calendar__V_154_154));
#line 868 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 2) = ((MR_Box) (mercury__calendar__V_155_155));
#line 868 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 3) = ((MR_Box) (mercury__calendar__V_59_59));
#line 868 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 4) = ((MR_Box) (mercury__calendar__V_157_157));
#line 868 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 5) = ((MR_Box) (mercury__calendar__V_158_158));
#line 868 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 6) = ((MR_Box) (mercury__calendar__V_159_159));
#line 868 "calendar.m"
    }
#line 869 "calendar.m"
    {
#line 869 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_61_61 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    }
#line 871 "calendar.m"
    mercury__calendar__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
#line 871 "calendar.m"
    mercury__calendar__V_160_160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
#line 871 "calendar.m"
    mercury__calendar__V_161_161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
#line 871 "calendar.m"
    mercury__calendar__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
#line 871 "calendar.m"
    mercury__calendar__V_163_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
#line 871 "calendar.m"
    mercury__calendar__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
#line 871 "calendar.m"
    mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
#line 871 "calendar.m"
    {
#line 871 "calendar.m"
      mercury__calendar__MaxDaysInMonth_9 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_63_63, mercury__calendar__V_160_160);
    }
#line 872 "calendar.m"
    mercury__calendar__V_172_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 872 "calendar.m"
    mercury__calendar__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 872 "calendar.m"
    mercury__calendar__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 872 "calendar.m"
    mercury__calendar__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 872 "calendar.m"
    mercury__calendar__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 872 "calendar.m"
    mercury__calendar__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 872 "calendar.m"
    mercury__calendar__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 872 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__V_65_65 > mercury__calendar__MaxDaysInMonth_9);
#line 874 "calendar.m"
    if (mercury__calendar__succeeded)
#line 873 "calendar.m"
      mercury__calendar__TempDays_10 = mercury__calendar__MaxDaysInMonth_9;
#line 874 "calendar.m"
    else
#line 876 "calendar.m"
      {
#line 874 "calendar.m"
        MR_Integer mercury__calendar__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 874 "calendar.m"
        MR_Integer mercury__calendar__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 874 "calendar.m"
        MR_Integer mercury__calendar__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 874 "calendar.m"
        MR_Integer mercury__calendar__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 874 "calendar.m"
        MR_Integer mercury__calendar__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 874 "calendar.m"
        MR_Integer mercury__calendar__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 874 "calendar.m"
        MR_Integer mercury__calendar__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));

#line 874 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_66_66 < (MR_Integer) 1);
#line 876 "calendar.m"
        if (mercury__calendar__succeeded)
#line 875 "calendar.m"
          mercury__calendar__TempDays_10 = (MR_Integer) 1;
#line 876 "calendar.m"
        else
#line 877 "calendar.m"
          {
#line 877 "calendar.m"
            MR_Integer mercury__calendar__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 877 "calendar.m"
            MR_Integer mercury__calendar__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 877 "calendar.m"
            MR_Integer mercury__calendar__V_186_186;
#line 877 "calendar.m"
            MR_Integer mercury__calendar__V_187_187;
#line 877 "calendar.m"
            MR_Integer mercury__calendar__V_188_188;
#line 877 "calendar.m"
            MR_Integer mercury__calendar__V_189_189;

#line 877 "calendar.m"
            mercury__calendar__TempDays_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 877 "calendar.m"
            mercury__calendar__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 877 "calendar.m"
            mercury__calendar__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 877 "calendar.m"
            mercury__calendar__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 877 "calendar.m"
            mercury__calendar__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 877 "calendar.m"
          }
#line 876 "calendar.m"
      }
#line 879 "calendar.m"
    mercury__calendar__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 879 "calendar.m"
    mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 879 "calendar.m"
    mercury__calendar__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 879 "calendar.m"
    mercury__calendar__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 879 "calendar.m"
    mercury__calendar__V_70_70 = (mercury__calendar__TempDays_10 + mercury__calendar__V_71_71);
#line 879 "calendar.m"
    mercury__calendar__V_69_69 = (mercury__calendar__V_70_70 + mercury__calendar__STATE_VARIABLE_Carry_61_61);
#line 879 "calendar.m"
    mercury__calendar__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
#line 879 "calendar.m"
    mercury__calendar__V_194_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
#line 879 "calendar.m"
    mercury__calendar__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
#line 879 "calendar.m"
    mercury__calendar__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
#line 879 "calendar.m"
    mercury__calendar__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
#line 879 "calendar.m"
    mercury__calendar__V_198_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
#line 879 "calendar.m"
    mercury__calendar__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
#line 879 "calendar.m"
    {
#line 879 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 879 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 0) = ((MR_Box) (mercury__calendar__V_193_193));
#line 879 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 1) = ((MR_Box) (mercury__calendar__V_194_194));
#line 879 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 2) = ((MR_Box) (mercury__calendar__V_69_69));
#line 879 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 3) = ((MR_Box) (mercury__calendar__V_196_196));
#line 879 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 4) = ((MR_Box) (mercury__calendar__V_197_197));
#line 879 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 5) = ((MR_Box) (mercury__calendar__V_198_198));
#line 879 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 6) = ((MR_Box) (mercury__calendar__V_199_199));
#line 879 "calendar.m"
    }
#line 880 "calendar.m"
    {
#line 880 "calendar.m"
      mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__calendar__STATE_VARIABLE_E_68_68, mercury__calendar__E_6);
#line 880 "calendar.m"
      return;
    }
#line 847 "calendar.m"
  }
#line 261 "calendar.m"
}

#line 251 "calendar.m"
MR_String MR_CALL 
mercury__calendar__duration_to_string_1_f_0(
#line 251 "calendar.m"
  MR_Word mercury__calendar__Duration_1)
#line 251 "calendar.m"
{
#line 703 "calendar.m"
  {
#line 703 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 703 "calendar.m"
    MR_String mercury__calendar__Str_8;
#line 703 "calendar.m"
    MR_Integer mercury__calendar__Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 703 "calendar.m"
    MR_Integer mercury__calendar__Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 703 "calendar.m"
    MR_Integer mercury__calendar__Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 703 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));

#line 705 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Months_3 == (MR_Integer) 0);
#line 705 "calendar.m"
    if (mercury__calendar__succeeded)
#line 705 "calendar.m"
      {
#line 706 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Days_4 == (MR_Integer) 0);
#line 705 "calendar.m"
        if (mercury__calendar__succeeded)
#line 705 "calendar.m"
          {
#line 707 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Seconds_5 == (MR_Integer) 0);
#line 705 "calendar.m"
            if (mercury__calendar__succeeded)
#line 708 "calendar.m"
              mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 == (MR_Integer) 0);
#line 705 "calendar.m"
          }
#line 705 "calendar.m"
      }
#line 713 "calendar.m"
    if (mercury__calendar__succeeded)
#line 712 "calendar.m"
      mercury__calendar__Str_8 = (MR_String) "P0D";
#line 713 "calendar.m"
    else
#line 732 "calendar.m"
      {
#line 732 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_59_59;
#line 732 "calendar.m"
        MR_Integer mercury__calendar__Sign_9;
#line 732 "calendar.m"
        MR_String mercury__calendar__SignStr_10;
#line 732 "calendar.m"
        MR_Word mercury__calendar__TimePart_11;
#line 732 "calendar.m"
        MR_Word mercury__calendar__V_39_39;
#line 732 "calendar.m"
        MR_Word mercury__calendar__V_40_40;
#line 732 "calendar.m"
        MR_Word mercury__calendar__V_41_41;
#line 732 "calendar.m"
        MR_Word mercury__calendar__V_43_43;
#line 732 "calendar.m"
        MR_String mercury__calendar__V_44_44;
#line 732 "calendar.m"
        MR_Integer mercury__calendar__V_45_45;
#line 732 "calendar.m"
        MR_Integer mercury__calendar__V_46_46;
#line 732 "calendar.m"
        MR_Word mercury__calendar__V_48_48;
#line 732 "calendar.m"
        MR_String mercury__calendar__V_49_49;
#line 732 "calendar.m"
        MR_Integer mercury__calendar__V_50_50;
#line 732 "calendar.m"
        MR_Integer mercury__calendar__V_51_51;
#line 732 "calendar.m"
        MR_Word mercury__calendar__V_53_53;
#line 732 "calendar.m"
        MR_String mercury__calendar__V_54_54;
#line 732 "calendar.m"
        MR_Integer mercury__calendar__V_55_55;
#line 732 "calendar.m"
        MR_Integer mercury__calendar__V_56_56;
#line 732 "calendar.m"
        MR_Word mercury__calendar__V_58_58;
#line 715 "calendar.m"
        MR_Integer mercury__calendar__V_13_13;
#line 715 "calendar.m"
        MR_Integer mercury__calendar__V_14_14;
#line 715 "calendar.m"
        MR_Integer mercury__calendar__V_15_15;

#line 715 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Months_3 >= (MR_Integer) 0);
#line 715 "calendar.m"
        if (mercury__calendar__succeeded)
#line 715 "calendar.m"
          {
#line 716 "calendar.m"
            mercury__calendar__V_13_13 = (MR_Integer) 0;
#line 716 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Days_4 >= mercury__calendar__V_13_13);
#line 715 "calendar.m"
            if (mercury__calendar__succeeded)
#line 715 "calendar.m"
              {
#line 717 "calendar.m"
                mercury__calendar__V_14_14 = (MR_Integer) 0;
#line 717 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Seconds_5 >= mercury__calendar__V_14_14);
#line 715 "calendar.m"
                if (mercury__calendar__succeeded)
#line 715 "calendar.m"
                  {
#line 718 "calendar.m"
                    mercury__calendar__V_15_15 = (MR_Integer) 0;
#line 718 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 >= mercury__calendar__V_15_15);
#line 715 "calendar.m"
                  }
#line 715 "calendar.m"
              }
#line 715 "calendar.m"
          }
#line 722 "calendar.m"
        if (mercury__calendar__succeeded)
#line 720 "calendar.m"
          {
#line 720 "calendar.m"
            mercury__calendar__Sign_9 = (MR_Integer) 1;
#line 721 "calendar.m"
            mercury__calendar__SignStr_10 = (MR_String) "";
#line 720 "calendar.m"
          }
#line 722 "calendar.m"
        else
#line 730 "calendar.m"
          {
#line 723 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 723 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 723 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;

#line 723 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Months_3 <= (MR_Integer) 0);
#line 723 "calendar.m"
            if (mercury__calendar__succeeded)
#line 723 "calendar.m"
              {
#line 724 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 724 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Days_4 <= mercury__calendar__V_17_17);
#line 723 "calendar.m"
                if (mercury__calendar__succeeded)
#line 723 "calendar.m"
                  {
#line 725 "calendar.m"
                    mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 725 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Seconds_5 <= mercury__calendar__V_18_18);
#line 723 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 723 "calendar.m"
                      {
#line 726 "calendar.m"
                        mercury__calendar__V_19_19 = (MR_Integer) 0;
#line 726 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 <= mercury__calendar__V_19_19);
#line 723 "calendar.m"
                      }
#line 723 "calendar.m"
                  }
#line 723 "calendar.m"
              }
#line 730 "calendar.m"
            if (mercury__calendar__succeeded)
#line 728 "calendar.m"
              {
#line 728 "calendar.m"
                mercury__calendar__Sign_9 = (MR_Integer) -1;
#line 729 "calendar.m"
                mercury__calendar__SignStr_10 = (MR_String) "-";
#line 728 "calendar.m"
              }
#line 730 "calendar.m"
            else
#line 731 "calendar.m"
              {
#line 731 "calendar.m"
                {
#line 731 "calendar.m"
                  mercury__require__error_1_p_0((MR_String) "duration_to_string: duration components have mixed signs");
                }
#line 731 "calendar.m"
              }
#line 730 "calendar.m"
          }
#line 734 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Seconds_5 == (MR_Integer) 0);
#line 734 "calendar.m"
        if (mercury__calendar__succeeded)
#line 735 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 == (MR_Integer) 0);
#line 738 "calendar.m"
        if (mercury__calendar__succeeded)
#line 737 "calendar.m"
          mercury__calendar__TimePart_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 738 "calendar.m"
        else
#line 739 "calendar.m"
          {
#line 739 "calendar.m"
            MR_Word mercury__calendar__V_22_22;
#line 739 "calendar.m"
            MR_String mercury__calendar__V_23_23;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 739 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 739 "calendar.m"
            MR_String mercury__calendar__V_28_28;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 739 "calendar.m"
            MR_Word mercury__calendar__V_32_32;
#line 739 "calendar.m"
            MR_String mercury__calendar__V_33_33;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_36_36;
#line 739 "calendar.m"
            MR_Word mercury__calendar__V_38_38;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_81_81;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_82_82;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_89_89;
#line 739 "calendar.m"
            MR_Integer mercury__calendar__V_93_93;
#line 1085 "calendar.m"
            MR_Integer mercury__calendar__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 1085 "calendar.m"
            MR_Integer mercury__calendar__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 1085 "calendar.m"
            MR_Integer mercury__calendar__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
#line 1086 "calendar.m"
            MR_Integer mercury__calendar__V_85_85;
#line 1086 "calendar.m"
            MR_Integer mercury__calendar__V_86_86;
#line 1086 "calendar.m"
            MR_Integer mercury__calendar__V_87_87;
#line 1087 "calendar.m"
            MR_Integer mercury__calendar__V_91_91;
#line 1087 "calendar.m"
            MR_Integer mercury__calendar__V_92_92;

#line 1085 "calendar.m"
            mercury__calendar__V_25_25 = (mercury__calendar__V_61_61 / (MR_Integer) 3600);
#line 740 "calendar.m"
            mercury__calendar__V_24_24 = (mercury__calendar__Sign_9 * mercury__calendar__V_25_25);
#line 756 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_24_24 == (MR_Integer) 0);
#line 755 "calendar.m"
            if (mercury__calendar__succeeded)
#line 757 "calendar.m"
              mercury__calendar__V_23_23 = (MR_String) "";
#line 755 "calendar.m"
            else
#line 759 "calendar.m"
              {
#line 759 "calendar.m"
                MR_String mercury__calendar__V_68_68;

#line 714 "string.opt"
                {
#line 714 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__calendar__V_24_24, (MR_Integer) 10, &mercury__calendar__V_68_68);
                }
#line 415 "string.opt"
                {
#line 415 "string.opt"
                  mercury__string__append_3_p_2(mercury__calendar__V_68_68, (MR_String) "H", &mercury__calendar__V_23_23);
                }
#line 759 "calendar.m"
              }
#line 1086 "calendar.m"
            mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 1086 "calendar.m"
            mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 1086 "calendar.m"
            mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 1086 "calendar.m"
            mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
#line 1086 "calendar.m"
            mercury__calendar__V_81_81 = (mercury__calendar__V_82_82 % (MR_Integer) 3600);
#line 1086 "calendar.m"
            mercury__calendar__V_30_30 = (mercury__calendar__V_81_81 / (MR_Integer) 60);
#line 741 "calendar.m"
            mercury__calendar__V_29_29 = (mercury__calendar__Sign_9 * mercury__calendar__V_30_30);
#line 741 "calendar.m"
            {
#line 741 "calendar.m"
              mercury__calendar__V_28_28 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_29_29, (MR_String) "M");
            }
#line 1087 "calendar.m"
            mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 1087 "calendar.m"
            mercury__calendar__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 1087 "calendar.m"
            mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 1087 "calendar.m"
            mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
#line 1087 "calendar.m"
            mercury__calendar__V_35_35 = (mercury__calendar__V_89_89 % (MR_Integer) 60);
#line 742 "calendar.m"
            mercury__calendar__V_34_34 = (mercury__calendar__Sign_9 * mercury__calendar__V_35_35);
#line 743 "calendar.m"
            mercury__calendar__V_36_36 = (mercury__calendar__Sign_9 * mercury__calendar__V_93_93);
#line 742 "calendar.m"
            {
#line 742 "calendar.m"
              mercury__calendar__V_33_33 = mercury__calendar__seconds_duration_string_2_f_0(mercury__calendar__V_34_34, mercury__calendar__V_36_36);
            }
#line 744 "calendar.m"
            mercury__calendar__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 744 "calendar.m"
            {
#line 744 "calendar.m"
              mercury__calendar__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 0) = ((MR_Box) (mercury__calendar__V_33_33));
#line 744 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 1) = ((MR_Box) (mercury__calendar__V_38_38));
#line 744 "calendar.m"
            }
#line 741 "calendar.m"
            {
#line 741 "calendar.m"
              mercury__calendar__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 0) = ((MR_Box) (mercury__calendar__V_28_28));
#line 741 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 1) = ((MR_Box) (mercury__calendar__V_32_32));
#line 741 "calendar.m"
            }
#line 740 "calendar.m"
            {
#line 740 "calendar.m"
              mercury__calendar__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 0) = ((MR_Box) (mercury__calendar__V_23_23));
#line 740 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 1) = ((MR_Box) (mercury__calendar__V_27_27));
#line 740 "calendar.m"
            }
#line 739 "calendar.m"
            {
#line 739 "calendar.m"
              mercury__calendar__TimePart_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_11, 0) = ((MR_Box) ((MR_String) "T"));
#line 739 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_11, 1) = ((MR_Box) (mercury__calendar__V_22_22));
#line 739 "calendar.m"
            }
#line 739 "calendar.m"
          }
#line 12574 "calendar.c"
        mercury__calendar__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 748 "calendar.m"
        {
#line 748 "calendar.m"
          mercury__calendar__V_46_46 = mercury__calendar__years_1_f_0(mercury__calendar__Duration_1);
        }
#line 748 "calendar.m"
        mercury__calendar__V_45_45 = (mercury__calendar__Sign_9 * mercury__calendar__V_46_46);
#line 748 "calendar.m"
        {
#line 748 "calendar.m"
          mercury__calendar__V_44_44 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_45_45, (MR_String) "Y");
        }
#line 749 "calendar.m"
        {
#line 749 "calendar.m"
          mercury__calendar__V_51_51 = mercury__calendar__months_1_f_0(mercury__calendar__Duration_1);
        }
#line 749 "calendar.m"
        mercury__calendar__V_50_50 = (mercury__calendar__Sign_9 * mercury__calendar__V_51_51);
#line 749 "calendar.m"
        {
#line 749 "calendar.m"
          mercury__calendar__V_49_49 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_50_50, (MR_String) "M");
        }
#line 750 "calendar.m"
        {
#line 750 "calendar.m"
          mercury__calendar__V_56_56 = mercury__calendar__days_1_f_0(mercury__calendar__Duration_1);
        }
#line 750 "calendar.m"
        mercury__calendar__V_55_55 = (mercury__calendar__Sign_9 * mercury__calendar__V_56_56);
#line 750 "calendar.m"
        {
#line 750 "calendar.m"
          mercury__calendar__V_54_54 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_55_55, (MR_String) "D");
        }
#line 750 "calendar.m"
        mercury__calendar__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 750 "calendar.m"
        {
#line 750 "calendar.m"
          mercury__calendar__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_53_53, 0) = ((MR_Box) (mercury__calendar__V_54_54));
#line 750 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_53_53, 1) = ((MR_Box) (mercury__calendar__V_58_58));
#line 750 "calendar.m"
        }
#line 749 "calendar.m"
        {
#line 749 "calendar.m"
          mercury__calendar__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_48_48, 0) = ((MR_Box) (mercury__calendar__V_49_49));
#line 749 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_48_48, 1) = ((MR_Box) (mercury__calendar__V_53_53));
#line 749 "calendar.m"
        }
#line 748 "calendar.m"
        {
#line 748 "calendar.m"
          mercury__calendar__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_43_43, 0) = ((MR_Box) (mercury__calendar__V_44_44));
#line 748 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_43_43, 1) = ((MR_Box) (mercury__calendar__V_48_48));
#line 748 "calendar.m"
        }
#line 747 "calendar.m"
        {
#line 747 "calendar.m"
          mercury__calendar__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_41_41, 0) = ((MR_Box) ((MR_String) "P"));
#line 747 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_41_41, 1) = ((MR_Box) (mercury__calendar__V_43_43));
#line 747 "calendar.m"
        }
#line 747 "calendar.m"
        {
#line 747 "calendar.m"
          mercury__calendar__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_40_40, 0) = ((MR_Box) (mercury__calendar__SignStr_10));
#line 747 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_40_40, 1) = ((MR_Box) (mercury__calendar__V_41_41));
#line 747 "calendar.m"
        }
#line 750 "calendar.m"
        {
#line 750 "calendar.m"
          mercury__calendar__V_39_39 = mercury__list__f_43_43_2_f_0(mercury__calendar__TypeCtorInfo_59_59, mercury__calendar__V_40_40, mercury__calendar__TimePart_11);
        }
#line 746 "calendar.m"
        {
#line 746 "calendar.m"
          return mercury__calendar__Str_8 = mercury__string__append_list_1_f_0(mercury__calendar__V_39_39);
        }
#line 732 "calendar.m"
      }
#line 703 "calendar.m"
    return mercury__calendar__Str_8;
#line 703 "calendar.m"
  }
#line 251 "calendar.m"
}

#line 246 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_duration_from_string_1_f_0(
#line 246 "calendar.m"
  MR_String mercury__calendar__Str_3)
#line 246 "calendar.m"
{
#line 668 "calendar.m"
  {
#line 668 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 668 "calendar.m"
    MR_Word mercury__calendar__Duration_4;
#line 668 "calendar.m"
    MR_Word mercury__calendar__Duration0_5;

#line 666 "calendar.m"
    {
#line 666 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__duration_from_string_2_p_0(mercury__calendar__Str_3, &mercury__calendar__Duration0_5);
    }
#line 668 "calendar.m"
    if (mercury__calendar__succeeded)
#line 667 "calendar.m"
      mercury__calendar__Duration_4 = mercury__calendar__Duration0_5;
#line 668 "calendar.m"
    else
#line 669 "calendar.m"
      {
#line 669 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_duration_from_string: invalid duration: ", mercury__calendar__Str_3, &mercury__calendar__V_6_6);
        }
#line 669 "calendar.m"
        {
#line 669 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 669 "calendar.m"
      }
#line 668 "calendar.m"
    return mercury__calendar__Duration_4;
#line 668 "calendar.m"
  }
#line 246 "calendar.m"
}

#line 242 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__duration_from_string_2_p_0(
#line 242 "calendar.m"
  MR_String mercury__calendar__Str_3,
#line 242 "calendar.m"
  MR_Word * mercury__calendar__Duration_4)
#line 242 "calendar.m"
{
#line 503 "calendar.m"
  {
#line 503 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 503 "calendar.m"
    MR_Integer mercury__calendar__Sign_6;
#line 503 "calendar.m"
    MR_Integer mercury__calendar__Years_7;
#line 503 "calendar.m"
    MR_Integer mercury__calendar__Months_8;
#line 503 "calendar.m"
    MR_Integer mercury__calendar__Days_9;
#line 503 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_17_17;
#line 503 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_18_18;
#line 503 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_20_20;
#line 503 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_21_21;
#line 503 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_22_22;
#line 503 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_23_23;
#line 503 "calendar.m"
    MR_Char mercury__calendar__V_44_44;
#line 503 "calendar.m"
    MR_Char mercury__calendar__V_61_61;
#line 531 "calendar.m"
    MR_Word mercury__calendar__Rest_52;
#line 528 "calendar.m"
    MR_Char mercury__calendar__V_53_53;
#line 591 "calendar.m"
    MR_Integer mercury__calendar__Int0_68;
#line 591 "calendar.m"
    MR_Word mercury__calendar__Rest_70;
#line 586 "calendar.m"
    MR_Word mercury__calendar__Chars1_69;
#line 586 "calendar.m"
    MR_Char mercury__calendar__V_72_72;
#line 586 "calendar.m"
    MR_Integer mercury__calendar__V_77_77;
#line 518 "calendar.m"
    MR_Word mercury__calendar__TimePart_10;
#line 509 "calendar.m"
    MR_Char mercury__calendar__V_24_24;
#line 509 "calendar.m"
    MR_Char mercury__calendar__V_45_45;

#line 147 "string.opt"
    {
#line 147 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__calendar__Str_3, &mercury__calendar__STATE_VARIABLE_Chars_17_17);
    }
#line 528 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 528 "calendar.m"
    if (mercury__calendar__succeeded)
#line 528 "calendar.m"
      {
#line 528 "calendar.m"
        mercury__calendar__V_53_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_17_17, (MR_Integer) 0)));
#line 528 "calendar.m"
        mercury__calendar__Rest_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_17_17, (MR_Integer) 1)));
#line 528 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_53_53 == (MR_Char) 45);
#line 528 "calendar.m"
      }
#line 531 "calendar.m"
    if (mercury__calendar__succeeded)
#line 529 "calendar.m"
      {
#line 529 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_18_18 = mercury__calendar__Rest_52;
#line 530 "calendar.m"
        mercury__calendar__Sign_6 = (MR_Integer) -1;
#line 529 "calendar.m"
      }
#line 531 "calendar.m"
    else
#line 532 "calendar.m"
      {
#line 532 "calendar.m"
        mercury__calendar__Sign_6 = (MR_Integer) 1;
#line 532 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_18_18 = mercury__calendar__STATE_VARIABLE_Chars_17_17;
#line 532 "calendar.m"
      }
#line 537 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 537 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        mercury__calendar__V_44_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_18_18, (MR_Integer) 0)));
#line 537 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_18_18, (MR_Integer) 1)));
#line 505 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 80 == mercury__calendar__V_44_44);
#line 503 "calendar.m"
        if (mercury__calendar__succeeded)
#line 503 "calendar.m"
          {
#line 542 "calendar.m"
            mercury__calendar__V_61_61 = (MR_Char) 89;
#line 598 "calendar.m"
            mercury__calendar__V_77_77 = (MR_Integer) 0;
#line 598 "calendar.m"
            {
#line 598 "calendar.m"
              mercury__calendar__read_int_2_4_p_0(mercury__calendar__V_77_77, &mercury__calendar__Int0_68, mercury__calendar__STATE_VARIABLE_Chars_20_20, &mercury__calendar__Chars1_69);
            }
#line 587 "calendar.m"
            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_69)) == (MR_mktag((MR_Integer) 1)));
#line 587 "calendar.m"
            if (mercury__calendar__succeeded)
#line 587 "calendar.m"
              {
#line 587 "calendar.m"
                mercury__calendar__V_72_72 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_69, (MR_Integer) 0)));
#line 587 "calendar.m"
                mercury__calendar__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_69, (MR_Integer) 1)));
#line 587 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_61_61 == mercury__calendar__V_72_72);
#line 587 "calendar.m"
              }
#line 591 "calendar.m"
            if (mercury__calendar__succeeded)
#line 589 "calendar.m"
              {
#line 589 "calendar.m"
                mercury__calendar__STATE_VARIABLE_Chars_21_21 = mercury__calendar__Rest_70;
#line 590 "calendar.m"
                mercury__calendar__Years_7 = mercury__calendar__Int0_68;
#line 589 "calendar.m"
              }
#line 591 "calendar.m"
            else
#line 592 "calendar.m"
              {
#line 592 "calendar.m"
                mercury__calendar__Years_7 = (MR_Integer) 0;
#line 592 "calendar.m"
                mercury__calendar__STATE_VARIABLE_Chars_21_21 = mercury__calendar__STATE_VARIABLE_Chars_20_20;
#line 592 "calendar.m"
              }
#line 507 "calendar.m"
            {
#line 507 "calendar.m"
              mercury__calendar__read_months_3_p_0(&mercury__calendar__Months_8, mercury__calendar__STATE_VARIABLE_Chars_21_21, &mercury__calendar__STATE_VARIABLE_Chars_22_22);
            }
#line 508 "calendar.m"
            {
#line 508 "calendar.m"
              mercury__calendar__read_days_3_p_0(&mercury__calendar__Days_9, mercury__calendar__STATE_VARIABLE_Chars_22_22, &mercury__calendar__STATE_VARIABLE_Chars_23_23);
            }
#line 509 "calendar.m"
            mercury__calendar__V_24_24 = (MR_Char) 84;
#line 537 "calendar.m"
            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 537 "calendar.m"
            if (mercury__calendar__succeeded)
#line 537 "calendar.m"
              {
#line 537 "calendar.m"
                mercury__calendar__V_45_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_23_23, (MR_Integer) 0)));
#line 537 "calendar.m"
                mercury__calendar__TimePart_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_23_23, (MR_Integer) 1)));
#line 509 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_24_24 == mercury__calendar__V_45_45);
#line 537 "calendar.m"
              }
#line 518 "calendar.m"
            if (mercury__calendar__succeeded)
#line 510 "calendar.m"
              {
#line 510 "calendar.m"
                MR_Integer mercury__calendar__Hours_13;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__Minutes_14;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__Seconds_15;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__MicroSeconds_16;
#line 510 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_25_25;
#line 510 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_26_26;
#line 510 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_27_27;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__V_28_28;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__V_29_29;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__V_30_30;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__V_31_31;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__V_32_32;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__V_33_33;
#line 510 "calendar.m"
                MR_Integer mercury__calendar__V_34_34;
#line 510 "calendar.m"
                MR_Char mercury__calendar__V_11_11;
#line 510 "calendar.m"
                MR_Word mercury__calendar__V_12_12;

#line 510 "calendar.m"
                mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__TimePart_10)) == (MR_mktag((MR_Integer) 1)));
#line 510 "calendar.m"
                if (mercury__calendar__succeeded)
#line 510 "calendar.m"
                  {
#line 510 "calendar.m"
                    mercury__calendar__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_10, (MR_Integer) 0)));
#line 510 "calendar.m"
                    mercury__calendar__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_10, (MR_Integer) 1)));
#line 511 "calendar.m"
                    {
#line 511 "calendar.m"
                      mercury__calendar__read_hours_3_p_0(&mercury__calendar__Hours_13, mercury__calendar__TimePart_10, &mercury__calendar__STATE_VARIABLE_Chars_25_25);
                    }
#line 512 "calendar.m"
                    {
#line 512 "calendar.m"
                      mercury__calendar__read_minutes_3_p_0(&mercury__calendar__Minutes_14, mercury__calendar__STATE_VARIABLE_Chars_25_25, &mercury__calendar__STATE_VARIABLE_Chars_26_26);
                    }
#line 513 "calendar.m"
                    {
#line 513 "calendar.m"
                      mercury__calendar__read_seconds_and_microseconds_4_p_0(&mercury__calendar__Seconds_15, &mercury__calendar__MicroSeconds_16, mercury__calendar__STATE_VARIABLE_Chars_26_26, &mercury__calendar__STATE_VARIABLE_Chars_27_27);
                    }
#line 514 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 510 "calendar.m"
                      {
#line 515 "calendar.m"
                        mercury__calendar__V_28_28 = (mercury__calendar__Sign_6 * mercury__calendar__Years_7);
#line 515 "calendar.m"
                        mercury__calendar__V_29_29 = (mercury__calendar__Sign_6 * mercury__calendar__Months_8);
#line 516 "calendar.m"
                        mercury__calendar__V_30_30 = (mercury__calendar__Sign_6 * mercury__calendar__Days_9);
#line 516 "calendar.m"
                        mercury__calendar__V_31_31 = (mercury__calendar__Sign_6 * mercury__calendar__Hours_13);
#line 516 "calendar.m"
                        mercury__calendar__V_32_32 = (mercury__calendar__Sign_6 * mercury__calendar__Minutes_14);
#line 516 "calendar.m"
                        mercury__calendar__V_33_33 = (mercury__calendar__Sign_6 * mercury__calendar__Seconds_15);
#line 517 "calendar.m"
                        mercury__calendar__V_34_34 = (mercury__calendar__Sign_6 * mercury__calendar__MicroSeconds_16);
#line 515 "calendar.m"
                        {
#line 515 "calendar.m"
                          *mercury__calendar__Duration_4 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_28_28, mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34);
                        }
#line 515 "calendar.m"
                        mercury__calendar__succeeded = MR_TRUE;
#line 510 "calendar.m"
                      }
#line 510 "calendar.m"
                  }
#line 510 "calendar.m"
              }
#line 518 "calendar.m"
            else
#line 519 "calendar.m"
              {
#line 519 "calendar.m"
                MR_Integer mercury__calendar__V_35_35;
#line 519 "calendar.m"
                MR_Integer mercury__calendar__V_36_36;
#line 519 "calendar.m"
                MR_Integer mercury__calendar__V_37_37;
#line 519 "calendar.m"
                MR_Integer mercury__calendar__V_38_38;
#line 519 "calendar.m"
                MR_Integer mercury__calendar__V_39_39;
#line 519 "calendar.m"
                MR_Integer mercury__calendar__V_40_40;
#line 519 "calendar.m"
                MR_Integer mercury__calendar__V_41_41;

#line 519 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "calendar.m"
                if (mercury__calendar__succeeded)
#line 519 "calendar.m"
                  {
#line 520 "calendar.m"
                    mercury__calendar__V_35_35 = (mercury__calendar__Sign_6 * mercury__calendar__Years_7);
#line 520 "calendar.m"
                    mercury__calendar__V_36_36 = (mercury__calendar__Sign_6 * mercury__calendar__Months_8);
#line 520 "calendar.m"
                    mercury__calendar__V_37_37 = (mercury__calendar__Sign_6 * mercury__calendar__Days_9);
#line 521 "calendar.m"
                    mercury__calendar__V_38_38 = (MR_Integer) 0;
#line 521 "calendar.m"
                    mercury__calendar__V_39_39 = (MR_Integer) 0;
#line 521 "calendar.m"
                    mercury__calendar__V_40_40 = (MR_Integer) 0;
#line 521 "calendar.m"
                    mercury__calendar__V_41_41 = (MR_Integer) 0;
#line 520 "calendar.m"
                    {
#line 520 "calendar.m"
                      *mercury__calendar__Duration_4 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_35_35, mercury__calendar__V_36_36, mercury__calendar__V_37_37, mercury__calendar__V_38_38, mercury__calendar__V_39_39, mercury__calendar__V_40_40, mercury__calendar__V_41_41);
                    }
#line 520 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 519 "calendar.m"
                  }
#line 519 "calendar.m"
              }
#line 503 "calendar.m"
          }
#line 537 "calendar.m"
      }
#line 503 "calendar.m"
    return mercury__calendar__succeeded;
#line 503 "calendar.m"
  }
#line 242 "calendar.m"
}

#line 217 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__negate_1_f_0(
#line 217 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1)
#line 217 "calendar.m"
{
#line 1177 "calendar.m"
  {
#line 1177 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1177 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1177 "calendar.m"
    MR_Integer mercury__calendar__Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1177 "calendar.m"
    MR_Integer mercury__calendar__Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1177 "calendar.m"
    MR_Integer mercury__calendar__Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1177 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1177 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) 0 - mercury__calendar__Months_3);
#line 1177 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) 0 - mercury__calendar__Days_4);
#line 1177 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) 0 - mercury__calendar__Seconds_5);
#line 1177 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_6);

#line 1178 "calendar.m"
    {
#line 1178 "calendar.m"
      mercury__calendar__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 0) = ((MR_Box) (mercury__calendar__V_7_7));
#line 1178 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 1) = ((MR_Box) (mercury__calendar__V_8_8));
#line 1178 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 2) = ((MR_Box) (mercury__calendar__V_9_9));
#line 1178 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 3) = ((MR_Box) (mercury__calendar__V_10_10));
#line 1178 "calendar.m"
    }
#line 1177 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1177 "calendar.m"
  }
#line 217 "calendar.m"
}

#line 213 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__zero_duration_0_f_0(void)
#line 213 "calendar.m"
{
#line 1180 "calendar.m"
  {
#line 1180 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1180 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_3[1];

#line 1180 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 1180 "calendar.m"
  }
#line 213 "calendar.m"
}

#line 207 "calendar.m"
void MR_CALL 
mercury__calendar__unpack_duration_8_p_0(
#line 207 "calendar.m"
  MR_Word mercury__calendar__Duration_9,
#line 207 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__2_2,
#line 207 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__3_3,
#line 207 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__4_4,
#line 207 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__5_5,
#line 207 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__6_6,
#line 207 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__7_7,
#line 207 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__8_8)
#line 207 "calendar.m"
{
#line 653 "calendar.m"
  {
#line 653 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 653 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 0)));
#line 653 "calendar.m"
    MR_Integer mercury__calendar__V_14_14;
#line 653 "calendar.m"
    MR_Integer mercury__calendar__V_33_33;

#line 1082 "calendar.m"
    *mercury__calendar__HeadVar__4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 1)));
#line 1082 "calendar.m"
    mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 2)));
#line 1082 "calendar.m"
    *mercury__calendar__HeadVar__8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 3)));
#line 1082 "calendar.m"
    *mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_11_11 / (MR_Integer) 12);
#line 1083 "calendar.m"
    *mercury__calendar__HeadVar__3_3 = (mercury__calendar__V_11_11 % (MR_Integer) 12);
#line 1085 "calendar.m"
    *mercury__calendar__HeadVar__5_5 = (mercury__calendar__V_14_14 / (MR_Integer) 3600);
#line 1086 "calendar.m"
    mercury__calendar__V_33_33 = (mercury__calendar__V_14_14 % (MR_Integer) 3600);
#line 1086 "calendar.m"
    *mercury__calendar__HeadVar__6_6 = (mercury__calendar__V_33_33 / (MR_Integer) 60);
#line 1087 "calendar.m"
    *mercury__calendar__HeadVar__7_7 = (mercury__calendar__V_14_14 % (MR_Integer) 60);
#line 653 "calendar.m"
  }
#line 207 "calendar.m"
}

#line 202 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__init_duration_7_f_0(
#line 202 "calendar.m"
  MR_Integer mercury__calendar__Years0_9,
#line 202 "calendar.m"
  MR_Integer mercury__calendar__Months0_10,
#line 202 "calendar.m"
  MR_Integer mercury__calendar__Days0_11,
#line 202 "calendar.m"
  MR_Integer mercury__calendar__Hours0_12,
#line 202 "calendar.m"
  MR_Integer mercury__calendar__Minutes0_13,
#line 202 "calendar.m"
  MR_Integer mercury__calendar__Seconds0_14,
#line 202 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds0_15)
#line 202 "calendar.m"
{
#line 615 "calendar.m"
  {
#line 615 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 615 "calendar.m"
    MR_Word mercury__calendar__HeadVar__8_8;
#line 615 "calendar.m"
    MR_Integer mercury__calendar__Months_16;
#line 615 "calendar.m"
    MR_Integer mercury__calendar__Days_17;
#line 615 "calendar.m"
    MR_Integer mercury__calendar__Seconds_18;
#line 615 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_19;

#line 618 "calendar.m"
    {
#line 618 "calendar.m"
      MR_Integer mercury__calendar__V_30_30;
#line 618 "calendar.m"
      MR_Integer mercury__calendar__V_31_31;
#line 618 "calendar.m"
      MR_Integer mercury__calendar__V_32_32;
#line 618 "calendar.m"
      MR_Integer mercury__calendar__V_33_33;
#line 618 "calendar.m"
      MR_Integer mercury__calendar__V_34_34;
#line 618 "calendar.m"
      MR_Integer mercury__calendar__V_35_35;

#line 618 "calendar.m"
      mercury__calendar__succeeded = (mercury__calendar__Years0_9 >= (MR_Integer) 0);
#line 618 "calendar.m"
      if (mercury__calendar__succeeded)
#line 618 "calendar.m"
        {
#line 619 "calendar.m"
          mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 619 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__Months0_10 >= mercury__calendar__V_30_30);
#line 618 "calendar.m"
          if (mercury__calendar__succeeded)
#line 618 "calendar.m"
            {
#line 620 "calendar.m"
              mercury__calendar__V_31_31 = (MR_Integer) 0;
#line 620 "calendar.m"
              mercury__calendar__succeeded = (mercury__calendar__Days0_11 >= mercury__calendar__V_31_31);
#line 618 "calendar.m"
              if (mercury__calendar__succeeded)
#line 618 "calendar.m"
                {
#line 621 "calendar.m"
                  mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 621 "calendar.m"
                  mercury__calendar__succeeded = (mercury__calendar__Hours0_12 >= mercury__calendar__V_32_32);
#line 618 "calendar.m"
                  if (mercury__calendar__succeeded)
#line 618 "calendar.m"
                    {
#line 622 "calendar.m"
                      mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 622 "calendar.m"
                      mercury__calendar__succeeded = (mercury__calendar__Minutes0_13 >= mercury__calendar__V_33_33);
#line 618 "calendar.m"
                      if (mercury__calendar__succeeded)
#line 618 "calendar.m"
                        {
#line 623 "calendar.m"
                          mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 623 "calendar.m"
                          mercury__calendar__succeeded = (mercury__calendar__Seconds0_14 >= mercury__calendar__V_34_34);
#line 618 "calendar.m"
                          if (mercury__calendar__succeeded)
#line 618 "calendar.m"
                            {
#line 624 "calendar.m"
                              mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 624 "calendar.m"
                              mercury__calendar__succeeded = (mercury__calendar__MicroSeconds0_15 >= mercury__calendar__V_35_35);
#line 618 "calendar.m"
                            }
#line 618 "calendar.m"
                        }
#line 618 "calendar.m"
                    }
#line 618 "calendar.m"
                }
#line 618 "calendar.m"
            }
#line 618 "calendar.m"
        }
#line 618 "calendar.m"
    }
#line 625 "calendar.m"
    if (!(mercury__calendar__succeeded))
#line 626 "calendar.m"
      {
#line 626 "calendar.m"
        MR_Integer mercury__calendar__V_23_23;
#line 626 "calendar.m"
        MR_Integer mercury__calendar__V_24_24;
#line 626 "calendar.m"
        MR_Integer mercury__calendar__V_25_25;
#line 626 "calendar.m"
        MR_Integer mercury__calendar__V_26_26;
#line 626 "calendar.m"
        MR_Integer mercury__calendar__V_27_27;
#line 626 "calendar.m"
        MR_Integer mercury__calendar__V_28_28;

#line 626 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Years0_9 <= (MR_Integer) 0);
#line 626 "calendar.m"
        if (mercury__calendar__succeeded)
#line 626 "calendar.m"
          {
#line 627 "calendar.m"
            mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 627 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Months0_10 <= mercury__calendar__V_23_23);
#line 626 "calendar.m"
            if (mercury__calendar__succeeded)
#line 626 "calendar.m"
              {
#line 628 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 628 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Days0_11 <= mercury__calendar__V_24_24);
#line 626 "calendar.m"
                if (mercury__calendar__succeeded)
#line 626 "calendar.m"
                  {
#line 629 "calendar.m"
                    mercury__calendar__V_25_25 = (MR_Integer) 0;
#line 629 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Hours0_12 <= mercury__calendar__V_25_25);
#line 626 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 626 "calendar.m"
                      {
#line 630 "calendar.m"
                        mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 630 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__Minutes0_13 <= mercury__calendar__V_26_26);
#line 626 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 626 "calendar.m"
                          {
#line 631 "calendar.m"
                            mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 631 "calendar.m"
                            mercury__calendar__succeeded = (mercury__calendar__Seconds0_14 <= mercury__calendar__V_27_27);
#line 626 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 626 "calendar.m"
                              {
#line 632 "calendar.m"
                                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 632 "calendar.m"
                                mercury__calendar__succeeded = (mercury__calendar__MicroSeconds0_15 <= mercury__calendar__V_28_28);
#line 626 "calendar.m"
                              }
#line 626 "calendar.m"
                          }
#line 626 "calendar.m"
                      }
#line 626 "calendar.m"
                  }
#line 626 "calendar.m"
              }
#line 626 "calendar.m"
          }
#line 626 "calendar.m"
      }
#line 641 "calendar.m"
    if (mercury__calendar__succeeded)
#line 635 "calendar.m"
      {
#line 635 "calendar.m"
        MR_Integer mercury__calendar__Seconds1_20;
#line 635 "calendar.m"
        MR_Integer mercury__calendar__Seconds2_21;
#line 635 "calendar.m"
        MR_Integer mercury__calendar__V_36_36 = (mercury__calendar__Years0_9 * (MR_Integer) 12);
#line 635 "calendar.m"
        MR_Integer mercury__calendar__V_38_38;
#line 635 "calendar.m"
        MR_Integer mercury__calendar__V_41_41;
#line 635 "calendar.m"
        MR_Integer mercury__calendar__V_42_42;
#line 635 "calendar.m"
        MR_Integer mercury__calendar__V_44_44;
#line 635 "calendar.m"
        MR_Integer mercury__calendar__V_46_46;

#line 635 "calendar.m"
        mercury__calendar__Months_16 = (mercury__calendar__V_36_36 + mercury__calendar__Months0_10);
#line 105 "int.opt"
        mercury__calendar__V_38_38 = (mercury__calendar__MicroSeconds0_15 / (MR_Integer) 1000000);
#line 636 "calendar.m"
        mercury__calendar__Seconds1_20 = (mercury__calendar__Seconds0_14 + mercury__calendar__V_38_38);
#line 124 "int.opt"
        mercury__calendar__MicroSeconds_19 = (mercury__calendar__MicroSeconds0_15 % (MR_Integer) 1000000);
#line 638 "calendar.m"
        mercury__calendar__V_42_42 = (mercury__calendar__Minutes0_13 * (MR_Integer) 60);
#line 638 "calendar.m"
        mercury__calendar__V_41_41 = (mercury__calendar__Seconds1_20 + mercury__calendar__V_42_42);
#line 638 "calendar.m"
        mercury__calendar__V_44_44 = (mercury__calendar__Hours0_12 * (MR_Integer) 3600);
#line 638 "calendar.m"
        mercury__calendar__Seconds2_21 = (mercury__calendar__V_41_41 + mercury__calendar__V_44_44);
#line 105 "int.opt"
        mercury__calendar__V_46_46 = (mercury__calendar__Seconds2_21 / (MR_Integer) 86400);
#line 639 "calendar.m"
        mercury__calendar__Days_17 = (mercury__calendar__Days0_11 + mercury__calendar__V_46_46);
#line 124 "int.opt"
        mercury__calendar__Seconds_18 = (mercury__calendar__Seconds2_21 % (MR_Integer) 86400);
#line 635 "calendar.m"
      }
#line 641 "calendar.m"
    else
#line 642 "calendar.m"
      {
#line 642 "calendar.m"
        {
#line 642 "calendar.m"
          mercury__require__error_1_p_0((MR_String) "init_duration: some components negative and some positive");
        }
#line 642 "calendar.m"
      }
#line 615 "calendar.m"
    {
#line 615 "calendar.m"
      mercury__calendar__HeadVar__8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 615 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 0) = ((MR_Box) (mercury__calendar__Months_16));
#line 615 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 1) = ((MR_Box) (mercury__calendar__Days_17));
#line 615 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 2) = ((MR_Box) (mercury__calendar__Seconds_18));
#line 615 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 3) = ((MR_Box) (mercury__calendar__MicroSeconds_19));
#line 615 "calendar.m"
    }
#line 615 "calendar.m"
    return mercury__calendar__HeadVar__8_8;
#line 615 "calendar.m"
  }
#line 202 "calendar.m"
}

#line 195 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__microseconds_1_f_0(
#line 195 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 195 "calendar.m"
{
#line 1088 "calendar.m"
  {
#line 1088 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1088 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));
#line 1088 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1088 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1088 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));

#line 1088 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1088 "calendar.m"
  }
#line 195 "calendar.m"
}

#line 194 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__seconds_1_f_0(
#line 194 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 194 "calendar.m"
{
#line 1087 "calendar.m"
  {
#line 1087 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1087 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1087 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1087 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1087 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1087 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 1087 "calendar.m"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 % (MR_Integer) 60);
#line 1087 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1087 "calendar.m"
  }
#line 194 "calendar.m"
}

#line 193 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__minutes_1_f_0(
#line 193 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 193 "calendar.m"
{
#line 1086 "calendar.m"
  {
#line 1086 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1086 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1086 "calendar.m"
    MR_Integer mercury__calendar__V_4_4;
#line 1086 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1086 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1086 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1086 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 1086 "calendar.m"
    mercury__calendar__V_4_4 = (mercury__calendar__V_5_5 % (MR_Integer) 3600);
#line 1086 "calendar.m"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 60);
#line 1086 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1086 "calendar.m"
  }
#line 193 "calendar.m"
}

#line 192 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__hours_1_f_0(
#line 192 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 192 "calendar.m"
{
#line 1085 "calendar.m"
  {
#line 1085 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1085 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1085 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1085 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1085 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1085 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 1085 "calendar.m"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 3600);
#line 1085 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1085 "calendar.m"
  }
#line 192 "calendar.m"
}

#line 191 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__days_1_f_0(
#line 191 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 191 "calendar.m"
{
#line 1084 "calendar.m"
  {
#line 1084 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1084 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 1084 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1084 "calendar.m"
  }
#line 191 "calendar.m"
}

#line 190 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__months_1_f_0(
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
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1083 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1083 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1083 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 1083 "calendar.m"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 % (MR_Integer) 12);
#line 1083 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1083 "calendar.m"
  }
#line 190 "calendar.m"
}

#line 189 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__years_1_f_0(
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
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 1082 "calendar.m"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 12);
#line 1082 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1082 "calendar.m"
  }
#line 189 "calendar.m"
}

#line 164 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__unix_epoch_0_f_0(void)
#line 164 "calendar.m"
{
#line 1194 "calendar.m"
  {
#line 1194 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1194 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_5[0];

#line 1194 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 1194 "calendar.m"
  }
#line 164 "calendar.m"
}

#line 160 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__julian_day_number_1_f_0(
#line 160 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1)
#line 160 "calendar.m"
{
#line 1053 "calendar.m"
  {
#line 1053 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__JDN_10;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__Year_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__Month_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__Day_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__A_11;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__Y_12;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__M_13;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) 14 - mercury__calendar__Month_4);
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_17_17;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_19_19;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_20_20;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_25_25;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_26_26;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_27_27;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_28_28;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_29_29;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_38_38;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_40_40;
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 1053 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));

#line 1054 "calendar.m"
    {
#line 1054 "calendar.m"
      mercury__calendar__A_11 = mercury__int__div_2_f_0(mercury__calendar__V_14_14, (MR_Integer) 12);
    }
#line 1055 "calendar.m"
    mercury__calendar__V_17_17 = (mercury__calendar__Year_3 + (MR_Integer) 4800);
#line 1055 "calendar.m"
    mercury__calendar__Y_12 = (mercury__calendar__V_17_17 - mercury__calendar__A_11);
#line 1056 "calendar.m"
    mercury__calendar__V_20_20 = ((MR_Integer) 12 * mercury__calendar__A_11);
#line 1056 "calendar.m"
    mercury__calendar__V_19_19 = (mercury__calendar__Month_4 + mercury__calendar__V_20_20);
#line 1056 "calendar.m"
    mercury__calendar__M_13 = (mercury__calendar__V_19_19 - (MR_Integer) 3);
#line 1057 "calendar.m"
    mercury__calendar__V_30_30 = ((MR_Integer) 153 * mercury__calendar__M_13);
#line 1057 "calendar.m"
    mercury__calendar__V_29_29 = (mercury__calendar__V_30_30 + (MR_Integer) 2);
#line 1057 "calendar.m"
    {
#line 1057 "calendar.m"
      mercury__calendar__V_28_28 = mercury__int__div_2_f_0(mercury__calendar__V_29_29, (MR_Integer) 5);
    }
#line 1057 "calendar.m"
    mercury__calendar__V_27_27 = (mercury__calendar__Day_5 + mercury__calendar__V_28_28);
#line 1057 "calendar.m"
    mercury__calendar__V_34_34 = ((MR_Integer) 365 * mercury__calendar__Y_12);
#line 1057 "calendar.m"
    mercury__calendar__V_26_26 = (mercury__calendar__V_27_27 + mercury__calendar__V_34_34);
#line 1057 "calendar.m"
    {
#line 1057 "calendar.m"
      mercury__calendar__V_36_36 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 4);
    }
#line 1057 "calendar.m"
    mercury__calendar__V_25_25 = (mercury__calendar__V_26_26 + mercury__calendar__V_36_36);
#line 1057 "calendar.m"
    {
#line 1057 "calendar.m"
      mercury__calendar__V_38_38 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 100);
    }
#line 1057 "calendar.m"
    mercury__calendar__V_24_24 = (mercury__calendar__V_25_25 - mercury__calendar__V_38_38);
#line 1058 "calendar.m"
    {
#line 1058 "calendar.m"
      mercury__calendar__V_40_40 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 400);
    }
#line 1057 "calendar.m"
    mercury__calendar__V_23_23 = (mercury__calendar__V_24_24 + mercury__calendar__V_40_40);
#line 1058 "calendar.m"
    mercury__calendar__JDN_10 = (mercury__calendar__V_23_23 - (MR_Integer) 32045);
#line 1053 "calendar.m"
    return mercury__calendar__JDN_10;
#line 1053 "calendar.m"
  }
#line 160 "calendar.m"
}

#line 156 "calendar.m"
void MR_CALL 
mercury__calendar__current_utc_time_3_p_0(
#line 156 "calendar.m"
  MR_Word * mercury__calendar__Now_4)
#line 156 "calendar.m"
{
#line 1152 "calendar.m"
  {
#line 1152 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1152 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1152 "calendar.m"
    MR_Box mercury__calendar__Time_3_12;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__N_13_21;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__TMYear_25;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_26;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__Year_34;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__Month_35;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__Day_36;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__Hour_37;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__Minute_38;
#line 1152 "calendar.m"
    MR_Integer mercury__calendar__Second_39;
#line 127 "time.opt"
    MR_Integer mercury__calendar__YD_11_19;
#line 127 "time.opt"
    MR_Integer mercury__calendar__WD_12_20;
#line 96 "time.opt"
    MR_Word mercury__calendar__V_14_22;

#line 1153 "calendar.m"
    {
#line 1153 "calendar.m"
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
#line 13911 "calendar.c"

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
#line 1161 "calendar.m"
    mercury__calendar__Year_34 = ((MR_Integer) 1900 + mercury__calendar__TMYear_25);
#line 1162 "calendar.m"
    mercury__calendar__Month_35 = (mercury__calendar__TMMonth_26 + (MR_Integer) 1);
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      MR_Word base;
#line 1167 "calendar.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "calendar.m"
      *mercury__calendar__Now_4 = base;
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_34));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_35));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_36));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_37));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_38));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_39));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1167 "calendar.m"
    }
#line 1152 "calendar.m"
  }
#line 156 "calendar.m"
}

#line 152 "calendar.m"
void MR_CALL 
mercury__calendar__current_local_time_3_p_0(
#line 152 "calendar.m"
  MR_Word * mercury__calendar__Now_4)
#line 152 "calendar.m"
{
#line 1147 "calendar.m"
  {
#line 1147 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1147 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1147 "calendar.m"
    MR_Box mercury__calendar__Time_3_12;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__N_13_21;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__TMYear_25;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_26;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__Year_34;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__Month_35;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__Day_36;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__Hour_37;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__Minute_38;
#line 1147 "calendar.m"
    MR_Integer mercury__calendar__Second_39;
#line 107 "time.opt"
    MR_Integer mercury__calendar__YD_11_19;
#line 107 "time.opt"
    MR_Integer mercury__calendar__WD_12_20;
#line 92 "time.opt"
    MR_Word mercury__calendar__V_14_22;

#line 1148 "calendar.m"
    {
#line 1148 "calendar.m"
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

#line 14049 "calendar.c"

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
#line 1161 "calendar.m"
    mercury__calendar__Year_34 = ((MR_Integer) 1900 + mercury__calendar__TMYear_25);
#line 1162 "calendar.m"
    mercury__calendar__Month_35 = (mercury__calendar__TMMonth_26 + (MR_Integer) 1);
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      MR_Word base;
#line 1167 "calendar.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "calendar.m"
      *mercury__calendar__Now_4 = base;
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_34));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_35));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_36));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_37));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_38));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_39));
#line 1167 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1167 "calendar.m"
    }
#line 1147 "calendar.m"
  }
#line 152 "calendar.m"
}

#line 148 "calendar.m"
MR_String MR_CALL 
mercury__calendar__date_to_string_1_f_0(
#line 148 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 148 "calendar.m"
{
#line 678 "calendar.m"
  {
#line 678 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 678 "calendar.m"
    MR_String mercury__calendar__Str_4;
#line 678 "calendar.m"
    MR_Integer mercury__calendar__Year0_5;
#line 678 "calendar.m"
    MR_Word mercury__calendar__Month_6;
#line 678 "calendar.m"
    MR_Integer mercury__calendar__Day_7;
#line 678 "calendar.m"
    MR_Integer mercury__calendar__Hour_8;
#line 678 "calendar.m"
    MR_Integer mercury__calendar__Minute_9;
#line 678 "calendar.m"
    MR_Integer mercury__calendar__Second_10;
#line 678 "calendar.m"
    MR_Integer mercury__calendar__MicroSecond_11;
#line 678 "calendar.m"
    MR_String mercury__calendar__SignStr_12;
#line 678 "calendar.m"
    MR_Integer mercury__calendar__Year_13;
#line 678 "calendar.m"
    MR_String mercury__calendar__MicroSecondStr_14;
#line 678 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_35_35;
#line 678 "calendar.m"
    MR_Word mercury__calendar__V_41_41;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_42_42;
#line 678 "calendar.m"
    MR_Word mercury__calendar__V_48_48;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_50_50;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_52_52;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_53_53;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_61_61;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_63_63;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_64_64;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_72_72;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_74_74;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_75_75;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_83_83;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_85_85;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_86_86;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_94_94;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_96_96;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_97_97;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_105_105;
#line 678 "calendar.m"
    MR_String mercury__calendar__V_106_106;

#line 679 "calendar.m"
    {
#line 679 "calendar.m"
      mercury__calendar__unpack_date_8_p_0(mercury__calendar__Date_3, &mercury__calendar__Year0_5, &mercury__calendar__Month_6, &mercury__calendar__Day_7, &mercury__calendar__Hour_8, &mercury__calendar__Minute_9, &mercury__calendar__Second_10, &mercury__calendar__MicroSecond_11);
    }
#line 680 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Year0_5 < (MR_Integer) 0);
#line 683 "calendar.m"
    if (mercury__calendar__succeeded)
#line 681 "calendar.m"
      {
#line 681 "calendar.m"
        mercury__calendar__SignStr_12 = (MR_String) "-";
#line 682 "calendar.m"
        mercury__calendar__Year_13 = ((MR_Integer) 0 - mercury__calendar__Year0_5);
#line 681 "calendar.m"
      }
#line 683 "calendar.m"
    else
#line 684 "calendar.m"
      {
#line 684 "calendar.m"
        mercury__calendar__SignStr_12 = (MR_String) "";
#line 685 "calendar.m"
        mercury__calendar__Year_13 = mercury__calendar__Year0_5;
#line 684 "calendar.m"
      }
#line 687 "calendar.m"
    {
#line 687 "calendar.m"
      mercury__calendar__MicroSecondStr_14 = mercury__calendar__microsecond_string_1_f_0(mercury__calendar__MicroSecond_11);
    }
#line 689 "calendar.m"
    {
#line 689 "calendar.m"
      mercury__calendar__V_23_23 = mercury__calendar__month_to_int_1_f_0(mercury__calendar__Month_6);
    }
#line 14217 "calendar.c"
    mercury__calendar__V_41_41 = (MR_Word) &mercury__calendar_scalar_common_6[0];
#line 690 "calendar.m"
    {
#line 690 "calendar.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__calendar__V_41_41, mercury__calendar__MicroSecondStr_14, &mercury__calendar__V_35_35);
    }
#line 14224 "calendar.c"
    mercury__calendar__V_48_48 = (MR_Word) &mercury__calendar_scalar_common_6[1];
#line 690 "calendar.m"
    {
#line 690 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__Second_10, &mercury__calendar__V_42_42);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_50_50 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_42_42, mercury__calendar__V_35_35);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__V_50_50);
    }
#line 689 "calendar.m"
    {
#line 689 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__Minute_9, &mercury__calendar__V_53_53);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_61_61 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_53_53, mercury__calendar__V_52_52);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__V_61_61);
    }
#line 689 "calendar.m"
    {
#line 689 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__Hour_8, &mercury__calendar__V_64_64);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_72_72 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_64_64, mercury__calendar__V_63_63);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__calendar__V_72_72);
    }
#line 689 "calendar.m"
    {
#line 689 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__Day_7, &mercury__calendar__V_75_75);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_83_83 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_75_75, mercury__calendar__V_74_74);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__V_83_83);
    }
#line 689 "calendar.m"
    {
#line 689 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 2, mercury__calendar__V_23_23, &mercury__calendar__V_86_86);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_94_94 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_86_86, mercury__calendar__V_85_85);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__V_94_94);
    }
#line 689 "calendar.m"
    {
#line 689 "calendar.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__V_48_48, (MR_Integer) 4, mercury__calendar__Year_13, &mercury__calendar__V_97_97);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      mercury__calendar__V_105_105 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_97_97, mercury__calendar__V_96_96);
    }
#line 689 "calendar.m"
    {
#line 689 "calendar.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__calendar__V_41_41, mercury__calendar__SignStr_12, &mercury__calendar__V_106_106);
    }
#line 688 "calendar.m"
    {
#line 688 "calendar.m"
      return mercury__calendar__Str_4 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_106_106, mercury__calendar__V_105_105);
    }
#line 678 "calendar.m"
    return mercury__calendar__Str_4;
#line 678 "calendar.m"
  }
#line 148 "calendar.m"
}

#line 142 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_date_from_string_1_f_0(
#line 142 "calendar.m"
  MR_String mercury__calendar__Str_3)
#line 142 "calendar.m"
{
#line 660 "calendar.m"
  {
#line 660 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 660 "calendar.m"
    MR_Word mercury__calendar__Date_4;
#line 660 "calendar.m"
    MR_Word mercury__calendar__Date0_5;

#line 658 "calendar.m"
    {
#line 658 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__date_from_string_2_p_0(mercury__calendar__Str_3, &mercury__calendar__Date0_5);
    }
#line 660 "calendar.m"
    if (mercury__calendar__succeeded)
#line 659 "calendar.m"
      mercury__calendar__Date_4 = mercury__calendar__Date0_5;
#line 660 "calendar.m"
    else
#line 661 "calendar.m"
      {
#line 661 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_date_from_string: invalid date: ", mercury__calendar__Str_3, &mercury__calendar__V_6_6);
        }
#line 661 "calendar.m"
        {
#line 661 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 661 "calendar.m"
      }
#line 660 "calendar.m"
    return mercury__calendar__Date_4;
#line 660 "calendar.m"
  }
#line 142 "calendar.m"
}

#line 138 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__date_from_string_2_p_0(
#line 138 "calendar.m"
  MR_String mercury__calendar__Str_3,
#line 138 "calendar.m"
  MR_Word * mercury__calendar__Date_4)
#line 138 "calendar.m"
{
#line 433 "calendar.m"
  {
#line 433 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__YearChars_8;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__Year_9;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__Month_10;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__Day_11;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__Hour_12;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__Minute_13;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__Second_14;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__MicroSecond_15;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_16_16;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_19_19;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_22_22;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_23_23;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_25_25;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_26_26;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_27_27;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_28_28;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_29_29;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_31_31;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_32_32;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_33_33;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_34_34;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_35_35;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_37_37;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_38_38;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_39_39;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_40_40;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_41_41;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_42_42;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_43_43;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_44_44;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_45_45;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_46_46;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_47_47;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_48_48;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_49_49;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_50_50;
#line 433 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_51_51;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_53_53;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_54_54;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_55_55;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_56_56;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_57_57;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_58_58;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_59_59;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_60_60;
#line 433 "calendar.m"
    MR_Char mercury__calendar__V_61_61;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_62_62;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 433 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 438 "calendar.m"
    MR_Word mercury__calendar__Rest1_6;
#line 434 "calendar.m"
    MR_Char mercury__calendar__V_52_52;

#line 147 "string.opt"
    {
#line 147 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__calendar__Str_3, &mercury__calendar__STATE_VARIABLE_Chars_16_16);
    }
#line 537 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 537 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        mercury__calendar__V_52_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_16_16, (MR_Integer) 0)));
#line 537 "calendar.m"
        mercury__calendar__Rest1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_16_16, (MR_Integer) 1)));
#line 434 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 45 == mercury__calendar__V_52_52);
#line 537 "calendar.m"
      }
#line 438 "calendar.m"
    if (mercury__calendar__succeeded)
#line 435 "calendar.m"
      {
#line 435 "calendar.m"
        MR_Integer mercury__calendar__Year0_7;

#line 485 "calendar.m"
        {
#line 485 "calendar.m"
          mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &mercury__calendar__Year0_7, (MR_Integer) 0, &mercury__calendar__YearChars_8, mercury__calendar__Rest1_6, &mercury__calendar__STATE_VARIABLE_Chars_19_19);
        }
#line 437 "calendar.m"
        mercury__calendar__Year_9 = ((MR_Integer) 0 - mercury__calendar__Year0_7);
#line 435 "calendar.m"
      }
#line 438 "calendar.m"
    else
#line 484 "calendar.m"
      {
#line 485 "calendar.m"
        {
#line 485 "calendar.m"
          mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &mercury__calendar__Year_9, (MR_Integer) 0, &mercury__calendar__YearChars_8, mercury__calendar__STATE_VARIABLE_Chars_16_16, &mercury__calendar__STATE_VARIABLE_Chars_19_19);
        }
#line 484 "calendar.m"
      }
#line 441 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__YearChars_8 >= (MR_Integer) 4);
#line 433 "calendar.m"
    if (mercury__calendar__succeeded)
#line 433 "calendar.m"
      {
#line 442 "calendar.m"
        mercury__calendar__V_22_22 = (MR_Char) 45;
#line 537 "calendar.m"
        mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 537 "calendar.m"
        if (mercury__calendar__succeeded)
#line 537 "calendar.m"
          {
#line 537 "calendar.m"
            mercury__calendar__V_53_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_19_19, (MR_Integer) 0)));
#line 537 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Chars_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_19_19, (MR_Integer) 1)));
#line 442 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_22_22 == mercury__calendar__V_53_53);
#line 433 "calendar.m"
            if (mercury__calendar__succeeded)
#line 433 "calendar.m"
              {
#line 443 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 2;
#line 485 "calendar.m"
                mercury__calendar__V_90_90 = (MR_Integer) 0;
#line 485 "calendar.m"
                mercury__calendar__V_91_91 = (MR_Integer) 0;
#line 485 "calendar.m"
                {
#line 485 "calendar.m"
                  mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_90_90, &mercury__calendar__Month_10, mercury__calendar__V_91_91, &mercury__calendar__V_54_54, mercury__calendar__STATE_VARIABLE_Chars_23_23, &mercury__calendar__STATE_VARIABLE_Chars_25_25);
                }
#line 443 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_24_24 == mercury__calendar__V_54_54);
#line 433 "calendar.m"
                if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                  {
#line 444 "calendar.m"
                    mercury__calendar__V_26_26 = (MR_Integer) 1;
#line 444 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Month_10 >= mercury__calendar__V_26_26);
#line 433 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                      {
#line 445 "calendar.m"
                        mercury__calendar__V_27_27 = (MR_Integer) 12;
#line 445 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__Month_10 <= mercury__calendar__V_27_27);
#line 433 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                          {
#line 446 "calendar.m"
                            mercury__calendar__V_28_28 = (MR_Char) 45;
#line 537 "calendar.m"
                            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 537 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 537 "calendar.m"
                              {
#line 537 "calendar.m"
                                mercury__calendar__V_55_55 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_25_25, (MR_Integer) 0)));
#line 537 "calendar.m"
                                mercury__calendar__STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_25_25, (MR_Integer) 1)));
#line 446 "calendar.m"
                                mercury__calendar__succeeded = (mercury__calendar__V_28_28 == mercury__calendar__V_55_55);
#line 433 "calendar.m"
                                if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                  {
#line 447 "calendar.m"
                                    mercury__calendar__V_30_30 = (MR_Integer) 2;
#line 447 "calendar.m"
                                    {
#line 447 "calendar.m"
                                      mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Day_11, &mercury__calendar__V_56_56, mercury__calendar__STATE_VARIABLE_Chars_29_29, &mercury__calendar__STATE_VARIABLE_Chars_31_31);
                                    }
#line 447 "calendar.m"
                                    mercury__calendar__succeeded = (mercury__calendar__V_30_30 == mercury__calendar__V_56_56);
#line 433 "calendar.m"
                                    if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                      {
#line 448 "calendar.m"
                                        mercury__calendar__V_32_32 = (MR_Integer) 1;
#line 448 "calendar.m"
                                        mercury__calendar__succeeded = (mercury__calendar__Day_11 >= mercury__calendar__V_32_32);
#line 433 "calendar.m"
                                        if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                          {
#line 449 "calendar.m"
                                            {
#line 449 "calendar.m"
                                              mercury__calendar__V_33_33 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Year_9, mercury__calendar__Month_10);
                                            }
#line 449 "calendar.m"
                                            mercury__calendar__succeeded = (mercury__calendar__Day_11 <= mercury__calendar__V_33_33);
#line 433 "calendar.m"
                                            if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                              {
#line 450 "calendar.m"
                                                mercury__calendar__V_34_34 = (MR_Char) 32;
#line 537 "calendar.m"
                                                mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 537 "calendar.m"
                                                if (mercury__calendar__succeeded)
#line 537 "calendar.m"
                                                  {
#line 537 "calendar.m"
                                                    mercury__calendar__V_57_57 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
#line 537 "calendar.m"
                                                    mercury__calendar__STATE_VARIABLE_Chars_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_31_31, (MR_Integer) 1)));
#line 450 "calendar.m"
                                                    mercury__calendar__succeeded = (mercury__calendar__V_34_34 == mercury__calendar__V_57_57);
#line 433 "calendar.m"
                                                    if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                      {
#line 451 "calendar.m"
                                                        mercury__calendar__V_36_36 = (MR_Integer) 2;
#line 451 "calendar.m"
                                                        {
#line 451 "calendar.m"
                                                          mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Hour_12, &mercury__calendar__V_58_58, mercury__calendar__STATE_VARIABLE_Chars_35_35, &mercury__calendar__STATE_VARIABLE_Chars_37_37);
                                                        }
#line 451 "calendar.m"
                                                        mercury__calendar__succeeded = (mercury__calendar__V_36_36 == mercury__calendar__V_58_58);
#line 433 "calendar.m"
                                                        if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                          {
#line 452 "calendar.m"
                                                            mercury__calendar__V_38_38 = (MR_Integer) 0;
#line 452 "calendar.m"
                                                            mercury__calendar__succeeded = (mercury__calendar__Hour_12 >= mercury__calendar__V_38_38);
#line 433 "calendar.m"
                                                            if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                              {
#line 453 "calendar.m"
                                                                mercury__calendar__V_39_39 = (MR_Integer) 23;
#line 453 "calendar.m"
                                                                mercury__calendar__succeeded = (mercury__calendar__Hour_12 <= mercury__calendar__V_39_39);
#line 433 "calendar.m"
                                                                if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                  {
#line 454 "calendar.m"
                                                                    mercury__calendar__V_40_40 = (MR_Char) 58;
#line 454 "calendar.m"
                                                                    {
#line 454 "calendar.m"
                                                                      mercury__calendar__succeeded = mercury__calendar__read_char_3_p_0(&mercury__calendar__V_59_59, mercury__calendar__STATE_VARIABLE_Chars_37_37, &mercury__calendar__STATE_VARIABLE_Chars_41_41);
                                                                    }
#line 433 "calendar.m"
                                                                    if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                      {
#line 454 "calendar.m"
                                                                        mercury__calendar__succeeded = (mercury__calendar__V_40_40 == mercury__calendar__V_59_59);
#line 433 "calendar.m"
                                                                        if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                          {
#line 455 "calendar.m"
                                                                            mercury__calendar__V_42_42 = (MR_Integer) 2;
#line 455 "calendar.m"
                                                                            {
#line 455 "calendar.m"
                                                                              mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Minute_13, &mercury__calendar__V_60_60, mercury__calendar__STATE_VARIABLE_Chars_41_41, &mercury__calendar__STATE_VARIABLE_Chars_43_43);
                                                                            }
#line 455 "calendar.m"
                                                                            mercury__calendar__succeeded = (mercury__calendar__V_42_42 == mercury__calendar__V_60_60);
#line 433 "calendar.m"
                                                                            if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                              {
#line 456 "calendar.m"
                                                                                mercury__calendar__V_44_44 = (MR_Integer) 0;
#line 456 "calendar.m"
                                                                                mercury__calendar__succeeded = (mercury__calendar__Minute_13 >= mercury__calendar__V_44_44);
#line 433 "calendar.m"
                                                                                if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                                  {
#line 457 "calendar.m"
                                                                                    mercury__calendar__V_45_45 = (MR_Integer) 59;
#line 457 "calendar.m"
                                                                                    mercury__calendar__succeeded = (mercury__calendar__Minute_13 <= mercury__calendar__V_45_45);
#line 433 "calendar.m"
                                                                                    if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                                      {
#line 458 "calendar.m"
                                                                                        mercury__calendar__V_46_46 = (MR_Char) 58;
#line 458 "calendar.m"
                                                                                        {
#line 458 "calendar.m"
                                                                                          mercury__calendar__succeeded = mercury__calendar__read_char_3_p_0(&mercury__calendar__V_61_61, mercury__calendar__STATE_VARIABLE_Chars_43_43, &mercury__calendar__STATE_VARIABLE_Chars_47_47);
                                                                                        }
#line 433 "calendar.m"
                                                                                        if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                                          {
#line 458 "calendar.m"
                                                                                            mercury__calendar__succeeded = (mercury__calendar__V_46_46 == mercury__calendar__V_61_61);
#line 433 "calendar.m"
                                                                                            if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                                              {
#line 459 "calendar.m"
                                                                                                mercury__calendar__V_48_48 = (MR_Integer) 2;
#line 459 "calendar.m"
                                                                                                {
#line 459 "calendar.m"
                                                                                                  mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Second_14, &mercury__calendar__V_62_62, mercury__calendar__STATE_VARIABLE_Chars_47_47, &mercury__calendar__STATE_VARIABLE_Chars_49_49);
                                                                                                }
#line 459 "calendar.m"
                                                                                                mercury__calendar__succeeded = (mercury__calendar__V_48_48 == mercury__calendar__V_62_62);
#line 433 "calendar.m"
                                                                                                if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                                                  {
#line 460 "calendar.m"
                                                                                                    mercury__calendar__V_50_50 = (MR_Integer) 62;
#line 460 "calendar.m"
                                                                                                    mercury__calendar__succeeded = (mercury__calendar__Second_14 < mercury__calendar__V_50_50);
#line 433 "calendar.m"
                                                                                                    if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                                                      {
#line 461 "calendar.m"
                                                                                                        {
#line 461 "calendar.m"
                                                                                                          mercury__calendar__read_microseconds_3_p_0(&mercury__calendar__MicroSecond_15, mercury__calendar__STATE_VARIABLE_Chars_49_49, &mercury__calendar__STATE_VARIABLE_Chars_51_51);
                                                                                                        }
#line 462 "calendar.m"
                                                                                                        mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "calendar.m"
                                                                                                        if (mercury__calendar__succeeded)
#line 433 "calendar.m"
                                                                                                          {
#line 463 "calendar.m"
                                                                                                            {
#line 463 "calendar.m"
                                                                                                              MR_Word base;
#line 463 "calendar.m"
                                                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 463 "calendar.m"
                                                                                                              *mercury__calendar__Date_4 = base;
#line 463 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_9));
#line 463 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_10));
#line 463 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_11));
#line 463 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_12));
#line 463 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_13));
#line 463 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_14));
#line 463 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__calendar__MicroSecond_15));
#line 463 "calendar.m"
                                                                                                            }
#line 463 "calendar.m"
                                                                                                            mercury__calendar__succeeded = MR_TRUE;
#line 433 "calendar.m"
                                                                                                          }
#line 433 "calendar.m"
                                                                                                      }
#line 433 "calendar.m"
                                                                                                  }
#line 433 "calendar.m"
                                                                                              }
#line 433 "calendar.m"
                                                                                          }
#line 433 "calendar.m"
                                                                                      }
#line 433 "calendar.m"
                                                                                  }
#line 433 "calendar.m"
                                                                              }
#line 433 "calendar.m"
                                                                          }
#line 433 "calendar.m"
                                                                      }
#line 433 "calendar.m"
                                                                  }
#line 433 "calendar.m"
                                                              }
#line 433 "calendar.m"
                                                          }
#line 433 "calendar.m"
                                                      }
#line 537 "calendar.m"
                                                  }
#line 433 "calendar.m"
                                              }
#line 433 "calendar.m"
                                          }
#line 433 "calendar.m"
                                      }
#line 433 "calendar.m"
                                  }
#line 537 "calendar.m"
                              }
#line 433 "calendar.m"
                          }
#line 433 "calendar.m"
                      }
#line 433 "calendar.m"
                  }
#line 433 "calendar.m"
              }
#line 537 "calendar.m"
          }
#line 433 "calendar.m"
      }
#line 433 "calendar.m"
    return mercury__calendar__succeeded;
#line 433 "calendar.m"
  }
#line 138 "calendar.m"
}

#line 131 "calendar.m"
void MR_CALL 
mercury__calendar__unpack_date_8_p_0(
#line 131 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 131 "calendar.m"
  MR_Integer * mercury__calendar__Year_9,
#line 131 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__3_3,
#line 131 "calendar.m"
  MR_Integer * mercury__calendar__Day_11,
#line 131 "calendar.m"
  MR_Integer * mercury__calendar__Hour_12,
#line 131 "calendar.m"
  MR_Integer * mercury__calendar__Minute_13,
#line 131 "calendar.m"
  MR_Integer * mercury__calendar__Second_14,
#line 131 "calendar.m"
  MR_Integer * mercury__calendar__MicroSecond_15)
#line 131 "calendar.m"
{
#line 1144 "calendar.m"
  {
#line 1144 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1144 "calendar.m"
    MR_Integer mercury__calendar__Month_10;

#line 1144 "calendar.m"
    *mercury__calendar__Year_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1144 "calendar.m"
    mercury__calendar__Month_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1144 "calendar.m"
    *mercury__calendar__Day_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1144 "calendar.m"
    *mercury__calendar__Hour_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1144 "calendar.m"
    *mercury__calendar__Minute_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 1144 "calendar.m"
    *mercury__calendar__Second_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 1144 "calendar.m"
    *mercury__calendar__MicroSecond_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));
#line 1145 "calendar.m"
    {
#line 1145 "calendar.m"
      *mercury__calendar__HeadVar__3_3 = mercury__calendar__det_int_to_month_1_f_0(mercury__calendar__Month_10);
    }
#line 1144 "calendar.m"
  }
#line 131 "calendar.m"
}

#line 126 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_init_date_7_f_0(
#line 126 "calendar.m"
  MR_Integer mercury__calendar__Year_9,
#line 126 "calendar.m"
  MR_Word mercury__calendar__Month_10,
#line 126 "calendar.m"
  MR_Integer mercury__calendar__Day_11,
#line 126 "calendar.m"
  MR_Integer mercury__calendar__Hour_12,
#line 126 "calendar.m"
  MR_Integer mercury__calendar__Minute_13,
#line 126 "calendar.m"
  MR_Integer mercury__calendar__Second_14,
#line 126 "calendar.m"
  MR_Integer mercury__calendar__MicroSecond_15)
#line 126 "calendar.m"
{
#line 1138 "calendar.m"
  {
#line 1138 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1138 "calendar.m"
    MR_Word mercury__calendar__Date_16;
#line 1138 "calendar.m"
    MR_Word mercury__calendar__Date0_17;

#line 1136 "calendar.m"
    {
#line 1136 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__init_date_8_p_0(mercury__calendar__Year_9, mercury__calendar__Month_10, mercury__calendar__Day_11, mercury__calendar__Hour_12, mercury__calendar__Minute_13, mercury__calendar__Second_14, mercury__calendar__MicroSecond_15, &mercury__calendar__Date0_17);
    }
#line 1138 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1137 "calendar.m"
      mercury__calendar__Date_16 = mercury__calendar__Date0_17;
#line 1138 "calendar.m"
    else
#line 1139 "calendar.m"
      {
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_18_18;
#line 1139 "calendar.m"
        MR_Integer mercury__calendar__V_26_26;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_36_36;
#line 1139 "calendar.m"
        MR_Word mercury__calendar__V_42_42;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_44_44;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_45_45;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_52_52;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_54_54;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_55_55;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_62_62;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_64_64;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_65_65;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_72_72;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_74_74;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_75_75;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_82_82;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_84_84;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_85_85;
#line 1139 "calendar.m"
        MR_String mercury__calendar__V_92_92;

#line 1110 "calendar.m"
        {
#line 1110 "calendar.m"
          mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_26_26, mercury__calendar__Month_10);
        }
#line 15018 "calendar.c"
        mercury__calendar__V_42_42 = (MR_Word) &mercury__calendar_scalar_common_6[0];
#line 1141 "calendar.m"
        {
#line 1141 "calendar.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__V_42_42, mercury__calendar__Second_14, &mercury__calendar__V_36_36);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__V_36_36);
        }
#line 1141 "calendar.m"
        {
#line 1141 "calendar.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__V_42_42, mercury__calendar__Minute_13, &mercury__calendar__V_45_45);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_52_52 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_45_45, mercury__calendar__V_44_44);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__V_52_52);
        }
#line 1140 "calendar.m"
        {
#line 1140 "calendar.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__V_42_42, mercury__calendar__Hour_12, &mercury__calendar__V_55_55);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_62_62 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_55_55, mercury__calendar__V_54_54);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__calendar__V_62_62);
        }
#line 1140 "calendar.m"
        {
#line 1140 "calendar.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__V_42_42, mercury__calendar__Day_11, &mercury__calendar__V_65_65);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_72_72 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_65_65, mercury__calendar__V_64_64);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__V_72_72);
        }
#line 1140 "calendar.m"
        {
#line 1140 "calendar.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__V_42_42, mercury__calendar__V_26_26, &mercury__calendar__V_75_75);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_82_82 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_75_75, mercury__calendar__V_74_74);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__V_82_82);
        }
#line 1140 "calendar.m"
        {
#line 1140 "calendar.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__V_42_42, mercury__calendar__Year_9, &mercury__calendar__V_85_85);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_92_92 = mercury__string__f_43_43_2_f_0(mercury__calendar__V_85_85, mercury__calendar__V_84_84);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__calendar__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "calendar.det_init_date: invalid date: ", mercury__calendar__V_92_92);
        }
#line 1139 "calendar.m"
        {
#line 1139 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_18_18);
        }
#line 1139 "calendar.m"
      }
#line 1138 "calendar.m"
    return mercury__calendar__Date_16;
#line 1138 "calendar.m"
  }
#line 126 "calendar.m"
}

#line 121 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__init_date_8_p_0(
#line 121 "calendar.m"
  MR_Integer mercury__calendar__Year_9,
#line 121 "calendar.m"
  MR_Word mercury__calendar__Month_10,
#line 121 "calendar.m"
  MR_Integer mercury__calendar__Day_11,
#line 121 "calendar.m"
  MR_Integer mercury__calendar__Hour_12,
#line 121 "calendar.m"
  MR_Integer mercury__calendar__Minute_13,
#line 121 "calendar.m"
  MR_Integer mercury__calendar__Second_14,
#line 121 "calendar.m"
  MR_Integer mercury__calendar__MicroSecond_15,
#line 121 "calendar.m"
  MR_Word * mercury__calendar__Date_16)
#line 121 "calendar.m"
{
#line 1124 "calendar.m"
  {
#line 1124 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Day_11 >= (MR_Integer) 1);
#line 1124 "calendar.m"
    MR_Integer mercury__calendar__V_18_18;
#line 1124 "calendar.m"
    MR_Integer mercury__calendar__V_19_19;
#line 1124 "calendar.m"
    MR_Integer mercury__calendar__V_20_20;
#line 1124 "calendar.m"
    MR_Integer mercury__calendar__V_21_21;
#line 1124 "calendar.m"
    MR_Integer mercury__calendar__V_22_22;
#line 1124 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 1124 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;

#line 1124 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1124 "calendar.m"
      {
#line 1110 "calendar.m"
        {
#line 1110 "calendar.m"
          mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_19_19, mercury__calendar__Month_10);
        }
#line 1126 "calendar.m"
        {
#line 1126 "calendar.m"
          mercury__calendar__V_18_18 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Year_9, mercury__calendar__V_19_19);
        }
#line 1126 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Day_11 <= mercury__calendar__V_18_18);
#line 1124 "calendar.m"
        if (mercury__calendar__succeeded)
#line 1124 "calendar.m"
          {
#line 1127 "calendar.m"
            mercury__calendar__V_20_20 = (MR_Integer) 24;
#line 1127 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Hour_12 < mercury__calendar__V_20_20);
#line 1124 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1124 "calendar.m"
              {
#line 1128 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 60;
#line 1128 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Minute_13 < mercury__calendar__V_21_21);
#line 1124 "calendar.m"
                if (mercury__calendar__succeeded)
#line 1124 "calendar.m"
                  {
#line 1129 "calendar.m"
                    mercury__calendar__V_22_22 = (MR_Integer) 62;
#line 1129 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Second_14 < mercury__calendar__V_22_22);
#line 1124 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 1124 "calendar.m"
                      {
#line 1130 "calendar.m"
                        mercury__calendar__V_23_23 = (MR_Integer) 1000000;
#line 1130 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__MicroSecond_15 < mercury__calendar__V_23_23);
#line 1124 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 1124 "calendar.m"
                          {
#line 1110 "calendar.m"
                            {
#line 1110 "calendar.m"
                              mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_24_24, mercury__calendar__Month_10);
                            }
#line 1131 "calendar.m"
                            {
#line 1131 "calendar.m"
                              MR_Word base;
#line 1131 "calendar.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "calendar.m"
                              *mercury__calendar__Date_16 = base;
#line 1131 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_9));
#line 1131 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__V_24_24));
#line 1131 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_11));
#line 1131 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_12));
#line 1131 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_13));
#line 1131 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_14));
#line 1131 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__calendar__MicroSecond_15));
#line 1131 "calendar.m"
                            }
#line 1131 "calendar.m"
                            mercury__calendar__succeeded = MR_TRUE;
#line 1124 "calendar.m"
                          }
#line 1124 "calendar.m"
                      }
#line 1124 "calendar.m"
                  }
#line 1124 "calendar.m"
              }
#line 1124 "calendar.m"
          }
#line 1124 "calendar.m"
      }
#line 1124 "calendar.m"
    return mercury__calendar__succeeded;
#line 1124 "calendar.m"
  }
#line 121 "calendar.m"
}

#line 116 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__month_to_int0_1_f_0(
#line 116 "calendar.m"
  MR_Word mercury__calendar__Month_3)
#line 116 "calendar.m"
{
#line 1112 "calendar.m"
  {
#line 1112 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1112 "calendar.m"
    MR_Integer mercury__calendar__Int_4;
#line 1112 "calendar.m"
    MR_Integer mercury__calendar__V_7_7;

#line 1113 "calendar.m"
    {
#line 1113 "calendar.m"
      mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_7_7, mercury__calendar__Month_3);
    }
#line 1113 "calendar.m"
    mercury__calendar__Int_4 = (mercury__calendar__V_7_7 - (MR_Integer) 1);
#line 1112 "calendar.m"
    return mercury__calendar__Int_4;
#line 1112 "calendar.m"
  }
#line 116 "calendar.m"
}

#line 111 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__month_to_int_1_f_0(
#line 111 "calendar.m"
  MR_Word mercury__calendar__Month_3)
#line 111 "calendar.m"
{
#line 1110 "calendar.m"
  {
#line 1110 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1110 "calendar.m"
    MR_Integer mercury__calendar__Int_4;

#line 1110 "calendar.m"
    {
#line 1110 "calendar.m"
      mercury__calendar__int_to_month_2_p_1(&mercury__calendar__Int_4, mercury__calendar__Month_3);
    }
#line 1110 "calendar.m"
    return mercury__calendar__Int_4;
#line 1110 "calendar.m"
  }
#line 111 "calendar.m"
}

#line 106 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_int0_to_month_1_f_0(
#line 106 "calendar.m"
  MR_Integer mercury__calendar__Int_3)
#line 106 "calendar.m"
{
#line 1115 "calendar.m"
  {
#line 1115 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1115 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1115 "calendar.m"
    MR_Word mercury__calendar__Month_4;
#line 1112 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = (mercury__calendar__Int_3 + (MR_Integer) 1);

#line 1113 "calendar.m"
    {
#line 1113 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__V_11_11, &mercury__calendar__Month_4);
    }
#line 1115 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1117 "calendar.m"
      mercury__calendar__HeadVar__2_2 = mercury__calendar__Month_4;
#line 1115 "calendar.m"
    else
#line 1118 "calendar.m"
      {
#line 1118 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_8_8 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_month_0;
#line 1118 "calendar.m"
        MR_String mercury__calendar__V_5_5;
#line 1118 "calendar.m"
        MR_String mercury__calendar__V_7_7;
#line 1118 "calendar.m"
        MR_Box mercury__calendar__conv0_HeadVar__2_2;

#line 714 "string.opt"
        {
#line 714 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Int_3, (MR_Integer) 10, &mercury__calendar__V_7_7);
        }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_int0_to_month: invalid month: ", mercury__calendar__V_7_7, &mercury__calendar__V_5_5);
        }
#line 1118 "calendar.m"
        {
#line 1118 "calendar.m"
          mercury__calendar__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__calendar__TypeCtorInfo_8_8, mercury__calendar__V_5_5);
        }
#line 1118 "calendar.m"
        mercury__calendar__HeadVar__2_2 = ((MR_Word) mercury__calendar__conv0_HeadVar__2_2);
#line 1118 "calendar.m"
      }
#line 1115 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1115 "calendar.m"
  }
#line 106 "calendar.m"
}

#line 101 "calendar.m"
void MR_CALL 
mercury__calendar__int0_to_month_2_p_1(
#line 101 "calendar.m"
  MR_Integer * mercury__calendar__Int_3,
#line 101 "calendar.m"
  MR_Word mercury__calendar__Month_4)
#line 101 "calendar.m"
{
#line 1112 "calendar.m"
  {
#line 1112 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1112 "calendar.m"
    MR_Integer mercury__calendar__V_5_5;

#line 1113 "calendar.m"
    {
#line 1113 "calendar.m"
      mercury__calendar__int_to_month_2_p_1(&mercury__calendar__V_5_5, mercury__calendar__Month_4);
    }
#line 1113 "calendar.m"
    *mercury__calendar__Int_3 = (mercury__calendar__V_5_5 - (MR_Integer) 1);
#line 1112 "calendar.m"
  }
#line 101 "calendar.m"
}

#line 100 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__int0_to_month_2_p_0(
#line 100 "calendar.m"
  MR_Integer mercury__calendar__Int_3,
#line 100 "calendar.m"
  MR_Word * mercury__calendar__Month_4)
#line 100 "calendar.m"
{
#line 1112 "calendar.m"
  {
#line 1112 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1112 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = (mercury__calendar__Int_3 + (MR_Integer) 1);

#line 1113 "calendar.m"
    {
#line 1113 "calendar.m"
      return mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__V_5_5, mercury__calendar__Month_4);
    }
#line 1112 "calendar.m"
    return mercury__calendar__succeeded;
#line 1112 "calendar.m"
  }
#line 100 "calendar.m"
}

#line 94 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_int_to_month_1_f_0(
#line 94 "calendar.m"
  MR_Integer mercury__calendar__Int_3)
#line 94 "calendar.m"
{
#line 1103 "calendar.m"
  {
#line 1103 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1103 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1103 "calendar.m"
    MR_Word mercury__calendar__Month_4;

#line 1104 "calendar.m"
    {
#line 1104 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__Int_3, &mercury__calendar__Month_4);
    }
#line 1103 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1105 "calendar.m"
      mercury__calendar__HeadVar__2_2 = mercury__calendar__Month_4;
#line 1103 "calendar.m"
    else
#line 1106 "calendar.m"
      {
#line 1106 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_8_8 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_month_0;
#line 1106 "calendar.m"
        MR_String mercury__calendar__V_5_5;
#line 1106 "calendar.m"
        MR_String mercury__calendar__V_7_7;
#line 1106 "calendar.m"
        MR_Box mercury__calendar__conv0_HeadVar__2_2;

#line 714 "string.opt"
        {
#line 714 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Int_3, (MR_Integer) 10, &mercury__calendar__V_7_7);
        }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_int_to_month: invalid month: ", mercury__calendar__V_7_7, &mercury__calendar__V_5_5);
        }
#line 1106 "calendar.m"
        {
#line 1106 "calendar.m"
          mercury__calendar__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__calendar__TypeCtorInfo_8_8, mercury__calendar__V_5_5);
        }
#line 1106 "calendar.m"
        mercury__calendar__HeadVar__2_2 = ((MR_Word) mercury__calendar__conv0_HeadVar__2_2);
#line 1106 "calendar.m"
      }
#line 1103 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1103 "calendar.m"
  }
#line 94 "calendar.m"
}

#line 89 "calendar.m"
void MR_CALL 
mercury__calendar__int_to_month_2_p_1(
#line 89 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__1_1,
#line 89 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 89 "calendar.m"
{
#line 1090 "calendar.m"
  {
#line 1090 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 3))
#line 1093 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 4;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 7))
#line 1097 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 8;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 11))
#line 1101 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 12;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 1))
#line 1091 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 0))
#line 1090 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 6))
#line 1096 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 7;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 5))
#line 1095 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 6;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 2))
#line 1092 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 3;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 4))
#line 1094 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 5;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 10))
#line 1100 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 11;
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__2_2 == (MR_Integer) 9))
#line 1099 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 10;
#line 1090 "calendar.m"
    else
#line 1098 "calendar.m"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 9;
#line 1090 "calendar.m"
  }
#line 89 "calendar.m"
}

#line 88 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__int_to_month_2_p_0(
#line 88 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 88 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__2_2)
#line 88 "calendar.m"
{
#line 1090 "calendar.m"
  {
#line 1090 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 1))
#line 1090 "calendar.m"
      {
#line 1090 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 0;
#line 1090 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1090 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 2))
#line 1091 "calendar.m"
      {
#line 1091 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 1;
#line 1091 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1091 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 3))
#line 1092 "calendar.m"
      {
#line 1092 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 2;
#line 1092 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1092 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 4))
#line 1093 "calendar.m"
      {
#line 1093 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 3;
#line 1093 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1093 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 5))
#line 1094 "calendar.m"
      {
#line 1094 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 4;
#line 1094 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1094 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 6))
#line 1095 "calendar.m"
      {
#line 1095 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 5;
#line 1095 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1095 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 7))
#line 1096 "calendar.m"
      {
#line 1096 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 6;
#line 1096 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1096 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 8))
#line 1097 "calendar.m"
      {
#line 1097 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 7;
#line 1097 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1097 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 9))
#line 1098 "calendar.m"
      {
#line 1098 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 8;
#line 1098 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1098 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 10))
#line 1099 "calendar.m"
      {
#line 1099 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 9;
#line 1099 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1099 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 11))
#line 1100 "calendar.m"
      {
#line 1100 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 10;
#line 1100 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1100 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
    if ((mercury__calendar__HeadVar__1_1 == (MR_Integer) 12))
#line 1101 "calendar.m"
      {
#line 1101 "calendar.m"
        *mercury__calendar__HeadVar__2_2 = (MR_Integer) 11;
#line 1101 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1101 "calendar.m"
      }
#line 1090 "calendar.m"
    else
#line 1090 "calendar.m"
      mercury__calendar__succeeded = MR_FALSE;
#line 1090 "calendar.m"
    return mercury__calendar__succeeded;
#line 1090 "calendar.m"
  }
#line 88 "calendar.m"
}

#line 82 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__microsecond_1_f_0(
#line 82 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 82 "calendar.m"
{
#line 1080 "calendar.m"
  {
#line 1080 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1080 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));

#line 1080 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1080 "calendar.m"
  }
#line 82 "calendar.m"
}

#line 81 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__second_1_f_0(
#line 81 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 81 "calendar.m"
{
#line 1079 "calendar.m"
  {
#line 1079 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1079 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1079 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1079 "calendar.m"
  }
#line 81 "calendar.m"
}

#line 80 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__minute_1_f_0(
#line 80 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 80 "calendar.m"
{
#line 1078 "calendar.m"
  {
#line 1078 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1078 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1078 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1078 "calendar.m"
  }
#line 80 "calendar.m"
}

#line 79 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__hour_1_f_0(
#line 79 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 79 "calendar.m"
{
#line 1077 "calendar.m"
  {
#line 1077 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1077 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1077 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1077 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1077 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1077 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1077 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1077 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1077 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1077 "calendar.m"
  }
#line 79 "calendar.m"
}

#line 78 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__day_of_week_1_f_0(
#line 78 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 78 "calendar.m"
{
#line 1048 "calendar.m"
  {
#line 1048 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1048 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek_4;
#line 1048 "calendar.m"
    MR_Integer mercury__calendar__JDN_5;
#line 1048 "calendar.m"
    MR_Integer mercury__calendar__Mod_6;
#line 1048 "calendar.m"
    MR_Integer mercury__calendar__V_6_11;
#line 1048 "calendar.m"
    MR_Integer mercury__calendar__V_7_12;

#line 1049 "calendar.m"
    {
#line 1049 "calendar.m"
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
#line 1051 "calendar.m"
    {
#line 1051 "calendar.m"
      return mercury__calendar__DayOfWeek_4 = mercury__calendar__det_day_of_week_from_mod_1_f_0(mercury__calendar__Mod_6);
    }
#line 1048 "calendar.m"
    return mercury__calendar__DayOfWeek_4;
#line 1048 "calendar.m"
  }
#line 78 "calendar.m"
}

#line 77 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__day_of_month_1_f_0(
#line 77 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 77 "calendar.m"
{
#line 1076 "calendar.m"
  {
#line 1076 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1076 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1076 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1076 "calendar.m"
  }
#line 77 "calendar.m"
}

#line 76 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__month_1_f_0(
#line 76 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 76 "calendar.m"
{
#line 1075 "calendar.m"
  {
#line 1075 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1075 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1075 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1075 "calendar.m"
    {
#line 1075 "calendar.m"
      return mercury__calendar__HeadVar__2_2 = mercury__calendar__det_int_to_month_1_f_0(mercury__calendar__V_4_4);
    }
#line 1075 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1075 "calendar.m"
  }
#line 76 "calendar.m"
}

#line 75 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__year_1_f_0(
#line 75 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 75 "calendar.m"
{
#line 1074 "calendar.m"
  {
#line 1074 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1074 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1074 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1074 "calendar.m"
  }
#line 75 "calendar.m"
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
	MR_register_type_ctor_info(&mercury__calendar__calendar__type_ctor_info_date_time_0);
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
