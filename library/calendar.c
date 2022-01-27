/*
** Automatically generated from `calendar.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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




#line 86 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7];

#line 89 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_date_0_0[7];

#line 92 "calendar.c"
static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_date_0_0;

#line 95 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1];

#line 98 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1];

#line 101 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1];

#line 104 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1];

#line 107 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0;

#line 110 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1;

#line 113 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2;

#line 116 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3;

#line 119 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4;

#line 122 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5;

#line 125 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6;

#line 128 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_day_of_week_0[7];

#line 131 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_day_of_week_0[7];

#line 134 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_day_of_week_0[7];

#line 137 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4];

#line 140 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4];

#line 143 "calendar.c"
static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_duration_0_0;

#line 146 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1];

#line 149 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1];

#line 152 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1];

#line 155 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1];

#line 158 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0;

#line 161 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1;

#line 164 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2;

#line 167 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3;

#line 170 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4;

#line 173 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5;

#line 176 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6;

#line 179 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7;

#line 182 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8;

#line 185 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9;

#line 188 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10;

#line 191 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11;

#line 194 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_month_0[12];

#line 197 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_month_0[12];

#line 200 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_month_0[12];

#line 203 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0;

#line 206 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1;

#line 209 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_order_0[2];

#line 212 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2];

#line 215 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2];

#line 218 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
#line 221 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 223 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 226 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
#line 229 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 231 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 233 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 236 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
#line 239 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 241 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 244 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
#line 247 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 249 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 251 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 254 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
#line 257 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 259 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 262 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
#line 265 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 267 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 269 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 272 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
#line 275 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 277 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 280 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
#line 283 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 285 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 287 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 290 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
#line 293 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 295 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 298 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
#line 301 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 303 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 305 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 308 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
#line 311 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 313 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 316 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
#line 319 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 321 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 323 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 326 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
#line 329 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 331 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 334 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
#line 337 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 339 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 341 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 344 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
#line 347 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 349 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 352 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
#line 355 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 357 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 359 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 362 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
#line 365 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 367 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 370 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
#line 373 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 375 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 377 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 380 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
#line 383 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 385 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 388 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
#line 391 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 393 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 395 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 398 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
#line 401 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 403 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 406 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
#line 409 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 411 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 413 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 416 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
#line 419 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 421 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 424 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
#line 427 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 429 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 431 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 434 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
#line 437 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 439 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 442 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
#line 445 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 447 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 449 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 452 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
#line 455 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 457 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 460 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
#line 463 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 465 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 467 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 470 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
#line 473 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 475 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 478 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
#line 481 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 483 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 485 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 488 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
#line 491 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 493 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 496 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
#line 499 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 501 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 503 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 506 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
#line 509 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 511 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 514 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
#line 517 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 519 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 521 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 524 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
#line 527 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 529 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2);

#line 532 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
#line 535 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 537 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 539 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3);

#line 193 "string.opt"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_50_93_95_48_4_p_in__string_0(
#line 193 "string.opt"
  MR_Char mercury__calendar__V_11_11,
#line 193 "string.opt"
  MR_String mercury__calendar__S_6_6,
#line 193 "string.opt"
  MR_Integer mercury__calendar__I_7_7,
#line 193 "string.opt"
  MR_Integer * mercury__calendar__Index_8_8);

#line 36 "list.int"
static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_49_48_95_95_91_51_93_95_48_2_p_in__list_0(
#line 36 "list.int"
  MR_Word mercury__calendar__V_8_8,
#line 36 "list.int"
  MR_Word mercury__calendar__V_9_9,
#line 36 "list.int"
  MR_Word mercury__calendar__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 831 "calendar.m"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 831 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_E_0_11,
#line 831 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_E_12);

#line 976 "calendar.m"
static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
#line 976 "calendar.m"
  MR_Integer mercury__calendar__BorrowVal_6,
#line 976 "calendar.m"
  MR_Integer mercury__calendar__Val1_7,
#line 976 "calendar.m"
  MR_Integer mercury__calendar__Val2_8,
#line 976 "calendar.m"
  MR_Integer * mercury__calendar__Diff_9,
#line 976 "calendar.m"
  MR_Integer * mercury__calendar__Borrow_10);

#line 920 "calendar.m"
static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
#line 920 "calendar.m"
  MR_Word mercury__calendar__OriginalOrder_5,
#line 920 "calendar.m"
  MR_Word mercury__calendar__DateA_6,
#line 920 "calendar.m"
  MR_Word mercury__calendar__DateB_7,
#line 920 "calendar.m"
  MR_Word * mercury__calendar__Duration_8);

#line 765 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
#line 765 "calendar.m"
  MR_Integer mercury__calendar__YearValue_4,
#line 765 "calendar.m"
  MR_Integer mercury__calendar__MonthValue_5);

#line 761 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
#line 761 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 761 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 761 "calendar.m"
  MR_Integer mercury__calendar__High_7);

#line 757 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
#line 757 "calendar.m"
  MR_Integer mercury__calendar__A_4,
#line 757 "calendar.m"
  MR_Integer mercury__calendar__B_5);

#line 753 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
#line 753 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 753 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 753 "calendar.m"
  MR_Integer mercury__calendar__High_7);

#line 709 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
#line 709 "calendar.m"
  MR_Integer mercury__calendar__Seconds_4,
#line 709 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_5);

#line 700 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
#line 700 "calendar.m"
  MR_Integer mercury__calendar__X_4,
#line 700 "calendar.m"
  MR_String mercury__calendar__Suffix_5);

#line 597 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void);

#line 548 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
#line 548 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_10,
#line 548 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_11,
#line 548 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_12,
#line 548 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_13);

#line 512 "calendar.m"
static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
#line 512 "calendar.m"
  MR_Integer * mercury__calendar__Seconds_5,
#line 512 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_6,
#line 512 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_13,
#line 512 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_14);

#line 507 "calendar.m"
static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
#line 507 "calendar.m"
  MR_Integer * mercury__calendar__Minutes_4,
#line 507 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 507 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 502 "calendar.m"
static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
#line 502 "calendar.m"
  MR_Integer * mercury__calendar__Hours_4,
#line 502 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 502 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 497 "calendar.m"
static void MR_CALL 
mercury__calendar__read_days_3_p_0(
#line 497 "calendar.m"
  MR_Integer * mercury__calendar__Days_4,
#line 497 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 497 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 492 "calendar.m"
static void MR_CALL 
mercury__calendar__read_months_3_p_0(
#line 492 "calendar.m"
  MR_Integer * mercury__calendar__Months_4,
#line 492 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 492 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

#line 483 "calendar.m"
static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
#line 483 "calendar.m"
  MR_Char * mercury__calendar__Char_4,
#line 483 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 483 "calendar.m"
  MR_Word * mercury__calendar__Rest_5);

#line 435 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
#line 435 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_13,
#line 435 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_14,
#line 435 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_N_0_15,
#line 435 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_N_16,
#line 435 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_17,
#line 435 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_18);

#line 429 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
#line 429 "calendar.m"
  MR_Integer * mercury__calendar__Val_5,
#line 429 "calendar.m"
  MR_Integer * mercury__calendar__N_6,
#line 429 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_8,
#line 429 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_9);

#line 414 "calendar.m"
static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
#line 414 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_4,
#line 414 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_9,
#line 414 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_10);


static /* final */ const MR_Box mercury__calendar_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__calendar_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__calendar_scalar_common_3[3][4];

static /* final */ const MR_Box mercury__calendar_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__calendar_scalar_common_5[6][7];




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
#include "type_desc.mh"
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



#line 1237 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1248 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_date_0_0[7] = {
  (MR_String) "dt_year",
  (MR_String) "dt_month",
  (MR_String) "dt_day",
  (MR_String) "dt_hour",
  (MR_String) "dt_minute",
  (MR_String) "dt_second",
  (MR_String) "dt_microsecond"
};

#line 1259 "calendar.c"
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

#line 1274 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_date_0_0
};

#line 1279 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_date_0_0
  }
};

#line 1288 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_date_0_0
};

#line 1293 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1] = {
  (MR_Integer) 0
};

#line 1298 "calendar.c"
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

#line 1319 "calendar.c"
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

#line 1340 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0 = {
  (MR_String) "monday",
  (MR_Integer) 0
};

#line 1346 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1 = {
  (MR_String) "tuesday",
  (MR_Integer) 1
};

#line 1352 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2 = {
  (MR_String) "wednesday",
  (MR_Integer) 2
};

#line 1358 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3 = {
  (MR_String) "thursday",
  (MR_Integer) 3
};

#line 1364 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4 = {
  (MR_String) "friday",
  (MR_Integer) 4
};

#line 1370 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5 = {
  (MR_String) "saturday",
  (MR_Integer) 5
};

#line 1376 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6 = {
  (MR_String) "sunday",
  (MR_Integer) 6
};

#line 1382 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_day_of_week_0[7] = {
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6
};

#line 1393 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_day_of_week_0[7] = {
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2
};

#line 1404 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_day_of_week_0[7] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1415 "calendar.c"
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

#line 1436 "calendar.c"
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

#line 1457 "calendar.c"
static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1465 "calendar.c"
static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4] = {
  (MR_String) "dur_months",
  (MR_String) "dur_days",
  (MR_String) "dur_seconds",
  (MR_String) "dur_microseconds"
};

#line 1473 "calendar.c"
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

#line 1488 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_duration_0_0
};

#line 1493 "calendar.c"
static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_duration_0_0
  }
};

#line 1502 "calendar.c"
static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_duration_0_0
};

#line 1507 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1] = {
  (MR_Integer) 0
};

#line 1512 "calendar.c"
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

#line 1533 "calendar.c"
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

#line 1554 "calendar.c"
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

#line 1575 "calendar.c"
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

#line 1596 "calendar.c"
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

#line 1617 "calendar.c"
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

#line 1638 "calendar.c"
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

#line 1659 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0 = {
  (MR_String) "january",
  (MR_Integer) 0
};

#line 1665 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1 = {
  (MR_String) "february",
  (MR_Integer) 1
};

#line 1671 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2 = {
  (MR_String) "march",
  (MR_Integer) 2
};

#line 1677 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3 = {
  (MR_String) "april",
  (MR_Integer) 3
};

#line 1683 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4 = {
  (MR_String) "may",
  (MR_Integer) 4
};

#line 1689 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5 = {
  (MR_String) "june",
  (MR_Integer) 5
};

#line 1695 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6 = {
  (MR_String) "july",
  (MR_Integer) 6
};

#line 1701 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7 = {
  (MR_String) "august",
  (MR_Integer) 7
};

#line 1707 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8 = {
  (MR_String) "september",
  (MR_Integer) 8
};

#line 1713 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9 = {
  (MR_String) "october",
  (MR_Integer) 9
};

#line 1719 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10 = {
  (MR_String) "november",
  (MR_Integer) 10
};

#line 1725 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11 = {
  (MR_String) "december",
  (MR_Integer) 11
};

#line 1731 "calendar.c"
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

#line 1747 "calendar.c"
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

#line 1763 "calendar.c"
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

#line 1779 "calendar.c"
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

#line 1800 "calendar.c"
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

#line 1821 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0 = {
  (MR_String) "ascending",
  (MR_Integer) 0
};

#line 1827 "calendar.c"
static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1 = {
  (MR_String) "descending",
  (MR_Integer) 1
};

#line 1833 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_order_0[2] = {
  &mercury__calendar__calendar__enum_functor_desc_order_0_0,
  &mercury__calendar__calendar__enum_functor_desc_order_0_1
};

#line 1839 "calendar.c"
static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2] = {
  &mercury__calendar__calendar__enum_functor_desc_order_0_0,
  &mercury__calendar__calendar__enum_functor_desc_order_0_1
};

#line 1845 "calendar.c"
static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1851 "calendar.c"
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

#line 1872 "calendar.c"
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

#line 1893 "calendar.c"
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

#line 1914 "calendar.c"
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

#line 1935 "calendar.c"
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

#line 1956 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
#line 1959 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 1961 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 1963 "calendar.c"
{
#line 1965 "calendar.c"
  {
#line 1967 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 1970 "calendar.c"
    {
#line 1972 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____date_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 1975 "calendar.c"
    return mercury__calendar__succeeded;
#line 1977 "calendar.c"
  }
#line 1979 "calendar.c"
}

#line 1982 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
#line 1985 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 1987 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 1989 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 1991 "calendar.c"
{
#line 1993 "calendar.c"
  {
#line 1995 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 1998 "calendar.c"
    {
#line 2000 "calendar.c"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2003 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2005 "calendar.c"
  }
#line 2007 "calendar.c"
}

#line 2010 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
#line 2013 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2015 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2017 "calendar.c"
{
#line 2019 "calendar.c"
  {
#line 2021 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2024 "calendar.c"
    {
#line 2026 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____day_of_month_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2029 "calendar.c"
    return mercury__calendar__succeeded;
#line 2031 "calendar.c"
  }
#line 2033 "calendar.c"
}

#line 2036 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
#line 2039 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2041 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2043 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2045 "calendar.c"
{
#line 2047 "calendar.c"
  {
#line 2049 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2052 "calendar.c"
    {
#line 2054 "calendar.c"
      mercury__calendar____Compare____day_of_month_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2057 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2059 "calendar.c"
  }
#line 2061 "calendar.c"
}

#line 2064 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
#line 2067 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2069 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2071 "calendar.c"
{
#line 2073 "calendar.c"
  {
#line 2075 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2078 "calendar.c"
    {
#line 2080 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____day_of_week_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2083 "calendar.c"
    return mercury__calendar__succeeded;
#line 2085 "calendar.c"
  }
#line 2087 "calendar.c"
}

#line 2090 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
#line 2093 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2095 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2097 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2099 "calendar.c"
{
#line 2101 "calendar.c"
  {
#line 2103 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2106 "calendar.c"
    {
#line 2108 "calendar.c"
      mercury__calendar____Compare____day_of_week_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2111 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2113 "calendar.c"
  }
#line 2115 "calendar.c"
}

#line 2118 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
#line 2121 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2123 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2125 "calendar.c"
{
#line 2127 "calendar.c"
  {
#line 2129 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2132 "calendar.c"
    {
#line 2134 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____days_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2137 "calendar.c"
    return mercury__calendar__succeeded;
#line 2139 "calendar.c"
  }
#line 2141 "calendar.c"
}

#line 2144 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
#line 2147 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2149 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2151 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2153 "calendar.c"
{
#line 2155 "calendar.c"
  {
#line 2157 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2160 "calendar.c"
    {
#line 2162 "calendar.c"
      mercury__calendar____Compare____days_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2165 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2167 "calendar.c"
  }
#line 2169 "calendar.c"
}

#line 2172 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
#line 2175 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2177 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2179 "calendar.c"
{
#line 2181 "calendar.c"
  {
#line 2183 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2186 "calendar.c"
    {
#line 2188 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____duration_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2191 "calendar.c"
    return mercury__calendar__succeeded;
#line 2193 "calendar.c"
  }
#line 2195 "calendar.c"
}

#line 2198 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
#line 2201 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2203 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2205 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2207 "calendar.c"
{
#line 2209 "calendar.c"
  {
#line 2211 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2214 "calendar.c"
    {
#line 2216 "calendar.c"
      mercury__calendar____Compare____duration_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2219 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2221 "calendar.c"
  }
#line 2223 "calendar.c"
}

#line 2226 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
#line 2229 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2231 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2233 "calendar.c"
{
#line 2235 "calendar.c"
  {
#line 2237 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2240 "calendar.c"
    {
#line 2242 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____hour_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2245 "calendar.c"
    return mercury__calendar__succeeded;
#line 2247 "calendar.c"
  }
#line 2249 "calendar.c"
}

#line 2252 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
#line 2255 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2257 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2259 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2261 "calendar.c"
{
#line 2263 "calendar.c"
  {
#line 2265 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2268 "calendar.c"
    {
#line 2270 "calendar.c"
      mercury__calendar____Compare____hour_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2273 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2275 "calendar.c"
  }
#line 2277 "calendar.c"
}

#line 2280 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
#line 2283 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2285 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2287 "calendar.c"
{
#line 2289 "calendar.c"
  {
#line 2291 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2294 "calendar.c"
    {
#line 2296 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____hours_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2299 "calendar.c"
    return mercury__calendar__succeeded;
#line 2301 "calendar.c"
  }
#line 2303 "calendar.c"
}

#line 2306 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
#line 2309 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2311 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2313 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2315 "calendar.c"
{
#line 2317 "calendar.c"
  {
#line 2319 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2322 "calendar.c"
    {
#line 2324 "calendar.c"
      mercury__calendar____Compare____hours_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2327 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2329 "calendar.c"
  }
#line 2331 "calendar.c"
}

#line 2334 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
#line 2337 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2339 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2341 "calendar.c"
{
#line 2343 "calendar.c"
  {
#line 2345 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2348 "calendar.c"
    {
#line 2350 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____microsecond_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2353 "calendar.c"
    return mercury__calendar__succeeded;
#line 2355 "calendar.c"
  }
#line 2357 "calendar.c"
}

#line 2360 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
#line 2363 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2365 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2367 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2369 "calendar.c"
{
#line 2371 "calendar.c"
  {
#line 2373 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2376 "calendar.c"
    {
#line 2378 "calendar.c"
      mercury__calendar____Compare____microsecond_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2381 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2383 "calendar.c"
  }
#line 2385 "calendar.c"
}

#line 2388 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
#line 2391 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2393 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2395 "calendar.c"
{
#line 2397 "calendar.c"
  {
#line 2399 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2402 "calendar.c"
    {
#line 2404 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____microseconds_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2407 "calendar.c"
    return mercury__calendar__succeeded;
#line 2409 "calendar.c"
  }
#line 2411 "calendar.c"
}

#line 2414 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
#line 2417 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2419 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2421 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2423 "calendar.c"
{
#line 2425 "calendar.c"
  {
#line 2427 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2430 "calendar.c"
    {
#line 2432 "calendar.c"
      mercury__calendar____Compare____microseconds_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2435 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2437 "calendar.c"
  }
#line 2439 "calendar.c"
}

#line 2442 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
#line 2445 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2447 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2449 "calendar.c"
{
#line 2451 "calendar.c"
  {
#line 2453 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2456 "calendar.c"
    {
#line 2458 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____minute_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2461 "calendar.c"
    return mercury__calendar__succeeded;
#line 2463 "calendar.c"
  }
#line 2465 "calendar.c"
}

#line 2468 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
#line 2471 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2473 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2475 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2477 "calendar.c"
{
#line 2479 "calendar.c"
  {
#line 2481 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2484 "calendar.c"
    {
#line 2486 "calendar.c"
      mercury__calendar____Compare____minute_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2489 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2491 "calendar.c"
  }
#line 2493 "calendar.c"
}

#line 2496 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
#line 2499 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2501 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2503 "calendar.c"
{
#line 2505 "calendar.c"
  {
#line 2507 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2510 "calendar.c"
    {
#line 2512 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____minutes_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2515 "calendar.c"
    return mercury__calendar__succeeded;
#line 2517 "calendar.c"
  }
#line 2519 "calendar.c"
}

#line 2522 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
#line 2525 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2527 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2529 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2531 "calendar.c"
{
#line 2533 "calendar.c"
  {
#line 2535 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2538 "calendar.c"
    {
#line 2540 "calendar.c"
      mercury__calendar____Compare____minutes_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2543 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2545 "calendar.c"
  }
#line 2547 "calendar.c"
}

#line 2550 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
#line 2553 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2555 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2557 "calendar.c"
{
#line 2559 "calendar.c"
  {
#line 2561 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2564 "calendar.c"
    {
#line 2566 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____month_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2569 "calendar.c"
    return mercury__calendar__succeeded;
#line 2571 "calendar.c"
  }
#line 2573 "calendar.c"
}

#line 2576 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
#line 2579 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2581 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2583 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2585 "calendar.c"
{
#line 2587 "calendar.c"
  {
#line 2589 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2592 "calendar.c"
    {
#line 2594 "calendar.c"
      mercury__calendar____Compare____month_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2597 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2599 "calendar.c"
  }
#line 2601 "calendar.c"
}

#line 2604 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
#line 2607 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2609 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2611 "calendar.c"
{
#line 2613 "calendar.c"
  {
#line 2615 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2618 "calendar.c"
    {
#line 2620 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____months_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2623 "calendar.c"
    return mercury__calendar__succeeded;
#line 2625 "calendar.c"
  }
#line 2627 "calendar.c"
}

#line 2630 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
#line 2633 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2635 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2637 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2639 "calendar.c"
{
#line 2641 "calendar.c"
  {
#line 2643 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2646 "calendar.c"
    {
#line 2648 "calendar.c"
      mercury__calendar____Compare____months_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2651 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2653 "calendar.c"
  }
#line 2655 "calendar.c"
}

#line 2658 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
#line 2661 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2663 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2665 "calendar.c"
{
#line 2667 "calendar.c"
  {
#line 2669 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2672 "calendar.c"
    {
#line 2674 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____order_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    }
#line 2677 "calendar.c"
    return mercury__calendar__succeeded;
#line 2679 "calendar.c"
  }
#line 2681 "calendar.c"
}

#line 2684 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
#line 2687 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2689 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2691 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2693 "calendar.c"
{
#line 2695 "calendar.c"
  {
#line 2697 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2700 "calendar.c"
    {
#line 2702 "calendar.c"
      mercury__calendar____Compare____order_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    }
#line 2705 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2707 "calendar.c"
  }
#line 2709 "calendar.c"
}

#line 2712 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
#line 2715 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2717 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2719 "calendar.c"
{
#line 2721 "calendar.c"
  {
#line 2723 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2726 "calendar.c"
    {
#line 2728 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____second_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2731 "calendar.c"
    return mercury__calendar__succeeded;
#line 2733 "calendar.c"
  }
#line 2735 "calendar.c"
}

#line 2738 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
#line 2741 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2743 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2745 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2747 "calendar.c"
{
#line 2749 "calendar.c"
  {
#line 2751 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2754 "calendar.c"
    {
#line 2756 "calendar.c"
      mercury__calendar____Compare____second_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2759 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2761 "calendar.c"
  }
#line 2763 "calendar.c"
}

#line 2766 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
#line 2769 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2771 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2773 "calendar.c"
{
#line 2775 "calendar.c"
  {
#line 2777 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2780 "calendar.c"
    {
#line 2782 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____seconds_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2785 "calendar.c"
    return mercury__calendar__succeeded;
#line 2787 "calendar.c"
  }
#line 2789 "calendar.c"
}

#line 2792 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
#line 2795 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2797 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2799 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2801 "calendar.c"
{
#line 2803 "calendar.c"
  {
#line 2805 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2808 "calendar.c"
    {
#line 2810 "calendar.c"
      mercury__calendar____Compare____seconds_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2813 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2815 "calendar.c"
  }
#line 2817 "calendar.c"
}

#line 2820 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
#line 2823 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2825 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2827 "calendar.c"
{
#line 2829 "calendar.c"
  {
#line 2831 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2834 "calendar.c"
    {
#line 2836 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____year_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2839 "calendar.c"
    return mercury__calendar__succeeded;
#line 2841 "calendar.c"
  }
#line 2843 "calendar.c"
}

#line 2846 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
#line 2849 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2851 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2853 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2855 "calendar.c"
{
#line 2857 "calendar.c"
  {
#line 2859 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2862 "calendar.c"
    {
#line 2864 "calendar.c"
      mercury__calendar____Compare____year_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2867 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2869 "calendar.c"
  }
#line 2871 "calendar.c"
}

#line 2874 "calendar.c"
static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
#line 2877 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_1,
#line 2879 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2)
#line 2881 "calendar.c"
{
#line 2883 "calendar.c"
  {
#line 2885 "calendar.c"
    MR_bool mercury__calendar__succeeded;

#line 2888 "calendar.c"
    {
#line 2890 "calendar.c"
      mercury__calendar__succeeded = mercury__calendar____Unify____years_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    }
#line 2893 "calendar.c"
    return mercury__calendar__succeeded;
#line 2895 "calendar.c"
  }
#line 2897 "calendar.c"
}

#line 2900 "calendar.c"
static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
#line 2903 "calendar.c"
  MR_Box * mercury__calendar__wrapper_arg_1,
#line 2905 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_2,
#line 2907 "calendar.c"
  MR_Box mercury__calendar__wrapper_arg_3)
#line 2909 "calendar.c"
{
#line 2911 "calendar.c"
  {
#line 2913 "calendar.c"
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

#line 2916 "calendar.c"
    {
#line 2918 "calendar.c"
      mercury__calendar____Compare____years_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    }
#line 2921 "calendar.c"
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
#line 2923 "calendar.c"
  }
#line 2925 "calendar.c"
}

#line 193 "string.opt"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_50_93_95_48_4_p_in__string_0(
#line 193 "string.opt"
  MR_Char mercury__calendar__V_11_11,
#line 193 "string.opt"
  MR_String mercury__calendar__S_6_6,
#line 193 "string.opt"
  MR_Integer mercury__calendar__I_7_7,
#line 193 "string.opt"
  MR_Integer * mercury__calendar__Index_8_8)
#line 193 "string.opt"
{
#line 1180 "string.opt"
  while (MR_TRUE)
#line 1180 "string.opt"
    {
#line 1180 "string.opt"
      /* tailcall optimized into a loop */
#line 1180 "string.opt"
      {
#line 1180 "string.opt"
        MR_bool mercury__calendar__succeeded;
#line 1180 "string.opt"
        MR_Integer mercury__calendar__J_9_9;
#line 1176 "string.opt"
        MR_Char mercury__calendar__Char_10_10;

#line 611 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_50_93_95_48_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__calendar__S_6_6 ;
	Index =  mercury__calendar__I_7_7 ;
		{
#line 611 "string.opt"

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

#line 2984 "calendar.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__calendar__J_9_9  = PrevIndex;
	 mercury__calendar__Char_10_10  = Ch;
#line 611 "string.opt"
	}
mercury__calendar__succeeded  = SUCCESS_INDICATOR;
}
#line 1176 "string.opt"
        if (mercury__calendar__succeeded)
#line 643 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__V_11_11 == mercury__calendar__Char_10_10);
#line 1180 "string.opt"
        if (mercury__calendar__succeeded)
#line 1179 "string.opt"
          {
#line 1179 "string.opt"
            /* direct tailcall eliminated */
#line 1179 "string.opt"
            {
#line 1179 "string.opt"
              MR_Integer mercury__calendar__I_7__tmp_copy_7 = mercury__calendar__J_9_9;

#line 1179 "string.opt"
              mercury__calendar__I_7_7 = mercury__calendar__I_7__tmp_copy_7;
#line 1179 "string.opt"
            }
#line 1179 "string.opt"
            continue;
#line 1179 "string.opt"
          }
#line 1180 "string.opt"
        else
#line 1181 "string.opt"
          *mercury__calendar__Index_8_8 = mercury__calendar__I_7_7;
#line 1180 "string.opt"
      }
#line 1180 "string.opt"
      break;
#line 1180 "string.opt"
    }
#line 193 "string.opt"
}

#line 36 "list.int"
static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_49_48_95_95_91_51_93_95_48_2_p_in__list_0(
#line 36 "list.int"
  MR_Word mercury__calendar__V_8_8,
#line 36 "list.int"
  MR_Word mercury__calendar__V_9_9,
#line 36 "list.int"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 36 "list.int"
{
#line 565 "list.opt"
  while (MR_TRUE)
#line 565 "list.opt"
    {
#line 565 "list.opt"
      /* tailcall optimized into a loop */
#line 565 "list.opt"
      {
#line 565 "list.opt"
        MR_bool mercury__calendar__succeeded;

#line 565 "list.opt"
        if ((mercury__calendar__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "list.opt"
          mercury__calendar__succeeded = MR_TRUE;
#line 565 "list.opt"
        else
#line 566 "list.opt"
          {
#line 566 "list.opt"
            MR_Word mercury__calendar__X_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 566 "list.opt"
            MR_Word mercury__calendar__Xs_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 566 "list.opt"
            MR_Word mercury__calendar__DateA_13;
#line 566 "list.opt"
            MR_Word mercury__calendar__DateB_14;
#line 566 "list.opt"
            MR_Word mercury__calendar__CompRes_15;

#line 728 "calendar.m"
            {
#line 728 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_8_8, mercury__calendar__X_5_5, &mercury__calendar__DateA_13);
            }
#line 729 "calendar.m"
            {
#line 729 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_9_9, mercury__calendar__X_5_5, &mercury__calendar__DateB_14);
            }
#line 730 "calendar.m"
            {
#line 730 "calendar.m"
              mercury__calendar____Compare____date_0_0(&mercury__calendar__CompRes_15, mercury__calendar__DateA_13, mercury__calendar__DateB_14);
            }
#line 731 "calendar.m"
            if ((mercury__calendar__CompRes_15 == (MR_Integer) 1))
#line 731 "calendar.m"
              mercury__calendar__succeeded = MR_TRUE;
#line 731 "calendar.m"
            else
#line 731 "calendar.m"
              if ((mercury__calendar__CompRes_15 == (MR_Integer) 0))
#line 731 "calendar.m"
                mercury__calendar__succeeded = MR_TRUE;
#line 731 "calendar.m"
              else
#line 731 "calendar.m"
                mercury__calendar__succeeded = MR_FALSE;
#line 566 "list.opt"
            if (mercury__calendar__succeeded)
#line 568 "list.opt"
              {
#line 568 "list.opt"
                /* direct tailcall eliminated */
#line 568 "list.opt"
                {
#line 568 "list.opt"
                  MR_Word mercury__calendar__HeadVar__2__tmp_copy_2 = mercury__calendar__Xs_6_6;

#line 568 "list.opt"
                  mercury__calendar__HeadVar__2_2 = mercury__calendar__HeadVar__2__tmp_copy_2;
#line 568 "list.opt"
                }
#line 568 "list.opt"
                continue;
#line 568 "list.opt"
              }
#line 566 "list.opt"
          }
#line 565 "list.opt"
        return mercury__calendar__succeeded;
#line 565 "list.opt"
      }
#line 565 "list.opt"
      break;
#line 565 "list.opt"
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

#line 831 "calendar.m"
static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 831 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_E_0_11,
#line 831 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_E_12)
#line 831 "calendar.m"
{
#line 842 "calendar.m"
  while (MR_TRUE)
#line 842 "calendar.m"
    {
#line 842 "calendar.m"
      /* tailcall optimized into a loop */
#line 842 "calendar.m"
      {
#line 842 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 842 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 842 "calendar.m"
        MR_Integer mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 842 "calendar.m"
        MR_Integer mercury__calendar__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 834 "calendar.m"
        MR_Integer mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 834 "calendar.m"
        MR_Integer mercury__calendar__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 834 "calendar.m"
        MR_Integer mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 834 "calendar.m"
        MR_Integer mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

#line 834 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_13_13 < (MR_Integer) 1);
#line 842 "calendar.m"
        if (mercury__calendar__succeeded)
#line 836 "calendar.m"
          {
#line 836 "calendar.m"
            MR_Integer mercury__calendar__Temp_9;
#line 836 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_15_15;
#line 836 "calendar.m"
            MR_Integer mercury__calendar__V_16_16;
#line 836 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 836 "calendar.m"
            MR_Integer mercury__calendar__V_20_20 = (mercury__calendar__V_58_58 - (MR_Integer) 1);
#line 836 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_24_24;
#line 836 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 836 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_E_28_28;
#line 836 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 836 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 836 "calendar.m"
            MR_Integer mercury__calendar__V_82_82;
#line 836 "calendar.m"
            MR_Integer mercury__calendar__V_94_94;
#line 835 "calendar.m"
            MR_Integer mercury__calendar__V_81_81;
#line 835 "calendar.m"
            MR_Integer mercury__calendar__V_84_84;
#line 835 "calendar.m"
            MR_Integer mercury__calendar__V_85_85;
#line 835 "calendar.m"
            MR_Integer mercury__calendar__V_86_86;
#line 835 "calendar.m"
            MR_Integer mercury__calendar__V_87_87;
#line 835 "calendar.m"
            MR_Integer mercury__calendar__V_83_83;
#line 839 "calendar.m"
            MR_Integer mercury__calendar__V_96_96;
#line 839 "calendar.m"
            MR_Integer mercury__calendar__V_97_97;
#line 839 "calendar.m"
            MR_Integer mercury__calendar__V_98_98;
#line 839 "calendar.m"
            MR_Integer mercury__calendar__V_99_99;
#line 839 "calendar.m"
            MR_Integer mercury__calendar__V_100_100;
#line 839 "calendar.m"
            MR_Integer mercury__calendar__V_95_95;
#line 840 "calendar.m"
            MR_Integer mercury__calendar__V_108_108;
#line 840 "calendar.m"
            MR_Integer mercury__calendar__V_109_109;
#line 840 "calendar.m"
            MR_Integer mercury__calendar__V_110_110;
#line 840 "calendar.m"
            MR_Integer mercury__calendar__V_111_111;
#line 840 "calendar.m"
            MR_Integer mercury__calendar__V_112_112;
#line 840 "calendar.m"
            MR_Integer mercury__calendar__V_113_113;
#line 840 "calendar.m"
            MR_Integer mercury__calendar__V_107_107;

#line 835 "calendar.m"
            {
#line 835 "calendar.m"
              mercury__calendar__V_18_18 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_57_57, mercury__calendar__V_20_20);
            }
#line 835 "calendar.m"
            mercury__calendar__V_16_16 = (mercury__calendar__V_13_13 + mercury__calendar__V_18_18);
#line 835 "calendar.m"
            mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 835 "calendar.m"
            mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 835 "calendar.m"
            mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 835 "calendar.m"
            mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 835 "calendar.m"
            mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 835 "calendar.m"
            mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 835 "calendar.m"
            mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
#line 835 "calendar.m"
            {
#line 835 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 835 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 0) = ((MR_Box) (mercury__calendar__V_81_81));
#line 835 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 1) = ((MR_Box) (mercury__calendar__V_82_82));
#line 835 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 2) = ((MR_Box) (mercury__calendar__V_16_16));
#line 835 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 3) = ((MR_Box) (mercury__calendar__V_84_84));
#line 835 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 4) = ((MR_Box) (mercury__calendar__V_85_85));
#line 835 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 5) = ((MR_Box) (mercury__calendar__V_86_86));
#line 835 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 6) = ((MR_Box) (mercury__calendar__V_87_87));
#line 835 "calendar.m"
            }
#line 838 "calendar.m"
            mercury__calendar__Temp_9 = (mercury__calendar__V_82_82 + (MR_Integer) -1);
#line 839 "calendar.m"
            {
#line 839 "calendar.m"
              mercury__calendar__V_25_25 = mercury__calendar__modulo_3_f_0(mercury__calendar__Temp_9, (MR_Integer) 1, (MR_Integer) 13);
            }
#line 839 "calendar.m"
            mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 0)));
#line 839 "calendar.m"
            mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 1)));
#line 839 "calendar.m"
            mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 2)));
#line 839 "calendar.m"
            mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 3)));
#line 839 "calendar.m"
            mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 4)));
#line 839 "calendar.m"
            mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 5)));
#line 839 "calendar.m"
            mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 6)));
#line 839 "calendar.m"
            {
#line 839 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 839 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 0) = ((MR_Box) (mercury__calendar__V_94_94));
#line 839 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 1) = ((MR_Box) (mercury__calendar__V_25_25));
#line 839 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 2) = ((MR_Box) (mercury__calendar__V_96_96));
#line 839 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 3) = ((MR_Box) (mercury__calendar__V_97_97));
#line 839 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 4) = ((MR_Box) (mercury__calendar__V_98_98));
#line 839 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 5) = ((MR_Box) (mercury__calendar__V_99_99));
#line 839 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 6) = ((MR_Box) (mercury__calendar__V_100_100));
#line 839 "calendar.m"
            }
#line 840 "calendar.m"
            {
#line 840 "calendar.m"
              mercury__calendar__V_31_31 = mercury__calendar__fquotient_3_f_0(mercury__calendar__Temp_9, (MR_Integer) 1, (MR_Integer) 13);
            }
#line 840 "calendar.m"
            mercury__calendar__V_29_29 = (mercury__calendar__V_94_94 + mercury__calendar__V_31_31);
#line 840 "calendar.m"
            mercury__calendar__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 0)));
#line 840 "calendar.m"
            mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 1)));
#line 840 "calendar.m"
            mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 2)));
#line 840 "calendar.m"
            mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 3)));
#line 840 "calendar.m"
            mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 4)));
#line 840 "calendar.m"
            mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 5)));
#line 840 "calendar.m"
            mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 6)));
#line 840 "calendar.m"
            {
#line 840 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 840 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 0) = ((MR_Box) (mercury__calendar__V_29_29));
#line 840 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 1) = ((MR_Box) (mercury__calendar__V_108_108));
#line 840 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 2) = ((MR_Box) (mercury__calendar__V_109_109));
#line 840 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 3) = ((MR_Box) (mercury__calendar__V_110_110));
#line 840 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 4) = ((MR_Box) (mercury__calendar__V_111_111));
#line 840 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 5) = ((MR_Box) (mercury__calendar__V_112_112));
#line 840 "calendar.m"
              MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 6) = ((MR_Box) (mercury__calendar__V_113_113));
#line 840 "calendar.m"
            }
#line 841 "calendar.m"
            /* direct tailcall eliminated */
#line 841 "calendar.m"
            {
#line 841 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_E_28_28;

#line 841 "calendar.m"
              mercury__calendar__STATE_VARIABLE_E_0_11 = mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11;
#line 841 "calendar.m"
            }
#line 841 "calendar.m"
            continue;
#line 836 "calendar.m"
          }
#line 842 "calendar.m"
        else
#line 852 "calendar.m"
          {
#line 852 "calendar.m"
            MR_Integer mercury__calendar__MaxDaysInMonth_10;
#line 852 "calendar.m"
            MR_Integer mercury__calendar__V_37_37;
#line 852 "calendar.m"
            MR_Integer mercury__calendar__V_126_126;
#line 852 "calendar.m"
            MR_Integer mercury__calendar__V_127_127;
#line 852 "calendar.m"
            MR_Integer mercury__calendar__V_128_128;
#line 852 "calendar.m"
            MR_Integer mercury__calendar__V_129_129;
#line 852 "calendar.m"
            MR_Integer mercury__calendar__V_130_130;
#line 852 "calendar.m"
            MR_Integer mercury__calendar__V_131_131;
#line 843 "calendar.m"
            MR_Integer mercury__calendar__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 843 "calendar.m"
            MR_Integer mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 843 "calendar.m"
            MR_Integer mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 843 "calendar.m"
            MR_Integer mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 843 "calendar.m"
            MR_Integer mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 843 "calendar.m"
            MR_Integer mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 843 "calendar.m"
            MR_Integer mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

#line 843 "calendar.m"
            {
#line 843 "calendar.m"
              mercury__calendar__MaxDaysInMonth_10 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_35_35, mercury__calendar__V_114_114);
            }
#line 844 "calendar.m"
            mercury__calendar__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
#line 844 "calendar.m"
            mercury__calendar__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
#line 844 "calendar.m"
            mercury__calendar__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
#line 844 "calendar.m"
            mercury__calendar__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
#line 844 "calendar.m"
            mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
#line 844 "calendar.m"
            mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
#line 844 "calendar.m"
            mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
#line 844 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_37_37 > mercury__calendar__MaxDaysInMonth_10);
#line 852 "calendar.m"
            if (mercury__calendar__succeeded)
#line 846 "calendar.m"
              {
#line 846 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_38_38;
#line 846 "calendar.m"
                MR_Integer mercury__calendar__V_39_39 = (mercury__calendar__V_37_37 - mercury__calendar__MaxDaysInMonth_10);
#line 846 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_42_42;
#line 846 "calendar.m"
                MR_Integer mercury__calendar__V_43_43;
#line 846 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_E_46_46;
#line 846 "calendar.m"
                MR_Integer mercury__calendar__V_47_47;
#line 846 "calendar.m"
                MR_Integer mercury__calendar__V_49_49;
#line 846 "calendar.m"
                MR_Integer mercury__calendar__Temp_54;
#line 846 "calendar.m"
                MR_Integer mercury__calendar__V_139_139 = mercury__calendar__V_127_127;
#line 846 "calendar.m"
                MR_Integer mercury__calendar__V_151_151;
#line 849 "calendar.m"
                MR_Integer mercury__calendar__V_153_153;
#line 849 "calendar.m"
                MR_Integer mercury__calendar__V_154_154;
#line 849 "calendar.m"
                MR_Integer mercury__calendar__V_155_155;
#line 849 "calendar.m"
                MR_Integer mercury__calendar__V_156_156;
#line 849 "calendar.m"
                MR_Integer mercury__calendar__V_157_157;
#line 849 "calendar.m"
                MR_Integer mercury__calendar__V_152_152;
#line 850 "calendar.m"
                MR_Integer mercury__calendar__V_165_165;
#line 850 "calendar.m"
                MR_Integer mercury__calendar__V_166_166;
#line 850 "calendar.m"
                MR_Integer mercury__calendar__V_167_167;
#line 850 "calendar.m"
                MR_Integer mercury__calendar__V_168_168;
#line 850 "calendar.m"
                MR_Integer mercury__calendar__V_169_169;
#line 850 "calendar.m"
                MR_Integer mercury__calendar__V_170_170;
#line 850 "calendar.m"
                MR_Integer mercury__calendar__V_164_164;

#line 846 "calendar.m"
                {
#line 846 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 846 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 0) = ((MR_Box) (mercury__calendar__V_126_126));
#line 846 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 1) = ((MR_Box) (mercury__calendar__V_139_139));
#line 846 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 2) = ((MR_Box) (mercury__calendar__V_39_39));
#line 846 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 3) = ((MR_Box) (mercury__calendar__V_128_128));
#line 846 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 4) = ((MR_Box) (mercury__calendar__V_129_129));
#line 846 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 5) = ((MR_Box) (mercury__calendar__V_130_130));
#line 846 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 6) = ((MR_Box) (mercury__calendar__V_131_131));
#line 846 "calendar.m"
                }
#line 848 "calendar.m"
                mercury__calendar__Temp_54 = (mercury__calendar__V_139_139 + (MR_Integer) 1);
#line 849 "calendar.m"
                {
#line 849 "calendar.m"
                  mercury__calendar__V_43_43 = mercury__calendar__modulo_3_f_0(mercury__calendar__Temp_54, (MR_Integer) 1, (MR_Integer) 13);
                }
#line 849 "calendar.m"
                mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 0)));
#line 849 "calendar.m"
                mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 1)));
#line 849 "calendar.m"
                mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 2)));
#line 849 "calendar.m"
                mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 3)));
#line 849 "calendar.m"
                mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 4)));
#line 849 "calendar.m"
                mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 5)));
#line 849 "calendar.m"
                mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 6)));
#line 849 "calendar.m"
                {
#line 849 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 849 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 0) = ((MR_Box) (mercury__calendar__V_151_151));
#line 849 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 1) = ((MR_Box) (mercury__calendar__V_43_43));
#line 849 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 2) = ((MR_Box) (mercury__calendar__V_153_153));
#line 849 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 3) = ((MR_Box) (mercury__calendar__V_154_154));
#line 849 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 4) = ((MR_Box) (mercury__calendar__V_155_155));
#line 849 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 5) = ((MR_Box) (mercury__calendar__V_156_156));
#line 849 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 6) = ((MR_Box) (mercury__calendar__V_157_157));
#line 849 "calendar.m"
                }
#line 850 "calendar.m"
                {
#line 850 "calendar.m"
                  mercury__calendar__V_49_49 = mercury__calendar__fquotient_3_f_0(mercury__calendar__Temp_54, (MR_Integer) 1, (MR_Integer) 13);
                }
#line 850 "calendar.m"
                mercury__calendar__V_47_47 = (mercury__calendar__V_151_151 + mercury__calendar__V_49_49);
#line 850 "calendar.m"
                mercury__calendar__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 0)));
#line 850 "calendar.m"
                mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 1)));
#line 850 "calendar.m"
                mercury__calendar__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 2)));
#line 850 "calendar.m"
                mercury__calendar__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 3)));
#line 850 "calendar.m"
                mercury__calendar__V_168_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 4)));
#line 850 "calendar.m"
                mercury__calendar__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 5)));
#line 850 "calendar.m"
                mercury__calendar__V_170_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 6)));
#line 850 "calendar.m"
                {
#line 850 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 850 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 0) = ((MR_Box) (mercury__calendar__V_47_47));
#line 850 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 1) = ((MR_Box) (mercury__calendar__V_165_165));
#line 850 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 2) = ((MR_Box) (mercury__calendar__V_166_166));
#line 850 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 3) = ((MR_Box) (mercury__calendar__V_167_167));
#line 850 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 4) = ((MR_Box) (mercury__calendar__V_168_168));
#line 850 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 5) = ((MR_Box) (mercury__calendar__V_169_169));
#line 850 "calendar.m"
                  MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 6) = ((MR_Box) (mercury__calendar__V_170_170));
#line 850 "calendar.m"
                }
#line 851 "calendar.m"
                /* direct tailcall eliminated */
#line 851 "calendar.m"
                {
#line 851 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_E_46_46;

#line 851 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_E_0_11 = mercury__calendar__STATE_VARIABLE_E_0__tmp_copy_11;
#line 851 "calendar.m"
                }
#line 851 "calendar.m"
                continue;
#line 846 "calendar.m"
              }
#line 852 "calendar.m"
            else
#line 851 "calendar.m"
              *mercury__calendar__STATE_VARIABLE_E_12 = mercury__calendar__STATE_VARIABLE_E_0_11;
#line 852 "calendar.m"
          }
#line 842 "calendar.m"
      }
#line 842 "calendar.m"
      break;
#line 842 "calendar.m"
    }
#line 831 "calendar.m"
}

#line 136 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____years_0_0(
#line 136 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 136 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 136 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 136 "calendar.m"
{
#line 136 "calendar.m"
  {
#line 136 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 136 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 136 "calendar.m"
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
#line 136 "calendar.m"
  }
#line 136 "calendar.m"
}

#line 136 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0(
#line 136 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 136 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 136 "calendar.m"
{
#line 136 "calendar.m"
  {
#line 136 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 136 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 136 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 136 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 136 "calendar.m"
    return mercury__calendar__succeeded;
#line 136 "calendar.m"
  }
#line 136 "calendar.m"
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

#line 141 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____seconds_0_0(
#line 141 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 141 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 141 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 141 "calendar.m"
{
#line 141 "calendar.m"
  {
#line 141 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 141 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 141 "calendar.m"
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
#line 141 "calendar.m"
  }
#line 141 "calendar.m"
}

#line 141 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0(
#line 141 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 141 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 141 "calendar.m"
{
#line 141 "calendar.m"
  {
#line 141 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 141 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 141 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 141 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 141 "calendar.m"
    return mercury__calendar__succeeded;
#line 141 "calendar.m"
  }
#line 141 "calendar.m"
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

#line 907 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____order_0_0(
#line 907 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 907 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 907 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 907 "calendar.m"
{
#line 907 "calendar.m"
  {
#line 907 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 907 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 907 "calendar.m"
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
#line 907 "calendar.m"
  }
#line 907 "calendar.m"
}

#line 907 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0(
#line 907 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_1,
#line 907 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 907 "calendar.m"
{
#line 3982 "calendar.c"
  {
#line 3984 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 3987 "calendar.c"
    return mercury__calendar__succeeded;
#line 3989 "calendar.c"
  }
#line 907 "calendar.m"
}

#line 137 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____months_0_0(
#line 137 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 137 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 137 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 137 "calendar.m"
{
#line 137 "calendar.m"
  {
#line 137 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 137 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 137 "calendar.m"
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
#line 137 "calendar.m"
  }
#line 137 "calendar.m"
}

#line 137 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0(
#line 137 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 137 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 137 "calendar.m"
{
#line 137 "calendar.m"
  {
#line 137 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 137 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 137 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 137 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 137 "calendar.m"
    return mercury__calendar__succeeded;
#line 137 "calendar.m"
  }
#line 137 "calendar.m"
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
#line 4124 "calendar.c"
  {
#line 4126 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 4129 "calendar.c"
    return mercury__calendar__succeeded;
#line 4131 "calendar.c"
  }
#line 46 "calendar.m"
}

#line 140 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____minutes_0_0(
#line 140 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 140 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 140 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 140 "calendar.m"
{
#line 140 "calendar.m"
  {
#line 140 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 140 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 140 "calendar.m"
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
#line 140 "calendar.m"
  }
#line 140 "calendar.m"
}

#line 140 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0(
#line 140 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 140 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 140 "calendar.m"
{
#line 140 "calendar.m"
  {
#line 140 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 140 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 140 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 140 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 140 "calendar.m"
    return mercury__calendar__succeeded;
#line 140 "calendar.m"
  }
#line 140 "calendar.m"
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

#line 142 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____microseconds_0_0(
#line 142 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 142 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 142 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 142 "calendar.m"
{
#line 142 "calendar.m"
  {
#line 142 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 142 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 142 "calendar.m"
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
#line 142 "calendar.m"
  }
#line 142 "calendar.m"
}

#line 142 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0(
#line 142 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 142 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 142 "calendar.m"
{
#line 142 "calendar.m"
  {
#line 142 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 142 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 142 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 142 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 142 "calendar.m"
    return mercury__calendar__succeeded;
#line 142 "calendar.m"
  }
#line 142 "calendar.m"
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

#line 139 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____hours_0_0(
#line 139 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 139 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 139 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 139 "calendar.m"
{
#line 139 "calendar.m"
  {
#line 139 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 139 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 139 "calendar.m"
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
#line 139 "calendar.m"
  }
#line 139 "calendar.m"
}

#line 139 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0(
#line 139 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 139 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 139 "calendar.m"
{
#line 139 "calendar.m"
  {
#line 139 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 139 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 139 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 139 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 139 "calendar.m"
    return mercury__calendar__succeeded;
#line 139 "calendar.m"
  }
#line 139 "calendar.m"
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

#line 367 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____duration_0_0(
#line 367 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 367 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 367 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 367 "calendar.m"
{
#line 367 "calendar.m"
  {
#line 367 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 367 "calendar.m"
    MR_Integer mercury__calendar__CastX_15 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 367 "calendar.m"
    MR_Integer mercury__calendar__CastY_16 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 367 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_15 == mercury__calendar__CastY_16);
#line 367 "calendar.m"
    if (mercury__calendar__succeeded)
#line 4604 "calendar.c"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 367 "calendar.m"
    else
#line 367 "calendar.m"
      {
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 0)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 1)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 2)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 3)));
#line 367 "calendar.m"
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
#line 4651 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_12_12 == (MR_Integer) 0);
#line 367 "calendar.m"
        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 367 "calendar.m"
        if (mercury__calendar__succeeded)
#line 367 "calendar.m"
          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_12_12;
#line 367 "calendar.m"
        else
#line 367 "calendar.m"
          {
#line 367 "calendar.m"
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
#line 4688 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_13_13 == (MR_Integer) 0);
#line 367 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 367 "calendar.m"
            if (mercury__calendar__succeeded)
#line 367 "calendar.m"
              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_13_13;
#line 367 "calendar.m"
            else
#line 367 "calendar.m"
              {
#line 367 "calendar.m"
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
#line 4725 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_14_14 == (MR_Integer) 0);
#line 367 "calendar.m"
                mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 367 "calendar.m"
                if (mercury__calendar__succeeded)
#line 367 "calendar.m"
                  *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_14_14;
#line 367 "calendar.m"
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
#line 367 "calendar.m"
              }
#line 367 "calendar.m"
          }
#line 367 "calendar.m"
      }
#line 367 "calendar.m"
  }
#line 367 "calendar.m"
}

#line 367 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0(
#line 367 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 367 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 367 "calendar.m"
{
#line 367 "calendar.m"
  {
#line 367 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 367 "calendar.m"
    MR_Integer mercury__calendar__CastX_11 = (MR_Integer) mercury__calendar__HeadVar__1_1;
#line 367 "calendar.m"
    MR_Integer mercury__calendar__CastY_12 = (MR_Integer) mercury__calendar__HeadVar__2_2;

#line 367 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_11 == mercury__calendar__CastY_12);
#line 367 "calendar.m"
    if (mercury__calendar__succeeded)
#line 367 "calendar.m"
      mercury__calendar__succeeded = MR_TRUE;
#line 367 "calendar.m"
    else
#line 367 "calendar.m"
      {
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 367 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));

#line 4817 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_3_3 == mercury__calendar__V_7_7);
#line 367 "calendar.m"
        if (mercury__calendar__succeeded)
#line 367 "calendar.m"
          {
#line 4823 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_4_4 == mercury__calendar__V_8_8);
#line 367 "calendar.m"
            if (mercury__calendar__succeeded)
#line 367 "calendar.m"
              {
#line 4829 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_5_5 == mercury__calendar__V_9_9);
#line 367 "calendar.m"
                if (mercury__calendar__succeeded)
#line 4833 "calendar.c"
                  mercury__calendar__succeeded = (mercury__calendar__V_6_6 == mercury__calendar__V_10_10);
#line 367 "calendar.m"
              }
#line 367 "calendar.m"
          }
#line 367 "calendar.m"
      }
#line 367 "calendar.m"
    return mercury__calendar__succeeded;
#line 367 "calendar.m"
  }
#line 367 "calendar.m"
}

#line 138 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____days_0_0(
#line 138 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 138 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2,
#line 138 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__3_3)
#line 138 "calendar.m"
{
#line 138 "calendar.m"
  {
#line 138 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 138 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
#line 138 "calendar.m"
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
#line 138 "calendar.m"
  }
#line 138 "calendar.m"
}

#line 138 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0(
#line 138 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__1_1,
#line 138 "calendar.m"
  MR_Integer mercury__calendar__HeadVar__2_2)
#line 138 "calendar.m"
{
#line 138 "calendar.m"
  {
#line 138 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 138 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
#line 138 "calendar.m"
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

#line 138 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
#line 138 "calendar.m"
    return mercury__calendar__succeeded;
#line 138 "calendar.m"
  }
#line 138 "calendar.m"
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
#line 4978 "calendar.c"
  {
#line 4980 "calendar.c"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

#line 4983 "calendar.c"
    return mercury__calendar__succeeded;
#line 4985 "calendar.c"
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

#line 356 "calendar.m"
void MR_CALL 
mercury__calendar____Compare____date_0_0(
#line 356 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__1_1,
#line 356 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 356 "calendar.m"
  MR_Word mercury__calendar__HeadVar__3_3)
#line 356 "calendar.m"
{
#line 356 "calendar.m"
  {
#line 356 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 356 "calendar.m"
    MR_Integer mercury__calendar__CastX_24 = (MR_Integer) mercury__calendar__HeadVar__2_2;
#line 356 "calendar.m"
    MR_Integer mercury__calendar__CastY_25 = (MR_Integer) mercury__calendar__HeadVar__3_3;

#line 356 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_24 == mercury__calendar__CastY_25);
#line 356 "calendar.m"
    if (mercury__calendar__succeeded)
#line 5088 "calendar.c"
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "calendar.m"
    else
#line 356 "calendar.m"
      {
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 4)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 5)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 6)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 0)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 1)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 2)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 3)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 4)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 5)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 6)));
#line 356 "calendar.m"
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
#line 5147 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_18_18 == (MR_Integer) 0);
#line 356 "calendar.m"
        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 356 "calendar.m"
        if (mercury__calendar__succeeded)
#line 356 "calendar.m"
          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_18_18;
#line 356 "calendar.m"
        else
#line 356 "calendar.m"
          {
#line 356 "calendar.m"
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
#line 5184 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_19_19 == (MR_Integer) 0);
#line 356 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 356 "calendar.m"
            if (mercury__calendar__succeeded)
#line 356 "calendar.m"
              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_19_19;
#line 356 "calendar.m"
            else
#line 356 "calendar.m"
              {
#line 356 "calendar.m"
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
#line 5221 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_20_20 == (MR_Integer) 0);
#line 356 "calendar.m"
                mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 356 "calendar.m"
                if (mercury__calendar__succeeded)
#line 356 "calendar.m"
                  *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_20_20;
#line 356 "calendar.m"
                else
#line 356 "calendar.m"
                  {
#line 356 "calendar.m"
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
#line 5258 "calendar.c"
                    mercury__calendar__succeeded = (mercury__calendar__V_21_21 == (MR_Integer) 0);
#line 356 "calendar.m"
                    mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 356 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 356 "calendar.m"
                      *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_21_21;
#line 356 "calendar.m"
                    else
#line 356 "calendar.m"
                      {
#line 356 "calendar.m"
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
#line 5295 "calendar.c"
                        mercury__calendar__succeeded = (mercury__calendar__V_22_22 == (MR_Integer) 0);
#line 356 "calendar.m"
                        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 356 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 356 "calendar.m"
                          *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_22_22;
#line 356 "calendar.m"
                        else
#line 356 "calendar.m"
                          {
#line 356 "calendar.m"
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
#line 5332 "calendar.c"
                            mercury__calendar__succeeded = (mercury__calendar__V_23_23 == (MR_Integer) 0);
#line 356 "calendar.m"
                            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 356 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 356 "calendar.m"
                              *mercury__calendar__HeadVar__1_1 = mercury__calendar__V_23_23;
#line 356 "calendar.m"
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
#line 356 "calendar.m"
                          }
#line 356 "calendar.m"
                      }
#line 356 "calendar.m"
                  }
#line 356 "calendar.m"
              }
#line 356 "calendar.m"
          }
#line 356 "calendar.m"
      }
#line 356 "calendar.m"
  }
#line 356 "calendar.m"
}

#line 356 "calendar.m"
MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0(
#line 356 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 356 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2)
#line 356 "calendar.m"
{
#line 356 "calendar.m"
  {
#line 356 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 356 "calendar.m"
    MR_Integer mercury__calendar__CastX_17 = (MR_Integer) mercury__calendar__HeadVar__1_1;
#line 356 "calendar.m"
    MR_Integer mercury__calendar__CastY_18 = (MR_Integer) mercury__calendar__HeadVar__2_2;

#line 356 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__CastX_17 == mercury__calendar__CastY_18);
#line 356 "calendar.m"
    if (mercury__calendar__succeeded)
#line 356 "calendar.m"
      mercury__calendar__succeeded = MR_TRUE;
#line 356 "calendar.m"
    else
#line 356 "calendar.m"
      {
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 4)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 5)));
#line 356 "calendar.m"
        MR_Integer mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 6)));

#line 5442 "calendar.c"
        mercury__calendar__succeeded = (mercury__calendar__V_3_3 == mercury__calendar__V_10_10);
#line 356 "calendar.m"
        if (mercury__calendar__succeeded)
#line 356 "calendar.m"
          {
#line 5448 "calendar.c"
            mercury__calendar__succeeded = (mercury__calendar__V_4_4 == mercury__calendar__V_11_11);
#line 356 "calendar.m"
            if (mercury__calendar__succeeded)
#line 356 "calendar.m"
              {
#line 5454 "calendar.c"
                mercury__calendar__succeeded = (mercury__calendar__V_5_5 == mercury__calendar__V_12_12);
#line 356 "calendar.m"
                if (mercury__calendar__succeeded)
#line 356 "calendar.m"
                  {
#line 5460 "calendar.c"
                    mercury__calendar__succeeded = (mercury__calendar__V_6_6 == mercury__calendar__V_13_13);
#line 356 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 356 "calendar.m"
                      {
#line 5466 "calendar.c"
                        mercury__calendar__succeeded = (mercury__calendar__V_7_7 == mercury__calendar__V_14_14);
#line 356 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 356 "calendar.m"
                          {
#line 5472 "calendar.c"
                            mercury__calendar__succeeded = (mercury__calendar__V_8_8 == mercury__calendar__V_15_15);
#line 356 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 5476 "calendar.c"
                              mercury__calendar__succeeded = (mercury__calendar__V_9_9 == mercury__calendar__V_16_16);
#line 356 "calendar.m"
                          }
#line 356 "calendar.m"
                      }
#line 356 "calendar.m"
                  }
#line 356 "calendar.m"
              }
#line 356 "calendar.m"
          }
#line 356 "calendar.m"
      }
#line 356 "calendar.m"
    return mercury__calendar__succeeded;
#line 356 "calendar.m"
  }
#line 356 "calendar.m"
}

#line 1095 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_month_1_f_0(
#line 1095 "calendar.m"
  MR_Integer mercury__calendar__N_3)
#line 1095 "calendar.m"
{
#line 1100 "calendar.m"
  {
#line 1100 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1100 "calendar.m"
    MR_Word mercury__calendar__Month_4;
#line 1100 "calendar.m"
    MR_Word mercury__calendar__Month0_5;

#line 1112 "calendar.m"
    if ((mercury__calendar__N_3 == (MR_Integer) 1))
#line 1112 "calendar.m"
      {
#line 1112 "calendar.m"
        mercury__calendar__Month0_5 = (MR_Integer) 0;
#line 1112 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1112 "calendar.m"
      }
#line 1112 "calendar.m"
    else
#line 1112 "calendar.m"
      if ((mercury__calendar__N_3 == (MR_Integer) 2))
#line 1113 "calendar.m"
        {
#line 1113 "calendar.m"
          mercury__calendar__Month0_5 = (MR_Integer) 1;
#line 1113 "calendar.m"
          mercury__calendar__succeeded = MR_TRUE;
#line 1113 "calendar.m"
        }
#line 1112 "calendar.m"
      else
#line 1112 "calendar.m"
        if ((mercury__calendar__N_3 == (MR_Integer) 3))
#line 1114 "calendar.m"
          {
#line 1114 "calendar.m"
            mercury__calendar__Month0_5 = (MR_Integer) 2;
#line 1114 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1114 "calendar.m"
          }
#line 1112 "calendar.m"
        else
#line 1112 "calendar.m"
          if ((mercury__calendar__N_3 == (MR_Integer) 4))
#line 1115 "calendar.m"
            {
#line 1115 "calendar.m"
              mercury__calendar__Month0_5 = (MR_Integer) 3;
#line 1115 "calendar.m"
              mercury__calendar__succeeded = MR_TRUE;
#line 1115 "calendar.m"
            }
#line 1112 "calendar.m"
          else
#line 1112 "calendar.m"
            if ((mercury__calendar__N_3 == (MR_Integer) 5))
#line 1116 "calendar.m"
              {
#line 1116 "calendar.m"
                mercury__calendar__Month0_5 = (MR_Integer) 4;
#line 1116 "calendar.m"
                mercury__calendar__succeeded = MR_TRUE;
#line 1116 "calendar.m"
              }
#line 1112 "calendar.m"
            else
#line 1112 "calendar.m"
              if ((mercury__calendar__N_3 == (MR_Integer) 6))
#line 1117 "calendar.m"
                {
#line 1117 "calendar.m"
                  mercury__calendar__Month0_5 = (MR_Integer) 5;
#line 1117 "calendar.m"
                  mercury__calendar__succeeded = MR_TRUE;
#line 1117 "calendar.m"
                }
#line 1112 "calendar.m"
              else
#line 1112 "calendar.m"
                if ((mercury__calendar__N_3 == (MR_Integer) 7))
#line 1118 "calendar.m"
                  {
#line 1118 "calendar.m"
                    mercury__calendar__Month0_5 = (MR_Integer) 6;
#line 1118 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 1118 "calendar.m"
                  }
#line 1112 "calendar.m"
                else
#line 1112 "calendar.m"
                  if ((mercury__calendar__N_3 == (MR_Integer) 8))
#line 1119 "calendar.m"
                    {
#line 1119 "calendar.m"
                      mercury__calendar__Month0_5 = (MR_Integer) 7;
#line 1119 "calendar.m"
                      mercury__calendar__succeeded = MR_TRUE;
#line 1119 "calendar.m"
                    }
#line 1112 "calendar.m"
                  else
#line 1112 "calendar.m"
                    if ((mercury__calendar__N_3 == (MR_Integer) 9))
#line 1120 "calendar.m"
                      {
#line 1120 "calendar.m"
                        mercury__calendar__Month0_5 = (MR_Integer) 8;
#line 1120 "calendar.m"
                        mercury__calendar__succeeded = MR_TRUE;
#line 1120 "calendar.m"
                      }
#line 1112 "calendar.m"
                    else
#line 1112 "calendar.m"
                      if ((mercury__calendar__N_3 == (MR_Integer) 10))
#line 1121 "calendar.m"
                        {
#line 1121 "calendar.m"
                          mercury__calendar__Month0_5 = (MR_Integer) 9;
#line 1121 "calendar.m"
                          mercury__calendar__succeeded = MR_TRUE;
#line 1121 "calendar.m"
                        }
#line 1112 "calendar.m"
                      else
#line 1112 "calendar.m"
                        if ((mercury__calendar__N_3 == (MR_Integer) 11))
#line 1122 "calendar.m"
                          {
#line 1122 "calendar.m"
                            mercury__calendar__Month0_5 = (MR_Integer) 10;
#line 1122 "calendar.m"
                            mercury__calendar__succeeded = MR_TRUE;
#line 1122 "calendar.m"
                          }
#line 1112 "calendar.m"
                        else
#line 1112 "calendar.m"
                          if ((mercury__calendar__N_3 == (MR_Integer) 12))
#line 1123 "calendar.m"
                            {
#line 1123 "calendar.m"
                              mercury__calendar__Month0_5 = (MR_Integer) 11;
#line 1123 "calendar.m"
                              mercury__calendar__succeeded = MR_TRUE;
#line 1123 "calendar.m"
                            }
#line 1112 "calendar.m"
                          else
#line 1112 "calendar.m"
                            mercury__calendar__succeeded = MR_FALSE;
#line 1100 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1099 "calendar.m"
      mercury__calendar__Month_4 = mercury__calendar__Month0_5;
#line 1100 "calendar.m"
    else
#line 1101 "calendar.m"
      {
#line 1101 "calendar.m"
        MR_String mercury__calendar__V_6_6;
#line 1101 "calendar.m"
        MR_String mercury__calendar__V_8_8;

#line 292 "string.opt"
        {
#line 292 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__N_3, (MR_Integer) 10, &mercury__calendar__V_8_8);
        }
#line 255 "string.opt"
        {
#line 255 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_month: invalid month: ", mercury__calendar__V_8_8, &mercury__calendar__V_6_6);
        }
#line 1101 "calendar.m"
        {
#line 1101 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 1101 "calendar.m"
      }
#line 1100 "calendar.m"
    return mercury__calendar__Month_4;
#line 1100 "calendar.m"
  }
#line 1095 "calendar.m"
}

#line 1070 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__tm_to_date_1_f_0(
#line 1070 "calendar.m"
  MR_Word mercury__calendar__TM_3)
#line 1070 "calendar.m"
{
#line 1072 "calendar.m"
  {
#line 1072 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1072 "calendar.m"
    MR_Word mercury__calendar__Date_4;
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__TMYear_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 0)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 1)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__Year_14 = ((MR_Integer) 1900 + mercury__calendar__TMYear_5);
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__Month_15 = (mercury__calendar__TMMonth_6 + (MR_Integer) 1);
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__Day_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 2)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__Hour_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 3)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__Minute_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 4)));
#line 1072 "calendar.m"
    MR_Integer mercury__calendar__Second_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 5)));
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 6)));
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 7)));
#line 1073 "calendar.m"
    MR_Word mercury__calendar__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 8)));

#line 1080 "calendar.m"
    {
#line 1080 "calendar.m"
      mercury__calendar__Date_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 0) = ((MR_Box) (mercury__calendar__Year_14));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 1) = ((MR_Box) (mercury__calendar__Month_15));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 2) = ((MR_Box) (mercury__calendar__Day_16));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 3) = ((MR_Box) (mercury__calendar__Hour_17));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 4) = ((MR_Box) (mercury__calendar__Minute_18));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 5) = ((MR_Box) (mercury__calendar__Second_19));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1080 "calendar.m"
    }
#line 1072 "calendar.m"
    return mercury__calendar__Date_4;
#line 1072 "calendar.m"
  }
#line 1070 "calendar.m"
}

#line 1007 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_day_of_week_from_mod_1_f_0(
#line 1007 "calendar.m"
  MR_Integer mercury__calendar__Mod_3)
#line 1007 "calendar.m"
{
#line 1012 "calendar.m"
  {
#line 1012 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1012 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek_4;
#line 1012 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek0_5;

#line 1142 "calendar.m"
    if ((mercury__calendar__Mod_3 == (MR_Integer) 0))
#line 1142 "calendar.m"
      {
#line 1142 "calendar.m"
        mercury__calendar__DayOfWeek0_5 = (MR_Integer) 0;
#line 1142 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 1142 "calendar.m"
      }
#line 1142 "calendar.m"
    else
#line 1142 "calendar.m"
      if ((mercury__calendar__Mod_3 == (MR_Integer) 1))
#line 1143 "calendar.m"
        {
#line 1143 "calendar.m"
          mercury__calendar__DayOfWeek0_5 = (MR_Integer) 1;
#line 1143 "calendar.m"
          mercury__calendar__succeeded = MR_TRUE;
#line 1143 "calendar.m"
        }
#line 1142 "calendar.m"
      else
#line 1142 "calendar.m"
        if ((mercury__calendar__Mod_3 == (MR_Integer) 2))
#line 1144 "calendar.m"
          {
#line 1144 "calendar.m"
            mercury__calendar__DayOfWeek0_5 = (MR_Integer) 2;
#line 1144 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1144 "calendar.m"
          }
#line 1142 "calendar.m"
        else
#line 1142 "calendar.m"
          if ((mercury__calendar__Mod_3 == (MR_Integer) 3))
#line 1145 "calendar.m"
            {
#line 1145 "calendar.m"
              mercury__calendar__DayOfWeek0_5 = (MR_Integer) 3;
#line 1145 "calendar.m"
              mercury__calendar__succeeded = MR_TRUE;
#line 1145 "calendar.m"
            }
#line 1142 "calendar.m"
          else
#line 1142 "calendar.m"
            if ((mercury__calendar__Mod_3 == (MR_Integer) 4))
#line 1146 "calendar.m"
              {
#line 1146 "calendar.m"
                mercury__calendar__DayOfWeek0_5 = (MR_Integer) 4;
#line 1146 "calendar.m"
                mercury__calendar__succeeded = MR_TRUE;
#line 1146 "calendar.m"
              }
#line 1142 "calendar.m"
            else
#line 1142 "calendar.m"
              if ((mercury__calendar__Mod_3 == (MR_Integer) 5))
#line 1147 "calendar.m"
                {
#line 1147 "calendar.m"
                  mercury__calendar__DayOfWeek0_5 = (MR_Integer) 5;
#line 1147 "calendar.m"
                  mercury__calendar__succeeded = MR_TRUE;
#line 1147 "calendar.m"
                }
#line 1142 "calendar.m"
              else
#line 1142 "calendar.m"
                if ((mercury__calendar__Mod_3 == (MR_Integer) 6))
#line 1148 "calendar.m"
                  {
#line 1148 "calendar.m"
                    mercury__calendar__DayOfWeek0_5 = (MR_Integer) 6;
#line 1148 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 1148 "calendar.m"
                  }
#line 1142 "calendar.m"
                else
#line 1142 "calendar.m"
                  mercury__calendar__succeeded = MR_FALSE;
#line 1012 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1011 "calendar.m"
      mercury__calendar__DayOfWeek_4 = mercury__calendar__DayOfWeek0_5;
#line 1012 "calendar.m"
    else
#line 1013 "calendar.m"
      {
#line 1013 "calendar.m"
        MR_String mercury__calendar__V_6_6;
#line 1013 "calendar.m"
        MR_String mercury__calendar__V_8_8;

#line 292 "string.opt"
        {
#line 292 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Mod_3, (MR_Integer) 10, &mercury__calendar__V_8_8);
        }
#line 255 "string.opt"
        {
#line 255 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_day_of_week_from_mod: invalid mod: ", mercury__calendar__V_8_8, &mercury__calendar__V_6_6);
        }
#line 1013 "calendar.m"
        {
#line 1013 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 1013 "calendar.m"
      }
#line 1012 "calendar.m"
    return mercury__calendar__DayOfWeek_4;
#line 1012 "calendar.m"
  }
#line 1007 "calendar.m"
}

#line 976 "calendar.m"
static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
#line 976 "calendar.m"
  MR_Integer mercury__calendar__BorrowVal_6,
#line 976 "calendar.m"
  MR_Integer mercury__calendar__Val1_7,
#line 976 "calendar.m"
  MR_Integer mercury__calendar__Val2_8,
#line 976 "calendar.m"
  MR_Integer * mercury__calendar__Diff_9,
#line 976 "calendar.m"
  MR_Integer * mercury__calendar__Borrow_10)
#line 976 "calendar.m"
{
#line 983 "calendar.m"
  {
#line 983 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Val1_7 >= mercury__calendar__Val2_8);

#line 983 "calendar.m"
    if (mercury__calendar__succeeded)
#line 981 "calendar.m"
      {
#line 981 "calendar.m"
        *mercury__calendar__Borrow_10 = (MR_Integer) 0;
#line 982 "calendar.m"
        *mercury__calendar__Diff_9 = (mercury__calendar__Val1_7 - mercury__calendar__Val2_8);
#line 981 "calendar.m"
      }
#line 983 "calendar.m"
    else
#line 984 "calendar.m"
      {
#line 984 "calendar.m"
        MR_Integer mercury__calendar__V_11_11;

#line 984 "calendar.m"
        *mercury__calendar__Borrow_10 = (MR_Integer) 1;
#line 985 "calendar.m"
        mercury__calendar__V_11_11 = (mercury__calendar__BorrowVal_6 + mercury__calendar__Val1_7);
#line 985 "calendar.m"
        *mercury__calendar__Diff_9 = (mercury__calendar__V_11_11 - mercury__calendar__Val2_8);
#line 984 "calendar.m"
      }
#line 983 "calendar.m"
  }
#line 976 "calendar.m"
}

#line 920 "calendar.m"
static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
#line 920 "calendar.m"
  MR_Word mercury__calendar__OriginalOrder_5,
#line 920 "calendar.m"
  MR_Word mercury__calendar__DateA_6,
#line 920 "calendar.m"
  MR_Word mercury__calendar__DateB_7,
#line 920 "calendar.m"
  MR_Word * mercury__calendar__Duration_8)
#line 920 "calendar.m"
{
#line 925 "calendar.m"
  {
#line 925 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__MicroSecondA_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 925 "calendar.m"
    MR_Integer mercury__calendar__MicroSecondB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 925 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_12;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__SecondA_13;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__SecondB_14;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__Seconds_15;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__MinuteA_16;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__MinuteB_17;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__Minutes_18;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__HourA_19;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__HourB_20;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__Hours_21;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__DaysToBorrow_23;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__DayA_25;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__DayB_26;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__Days_28;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__MonthA_29;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__MonthB_30;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__Months_31;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__YearA_32;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__YearB_33;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__Years_34;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_35_35;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_36_36;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_37_37;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_39_39;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_40_40;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_42_42;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_43_43;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_45_45;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_63_63;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_64_64;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_66_66;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_67_67;
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 925 "calendar.m"
    MR_Integer mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 926 "calendar.m"
    MR_Integer mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 926 "calendar.m"
    MR_Integer mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 926 "calendar.m"
    MR_Integer mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 926 "calendar.m"
    MR_Integer mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 926 "calendar.m"
    MR_Integer mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 926 "calendar.m"
    MR_Integer mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 929 "calendar.m"
    MR_Integer mercury__calendar__V_81_81;
#line 929 "calendar.m"
    MR_Integer mercury__calendar__V_82_82;
#line 929 "calendar.m"
    MR_Integer mercury__calendar__V_83_83;
#line 929 "calendar.m"
    MR_Integer mercury__calendar__V_84_84;
#line 929 "calendar.m"
    MR_Integer mercury__calendar__V_85_85;
#line 929 "calendar.m"
    MR_Integer mercury__calendar__V_86_86;
#line 930 "calendar.m"
    MR_Integer mercury__calendar__V_87_87;
#line 930 "calendar.m"
    MR_Integer mercury__calendar__V_88_88;
#line 930 "calendar.m"
    MR_Integer mercury__calendar__V_89_89;
#line 930 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 930 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 930 "calendar.m"
    MR_Integer mercury__calendar__V_92_92;
#line 932 "calendar.m"
    MR_Integer mercury__calendar__V_93_93;
#line 932 "calendar.m"
    MR_Integer mercury__calendar__V_94_94;
#line 932 "calendar.m"
    MR_Integer mercury__calendar__V_95_95;
#line 932 "calendar.m"
    MR_Integer mercury__calendar__V_96_96;
#line 932 "calendar.m"
    MR_Integer mercury__calendar__V_97_97;
#line 932 "calendar.m"
    MR_Integer mercury__calendar__V_98_98;
#line 933 "calendar.m"
    MR_Integer mercury__calendar__V_99_99;
#line 933 "calendar.m"
    MR_Integer mercury__calendar__V_100_100;
#line 933 "calendar.m"
    MR_Integer mercury__calendar__V_101_101;
#line 933 "calendar.m"
    MR_Integer mercury__calendar__V_102_102;
#line 933 "calendar.m"
    MR_Integer mercury__calendar__V_103_103;
#line 933 "calendar.m"
    MR_Integer mercury__calendar__V_104_104;
#line 935 "calendar.m"
    MR_Integer mercury__calendar__V_105_105;
#line 935 "calendar.m"
    MR_Integer mercury__calendar__V_106_106;
#line 935 "calendar.m"
    MR_Integer mercury__calendar__V_107_107;
#line 935 "calendar.m"
    MR_Integer mercury__calendar__V_108_108;
#line 935 "calendar.m"
    MR_Integer mercury__calendar__V_109_109;
#line 935 "calendar.m"
    MR_Integer mercury__calendar__V_110_110;
#line 936 "calendar.m"
    MR_Integer mercury__calendar__V_111_111;
#line 936 "calendar.m"
    MR_Integer mercury__calendar__V_112_112;
#line 936 "calendar.m"
    MR_Integer mercury__calendar__V_113_113;
#line 936 "calendar.m"
    MR_Integer mercury__calendar__V_114_114;
#line 936 "calendar.m"
    MR_Integer mercury__calendar__V_115_115;
#line 936 "calendar.m"
    MR_Integer mercury__calendar__V_116_116;
#line 955 "calendar.m"
    MR_Integer mercury__calendar__V_189_189;
#line 955 "calendar.m"
    MR_Integer mercury__calendar__V_190_190;
#line 955 "calendar.m"
    MR_Integer mercury__calendar__V_191_191;
#line 955 "calendar.m"
    MR_Integer mercury__calendar__V_192_192;
#line 955 "calendar.m"
    MR_Integer mercury__calendar__V_193_193;
#line 955 "calendar.m"
    MR_Integer mercury__calendar__V_194_194;
#line 956 "calendar.m"
    MR_Integer mercury__calendar__V_195_195;
#line 956 "calendar.m"
    MR_Integer mercury__calendar__V_196_196;
#line 956 "calendar.m"
    MR_Integer mercury__calendar__V_197_197;
#line 956 "calendar.m"
    MR_Integer mercury__calendar__V_198_198;
#line 956 "calendar.m"
    MR_Integer mercury__calendar__V_199_199;
#line 956 "calendar.m"
    MR_Integer mercury__calendar__V_200_200;
#line 958 "calendar.m"
    MR_Integer mercury__calendar__V_201_201;
#line 958 "calendar.m"
    MR_Integer mercury__calendar__V_202_202;
#line 958 "calendar.m"
    MR_Integer mercury__calendar__V_203_203;
#line 958 "calendar.m"
    MR_Integer mercury__calendar__V_204_204;
#line 958 "calendar.m"
    MR_Integer mercury__calendar__V_205_205;
#line 958 "calendar.m"
    MR_Integer mercury__calendar__V_206_206;
#line 959 "calendar.m"
    MR_Integer mercury__calendar__V_207_207;
#line 959 "calendar.m"
    MR_Integer mercury__calendar__V_208_208;
#line 959 "calendar.m"
    MR_Integer mercury__calendar__V_209_209;
#line 959 "calendar.m"
    MR_Integer mercury__calendar__V_210_210;
#line 959 "calendar.m"
    MR_Integer mercury__calendar__V_211_211;
#line 959 "calendar.m"
    MR_Integer mercury__calendar__V_212_212;

#line 927 "calendar.m"
    {
#line 927 "calendar.m"
      mercury__calendar__V_35_35 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 927 "calendar.m"
    {
#line 927 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0(mercury__calendar__V_35_35, mercury__calendar__MicroSecondA_10, mercury__calendar__MicroSecondB_11, &mercury__calendar__MicroSeconds_12, &mercury__calendar__STATE_VARIABLE_Borrow_36_36);
    }
#line 929 "calendar.m"
    mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 929 "calendar.m"
    mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 929 "calendar.m"
    mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 929 "calendar.m"
    mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 929 "calendar.m"
    mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 929 "calendar.m"
    mercury__calendar__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 929 "calendar.m"
    mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 929 "calendar.m"
    mercury__calendar__SecondA_13 = (mercury__calendar__V_37_37 - mercury__calendar__STATE_VARIABLE_Borrow_36_36);
#line 930 "calendar.m"
    mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 930 "calendar.m"
    mercury__calendar__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 930 "calendar.m"
    mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 930 "calendar.m"
    mercury__calendar__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 930 "calendar.m"
    mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 930 "calendar.m"
    mercury__calendar__SecondB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 930 "calendar.m"
    mercury__calendar__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 931 "calendar.m"
    {
#line 931 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__SecondA_13, mercury__calendar__SecondB_14, &mercury__calendar__Seconds_15, &mercury__calendar__STATE_VARIABLE_Borrow_39_39);
    }
#line 932 "calendar.m"
    mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 932 "calendar.m"
    mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 932 "calendar.m"
    mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 932 "calendar.m"
    mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 932 "calendar.m"
    mercury__calendar__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 932 "calendar.m"
    mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 932 "calendar.m"
    mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 932 "calendar.m"
    mercury__calendar__MinuteA_16 = (mercury__calendar__V_40_40 - mercury__calendar__STATE_VARIABLE_Borrow_39_39);
#line 933 "calendar.m"
    mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 933 "calendar.m"
    mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 933 "calendar.m"
    mercury__calendar__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 933 "calendar.m"
    mercury__calendar__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 933 "calendar.m"
    mercury__calendar__MinuteB_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 933 "calendar.m"
    mercury__calendar__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 933 "calendar.m"
    mercury__calendar__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 934 "calendar.m"
    {
#line 934 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__MinuteA_16, mercury__calendar__MinuteB_17, &mercury__calendar__Minutes_18, &mercury__calendar__STATE_VARIABLE_Borrow_42_42);
    }
#line 935 "calendar.m"
    mercury__calendar__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 935 "calendar.m"
    mercury__calendar__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 935 "calendar.m"
    mercury__calendar__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 935 "calendar.m"
    mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 935 "calendar.m"
    mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 935 "calendar.m"
    mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 935 "calendar.m"
    mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 935 "calendar.m"
    mercury__calendar__HourA_19 = (mercury__calendar__V_43_43 - mercury__calendar__STATE_VARIABLE_Borrow_42_42);
#line 936 "calendar.m"
    mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 936 "calendar.m"
    mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 936 "calendar.m"
    mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 936 "calendar.m"
    mercury__calendar__HourB_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 936 "calendar.m"
    mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 936 "calendar.m"
    mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 936 "calendar.m"
    mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 937 "calendar.m"
    {
#line 937 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, mercury__calendar__HourA_19, mercury__calendar__HourB_20, &mercury__calendar__Hours_21, &mercury__calendar__STATE_VARIABLE_Borrow_45_45);
    }
#line 946 "calendar.m"
    if ((mercury__calendar__OriginalOrder_5 == (MR_Integer) 0))
#line 946 "calendar.m"
      {
#line 946 "calendar.m"
        MR_Integer mercury__calendar__DateBEndOfMonth_27;
#line 946 "calendar.m"
        MR_Integer mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 946 "calendar.m"
        MR_Integer mercury__calendar__V_48_48;
#line 946 "calendar.m"
        MR_Integer mercury__calendar__V_50_50;
#line 946 "calendar.m"
        MR_Integer mercury__calendar__V_51_51;
#line 946 "calendar.m"
        MR_Integer mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 946 "calendar.m"
        MR_Integer mercury__calendar__V_165_165;
#line 947 "calendar.m"
        MR_Integer mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 947 "calendar.m"
        MR_Integer mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 947 "calendar.m"
        MR_Integer mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 947 "calendar.m"
        MR_Integer mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 947 "calendar.m"
        MR_Integer mercury__calendar__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_166_166;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_167_167;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_168_168;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_169_169;
#line 949 "calendar.m"
        MR_Integer mercury__calendar__V_170_170;
#line 951 "calendar.m"
        MR_Integer mercury__calendar__V_177_177;
#line 951 "calendar.m"
        MR_Integer mercury__calendar__V_178_178;
#line 951 "calendar.m"
        MR_Integer mercury__calendar__V_179_179;
#line 951 "calendar.m"
        MR_Integer mercury__calendar__V_180_180;
#line 951 "calendar.m"
        MR_Integer mercury__calendar__V_181_181;
#line 951 "calendar.m"
        MR_Integer mercury__calendar__V_182_182;
#line 952 "calendar.m"
        MR_Integer mercury__calendar__V_183_183;
#line 952 "calendar.m"
        MR_Integer mercury__calendar__V_184_184;
#line 952 "calendar.m"
        MR_Integer mercury__calendar__V_185_185;
#line 952 "calendar.m"
        MR_Integer mercury__calendar__V_186_186;
#line 952 "calendar.m"
        MR_Integer mercury__calendar__V_187_187;
#line 952 "calendar.m"
        MR_Integer mercury__calendar__V_188_188;

#line 947 "calendar.m"
        {
#line 947 "calendar.m"
          mercury__calendar__DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_46_46, mercury__calendar__V_153_153);
        }
#line 949 "calendar.m"
        mercury__calendar__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 949 "calendar.m"
        mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 949 "calendar.m"
        mercury__calendar__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 949 "calendar.m"
        mercury__calendar__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 949 "calendar.m"
        mercury__calendar__V_168_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 949 "calendar.m"
        mercury__calendar__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 949 "calendar.m"
        mercury__calendar__V_170_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 949 "calendar.m"
        {
#line 949 "calendar.m"
          mercury__calendar__DateBEndOfMonth_27 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_48_48, mercury__calendar__V_165_165);
        }
#line 951 "calendar.m"
        mercury__calendar__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 951 "calendar.m"
        mercury__calendar__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 951 "calendar.m"
        mercury__calendar__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 951 "calendar.m"
        mercury__calendar__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 951 "calendar.m"
        mercury__calendar__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 951 "calendar.m"
        mercury__calendar__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 951 "calendar.m"
        mercury__calendar__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 951 "calendar.m"
        mercury__calendar__V_50_50 = (mercury__calendar__V_51_51 - mercury__calendar__STATE_VARIABLE_Borrow_45_45);
#line 951 "calendar.m"
        {
#line 951 "calendar.m"
          mercury__calendar__DayA_25 = mercury__int__min_2_f_0(mercury__calendar__V_50_50, mercury__calendar__DateBEndOfMonth_27);
        }
#line 952 "calendar.m"
        mercury__calendar__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 952 "calendar.m"
        mercury__calendar__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 952 "calendar.m"
        mercury__calendar__DayB_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 952 "calendar.m"
        mercury__calendar__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 952 "calendar.m"
        mercury__calendar__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 952 "calendar.m"
        mercury__calendar__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 952 "calendar.m"
        mercury__calendar__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 946 "calendar.m"
      }
#line 946 "calendar.m"
    else
#line 938 "calendar.m"
      {
#line 938 "calendar.m"
        MR_Word mercury__calendar__DateAMinus1Month_22;
#line 938 "calendar.m"
        MR_Integer mercury__calendar__DateAEndOfMonth_24;
#line 938 "calendar.m"
        MR_Word mercury__calendar__V_52_52 = (MR_Word) &mercury__calendar_scalar_common_3[2];
#line 938 "calendar.m"
        MR_Integer mercury__calendar__V_57_57;
#line 938 "calendar.m"
        MR_Integer mercury__calendar__V_59_59;
#line 938 "calendar.m"
        MR_Integer mercury__calendar__V_61_61;
#line 938 "calendar.m"
        MR_Integer mercury__calendar__V_62_62;
#line 938 "calendar.m"
        MR_Integer mercury__calendar__V_117_117;
#line 938 "calendar.m"
        MR_Integer mercury__calendar__V_129_129;
#line 940 "calendar.m"
        MR_Integer mercury__calendar__V_118_118;
#line 940 "calendar.m"
        MR_Integer mercury__calendar__V_119_119;
#line 940 "calendar.m"
        MR_Integer mercury__calendar__V_120_120;
#line 940 "calendar.m"
        MR_Integer mercury__calendar__V_121_121;
#line 940 "calendar.m"
        MR_Integer mercury__calendar__V_122_122;
#line 942 "calendar.m"
        MR_Integer mercury__calendar__V_130_130;
#line 942 "calendar.m"
        MR_Integer mercury__calendar__V_131_131;
#line 942 "calendar.m"
        MR_Integer mercury__calendar__V_132_132;
#line 942 "calendar.m"
        MR_Integer mercury__calendar__V_133_133;
#line 942 "calendar.m"
        MR_Integer mercury__calendar__V_134_134;
#line 944 "calendar.m"
        MR_Integer mercury__calendar__V_141_141;
#line 944 "calendar.m"
        MR_Integer mercury__calendar__V_142_142;
#line 944 "calendar.m"
        MR_Integer mercury__calendar__V_143_143;
#line 944 "calendar.m"
        MR_Integer mercury__calendar__V_144_144;
#line 944 "calendar.m"
        MR_Integer mercury__calendar__V_145_145;
#line 944 "calendar.m"
        MR_Integer mercury__calendar__V_146_146;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_147_147;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_148_148;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_149_149;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_150_150;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_151_151;
#line 945 "calendar.m"
        MR_Integer mercury__calendar__V_152_152;

#line 939 "calendar.m"
        {
#line 939 "calendar.m"
          mercury__calendar__add_duration_3_p_0(mercury__calendar__V_52_52, mercury__calendar__DateA_6, &mercury__calendar__DateAMinus1Month_22);
        }
#line 940 "calendar.m"
        mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 0)));
#line 940 "calendar.m"
        mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 1)));
#line 940 "calendar.m"
        mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 2)));
#line 940 "calendar.m"
        mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 3)));
#line 940 "calendar.m"
        mercury__calendar__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 4)));
#line 940 "calendar.m"
        mercury__calendar__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 5)));
#line 940 "calendar.m"
        mercury__calendar__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 6)));
#line 940 "calendar.m"
        {
#line 940 "calendar.m"
          mercury__calendar__DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_57_57, mercury__calendar__V_117_117);
        }
#line 942 "calendar.m"
        mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 942 "calendar.m"
        mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 942 "calendar.m"
        mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 942 "calendar.m"
        mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 942 "calendar.m"
        mercury__calendar__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 942 "calendar.m"
        mercury__calendar__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 942 "calendar.m"
        mercury__calendar__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 942 "calendar.m"
        {
#line 942 "calendar.m"
          mercury__calendar__DateAEndOfMonth_24 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_59_59, mercury__calendar__V_129_129);
        }
#line 944 "calendar.m"
        mercury__calendar__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 944 "calendar.m"
        mercury__calendar__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 944 "calendar.m"
        mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 944 "calendar.m"
        mercury__calendar__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 944 "calendar.m"
        mercury__calendar__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 944 "calendar.m"
        mercury__calendar__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 944 "calendar.m"
        mercury__calendar__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 944 "calendar.m"
        mercury__calendar__DayA_25 = (mercury__calendar__V_61_61 - mercury__calendar__STATE_VARIABLE_Borrow_45_45);
#line 945 "calendar.m"
        mercury__calendar__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 945 "calendar.m"
        mercury__calendar__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 945 "calendar.m"
        mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 945 "calendar.m"
        mercury__calendar__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 945 "calendar.m"
        mercury__calendar__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 945 "calendar.m"
        mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 945 "calendar.m"
        mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 945 "calendar.m"
        {
#line 945 "calendar.m"
          mercury__calendar__DayB_26 = mercury__int__min_2_f_0(mercury__calendar__V_62_62, mercury__calendar__DateAEndOfMonth_24);
        }
#line 938 "calendar.m"
      }
#line 954 "calendar.m"
    {
#line 954 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0(mercury__calendar__DaysToBorrow_23, mercury__calendar__DayA_25, mercury__calendar__DayB_26, &mercury__calendar__Days_28, &mercury__calendar__STATE_VARIABLE_Borrow_63_63);
    }
#line 955 "calendar.m"
    mercury__calendar__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 955 "calendar.m"
    mercury__calendar__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 955 "calendar.m"
    mercury__calendar__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 955 "calendar.m"
    mercury__calendar__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 955 "calendar.m"
    mercury__calendar__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 955 "calendar.m"
    mercury__calendar__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 955 "calendar.m"
    mercury__calendar__V_194_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 955 "calendar.m"
    mercury__calendar__MonthA_29 = (mercury__calendar__V_64_64 - mercury__calendar__STATE_VARIABLE_Borrow_63_63);
#line 956 "calendar.m"
    mercury__calendar__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 956 "calendar.m"
    mercury__calendar__MonthB_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 956 "calendar.m"
    mercury__calendar__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 956 "calendar.m"
    mercury__calendar__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 956 "calendar.m"
    mercury__calendar__V_198_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 956 "calendar.m"
    mercury__calendar__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 956 "calendar.m"
    mercury__calendar__V_200_200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 957 "calendar.m"
    {
#line 957 "calendar.m"
      mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 12, mercury__calendar__MonthA_29, mercury__calendar__MonthB_30, &mercury__calendar__Months_31, &mercury__calendar__STATE_VARIABLE_Borrow_66_66);
    }
#line 958 "calendar.m"
    mercury__calendar__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
#line 958 "calendar.m"
    mercury__calendar__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
#line 958 "calendar.m"
    mercury__calendar__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
#line 958 "calendar.m"
    mercury__calendar__V_203_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
#line 958 "calendar.m"
    mercury__calendar__V_204_204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
#line 958 "calendar.m"
    mercury__calendar__V_205_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
#line 958 "calendar.m"
    mercury__calendar__V_206_206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
#line 958 "calendar.m"
    mercury__calendar__YearA_32 = (mercury__calendar__V_67_67 - mercury__calendar__STATE_VARIABLE_Borrow_66_66);
#line 959 "calendar.m"
    mercury__calendar__YearB_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
#line 959 "calendar.m"
    mercury__calendar__V_207_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
#line 959 "calendar.m"
    mercury__calendar__V_208_208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
#line 959 "calendar.m"
    mercury__calendar__V_209_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
#line 959 "calendar.m"
    mercury__calendar__V_210_210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
#line 959 "calendar.m"
    mercury__calendar__V_211_211 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
#line 959 "calendar.m"
    mercury__calendar__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
#line 960 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__YearA_32 >= mercury__calendar__YearB_33);
#line 962 "calendar.m"
    if (mercury__calendar__succeeded)
#line 961 "calendar.m"
      mercury__calendar__Years_34 = (mercury__calendar__YearA_32 - mercury__calendar__YearB_33);
#line 962 "calendar.m"
    else
#line 965 "calendar.m"
      {
#line 965 "calendar.m"
        {
#line 965 "calendar.m"
          mercury__require__error_1_p_0((MR_String) "greedy_subtract_descending: left over years");
#line 965 "calendar.m"
          return;
        }
#line 965 "calendar.m"
      }
#line 967 "calendar.m"
    {
#line 967 "calendar.m"
      *mercury__calendar__Duration_8 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Years_34, mercury__calendar__Months_31, mercury__calendar__Days_28, mercury__calendar__Hours_21, mercury__calendar__Minutes_18, mercury__calendar__Seconds_15, mercury__calendar__MicroSeconds_12);
    }
#line 925 "calendar.m"
  }
#line 920 "calendar.m"
}

#line 765 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
#line 765 "calendar.m"
  MR_Integer mercury__calendar__YearValue_4,
#line 765 "calendar.m"
  MR_Integer mercury__calendar__MonthValue_5)
#line 765 "calendar.m"
{
#line 767 "calendar.m"
  {
#line 767 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 767 "calendar.m"
    MR_Integer mercury__calendar__Max_6;
#line 767 "calendar.m"
    MR_Integer mercury__calendar__M_7;
#line 767 "calendar.m"
    MR_Integer mercury__calendar__Y_8;
#line 767 "calendar.m"
    MR_Integer mercury__calendar__V_10_10;
#line 767 "calendar.m"
    MR_Integer mercury__calendar__V_11_11 = (mercury__calendar__MonthValue_5 - (MR_Integer) 1);
#line 767 "calendar.m"
    MR_Integer mercury__calendar__V_15_15;
#line 767 "calendar.m"
    MR_Integer mercury__calendar__V_16_16;
#line 767 "calendar.m"
    MR_Integer mercury__calendar__V_6_32;
#line 767 "calendar.m"
    MR_Integer mercury__calendar__V_7_33;
#line 787 "calendar.m"
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
#line 768 "calendar.m"
    mercury__calendar__M_7 = (mercury__calendar__V_10_10 + (MR_Integer) 1);
#line 769 "calendar.m"
    mercury__calendar__V_16_16 = (mercury__calendar__MonthValue_5 - (MR_Integer) 1);
#line 769 "calendar.m"
    {
#line 769 "calendar.m"
      mercury__calendar__V_15_15 = mercury__int__div_2_f_0(mercury__calendar__V_16_16, (MR_Integer) 12);
    }
#line 769 "calendar.m"
    mercury__calendar__Y_8 = (mercury__calendar__YearValue_4 + mercury__calendar__V_15_15);
#line 774 "calendar.m"
    if ((mercury__calendar__M_7 == (MR_Integer) 2))
#line 781 "calendar.m"
      {
#line 779 "calendar.m"
        {
#line 779 "calendar.m"
          MR_Integer mercury__calendar__V_23_23;
#line 779 "calendar.m"
          MR_Integer mercury__calendar__V_6_37;
#line 779 "calendar.m"
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
#line 779 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__V_23_23 == (MR_Integer) 0);
#line 779 "calendar.m"
        }
#line 779 "calendar.m"
        if (!(mercury__calendar__succeeded))
#line 779 "calendar.m"
          {
#line 779 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 779 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 779 "calendar.m"
            MR_Integer mercury__calendar__V_6_47;
#line 779 "calendar.m"
            MR_Integer mercury__calendar__V_7_48;
#line 779 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 779 "calendar.m"
            MR_Integer mercury__calendar__V_6_42;
#line 779 "calendar.m"
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
#line 779 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_19_19 == (MR_Integer) 0);
#line 779 "calendar.m"
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
#line 779 "calendar.m"
            if (mercury__calendar__succeeded)
#line 779 "calendar.m"
              {
#line 779 "calendar.m"
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
#line 779 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_21_21 == (MR_Integer) 0);
#line 779 "calendar.m"
              }
#line 779 "calendar.m"
          }
#line 781 "calendar.m"
        if (mercury__calendar__succeeded)
#line 780 "calendar.m"
          mercury__calendar__Max0_9 = (MR_Integer) 29;
#line 781 "calendar.m"
        else
#line 782 "calendar.m"
          mercury__calendar__Max0_9 = (MR_Integer) 28;
#line 781 "calendar.m"
        mercury__calendar__succeeded = MR_TRUE;
#line 781 "calendar.m"
      }
#line 774 "calendar.m"
    else
#line 774 "calendar.m"
      if ((((((((mercury__calendar__M_7 == (MR_Integer) 4)) || ((mercury__calendar__M_7 == (MR_Integer) 6)))) || ((mercury__calendar__M_7 == (MR_Integer) 9)))) || ((mercury__calendar__M_7 == (MR_Integer) 11))))
#line 776 "calendar.m"
        {
#line 776 "calendar.m"
          mercury__calendar__Max0_9 = (MR_Integer) 30;
#line 776 "calendar.m"
          mercury__calendar__succeeded = MR_TRUE;
#line 776 "calendar.m"
        }
#line 774 "calendar.m"
      else
#line 774 "calendar.m"
        if ((((((((((((((mercury__calendar__M_7 == (MR_Integer) 1)) || ((mercury__calendar__M_7 == (MR_Integer) 3)))) || ((mercury__calendar__M_7 == (MR_Integer) 5)))) || ((mercury__calendar__M_7 == (MR_Integer) 7)))) || ((mercury__calendar__M_7 == (MR_Integer) 8)))) || ((mercury__calendar__M_7 == (MR_Integer) 10)))) || ((mercury__calendar__M_7 == (MR_Integer) 12))))
#line 773 "calendar.m"
          {
#line 773 "calendar.m"
            mercury__calendar__Max0_9 = (MR_Integer) 31;
#line 773 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 773 "calendar.m"
          }
#line 774 "calendar.m"
        else
#line 774 "calendar.m"
          mercury__calendar__succeeded = MR_FALSE;
#line 787 "calendar.m"
    if (mercury__calendar__succeeded)
#line 786 "calendar.m"
      mercury__calendar__Max_6 = mercury__calendar__Max0_9;
#line 787 "calendar.m"
    else
#line 789 "calendar.m"
      {
#line 789 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 789 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_13_60;
#line 789 "calendar.m"
        MR_Word mercury__calendar__TypeClassInfo_for_op_table_69;
#line 789 "calendar.m"
        MR_String mercury__calendar__V_25_25;
#line 789 "calendar.m"
        MR_String mercury__calendar__V_27_27;
#line 789 "calendar.m"
        MR_Word mercury__calendar__V_10_57;
#line 789 "calendar.m"
        MR_Word mercury__calendar__RevStrings_9_58;
#line 789 "calendar.m"
        MR_Word mercury__calendar__V_11_59;
#line 789 "calendar.m"
        MR_Integer mercury__calendar__Priority_10_66;
#line 789 "calendar.m"
        MR_Integer mercury__calendar__V_13_67;
#line 6864 "calendar.c"
        MR_Box MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box);
#line 6866 "calendar.c"
        MR_Box mercury__calendar__conv1_V_13_67;

#line 32 "ops.opt"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 276 "string.opt"
        mercury__calendar__V_10_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6873 "calendar.c"
        mercury__calendar__TypeClassInfo_for_op_table_69 = (MR_Word) &mercury__calendar_scalar_common_1[0];
#line 6875 "calendar.c"
        mercury__calendar__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__calendar__TypeClassInfo_for_op_table_69, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6877 "calendar.c"
        {
#line 6879 "calendar.c"
          mercury__calendar__conv1_V_13_67 = mercury__calendar__func_0(((MR_Box) mercury__calendar__TypeClassInfo_for_op_table_69), ((MR_Box) ((MR_Integer) 0)));
        }
#line 6882 "calendar.c"
        mercury__calendar__V_13_67 = ((MR_Integer) mercury__calendar__conv1_V_13_67);
#line 1185 "string.opt"
        mercury__calendar__Priority_10_66 = (mercury__calendar__V_13_67 + (MR_Integer) 1);
#line 1188 "string.opt"
        {
#line 1188 "string.opt"
          mercury__string__value_to_revstrings_prio_6_p_1(mercury__calendar__TypeCtorInfo_28_28, (MR_Integer) 1, mercury__calendar__Priority_10_66, ((MR_Box) (mercury__calendar__M_7)), mercury__calendar__V_10_57, &mercury__calendar__RevStrings_9_58);
        }
#line 6891 "calendar.c"
        mercury__calendar__TypeCtorInfo_13_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__calendar__TypeCtorInfo_13_60, mercury__calendar__RevStrings_9_58, &mercury__calendar__V_11_59);
        }
#line 278 "string.opt"
        {
#line 278 "string.opt"
          mercury__calendar__V_27_27 = mercury__string__append_list_1_f_0(mercury__calendar__V_11_59);
        }
#line 255 "string.opt"
        {
#line 255 "string.opt"
          mercury__string__append_3_p_2((MR_String) "max_day_in_month_for: unexpected value for M: ", mercury__calendar__V_27_27, &mercury__calendar__V_25_25);
        }
#line 789 "calendar.m"
        {
#line 789 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_25_25);
        }
#line 789 "calendar.m"
      }
#line 767 "calendar.m"
    return mercury__calendar__Max_6;
#line 767 "calendar.m"
  }
#line 765 "calendar.m"
}

#line 761 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
#line 761 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 761 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 761 "calendar.m"
  MR_Integer mercury__calendar__High_7)
#line 761 "calendar.m"
{
#line 763 "calendar.m"
  {
#line 763 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 763 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__4_4;
#line 763 "calendar.m"
    MR_Integer mercury__calendar__V_8_8;
#line 763 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = (mercury__calendar__A_5 - mercury__calendar__Low_6);
#line 763 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = (mercury__calendar__High_7 - mercury__calendar__Low_6);
#line 763 "calendar.m"
    MR_Integer mercury__calendar__V_13_13;
#line 763 "calendar.m"
    MR_Integer mercury__calendar__V_14_14;

#line 759 "calendar.m"
    {
#line 759 "calendar.m"
      mercury__calendar__V_14_14 = mercury__int__div_2_f_0(mercury__calendar__V_9_9, mercury__calendar__V_10_10);
    }
#line 759 "calendar.m"
    mercury__calendar__V_13_13 = (mercury__calendar__V_14_14 * mercury__calendar__V_10_10);
#line 759 "calendar.m"
    mercury__calendar__V_8_8 = (mercury__calendar__V_9_9 - mercury__calendar__V_13_13);
#line 763 "calendar.m"
    mercury__calendar__HeadVar__4_4 = (mercury__calendar__V_8_8 + mercury__calendar__Low_6);
#line 763 "calendar.m"
    return mercury__calendar__HeadVar__4_4;
#line 763 "calendar.m"
  }
#line 761 "calendar.m"
}

#line 757 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
#line 757 "calendar.m"
  MR_Integer mercury__calendar__A_4,
#line 757 "calendar.m"
  MR_Integer mercury__calendar__B_5)
#line 757 "calendar.m"
{
#line 759 "calendar.m"
  {
#line 759 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 759 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__3_3;
#line 759 "calendar.m"
    MR_Integer mercury__calendar__V_6_6;
#line 759 "calendar.m"
    MR_Integer mercury__calendar__V_7_7;

#line 759 "calendar.m"
    {
#line 759 "calendar.m"
      mercury__calendar__V_7_7 = mercury__int__div_2_f_0(mercury__calendar__A_4, mercury__calendar__B_5);
    }
#line 759 "calendar.m"
    mercury__calendar__V_6_6 = (mercury__calendar__V_7_7 * mercury__calendar__B_5);
#line 759 "calendar.m"
    mercury__calendar__HeadVar__3_3 = (mercury__calendar__A_4 - mercury__calendar__V_6_6);
#line 759 "calendar.m"
    return mercury__calendar__HeadVar__3_3;
#line 759 "calendar.m"
  }
#line 757 "calendar.m"
}

#line 753 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
#line 753 "calendar.m"
  MR_Integer mercury__calendar__A_5,
#line 753 "calendar.m"
  MR_Integer mercury__calendar__Low_6,
#line 753 "calendar.m"
  MR_Integer mercury__calendar__High_7)
#line 753 "calendar.m"
{
#line 755 "calendar.m"
  {
#line 755 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 755 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__4_4;
#line 755 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = (mercury__calendar__A_5 - mercury__calendar__Low_6);
#line 755 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = (mercury__calendar__High_7 - mercury__calendar__Low_6);

#line 755 "calendar.m"
    {
#line 755 "calendar.m"
      return mercury__calendar__HeadVar__4_4 = mercury__int__div_2_f_0(mercury__calendar__V_8_8, mercury__calendar__V_9_9);
    }
#line 755 "calendar.m"
    return mercury__calendar__HeadVar__4_4;
#line 755 "calendar.m"
  }
#line 753 "calendar.m"
}

#line 736 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__test_dates_0_f_0(void)
#line 736 "calendar.m"
{
#line 738 "calendar.m"
  {
#line 738 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 738 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

#line 738 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 738 "calendar.m"
  }
#line 736 "calendar.m"
}

#line 709 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
#line 709 "calendar.m"
  MR_Integer mercury__calendar__Seconds_4,
#line 709 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds_5)
#line 709 "calendar.m"
{
#line 714 "calendar.m"
  {
#line 714 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Seconds_4 == (MR_Integer) 0);
#line 714 "calendar.m"
    MR_String mercury__calendar__Str_6;

#line 712 "calendar.m"
    if (mercury__calendar__succeeded)
#line 712 "calendar.m"
      mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_5 == (MR_Integer) 0);
#line 714 "calendar.m"
    if (mercury__calendar__succeeded)
#line 713 "calendar.m"
      mercury__calendar__Str_6 = (MR_String) "";
#line 714 "calendar.m"
    else
#line 715 "calendar.m"
      {
#line 715 "calendar.m"
        MR_String mercury__calendar__V_7_7;
#line 715 "calendar.m"
        MR_String mercury__calendar__V_8_8;
#line 715 "calendar.m"
        MR_String mercury__calendar__V_9_9;

#line 292 "string.opt"
        {
#line 292 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Seconds_4, (MR_Integer) 10, &mercury__calendar__V_7_7);
        }
#line 642 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_5 > (MR_Integer) 0);
#line 645 "calendar.m"
        if (mercury__calendar__succeeded)
#line 643 "calendar.m"
          {
#line 643 "calendar.m"
            MR_String mercury__calendar__V_23_23;
#line 643 "calendar.m"
            MR_Word mercury__calendar__V_25_25;
#line 643 "calendar.m"
            MR_Word mercury__calendar__V_26_26;
#line 643 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 643 "calendar.m"
            MR_Integer mercury__calendar__V_6_36;
#line 643 "calendar.m"
            MR_Integer mercury__calendar__V_7_37;
#line 643 "calendar.m"
            MR_Integer mercury__calendar__V_8_38;
#line 643 "calendar.m"
            MR_Integer mercury__calendar__End_6_44;
#line 643 "calendar.m"
            MR_Integer mercury__calendar__Index_7_45;
#line 767 "string.opt"
            MR_String mercury__calendar___RightString_7_54;

#line 644 "calendar.m"
            {
#line 644 "calendar.m"
              mercury__calendar__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_26_26, 0) = ((MR_Box) (mercury__calendar__MicroSeconds_5));
#line 644 "calendar.m"
            }
#line 644 "calendar.m"
            mercury__calendar__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "calendar.m"
            {
#line 644 "calendar.m"
              mercury__calendar__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_25_25, 0) = ((MR_Box) (mercury__calendar__V_26_26));
#line 644 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_25_25, 1) = ((MR_Box) (mercury__calendar__V_27_27));
#line 644 "calendar.m"
            }
#line 831 "string.opt"
            {
#line 831 "string.opt"
              mercury__string__format_3_p_0((MR_String) ".%06d", mercury__calendar__V_25_25, &mercury__calendar__V_23_23);
            }
#line 239 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_23_23 ;
		{
#line 239 "string.opt"

    Length = strlen(Str);

#line 7162 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_7_37  = Length;
#line 239 "string.opt"
}
#line 239 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_23_23 ;
		{
#line 239 "string.opt"

    Length = strlen(Str);

#line 7182 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__End_6_44  = Length;
#line 239 "string.opt"
}
#line 651 "string.opt"
            {
#line 651 "string.opt"
              mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, mercury__calendar__V_23_23, mercury__calendar__End_6_44, &mercury__calendar__Index_7_45);
            }
#line 649 "string.opt"
            mercury__calendar__V_8_38 = (mercury__calendar__End_6_44 - mercury__calendar__Index_7_45);
#line 642 "string.opt"
            mercury__calendar__V_6_36 = (mercury__calendar__V_7_37 - mercury__calendar__V_8_38);
#line 767 "string.opt"
            {
#line 767 "string.opt"
              mercury__string__split_4_p_0(mercury__calendar__V_23_23, mercury__calendar__V_6_36, &mercury__calendar__V_9_9, &mercury__calendar___RightString_7_54);
            }
#line 643 "calendar.m"
          }
#line 645 "calendar.m"
        else
#line 646 "calendar.m"
          mercury__calendar__V_9_9 = (MR_String) "";
#line 255 "string.opt"
        {
#line 255 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_9_9, (MR_String) "S", &mercury__calendar__V_8_8);
        }
#line 255 "string.opt"
        {
#line 255 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_7_7, mercury__calendar__V_8_8, &mercury__calendar__Str_6);
        }
#line 715 "calendar.m"
      }
#line 714 "calendar.m"
    return mercury__calendar__Str_6;
#line 714 "calendar.m"
  }
#line 709 "calendar.m"
}

#line 700 "calendar.m"
static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
#line 700 "calendar.m"
  MR_Integer mercury__calendar__X_4,
#line 700 "calendar.m"
  MR_String mercury__calendar__Suffix_5)
#line 700 "calendar.m"
{
#line 702 "calendar.m"
  {
#line 702 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__X_4 == (MR_Integer) 0);
#line 702 "calendar.m"
    MR_String mercury__calendar__HeadVar__3_3;

#line 702 "calendar.m"
    if (mercury__calendar__succeeded)
#line 702 "calendar.m"
      mercury__calendar__HeadVar__3_3 = (MR_String) "";
#line 702 "calendar.m"
    else
#line 706 "calendar.m"
      {
#line 706 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 292 "string.opt"
        {
#line 292 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__calendar__X_4, (MR_Integer) 10, &mercury__calendar__V_6_6);
        }
#line 255 "string.opt"
        {
#line 255 "string.opt"
          mercury__string__append_3_p_2(mercury__calendar__V_6_6, mercury__calendar__Suffix_5, &mercury__calendar__HeadVar__3_3);
        }
#line 706 "calendar.m"
      }
#line 702 "calendar.m"
    return mercury__calendar__HeadVar__3_3;
#line 702 "calendar.m"
  }
#line 700 "calendar.m"
}

#line 597 "calendar.m"
static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void)
#line 597 "calendar.m"
{
#line 599 "calendar.m"
  {
#line 599 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 599 "calendar.m"
    return (MR_Integer) 1000000;
#line 599 "calendar.m"
  }
#line 597 "calendar.m"
}

#line 548 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
#line 548 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_10,
#line 548 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_11,
#line 548 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_12,
#line 548 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_13)
#line 548 "calendar.m"
{
#line 557 "calendar.m"
  while (MR_TRUE)
#line 557 "calendar.m"
    {
#line 557 "calendar.m"
      /* tailcall optimized into a loop */
#line 557 "calendar.m"
      {
#line 557 "calendar.m"
        MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_12)) == (MR_mktag((MR_Integer) 1)));
#line 557 "calendar.m"
        MR_Word mercury__calendar__Rest_8;
#line 557 "calendar.m"
        MR_Integer mercury__calendar__Digit_9;
#line 552 "calendar.m"
        MR_Char mercury__calendar__Char_7;

#line 552 "calendar.m"
        if (mercury__calendar__succeeded)
#line 552 "calendar.m"
          {
#line 552 "calendar.m"
            mercury__calendar__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_12, (MR_Integer) 0)));
#line 552 "calendar.m"
            mercury__calendar__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_12, (MR_Integer) 1)));
#line 1127 "calendar.m"
            if ((mercury__calendar__Char_7 == (MR_Char) 48))
#line 1127 "calendar.m"
              {
#line 1127 "calendar.m"
                mercury__calendar__Digit_9 = (MR_Integer) 0;
#line 1127 "calendar.m"
                mercury__calendar__succeeded = MR_TRUE;
#line 1127 "calendar.m"
              }
#line 1127 "calendar.m"
            else
#line 1127 "calendar.m"
              if ((mercury__calendar__Char_7 == (MR_Char) 49))
#line 1128 "calendar.m"
                {
#line 1128 "calendar.m"
                  mercury__calendar__Digit_9 = (MR_Integer) 1;
#line 1128 "calendar.m"
                  mercury__calendar__succeeded = MR_TRUE;
#line 1128 "calendar.m"
                }
#line 1127 "calendar.m"
              else
#line 1127 "calendar.m"
                if ((mercury__calendar__Char_7 == (MR_Char) 50))
#line 1129 "calendar.m"
                  {
#line 1129 "calendar.m"
                    mercury__calendar__Digit_9 = (MR_Integer) 2;
#line 1129 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 1129 "calendar.m"
                  }
#line 1127 "calendar.m"
                else
#line 1127 "calendar.m"
                  if ((mercury__calendar__Char_7 == (MR_Char) 51))
#line 1130 "calendar.m"
                    {
#line 1130 "calendar.m"
                      mercury__calendar__Digit_9 = (MR_Integer) 3;
#line 1130 "calendar.m"
                      mercury__calendar__succeeded = MR_TRUE;
#line 1130 "calendar.m"
                    }
#line 1127 "calendar.m"
                  else
#line 1127 "calendar.m"
                    if ((mercury__calendar__Char_7 == (MR_Char) 52))
#line 1131 "calendar.m"
                      {
#line 1131 "calendar.m"
                        mercury__calendar__Digit_9 = (MR_Integer) 4;
#line 1131 "calendar.m"
                        mercury__calendar__succeeded = MR_TRUE;
#line 1131 "calendar.m"
                      }
#line 1127 "calendar.m"
                    else
#line 1127 "calendar.m"
                      if ((mercury__calendar__Char_7 == (MR_Char) 53))
#line 1132 "calendar.m"
                        {
#line 1132 "calendar.m"
                          mercury__calendar__Digit_9 = (MR_Integer) 5;
#line 1132 "calendar.m"
                          mercury__calendar__succeeded = MR_TRUE;
#line 1132 "calendar.m"
                        }
#line 1127 "calendar.m"
                      else
#line 1127 "calendar.m"
                        if ((mercury__calendar__Char_7 == (MR_Char) 54))
#line 1133 "calendar.m"
                          {
#line 1133 "calendar.m"
                            mercury__calendar__Digit_9 = (MR_Integer) 6;
#line 1133 "calendar.m"
                            mercury__calendar__succeeded = MR_TRUE;
#line 1133 "calendar.m"
                          }
#line 1127 "calendar.m"
                        else
#line 1127 "calendar.m"
                          if ((mercury__calendar__Char_7 == (MR_Char) 55))
#line 1134 "calendar.m"
                            {
#line 1134 "calendar.m"
                              mercury__calendar__Digit_9 = (MR_Integer) 7;
#line 1134 "calendar.m"
                              mercury__calendar__succeeded = MR_TRUE;
#line 1134 "calendar.m"
                            }
#line 1127 "calendar.m"
                          else
#line 1127 "calendar.m"
                            if ((mercury__calendar__Char_7 == (MR_Char) 56))
#line 1135 "calendar.m"
                              {
#line 1135 "calendar.m"
                                mercury__calendar__Digit_9 = (MR_Integer) 8;
#line 1135 "calendar.m"
                                mercury__calendar__succeeded = MR_TRUE;
#line 1135 "calendar.m"
                              }
#line 1127 "calendar.m"
                            else
#line 1127 "calendar.m"
                              if ((mercury__calendar__Char_7 == (MR_Char) 57))
#line 1136 "calendar.m"
                                {
#line 1136 "calendar.m"
                                  mercury__calendar__Digit_9 = (MR_Integer) 9;
#line 1136 "calendar.m"
                                  mercury__calendar__succeeded = MR_TRUE;
#line 1136 "calendar.m"
                                }
#line 1127 "calendar.m"
                              else
#line 1127 "calendar.m"
                                mercury__calendar__succeeded = MR_FALSE;
#line 552 "calendar.m"
          }
#line 557 "calendar.m"
        if (mercury__calendar__succeeded)
#line 555 "calendar.m"
          {
#line 555 "calendar.m"
            MR_Integer mercury__calendar__STATE_VARIABLE_Val_14_14;
#line 555 "calendar.m"
            MR_Integer mercury__calendar__V_15_15 = (mercury__calendar__STATE_VARIABLE_Val_0_10 * (MR_Integer) 10);

#line 555 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Val_14_14 = (mercury__calendar__V_15_15 + mercury__calendar__Digit_9);
#line 556 "calendar.m"
            /* direct tailcall eliminated */
#line 556 "calendar.m"
            {
#line 556 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_10 = mercury__calendar__STATE_VARIABLE_Val_14_14;
#line 556 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_12 = mercury__calendar__Rest_8;

#line 556 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Chars_0_12 = mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_12;
#line 556 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Val_0_10 = mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_10;
#line 556 "calendar.m"
            }
#line 556 "calendar.m"
            continue;
#line 555 "calendar.m"
          }
#line 557 "calendar.m"
        else
#line 558 "calendar.m"
          {
#line 558 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Chars_13 = mercury__calendar__STATE_VARIABLE_Chars_0_12;
#line 558 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Val_11 = mercury__calendar__STATE_VARIABLE_Val_0_10;
#line 558 "calendar.m"
          }
#line 557 "calendar.m"
      }
#line 557 "calendar.m"
      break;
#line 557 "calendar.m"
    }
#line 548 "calendar.m"
}

#line 512 "calendar.m"
static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
#line 512 "calendar.m"
  MR_Integer * mercury__calendar__Seconds_5,
#line 512 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_6,
#line 512 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_13,
#line 512 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_14)
#line 512 "calendar.m"
{
#line 524 "calendar.m"
  {
#line 524 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 524 "calendar.m"
    MR_Integer mercury__calendar__Seconds0_8;
#line 524 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds0_10;
#line 524 "calendar.m"
    MR_Word mercury__calendar__Chars3_12;
#line 517 "calendar.m"
    MR_Word mercury__calendar__Chars1_9;
#line 517 "calendar.m"
    MR_Word mercury__calendar__Chars2_11;
#line 517 "calendar.m"
    MR_Char mercury__calendar__V_17_17;
#line 425 "calendar.m"
    MR_Integer mercury__calendar__Fraction_29;
#line 425 "calendar.m"
    MR_Integer mercury__calendar__FractionDigits_30;
#line 425 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_12_32;
#line 419 "calendar.m"
    MR_Word mercury__calendar__Chars1_28;
#line 419 "calendar.m"
    MR_Integer mercury__calendar__V_33_33;
#line 419 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 419 "calendar.m"
    MR_Char mercury__calendar__V_40_40;
#line 419 "calendar.m"
    MR_Integer mercury__calendar__V_48_48;
#line 419 "calendar.m"
    MR_Integer mercury__calendar__V_49_49;

#line 546 "calendar.m"
    {
#line 546 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Seconds0_8, mercury__calendar__STATE_VARIABLE_Chars_0_13, &mercury__calendar__Chars1_9);
    }
#line 485 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_9)) == (MR_mktag((MR_Integer) 1)));
#line 485 "calendar.m"
    if (mercury__calendar__succeeded)
#line 485 "calendar.m"
      {
#line 485 "calendar.m"
        mercury__calendar__V_40_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_9, (MR_Integer) 0)));
#line 485 "calendar.m"
        mercury__calendar__Chars1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_9, (MR_Integer) 1)));
#line 419 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 46 == mercury__calendar__V_40_40);
#line 419 "calendar.m"
        if (mercury__calendar__succeeded)
#line 419 "calendar.m"
          {
#line 433 "calendar.m"
            mercury__calendar__V_48_48 = (MR_Integer) 0;
#line 433 "calendar.m"
            mercury__calendar__V_49_49 = (MR_Integer) 0;
#line 433 "calendar.m"
            {
#line 433 "calendar.m"
              mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_48_48, &mercury__calendar__Fraction_29, mercury__calendar__V_49_49, &mercury__calendar__FractionDigits_30, mercury__calendar__Chars1_28, &mercury__calendar__STATE_VARIABLE_Chars_12_32);
            }
#line 421 "calendar.m"
            mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 421 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__FractionDigits_30 > mercury__calendar__V_33_33);
#line 419 "calendar.m"
            if (mercury__calendar__succeeded)
#line 419 "calendar.m"
              {
#line 422 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 7;
#line 422 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__FractionDigits_30 < mercury__calendar__V_34_34);
#line 419 "calendar.m"
              }
#line 419 "calendar.m"
          }
#line 485 "calendar.m"
      }
#line 425 "calendar.m"
    if (mercury__calendar__succeeded)
#line 424 "calendar.m"
      {
#line 424 "calendar.m"
        MR_Integer mercury__calendar__V_35_35;
#line 424 "calendar.m"
        MR_Integer mercury__calendar__V_37_37;

#line 424 "calendar.m"
        mercury__calendar__Chars2_11 = mercury__calendar__STATE_VARIABLE_Chars_12_32;
#line 424 "calendar.m"
        mercury__calendar__V_37_37 = ((MR_Integer) 6 - mercury__calendar__FractionDigits_30);
#line 92 "int.opt"
        {
#line 92 "int.opt"
          mercury__int__pow_3_p_0((MR_Integer) 10, mercury__calendar__V_37_37, &mercury__calendar__V_35_35);
        }
#line 424 "calendar.m"
        mercury__calendar__MicroSeconds0_10 = (mercury__calendar__V_35_35 * mercury__calendar__Fraction_29);
#line 424 "calendar.m"
      }
#line 425 "calendar.m"
    else
#line 426 "calendar.m"
      {
#line 426 "calendar.m"
        mercury__calendar__MicroSeconds0_10 = (MR_Integer) 0;
#line 426 "calendar.m"
        mercury__calendar__Chars2_11 = mercury__calendar__Chars1_9;
#line 426 "calendar.m"
      }
#line 485 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars2_11)) == (MR_mktag((MR_Integer) 1)));
#line 485 "calendar.m"
    if (mercury__calendar__succeeded)
#line 485 "calendar.m"
      {
#line 485 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars2_11, (MR_Integer) 0)));
#line 485 "calendar.m"
        mercury__calendar__Chars3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars2_11, (MR_Integer) 1)));
#line 519 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 83 == mercury__calendar__V_17_17);
#line 485 "calendar.m"
      }
#line 524 "calendar.m"
    if (mercury__calendar__succeeded)
#line 521 "calendar.m"
      {
#line 521 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_14 = mercury__calendar__Chars3_12;
#line 522 "calendar.m"
        *mercury__calendar__Seconds_5 = mercury__calendar__Seconds0_8;
#line 523 "calendar.m"
        *mercury__calendar__MicroSeconds_6 = mercury__calendar__MicroSeconds0_10;
#line 521 "calendar.m"
      }
#line 524 "calendar.m"
    else
#line 525 "calendar.m"
      {
#line 525 "calendar.m"
        *mercury__calendar__Seconds_5 = (MR_Integer) 0;
#line 526 "calendar.m"
        *mercury__calendar__MicroSeconds_6 = (MR_Integer) 0;
#line 526 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_14 = mercury__calendar__STATE_VARIABLE_Chars_0_13;
#line 525 "calendar.m"
      }
#line 524 "calendar.m"
  }
#line 512 "calendar.m"
}

#line 507 "calendar.m"
static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
#line 507 "calendar.m"
  MR_Integer * mercury__calendar__Minutes_4,
#line 507 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 507 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 507 "calendar.m"
{
#line 509 "calendar.m"
  {
#line 509 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 539 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 539 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 534 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 534 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 546 "calendar.m"
    {
#line 546 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 535 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 535 "calendar.m"
    if (mercury__calendar__succeeded)
#line 535 "calendar.m"
      {
#line 535 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 535 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 535 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 77 == mercury__calendar__V_19_19);
#line 535 "calendar.m"
      }
#line 539 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 538 "calendar.m"
        *mercury__calendar__Minutes_4 = mercury__calendar__Int0_15;
#line 537 "calendar.m"
      }
#line 539 "calendar.m"
    else
#line 540 "calendar.m"
      {
#line 540 "calendar.m"
        *mercury__calendar__Minutes_4 = (MR_Integer) 0;
#line 540 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 540 "calendar.m"
      }
#line 509 "calendar.m"
  }
#line 507 "calendar.m"
}

#line 502 "calendar.m"
static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
#line 502 "calendar.m"
  MR_Integer * mercury__calendar__Hours_4,
#line 502 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 502 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 502 "calendar.m"
{
#line 504 "calendar.m"
  {
#line 504 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 539 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 539 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 534 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 534 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 546 "calendar.m"
    {
#line 546 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 535 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 535 "calendar.m"
    if (mercury__calendar__succeeded)
#line 535 "calendar.m"
      {
#line 535 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 535 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 535 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 72 == mercury__calendar__V_19_19);
#line 535 "calendar.m"
      }
#line 539 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 538 "calendar.m"
        *mercury__calendar__Hours_4 = mercury__calendar__Int0_15;
#line 537 "calendar.m"
      }
#line 539 "calendar.m"
    else
#line 540 "calendar.m"
      {
#line 540 "calendar.m"
        *mercury__calendar__Hours_4 = (MR_Integer) 0;
#line 540 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 540 "calendar.m"
      }
#line 504 "calendar.m"
  }
#line 502 "calendar.m"
}

#line 497 "calendar.m"
static void MR_CALL 
mercury__calendar__read_days_3_p_0(
#line 497 "calendar.m"
  MR_Integer * mercury__calendar__Days_4,
#line 497 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 497 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 497 "calendar.m"
{
#line 499 "calendar.m"
  {
#line 499 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 539 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 539 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 534 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 534 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 546 "calendar.m"
    {
#line 546 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 535 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 535 "calendar.m"
    if (mercury__calendar__succeeded)
#line 535 "calendar.m"
      {
#line 535 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 535 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 535 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 68 == mercury__calendar__V_19_19);
#line 535 "calendar.m"
      }
#line 539 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 538 "calendar.m"
        *mercury__calendar__Days_4 = mercury__calendar__Int0_15;
#line 537 "calendar.m"
      }
#line 539 "calendar.m"
    else
#line 540 "calendar.m"
      {
#line 540 "calendar.m"
        *mercury__calendar__Days_4 = (MR_Integer) 0;
#line 540 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 540 "calendar.m"
      }
#line 499 "calendar.m"
  }
#line 497 "calendar.m"
}

#line 492 "calendar.m"
static void MR_CALL 
mercury__calendar__read_months_3_p_0(
#line 492 "calendar.m"
  MR_Integer * mercury__calendar__Months_4,
#line 492 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
#line 492 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
#line 492 "calendar.m"
{
#line 494 "calendar.m"
  {
#line 494 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 539 "calendar.m"
    MR_Integer mercury__calendar__Int0_15;
#line 539 "calendar.m"
    MR_Word mercury__calendar__Rest_17;
#line 534 "calendar.m"
    MR_Word mercury__calendar__Chars1_16;
#line 534 "calendar.m"
    MR_Char mercury__calendar__V_19_19;

#line 546 "calendar.m"
    {
#line 546 "calendar.m"
      mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    }
#line 535 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
#line 535 "calendar.m"
    if (mercury__calendar__succeeded)
#line 535 "calendar.m"
      {
#line 535 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
#line 535 "calendar.m"
        mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
#line 535 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 77 == mercury__calendar__V_19_19);
#line 535 "calendar.m"
      }
#line 539 "calendar.m"
    if (mercury__calendar__succeeded)
#line 537 "calendar.m"
      {
#line 537 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
#line 538 "calendar.m"
        *mercury__calendar__Months_4 = mercury__calendar__Int0_15;
#line 537 "calendar.m"
      }
#line 539 "calendar.m"
    else
#line 540 "calendar.m"
      {
#line 540 "calendar.m"
        *mercury__calendar__Months_4 = (MR_Integer) 0;
#line 540 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
#line 540 "calendar.m"
      }
#line 494 "calendar.m"
  }
#line 492 "calendar.m"
}

#line 483 "calendar.m"
static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
#line 483 "calendar.m"
  MR_Char * mercury__calendar__Char_4,
#line 483 "calendar.m"
  MR_Word mercury__calendar__HeadVar__2_2,
#line 483 "calendar.m"
  MR_Word * mercury__calendar__Rest_5)
#line 483 "calendar.m"
{
#line 485 "calendar.m"
  {
#line 485 "calendar.m"
    MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));

#line 485 "calendar.m"
    if (mercury__calendar__succeeded)
#line 485 "calendar.m"
      {
#line 485 "calendar.m"
        *mercury__calendar__Char_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
#line 485 "calendar.m"
        *mercury__calendar__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
#line 485 "calendar.m"
      }
#line 485 "calendar.m"
    return mercury__calendar__succeeded;
#line 485 "calendar.m"
  }
#line 483 "calendar.m"
}

#line 435 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
#line 435 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_13,
#line 435 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_14,
#line 435 "calendar.m"
  MR_Integer mercury__calendar__STATE_VARIABLE_N_0_15,
#line 435 "calendar.m"
  MR_Integer * mercury__calendar__STATE_VARIABLE_N_16,
#line 435 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_17,
#line 435 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_18)
#line 435 "calendar.m"
{
#line 445 "calendar.m"
  while (MR_TRUE)
#line 445 "calendar.m"
    {
#line 445 "calendar.m"
      /* tailcall optimized into a loop */
#line 445 "calendar.m"
      {
#line 445 "calendar.m"
        MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_17)) == (MR_mktag((MR_Integer) 1)));
#line 445 "calendar.m"
        MR_Word mercury__calendar__Rest_11;
#line 445 "calendar.m"
        MR_Integer mercury__calendar__Digit_12;
#line 440 "calendar.m"
        MR_Char mercury__calendar__Char_10;

#line 440 "calendar.m"
        if (mercury__calendar__succeeded)
#line 440 "calendar.m"
          {
#line 440 "calendar.m"
            mercury__calendar__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
#line 440 "calendar.m"
            mercury__calendar__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_17, (MR_Integer) 1)));
#line 1127 "calendar.m"
            if ((mercury__calendar__Char_10 == (MR_Char) 48))
#line 1127 "calendar.m"
              {
#line 1127 "calendar.m"
                mercury__calendar__Digit_12 = (MR_Integer) 0;
#line 1127 "calendar.m"
                mercury__calendar__succeeded = MR_TRUE;
#line 1127 "calendar.m"
              }
#line 1127 "calendar.m"
            else
#line 1127 "calendar.m"
              if ((mercury__calendar__Char_10 == (MR_Char) 49))
#line 1128 "calendar.m"
                {
#line 1128 "calendar.m"
                  mercury__calendar__Digit_12 = (MR_Integer) 1;
#line 1128 "calendar.m"
                  mercury__calendar__succeeded = MR_TRUE;
#line 1128 "calendar.m"
                }
#line 1127 "calendar.m"
              else
#line 1127 "calendar.m"
                if ((mercury__calendar__Char_10 == (MR_Char) 50))
#line 1129 "calendar.m"
                  {
#line 1129 "calendar.m"
                    mercury__calendar__Digit_12 = (MR_Integer) 2;
#line 1129 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 1129 "calendar.m"
                  }
#line 1127 "calendar.m"
                else
#line 1127 "calendar.m"
                  if ((mercury__calendar__Char_10 == (MR_Char) 51))
#line 1130 "calendar.m"
                    {
#line 1130 "calendar.m"
                      mercury__calendar__Digit_12 = (MR_Integer) 3;
#line 1130 "calendar.m"
                      mercury__calendar__succeeded = MR_TRUE;
#line 1130 "calendar.m"
                    }
#line 1127 "calendar.m"
                  else
#line 1127 "calendar.m"
                    if ((mercury__calendar__Char_10 == (MR_Char) 52))
#line 1131 "calendar.m"
                      {
#line 1131 "calendar.m"
                        mercury__calendar__Digit_12 = (MR_Integer) 4;
#line 1131 "calendar.m"
                        mercury__calendar__succeeded = MR_TRUE;
#line 1131 "calendar.m"
                      }
#line 1127 "calendar.m"
                    else
#line 1127 "calendar.m"
                      if ((mercury__calendar__Char_10 == (MR_Char) 53))
#line 1132 "calendar.m"
                        {
#line 1132 "calendar.m"
                          mercury__calendar__Digit_12 = (MR_Integer) 5;
#line 1132 "calendar.m"
                          mercury__calendar__succeeded = MR_TRUE;
#line 1132 "calendar.m"
                        }
#line 1127 "calendar.m"
                      else
#line 1127 "calendar.m"
                        if ((mercury__calendar__Char_10 == (MR_Char) 54))
#line 1133 "calendar.m"
                          {
#line 1133 "calendar.m"
                            mercury__calendar__Digit_12 = (MR_Integer) 6;
#line 1133 "calendar.m"
                            mercury__calendar__succeeded = MR_TRUE;
#line 1133 "calendar.m"
                          }
#line 1127 "calendar.m"
                        else
#line 1127 "calendar.m"
                          if ((mercury__calendar__Char_10 == (MR_Char) 55))
#line 1134 "calendar.m"
                            {
#line 1134 "calendar.m"
                              mercury__calendar__Digit_12 = (MR_Integer) 7;
#line 1134 "calendar.m"
                              mercury__calendar__succeeded = MR_TRUE;
#line 1134 "calendar.m"
                            }
#line 1127 "calendar.m"
                          else
#line 1127 "calendar.m"
                            if ((mercury__calendar__Char_10 == (MR_Char) 56))
#line 1135 "calendar.m"
                              {
#line 1135 "calendar.m"
                                mercury__calendar__Digit_12 = (MR_Integer) 8;
#line 1135 "calendar.m"
                                mercury__calendar__succeeded = MR_TRUE;
#line 1135 "calendar.m"
                              }
#line 1127 "calendar.m"
                            else
#line 1127 "calendar.m"
                              if ((mercury__calendar__Char_10 == (MR_Char) 57))
#line 1136 "calendar.m"
                                {
#line 1136 "calendar.m"
                                  mercury__calendar__Digit_12 = (MR_Integer) 9;
#line 1136 "calendar.m"
                                  mercury__calendar__succeeded = MR_TRUE;
#line 1136 "calendar.m"
                                }
#line 1127 "calendar.m"
                              else
#line 1127 "calendar.m"
                                mercury__calendar__succeeded = MR_FALSE;
#line 440 "calendar.m"
          }
#line 445 "calendar.m"
        if (mercury__calendar__succeeded)
#line 443 "calendar.m"
          {
#line 443 "calendar.m"
            MR_Integer mercury__calendar__STATE_VARIABLE_Val_19_19;
#line 443 "calendar.m"
            MR_Integer mercury__calendar__V_20_20 = (mercury__calendar__STATE_VARIABLE_Val_0_13 * (MR_Integer) 10);
#line 443 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;

#line 443 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Val_19_19 = (mercury__calendar__V_20_20 + mercury__calendar__Digit_12);
#line 444 "calendar.m"
            mercury__calendar__V_23_23 = (mercury__calendar__STATE_VARIABLE_N_0_15 + (MR_Integer) 1);
#line 444 "calendar.m"
            /* direct tailcall eliminated */
#line 444 "calendar.m"
            {
#line 444 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_13 = mercury__calendar__STATE_VARIABLE_Val_19_19;
#line 444 "calendar.m"
              MR_Integer mercury__calendar__STATE_VARIABLE_N_0__tmp_copy_15 = mercury__calendar__V_23_23;
#line 444 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_17 = mercury__calendar__Rest_11;

#line 444 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Chars_0_17 = mercury__calendar__STATE_VARIABLE_Chars_0__tmp_copy_17;
#line 444 "calendar.m"
              mercury__calendar__STATE_VARIABLE_N_0_15 = mercury__calendar__STATE_VARIABLE_N_0__tmp_copy_15;
#line 444 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Val_0_13 = mercury__calendar__STATE_VARIABLE_Val_0__tmp_copy_13;
#line 444 "calendar.m"
            }
#line 444 "calendar.m"
            continue;
#line 443 "calendar.m"
          }
#line 445 "calendar.m"
        else
#line 446 "calendar.m"
          {
#line 446 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Chars_18 = mercury__calendar__STATE_VARIABLE_Chars_0_17;
#line 446 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_N_16 = mercury__calendar__STATE_VARIABLE_N_0_15;
#line 446 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Val_14 = mercury__calendar__STATE_VARIABLE_Val_0_13;
#line 446 "calendar.m"
          }
#line 445 "calendar.m"
      }
#line 445 "calendar.m"
      break;
#line 445 "calendar.m"
    }
#line 435 "calendar.m"
}

#line 429 "calendar.m"
static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
#line 429 "calendar.m"
  MR_Integer * mercury__calendar__Val_5,
#line 429 "calendar.m"
  MR_Integer * mercury__calendar__N_6,
#line 429 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_8,
#line 429 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_9)
#line 429 "calendar.m"
{
#line 432 "calendar.m"
  {
#line 432 "calendar.m"
    MR_bool mercury__calendar__succeeded;

#line 433 "calendar.m"
    {
#line 433 "calendar.m"
      mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, mercury__calendar__Val_5, (MR_Integer) 0, mercury__calendar__N_6, mercury__calendar__STATE_VARIABLE_Chars_0_8, mercury__calendar__STATE_VARIABLE_Chars_9);
#line 433 "calendar.m"
      return;
    }
#line 432 "calendar.m"
  }
#line 429 "calendar.m"
}

#line 414 "calendar.m"
static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
#line 414 "calendar.m"
  MR_Integer * mercury__calendar__MicroSeconds_4,
#line 414 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_9,
#line 414 "calendar.m"
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_10)
#line 414 "calendar.m"
{
#line 425 "calendar.m"
  {
#line 425 "calendar.m"
    MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_9)) == (MR_mktag((MR_Integer) 1)));
#line 425 "calendar.m"
    MR_Integer mercury__calendar__Fraction_7;
#line 425 "calendar.m"
    MR_Integer mercury__calendar__FractionDigits_8;
#line 425 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_12_12;
#line 419 "calendar.m"
    MR_Word mercury__calendar__Chars1_6;
#line 419 "calendar.m"
    MR_Integer mercury__calendar__V_13_13;
#line 419 "calendar.m"
    MR_Integer mercury__calendar__V_14_14;
#line 419 "calendar.m"
    MR_Char mercury__calendar__V_20_20;
#line 419 "calendar.m"
    MR_Integer mercury__calendar__V_28_28;
#line 419 "calendar.m"
    MR_Integer mercury__calendar__V_29_29;

#line 485 "calendar.m"
    if (mercury__calendar__succeeded)
#line 485 "calendar.m"
      {
#line 485 "calendar.m"
        mercury__calendar__V_20_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_9, (MR_Integer) 0)));
#line 485 "calendar.m"
        mercury__calendar__Chars1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_9, (MR_Integer) 1)));
#line 419 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 46 == mercury__calendar__V_20_20);
#line 419 "calendar.m"
        if (mercury__calendar__succeeded)
#line 419 "calendar.m"
          {
#line 433 "calendar.m"
            mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 433 "calendar.m"
            mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 433 "calendar.m"
            {
#line 433 "calendar.m"
              mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_28_28, &mercury__calendar__Fraction_7, mercury__calendar__V_29_29, &mercury__calendar__FractionDigits_8, mercury__calendar__Chars1_6, &mercury__calendar__STATE_VARIABLE_Chars_12_12);
            }
#line 421 "calendar.m"
            mercury__calendar__V_13_13 = (MR_Integer) 0;
#line 421 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__FractionDigits_8 > mercury__calendar__V_13_13);
#line 419 "calendar.m"
            if (mercury__calendar__succeeded)
#line 419 "calendar.m"
              {
#line 422 "calendar.m"
                mercury__calendar__V_14_14 = (MR_Integer) 7;
#line 422 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__FractionDigits_8 < mercury__calendar__V_14_14);
#line 419 "calendar.m"
              }
#line 419 "calendar.m"
          }
#line 485 "calendar.m"
      }
#line 425 "calendar.m"
    if (mercury__calendar__succeeded)
#line 424 "calendar.m"
      {
#line 424 "calendar.m"
        MR_Integer mercury__calendar__V_15_15;
#line 424 "calendar.m"
        MR_Integer mercury__calendar__V_17_17;

#line 424 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_10 = mercury__calendar__STATE_VARIABLE_Chars_12_12;
#line 424 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Integer) 6 - mercury__calendar__FractionDigits_8);
#line 92 "int.opt"
        {
#line 92 "int.opt"
          mercury__int__pow_3_p_0((MR_Integer) 10, mercury__calendar__V_17_17, &mercury__calendar__V_15_15);
        }
#line 424 "calendar.m"
        *mercury__calendar__MicroSeconds_4 = (mercury__calendar__V_15_15 * mercury__calendar__Fraction_7);
#line 424 "calendar.m"
      }
#line 425 "calendar.m"
    else
#line 426 "calendar.m"
      {
#line 426 "calendar.m"
        *mercury__calendar__MicroSeconds_4 = (MR_Integer) 0;
#line 426 "calendar.m"
        *mercury__calendar__STATE_VARIABLE_Chars_10 = mercury__calendar__STATE_VARIABLE_Chars_0_9;
#line 426 "calendar.m"
      }
#line 425 "calendar.m"
  }
#line 414 "calendar.m"
}

#line 339 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_5(
#line 339 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 339 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 339 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 339 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 339 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 339 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 339 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 339 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 339 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 339 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 339 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 339 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 339 "calendar.m"
{
#line 1180 "calendar.m"
  while (MR_TRUE)
#line 1180 "calendar.m"
    {
#line 1180 "calendar.m"
      /* tailcall optimized into a loop */
#line 1180 "calendar.m"
      {
#line 1180 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1180 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1181 "calendar.m"
        {
#line 1181 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1189 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1190 "calendar.m"
          {
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1190 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1190 "calendar.m"
          }
#line 1189 "calendar.m"
        else
#line 1185 "calendar.m"
          {
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1186 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1186 "calendar.m"
            {
#line 1186 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1185 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1185 "calendar.m"
              {
#line 1187 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1187 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1187 "calendar.m"
                {
#line 1187 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1187 "calendar.m"
                {
#line 1187 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1188 "calendar.m"
                /* direct tailcall eliminated */
#line 1188 "calendar.m"
                {
#line 1188 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1188 "calendar.m"
                }
#line 1188 "calendar.m"
                continue;
#line 1185 "calendar.m"
              }
#line 1185 "calendar.m"
          }
#line 1180 "calendar.m"
        return mercury__calendar__succeeded;
#line 1180 "calendar.m"
      }
#line 1180 "calendar.m"
      break;
#line 1180 "calendar.m"
    }
#line 339 "calendar.m"
}

#line 337 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_4(
#line 337 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 337 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 337 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 337 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 337 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 337 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 337 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 337 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 337 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 337 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 337 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 337 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 337 "calendar.m"
{
#line 1180 "calendar.m"
  while (MR_TRUE)
#line 1180 "calendar.m"
    {
#line 1180 "calendar.m"
      /* tailcall optimized into a loop */
#line 1180 "calendar.m"
      {
#line 1180 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1180 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1181 "calendar.m"
        {
#line 1181 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1189 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1190 "calendar.m"
          {
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1190 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1190 "calendar.m"
          }
#line 1189 "calendar.m"
        else
#line 1185 "calendar.m"
          {
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1186 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1186 "calendar.m"
            {
#line 1186 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1185 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1185 "calendar.m"
              {
#line 1187 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1187 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1187 "calendar.m"
                {
#line 1187 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1187 "calendar.m"
                {
#line 1187 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1188 "calendar.m"
                /* direct tailcall eliminated */
#line 1188 "calendar.m"
                {
#line 1188 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1188 "calendar.m"
                }
#line 1188 "calendar.m"
                continue;
#line 1185 "calendar.m"
              }
#line 1185 "calendar.m"
          }
#line 1180 "calendar.m"
        return mercury__calendar__succeeded;
#line 1180 "calendar.m"
      }
#line 1180 "calendar.m"
      break;
#line 1180 "calendar.m"
    }
#line 337 "calendar.m"
}

#line 335 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_3(
#line 335 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 335 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 335 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 335 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 335 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 335 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 335 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 335 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 335 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 335 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 335 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 335 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 335 "calendar.m"
{
#line 1180 "calendar.m"
  while (MR_TRUE)
#line 1180 "calendar.m"
    {
#line 1180 "calendar.m"
      /* tailcall optimized into a loop */
#line 1180 "calendar.m"
      {
#line 1180 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1180 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1181 "calendar.m"
        {
#line 1181 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1189 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1190 "calendar.m"
          {
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1190 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1190 "calendar.m"
          }
#line 1189 "calendar.m"
        else
#line 1185 "calendar.m"
          {
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_31_31;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_32_32;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_33_33;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 1185 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 1186 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1186 "calendar.m"
            {
#line 1186 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1185 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1185 "calendar.m"
              {
#line 1187 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_31_31 = (MR_Integer) 1;
#line 1187 "calendar.m"
                mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 1187 "calendar.m"
                mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 1187 "calendar.m"
                {
#line 1187 "calendar.m"
                  mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34, mercury__calendar__V_35_35);
                }
#line 1187 "calendar.m"
                {
#line 1187 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
                }
#line 1188 "calendar.m"
                /* direct tailcall eliminated */
#line 1188 "calendar.m"
                {
#line 1188 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1188 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1188 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1188 "calendar.m"
                }
#line 1188 "calendar.m"
                continue;
#line 1185 "calendar.m"
              }
#line 1185 "calendar.m"
          }
#line 1180 "calendar.m"
        return mercury__calendar__succeeded;
#line 1180 "calendar.m"
      }
#line 1180 "calendar.m"
      break;
#line 1180 "calendar.m"
    }
#line 335 "calendar.m"
}

#line 333 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_2(
#line 333 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 333 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 333 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 333 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 333 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 333 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 333 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 333 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 333 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 333 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 333 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 333 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 333 "calendar.m"
{
#line 1180 "calendar.m"
  while (MR_TRUE)
#line 1180 "calendar.m"
    {
#line 1180 "calendar.m"
      /* tailcall optimized into a loop */
#line 1180 "calendar.m"
      {
#line 1180 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1180 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1181 "calendar.m"
        {
#line 1181 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1189 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1190 "calendar.m"
          {
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1190 "calendar.m"
          }
#line 1189 "calendar.m"
        else
#line 1185 "calendar.m"
          {
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1186 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1186 "calendar.m"
            {
#line 1186 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1187 "calendar.m"
            {
#line 1187 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1187 "calendar.m"
            {
#line 1187 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1188 "calendar.m"
            /* direct tailcall eliminated */
#line 1188 "calendar.m"
            {
#line 1188 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1188 "calendar.m"
            }
#line 1188 "calendar.m"
            continue;
#line 1185 "calendar.m"
          }
#line 1180 "calendar.m"
      }
#line 1180 "calendar.m"
      break;
#line 1180 "calendar.m"
    }
#line 333 "calendar.m"
}

#line 331 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_1(
#line 331 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 331 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 331 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 331 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 331 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 331 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 331 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 331 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 331 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 331 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 331 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 331 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 331 "calendar.m"
{
#line 1180 "calendar.m"
  while (MR_TRUE)
#line 1180 "calendar.m"
    {
#line 1180 "calendar.m"
      /* tailcall optimized into a loop */
#line 1180 "calendar.m"
      {
#line 1180 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1180 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1181 "calendar.m"
        {
#line 1181 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1189 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1190 "calendar.m"
          {
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1190 "calendar.m"
          }
#line 1189 "calendar.m"
        else
#line 1185 "calendar.m"
          {
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1186 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1186 "calendar.m"
            {
#line 1186 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1187 "calendar.m"
            {
#line 1187 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1187 "calendar.m"
            {
#line 1187 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1188 "calendar.m"
            /* direct tailcall eliminated */
#line 1188 "calendar.m"
            {
#line 1188 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1188 "calendar.m"
            }
#line 1188 "calendar.m"
            continue;
#line 1185 "calendar.m"
          }
#line 1180 "calendar.m"
      }
#line 1180 "calendar.m"
      break;
#line 1180 "calendar.m"
    }
#line 331 "calendar.m"
}

#line 329 "calendar.m"
void MR_CALL 
mercury__calendar__foldl3_days_9_p_0(
#line 329 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_41,
#line 329 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_42,
#line 329 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_C_43,
#line 329 "calendar.m"
  MR_Word mercury__calendar__Pred_10,
#line 329 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
#line 329 "calendar.m"
  MR_Word mercury__calendar__End_12,
#line 329 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
#line 329 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
#line 329 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
#line 329 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
#line 329 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
#line 329 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
#line 329 "calendar.m"
{
#line 1180 "calendar.m"
  while (MR_TRUE)
#line 1180 "calendar.m"
    {
#line 1180 "calendar.m"
      /* tailcall optimized into a loop */
#line 1180 "calendar.m"
      {
#line 1180 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1180 "calendar.m"
        MR_Word mercury__calendar__Res_16;

#line 1181 "calendar.m"
        {
#line 1181 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
        }
#line 1189 "calendar.m"
        if ((mercury__calendar__Res_16 == (MR_Integer) 2))
#line 1190 "calendar.m"
          {
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
#line 1190 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
#line 1190 "calendar.m"
          }
#line 1189 "calendar.m"
        else
#line 1185 "calendar.m"
          {
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1185 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 1185 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1186 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

#line 1186 "calendar.m"
            {
#line 1186 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            }
#line 1187 "calendar.m"
            {
#line 1187 "calendar.m"
              mercury__calendar__V_27_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1187 "calendar.m"
            {
#line 1187 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_27_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            }
#line 1188 "calendar.m"
            /* direct tailcall eliminated */
#line 1188 "calendar.m"
            {
#line 1188 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
#line 1188 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_0__tmp_copy_22;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_20;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_18;
#line 1188 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_17;
#line 1188 "calendar.m"
            }
#line 1188 "calendar.m"
            continue;
#line 1185 "calendar.m"
          }
#line 1180 "calendar.m"
      }
#line 1180 "calendar.m"
      break;
#line 1180 "calendar.m"
    }
#line 329 "calendar.m"
}

#line 321 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_5(
#line 321 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 321 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 321 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 321 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 321 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 321 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 321 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 321 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 321 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 321 "calendar.m"
{
#line 1167 "calendar.m"
  while (MR_TRUE)
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      /* tailcall optimized into a loop */
#line 1167 "calendar.m"
      {
#line 1167 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1167 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1168 "calendar.m"
        {
#line 1168 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1176 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1177 "calendar.m"
          {
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1177 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1177 "calendar.m"
          }
#line 1176 "calendar.m"
        else
#line 1172 "calendar.m"
          {
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1173 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1173 "calendar.m"
            {
#line 1173 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1172 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1172 "calendar.m"
              {
#line 1174 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1174 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1174 "calendar.m"
                {
#line 1174 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1174 "calendar.m"
                {
#line 1174 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1175 "calendar.m"
                /* direct tailcall eliminated */
#line 1175 "calendar.m"
                {
#line 1175 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1175 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1175 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1175 "calendar.m"
                }
#line 1175 "calendar.m"
                continue;
#line 1172 "calendar.m"
              }
#line 1172 "calendar.m"
          }
#line 1167 "calendar.m"
        return mercury__calendar__succeeded;
#line 1167 "calendar.m"
      }
#line 1167 "calendar.m"
      break;
#line 1167 "calendar.m"
    }
#line 321 "calendar.m"
}

#line 319 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_4(
#line 319 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 319 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 319 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 319 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 319 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 319 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 319 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 319 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 319 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 319 "calendar.m"
{
#line 1167 "calendar.m"
  while (MR_TRUE)
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      /* tailcall optimized into a loop */
#line 1167 "calendar.m"
      {
#line 1167 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1167 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1168 "calendar.m"
        {
#line 1168 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1176 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1177 "calendar.m"
          {
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1177 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1177 "calendar.m"
          }
#line 1176 "calendar.m"
        else
#line 1172 "calendar.m"
          {
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1173 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1173 "calendar.m"
            {
#line 1173 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1172 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1172 "calendar.m"
              {
#line 1174 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1174 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1174 "calendar.m"
                {
#line 1174 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1174 "calendar.m"
                {
#line 1174 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1175 "calendar.m"
                /* direct tailcall eliminated */
#line 1175 "calendar.m"
                {
#line 1175 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1175 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1175 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1175 "calendar.m"
                }
#line 1175 "calendar.m"
                continue;
#line 1172 "calendar.m"
              }
#line 1172 "calendar.m"
          }
#line 1167 "calendar.m"
        return mercury__calendar__succeeded;
#line 1167 "calendar.m"
      }
#line 1167 "calendar.m"
      break;
#line 1167 "calendar.m"
    }
#line 319 "calendar.m"
}

#line 317 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_3(
#line 317 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 317 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 317 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 317 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 317 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 317 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 317 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 317 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 317 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 317 "calendar.m"
{
#line 1167 "calendar.m"
  while (MR_TRUE)
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      /* tailcall optimized into a loop */
#line 1167 "calendar.m"
      {
#line 1167 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1167 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1168 "calendar.m"
        {
#line 1168 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1176 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1177 "calendar.m"
          {
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1177 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1177 "calendar.m"
          }
#line 1176 "calendar.m"
        else
#line 1172 "calendar.m"
          {
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_26_26;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_27_27;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_28_28;
#line 1172 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 1173 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1173 "calendar.m"
            {
#line 1173 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1172 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1172 "calendar.m"
              {
#line 1174 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_25_25 = (MR_Integer) 1;
#line 1174 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 1174 "calendar.m"
                mercury__calendar__V_29_29 = (MR_Integer) 0;
#line 1174 "calendar.m"
                {
#line 1174 "calendar.m"
                  mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_23_23, mercury__calendar__V_24_24, mercury__calendar__V_25_25, mercury__calendar__V_26_26, mercury__calendar__V_27_27, mercury__calendar__V_28_28, mercury__calendar__V_29_29);
                }
#line 1174 "calendar.m"
                {
#line 1174 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
                }
#line 1175 "calendar.m"
                /* direct tailcall eliminated */
#line 1175 "calendar.m"
                {
#line 1175 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1175 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1175 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1175 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1175 "calendar.m"
                }
#line 1175 "calendar.m"
                continue;
#line 1172 "calendar.m"
              }
#line 1172 "calendar.m"
          }
#line 1167 "calendar.m"
        return mercury__calendar__succeeded;
#line 1167 "calendar.m"
      }
#line 1167 "calendar.m"
      break;
#line 1167 "calendar.m"
    }
#line 317 "calendar.m"
}

#line 315 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_2(
#line 315 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 315 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 315 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 315 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 315 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 315 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 315 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 315 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 315 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 315 "calendar.m"
{
#line 1167 "calendar.m"
  while (MR_TRUE)
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      /* tailcall optimized into a loop */
#line 1167 "calendar.m"
      {
#line 1167 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1167 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1168 "calendar.m"
        {
#line 1168 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1176 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1177 "calendar.m"
          {
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1177 "calendar.m"
          }
#line 1176 "calendar.m"
        else
#line 1172 "calendar.m"
          {
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1173 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1173 "calendar.m"
            {
#line 1173 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1174 "calendar.m"
            {
#line 1174 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1174 "calendar.m"
            {
#line 1174 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1175 "calendar.m"
            /* direct tailcall eliminated */
#line 1175 "calendar.m"
            {
#line 1175 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1175 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1175 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1175 "calendar.m"
            }
#line 1175 "calendar.m"
            continue;
#line 1172 "calendar.m"
          }
#line 1167 "calendar.m"
      }
#line 1167 "calendar.m"
      break;
#line 1167 "calendar.m"
    }
#line 315 "calendar.m"
}

#line 313 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_1(
#line 313 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 313 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 313 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 313 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 313 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 313 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 313 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 313 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 313 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 313 "calendar.m"
{
#line 1167 "calendar.m"
  while (MR_TRUE)
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      /* tailcall optimized into a loop */
#line 1167 "calendar.m"
      {
#line 1167 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1167 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1168 "calendar.m"
        {
#line 1168 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1176 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1177 "calendar.m"
          {
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1177 "calendar.m"
          }
#line 1176 "calendar.m"
        else
#line 1172 "calendar.m"
          {
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1173 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1173 "calendar.m"
            {
#line 1173 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1174 "calendar.m"
            {
#line 1174 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1174 "calendar.m"
            {
#line 1174 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1175 "calendar.m"
            /* direct tailcall eliminated */
#line 1175 "calendar.m"
            {
#line 1175 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1175 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1175 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1175 "calendar.m"
            }
#line 1175 "calendar.m"
            continue;
#line 1172 "calendar.m"
          }
#line 1167 "calendar.m"
      }
#line 1167 "calendar.m"
      break;
#line 1167 "calendar.m"
    }
#line 313 "calendar.m"
}

#line 311 "calendar.m"
void MR_CALL 
mercury__calendar__foldl2_days_7_p_0(
#line 311 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_34,
#line 311 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_B_35,
#line 311 "calendar.m"
  MR_Word mercury__calendar__Pred_8,
#line 311 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
#line 311 "calendar.m"
  MR_Word mercury__calendar__End_10,
#line 311 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
#line 311 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
#line 311 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
#line 311 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
#line 311 "calendar.m"
{
#line 1167 "calendar.m"
  while (MR_TRUE)
#line 1167 "calendar.m"
    {
#line 1167 "calendar.m"
      /* tailcall optimized into a loop */
#line 1167 "calendar.m"
      {
#line 1167 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1167 "calendar.m"
        MR_Word mercury__calendar__Res_13;

#line 1168 "calendar.m"
        {
#line 1168 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
        }
#line 1176 "calendar.m"
        if ((mercury__calendar__Res_13 == (MR_Integer) 2))
#line 1177 "calendar.m"
          {
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
#line 1177 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
#line 1177 "calendar.m"
          }
#line 1176 "calendar.m"
        else
#line 1172 "calendar.m"
          {
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1172 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__V_21_21;
#line 1172 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1173 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

#line 1173 "calendar.m"
            {
#line 1173 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            }
#line 1174 "calendar.m"
            {
#line 1174 "calendar.m"
              mercury__calendar__V_21_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1174 "calendar.m"
            {
#line 1174 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_21_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            }
#line 1175 "calendar.m"
            /* direct tailcall eliminated */
#line 1175 "calendar.m"
            {
#line 1175 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
#line 1175 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
#line 1175 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 1175 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_14;
#line 1175 "calendar.m"
            }
#line 1175 "calendar.m"
            continue;
#line 1172 "calendar.m"
          }
#line 1167 "calendar.m"
      }
#line 1167 "calendar.m"
      break;
#line 1167 "calendar.m"
    }
#line 311 "calendar.m"
}

#line 305 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_5(
#line 305 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 305 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 305 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 305 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 305 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 305 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 305 "calendar.m"
{
#line 1154 "calendar.m"
  while (MR_TRUE)
#line 1154 "calendar.m"
    {
#line 1154 "calendar.m"
      /* tailcall optimized into a loop */
#line 1154 "calendar.m"
      {
#line 1154 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1154 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1155 "calendar.m"
        {
#line 1155 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1163 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1164 "calendar.m"
          {
#line 1164 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1164 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1164 "calendar.m"
          }
#line 1163 "calendar.m"
        else
#line 1159 "calendar.m"
          {
#line 1159 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1160 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1160 "calendar.m"
            {
#line 1160 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1159 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1159 "calendar.m"
              {
#line 1161 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1161 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1161 "calendar.m"
                {
#line 1161 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1161 "calendar.m"
                {
#line 1161 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1162 "calendar.m"
                /* direct tailcall eliminated */
#line 1162 "calendar.m"
                {
#line 1162 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1162 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1162 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1162 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1162 "calendar.m"
                }
#line 1162 "calendar.m"
                continue;
#line 1159 "calendar.m"
              }
#line 1159 "calendar.m"
          }
#line 1154 "calendar.m"
        return mercury__calendar__succeeded;
#line 1154 "calendar.m"
      }
#line 1154 "calendar.m"
      break;
#line 1154 "calendar.m"
    }
#line 305 "calendar.m"
}

#line 304 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_4(
#line 304 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 304 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 304 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 304 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 304 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 304 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 304 "calendar.m"
{
#line 1154 "calendar.m"
  while (MR_TRUE)
#line 1154 "calendar.m"
    {
#line 1154 "calendar.m"
      /* tailcall optimized into a loop */
#line 1154 "calendar.m"
      {
#line 1154 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1154 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1155 "calendar.m"
        {
#line 1155 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1163 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1164 "calendar.m"
          {
#line 1164 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1164 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1164 "calendar.m"
          }
#line 1163 "calendar.m"
        else
#line 1159 "calendar.m"
          {
#line 1159 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1160 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1160 "calendar.m"
            {
#line 1160 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1159 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1159 "calendar.m"
              {
#line 1161 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1161 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1161 "calendar.m"
                {
#line 1161 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1161 "calendar.m"
                {
#line 1161 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1162 "calendar.m"
                /* direct tailcall eliminated */
#line 1162 "calendar.m"
                {
#line 1162 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1162 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1162 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1162 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1162 "calendar.m"
                }
#line 1162 "calendar.m"
                continue;
#line 1159 "calendar.m"
              }
#line 1159 "calendar.m"
          }
#line 1154 "calendar.m"
        return mercury__calendar__succeeded;
#line 1154 "calendar.m"
      }
#line 1154 "calendar.m"
      break;
#line 1154 "calendar.m"
    }
#line 304 "calendar.m"
}

#line 303 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_3(
#line 303 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 303 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 303 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 303 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 303 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 303 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 303 "calendar.m"
{
#line 1154 "calendar.m"
  while (MR_TRUE)
#line 1154 "calendar.m"
    {
#line 1154 "calendar.m"
      /* tailcall optimized into a loop */
#line 1154 "calendar.m"
      {
#line 1154 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1154 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1155 "calendar.m"
        {
#line 1155 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1163 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1164 "calendar.m"
          {
#line 1164 "calendar.m"
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1164 "calendar.m"
            mercury__calendar__succeeded = MR_TRUE;
#line 1164 "calendar.m"
          }
#line 1163 "calendar.m"
        else
#line 1159 "calendar.m"
          {
#line 1159 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_20_20;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_21_21;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_22_22;
#line 1159 "calendar.m"
            MR_Integer mercury__calendar__V_23_23;
#line 1160 "calendar.m"
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1160 "calendar.m"
            {
#line 1160 "calendar.m"
              mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1159 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1159 "calendar.m"
              {
#line 1161 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1161 "calendar.m"
                mercury__calendar__V_20_20 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_22_22 = (MR_Integer) 0;
#line 1161 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 1161 "calendar.m"
                {
#line 1161 "calendar.m"
                  mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_17_17, mercury__calendar__V_18_18, mercury__calendar__V_19_19, mercury__calendar__V_20_20, mercury__calendar__V_21_21, mercury__calendar__V_22_22, mercury__calendar__V_23_23);
                }
#line 1161 "calendar.m"
                {
#line 1161 "calendar.m"
                  mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
                }
#line 1162 "calendar.m"
                /* direct tailcall eliminated */
#line 1162 "calendar.m"
                {
#line 1162 "calendar.m"
                  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1162 "calendar.m"
                  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1162 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1162 "calendar.m"
                  mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1162 "calendar.m"
                }
#line 1162 "calendar.m"
                continue;
#line 1159 "calendar.m"
              }
#line 1159 "calendar.m"
          }
#line 1154 "calendar.m"
        return mercury__calendar__succeeded;
#line 1154 "calendar.m"
      }
#line 1154 "calendar.m"
      break;
#line 1154 "calendar.m"
    }
#line 303 "calendar.m"
}

#line 302 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_2(
#line 302 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 302 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 302 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 302 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 302 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 302 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 302 "calendar.m"
{
#line 1154 "calendar.m"
  while (MR_TRUE)
#line 1154 "calendar.m"
    {
#line 1154 "calendar.m"
      /* tailcall optimized into a loop */
#line 1154 "calendar.m"
      {
#line 1154 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1154 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1155 "calendar.m"
        {
#line 1155 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1163 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1164 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1163 "calendar.m"
        else
#line 1159 "calendar.m"
          {
#line 1159 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1160 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1160 "calendar.m"
            {
#line 1160 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1161 "calendar.m"
            {
#line 1161 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1161 "calendar.m"
            {
#line 1161 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1162 "calendar.m"
            /* direct tailcall eliminated */
#line 1162 "calendar.m"
            {
#line 1162 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1162 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1162 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1162 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1162 "calendar.m"
            }
#line 1162 "calendar.m"
            continue;
#line 1159 "calendar.m"
          }
#line 1154 "calendar.m"
      }
#line 1154 "calendar.m"
      break;
#line 1154 "calendar.m"
    }
#line 302 "calendar.m"
}

#line 301 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_1(
#line 301 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 301 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 301 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 301 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 301 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 301 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 301 "calendar.m"
{
#line 1154 "calendar.m"
  while (MR_TRUE)
#line 1154 "calendar.m"
    {
#line 1154 "calendar.m"
      /* tailcall optimized into a loop */
#line 1154 "calendar.m"
      {
#line 1154 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1154 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1155 "calendar.m"
        {
#line 1155 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1163 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1164 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1163 "calendar.m"
        else
#line 1159 "calendar.m"
          {
#line 1159 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1160 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1160 "calendar.m"
            {
#line 1160 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1161 "calendar.m"
            {
#line 1161 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1161 "calendar.m"
            {
#line 1161 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1162 "calendar.m"
            /* direct tailcall eliminated */
#line 1162 "calendar.m"
            {
#line 1162 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1162 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1162 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1162 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1162 "calendar.m"
            }
#line 1162 "calendar.m"
            continue;
#line 1159 "calendar.m"
          }
#line 1154 "calendar.m"
      }
#line 1154 "calendar.m"
      break;
#line 1154 "calendar.m"
    }
#line 301 "calendar.m"
}

#line 300 "calendar.m"
void MR_CALL 
mercury__calendar__foldl_days_5_p_0(
#line 300 "calendar.m"
  MR_Word mercury__calendar__TypeInfo_for_A_27,
#line 300 "calendar.m"
  MR_Word mercury__calendar__Pred_6,
#line 300 "calendar.m"
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
#line 300 "calendar.m"
  MR_Word mercury__calendar__End_8,
#line 300 "calendar.m"
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
#line 300 "calendar.m"
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
#line 300 "calendar.m"
{
#line 1154 "calendar.m"
  while (MR_TRUE)
#line 1154 "calendar.m"
    {
#line 1154 "calendar.m"
      /* tailcall optimized into a loop */
#line 1154 "calendar.m"
      {
#line 1154 "calendar.m"
        MR_bool mercury__calendar__succeeded;
#line 1154 "calendar.m"
        MR_Word mercury__calendar__Res_10;

#line 1155 "calendar.m"
        {
#line 1155 "calendar.m"
          mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
        }
#line 1163 "calendar.m"
        if ((mercury__calendar__Res_10 == (MR_Integer) 2))
#line 1164 "calendar.m"
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
#line 1163 "calendar.m"
        else
#line 1159 "calendar.m"
          {
#line 1159 "calendar.m"
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__V_15_15;
#line 1159 "calendar.m"
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1160 "calendar.m"
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

#line 1160 "calendar.m"
            {
#line 1160 "calendar.m"
              mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            }
#line 1161 "calendar.m"
            {
#line 1161 "calendar.m"
              mercury__calendar__V_15_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            }
#line 1161 "calendar.m"
            {
#line 1161 "calendar.m"
              mercury__calendar__add_duration_3_p_0(mercury__calendar__V_15_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            }
#line 1162 "calendar.m"
            /* direct tailcall eliminated */
#line 1162 "calendar.m"
            {
#line 1162 "calendar.m"
              MR_Word mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
#line 1162 "calendar.m"
              MR_Box mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

#line 1162 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 1162 "calendar.m"
              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_0__tmp_copy_11;
#line 1162 "calendar.m"
            }
#line 1162 "calendar.m"
            continue;
#line 1159 "calendar.m"
          }
#line 1154 "calendar.m"
      }
#line 1154 "calendar.m"
      break;
#line 1154 "calendar.m"
    }
#line 300 "calendar.m"
}

#line 283 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__day_duration_2_f_0(
#line 283 "calendar.m"
  MR_Word mercury__calendar__DateA_4,
#line 283 "calendar.m"
  MR_Word mercury__calendar__DateB_5)
#line 283 "calendar.m"
{
#line 861 "calendar.m"
  {
#line 861 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 861 "calendar.m"
    MR_Word mercury__calendar__Duration_6;
#line 861 "calendar.m"
    MR_Word mercury__calendar__CompResult_7;

#line 862 "calendar.m"
    {
#line 862 "calendar.m"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__CompResult_7, mercury__calendar__DateB_5, mercury__calendar__DateA_4);
    }
#line 866 "calendar.m"
    if ((mercury__calendar__CompResult_7 == (MR_Integer) 1))
#line 863 "calendar.m"
      {
#line 863 "calendar.m"
        MR_Word mercury__calendar__Duration0_8;
#line 863 "calendar.m"
        MR_Integer mercury__calendar__Months_88;
#line 863 "calendar.m"
        MR_Integer mercury__calendar__Days_89;
#line 863 "calendar.m"
        MR_Integer mercury__calendar__Seconds_90;
#line 863 "calendar.m"
        MR_Integer mercury__calendar__MicroSeconds_91;
#line 863 "calendar.m"
        MR_Integer mercury__calendar__V_92_92;
#line 863 "calendar.m"
        MR_Integer mercury__calendar__V_93_93;
#line 863 "calendar.m"
        MR_Integer mercury__calendar__V_94_94;
#line 863 "calendar.m"
        MR_Integer mercury__calendar__V_95_95;

#line 864 "calendar.m"
        {
#line 864 "calendar.m"
          mercury__calendar__Duration0_8 = mercury__calendar__day_duration_2_f_0(mercury__calendar__DateB_5, mercury__calendar__DateA_4);
        }
#line 1090 "calendar.m"
        mercury__calendar__Months_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 0)));
#line 1090 "calendar.m"
        mercury__calendar__Days_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 1)));
#line 1090 "calendar.m"
        mercury__calendar__Seconds_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 2)));
#line 1090 "calendar.m"
        mercury__calendar__MicroSeconds_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 3)));
#line 1091 "calendar.m"
        mercury__calendar__V_92_92 = ((MR_Integer) 0 - mercury__calendar__Months_88);
#line 1091 "calendar.m"
        mercury__calendar__V_93_93 = ((MR_Integer) 0 - mercury__calendar__Days_89);
#line 1091 "calendar.m"
        mercury__calendar__V_94_94 = ((MR_Integer) 0 - mercury__calendar__Seconds_90);
#line 1091 "calendar.m"
        mercury__calendar__V_95_95 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_91);
#line 1090 "calendar.m"
        {
#line 1090 "calendar.m"
          mercury__calendar__Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 0) = ((MR_Box) (mercury__calendar__V_92_92));
#line 1090 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 1) = ((MR_Box) (mercury__calendar__V_93_93));
#line 1090 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 2) = ((MR_Box) (mercury__calendar__V_94_94));
#line 1090 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 3) = ((MR_Box) (mercury__calendar__V_95_95));
#line 1090 "calendar.m"
        }
#line 863 "calendar.m"
      }
#line 866 "calendar.m"
    else
#line 866 "calendar.m"
      if ((mercury__calendar__CompResult_7 == (MR_Integer) 0))
#line 1093 "calendar.m"
        mercury__calendar__Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
#line 866 "calendar.m"
      else
#line 868 "calendar.m"
        {
#line 868 "calendar.m"
          MR_Integer mercury__calendar__MicroSecond1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 868 "calendar.m"
          MR_Integer mercury__calendar__MicroSecond2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 868 "calendar.m"
          MR_Integer mercury__calendar__MicroSeconds_12;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Second1_13;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Second2_14;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Seconds_15;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Minute1_16;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Minute2_17;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Minutes_18;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Hour1_19;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Hour2_20;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Hours_21;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__JDN1_22;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__JDN2_23;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__Days_24;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_26_26;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__V_27_27;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_29_29;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__V_30_30;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_32_32;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__V_33_33;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_35_35;
#line 868 "calendar.m"
          MR_Integer mercury__calendar__V_36_36;
#line 870 "calendar.m"
          MR_Integer mercury__calendar__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 870 "calendar.m"
          MR_Integer mercury__calendar__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 870 "calendar.m"
          MR_Integer mercury__calendar__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 870 "calendar.m"
          MR_Integer mercury__calendar__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 870 "calendar.m"
          MR_Integer mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 870 "calendar.m"
          MR_Integer mercury__calendar__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 871 "calendar.m"
          MR_Integer mercury__calendar__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 871 "calendar.m"
          MR_Integer mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 871 "calendar.m"
          MR_Integer mercury__calendar__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 871 "calendar.m"
          MR_Integer mercury__calendar__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 871 "calendar.m"
          MR_Integer mercury__calendar__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 871 "calendar.m"
          MR_Integer mercury__calendar__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 874 "calendar.m"
          MR_Integer mercury__calendar__V_51_51;
#line 874 "calendar.m"
          MR_Integer mercury__calendar__V_52_52;
#line 874 "calendar.m"
          MR_Integer mercury__calendar__V_53_53;
#line 874 "calendar.m"
          MR_Integer mercury__calendar__V_54_54;
#line 874 "calendar.m"
          MR_Integer mercury__calendar__V_55_55;
#line 874 "calendar.m"
          MR_Integer mercury__calendar__V_56_56;
#line 875 "calendar.m"
          MR_Integer mercury__calendar__V_57_57;
#line 875 "calendar.m"
          MR_Integer mercury__calendar__V_58_58;
#line 875 "calendar.m"
          MR_Integer mercury__calendar__V_59_59;
#line 875 "calendar.m"
          MR_Integer mercury__calendar__V_60_60;
#line 875 "calendar.m"
          MR_Integer mercury__calendar__V_61_61;
#line 875 "calendar.m"
          MR_Integer mercury__calendar__V_62_62;
#line 878 "calendar.m"
          MR_Integer mercury__calendar__V_63_63;
#line 878 "calendar.m"
          MR_Integer mercury__calendar__V_64_64;
#line 878 "calendar.m"
          MR_Integer mercury__calendar__V_65_65;
#line 878 "calendar.m"
          MR_Integer mercury__calendar__V_66_66;
#line 878 "calendar.m"
          MR_Integer mercury__calendar__V_67_67;
#line 878 "calendar.m"
          MR_Integer mercury__calendar__V_68_68;
#line 879 "calendar.m"
          MR_Integer mercury__calendar__V_69_69;
#line 879 "calendar.m"
          MR_Integer mercury__calendar__V_70_70;
#line 879 "calendar.m"
          MR_Integer mercury__calendar__V_71_71;
#line 879 "calendar.m"
          MR_Integer mercury__calendar__V_72_72;
#line 879 "calendar.m"
          MR_Integer mercury__calendar__V_73_73;
#line 879 "calendar.m"
          MR_Integer mercury__calendar__V_74_74;
#line 882 "calendar.m"
          MR_Integer mercury__calendar__V_75_75;
#line 882 "calendar.m"
          MR_Integer mercury__calendar__V_76_76;
#line 882 "calendar.m"
          MR_Integer mercury__calendar__V_77_77;
#line 882 "calendar.m"
          MR_Integer mercury__calendar__V_78_78;
#line 882 "calendar.m"
          MR_Integer mercury__calendar__V_79_79;
#line 882 "calendar.m"
          MR_Integer mercury__calendar__V_80_80;
#line 883 "calendar.m"
          MR_Integer mercury__calendar__V_81_81;
#line 883 "calendar.m"
          MR_Integer mercury__calendar__V_82_82;
#line 883 "calendar.m"
          MR_Integer mercury__calendar__V_83_83;
#line 883 "calendar.m"
          MR_Integer mercury__calendar__V_84_84;
#line 883 "calendar.m"
          MR_Integer mercury__calendar__V_85_85;
#line 883 "calendar.m"
          MR_Integer mercury__calendar__V_86_86;

#line 872 "calendar.m"
          {
#line 872 "calendar.m"
            mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 1000000, mercury__calendar__MicroSecond1_10, mercury__calendar__MicroSecond2_11, &mercury__calendar__MicroSeconds_12, &mercury__calendar__STATE_VARIABLE_Borrow_26_26);
          }
#line 874 "calendar.m"
          mercury__calendar__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 874 "calendar.m"
          mercury__calendar__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 874 "calendar.m"
          mercury__calendar__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 874 "calendar.m"
          mercury__calendar__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 874 "calendar.m"
          mercury__calendar__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 874 "calendar.m"
          mercury__calendar__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 874 "calendar.m"
          mercury__calendar__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 874 "calendar.m"
          mercury__calendar__Second1_13 = (mercury__calendar__V_27_27 - mercury__calendar__STATE_VARIABLE_Borrow_26_26);
#line 875 "calendar.m"
          mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 875 "calendar.m"
          mercury__calendar__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 875 "calendar.m"
          mercury__calendar__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 875 "calendar.m"
          mercury__calendar__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 875 "calendar.m"
          mercury__calendar__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 875 "calendar.m"
          mercury__calendar__Second2_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 875 "calendar.m"
          mercury__calendar__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 876 "calendar.m"
          {
#line 876 "calendar.m"
            mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__Second1_13, mercury__calendar__Second2_14, &mercury__calendar__Seconds_15, &mercury__calendar__STATE_VARIABLE_Borrow_29_29);
          }
#line 878 "calendar.m"
          mercury__calendar__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 878 "calendar.m"
          mercury__calendar__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 878 "calendar.m"
          mercury__calendar__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 878 "calendar.m"
          mercury__calendar__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 878 "calendar.m"
          mercury__calendar__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 878 "calendar.m"
          mercury__calendar__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 878 "calendar.m"
          mercury__calendar__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 878 "calendar.m"
          mercury__calendar__Minute1_16 = (mercury__calendar__V_30_30 - mercury__calendar__STATE_VARIABLE_Borrow_29_29);
#line 879 "calendar.m"
          mercury__calendar__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 879 "calendar.m"
          mercury__calendar__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 879 "calendar.m"
          mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 879 "calendar.m"
          mercury__calendar__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 879 "calendar.m"
          mercury__calendar__Minute2_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 879 "calendar.m"
          mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 879 "calendar.m"
          mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 880 "calendar.m"
          {
#line 880 "calendar.m"
            mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__Minute1_16, mercury__calendar__Minute2_17, &mercury__calendar__Minutes_18, &mercury__calendar__STATE_VARIABLE_Borrow_32_32);
          }
#line 882 "calendar.m"
          mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
#line 882 "calendar.m"
          mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
#line 882 "calendar.m"
          mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
#line 882 "calendar.m"
          mercury__calendar__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
#line 882 "calendar.m"
          mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
#line 882 "calendar.m"
          mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
#line 882 "calendar.m"
          mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
#line 882 "calendar.m"
          mercury__calendar__Hour1_19 = (mercury__calendar__V_33_33 - mercury__calendar__STATE_VARIABLE_Borrow_32_32);
#line 883 "calendar.m"
          mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
#line 883 "calendar.m"
          mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
#line 883 "calendar.m"
          mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
#line 883 "calendar.m"
          mercury__calendar__Hour2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
#line 883 "calendar.m"
          mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
#line 883 "calendar.m"
          mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
#line 883 "calendar.m"
          mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
#line 884 "calendar.m"
          {
#line 884 "calendar.m"
            mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, mercury__calendar__Hour1_19, mercury__calendar__Hour2_20, &mercury__calendar__Hours_21, &mercury__calendar__STATE_VARIABLE_Borrow_35_35);
          }
#line 885 "calendar.m"
          {
#line 885 "calendar.m"
            mercury__calendar__JDN1_22 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__DateB_5);
          }
#line 886 "calendar.m"
          {
#line 886 "calendar.m"
            mercury__calendar__JDN2_23 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__DateA_4);
          }
#line 887 "calendar.m"
          mercury__calendar__V_36_36 = (mercury__calendar__JDN1_22 - mercury__calendar__STATE_VARIABLE_Borrow_35_35);
#line 887 "calendar.m"
          mercury__calendar__Days_24 = (mercury__calendar__V_36_36 - mercury__calendar__JDN2_23);
#line 888 "calendar.m"
          {
#line 888 "calendar.m"
            return mercury__calendar__Duration_6 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, mercury__calendar__Days_24, mercury__calendar__Hours_21, mercury__calendar__Minutes_18, mercury__calendar__Seconds_15, mercury__calendar__MicroSeconds_12);
          }
#line 868 "calendar.m"
        }
#line 861 "calendar.m"
    return mercury__calendar__Duration_6;
#line 861 "calendar.m"
  }
#line 283 "calendar.m"
}

#line 277 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__duration_2_f_0(
#line 277 "calendar.m"
  MR_Word mercury__calendar__DateA_4,
#line 277 "calendar.m"
  MR_Word mercury__calendar__DateB_5)
#line 277 "calendar.m"
{
#line 893 "calendar.m"
  {
#line 893 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 893 "calendar.m"
    MR_Word mercury__calendar__Duration_6;
#line 893 "calendar.m"
    MR_Word mercury__calendar__CompResult_7;

#line 894 "calendar.m"
    {
#line 894 "calendar.m"
      mercury__calendar____Compare____date_0_0(&mercury__calendar__CompResult_7, mercury__calendar__DateB_5, mercury__calendar__DateA_4);
    }
#line 899 "calendar.m"
    if ((mercury__calendar__CompResult_7 == (MR_Integer) 1))
#line 896 "calendar.m"
      {
#line 896 "calendar.m"
        MR_Word mercury__calendar__Duration0_8;
#line 896 "calendar.m"
        MR_Integer mercury__calendar__Months_12;
#line 896 "calendar.m"
        MR_Integer mercury__calendar__Days_13;
#line 896 "calendar.m"
        MR_Integer mercury__calendar__Seconds_14;
#line 896 "calendar.m"
        MR_Integer mercury__calendar__MicroSeconds_15;
#line 896 "calendar.m"
        MR_Integer mercury__calendar__V_16_16;
#line 896 "calendar.m"
        MR_Integer mercury__calendar__V_17_17;
#line 896 "calendar.m"
        MR_Integer mercury__calendar__V_18_18;
#line 896 "calendar.m"
        MR_Integer mercury__calendar__V_19_19;

#line 897 "calendar.m"
        {
#line 897 "calendar.m"
          mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 0, mercury__calendar__DateA_4, mercury__calendar__DateB_5, &mercury__calendar__Duration0_8);
        }
#line 1090 "calendar.m"
        mercury__calendar__Months_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 0)));
#line 1090 "calendar.m"
        mercury__calendar__Days_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 1)));
#line 1090 "calendar.m"
        mercury__calendar__Seconds_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 2)));
#line 1090 "calendar.m"
        mercury__calendar__MicroSeconds_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 3)));
#line 1091 "calendar.m"
        mercury__calendar__V_16_16 = ((MR_Integer) 0 - mercury__calendar__Months_12);
#line 1091 "calendar.m"
        mercury__calendar__V_17_17 = ((MR_Integer) 0 - mercury__calendar__Days_13);
#line 1091 "calendar.m"
        mercury__calendar__V_18_18 = ((MR_Integer) 0 - mercury__calendar__Seconds_14);
#line 1091 "calendar.m"
        mercury__calendar__V_19_19 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_15);
#line 1090 "calendar.m"
        {
#line 1090 "calendar.m"
          mercury__calendar__Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 0) = ((MR_Box) (mercury__calendar__V_16_16));
#line 1090 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 1) = ((MR_Box) (mercury__calendar__V_17_17));
#line 1090 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 2) = ((MR_Box) (mercury__calendar__V_18_18));
#line 1090 "calendar.m"
          MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 3) = ((MR_Box) (mercury__calendar__V_19_19));
#line 1090 "calendar.m"
        }
#line 896 "calendar.m"
      }
#line 899 "calendar.m"
    else
#line 899 "calendar.m"
      if ((mercury__calendar__CompResult_7 == (MR_Integer) 0))
#line 1093 "calendar.m"
        mercury__calendar__Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
#line 899 "calendar.m"
      else
#line 903 "calendar.m"
        {
#line 904 "calendar.m"
          {
#line 904 "calendar.m"
            mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 1, mercury__calendar__DateB_5, mercury__calendar__DateA_4, &mercury__calendar__Duration_6);
          }
#line 903 "calendar.m"
        }
#line 893 "calendar.m"
    return mercury__calendar__Duration_6;
#line 893 "calendar.m"
  }
#line 277 "calendar.m"
}

#line 250 "calendar.m"
void MR_CALL 
mercury__calendar__local_time_offset_3_p_0(
#line 250 "calendar.m"
  MR_Word * mercury__calendar__TZ_4)
#line 250 "calendar.m"
{
#line 1082 "calendar.m"
  {
#line 1082 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1082 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1082 "calendar.m"
    MR_Word mercury__calendar__LocalTM_7;
#line 1082 "calendar.m"
    MR_Word mercury__calendar__LocalTime_9;
#line 1082 "calendar.m"
    MR_Word mercury__calendar__GMTime_10;
#line 1082 "calendar.m"
    MR_Box mercury__calendar__Time_3_15;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Yr_5_16;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Mnt_6_17;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__MD_7_18;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Hrs_8_19;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Min_9_20;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Sec_10_21;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__YD_11_22;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__WD_12_23;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__N_13_24;
#line 1082 "calendar.m"
    MR_Word mercury__calendar__V_14_25;
#line 1082 "calendar.m"
    MR_Box mercury__calendar__Time_3_27;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__N_13_36;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__TMYear_40;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_41;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Year_49;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Month_50;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Day_51;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Hour_52;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Minute_53;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Second_54;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__TMYear_60;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_61;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Year_69;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Month_70;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Day_71;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Hour_72;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Minute_73;
#line 1082 "calendar.m"
    MR_Integer mercury__calendar__Second_74;
#line 127 "time.opt"
    MR_Integer mercury__calendar__YD_11_34;
#line 127 "time.opt"
    MR_Integer mercury__calendar__WD_12_35;
#line 96 "time.opt"
    MR_Word mercury__calendar__V_14_37;
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_46_46;
#line 1073 "calendar.m"
    MR_Integer mercury__calendar__V_47_47;
#line 1073 "calendar.m"
    MR_Word mercury__calendar__V_48_48;

#line 1083 "calendar.m"
    {
#line 1083 "calendar.m"
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

#line 11325 "calendar.c"

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
#line 11409 "calendar.c"

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
#line 1073 "calendar.m"
    mercury__calendar__TMYear_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 0)));
#line 1073 "calendar.m"
    mercury__calendar__TMMonth_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 1)));
#line 1073 "calendar.m"
    mercury__calendar__Day_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 2)));
#line 1073 "calendar.m"
    mercury__calendar__Hour_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 3)));
#line 1073 "calendar.m"
    mercury__calendar__Minute_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 4)));
#line 1073 "calendar.m"
    mercury__calendar__Second_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 5)));
#line 1073 "calendar.m"
    mercury__calendar__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 6)));
#line 1073 "calendar.m"
    mercury__calendar__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 7)));
#line 1073 "calendar.m"
    mercury__calendar__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 8)));
#line 1074 "calendar.m"
    mercury__calendar__Year_49 = ((MR_Integer) 1900 + mercury__calendar__TMYear_40);
#line 1075 "calendar.m"
    mercury__calendar__Month_50 = (mercury__calendar__TMMonth_41 + (MR_Integer) 1);
#line 1080 "calendar.m"
    {
#line 1080 "calendar.m"
      mercury__calendar__LocalTime_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 0) = ((MR_Box) (mercury__calendar__Year_49));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 1) = ((MR_Box) (mercury__calendar__Month_50));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 2) = ((MR_Box) (mercury__calendar__Day_51));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 3) = ((MR_Box) (mercury__calendar__Hour_52));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 4) = ((MR_Box) (mercury__calendar__Minute_53));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 5) = ((MR_Box) (mercury__calendar__Second_54));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1080 "calendar.m"
    }
#line 1074 "calendar.m"
    mercury__calendar__Year_69 = ((MR_Integer) 1900 + mercury__calendar__TMYear_60);
#line 1075 "calendar.m"
    mercury__calendar__Month_70 = (mercury__calendar__TMMonth_61 + (MR_Integer) 1);
#line 1080 "calendar.m"
    {
#line 1080 "calendar.m"
      mercury__calendar__GMTime_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 0) = ((MR_Box) (mercury__calendar__Year_69));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 1) = ((MR_Box) (mercury__calendar__Month_70));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 2) = ((MR_Box) (mercury__calendar__Day_71));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 3) = ((MR_Box) (mercury__calendar__Hour_72));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 4) = ((MR_Box) (mercury__calendar__Minute_73));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 5) = ((MR_Box) (mercury__calendar__Second_74));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1080 "calendar.m"
    }
#line 1088 "calendar.m"
    {
#line 1088 "calendar.m"
      *mercury__calendar__TZ_4 = mercury__calendar__duration_2_f_0(mercury__calendar__GMTime_10, mercury__calendar__LocalTime_9);
    }
#line 1082 "calendar.m"
  }
#line 250 "calendar.m"
}

#line 234 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__duration_leq_2_p_0(
#line 234 "calendar.m"
  MR_Word mercury__calendar__DurA_3,
#line 234 "calendar.m"
  MR_Word mercury__calendar__DurB_4)
#line 234 "calendar.m"
{
#line 725 "calendar.m"
  {
#line 725 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 725 "calendar.m"
    MR_Word mercury__calendar__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

#line 726 "calendar.m"
    {
#line 726 "calendar.m"
      return mercury__calendar__succeeded = mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_49_48_95_95_91_51_93_95_48_2_p_in__list_0(mercury__calendar__DurA_3, mercury__calendar__DurB_4, mercury__calendar__V_10_10);
    }
#line 725 "calendar.m"
    return mercury__calendar__succeeded;
#line 725 "calendar.m"
  }
#line 234 "calendar.m"
}

#line 218 "calendar.m"
void MR_CALL 
mercury__calendar__add_duration_3_p_0(
#line 218 "calendar.m"
  MR_Word mercury__calendar__D_4,
#line 218 "calendar.m"
  MR_Word mercury__calendar__S_5,
#line 218 "calendar.m"
  MR_Word * mercury__calendar__E_6)
#line 218 "calendar.m"
{
#line 794 "calendar.m"
  {
#line 794 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__MaxDaysInMonth_9;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__TempDays_10;
#line 794 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_11_11 = (MR_Word) &mercury__calendar_scalar_common_5[1];
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_19_19;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 794 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_22_22;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_26_26;
#line 794 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_29_29;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_31_31;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_32_32;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 794 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_35_35;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_37_37;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_38_38;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_39_39;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_40_40;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_41_41;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_42_42;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_43_43;
#line 794 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_44_44;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_45_45;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_47_47;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_49_49;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_50_50;
#line 794 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_51_51;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_52_52;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_54_54;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_56_56;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_57_57;
#line 794 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_58_58;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_59_59;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_61_61;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_63_63;
#line 794 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_E_68_68;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_69_69;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_70_70;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_71_71;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_94_94;
#line 794 "calendar.m"
    MR_Integer mercury__calendar__V_160_160;
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 796 "calendar.m"
    MR_Integer mercury__calendar__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 797 "calendar.m"
    MR_Integer mercury__calendar__V_82_82;
#line 797 "calendar.m"
    MR_Integer mercury__calendar__V_84_84;
#line 797 "calendar.m"
    MR_Integer mercury__calendar__V_85_85;
#line 797 "calendar.m"
    MR_Integer mercury__calendar__V_86_86;
#line 797 "calendar.m"
    MR_Integer mercury__calendar__V_87_87;
#line 797 "calendar.m"
    MR_Integer mercury__calendar__V_88_88;
#line 797 "calendar.m"
    MR_Integer mercury__calendar__V_83_83;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_89_89;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_92_92;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_93_93;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_96_96;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_97_97;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_98_98;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_99_99;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_100_100;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_101_101;
#line 800 "calendar.m"
    MR_Integer mercury__calendar__V_95_95;
#line 802 "calendar.m"
    MR_Integer mercury__calendar__V_108_108;
#line 802 "calendar.m"
    MR_Integer mercury__calendar__V_109_109;
#line 802 "calendar.m"
    MR_Integer mercury__calendar__V_110_110;
#line 803 "calendar.m"
    MR_Integer mercury__calendar__V_111_111;
#line 803 "calendar.m"
    MR_Integer mercury__calendar__V_112_112;
#line 803 "calendar.m"
    MR_Integer mercury__calendar__V_113_113;
#line 803 "calendar.m"
    MR_Integer mercury__calendar__V_114_114;
#line 803 "calendar.m"
    MR_Integer mercury__calendar__V_115_115;
#line 803 "calendar.m"
    MR_Integer mercury__calendar__V_116_116;
#line 803 "calendar.m"
    MR_Integer mercury__calendar__V_117_117;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_118_118;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_119_119;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_120_120;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_121_121;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_122_122;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_123_123;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_124_124;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_125_125;
#line 806 "calendar.m"
    MR_Integer mercury__calendar__V_126_126;
#line 807 "calendar.m"
    MR_Integer mercury__calendar__V_127_127;
#line 807 "calendar.m"
    MR_Integer mercury__calendar__V_128_128;
#line 807 "calendar.m"
    MR_Integer mercury__calendar__V_129_129;
#line 807 "calendar.m"
    MR_Integer mercury__calendar__V_130_130;
#line 807 "calendar.m"
    MR_Integer mercury__calendar__V_131_131;
#line 807 "calendar.m"
    MR_Integer mercury__calendar__V_133_133;
#line 807 "calendar.m"
    MR_Integer mercury__calendar__V_132_132;
#line 810 "calendar.m"
    MR_Integer mercury__calendar__V_134_134;
#line 810 "calendar.m"
    MR_Integer mercury__calendar__V_135_135;
#line 810 "calendar.m"
    MR_Integer mercury__calendar__V_136_136;
#line 810 "calendar.m"
    MR_Integer mercury__calendar__V_137_137;
#line 810 "calendar.m"
    MR_Integer mercury__calendar__V_138_138;
#line 810 "calendar.m"
    MR_Integer mercury__calendar__V_139_139;
#line 811 "calendar.m"
    MR_Integer mercury__calendar__V_140_140;
#line 811 "calendar.m"
    MR_Integer mercury__calendar__V_141_141;
#line 811 "calendar.m"
    MR_Integer mercury__calendar__V_142_142;
#line 811 "calendar.m"
    MR_Integer mercury__calendar__V_143_143;
#line 811 "calendar.m"
    MR_Integer mercury__calendar__V_145_145;
#line 811 "calendar.m"
    MR_Integer mercury__calendar__V_146_146;
#line 811 "calendar.m"
    MR_Integer mercury__calendar__V_144_144;
#line 814 "calendar.m"
    MR_Integer mercury__calendar__V_147_147;
#line 814 "calendar.m"
    MR_Integer mercury__calendar__V_148_148;
#line 814 "calendar.m"
    MR_Integer mercury__calendar__V_149_149;
#line 814 "calendar.m"
    MR_Integer mercury__calendar__V_150_150;
#line 814 "calendar.m"
    MR_Integer mercury__calendar__V_151_151;
#line 814 "calendar.m"
    MR_Integer mercury__calendar__V_152_152;
#line 815 "calendar.m"
    MR_Integer mercury__calendar__V_153_153;
#line 815 "calendar.m"
    MR_Integer mercury__calendar__V_154_154;
#line 815 "calendar.m"
    MR_Integer mercury__calendar__V_155_155;
#line 815 "calendar.m"
    MR_Integer mercury__calendar__V_157_157;
#line 815 "calendar.m"
    MR_Integer mercury__calendar__V_158_158;
#line 815 "calendar.m"
    MR_Integer mercury__calendar__V_159_159;
#line 815 "calendar.m"
    MR_Integer mercury__calendar__V_156_156;
#line 818 "calendar.m"
    MR_Integer mercury__calendar__V_161_161;
#line 818 "calendar.m"
    MR_Integer mercury__calendar__V_162_162;
#line 818 "calendar.m"
    MR_Integer mercury__calendar__V_163_163;
#line 818 "calendar.m"
    MR_Integer mercury__calendar__V_164_164;
#line 818 "calendar.m"
    MR_Integer mercury__calendar__V_165_165;
#line 819 "calendar.m"
    MR_Integer mercury__calendar__V_65_65;
#line 819 "calendar.m"
    MR_Integer mercury__calendar__V_172_172;
#line 819 "calendar.m"
    MR_Integer mercury__calendar__V_173_173;
#line 819 "calendar.m"
    MR_Integer mercury__calendar__V_174_174;
#line 819 "calendar.m"
    MR_Integer mercury__calendar__V_175_175;
#line 819 "calendar.m"
    MR_Integer mercury__calendar__V_176_176;
#line 819 "calendar.m"
    MR_Integer mercury__calendar__V_177_177;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_190_190;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_191_191;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_192_192;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_193_193;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_194_194;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_196_196;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_197_197;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_198_198;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_199_199;
#line 826 "calendar.m"
    MR_Integer mercury__calendar__V_195_195;

#line 796 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_19_19 = (mercury__calendar__V_20_20 + mercury__calendar__V_21_21);
#line 797 "calendar.m"
    {
#line 797 "calendar.m"
      mercury__calendar__V_23_23 = mercury__calendar__modulo_3_f_0(mercury__calendar__STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    }
#line 797 "calendar.m"
    mercury__calendar__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 0)));
#line 797 "calendar.m"
    mercury__calendar__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 1)));
#line 797 "calendar.m"
    mercury__calendar__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 2)));
#line 797 "calendar.m"
    mercury__calendar__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 3)));
#line 797 "calendar.m"
    mercury__calendar__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 4)));
#line 797 "calendar.m"
    mercury__calendar__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 5)));
#line 797 "calendar.m"
    mercury__calendar__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 6)));
#line 797 "calendar.m"
    {
#line 797 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 797 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 0) = ((MR_Box) (mercury__calendar__V_82_82));
#line 797 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 1) = ((MR_Box) (mercury__calendar__V_23_23));
#line 797 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 2) = ((MR_Box) (mercury__calendar__V_84_84));
#line 797 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 3) = ((MR_Box) (mercury__calendar__V_85_85));
#line 797 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 4) = ((MR_Box) (mercury__calendar__V_86_86));
#line 797 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 5) = ((MR_Box) (mercury__calendar__V_87_87));
#line 797 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 6) = ((MR_Box) (mercury__calendar__V_88_88));
#line 797 "calendar.m"
    }
#line 798 "calendar.m"
    {
#line 798 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_26_26 = mercury__calendar__fquotient_3_f_0(mercury__calendar__STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    }
#line 800 "calendar.m"
    mercury__calendar__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 800 "calendar.m"
    mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 800 "calendar.m"
    mercury__calendar__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 800 "calendar.m"
    mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 800 "calendar.m"
    mercury__calendar__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 800 "calendar.m"
    mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 800 "calendar.m"
    mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 800 "calendar.m"
    mercury__calendar__V_30_30 = (mercury__calendar__V_31_31 + mercury__calendar__STATE_VARIABLE_Carry_26_26);
#line 800 "calendar.m"
    mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 0)));
#line 800 "calendar.m"
    mercury__calendar__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 1)));
#line 800 "calendar.m"
    mercury__calendar__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 2)));
#line 800 "calendar.m"
    mercury__calendar__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 3)));
#line 800 "calendar.m"
    mercury__calendar__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 4)));
#line 800 "calendar.m"
    mercury__calendar__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 5)));
#line 800 "calendar.m"
    mercury__calendar__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 6)));
#line 800 "calendar.m"
    {
#line 800 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 800 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 0) = ((MR_Box) (mercury__calendar__V_30_30));
#line 800 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 1) = ((MR_Box) (mercury__calendar__V_96_96));
#line 800 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 2) = ((MR_Box) (mercury__calendar__V_97_97));
#line 800 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 3) = ((MR_Box) (mercury__calendar__V_98_98));
#line 800 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 4) = ((MR_Box) (mercury__calendar__V_99_99));
#line 800 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 5) = ((MR_Box) (mercury__calendar__V_100_100));
#line 800 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 6) = ((MR_Box) (mercury__calendar__V_101_101));
#line 800 "calendar.m"
    }
#line 802 "calendar.m"
    mercury__calendar__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 802 "calendar.m"
    mercury__calendar__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 802 "calendar.m"
    mercury__calendar__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 802 "calendar.m"
    mercury__calendar__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 802 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_32_32 = (mercury__calendar__V_94_94 + mercury__calendar__V_34_34);
#line 803 "calendar.m"
    {
#line 803 "calendar.m"
      mercury__calendar__V_37_37 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 803 "calendar.m"
    {
#line 803 "calendar.m"
      mercury__calendar__V_36_36 = mercury__calendar__modulo_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_32_32, mercury__calendar__V_37_37);
    }
#line 803 "calendar.m"
    mercury__calendar__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 0)));
#line 803 "calendar.m"
    mercury__calendar__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 1)));
#line 803 "calendar.m"
    mercury__calendar__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 2)));
#line 803 "calendar.m"
    mercury__calendar__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 3)));
#line 803 "calendar.m"
    mercury__calendar__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 4)));
#line 803 "calendar.m"
    mercury__calendar__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 5)));
#line 803 "calendar.m"
    mercury__calendar__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 6)));
#line 803 "calendar.m"
    {
#line 803 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 803 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 0) = ((MR_Box) (mercury__calendar__V_111_111));
#line 803 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 1) = ((MR_Box) (mercury__calendar__V_112_112));
#line 803 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 2) = ((MR_Box) (mercury__calendar__V_113_113));
#line 803 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 3) = ((MR_Box) (mercury__calendar__V_114_114));
#line 803 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 4) = ((MR_Box) (mercury__calendar__V_115_115));
#line 803 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 5) = ((MR_Box) (mercury__calendar__V_116_116));
#line 803 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 6) = ((MR_Box) (mercury__calendar__V_36_36));
#line 803 "calendar.m"
    }
#line 804 "calendar.m"
    {
#line 804 "calendar.m"
      mercury__calendar__V_39_39 = mercury__calendar__microseconds_per_second_0_f_0();
    }
#line 804 "calendar.m"
    {
#line 804 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_38_38 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_32_32, mercury__calendar__V_39_39);
    }
#line 806 "calendar.m"
    mercury__calendar__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 806 "calendar.m"
    mercury__calendar__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 806 "calendar.m"
    mercury__calendar__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 806 "calendar.m"
    mercury__calendar__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 806 "calendar.m"
    mercury__calendar__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 806 "calendar.m"
    mercury__calendar__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 806 "calendar.m"
    mercury__calendar__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 806 "calendar.m"
    mercury__calendar__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 806 "calendar.m"
    mercury__calendar__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 806 "calendar.m"
    mercury__calendar__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 806 "calendar.m"
    mercury__calendar__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 806 "calendar.m"
    mercury__calendar__V_41_41 = (mercury__calendar__V_42_42 + mercury__calendar__V_43_43);
#line 806 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_40_40 = (mercury__calendar__V_41_41 + mercury__calendar__STATE_VARIABLE_Carry_38_38);
#line 807 "calendar.m"
    {
#line 807 "calendar.m"
      mercury__calendar__V_45_45 = mercury__calendar__modulo_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    }
#line 807 "calendar.m"
    mercury__calendar__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 0)));
#line 807 "calendar.m"
    mercury__calendar__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 1)));
#line 807 "calendar.m"
    mercury__calendar__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 2)));
#line 807 "calendar.m"
    mercury__calendar__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 3)));
#line 807 "calendar.m"
    mercury__calendar__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 4)));
#line 807 "calendar.m"
    mercury__calendar__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 5)));
#line 807 "calendar.m"
    mercury__calendar__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 6)));
#line 807 "calendar.m"
    {
#line 807 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 807 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 0) = ((MR_Box) (mercury__calendar__V_127_127));
#line 807 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 1) = ((MR_Box) (mercury__calendar__V_128_128));
#line 807 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 2) = ((MR_Box) (mercury__calendar__V_129_129));
#line 807 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 3) = ((MR_Box) (mercury__calendar__V_130_130));
#line 807 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 4) = ((MR_Box) (mercury__calendar__V_131_131));
#line 807 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 5) = ((MR_Box) (mercury__calendar__V_45_45));
#line 807 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 6) = ((MR_Box) (mercury__calendar__V_133_133));
#line 807 "calendar.m"
    }
#line 808 "calendar.m"
    {
#line 808 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_47_47 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    }
#line 810 "calendar.m"
    mercury__calendar__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 810 "calendar.m"
    mercury__calendar__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 810 "calendar.m"
    mercury__calendar__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 810 "calendar.m"
    mercury__calendar__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 810 "calendar.m"
    mercury__calendar__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 810 "calendar.m"
    mercury__calendar__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 810 "calendar.m"
    mercury__calendar__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 810 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_49_49 = (mercury__calendar__V_50_50 + mercury__calendar__STATE_VARIABLE_Carry_47_47);
#line 811 "calendar.m"
    {
#line 811 "calendar.m"
      mercury__calendar__V_52_52 = mercury__int__mod_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    }
#line 811 "calendar.m"
    mercury__calendar__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 0)));
#line 811 "calendar.m"
    mercury__calendar__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 1)));
#line 811 "calendar.m"
    mercury__calendar__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 2)));
#line 811 "calendar.m"
    mercury__calendar__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 3)));
#line 811 "calendar.m"
    mercury__calendar__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 4)));
#line 811 "calendar.m"
    mercury__calendar__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 5)));
#line 811 "calendar.m"
    mercury__calendar__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 6)));
#line 811 "calendar.m"
    {
#line 811 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 811 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 0) = ((MR_Box) (mercury__calendar__V_140_140));
#line 811 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 1) = ((MR_Box) (mercury__calendar__V_141_141));
#line 811 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 2) = ((MR_Box) (mercury__calendar__V_142_142));
#line 811 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 3) = ((MR_Box) (mercury__calendar__V_143_143));
#line 811 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 4) = ((MR_Box) (mercury__calendar__V_52_52));
#line 811 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 5) = ((MR_Box) (mercury__calendar__V_145_145));
#line 811 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 6) = ((MR_Box) (mercury__calendar__V_146_146));
#line 811 "calendar.m"
    }
#line 812 "calendar.m"
    {
#line 812 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_54_54 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    }
#line 814 "calendar.m"
    mercury__calendar__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 814 "calendar.m"
    mercury__calendar__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 814 "calendar.m"
    mercury__calendar__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 814 "calendar.m"
    mercury__calendar__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 814 "calendar.m"
    mercury__calendar__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 814 "calendar.m"
    mercury__calendar__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 814 "calendar.m"
    mercury__calendar__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 814 "calendar.m"
    mercury__calendar__STATE_VARIABLE_Temp_56_56 = (mercury__calendar__V_57_57 + mercury__calendar__STATE_VARIABLE_Carry_54_54);
#line 815 "calendar.m"
    {
#line 815 "calendar.m"
      mercury__calendar__V_59_59 = mercury__int__mod_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    }
#line 815 "calendar.m"
    mercury__calendar__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 0)));
#line 815 "calendar.m"
    mercury__calendar__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 1)));
#line 815 "calendar.m"
    mercury__calendar__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 2)));
#line 815 "calendar.m"
    mercury__calendar__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 3)));
#line 815 "calendar.m"
    mercury__calendar__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 4)));
#line 815 "calendar.m"
    mercury__calendar__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 5)));
#line 815 "calendar.m"
    mercury__calendar__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 6)));
#line 815 "calendar.m"
    {
#line 815 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 815 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 0) = ((MR_Box) (mercury__calendar__V_153_153));
#line 815 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 1) = ((MR_Box) (mercury__calendar__V_154_154));
#line 815 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 2) = ((MR_Box) (mercury__calendar__V_155_155));
#line 815 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 3) = ((MR_Box) (mercury__calendar__V_59_59));
#line 815 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 4) = ((MR_Box) (mercury__calendar__V_157_157));
#line 815 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 5) = ((MR_Box) (mercury__calendar__V_158_158));
#line 815 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 6) = ((MR_Box) (mercury__calendar__V_159_159));
#line 815 "calendar.m"
    }
#line 816 "calendar.m"
    {
#line 816 "calendar.m"
      mercury__calendar__STATE_VARIABLE_Carry_61_61 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    }
#line 818 "calendar.m"
    mercury__calendar__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
#line 818 "calendar.m"
    mercury__calendar__V_160_160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
#line 818 "calendar.m"
    mercury__calendar__V_161_161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
#line 818 "calendar.m"
    mercury__calendar__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
#line 818 "calendar.m"
    mercury__calendar__V_163_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
#line 818 "calendar.m"
    mercury__calendar__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
#line 818 "calendar.m"
    mercury__calendar__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
#line 818 "calendar.m"
    {
#line 818 "calendar.m"
      mercury__calendar__MaxDaysInMonth_9 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__V_63_63, mercury__calendar__V_160_160);
    }
#line 819 "calendar.m"
    mercury__calendar__V_172_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 819 "calendar.m"
    mercury__calendar__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 819 "calendar.m"
    mercury__calendar__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 819 "calendar.m"
    mercury__calendar__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 819 "calendar.m"
    mercury__calendar__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 819 "calendar.m"
    mercury__calendar__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 819 "calendar.m"
    mercury__calendar__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 819 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__V_65_65 > mercury__calendar__MaxDaysInMonth_9);
#line 821 "calendar.m"
    if (mercury__calendar__succeeded)
#line 820 "calendar.m"
      mercury__calendar__TempDays_10 = mercury__calendar__MaxDaysInMonth_9;
#line 821 "calendar.m"
    else
#line 823 "calendar.m"
      {
#line 821 "calendar.m"
        MR_Integer mercury__calendar__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 821 "calendar.m"
        MR_Integer mercury__calendar__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 821 "calendar.m"
        MR_Integer mercury__calendar__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 821 "calendar.m"
        MR_Integer mercury__calendar__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 821 "calendar.m"
        MR_Integer mercury__calendar__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 821 "calendar.m"
        MR_Integer mercury__calendar__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 821 "calendar.m"
        MR_Integer mercury__calendar__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));

#line 821 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_66_66 < (MR_Integer) 1);
#line 823 "calendar.m"
        if (mercury__calendar__succeeded)
#line 822 "calendar.m"
          mercury__calendar__TempDays_10 = (MR_Integer) 1;
#line 823 "calendar.m"
        else
#line 824 "calendar.m"
          {
#line 824 "calendar.m"
            MR_Integer mercury__calendar__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
#line 824 "calendar.m"
            MR_Integer mercury__calendar__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
#line 824 "calendar.m"
            MR_Integer mercury__calendar__V_186_186;
#line 824 "calendar.m"
            MR_Integer mercury__calendar__V_187_187;
#line 824 "calendar.m"
            MR_Integer mercury__calendar__V_188_188;
#line 824 "calendar.m"
            MR_Integer mercury__calendar__V_189_189;

#line 824 "calendar.m"
            mercury__calendar__TempDays_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
#line 824 "calendar.m"
            mercury__calendar__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
#line 824 "calendar.m"
            mercury__calendar__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
#line 824 "calendar.m"
            mercury__calendar__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
#line 824 "calendar.m"
            mercury__calendar__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
#line 824 "calendar.m"
          }
#line 823 "calendar.m"
      }
#line 826 "calendar.m"
    mercury__calendar__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
#line 826 "calendar.m"
    mercury__calendar__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
#line 826 "calendar.m"
    mercury__calendar__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
#line 826 "calendar.m"
    mercury__calendar__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
#line 826 "calendar.m"
    mercury__calendar__V_70_70 = (mercury__calendar__TempDays_10 + mercury__calendar__V_71_71);
#line 826 "calendar.m"
    mercury__calendar__V_69_69 = (mercury__calendar__V_70_70 + mercury__calendar__STATE_VARIABLE_Carry_61_61);
#line 826 "calendar.m"
    mercury__calendar__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
#line 826 "calendar.m"
    mercury__calendar__V_194_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
#line 826 "calendar.m"
    mercury__calendar__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
#line 826 "calendar.m"
    mercury__calendar__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
#line 826 "calendar.m"
    mercury__calendar__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
#line 826 "calendar.m"
    mercury__calendar__V_198_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
#line 826 "calendar.m"
    mercury__calendar__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
#line 826 "calendar.m"
    {
#line 826 "calendar.m"
      mercury__calendar__STATE_VARIABLE_E_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 826 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 0) = ((MR_Box) (mercury__calendar__V_193_193));
#line 826 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 1) = ((MR_Box) (mercury__calendar__V_194_194));
#line 826 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 2) = ((MR_Box) (mercury__calendar__V_69_69));
#line 826 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 3) = ((MR_Box) (mercury__calendar__V_196_196));
#line 826 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 4) = ((MR_Box) (mercury__calendar__V_197_197));
#line 826 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 5) = ((MR_Box) (mercury__calendar__V_198_198));
#line 826 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 6) = ((MR_Box) (mercury__calendar__V_199_199));
#line 826 "calendar.m"
    }
#line 827 "calendar.m"
    {
#line 827 "calendar.m"
      mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__calendar__STATE_VARIABLE_E_68_68, mercury__calendar__E_6);
#line 827 "calendar.m"
      return;
    }
#line 794 "calendar.m"
  }
#line 218 "calendar.m"
}

#line 208 "calendar.m"
MR_String MR_CALL 
mercury__calendar__duration_to_string_1_f_0(
#line 208 "calendar.m"
  MR_Word mercury__calendar__Duration_1)
#line 208 "calendar.m"
{
#line 650 "calendar.m"
  {
#line 650 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 650 "calendar.m"
    MR_String mercury__calendar__Str_8;
#line 650 "calendar.m"
    MR_Integer mercury__calendar__Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 650 "calendar.m"
    MR_Integer mercury__calendar__Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 650 "calendar.m"
    MR_Integer mercury__calendar__Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 650 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));

#line 652 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Months_3 == (MR_Integer) 0);
#line 652 "calendar.m"
    if (mercury__calendar__succeeded)
#line 652 "calendar.m"
      {
#line 653 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Days_4 == (MR_Integer) 0);
#line 652 "calendar.m"
        if (mercury__calendar__succeeded)
#line 652 "calendar.m"
          {
#line 654 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Seconds_5 == (MR_Integer) 0);
#line 652 "calendar.m"
            if (mercury__calendar__succeeded)
#line 655 "calendar.m"
              mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 == (MR_Integer) 0);
#line 652 "calendar.m"
          }
#line 652 "calendar.m"
      }
#line 660 "calendar.m"
    if (mercury__calendar__succeeded)
#line 659 "calendar.m"
      mercury__calendar__Str_8 = (MR_String) "P0D";
#line 660 "calendar.m"
    else
#line 679 "calendar.m"
      {
#line 679 "calendar.m"
        MR_Word mercury__calendar__TypeCtorInfo_59_59;
#line 679 "calendar.m"
        MR_Integer mercury__calendar__Sign_9;
#line 679 "calendar.m"
        MR_String mercury__calendar__SignStr_10;
#line 679 "calendar.m"
        MR_Word mercury__calendar__TimePart_11;
#line 679 "calendar.m"
        MR_Word mercury__calendar__V_39_39;
#line 679 "calendar.m"
        MR_Word mercury__calendar__V_40_40;
#line 679 "calendar.m"
        MR_Word mercury__calendar__V_41_41;
#line 679 "calendar.m"
        MR_Word mercury__calendar__V_43_43;
#line 679 "calendar.m"
        MR_String mercury__calendar__V_44_44;
#line 679 "calendar.m"
        MR_Integer mercury__calendar__V_45_45;
#line 679 "calendar.m"
        MR_Integer mercury__calendar__V_46_46;
#line 679 "calendar.m"
        MR_Word mercury__calendar__V_48_48;
#line 679 "calendar.m"
        MR_String mercury__calendar__V_49_49;
#line 679 "calendar.m"
        MR_Integer mercury__calendar__V_50_50;
#line 679 "calendar.m"
        MR_Integer mercury__calendar__V_51_51;
#line 679 "calendar.m"
        MR_Word mercury__calendar__V_53_53;
#line 679 "calendar.m"
        MR_String mercury__calendar__V_54_54;
#line 679 "calendar.m"
        MR_Integer mercury__calendar__V_55_55;
#line 679 "calendar.m"
        MR_Integer mercury__calendar__V_56_56;
#line 679 "calendar.m"
        MR_Word mercury__calendar__V_58_58;
#line 662 "calendar.m"
        MR_Integer mercury__calendar__V_13_13;
#line 662 "calendar.m"
        MR_Integer mercury__calendar__V_14_14;
#line 662 "calendar.m"
        MR_Integer mercury__calendar__V_15_15;
#line 1031 "calendar.m"
        MR_Integer mercury__calendar__V_93_93;
#line 1031 "calendar.m"
        MR_Integer mercury__calendar__V_94_94;
#line 1031 "calendar.m"
        MR_Integer mercury__calendar__V_95_95;

#line 662 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Months_3 >= (MR_Integer) 0);
#line 662 "calendar.m"
        if (mercury__calendar__succeeded)
#line 662 "calendar.m"
          {
#line 663 "calendar.m"
            mercury__calendar__V_13_13 = (MR_Integer) 0;
#line 663 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Days_4 >= mercury__calendar__V_13_13);
#line 662 "calendar.m"
            if (mercury__calendar__succeeded)
#line 662 "calendar.m"
              {
#line 664 "calendar.m"
                mercury__calendar__V_14_14 = (MR_Integer) 0;
#line 664 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Seconds_5 >= mercury__calendar__V_14_14);
#line 662 "calendar.m"
                if (mercury__calendar__succeeded)
#line 662 "calendar.m"
                  {
#line 665 "calendar.m"
                    mercury__calendar__V_15_15 = (MR_Integer) 0;
#line 665 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 >= mercury__calendar__V_15_15);
#line 662 "calendar.m"
                  }
#line 662 "calendar.m"
              }
#line 662 "calendar.m"
          }
#line 669 "calendar.m"
        if (mercury__calendar__succeeded)
#line 667 "calendar.m"
          {
#line 667 "calendar.m"
            mercury__calendar__Sign_9 = (MR_Integer) 1;
#line 668 "calendar.m"
            mercury__calendar__SignStr_10 = (MR_String) "";
#line 667 "calendar.m"
          }
#line 669 "calendar.m"
        else
#line 677 "calendar.m"
          {
#line 670 "calendar.m"
            MR_Integer mercury__calendar__V_17_17;
#line 670 "calendar.m"
            MR_Integer mercury__calendar__V_18_18;
#line 670 "calendar.m"
            MR_Integer mercury__calendar__V_19_19;

#line 670 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Months_3 <= (MR_Integer) 0);
#line 670 "calendar.m"
            if (mercury__calendar__succeeded)
#line 670 "calendar.m"
              {
#line 671 "calendar.m"
                mercury__calendar__V_17_17 = (MR_Integer) 0;
#line 671 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Days_4 <= mercury__calendar__V_17_17);
#line 670 "calendar.m"
                if (mercury__calendar__succeeded)
#line 670 "calendar.m"
                  {
#line 672 "calendar.m"
                    mercury__calendar__V_18_18 = (MR_Integer) 0;
#line 672 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Seconds_5 <= mercury__calendar__V_18_18);
#line 670 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 670 "calendar.m"
                      {
#line 673 "calendar.m"
                        mercury__calendar__V_19_19 = (MR_Integer) 0;
#line 673 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 <= mercury__calendar__V_19_19);
#line 670 "calendar.m"
                      }
#line 670 "calendar.m"
                  }
#line 670 "calendar.m"
              }
#line 677 "calendar.m"
            if (mercury__calendar__succeeded)
#line 675 "calendar.m"
              {
#line 675 "calendar.m"
                mercury__calendar__Sign_9 = (MR_Integer) -1;
#line 676 "calendar.m"
                mercury__calendar__SignStr_10 = (MR_String) "-";
#line 675 "calendar.m"
              }
#line 677 "calendar.m"
            else
#line 678 "calendar.m"
              {
#line 678 "calendar.m"
                {
#line 678 "calendar.m"
                  mercury__require__error_1_p_0((MR_String) "duration_to_string: duration components have mixed signs");
                }
#line 678 "calendar.m"
              }
#line 677 "calendar.m"
          }
#line 681 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Seconds_5 == (MR_Integer) 0);
#line 681 "calendar.m"
        if (mercury__calendar__succeeded)
#line 682 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 == (MR_Integer) 0);
#line 685 "calendar.m"
        if (mercury__calendar__succeeded)
#line 684 "calendar.m"
          mercury__calendar__TimePart_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "calendar.m"
        else
#line 686 "calendar.m"
          {
#line 686 "calendar.m"
            MR_Word mercury__calendar__V_22_22;
#line 686 "calendar.m"
            MR_String mercury__calendar__V_23_23;
#line 686 "calendar.m"
            MR_Integer mercury__calendar__V_24_24;
#line 686 "calendar.m"
            MR_Integer mercury__calendar__V_25_25;
#line 686 "calendar.m"
            MR_Word mercury__calendar__V_27_27;
#line 686 "calendar.m"
            MR_String mercury__calendar__V_28_28;
#line 686 "calendar.m"
            MR_Integer mercury__calendar__V_29_29;
#line 686 "calendar.m"
            MR_Integer mercury__calendar__V_30_30;
#line 686 "calendar.m"
            MR_Word mercury__calendar__V_32_32;
#line 686 "calendar.m"
            MR_String mercury__calendar__V_33_33;
#line 686 "calendar.m"
            MR_Integer mercury__calendar__V_34_34;
#line 686 "calendar.m"
            MR_Integer mercury__calendar__V_35_35;
#line 686 "calendar.m"
            MR_Integer mercury__calendar__V_36_36;
#line 686 "calendar.m"
            MR_Integer mercury__calendar__V_37_37;
#line 686 "calendar.m"
            MR_Word mercury__calendar__V_38_38;
#line 1035 "calendar.m"
            MR_Integer mercury__calendar__V_89_89;
#line 1035 "calendar.m"
            MR_Integer mercury__calendar__V_90_90;
#line 1035 "calendar.m"
            MR_Integer mercury__calendar__V_91_91;

#line 687 "calendar.m"
            {
#line 687 "calendar.m"
              mercury__calendar__V_25_25 = mercury__calendar__hours_1_f_0(mercury__calendar__Duration_1);
            }
#line 687 "calendar.m"
            mercury__calendar__V_24_24 = (mercury__calendar__Sign_9 * mercury__calendar__V_25_25);
#line 703 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_24_24 == (MR_Integer) 0);
#line 702 "calendar.m"
            if (mercury__calendar__succeeded)
#line 702 "calendar.m"
              mercury__calendar__V_23_23 = (MR_String) "";
#line 702 "calendar.m"
            else
#line 706 "calendar.m"
              {
#line 706 "calendar.m"
                MR_String mercury__calendar__V_62_62;

#line 292 "string.opt"
                {
#line 292 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__calendar__V_24_24, (MR_Integer) 10, &mercury__calendar__V_62_62);
                }
#line 255 "string.opt"
                {
#line 255 "string.opt"
                  mercury__string__append_3_p_2(mercury__calendar__V_62_62, (MR_String) "H", &mercury__calendar__V_23_23);
                }
#line 706 "calendar.m"
              }
#line 688 "calendar.m"
            {
#line 688 "calendar.m"
              mercury__calendar__V_30_30 = mercury__calendar__minutes_1_f_0(mercury__calendar__Duration_1);
            }
#line 688 "calendar.m"
            mercury__calendar__V_29_29 = (mercury__calendar__Sign_9 * mercury__calendar__V_30_30);
#line 703 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_29_29 == (MR_Integer) 0);
#line 702 "calendar.m"
            if (mercury__calendar__succeeded)
#line 702 "calendar.m"
              mercury__calendar__V_28_28 = (MR_String) "";
#line 702 "calendar.m"
            else
#line 706 "calendar.m"
              {
#line 706 "calendar.m"
                MR_String mercury__calendar__V_76_76;

#line 292 "string.opt"
                {
#line 292 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__calendar__V_29_29, (MR_Integer) 10, &mercury__calendar__V_76_76);
                }
#line 255 "string.opt"
                {
#line 255 "string.opt"
                  mercury__string__append_3_p_2(mercury__calendar__V_76_76, (MR_String) "M", &mercury__calendar__V_28_28);
                }
#line 706 "calendar.m"
              }
#line 689 "calendar.m"
            {
#line 689 "calendar.m"
              mercury__calendar__V_35_35 = mercury__calendar__seconds_1_f_0(mercury__calendar__Duration_1);
            }
#line 689 "calendar.m"
            mercury__calendar__V_34_34 = (mercury__calendar__Sign_9 * mercury__calendar__V_35_35);
#line 1035 "calendar.m"
            mercury__calendar__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 1035 "calendar.m"
            mercury__calendar__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 1035 "calendar.m"
            mercury__calendar__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 1035 "calendar.m"
            mercury__calendar__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
#line 689 "calendar.m"
            mercury__calendar__V_36_36 = (mercury__calendar__Sign_9 * mercury__calendar__V_37_37);
#line 691 "calendar.m"
            {
#line 691 "calendar.m"
              mercury__calendar__V_33_33 = mercury__calendar__seconds_duration_string_2_f_0(mercury__calendar__V_34_34, mercury__calendar__V_36_36);
            }
#line 691 "calendar.m"
            mercury__calendar__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 688 "calendar.m"
            {
#line 688 "calendar.m"
              mercury__calendar__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 0) = ((MR_Box) (mercury__calendar__V_33_33));
#line 688 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 1) = ((MR_Box) (mercury__calendar__V_38_38));
#line 688 "calendar.m"
            }
#line 687 "calendar.m"
            {
#line 687 "calendar.m"
              mercury__calendar__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 0) = ((MR_Box) (mercury__calendar__V_28_28));
#line 687 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 1) = ((MR_Box) (mercury__calendar__V_32_32));
#line 687 "calendar.m"
            }
#line 686 "calendar.m"
            {
#line 686 "calendar.m"
              mercury__calendar__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 0) = ((MR_Box) (mercury__calendar__V_23_23));
#line 686 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 1) = ((MR_Box) (mercury__calendar__V_27_27));
#line 686 "calendar.m"
            }
#line 686 "calendar.m"
            {
#line 686 "calendar.m"
              mercury__calendar__TimePart_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_11, 0) = ((MR_Box) ((MR_String) "T"));
#line 686 "calendar.m"
              MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_11, 1) = ((MR_Box) (mercury__calendar__V_22_22));
#line 686 "calendar.m"
            }
#line 686 "calendar.m"
          }
#line 12736 "calendar.c"
        mercury__calendar__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 695 "calendar.m"
        {
#line 695 "calendar.m"
          mercury__calendar__V_46_46 = mercury__calendar__years_1_f_0(mercury__calendar__Duration_1);
        }
#line 695 "calendar.m"
        mercury__calendar__V_45_45 = (mercury__calendar__Sign_9 * mercury__calendar__V_46_46);
#line 695 "calendar.m"
        {
#line 695 "calendar.m"
          mercury__calendar__V_44_44 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_45_45, (MR_String) "Y");
        }
#line 696 "calendar.m"
        {
#line 696 "calendar.m"
          mercury__calendar__V_51_51 = mercury__calendar__months_1_f_0(mercury__calendar__Duration_1);
        }
#line 696 "calendar.m"
        mercury__calendar__V_50_50 = (mercury__calendar__Sign_9 * mercury__calendar__V_51_51);
#line 696 "calendar.m"
        {
#line 696 "calendar.m"
          mercury__calendar__V_49_49 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_50_50, (MR_String) "M");
        }
#line 1031 "calendar.m"
        mercury__calendar__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
#line 1031 "calendar.m"
        mercury__calendar__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
#line 1031 "calendar.m"
        mercury__calendar__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
#line 1031 "calendar.m"
        mercury__calendar__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
#line 697 "calendar.m"
        mercury__calendar__V_55_55 = (mercury__calendar__Sign_9 * mercury__calendar__V_56_56);
#line 697 "calendar.m"
        {
#line 697 "calendar.m"
          mercury__calendar__V_54_54 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__V_55_55, (MR_String) "D");
        }
#line 697 "calendar.m"
        mercury__calendar__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "calendar.m"
        {
#line 696 "calendar.m"
          mercury__calendar__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_53_53, 0) = ((MR_Box) (mercury__calendar__V_54_54));
#line 696 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_53_53, 1) = ((MR_Box) (mercury__calendar__V_58_58));
#line 696 "calendar.m"
        }
#line 695 "calendar.m"
        {
#line 695 "calendar.m"
          mercury__calendar__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_48_48, 0) = ((MR_Box) (mercury__calendar__V_49_49));
#line 695 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_48_48, 1) = ((MR_Box) (mercury__calendar__V_53_53));
#line 695 "calendar.m"
        }
#line 694 "calendar.m"
        {
#line 694 "calendar.m"
          mercury__calendar__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_43_43, 0) = ((MR_Box) (mercury__calendar__V_44_44));
#line 694 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_43_43, 1) = ((MR_Box) (mercury__calendar__V_48_48));
#line 694 "calendar.m"
        }
#line 694 "calendar.m"
        {
#line 694 "calendar.m"
          mercury__calendar__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_41_41, 0) = ((MR_Box) ((MR_String) "P"));
#line 694 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_41_41, 1) = ((MR_Box) (mercury__calendar__V_43_43));
#line 694 "calendar.m"
        }
#line 697 "calendar.m"
        {
#line 697 "calendar.m"
          mercury__calendar__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_40_40, 0) = ((MR_Box) (mercury__calendar__SignStr_10));
#line 697 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_40_40, 1) = ((MR_Box) (mercury__calendar__V_41_41));
#line 697 "calendar.m"
        }
#line 693 "calendar.m"
        {
#line 693 "calendar.m"
          mercury__calendar__V_39_39 = mercury__list__f_43_43_2_f_0(mercury__calendar__TypeCtorInfo_59_59, mercury__calendar__V_40_40, mercury__calendar__TimePart_11);
        }
#line 693 "calendar.m"
        {
#line 693 "calendar.m"
          return mercury__calendar__Str_8 = mercury__string__append_list_1_f_0(mercury__calendar__V_39_39);
        }
#line 679 "calendar.m"
      }
#line 650 "calendar.m"
    return mercury__calendar__Str_8;
#line 650 "calendar.m"
  }
#line 208 "calendar.m"
}

#line 203 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_duration_from_string_1_f_0(
#line 203 "calendar.m"
  MR_String mercury__calendar__Str_3)
#line 203 "calendar.m"
{
#line 616 "calendar.m"
  {
#line 616 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 616 "calendar.m"
    MR_Word mercury__calendar__Duration_4;
#line 616 "calendar.m"
    MR_Word mercury__calendar__Duration0_5;

#line 614 "calendar.m"
    {
#line 614 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__duration_from_string_2_p_0(mercury__calendar__Str_3, &mercury__calendar__Duration0_5);
    }
#line 616 "calendar.m"
    if (mercury__calendar__succeeded)
#line 615 "calendar.m"
      mercury__calendar__Duration_4 = mercury__calendar__Duration0_5;
#line 616 "calendar.m"
    else
#line 617 "calendar.m"
      {
#line 617 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 255 "string.opt"
        {
#line 255 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_duration_from_string: invalid duration: ", mercury__calendar__Str_3, &mercury__calendar__V_6_6);
        }
#line 617 "calendar.m"
        {
#line 617 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 617 "calendar.m"
      }
#line 616 "calendar.m"
    return mercury__calendar__Duration_4;
#line 616 "calendar.m"
  }
#line 203 "calendar.m"
}

#line 199 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__duration_from_string_2_p_0(
#line 199 "calendar.m"
  MR_String mercury__calendar__Str_3,
#line 199 "calendar.m"
  MR_Word * mercury__calendar__Duration_4)
#line 199 "calendar.m"
{
#line 451 "calendar.m"
  {
#line 451 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 451 "calendar.m"
    MR_Integer mercury__calendar__Sign_6;
#line 451 "calendar.m"
    MR_Integer mercury__calendar__Years_7;
#line 451 "calendar.m"
    MR_Integer mercury__calendar__Months_8;
#line 451 "calendar.m"
    MR_Integer mercury__calendar__Days_9;
#line 451 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_17_17;
#line 451 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_18_18;
#line 451 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_20_20;
#line 451 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_21_21;
#line 451 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_22_22;
#line 451 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_23_23;
#line 451 "calendar.m"
    MR_Char mercury__calendar__V_44_44;
#line 451 "calendar.m"
    MR_Char mercury__calendar__V_61_61;
#line 479 "calendar.m"
    MR_Word mercury__calendar__Rest_52;
#line 476 "calendar.m"
    MR_Char mercury__calendar__V_53_53;
#line 539 "calendar.m"
    MR_Integer mercury__calendar__Int0_68;
#line 539 "calendar.m"
    MR_Word mercury__calendar__Rest_70;
#line 534 "calendar.m"
    MR_Word mercury__calendar__Chars1_69;
#line 534 "calendar.m"
    MR_Char mercury__calendar__V_72_72;
#line 534 "calendar.m"
    MR_Integer mercury__calendar__V_77_77;
#line 466 "calendar.m"
    MR_Word mercury__calendar__TimePart_10;
#line 457 "calendar.m"
    MR_Char mercury__calendar__V_24_24;
#line 457 "calendar.m"
    MR_Char mercury__calendar__V_45_45;

#line 387 "string.opt"
    {
#line 387 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__calendar__Str_3, &mercury__calendar__STATE_VARIABLE_Chars_17_17);
    }
#line 476 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 476 "calendar.m"
    if (mercury__calendar__succeeded)
#line 476 "calendar.m"
      {
#line 476 "calendar.m"
        mercury__calendar__V_53_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_17_17, (MR_Integer) 0)));
#line 476 "calendar.m"
        mercury__calendar__Rest_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_17_17, (MR_Integer) 1)));
#line 476 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__V_53_53 == (MR_Char) 45);
#line 476 "calendar.m"
      }
#line 479 "calendar.m"
    if (mercury__calendar__succeeded)
#line 477 "calendar.m"
      {
#line 477 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_18_18 = mercury__calendar__Rest_52;
#line 478 "calendar.m"
        mercury__calendar__Sign_6 = (MR_Integer) -1;
#line 477 "calendar.m"
      }
#line 479 "calendar.m"
    else
#line 480 "calendar.m"
      {
#line 480 "calendar.m"
        mercury__calendar__Sign_6 = (MR_Integer) 1;
#line 480 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_18_18 = mercury__calendar__STATE_VARIABLE_Chars_17_17;
#line 480 "calendar.m"
      }
#line 485 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 485 "calendar.m"
    if (mercury__calendar__succeeded)
#line 485 "calendar.m"
      {
#line 485 "calendar.m"
        mercury__calendar__V_44_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_18_18, (MR_Integer) 0)));
#line 485 "calendar.m"
        mercury__calendar__STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_18_18, (MR_Integer) 1)));
#line 453 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 80 == mercury__calendar__V_44_44);
#line 451 "calendar.m"
        if (mercury__calendar__succeeded)
#line 451 "calendar.m"
          {
#line 490 "calendar.m"
            mercury__calendar__V_61_61 = (MR_Char) 89;
#line 546 "calendar.m"
            mercury__calendar__V_77_77 = (MR_Integer) 0;
#line 546 "calendar.m"
            {
#line 546 "calendar.m"
              mercury__calendar__read_int_2_4_p_0(mercury__calendar__V_77_77, &mercury__calendar__Int0_68, mercury__calendar__STATE_VARIABLE_Chars_20_20, &mercury__calendar__Chars1_69);
            }
#line 535 "calendar.m"
            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_69)) == (MR_mktag((MR_Integer) 1)));
#line 535 "calendar.m"
            if (mercury__calendar__succeeded)
#line 535 "calendar.m"
              {
#line 535 "calendar.m"
                mercury__calendar__V_72_72 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_69, (MR_Integer) 0)));
#line 535 "calendar.m"
                mercury__calendar__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_69, (MR_Integer) 1)));
#line 535 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_61_61 == mercury__calendar__V_72_72);
#line 535 "calendar.m"
              }
#line 539 "calendar.m"
            if (mercury__calendar__succeeded)
#line 537 "calendar.m"
              {
#line 537 "calendar.m"
                mercury__calendar__STATE_VARIABLE_Chars_21_21 = mercury__calendar__Rest_70;
#line 538 "calendar.m"
                mercury__calendar__Years_7 = mercury__calendar__Int0_68;
#line 537 "calendar.m"
              }
#line 539 "calendar.m"
            else
#line 540 "calendar.m"
              {
#line 540 "calendar.m"
                mercury__calendar__Years_7 = (MR_Integer) 0;
#line 540 "calendar.m"
                mercury__calendar__STATE_VARIABLE_Chars_21_21 = mercury__calendar__STATE_VARIABLE_Chars_20_20;
#line 540 "calendar.m"
              }
#line 455 "calendar.m"
            {
#line 455 "calendar.m"
              mercury__calendar__read_months_3_p_0(&mercury__calendar__Months_8, mercury__calendar__STATE_VARIABLE_Chars_21_21, &mercury__calendar__STATE_VARIABLE_Chars_22_22);
            }
#line 456 "calendar.m"
            {
#line 456 "calendar.m"
              mercury__calendar__read_days_3_p_0(&mercury__calendar__Days_9, mercury__calendar__STATE_VARIABLE_Chars_22_22, &mercury__calendar__STATE_VARIABLE_Chars_23_23);
            }
#line 457 "calendar.m"
            mercury__calendar__V_24_24 = (MR_Char) 84;
#line 485 "calendar.m"
            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 485 "calendar.m"
            if (mercury__calendar__succeeded)
#line 485 "calendar.m"
              {
#line 485 "calendar.m"
                mercury__calendar__V_45_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_23_23, (MR_Integer) 0)));
#line 485 "calendar.m"
                mercury__calendar__TimePart_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_23_23, (MR_Integer) 1)));
#line 457 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_24_24 == mercury__calendar__V_45_45);
#line 485 "calendar.m"
              }
#line 466 "calendar.m"
            if (mercury__calendar__succeeded)
#line 458 "calendar.m"
              {
#line 458 "calendar.m"
                MR_Integer mercury__calendar__Hours_13;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__Minutes_14;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__Seconds_15;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__MicroSeconds_16;
#line 458 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_25_25;
#line 458 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_26_26;
#line 458 "calendar.m"
                MR_Word mercury__calendar__STATE_VARIABLE_Chars_27_27;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__V_28_28;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__V_29_29;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__V_30_30;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__V_31_31;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__V_32_32;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__V_33_33;
#line 458 "calendar.m"
                MR_Integer mercury__calendar__V_34_34;
#line 458 "calendar.m"
                MR_Char mercury__calendar__V_11_11;
#line 458 "calendar.m"
                MR_Word mercury__calendar__V_12_12;

#line 458 "calendar.m"
                mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__TimePart_10)) == (MR_mktag((MR_Integer) 1)));
#line 458 "calendar.m"
                if (mercury__calendar__succeeded)
#line 458 "calendar.m"
                  {
#line 458 "calendar.m"
                    mercury__calendar__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_10, (MR_Integer) 0)));
#line 458 "calendar.m"
                    mercury__calendar__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_10, (MR_Integer) 1)));
#line 459 "calendar.m"
                    {
#line 459 "calendar.m"
                      mercury__calendar__read_hours_3_p_0(&mercury__calendar__Hours_13, mercury__calendar__TimePart_10, &mercury__calendar__STATE_VARIABLE_Chars_25_25);
                    }
#line 460 "calendar.m"
                    {
#line 460 "calendar.m"
                      mercury__calendar__read_minutes_3_p_0(&mercury__calendar__Minutes_14, mercury__calendar__STATE_VARIABLE_Chars_25_25, &mercury__calendar__STATE_VARIABLE_Chars_26_26);
                    }
#line 461 "calendar.m"
                    {
#line 461 "calendar.m"
                      mercury__calendar__read_seconds_and_microseconds_4_p_0(&mercury__calendar__Seconds_15, &mercury__calendar__MicroSeconds_16, mercury__calendar__STATE_VARIABLE_Chars_26_26, &mercury__calendar__STATE_VARIABLE_Chars_27_27);
                    }
#line 462 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 458 "calendar.m"
                      {
#line 463 "calendar.m"
                        mercury__calendar__V_28_28 = (mercury__calendar__Sign_6 * mercury__calendar__Years_7);
#line 463 "calendar.m"
                        mercury__calendar__V_29_29 = (mercury__calendar__Sign_6 * mercury__calendar__Months_8);
#line 463 "calendar.m"
                        mercury__calendar__V_30_30 = (mercury__calendar__Sign_6 * mercury__calendar__Days_9);
#line 463 "calendar.m"
                        mercury__calendar__V_31_31 = (mercury__calendar__Sign_6 * mercury__calendar__Hours_13);
#line 463 "calendar.m"
                        mercury__calendar__V_32_32 = (mercury__calendar__Sign_6 * mercury__calendar__Minutes_14);
#line 463 "calendar.m"
                        mercury__calendar__V_33_33 = (mercury__calendar__Sign_6 * mercury__calendar__Seconds_15);
#line 463 "calendar.m"
                        mercury__calendar__V_34_34 = (mercury__calendar__Sign_6 * mercury__calendar__MicroSeconds_16);
#line 463 "calendar.m"
                        {
#line 463 "calendar.m"
                          *mercury__calendar__Duration_4 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_28_28, mercury__calendar__V_29_29, mercury__calendar__V_30_30, mercury__calendar__V_31_31, mercury__calendar__V_32_32, mercury__calendar__V_33_33, mercury__calendar__V_34_34);
                        }
#line 463 "calendar.m"
                        mercury__calendar__succeeded = MR_TRUE;
#line 458 "calendar.m"
                      }
#line 458 "calendar.m"
                  }
#line 458 "calendar.m"
              }
#line 466 "calendar.m"
            else
#line 467 "calendar.m"
              {
#line 467 "calendar.m"
                MR_Integer mercury__calendar__V_35_35;
#line 467 "calendar.m"
                MR_Integer mercury__calendar__V_36_36;
#line 467 "calendar.m"
                MR_Integer mercury__calendar__V_37_37;
#line 467 "calendar.m"
                MR_Integer mercury__calendar__V_38_38;
#line 467 "calendar.m"
                MR_Integer mercury__calendar__V_39_39;
#line 467 "calendar.m"
                MR_Integer mercury__calendar__V_40_40;
#line 467 "calendar.m"
                MR_Integer mercury__calendar__V_41_41;

#line 467 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "calendar.m"
                if (mercury__calendar__succeeded)
#line 467 "calendar.m"
                  {
#line 468 "calendar.m"
                    mercury__calendar__V_35_35 = (mercury__calendar__Sign_6 * mercury__calendar__Years_7);
#line 468 "calendar.m"
                    mercury__calendar__V_36_36 = (mercury__calendar__Sign_6 * mercury__calendar__Months_8);
#line 468 "calendar.m"
                    mercury__calendar__V_37_37 = (mercury__calendar__Sign_6 * mercury__calendar__Days_9);
#line 468 "calendar.m"
                    mercury__calendar__V_38_38 = (MR_Integer) 0;
#line 468 "calendar.m"
                    mercury__calendar__V_39_39 = (MR_Integer) 0;
#line 468 "calendar.m"
                    mercury__calendar__V_40_40 = (MR_Integer) 0;
#line 468 "calendar.m"
                    mercury__calendar__V_41_41 = (MR_Integer) 0;
#line 468 "calendar.m"
                    {
#line 468 "calendar.m"
                      *mercury__calendar__Duration_4 = mercury__calendar__init_duration_7_f_0(mercury__calendar__V_35_35, mercury__calendar__V_36_36, mercury__calendar__V_37_37, mercury__calendar__V_38_38, mercury__calendar__V_39_39, mercury__calendar__V_40_40, mercury__calendar__V_41_41);
                    }
#line 468 "calendar.m"
                    mercury__calendar__succeeded = MR_TRUE;
#line 467 "calendar.m"
                  }
#line 467 "calendar.m"
              }
#line 451 "calendar.m"
          }
#line 485 "calendar.m"
      }
#line 451 "calendar.m"
    return mercury__calendar__succeeded;
#line 451 "calendar.m"
  }
#line 199 "calendar.m"
}

#line 174 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__negate_1_f_0(
#line 174 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1)
#line 174 "calendar.m"
{
#line 1090 "calendar.m"
  {
#line 1090 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1090 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1090 "calendar.m"
    MR_Integer mercury__calendar__Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1090 "calendar.m"
    MR_Integer mercury__calendar__Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1090 "calendar.m"
    MR_Integer mercury__calendar__Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1090 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1090 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) 0 - mercury__calendar__Months_3);
#line 1090 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) 0 - mercury__calendar__Days_4);
#line 1090 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) 0 - mercury__calendar__Seconds_5);
#line 1090 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_6);

#line 1090 "calendar.m"
    {
#line 1090 "calendar.m"
      mercury__calendar__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 0) = ((MR_Box) (mercury__calendar__V_7_7));
#line 1090 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 1) = ((MR_Box) (mercury__calendar__V_8_8));
#line 1090 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 2) = ((MR_Box) (mercury__calendar__V_9_9));
#line 1090 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 3) = ((MR_Box) (mercury__calendar__V_10_10));
#line 1090 "calendar.m"
    }
#line 1090 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1090 "calendar.m"
  }
#line 174 "calendar.m"
}

#line 170 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__zero_duration_0_f_0(void)
#line 170 "calendar.m"
{
#line 1093 "calendar.m"
  {
#line 1093 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1093 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_3[1];

#line 1093 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 1093 "calendar.m"
  }
#line 170 "calendar.m"
}

#line 164 "calendar.m"
void MR_CALL 
mercury__calendar__unpack_duration_8_p_0(
#line 164 "calendar.m"
  MR_Word mercury__calendar__Duration_9,
#line 164 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__2_2,
#line 164 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__3_3,
#line 164 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__4_4,
#line 164 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__5_5,
#line 164 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__6_6,
#line 164 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__7_7,
#line 164 "calendar.m"
  MR_Integer * mercury__calendar__HeadVar__8_8)
#line 164 "calendar.m"
{
#line 601 "calendar.m"
  {
#line 601 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1031 "calendar.m"
    MR_Integer mercury__calendar__V_11_11;
#line 1031 "calendar.m"
    MR_Integer mercury__calendar__V_12_12;
#line 1031 "calendar.m"
    MR_Integer mercury__calendar__V_13_13;
#line 1035 "calendar.m"
    MR_Integer mercury__calendar__V_15_15;
#line 1035 "calendar.m"
    MR_Integer mercury__calendar__V_16_16;
#line 1035 "calendar.m"
    MR_Integer mercury__calendar__V_17_17;

#line 601 "calendar.m"
    {
#line 601 "calendar.m"
      *mercury__calendar__HeadVar__2_2 = mercury__calendar__years_1_f_0(mercury__calendar__Duration_9);
    }
#line 601 "calendar.m"
    {
#line 601 "calendar.m"
      *mercury__calendar__HeadVar__3_3 = mercury__calendar__months_1_f_0(mercury__calendar__Duration_9);
    }
#line 1031 "calendar.m"
    mercury__calendar__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 0)));
#line 1031 "calendar.m"
    *mercury__calendar__HeadVar__4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 1)));
#line 1031 "calendar.m"
    mercury__calendar__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 2)));
#line 1031 "calendar.m"
    mercury__calendar__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 3)));
#line 601 "calendar.m"
    {
#line 601 "calendar.m"
      *mercury__calendar__HeadVar__5_5 = mercury__calendar__hours_1_f_0(mercury__calendar__Duration_9);
    }
#line 601 "calendar.m"
    {
#line 601 "calendar.m"
      *mercury__calendar__HeadVar__6_6 = mercury__calendar__minutes_1_f_0(mercury__calendar__Duration_9);
    }
#line 601 "calendar.m"
    {
#line 601 "calendar.m"
      *mercury__calendar__HeadVar__7_7 = mercury__calendar__seconds_1_f_0(mercury__calendar__Duration_9);
    }
#line 1035 "calendar.m"
    mercury__calendar__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 0)));
#line 1035 "calendar.m"
    mercury__calendar__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 1)));
#line 1035 "calendar.m"
    mercury__calendar__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 2)));
#line 1035 "calendar.m"
    *mercury__calendar__HeadVar__8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 3)));
#line 601 "calendar.m"
  }
#line 164 "calendar.m"
}

#line 159 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__init_duration_7_f_0(
#line 159 "calendar.m"
  MR_Integer mercury__calendar__Years0_9,
#line 159 "calendar.m"
  MR_Integer mercury__calendar__Months0_10,
#line 159 "calendar.m"
  MR_Integer mercury__calendar__Days0_11,
#line 159 "calendar.m"
  MR_Integer mercury__calendar__Hours0_12,
#line 159 "calendar.m"
  MR_Integer mercury__calendar__Minutes0_13,
#line 159 "calendar.m"
  MR_Integer mercury__calendar__Seconds0_14,
#line 159 "calendar.m"
  MR_Integer mercury__calendar__MicroSeconds0_15)
#line 159 "calendar.m"
{
#line 563 "calendar.m"
  {
#line 563 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 563 "calendar.m"
    MR_Word mercury__calendar__HeadVar__8_8;
#line 563 "calendar.m"
    MR_Integer mercury__calendar__Months_16;
#line 563 "calendar.m"
    MR_Integer mercury__calendar__Days_17;
#line 563 "calendar.m"
    MR_Integer mercury__calendar__Seconds_18;
#line 563 "calendar.m"
    MR_Integer mercury__calendar__MicroSeconds_19;

#line 566 "calendar.m"
    {
#line 566 "calendar.m"
      MR_Integer mercury__calendar__V_30_30;
#line 566 "calendar.m"
      MR_Integer mercury__calendar__V_31_31;
#line 566 "calendar.m"
      MR_Integer mercury__calendar__V_32_32;
#line 566 "calendar.m"
      MR_Integer mercury__calendar__V_33_33;
#line 566 "calendar.m"
      MR_Integer mercury__calendar__V_34_34;
#line 566 "calendar.m"
      MR_Integer mercury__calendar__V_35_35;

#line 566 "calendar.m"
      mercury__calendar__succeeded = (mercury__calendar__Years0_9 >= (MR_Integer) 0);
#line 566 "calendar.m"
      if (mercury__calendar__succeeded)
#line 566 "calendar.m"
        {
#line 567 "calendar.m"
          mercury__calendar__V_30_30 = (MR_Integer) 0;
#line 567 "calendar.m"
          mercury__calendar__succeeded = (mercury__calendar__Months0_10 >= mercury__calendar__V_30_30);
#line 566 "calendar.m"
          if (mercury__calendar__succeeded)
#line 566 "calendar.m"
            {
#line 568 "calendar.m"
              mercury__calendar__V_31_31 = (MR_Integer) 0;
#line 568 "calendar.m"
              mercury__calendar__succeeded = (mercury__calendar__Days0_11 >= mercury__calendar__V_31_31);
#line 566 "calendar.m"
              if (mercury__calendar__succeeded)
#line 566 "calendar.m"
                {
#line 569 "calendar.m"
                  mercury__calendar__V_32_32 = (MR_Integer) 0;
#line 569 "calendar.m"
                  mercury__calendar__succeeded = (mercury__calendar__Hours0_12 >= mercury__calendar__V_32_32);
#line 566 "calendar.m"
                  if (mercury__calendar__succeeded)
#line 566 "calendar.m"
                    {
#line 570 "calendar.m"
                      mercury__calendar__V_33_33 = (MR_Integer) 0;
#line 570 "calendar.m"
                      mercury__calendar__succeeded = (mercury__calendar__Minutes0_13 >= mercury__calendar__V_33_33);
#line 566 "calendar.m"
                      if (mercury__calendar__succeeded)
#line 566 "calendar.m"
                        {
#line 571 "calendar.m"
                          mercury__calendar__V_34_34 = (MR_Integer) 0;
#line 571 "calendar.m"
                          mercury__calendar__succeeded = (mercury__calendar__Seconds0_14 >= mercury__calendar__V_34_34);
#line 566 "calendar.m"
                          if (mercury__calendar__succeeded)
#line 566 "calendar.m"
                            {
#line 572 "calendar.m"
                              mercury__calendar__V_35_35 = (MR_Integer) 0;
#line 572 "calendar.m"
                              mercury__calendar__succeeded = (mercury__calendar__MicroSeconds0_15 >= mercury__calendar__V_35_35);
#line 566 "calendar.m"
                            }
#line 566 "calendar.m"
                        }
#line 566 "calendar.m"
                    }
#line 566 "calendar.m"
                }
#line 566 "calendar.m"
            }
#line 566 "calendar.m"
        }
#line 566 "calendar.m"
    }
#line 573 "calendar.m"
    if (!(mercury__calendar__succeeded))
#line 574 "calendar.m"
      {
#line 574 "calendar.m"
        MR_Integer mercury__calendar__V_23_23;
#line 574 "calendar.m"
        MR_Integer mercury__calendar__V_24_24;
#line 574 "calendar.m"
        MR_Integer mercury__calendar__V_25_25;
#line 574 "calendar.m"
        MR_Integer mercury__calendar__V_26_26;
#line 574 "calendar.m"
        MR_Integer mercury__calendar__V_27_27;
#line 574 "calendar.m"
        MR_Integer mercury__calendar__V_28_28;

#line 574 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Years0_9 <= (MR_Integer) 0);
#line 574 "calendar.m"
        if (mercury__calendar__succeeded)
#line 574 "calendar.m"
          {
#line 575 "calendar.m"
            mercury__calendar__V_23_23 = (MR_Integer) 0;
#line 575 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Months0_10 <= mercury__calendar__V_23_23);
#line 574 "calendar.m"
            if (mercury__calendar__succeeded)
#line 574 "calendar.m"
              {
#line 576 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 0;
#line 576 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Days0_11 <= mercury__calendar__V_24_24);
#line 574 "calendar.m"
                if (mercury__calendar__succeeded)
#line 574 "calendar.m"
                  {
#line 577 "calendar.m"
                    mercury__calendar__V_25_25 = (MR_Integer) 0;
#line 577 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Hours0_12 <= mercury__calendar__V_25_25);
#line 574 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 574 "calendar.m"
                      {
#line 578 "calendar.m"
                        mercury__calendar__V_26_26 = (MR_Integer) 0;
#line 578 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__Minutes0_13 <= mercury__calendar__V_26_26);
#line 574 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 574 "calendar.m"
                          {
#line 579 "calendar.m"
                            mercury__calendar__V_27_27 = (MR_Integer) 0;
#line 579 "calendar.m"
                            mercury__calendar__succeeded = (mercury__calendar__Seconds0_14 <= mercury__calendar__V_27_27);
#line 574 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 574 "calendar.m"
                              {
#line 580 "calendar.m"
                                mercury__calendar__V_28_28 = (MR_Integer) 0;
#line 580 "calendar.m"
                                mercury__calendar__succeeded = (mercury__calendar__MicroSeconds0_15 <= mercury__calendar__V_28_28);
#line 574 "calendar.m"
                              }
#line 574 "calendar.m"
                          }
#line 574 "calendar.m"
                      }
#line 574 "calendar.m"
                  }
#line 574 "calendar.m"
              }
#line 574 "calendar.m"
          }
#line 574 "calendar.m"
      }
#line 589 "calendar.m"
    if (mercury__calendar__succeeded)
#line 583 "calendar.m"
      {
#line 583 "calendar.m"
        MR_Integer mercury__calendar__Seconds1_20;
#line 583 "calendar.m"
        MR_Integer mercury__calendar__Seconds2_21;
#line 583 "calendar.m"
        MR_Integer mercury__calendar__V_36_36 = (mercury__calendar__Years0_9 * (MR_Integer) 12);
#line 583 "calendar.m"
        MR_Integer mercury__calendar__V_38_38;
#line 583 "calendar.m"
        MR_Integer mercury__calendar__V_41_41;
#line 583 "calendar.m"
        MR_Integer mercury__calendar__V_42_42;
#line 583 "calendar.m"
        MR_Integer mercury__calendar__V_44_44;
#line 583 "calendar.m"
        MR_Integer mercury__calendar__V_46_46;

#line 583 "calendar.m"
        mercury__calendar__Months_16 = (mercury__calendar__V_36_36 + mercury__calendar__Months0_10);
#line 105 "int.opt"
        mercury__calendar__V_38_38 = (mercury__calendar__MicroSeconds0_15 / (MR_Integer) 1000000);
#line 584 "calendar.m"
        mercury__calendar__Seconds1_20 = (mercury__calendar__Seconds0_14 + mercury__calendar__V_38_38);
#line 124 "int.opt"
        mercury__calendar__MicroSeconds_19 = (mercury__calendar__MicroSeconds0_15 % (MR_Integer) 1000000);
#line 586 "calendar.m"
        mercury__calendar__V_42_42 = (mercury__calendar__Minutes0_13 * (MR_Integer) 60);
#line 586 "calendar.m"
        mercury__calendar__V_41_41 = (mercury__calendar__Seconds1_20 + mercury__calendar__V_42_42);
#line 586 "calendar.m"
        mercury__calendar__V_44_44 = (mercury__calendar__Hours0_12 * (MR_Integer) 3600);
#line 586 "calendar.m"
        mercury__calendar__Seconds2_21 = (mercury__calendar__V_41_41 + mercury__calendar__V_44_44);
#line 105 "int.opt"
        mercury__calendar__V_46_46 = (mercury__calendar__Seconds2_21 / (MR_Integer) 86400);
#line 587 "calendar.m"
        mercury__calendar__Days_17 = (mercury__calendar__Days0_11 + mercury__calendar__V_46_46);
#line 124 "int.opt"
        mercury__calendar__Seconds_18 = (mercury__calendar__Seconds2_21 % (MR_Integer) 86400);
#line 583 "calendar.m"
      }
#line 589 "calendar.m"
    else
#line 590 "calendar.m"
      {
#line 590 "calendar.m"
        {
#line 590 "calendar.m"
          mercury__require__error_1_p_0((MR_String) "init_duration: some components negative and some positive");
        }
#line 590 "calendar.m"
      }
#line 563 "calendar.m"
    {
#line 563 "calendar.m"
      mercury__calendar__HeadVar__8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 563 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 0) = ((MR_Box) (mercury__calendar__Months_16));
#line 563 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 1) = ((MR_Box) (mercury__calendar__Days_17));
#line 563 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 2) = ((MR_Box) (mercury__calendar__Seconds_18));
#line 563 "calendar.m"
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__8_8, 3) = ((MR_Box) (mercury__calendar__MicroSeconds_19));
#line 563 "calendar.m"
    }
#line 563 "calendar.m"
    return mercury__calendar__HeadVar__8_8;
#line 563 "calendar.m"
  }
#line 159 "calendar.m"
}

#line 152 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__microseconds_1_f_0(
#line 152 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 152 "calendar.m"
{
#line 1035 "calendar.m"
  {
#line 1035 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1035 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));
#line 1035 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1035 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1035 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));

#line 1035 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1035 "calendar.m"
  }
#line 152 "calendar.m"
}

#line 151 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__seconds_1_f_0(
#line 151 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 151 "calendar.m"
{
#line 1034 "calendar.m"
  {
#line 1034 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1034 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1034 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1034 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1034 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1034 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 124 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 % (MR_Integer) 60);
#line 1034 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1034 "calendar.m"
  }
#line 151 "calendar.m"
}

#line 150 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__minutes_1_f_0(
#line 150 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 150 "calendar.m"
{
#line 1033 "calendar.m"
  {
#line 1033 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1033 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1033 "calendar.m"
    MR_Integer mercury__calendar__V_4_4;
#line 1033 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1033 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1033 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1033 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 124 "int.opt"
    mercury__calendar__V_4_4 = (mercury__calendar__V_5_5 % (MR_Integer) 3600);
#line 105 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 60);
#line 1033 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1033 "calendar.m"
  }
#line 150 "calendar.m"
}

#line 149 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__hours_1_f_0(
#line 149 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 149 "calendar.m"
{
#line 1032 "calendar.m"
  {
#line 1032 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1032 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1032 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1032 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1032 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1032 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 105 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 3600);
#line 1032 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1032 "calendar.m"
  }
#line 149 "calendar.m"
}

#line 148 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__days_1_f_0(
#line 148 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 148 "calendar.m"
{
#line 1031 "calendar.m"
  {
#line 1031 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1031 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1031 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1031 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1031 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 1031 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1031 "calendar.m"
  }
#line 148 "calendar.m"
}

#line 147 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__months_1_f_0(
#line 147 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 147 "calendar.m"
{
#line 1030 "calendar.m"
  {
#line 1030 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1030 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1030 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1030 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1030 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1030 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 124 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 % (MR_Integer) 12);
#line 1030 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1030 "calendar.m"
  }
#line 147 "calendar.m"
}

#line 146 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__years_1_f_0(
#line 146 "calendar.m"
  MR_Word mercury__calendar__Dur_3)
#line 146 "calendar.m"
{
#line 1029 "calendar.m"
  {
#line 1029 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1029 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2;
#line 1029 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
#line 1029 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
#line 1029 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
#line 1029 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

#line 105 "int.opt"
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__V_4_4 / (MR_Integer) 12);
#line 1029 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1029 "calendar.m"
  }
#line 146 "calendar.m"
}

#line 126 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__unix_epoch_0_f_0(void)
#line 126 "calendar.m"
{
#line 1150 "calendar.m"
  {
#line 1150 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1150 "calendar.m"
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_5[0];

#line 1150 "calendar.m"
    return mercury__calendar__HeadVar__1_1;
#line 1150 "calendar.m"
  }
#line 126 "calendar.m"
}

#line 122 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__julian_day_number_1_f_0(
#line 122 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1)
#line 122 "calendar.m"
{
#line 1000 "calendar.m"
  {
#line 1000 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__JDN_10;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__Year_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__Month_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__Day_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__A_11;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__Y_12;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__M_13;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_14_14 = ((MR_Integer) 14 - mercury__calendar__Month_4);
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_17_17;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_19_19;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_20_20;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_25_25;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_26_26;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_27_27;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_28_28;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_29_29;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_34_34;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_38_38;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_40_40;
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 1000 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));

#line 1001 "calendar.m"
    {
#line 1001 "calendar.m"
      mercury__calendar__A_11 = mercury__int__div_2_f_0(mercury__calendar__V_14_14, (MR_Integer) 12);
    }
#line 1002 "calendar.m"
    mercury__calendar__V_17_17 = (mercury__calendar__Year_3 + (MR_Integer) 4800);
#line 1002 "calendar.m"
    mercury__calendar__Y_12 = (mercury__calendar__V_17_17 - mercury__calendar__A_11);
#line 1003 "calendar.m"
    mercury__calendar__V_20_20 = ((MR_Integer) 12 * mercury__calendar__A_11);
#line 1003 "calendar.m"
    mercury__calendar__V_19_19 = (mercury__calendar__Month_4 + mercury__calendar__V_20_20);
#line 1003 "calendar.m"
    mercury__calendar__M_13 = (mercury__calendar__V_19_19 - (MR_Integer) 3);
#line 1004 "calendar.m"
    mercury__calendar__V_30_30 = ((MR_Integer) 153 * mercury__calendar__M_13);
#line 1004 "calendar.m"
    mercury__calendar__V_29_29 = (mercury__calendar__V_30_30 + (MR_Integer) 2);
#line 1004 "calendar.m"
    {
#line 1004 "calendar.m"
      mercury__calendar__V_28_28 = mercury__int__div_2_f_0(mercury__calendar__V_29_29, (MR_Integer) 5);
    }
#line 1004 "calendar.m"
    mercury__calendar__V_27_27 = (mercury__calendar__Day_5 + mercury__calendar__V_28_28);
#line 1004 "calendar.m"
    mercury__calendar__V_34_34 = ((MR_Integer) 365 * mercury__calendar__Y_12);
#line 1004 "calendar.m"
    mercury__calendar__V_26_26 = (mercury__calendar__V_27_27 + mercury__calendar__V_34_34);
#line 1004 "calendar.m"
    {
#line 1004 "calendar.m"
      mercury__calendar__V_36_36 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 4);
    }
#line 1004 "calendar.m"
    mercury__calendar__V_25_25 = (mercury__calendar__V_26_26 + mercury__calendar__V_36_36);
#line 1004 "calendar.m"
    {
#line 1004 "calendar.m"
      mercury__calendar__V_38_38 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 100);
    }
#line 1004 "calendar.m"
    mercury__calendar__V_24_24 = (mercury__calendar__V_25_25 - mercury__calendar__V_38_38);
#line 1004 "calendar.m"
    {
#line 1004 "calendar.m"
      mercury__calendar__V_40_40 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 400);
    }
#line 1005 "calendar.m"
    mercury__calendar__V_23_23 = (mercury__calendar__V_24_24 + mercury__calendar__V_40_40);
#line 1004 "calendar.m"
    mercury__calendar__JDN_10 = (mercury__calendar__V_23_23 - (MR_Integer) 32045);
#line 1000 "calendar.m"
    return mercury__calendar__JDN_10;
#line 1000 "calendar.m"
  }
#line 122 "calendar.m"
}

#line 118 "calendar.m"
void MR_CALL 
mercury__calendar__current_utc_time_3_p_0(
#line 118 "calendar.m"
  MR_Word * mercury__calendar__Now_4)
#line 118 "calendar.m"
{
#line 1065 "calendar.m"
  {
#line 1065 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1065 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1065 "calendar.m"
    MR_Box mercury__calendar__Time_3_12;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__N_13_21;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__TMYear_25;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_26;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__Year_34;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__Month_35;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__Day_36;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__Hour_37;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__Minute_38;
#line 1065 "calendar.m"
    MR_Integer mercury__calendar__Second_39;
#line 127 "time.opt"
    MR_Integer mercury__calendar__YD_11_19;
#line 127 "time.opt"
    MR_Integer mercury__calendar__WD_12_20;
#line 96 "time.opt"
    MR_Word mercury__calendar__V_14_22;

#line 1066 "calendar.m"
    {
#line 1066 "calendar.m"
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
#line 14105 "calendar.c"

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
#line 1074 "calendar.m"
    mercury__calendar__Year_34 = ((MR_Integer) 1900 + mercury__calendar__TMYear_25);
#line 1075 "calendar.m"
    mercury__calendar__Month_35 = (mercury__calendar__TMMonth_26 + (MR_Integer) 1);
#line 1080 "calendar.m"
    {
#line 1080 "calendar.m"
      MR_Word base;
#line 1080 "calendar.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "calendar.m"
      *mercury__calendar__Now_4 = base;
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_34));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_35));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_36));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_37));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_38));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_39));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1080 "calendar.m"
    }
#line 1065 "calendar.m"
  }
#line 118 "calendar.m"
}

#line 114 "calendar.m"
void MR_CALL 
mercury__calendar__current_local_time_3_p_0(
#line 114 "calendar.m"
  MR_Word * mercury__calendar__Now_4)
#line 114 "calendar.m"
{
#line 1060 "calendar.m"
  {
#line 1060 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1060 "calendar.m"
    MR_Word mercury__calendar__TimeT_6;
#line 1060 "calendar.m"
    MR_Box mercury__calendar__Time_3_12;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__N_13_21;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__TMYear_25;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__TMMonth_26;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__Year_34;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__Month_35;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__Day_36;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__Hour_37;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__Minute_38;
#line 1060 "calendar.m"
    MR_Integer mercury__calendar__Second_39;
#line 107 "time.opt"
    MR_Integer mercury__calendar__YD_11_19;
#line 107 "time.opt"
    MR_Integer mercury__calendar__WD_12_20;
#line 92 "time.opt"
    MR_Word mercury__calendar__V_14_22;

#line 1061 "calendar.m"
    {
#line 1061 "calendar.m"
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

#line 14243 "calendar.c"

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
#line 1074 "calendar.m"
    mercury__calendar__Year_34 = ((MR_Integer) 1900 + mercury__calendar__TMYear_25);
#line 1075 "calendar.m"
    mercury__calendar__Month_35 = (mercury__calendar__TMMonth_26 + (MR_Integer) 1);
#line 1080 "calendar.m"
    {
#line 1080 "calendar.m"
      MR_Word base;
#line 1080 "calendar.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "calendar.m"
      *mercury__calendar__Now_4 = base;
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_34));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_35));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_36));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_37));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_38));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_39));
#line 1080 "calendar.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1080 "calendar.m"
    }
#line 1060 "calendar.m"
  }
#line 114 "calendar.m"
}

#line 110 "calendar.m"
MR_String MR_CALL 
mercury__calendar__date_to_string_1_f_0(
#line 110 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 110 "calendar.m"
{
#line 625 "calendar.m"
  {
#line 625 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 625 "calendar.m"
    MR_String mercury__calendar__Str_4;
#line 625 "calendar.m"
    MR_Integer mercury__calendar__Year0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 625 "calendar.m"
    MR_Word mercury__calendar__Month_6;
#line 625 "calendar.m"
    MR_Integer mercury__calendar__Day_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 625 "calendar.m"
    MR_Integer mercury__calendar__Hour_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 625 "calendar.m"
    MR_Integer mercury__calendar__Minute_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 625 "calendar.m"
    MR_Integer mercury__calendar__Second_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 625 "calendar.m"
    MR_Integer mercury__calendar__MicroSecond_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));
#line 625 "calendar.m"
    MR_String mercury__calendar__SignStr_12;
#line 625 "calendar.m"
    MR_Integer mercury__calendar__Year_13;
#line 625 "calendar.m"
    MR_String mercury__calendar__MicroSecondStr_14;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_17_17;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_18_18;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_19_19;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_20_20;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_21_21;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_22_22;
#line 625 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_24_24;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_25_25;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_26_26;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_27_27;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_28_28;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_29_29;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_30_30;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_31_31;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_32_32;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_33_33;
#line 625 "calendar.m"
    MR_Word mercury__calendar__V_34_34;
#line 625 "calendar.m"
    MR_Integer mercury__calendar__Month_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));

#line 1057 "calendar.m"
    {
#line 1057 "calendar.m"
      mercury__calendar__Month_6 = mercury__calendar__det_month_1_f_0(mercury__calendar__Month_41);
    }
#line 627 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__Year0_5 < (MR_Integer) 0);
#line 630 "calendar.m"
    if (mercury__calendar__succeeded)
#line 628 "calendar.m"
      {
#line 628 "calendar.m"
        mercury__calendar__SignStr_12 = (MR_String) "-";
#line 629 "calendar.m"
        mercury__calendar__Year_13 = ((MR_Integer) 0 - mercury__calendar__Year0_5);
#line 628 "calendar.m"
      }
#line 630 "calendar.m"
    else
#line 631 "calendar.m"
      {
#line 631 "calendar.m"
        mercury__calendar__SignStr_12 = (MR_String) "";
#line 632 "calendar.m"
        mercury__calendar__Year_13 = mercury__calendar__Year0_5;
#line 631 "calendar.m"
      }
#line 642 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__MicroSecond_11 > (MR_Integer) 0);
#line 645 "calendar.m"
    if (mercury__calendar__succeeded)
#line 643 "calendar.m"
      {
#line 643 "calendar.m"
        MR_String mercury__calendar__V_47_47;
#line 643 "calendar.m"
        MR_Word mercury__calendar__V_49_49;
#line 643 "calendar.m"
        MR_Word mercury__calendar__V_50_50;
#line 643 "calendar.m"
        MR_Word mercury__calendar__V_51_51;
#line 643 "calendar.m"
        MR_Integer mercury__calendar__V_6_60;
#line 643 "calendar.m"
        MR_Integer mercury__calendar__V_7_61;
#line 643 "calendar.m"
        MR_Integer mercury__calendar__V_8_62;
#line 643 "calendar.m"
        MR_Integer mercury__calendar__End_6_68;
#line 643 "calendar.m"
        MR_Integer mercury__calendar__Index_7_69;
#line 767 "string.opt"
        MR_String mercury__calendar___RightString_7_78;

#line 644 "calendar.m"
        {
#line 644 "calendar.m"
          mercury__calendar__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_50_50, 0) = ((MR_Box) (mercury__calendar__MicroSecond_11));
#line 644 "calendar.m"
        }
#line 644 "calendar.m"
        mercury__calendar__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "calendar.m"
        {
#line 644 "calendar.m"
          mercury__calendar__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_49_49, 0) = ((MR_Box) (mercury__calendar__V_50_50));
#line 644 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_49_49, 1) = ((MR_Box) (mercury__calendar__V_51_51));
#line 644 "calendar.m"
        }
#line 831 "string.opt"
        {
#line 831 "string.opt"
          mercury__string__format_3_p_0((MR_String) ".%06d", mercury__calendar__V_49_49, &mercury__calendar__V_47_47);
        }
#line 239 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__date_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_47_47 ;
		{
#line 239 "string.opt"

    Length = strlen(Str);

#line 14460 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_7_61  = Length;
#line 239 "string.opt"
}
#line 239 "string.opt"
{
#define MR_PROC_LABEL mercury__calendar__date_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__V_47_47 ;
		{
#line 239 "string.opt"

    Length = strlen(Str);

#line 14480 "calendar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__End_6_68  = Length;
#line 239 "string.opt"
}
#line 651 "string.opt"
        {
#line 651 "string.opt"
          mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, mercury__calendar__V_47_47, mercury__calendar__End_6_68, &mercury__calendar__Index_7_69);
        }
#line 649 "string.opt"
        mercury__calendar__V_8_62 = (mercury__calendar__End_6_68 - mercury__calendar__Index_7_69);
#line 642 "string.opt"
        mercury__calendar__V_6_60 = (mercury__calendar__V_7_61 - mercury__calendar__V_8_62);
#line 767 "string.opt"
        {
#line 767 "string.opt"
          mercury__string__split_4_p_0(mercury__calendar__V_47_47, mercury__calendar__V_6_60, &mercury__calendar__MicroSecondStr_14, &mercury__calendar___RightString_7_78);
        }
#line 643 "calendar.m"
      }
#line 645 "calendar.m"
    else
#line 646 "calendar.m"
      mercury__calendar__MicroSecondStr_14 = (MR_String) "";
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(2), mercury__calendar__V_18_18, 0) = ((MR_Box) (mercury__calendar__SignStr_12));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_20_20, 0) = ((MR_Box) (mercury__calendar__Year_13));
#line 636 "calendar.m"
    }
#line 1112 "calendar.m"
    if ((mercury__calendar__Month_6 == (MR_Integer) 3))
#line 1115 "calendar.m"
      mercury__calendar__V_23_23 = (MR_Integer) 4;
#line 1112 "calendar.m"
    else
#line 1112 "calendar.m"
      if ((mercury__calendar__Month_6 == (MR_Integer) 7))
#line 1119 "calendar.m"
        mercury__calendar__V_23_23 = (MR_Integer) 8;
#line 1112 "calendar.m"
      else
#line 1112 "calendar.m"
        if ((mercury__calendar__Month_6 == (MR_Integer) 11))
#line 1123 "calendar.m"
          mercury__calendar__V_23_23 = (MR_Integer) 12;
#line 1112 "calendar.m"
        else
#line 1112 "calendar.m"
          if ((mercury__calendar__Month_6 == (MR_Integer) 1))
#line 1113 "calendar.m"
            mercury__calendar__V_23_23 = (MR_Integer) 2;
#line 1112 "calendar.m"
          else
#line 1112 "calendar.m"
            if ((mercury__calendar__Month_6 == (MR_Integer) 0))
#line 1112 "calendar.m"
              mercury__calendar__V_23_23 = (MR_Integer) 1;
#line 1112 "calendar.m"
            else
#line 1112 "calendar.m"
              if ((mercury__calendar__Month_6 == (MR_Integer) 6))
#line 1118 "calendar.m"
                mercury__calendar__V_23_23 = (MR_Integer) 7;
#line 1112 "calendar.m"
              else
#line 1112 "calendar.m"
                if ((mercury__calendar__Month_6 == (MR_Integer) 5))
#line 1117 "calendar.m"
                  mercury__calendar__V_23_23 = (MR_Integer) 6;
#line 1112 "calendar.m"
                else
#line 1112 "calendar.m"
                  if ((mercury__calendar__Month_6 == (MR_Integer) 2))
#line 1114 "calendar.m"
                    mercury__calendar__V_23_23 = (MR_Integer) 3;
#line 1112 "calendar.m"
                  else
#line 1112 "calendar.m"
                    if ((mercury__calendar__Month_6 == (MR_Integer) 4))
#line 1116 "calendar.m"
                      mercury__calendar__V_23_23 = (MR_Integer) 5;
#line 1112 "calendar.m"
                    else
#line 1112 "calendar.m"
                      if ((mercury__calendar__Month_6 == (MR_Integer) 10))
#line 1122 "calendar.m"
                        mercury__calendar__V_23_23 = (MR_Integer) 11;
#line 1112 "calendar.m"
                      else
#line 1112 "calendar.m"
                        if ((mercury__calendar__Month_6 == (MR_Integer) 9))
#line 1121 "calendar.m"
                          mercury__calendar__V_23_23 = (MR_Integer) 10;
#line 1112 "calendar.m"
                        else
#line 1120 "calendar.m"
                          mercury__calendar__V_23_23 = (MR_Integer) 9;
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 0) = ((MR_Box) (mercury__calendar__V_23_23));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_25_25, 0) = ((MR_Box) (mercury__calendar__Day_7));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 0) = ((MR_Box) (mercury__calendar__Hour_8));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_29_29, 0) = ((MR_Box) (mercury__calendar__Minute_9));
#line 636 "calendar.m"
    }
#line 637 "calendar.m"
    {
#line 637 "calendar.m"
      mercury__calendar__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_31_31, 0) = ((MR_Box) (mercury__calendar__Second_10));
#line 637 "calendar.m"
    }
#line 637 "calendar.m"
    {
#line 637 "calendar.m"
      mercury__calendar__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "calendar.m"
      MR_hl_field(MR_mktag(2), mercury__calendar__V_33_33, 0) = ((MR_Box) (mercury__calendar__MicroSecondStr_14));
#line 637 "calendar.m"
    }
#line 637 "calendar.m"
    mercury__calendar__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "calendar.m"
    {
#line 637 "calendar.m"
      mercury__calendar__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 0) = ((MR_Box) (mercury__calendar__V_33_33));
#line 637 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 1) = ((MR_Box) (mercury__calendar__V_34_34));
#line 637 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_30_30, 0) = ((MR_Box) (mercury__calendar__V_31_31));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_30_30, 1) = ((MR_Box) (mercury__calendar__V_32_32));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_28_28, 0) = ((MR_Box) (mercury__calendar__V_29_29));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_28_28, 1) = ((MR_Box) (mercury__calendar__V_30_30));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_26_26, 0) = ((MR_Box) (mercury__calendar__V_27_27));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_26_26, 1) = ((MR_Box) (mercury__calendar__V_28_28));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_24_24, 0) = ((MR_Box) (mercury__calendar__V_25_25));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_24_24, 1) = ((MR_Box) (mercury__calendar__V_26_26));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_21_21, 0) = ((MR_Box) (mercury__calendar__V_22_22));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_21_21, 1) = ((MR_Box) (mercury__calendar__V_24_24));
#line 636 "calendar.m"
    }
#line 636 "calendar.m"
    {
#line 636 "calendar.m"
      mercury__calendar__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_19_19, 0) = ((MR_Box) (mercury__calendar__V_20_20));
#line 636 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_19_19, 1) = ((MR_Box) (mercury__calendar__V_21_21));
#line 636 "calendar.m"
    }
#line 635 "calendar.m"
    {
#line 635 "calendar.m"
      mercury__calendar__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_17_17, 0) = ((MR_Box) (mercury__calendar__V_18_18));
#line 635 "calendar.m"
      MR_hl_field(MR_mktag(1), mercury__calendar__V_17_17, 1) = ((MR_Box) (mercury__calendar__V_19_19));
#line 635 "calendar.m"
    }
#line 831 "string.opt"
    {
#line 831 "string.opt"
      mercury__string__format_3_p_0((MR_String) "%s%04d-%02d-%02d %02d:%02d:%02d%s", mercury__calendar__V_17_17, &mercury__calendar__Str_4);
    }
#line 625 "calendar.m"
    return mercury__calendar__Str_4;
#line 625 "calendar.m"
  }
#line 110 "calendar.m"
}

#line 104 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_date_from_string_1_f_0(
#line 104 "calendar.m"
  MR_String mercury__calendar__Str_3)
#line 104 "calendar.m"
{
#line 608 "calendar.m"
  {
#line 608 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 608 "calendar.m"
    MR_Word mercury__calendar__Date_4;
#line 608 "calendar.m"
    MR_Word mercury__calendar__Date0_5;

#line 606 "calendar.m"
    {
#line 606 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__date_from_string_2_p_0(mercury__calendar__Str_3, &mercury__calendar__Date0_5);
    }
#line 608 "calendar.m"
    if (mercury__calendar__succeeded)
#line 607 "calendar.m"
      mercury__calendar__Date_4 = mercury__calendar__Date0_5;
#line 608 "calendar.m"
    else
#line 609 "calendar.m"
      {
#line 609 "calendar.m"
        MR_String mercury__calendar__V_6_6;

#line 255 "string.opt"
        {
#line 255 "string.opt"
          mercury__string__append_3_p_2((MR_String) "det_date_from_string: invalid date: ", mercury__calendar__Str_3, &mercury__calendar__V_6_6);
        }
#line 609 "calendar.m"
        {
#line 609 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_6_6);
        }
#line 609 "calendar.m"
      }
#line 608 "calendar.m"
    return mercury__calendar__Date_4;
#line 608 "calendar.m"
  }
#line 104 "calendar.m"
}

#line 100 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__date_from_string_2_p_0(
#line 100 "calendar.m"
  MR_String mercury__calendar__Str_3,
#line 100 "calendar.m"
  MR_Word * mercury__calendar__Date_4)
#line 100 "calendar.m"
{
#line 381 "calendar.m"
  {
#line 381 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__YearChars_8;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__Year_9;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__Month_10;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__Day_11;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__Hour_12;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__Minute_13;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__Second_14;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__MicroSecond_15;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_16_16;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_19_19;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_22_22;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_23_23;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_25_25;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_26_26;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_27_27;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_28_28;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_29_29;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_30_30;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_31_31;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_32_32;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_33_33;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_34_34;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_35_35;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_36_36;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_37_37;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_38_38;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_39_39;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_40_40;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_41_41;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_42_42;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_43_43;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_44_44;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_45_45;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_46_46;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_47_47;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_48_48;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_49_49;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_50_50;
#line 381 "calendar.m"
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_51_51;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_53_53;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_54_54;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_55_55;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_56_56;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_57_57;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_58_58;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_59_59;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_60_60;
#line 381 "calendar.m"
    MR_Char mercury__calendar__V_61_61;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_62_62;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_90_90;
#line 381 "calendar.m"
    MR_Integer mercury__calendar__V_91_91;
#line 386 "calendar.m"
    MR_Word mercury__calendar__Rest1_6;
#line 382 "calendar.m"
    MR_Char mercury__calendar__V_52_52;

#line 387 "string.opt"
    {
#line 387 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__calendar__Str_3, &mercury__calendar__STATE_VARIABLE_Chars_16_16);
    }
#line 485 "calendar.m"
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 485 "calendar.m"
    if (mercury__calendar__succeeded)
#line 485 "calendar.m"
      {
#line 485 "calendar.m"
        mercury__calendar__V_52_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_16_16, (MR_Integer) 0)));
#line 485 "calendar.m"
        mercury__calendar__Rest1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_16_16, (MR_Integer) 1)));
#line 382 "calendar.m"
        mercury__calendar__succeeded = ((MR_Char) 45 == mercury__calendar__V_52_52);
#line 485 "calendar.m"
      }
#line 386 "calendar.m"
    if (mercury__calendar__succeeded)
#line 383 "calendar.m"
      {
#line 383 "calendar.m"
        MR_Integer mercury__calendar__Year0_7;

#line 433 "calendar.m"
        {
#line 433 "calendar.m"
          mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &mercury__calendar__Year0_7, (MR_Integer) 0, &mercury__calendar__YearChars_8, mercury__calendar__Rest1_6, &mercury__calendar__STATE_VARIABLE_Chars_19_19);
        }
#line 385 "calendar.m"
        mercury__calendar__Year_9 = ((MR_Integer) 0 - mercury__calendar__Year0_7);
#line 383 "calendar.m"
      }
#line 386 "calendar.m"
    else
#line 432 "calendar.m"
      {
#line 433 "calendar.m"
        {
#line 433 "calendar.m"
          mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &mercury__calendar__Year_9, (MR_Integer) 0, &mercury__calendar__YearChars_8, mercury__calendar__STATE_VARIABLE_Chars_16_16, &mercury__calendar__STATE_VARIABLE_Chars_19_19);
        }
#line 432 "calendar.m"
      }
#line 389 "calendar.m"
    mercury__calendar__succeeded = (mercury__calendar__YearChars_8 >= (MR_Integer) 4);
#line 381 "calendar.m"
    if (mercury__calendar__succeeded)
#line 381 "calendar.m"
      {
#line 390 "calendar.m"
        mercury__calendar__V_22_22 = (MR_Char) 45;
#line 485 "calendar.m"
        mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 485 "calendar.m"
        if (mercury__calendar__succeeded)
#line 485 "calendar.m"
          {
#line 485 "calendar.m"
            mercury__calendar__V_53_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_19_19, (MR_Integer) 0)));
#line 485 "calendar.m"
            mercury__calendar__STATE_VARIABLE_Chars_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_19_19, (MR_Integer) 1)));
#line 390 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__V_22_22 == mercury__calendar__V_53_53);
#line 381 "calendar.m"
            if (mercury__calendar__succeeded)
#line 381 "calendar.m"
              {
#line 391 "calendar.m"
                mercury__calendar__V_24_24 = (MR_Integer) 2;
#line 433 "calendar.m"
                mercury__calendar__V_90_90 = (MR_Integer) 0;
#line 433 "calendar.m"
                mercury__calendar__V_91_91 = (MR_Integer) 0;
#line 433 "calendar.m"
                {
#line 433 "calendar.m"
                  mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__V_90_90, &mercury__calendar__Month_10, mercury__calendar__V_91_91, &mercury__calendar__V_54_54, mercury__calendar__STATE_VARIABLE_Chars_23_23, &mercury__calendar__STATE_VARIABLE_Chars_25_25);
                }
#line 391 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__V_24_24 == mercury__calendar__V_54_54);
#line 381 "calendar.m"
                if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                  {
#line 392 "calendar.m"
                    mercury__calendar__V_26_26 = (MR_Integer) 1;
#line 392 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Month_10 >= mercury__calendar__V_26_26);
#line 381 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                      {
#line 393 "calendar.m"
                        mercury__calendar__V_27_27 = (MR_Integer) 12;
#line 393 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__Month_10 <= mercury__calendar__V_27_27);
#line 381 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                          {
#line 394 "calendar.m"
                            mercury__calendar__V_28_28 = (MR_Char) 45;
#line 485 "calendar.m"
                            mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 485 "calendar.m"
                            if (mercury__calendar__succeeded)
#line 485 "calendar.m"
                              {
#line 485 "calendar.m"
                                mercury__calendar__V_55_55 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_25_25, (MR_Integer) 0)));
#line 485 "calendar.m"
                                mercury__calendar__STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_25_25, (MR_Integer) 1)));
#line 394 "calendar.m"
                                mercury__calendar__succeeded = (mercury__calendar__V_28_28 == mercury__calendar__V_55_55);
#line 381 "calendar.m"
                                if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                  {
#line 395 "calendar.m"
                                    mercury__calendar__V_30_30 = (MR_Integer) 2;
#line 395 "calendar.m"
                                    {
#line 395 "calendar.m"
                                      mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Day_11, &mercury__calendar__V_56_56, mercury__calendar__STATE_VARIABLE_Chars_29_29, &mercury__calendar__STATE_VARIABLE_Chars_31_31);
                                    }
#line 395 "calendar.m"
                                    mercury__calendar__succeeded = (mercury__calendar__V_30_30 == mercury__calendar__V_56_56);
#line 381 "calendar.m"
                                    if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                      {
#line 396 "calendar.m"
                                        mercury__calendar__V_32_32 = (MR_Integer) 1;
#line 396 "calendar.m"
                                        mercury__calendar__succeeded = (mercury__calendar__Day_11 >= mercury__calendar__V_32_32);
#line 381 "calendar.m"
                                        if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                          {
#line 397 "calendar.m"
                                            {
#line 397 "calendar.m"
                                              mercury__calendar__V_33_33 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Year_9, mercury__calendar__Month_10);
                                            }
#line 397 "calendar.m"
                                            mercury__calendar__succeeded = (mercury__calendar__Day_11 <= mercury__calendar__V_33_33);
#line 381 "calendar.m"
                                            if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                              {
#line 398 "calendar.m"
                                                mercury__calendar__V_34_34 = (MR_Char) 32;
#line 485 "calendar.m"
                                                mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 485 "calendar.m"
                                                if (mercury__calendar__succeeded)
#line 485 "calendar.m"
                                                  {
#line 485 "calendar.m"
                                                    mercury__calendar__V_57_57 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
#line 485 "calendar.m"
                                                    mercury__calendar__STATE_VARIABLE_Chars_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_31_31, (MR_Integer) 1)));
#line 398 "calendar.m"
                                                    mercury__calendar__succeeded = (mercury__calendar__V_34_34 == mercury__calendar__V_57_57);
#line 381 "calendar.m"
                                                    if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                      {
#line 399 "calendar.m"
                                                        mercury__calendar__V_36_36 = (MR_Integer) 2;
#line 399 "calendar.m"
                                                        {
#line 399 "calendar.m"
                                                          mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Hour_12, &mercury__calendar__V_58_58, mercury__calendar__STATE_VARIABLE_Chars_35_35, &mercury__calendar__STATE_VARIABLE_Chars_37_37);
                                                        }
#line 399 "calendar.m"
                                                        mercury__calendar__succeeded = (mercury__calendar__V_36_36 == mercury__calendar__V_58_58);
#line 381 "calendar.m"
                                                        if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                          {
#line 400 "calendar.m"
                                                            mercury__calendar__V_38_38 = (MR_Integer) 0;
#line 400 "calendar.m"
                                                            mercury__calendar__succeeded = (mercury__calendar__Hour_12 >= mercury__calendar__V_38_38);
#line 381 "calendar.m"
                                                            if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                              {
#line 401 "calendar.m"
                                                                mercury__calendar__V_39_39 = (MR_Integer) 23;
#line 401 "calendar.m"
                                                                mercury__calendar__succeeded = (mercury__calendar__Hour_12 <= mercury__calendar__V_39_39);
#line 381 "calendar.m"
                                                                if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                  {
#line 402 "calendar.m"
                                                                    mercury__calendar__V_40_40 = (MR_Char) 58;
#line 402 "calendar.m"
                                                                    {
#line 402 "calendar.m"
                                                                      mercury__calendar__succeeded = mercury__calendar__read_char_3_p_0(&mercury__calendar__V_59_59, mercury__calendar__STATE_VARIABLE_Chars_37_37, &mercury__calendar__STATE_VARIABLE_Chars_41_41);
                                                                    }
#line 381 "calendar.m"
                                                                    if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                      {
#line 402 "calendar.m"
                                                                        mercury__calendar__succeeded = (mercury__calendar__V_40_40 == mercury__calendar__V_59_59);
#line 381 "calendar.m"
                                                                        if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                          {
#line 403 "calendar.m"
                                                                            mercury__calendar__V_42_42 = (MR_Integer) 2;
#line 403 "calendar.m"
                                                                            {
#line 403 "calendar.m"
                                                                              mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Minute_13, &mercury__calendar__V_60_60, mercury__calendar__STATE_VARIABLE_Chars_41_41, &mercury__calendar__STATE_VARIABLE_Chars_43_43);
                                                                            }
#line 403 "calendar.m"
                                                                            mercury__calendar__succeeded = (mercury__calendar__V_42_42 == mercury__calendar__V_60_60);
#line 381 "calendar.m"
                                                                            if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                              {
#line 404 "calendar.m"
                                                                                mercury__calendar__V_44_44 = (MR_Integer) 0;
#line 404 "calendar.m"
                                                                                mercury__calendar__succeeded = (mercury__calendar__Minute_13 >= mercury__calendar__V_44_44);
#line 381 "calendar.m"
                                                                                if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                                  {
#line 405 "calendar.m"
                                                                                    mercury__calendar__V_45_45 = (MR_Integer) 59;
#line 405 "calendar.m"
                                                                                    mercury__calendar__succeeded = (mercury__calendar__Minute_13 <= mercury__calendar__V_45_45);
#line 381 "calendar.m"
                                                                                    if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                                      {
#line 406 "calendar.m"
                                                                                        mercury__calendar__V_46_46 = (MR_Char) 58;
#line 406 "calendar.m"
                                                                                        {
#line 406 "calendar.m"
                                                                                          mercury__calendar__succeeded = mercury__calendar__read_char_3_p_0(&mercury__calendar__V_61_61, mercury__calendar__STATE_VARIABLE_Chars_43_43, &mercury__calendar__STATE_VARIABLE_Chars_47_47);
                                                                                        }
#line 381 "calendar.m"
                                                                                        if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                                          {
#line 406 "calendar.m"
                                                                                            mercury__calendar__succeeded = (mercury__calendar__V_46_46 == mercury__calendar__V_61_61);
#line 381 "calendar.m"
                                                                                            if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                                              {
#line 407 "calendar.m"
                                                                                                mercury__calendar__V_48_48 = (MR_Integer) 2;
#line 407 "calendar.m"
                                                                                                {
#line 407 "calendar.m"
                                                                                                  mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Second_14, &mercury__calendar__V_62_62, mercury__calendar__STATE_VARIABLE_Chars_47_47, &mercury__calendar__STATE_VARIABLE_Chars_49_49);
                                                                                                }
#line 407 "calendar.m"
                                                                                                mercury__calendar__succeeded = (mercury__calendar__V_48_48 == mercury__calendar__V_62_62);
#line 381 "calendar.m"
                                                                                                if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                                                  {
#line 408 "calendar.m"
                                                                                                    mercury__calendar__V_50_50 = (MR_Integer) 62;
#line 408 "calendar.m"
                                                                                                    mercury__calendar__succeeded = (mercury__calendar__Second_14 < mercury__calendar__V_50_50);
#line 381 "calendar.m"
                                                                                                    if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                                                      {
#line 409 "calendar.m"
                                                                                                        {
#line 409 "calendar.m"
                                                                                                          mercury__calendar__read_microseconds_3_p_0(&mercury__calendar__MicroSecond_15, mercury__calendar__STATE_VARIABLE_Chars_49_49, &mercury__calendar__STATE_VARIABLE_Chars_51_51);
                                                                                                        }
#line 410 "calendar.m"
                                                                                                        mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "calendar.m"
                                                                                                        if (mercury__calendar__succeeded)
#line 381 "calendar.m"
                                                                                                          {
#line 411 "calendar.m"
                                                                                                            {
#line 411 "calendar.m"
                                                                                                              MR_Word base;
#line 411 "calendar.m"
                                                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 411 "calendar.m"
                                                                                                              *mercury__calendar__Date_4 = base;
#line 411 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_9));
#line 411 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_10));
#line 411 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_11));
#line 411 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_12));
#line 411 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_13));
#line 411 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_14));
#line 411 "calendar.m"
                                                                                                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__calendar__MicroSecond_15));
#line 411 "calendar.m"
                                                                                                            }
#line 411 "calendar.m"
                                                                                                            mercury__calendar__succeeded = MR_TRUE;
#line 381 "calendar.m"
                                                                                                          }
#line 381 "calendar.m"
                                                                                                      }
#line 381 "calendar.m"
                                                                                                  }
#line 381 "calendar.m"
                                                                                              }
#line 381 "calendar.m"
                                                                                          }
#line 381 "calendar.m"
                                                                                      }
#line 381 "calendar.m"
                                                                                  }
#line 381 "calendar.m"
                                                                              }
#line 381 "calendar.m"
                                                                          }
#line 381 "calendar.m"
                                                                      }
#line 381 "calendar.m"
                                                                  }
#line 381 "calendar.m"
                                                              }
#line 381 "calendar.m"
                                                          }
#line 381 "calendar.m"
                                                      }
#line 485 "calendar.m"
                                                  }
#line 381 "calendar.m"
                                              }
#line 381 "calendar.m"
                                          }
#line 381 "calendar.m"
                                      }
#line 381 "calendar.m"
                                  }
#line 485 "calendar.m"
                              }
#line 381 "calendar.m"
                          }
#line 381 "calendar.m"
                      }
#line 381 "calendar.m"
                  }
#line 381 "calendar.m"
              }
#line 485 "calendar.m"
          }
#line 381 "calendar.m"
      }
#line 381 "calendar.m"
    return mercury__calendar__succeeded;
#line 381 "calendar.m"
  }
#line 100 "calendar.m"
}

#line 93 "calendar.m"
void MR_CALL 
mercury__calendar__unpack_date_8_p_0(
#line 93 "calendar.m"
  MR_Word mercury__calendar__HeadVar__1_1,
#line 93 "calendar.m"
  MR_Integer * mercury__calendar__Year_9,
#line 93 "calendar.m"
  MR_Word * mercury__calendar__HeadVar__3_3,
#line 93 "calendar.m"
  MR_Integer * mercury__calendar__Day_11,
#line 93 "calendar.m"
  MR_Integer * mercury__calendar__Hour_12,
#line 93 "calendar.m"
  MR_Integer * mercury__calendar__Minute_13,
#line 93 "calendar.m"
  MR_Integer * mercury__calendar__Second_14,
#line 93 "calendar.m"
  MR_Integer * mercury__calendar__MicroSecond_15)
#line 93 "calendar.m"
{
#line 1057 "calendar.m"
  {
#line 1057 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1057 "calendar.m"
    MR_Integer mercury__calendar__Month_10;

#line 1057 "calendar.m"
    *mercury__calendar__Year_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
#line 1057 "calendar.m"
    mercury__calendar__Month_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
#line 1057 "calendar.m"
    *mercury__calendar__Day_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
#line 1057 "calendar.m"
    *mercury__calendar__Hour_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
#line 1057 "calendar.m"
    *mercury__calendar__Minute_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
#line 1057 "calendar.m"
    *mercury__calendar__Second_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
#line 1057 "calendar.m"
    *mercury__calendar__MicroSecond_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));
#line 1057 "calendar.m"
    {
#line 1057 "calendar.m"
      *mercury__calendar__HeadVar__3_3 = mercury__calendar__det_month_1_f_0(mercury__calendar__Month_10);
    }
#line 1057 "calendar.m"
  }
#line 93 "calendar.m"
}

#line 88 "calendar.m"
MR_Word MR_CALL 
mercury__calendar__det_init_date_7_f_0(
#line 88 "calendar.m"
  MR_Integer mercury__calendar__Year_9,
#line 88 "calendar.m"
  MR_Word mercury__calendar__Month_10,
#line 88 "calendar.m"
  MR_Integer mercury__calendar__Day_11,
#line 88 "calendar.m"
  MR_Integer mercury__calendar__Hour_12,
#line 88 "calendar.m"
  MR_Integer mercury__calendar__Minute_13,
#line 88 "calendar.m"
  MR_Integer mercury__calendar__Second_14,
#line 88 "calendar.m"
  MR_Integer mercury__calendar__MicroSecond_15)
#line 88 "calendar.m"
{
#line 1051 "calendar.m"
  {
#line 1051 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1051 "calendar.m"
    MR_Word mercury__calendar__Date_16;
#line 1051 "calendar.m"
    MR_Word mercury__calendar__Date0_17;

#line 1049 "calendar.m"
    {
#line 1049 "calendar.m"
      mercury__calendar__succeeded = mercury__calendar__init_date_8_p_0(mercury__calendar__Year_9, mercury__calendar__Month_10, mercury__calendar__Day_11, mercury__calendar__Hour_12, mercury__calendar__Minute_13, mercury__calendar__Second_14, mercury__calendar__MicroSecond_15, &mercury__calendar__Date0_17);
    }
#line 1051 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1050 "calendar.m"
      mercury__calendar__Date_16 = mercury__calendar__Date0_17;
#line 1051 "calendar.m"
    else
#line 1052 "calendar.m"
      {
#line 1052 "calendar.m"
        MR_String mercury__calendar__V_18_18;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_22_22;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_23_23;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_24_24;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_25_25;
#line 1052 "calendar.m"
        MR_Integer mercury__calendar__V_26_26;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_27_27;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_28_28;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_29_29;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_30_30;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_31_31;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_32_32;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_33_33;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_34_34;
#line 1052 "calendar.m"
        MR_Word mercury__calendar__V_35_35;

#line 1053 "calendar.m"
        {
#line 1053 "calendar.m"
          mercury__calendar__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_23_23, 0) = ((MR_Box) (mercury__calendar__Year_9));
#line 1053 "calendar.m"
        }
#line 1112 "calendar.m"
        if ((mercury__calendar__Month_10 == (MR_Integer) 3))
#line 1115 "calendar.m"
          mercury__calendar__V_26_26 = (MR_Integer) 4;
#line 1112 "calendar.m"
        else
#line 1112 "calendar.m"
          if ((mercury__calendar__Month_10 == (MR_Integer) 7))
#line 1119 "calendar.m"
            mercury__calendar__V_26_26 = (MR_Integer) 8;
#line 1112 "calendar.m"
          else
#line 1112 "calendar.m"
            if ((mercury__calendar__Month_10 == (MR_Integer) 11))
#line 1123 "calendar.m"
              mercury__calendar__V_26_26 = (MR_Integer) 12;
#line 1112 "calendar.m"
            else
#line 1112 "calendar.m"
              if ((mercury__calendar__Month_10 == (MR_Integer) 1))
#line 1113 "calendar.m"
                mercury__calendar__V_26_26 = (MR_Integer) 2;
#line 1112 "calendar.m"
              else
#line 1112 "calendar.m"
                if ((mercury__calendar__Month_10 == (MR_Integer) 0))
#line 1112 "calendar.m"
                  mercury__calendar__V_26_26 = (MR_Integer) 1;
#line 1112 "calendar.m"
                else
#line 1112 "calendar.m"
                  if ((mercury__calendar__Month_10 == (MR_Integer) 6))
#line 1118 "calendar.m"
                    mercury__calendar__V_26_26 = (MR_Integer) 7;
#line 1112 "calendar.m"
                  else
#line 1112 "calendar.m"
                    if ((mercury__calendar__Month_10 == (MR_Integer) 5))
#line 1117 "calendar.m"
                      mercury__calendar__V_26_26 = (MR_Integer) 6;
#line 1112 "calendar.m"
                    else
#line 1112 "calendar.m"
                      if ((mercury__calendar__Month_10 == (MR_Integer) 2))
#line 1114 "calendar.m"
                        mercury__calendar__V_26_26 = (MR_Integer) 3;
#line 1112 "calendar.m"
                      else
#line 1112 "calendar.m"
                        if ((mercury__calendar__Month_10 == (MR_Integer) 4))
#line 1116 "calendar.m"
                          mercury__calendar__V_26_26 = (MR_Integer) 5;
#line 1112 "calendar.m"
                        else
#line 1112 "calendar.m"
                          if ((mercury__calendar__Month_10 == (MR_Integer) 10))
#line 1122 "calendar.m"
                            mercury__calendar__V_26_26 = (MR_Integer) 11;
#line 1112 "calendar.m"
                          else
#line 1112 "calendar.m"
                            if ((mercury__calendar__Month_10 == (MR_Integer) 9))
#line 1121 "calendar.m"
                              mercury__calendar__V_26_26 = (MR_Integer) 10;
#line 1112 "calendar.m"
                            else
#line 1120 "calendar.m"
                              mercury__calendar__V_26_26 = (MR_Integer) 9;
#line 1053 "calendar.m"
        {
#line 1053 "calendar.m"
          mercury__calendar__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_25_25, 0) = ((MR_Box) (mercury__calendar__V_26_26));
#line 1053 "calendar.m"
        }
#line 1053 "calendar.m"
        {
#line 1053 "calendar.m"
          mercury__calendar__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_28_28, 0) = ((MR_Box) (mercury__calendar__Day_11));
#line 1053 "calendar.m"
        }
#line 1053 "calendar.m"
        {
#line 1053 "calendar.m"
          mercury__calendar__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_30_30, 0) = ((MR_Box) (mercury__calendar__Hour_12));
#line 1053 "calendar.m"
        }
#line 1054 "calendar.m"
        {
#line 1054 "calendar.m"
          mercury__calendar__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_32_32, 0) = ((MR_Box) (mercury__calendar__Minute_13));
#line 1054 "calendar.m"
        }
#line 1054 "calendar.m"
        {
#line 1054 "calendar.m"
          mercury__calendar__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_34_34, 0) = ((MR_Box) (mercury__calendar__Second_14));
#line 1054 "calendar.m"
        }
#line 1054 "calendar.m"
        mercury__calendar__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1054 "calendar.m"
        {
#line 1054 "calendar.m"
          mercury__calendar__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_33_33, 0) = ((MR_Box) (mercury__calendar__V_34_34));
#line 1054 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_33_33, 1) = ((MR_Box) (mercury__calendar__V_35_35));
#line 1054 "calendar.m"
        }
#line 1053 "calendar.m"
        {
#line 1053 "calendar.m"
          mercury__calendar__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_31_31, 0) = ((MR_Box) (mercury__calendar__V_32_32));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_31_31, 1) = ((MR_Box) (mercury__calendar__V_33_33));
#line 1053 "calendar.m"
        }
#line 1053 "calendar.m"
        {
#line 1053 "calendar.m"
          mercury__calendar__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_29_29, 0) = ((MR_Box) (mercury__calendar__V_30_30));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_29_29, 1) = ((MR_Box) (mercury__calendar__V_31_31));
#line 1053 "calendar.m"
        }
#line 1053 "calendar.m"
        {
#line 1053 "calendar.m"
          mercury__calendar__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 0) = ((MR_Box) (mercury__calendar__V_28_28));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_27_27, 1) = ((MR_Box) (mercury__calendar__V_29_29));
#line 1053 "calendar.m"
        }
#line 1053 "calendar.m"
        {
#line 1053 "calendar.m"
          mercury__calendar__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_24_24, 0) = ((MR_Box) (mercury__calendar__V_25_25));
#line 1053 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_24_24, 1) = ((MR_Box) (mercury__calendar__V_27_27));
#line 1053 "calendar.m"
        }
#line 1052 "calendar.m"
        {
#line 1052 "calendar.m"
          mercury__calendar__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 0) = ((MR_Box) (mercury__calendar__V_23_23));
#line 1052 "calendar.m"
          MR_hl_field(MR_mktag(1), mercury__calendar__V_22_22, 1) = ((MR_Box) (mercury__calendar__V_24_24));
#line 1052 "calendar.m"
        }
#line 831 "string.opt"
        {
#line 831 "string.opt"
          mercury__string__format_3_p_0((MR_String) "calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", mercury__calendar__V_22_22, &mercury__calendar__V_18_18);
        }
#line 1052 "calendar.m"
        {
#line 1052 "calendar.m"
          mercury__require__error_1_p_0(mercury__calendar__V_18_18);
        }
#line 1052 "calendar.m"
      }
#line 1051 "calendar.m"
    return mercury__calendar__Date_16;
#line 1051 "calendar.m"
  }
#line 88 "calendar.m"
}

#line 83 "calendar.m"
MR_bool MR_CALL 
mercury__calendar__init_date_8_p_0(
#line 83 "calendar.m"
  MR_Integer mercury__calendar__Year_9,
#line 83 "calendar.m"
  MR_Word mercury__calendar__Month_10,
#line 83 "calendar.m"
  MR_Integer mercury__calendar__Day_11,
#line 83 "calendar.m"
  MR_Integer mercury__calendar__Hour_12,
#line 83 "calendar.m"
  MR_Integer mercury__calendar__Minute_13,
#line 83 "calendar.m"
  MR_Integer mercury__calendar__Second_14,
#line 83 "calendar.m"
  MR_Integer mercury__calendar__MicroSecond_15,
#line 83 "calendar.m"
  MR_Word * mercury__calendar__Date_16)
#line 83 "calendar.m"
{
#line 1037 "calendar.m"
  {
#line 1037 "calendar.m"
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Day_11 >= (MR_Integer) 1);
#line 1037 "calendar.m"
    MR_Integer mercury__calendar__V_18_18;
#line 1037 "calendar.m"
    MR_Integer mercury__calendar__V_19_19;
#line 1037 "calendar.m"
    MR_Integer mercury__calendar__V_20_20;
#line 1037 "calendar.m"
    MR_Integer mercury__calendar__V_21_21;
#line 1037 "calendar.m"
    MR_Integer mercury__calendar__V_22_22;
#line 1037 "calendar.m"
    MR_Integer mercury__calendar__V_23_23;
#line 1037 "calendar.m"
    MR_Integer mercury__calendar__V_24_24;

#line 1037 "calendar.m"
    if (mercury__calendar__succeeded)
#line 1037 "calendar.m"
      {
#line 1112 "calendar.m"
        if ((mercury__calendar__Month_10 == (MR_Integer) 3))
#line 1115 "calendar.m"
          mercury__calendar__V_19_19 = (MR_Integer) 4;
#line 1112 "calendar.m"
        else
#line 1112 "calendar.m"
          if ((mercury__calendar__Month_10 == (MR_Integer) 7))
#line 1119 "calendar.m"
            mercury__calendar__V_19_19 = (MR_Integer) 8;
#line 1112 "calendar.m"
          else
#line 1112 "calendar.m"
            if ((mercury__calendar__Month_10 == (MR_Integer) 11))
#line 1123 "calendar.m"
              mercury__calendar__V_19_19 = (MR_Integer) 12;
#line 1112 "calendar.m"
            else
#line 1112 "calendar.m"
              if ((mercury__calendar__Month_10 == (MR_Integer) 1))
#line 1113 "calendar.m"
                mercury__calendar__V_19_19 = (MR_Integer) 2;
#line 1112 "calendar.m"
              else
#line 1112 "calendar.m"
                if ((mercury__calendar__Month_10 == (MR_Integer) 0))
#line 1112 "calendar.m"
                  mercury__calendar__V_19_19 = (MR_Integer) 1;
#line 1112 "calendar.m"
                else
#line 1112 "calendar.m"
                  if ((mercury__calendar__Month_10 == (MR_Integer) 6))
#line 1118 "calendar.m"
                    mercury__calendar__V_19_19 = (MR_Integer) 7;
#line 1112 "calendar.m"
                  else
#line 1112 "calendar.m"
                    if ((mercury__calendar__Month_10 == (MR_Integer) 5))
#line 1117 "calendar.m"
                      mercury__calendar__V_19_19 = (MR_Integer) 6;
#line 1112 "calendar.m"
                    else
#line 1112 "calendar.m"
                      if ((mercury__calendar__Month_10 == (MR_Integer) 2))
#line 1114 "calendar.m"
                        mercury__calendar__V_19_19 = (MR_Integer) 3;
#line 1112 "calendar.m"
                      else
#line 1112 "calendar.m"
                        if ((mercury__calendar__Month_10 == (MR_Integer) 4))
#line 1116 "calendar.m"
                          mercury__calendar__V_19_19 = (MR_Integer) 5;
#line 1112 "calendar.m"
                        else
#line 1112 "calendar.m"
                          if ((mercury__calendar__Month_10 == (MR_Integer) 10))
#line 1122 "calendar.m"
                            mercury__calendar__V_19_19 = (MR_Integer) 11;
#line 1112 "calendar.m"
                          else
#line 1112 "calendar.m"
                            if ((mercury__calendar__Month_10 == (MR_Integer) 9))
#line 1121 "calendar.m"
                              mercury__calendar__V_19_19 = (MR_Integer) 10;
#line 1112 "calendar.m"
                            else
#line 1120 "calendar.m"
                              mercury__calendar__V_19_19 = (MR_Integer) 9;
#line 1039 "calendar.m"
        {
#line 1039 "calendar.m"
          mercury__calendar__V_18_18 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Year_9, mercury__calendar__V_19_19);
        }
#line 1039 "calendar.m"
        mercury__calendar__succeeded = (mercury__calendar__Day_11 <= mercury__calendar__V_18_18);
#line 1037 "calendar.m"
        if (mercury__calendar__succeeded)
#line 1037 "calendar.m"
          {
#line 1040 "calendar.m"
            mercury__calendar__V_20_20 = (MR_Integer) 24;
#line 1040 "calendar.m"
            mercury__calendar__succeeded = (mercury__calendar__Hour_12 < mercury__calendar__V_20_20);
#line 1037 "calendar.m"
            if (mercury__calendar__succeeded)
#line 1037 "calendar.m"
              {
#line 1041 "calendar.m"
                mercury__calendar__V_21_21 = (MR_Integer) 60;
#line 1041 "calendar.m"
                mercury__calendar__succeeded = (mercury__calendar__Minute_13 < mercury__calendar__V_21_21);
#line 1037 "calendar.m"
                if (mercury__calendar__succeeded)
#line 1037 "calendar.m"
                  {
#line 1042 "calendar.m"
                    mercury__calendar__V_22_22 = (MR_Integer) 62;
#line 1042 "calendar.m"
                    mercury__calendar__succeeded = (mercury__calendar__Second_14 < mercury__calendar__V_22_22);
#line 1037 "calendar.m"
                    if (mercury__calendar__succeeded)
#line 1037 "calendar.m"
                      {
#line 1043 "calendar.m"
                        mercury__calendar__V_23_23 = (MR_Integer) 1000000;
#line 1043 "calendar.m"
                        mercury__calendar__succeeded = (mercury__calendar__MicroSecond_15 < mercury__calendar__V_23_23);
#line 1037 "calendar.m"
                        if (mercury__calendar__succeeded)
#line 1037 "calendar.m"
                          {
#line 1112 "calendar.m"
                            if ((mercury__calendar__Month_10 == (MR_Integer) 3))
#line 1115 "calendar.m"
                              mercury__calendar__V_24_24 = (MR_Integer) 4;
#line 1112 "calendar.m"
                            else
#line 1112 "calendar.m"
                              if ((mercury__calendar__Month_10 == (MR_Integer) 7))
#line 1119 "calendar.m"
                                mercury__calendar__V_24_24 = (MR_Integer) 8;
#line 1112 "calendar.m"
                              else
#line 1112 "calendar.m"
                                if ((mercury__calendar__Month_10 == (MR_Integer) 11))
#line 1123 "calendar.m"
                                  mercury__calendar__V_24_24 = (MR_Integer) 12;
#line 1112 "calendar.m"
                                else
#line 1112 "calendar.m"
                                  if ((mercury__calendar__Month_10 == (MR_Integer) 1))
#line 1113 "calendar.m"
                                    mercury__calendar__V_24_24 = (MR_Integer) 2;
#line 1112 "calendar.m"
                                  else
#line 1112 "calendar.m"
                                    if ((mercury__calendar__Month_10 == (MR_Integer) 0))
#line 1112 "calendar.m"
                                      mercury__calendar__V_24_24 = (MR_Integer) 1;
#line 1112 "calendar.m"
                                    else
#line 1112 "calendar.m"
                                      if ((mercury__calendar__Month_10 == (MR_Integer) 6))
#line 1118 "calendar.m"
                                        mercury__calendar__V_24_24 = (MR_Integer) 7;
#line 1112 "calendar.m"
                                      else
#line 1112 "calendar.m"
                                        if ((mercury__calendar__Month_10 == (MR_Integer) 5))
#line 1117 "calendar.m"
                                          mercury__calendar__V_24_24 = (MR_Integer) 6;
#line 1112 "calendar.m"
                                        else
#line 1112 "calendar.m"
                                          if ((mercury__calendar__Month_10 == (MR_Integer) 2))
#line 1114 "calendar.m"
                                            mercury__calendar__V_24_24 = (MR_Integer) 3;
#line 1112 "calendar.m"
                                          else
#line 1112 "calendar.m"
                                            if ((mercury__calendar__Month_10 == (MR_Integer) 4))
#line 1116 "calendar.m"
                                              mercury__calendar__V_24_24 = (MR_Integer) 5;
#line 1112 "calendar.m"
                                            else
#line 1112 "calendar.m"
                                              if ((mercury__calendar__Month_10 == (MR_Integer) 10))
#line 1122 "calendar.m"
                                                mercury__calendar__V_24_24 = (MR_Integer) 11;
#line 1112 "calendar.m"
                                              else
#line 1112 "calendar.m"
                                                if ((mercury__calendar__Month_10 == (MR_Integer) 9))
#line 1121 "calendar.m"
                                                  mercury__calendar__V_24_24 = (MR_Integer) 10;
#line 1112 "calendar.m"
                                                else
#line 1120 "calendar.m"
                                                  mercury__calendar__V_24_24 = (MR_Integer) 9;
#line 1044 "calendar.m"
                            {
#line 1044 "calendar.m"
                              MR_Word base;
#line 1044 "calendar.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "calendar.m"
                              *mercury__calendar__Date_16 = base;
#line 1044 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_9));
#line 1044 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__V_24_24));
#line 1044 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_11));
#line 1044 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_12));
#line 1044 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_13));
#line 1044 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_14));
#line 1044 "calendar.m"
                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__calendar__MicroSecond_15));
#line 1044 "calendar.m"
                            }
#line 1044 "calendar.m"
                            mercury__calendar__succeeded = MR_TRUE;
#line 1037 "calendar.m"
                          }
#line 1037 "calendar.m"
                      }
#line 1037 "calendar.m"
                  }
#line 1037 "calendar.m"
              }
#line 1037 "calendar.m"
          }
#line 1037 "calendar.m"
      }
#line 1037 "calendar.m"
    return mercury__calendar__succeeded;
#line 1037 "calendar.m"
  }
#line 83 "calendar.m"
}

#line 78 "calendar.m"
MR_Integer MR_CALL 
mercury__calendar__microsecond_1_f_0(
#line 78 "calendar.m"
  MR_Word mercury__calendar__Date_3)
#line 78 "calendar.m"
{
#line 1027 "calendar.m"
  {
#line 1027 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1027 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));
#line 1027 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1027 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1027 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1027 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1027 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1027 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));

#line 1027 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1027 "calendar.m"
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
#line 1026 "calendar.m"
  {
#line 1026 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1026 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1026 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1026 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1026 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1026 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1026 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1026 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1026 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1026 "calendar.m"
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
#line 1025 "calendar.m"
  {
#line 1025 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1025 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1025 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1025 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1025 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1025 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1025 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1025 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1025 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1025 "calendar.m"
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
#line 1024 "calendar.m"
  {
#line 1024 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1024 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1024 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1024 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1024 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1024 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1024 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1024 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1024 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1024 "calendar.m"
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
#line 995 "calendar.m"
  {
#line 995 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 995 "calendar.m"
    MR_Word mercury__calendar__DayOfWeek_4;
#line 995 "calendar.m"
    MR_Integer mercury__calendar__JDN_5;
#line 995 "calendar.m"
    MR_Integer mercury__calendar__Mod_6;
#line 995 "calendar.m"
    MR_Integer mercury__calendar__V_6_11;
#line 995 "calendar.m"
    MR_Integer mercury__calendar__V_7_12;

#line 996 "calendar.m"
    {
#line 996 "calendar.m"
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
#line 998 "calendar.m"
    {
#line 998 "calendar.m"
      return mercury__calendar__DayOfWeek_4 = mercury__calendar__det_day_of_week_from_mod_1_f_0(mercury__calendar__Mod_6);
    }
#line 995 "calendar.m"
    return mercury__calendar__DayOfWeek_4;
#line 995 "calendar.m"
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
#line 1023 "calendar.m"
  {
#line 1023 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1023 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1023 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1023 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1023 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1023 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1023 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1023 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1023 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1023 "calendar.m"
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
#line 1022 "calendar.m"
  {
#line 1022 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1022 "calendar.m"
    MR_Word mercury__calendar__HeadVar__2_2;
#line 1022 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1022 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1022 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1022 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1022 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1022 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1022 "calendar.m"
    MR_Integer mercury__calendar__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1022 "calendar.m"
    {
#line 1022 "calendar.m"
      return mercury__calendar__HeadVar__2_2 = mercury__calendar__det_month_1_f_0(mercury__calendar__V_4_4);
    }
#line 1022 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1022 "calendar.m"
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
#line 1021 "calendar.m"
  {
#line 1021 "calendar.m"
    MR_bool mercury__calendar__succeeded;
#line 1021 "calendar.m"
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
#line 1021 "calendar.m"
    MR_Integer mercury__calendar__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
#line 1021 "calendar.m"
    MR_Integer mercury__calendar__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
#line 1021 "calendar.m"
    MR_Integer mercury__calendar__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
#line 1021 "calendar.m"
    MR_Integer mercury__calendar__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
#line 1021 "calendar.m"
    MR_Integer mercury__calendar__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
#line 1021 "calendar.m"
    MR_Integer mercury__calendar__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

#line 1021 "calendar.m"
    return mercury__calendar__HeadVar__2_2;
#line 1021 "calendar.m"
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
