/*
** Automatically generated from `calendar.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7];

static const MR_ConstString mercury__calendar__calendar__field_names_date_0_0[7];

static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_date_0_0;

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1];

static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1];

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1];

static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1];

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6;

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_day_of_week_0[7];

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_day_of_week_0[7];

static const MR_Integer mercury__calendar__calendar__functor_number_map_day_of_week_0[7];

static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4];

static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4];

static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_duration_0_0;

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1];

static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1];

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1];

static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1];

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11;

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_month_0[12];

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_month_0[12];

static const MR_Integer mercury__calendar__calendar__functor_number_map_month_0[12];

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1;

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_order_0[2];

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2];

static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2];

static MR_Integer MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
  MR_Word mercury__calendar__OriginalOrder_5,
  MR_Word mercury__calendar__DateA_6,
  MR_Word mercury__calendar__DateB_7,
  MR_Word * mercury__calendar__Duration_8);

static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
  MR_Integer mercury__calendar__BorrowVal_6,
  MR_Integer mercury__calendar__Val1_7,
  MR_Integer mercury__calendar__Val2_8,
  MR_Integer * mercury__calendar__Diff_9,
  MR_Integer * mercury__calendar__Borrow_10);

static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(
  MR_Word mercury__calendar__Var_8,
  MR_Word mercury__calendar__Var_9,
  MR_Word mercury__calendar__HeadVar__2_2);

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word mercury__calendar__STATE_VARIABLE_E_0_11,
  MR_Word * mercury__calendar__STATE_VARIABLE_E_12);

static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
  MR_Integer mercury__calendar__A_5,
  MR_Integer mercury__calendar__Low_6,
  MR_Integer mercury__calendar__High_7);

static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
  MR_Integer mercury__calendar__A_4,
  MR_Integer mercury__calendar__B_5);

static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
  MR_Integer mercury__calendar__A_5,
  MR_Integer mercury__calendar__Low_6,
  MR_Integer mercury__calendar__High_7);

static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void);

static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
  MR_Integer mercury__calendar__Seconds_4,
  MR_Integer mercury__calendar__MicroSeconds_5);

static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
  MR_Integer mercury__calendar__X_4,
  MR_String mercury__calendar__Suffix_5);

static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
  MR_Integer * mercury__calendar__Seconds_5,
  MR_Integer * mercury__calendar__MicroSeconds_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_13,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_14);

static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
  MR_Integer * mercury__calendar__Minutes_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
  MR_Integer * mercury__calendar__Hours_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

static void MR_CALL 
mercury__calendar__read_days_3_p_0(
  MR_Integer * mercury__calendar__Days_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

static void MR_CALL 
mercury__calendar__read_months_3_p_0(
  MR_Integer * mercury__calendar__Months_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7);

static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_10,
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_11,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_12,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_13);

static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
  MR_Integer mercury__calendar__MicroSeconds_3);

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0(
  MR_Char mercury__calendar__Var_11,
  MR_String mercury__calendar__V_6_6,
  MR_Integer mercury__calendar__V_7_7,
  MR_Integer * mercury__calendar__V_8_8);

static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
  MR_Char * mercury__calendar__Char_4,
  MR_Word mercury__calendar__HeadVar__2_2,
  MR_Word * mercury__calendar__Rest_5);

static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
  MR_Integer * mercury__calendar__Val_5,
  MR_Integer * mercury__calendar__N_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_8,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_9);

static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
  MR_Integer * mercury__calendar__MicroSeconds_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_9,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_10);

static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_13,
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_14,
  MR_Integer mercury__calendar__STATE_VARIABLE_N_0_15,
  MR_Integer * mercury__calendar__STATE_VARIABLE_N_16,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_17,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_18);

static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
  MR_Integer mercury__calendar__YearValue_4,
  MR_Integer mercury__calendar__MonthValue_5);

static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____date_time_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3);


static /* final */ const MR_Box mercury__calendar_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__calendar_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__calendar_scalar_common_3[3][4];

static /* final */ const MR_Box mercury__calendar_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__calendar_scalar_common_5[6][7];

static /* final */ const MR_Box mercury__calendar_scalar_common_9[3][1];


/* sealed */ struct mercury__calendar__vector_common_type_6_0_s {
  const MR_Word mercury__calendar__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__calendar__vector_common_type_6_0_s mercury__calendar_vector_common_6[12];

/* sealed */ struct mercury__calendar__vector_common_type_7_0_s {
  const MR_Word mercury__calendar__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__calendar__vector_common_type_7_0_s mercury__calendar_vector_common_7[7];

/* sealed */ struct mercury__calendar__vector_common_type_8_0_s {
  const MR_Integer mercury__calendar__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mercury__calendar__vector_common_type_8_0_s mercury__calendar_vector_common_8[12];



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

static /* final */ const MR_Box mercury__calendar_scalar_common_9[3][1] = {
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


static /* final */ const struct mercury__calendar__vector_common_type_6_0_s mercury__calendar_vector_common_6[12] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
  /* row 8 */   {     (MR_Integer) 8 },
  /* row 9 */   {     (MR_Integer) 9 },
  /* row 10 */   {     (MR_Integer) 10 },
  /* row 11 */   {     (MR_Integer) 11 },
};

static /* final */ const struct mercury__calendar__vector_common_type_7_0_s mercury__calendar_vector_common_7[7] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
};

static /* final */ const struct mercury__calendar__vector_common_type_8_0_s mercury__calendar_vector_common_8[12] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 4 },
  /* row 4 */   {     (MR_Integer) 5 },
  /* row 5 */   {     (MR_Integer) 6 },
  /* row 6 */   {     (MR_Integer) 7 },
  /* row 7 */   {     (MR_Integer) 8 },
  /* row 8 */   {     (MR_Integer) 9 },
  /* row 9 */   {     (MR_Integer) 10 },
  /* row 10 */   {     (MR_Integer) 11 },
  /* row 11 */   {     (MR_Integer) 12 },
};


#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "version_array.mh"



static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mercury__calendar__calendar__field_names_date_0_0[7] = {
  (MR_String) "dt_year",
  (MR_String) "dt_month",
  (MR_String) "dt_day",
  (MR_String) "dt_hour",
  (MR_String) "dt_minute",
  (MR_String) "dt_second",
  (MR_String) "dt_microsecond"
};

static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_date_0_0 = {
  (MR_String) "date",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__calendar__calendar__field_types_date_0_0,
  mercury__calendar__calendar__field_names_date_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_date_0_0
};

static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_date_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_date_0_0
};

static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_date_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_date_time_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_day_of_month_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0 = {
  (MR_String) "monday",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1 = {
  (MR_String) "tuesday",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2 = {
  (MR_String) "wednesday",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3 = {
  (MR_String) "thursday",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4 = {
  (MR_String) "friday",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5 = {
  (MR_String) "saturday",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6 = {
  (MR_String) "sunday",
  (MR_Integer) 6
};

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_day_of_week_0[7] = {
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6
};

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_day_of_week_0[7] = {
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1,
  &mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2
};

static const MR_Integer mercury__calendar__calendar__functor_number_map_day_of_week_0[7] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_day_of_week_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_days_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4] = {
  (MR_String) "dur_months",
  (MR_String) "dur_days",
  (MR_String) "dur_seconds",
  (MR_String) "dur_microseconds"
};

static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_duration_0_0 = {
  (MR_String) "duration",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__calendar__calendar__field_types_duration_0_0,
  mercury__calendar__calendar__field_names_duration_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_duration_0_0
};

static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_duration_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1] = {
  &mercury__calendar__calendar__du_functor_desc_duration_0_0
};

static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_duration_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_hour_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_hours_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_microsecond_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_microseconds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_minute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_minutes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0 = {
  (MR_String) "january",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1 = {
  (MR_String) "february",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2 = {
  (MR_String) "march",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3 = {
  (MR_String) "april",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4 = {
  (MR_String) "may",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5 = {
  (MR_String) "june",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6 = {
  (MR_String) "july",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7 = {
  (MR_String) "august",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8 = {
  (MR_String) "september",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9 = {
  (MR_String) "october",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10 = {
  (MR_String) "november",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11 = {
  (MR_String) "december",
  (MR_Integer) 11
};

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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_month_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_months_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0 = {
  (MR_String) "ascending",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1 = {
  (MR_String) "descending",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_value_ordered_order_0[2] = {
  &mercury__calendar__calendar__enum_functor_desc_order_0_0,
  &mercury__calendar__calendar__enum_functor_desc_order_0_1
};

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2] = {
  &mercury__calendar__calendar__enum_functor_desc_order_0_0,
  &mercury__calendar__calendar__enum_functor_desc_order_0_1
};

static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_second_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_seconds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_year_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_years_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_Integer MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__calendar____Compare____years_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____year_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____seconds_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____second_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____order_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2,
  MR_Word mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = (MR_Integer) mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0(
  MR_Word mercury__calendar__HeadVar__2_1,
  MR_Word mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____months_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____month_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2,
  MR_Word mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = (MR_Integer) mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0(
  MR_Word mercury__calendar__HeadVar__2_1,
  MR_Word mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____minutes_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____minute_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____microseconds_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____microsecond_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____hours_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____hour_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____duration_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2,
  MR_Word mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__CastX_15 = (MR_Integer) mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__CastY_16 = (MR_Integer) mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__CastX_15 == mercury__calendar__CastY_16);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer mercury__calendar__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__calendar__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer mercury__calendar__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__calendar__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer mercury__calendar__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mercury__calendar__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer mercury__calendar__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer mercury__calendar__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word mercury__calendar__Var_12;

      mercury__calendar__succeeded = (mercury__calendar__ArgX1_4 < mercury__calendar__ArgY1_5);
      if (mercury__calendar__succeeded)
        mercury__calendar__Var_12 = (MR_Integer) 1;
      else
      {
        mercury__calendar__succeeded = (mercury__calendar__ArgX1_4 == mercury__calendar__ArgY1_5);
        if (mercury__calendar__succeeded)
          mercury__calendar__Var_12 = (MR_Integer) 0;
        else
          mercury__calendar__Var_12 = (MR_Integer) 2;
      }
      mercury__calendar__succeeded = (mercury__calendar__Var_12 == (MR_Integer) 0);
      mercury__calendar__succeeded = !(mercury__calendar__succeeded);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_12;
      else
      {
        MR_Word mercury__calendar__Var_13;

        mercury__calendar__succeeded = (mercury__calendar__ArgX2_6 < mercury__calendar__ArgY2_7);
        if (mercury__calendar__succeeded)
          mercury__calendar__Var_13 = (MR_Integer) 1;
        else
        {
          mercury__calendar__succeeded = (mercury__calendar__ArgX2_6 == mercury__calendar__ArgY2_7);
          if (mercury__calendar__succeeded)
            mercury__calendar__Var_13 = (MR_Integer) 0;
          else
            mercury__calendar__Var_13 = (MR_Integer) 2;
        }
        mercury__calendar__succeeded = (mercury__calendar__Var_13 == (MR_Integer) 0);
        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
        if (mercury__calendar__succeeded)
          *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_13;
        else
        {
          MR_Word mercury__calendar__Var_14;

          mercury__calendar__succeeded = (mercury__calendar__ArgX3_8 < mercury__calendar__ArgY3_9);
          if (mercury__calendar__succeeded)
            mercury__calendar__Var_14 = (MR_Integer) 1;
          else
          {
            mercury__calendar__succeeded = (mercury__calendar__ArgX3_8 == mercury__calendar__ArgY3_9);
            if (mercury__calendar__succeeded)
              mercury__calendar__Var_14 = (MR_Integer) 0;
            else
              mercury__calendar__Var_14 = (MR_Integer) 2;
          }
          mercury__calendar__succeeded = (mercury__calendar__Var_14 == (MR_Integer) 0);
          mercury__calendar__succeeded = !(mercury__calendar__succeeded);
          if (mercury__calendar__succeeded)
            *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_14;
          else
          {
            mercury__calendar__succeeded = (mercury__calendar__ArgX4_10 < mercury__calendar__ArgY4_11);
            if (mercury__calendar__succeeded)
              *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              mercury__calendar__succeeded = (mercury__calendar__ArgX4_10 == mercury__calendar__ArgY4_11);
              if (mercury__calendar__succeeded)
                *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
              else
                *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0(
  MR_Word mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__CastX_11 = (MR_Integer) mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__CastY_12 = (MR_Integer) mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__CastX_11 == mercury__calendar__CastY_12);
    if (mercury__calendar__succeeded)
      mercury__calendar__succeeded = MR_TRUE;
    else
    {
      MR_Integer mercury__calendar__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mercury__calendar__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__calendar__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mercury__calendar__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__calendar__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer mercury__calendar__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mercury__calendar__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer mercury__calendar__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));

      mercury__calendar__succeeded = (mercury__calendar__ArgX1_3 == mercury__calendar__ArgY1_4);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__succeeded = (mercury__calendar__ArgX2_5 == mercury__calendar__ArgY2_6);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__succeeded = (mercury__calendar__ArgX3_7 == mercury__calendar__ArgY3_8);
          if (mercury__calendar__succeeded)
            mercury__calendar__succeeded = (mercury__calendar__ArgX4_9 == mercury__calendar__ArgY4_10);
        }
      }
    }
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____days_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2,
  MR_Word mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = (MR_Integer) mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = (MR_Integer) mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0(
  MR_Word mercury__calendar__HeadVar__2_1,
  MR_Word mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded = (mercury__calendar__HeadVar__2_1 == mercury__calendar__HeadVar__2_2);

    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2,
  MR_Integer mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 < mercury__calendar__Cast_HeadVar2_5);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_4 == mercury__calendar__Cast_HeadVar2_5);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Integer mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__Cast_HeadVar1_3 == mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____date_time_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2,
  MR_Word mercury__calendar__HeadVar__3_3)
{
  {
    MR_Word mercury__calendar__Cast_HeadVar1_4 = mercury__calendar__HeadVar__2_2;
    MR_Word mercury__calendar__Cast_HeadVar2_5 = mercury__calendar__HeadVar__3_3;

    mercury__calendar____Compare____date_0_0(mercury__calendar__HeadVar__1_1, mercury__calendar__Cast_HeadVar1_4, mercury__calendar__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0(
  MR_Word mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__Cast_HeadVar1_3 = mercury__calendar__HeadVar__1_1;
    MR_Word mercury__calendar__Cast_HeadVar2_4 = mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = mercury__calendar____Unify____date_0_0(mercury__calendar__Cast_HeadVar1_3, mercury__calendar__Cast_HeadVar2_4);
    return mercury__calendar__succeeded;
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0(
  MR_Word mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__CastX_17 = (MR_Integer) mercury__calendar__HeadVar__1_1;
    MR_Integer mercury__calendar__CastY_18 = (MR_Integer) mercury__calendar__HeadVar__2_2;

    mercury__calendar__succeeded = (mercury__calendar__CastX_17 == mercury__calendar__CastY_18);
    if (mercury__calendar__succeeded)
      mercury__calendar__succeeded = MR_TRUE;
    else
    {
      MR_Integer mercury__calendar__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mercury__calendar__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__calendar__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mercury__calendar__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__calendar__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer mercury__calendar__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mercury__calendar__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer mercury__calendar__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer mercury__calendar__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer mercury__calendar__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer mercury__calendar__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer mercury__calendar__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer mercury__calendar__ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer mercury__calendar__ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 6)));

      mercury__calendar__succeeded = (mercury__calendar__ArgX1_3 == mercury__calendar__ArgY1_4);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__succeeded = (mercury__calendar__ArgX2_5 == mercury__calendar__ArgY2_6);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__succeeded = (mercury__calendar__ArgX3_7 == mercury__calendar__ArgY3_8);
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__succeeded = (mercury__calendar__ArgX4_9 == mercury__calendar__ArgY4_10);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__succeeded = (mercury__calendar__ArgX5_11 == mercury__calendar__ArgY5_12);
              if (mercury__calendar__succeeded)
              {
                mercury__calendar__succeeded = (mercury__calendar__ArgX6_13 == mercury__calendar__ArgY6_14);
                if (mercury__calendar__succeeded)
                  mercury__calendar__succeeded = (mercury__calendar__ArgX7_15 == mercury__calendar__ArgY7_16);
              }
            }
          }
        }
      }
    }
    return mercury__calendar__succeeded;
  }
}

MR_Word MR_CALL 
mercury__calendar__test_dates_0_f_0(void)
{
  {
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

    return mercury__calendar__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__calendar__tm_to_date_1_f_0(
  MR_Word mercury__calendar__TM_3)
{
  {
    MR_Word mercury__calendar__Date_4;
    MR_Integer mercury__calendar__TMYear_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__TMMonth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Year_14 = ((MR_Integer) 1900 + mercury__calendar__TMYear_5);
    MR_Integer mercury__calendar__Month_15 = (mercury__calendar__TMMonth_6 + (MR_Integer) 1);
    MR_Integer mercury__calendar__Day_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Hour_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Minute_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Second_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 6)));
    MR_Integer mercury__calendar__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 7)));
    MR_Word mercury__calendar__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_3, (MR_Integer) 8)));

    {
      mercury__calendar__Date_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 0) = ((MR_Box) (mercury__calendar__Year_14));
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 1) = ((MR_Box) (mercury__calendar__Month_15));
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 2) = ((MR_Box) (mercury__calendar__Day_16));
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 3) = ((MR_Box) (mercury__calendar__Hour_17));
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 4) = ((MR_Box) (mercury__calendar__Minute_18));
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 5) = ((MR_Box) (mercury__calendar__Second_19));
      MR_hl_field(MR_mktag(0), mercury__calendar__Date_4, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    return mercury__calendar__Date_4;
  }
}

MR_Word MR_CALL 
mercury__calendar__compute_day_of_week_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Word mercury__calendar__DayOfWeek_4;
    MR_Integer mercury__calendar__JDN_5;
    MR_Integer mercury__calendar__Mod_6;
    MR_Integer mercury__calendar__V_6_11;
    MR_Integer mercury__calendar__V_7_12;

    mercury__calendar__JDN_5 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__Date_3);
    mercury__calendar__V_7_12 = mercury__int__div_2_f_0(mercury__calendar__JDN_5, (MR_Integer) 7);
    mercury__calendar__V_6_11 = (mercury__calendar__V_7_12 * (MR_Integer) 7);
    mercury__calendar__Mod_6 = (mercury__calendar__JDN_5 - mercury__calendar__V_6_11);
    mercury__calendar__DayOfWeek_4 = mercury__calendar__det_day_of_week_from_mod_1_f_0(mercury__calendar__Mod_6);
    return mercury__calendar__DayOfWeek_4;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_5(
  MR_Word mercury__calendar__TypeInfo_for_A_41,
  MR_Word mercury__calendar__TypeInfo_for_B_42,
  MR_Word mercury__calendar__TypeInfo_for_C_43,
  MR_Word mercury__calendar__Pred_10,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
  MR_Word mercury__calendar__End_12,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_16;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
      switch (mercury__calendar__Res_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
            MR_Word mercury__calendar__Var_27;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
            MR_Integer mercury__calendar__Var_29;
            MR_Integer mercury__calendar__Var_30;
            MR_Integer mercury__calendar__Var_31;
            MR_Integer mercury__calendar__Var_32;
            MR_Integer mercury__calendar__Var_33;
            MR_Integer mercury__calendar__Var_34;
            MR_Integer mercury__calendar__Var_35;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_29 = (MR_Integer) 0;
              mercury__calendar__Var_30 = (MR_Integer) 0;
              mercury__calendar__Var_31 = (MR_Integer) 1;
              mercury__calendar__Var_32 = (MR_Integer) 0;
              mercury__calendar__Var_33 = (MR_Integer) 0;
              mercury__calendar__Var_34 = (MR_Integer) 0;
              mercury__calendar__Var_35 = (MR_Integer) 0;
              mercury__calendar__Var_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_29, mercury__calendar__Var_30, mercury__calendar__Var_31, mercury__calendar__Var_32, mercury__calendar__Var_33, mercury__calendar__Var_34, mercury__calendar__Var_35);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

                mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17;
                mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18;
                mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20;
                mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_4(
  MR_Word mercury__calendar__TypeInfo_for_A_41,
  MR_Word mercury__calendar__TypeInfo_for_B_42,
  MR_Word mercury__calendar__TypeInfo_for_C_43,
  MR_Word mercury__calendar__Pred_10,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
  MR_Word mercury__calendar__End_12,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_16;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
      switch (mercury__calendar__Res_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
            MR_Word mercury__calendar__Var_27;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
            MR_Integer mercury__calendar__Var_29;
            MR_Integer mercury__calendar__Var_30;
            MR_Integer mercury__calendar__Var_31;
            MR_Integer mercury__calendar__Var_32;
            MR_Integer mercury__calendar__Var_33;
            MR_Integer mercury__calendar__Var_34;
            MR_Integer mercury__calendar__Var_35;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_29 = (MR_Integer) 0;
              mercury__calendar__Var_30 = (MR_Integer) 0;
              mercury__calendar__Var_31 = (MR_Integer) 1;
              mercury__calendar__Var_32 = (MR_Integer) 0;
              mercury__calendar__Var_33 = (MR_Integer) 0;
              mercury__calendar__Var_34 = (MR_Integer) 0;
              mercury__calendar__Var_35 = (MR_Integer) 0;
              mercury__calendar__Var_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_29, mercury__calendar__Var_30, mercury__calendar__Var_31, mercury__calendar__Var_32, mercury__calendar__Var_33, mercury__calendar__Var_34, mercury__calendar__Var_35);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

                mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17;
                mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18;
                mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20;
                mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_3(
  MR_Word mercury__calendar__TypeInfo_for_A_41,
  MR_Word mercury__calendar__TypeInfo_for_B_42,
  MR_Word mercury__calendar__TypeInfo_for_C_43,
  MR_Word mercury__calendar__Pred_10,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
  MR_Word mercury__calendar__End_12,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_16;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
      switch (mercury__calendar__Res_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
            MR_Word mercury__calendar__Var_27;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
            MR_Integer mercury__calendar__Var_29;
            MR_Integer mercury__calendar__Var_30;
            MR_Integer mercury__calendar__Var_31;
            MR_Integer mercury__calendar__Var_32;
            MR_Integer mercury__calendar__Var_33;
            MR_Integer mercury__calendar__Var_34;
            MR_Integer mercury__calendar__Var_35;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_29 = (MR_Integer) 0;
              mercury__calendar__Var_30 = (MR_Integer) 0;
              mercury__calendar__Var_31 = (MR_Integer) 1;
              mercury__calendar__Var_32 = (MR_Integer) 0;
              mercury__calendar__Var_33 = (MR_Integer) 0;
              mercury__calendar__Var_34 = (MR_Integer) 0;
              mercury__calendar__Var_35 = (MR_Integer) 0;
              mercury__calendar__Var_27 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_29, mercury__calendar__Var_30, mercury__calendar__Var_31, mercury__calendar__Var_32, mercury__calendar__Var_33, mercury__calendar__Var_34, mercury__calendar__Var_35);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

                mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17;
                mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18;
                mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20;
                mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl3_days_9_p_2(
  MR_Word mercury__calendar__TypeInfo_for_A_41,
  MR_Word mercury__calendar__TypeInfo_for_B_42,
  MR_Word mercury__calendar__TypeInfo_for_C_43,
  MR_Word mercury__calendar__Pred_10,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
  MR_Word mercury__calendar__End_12,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_16;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
      switch (mercury__calendar__Res_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
            MR_Word mercury__calendar__Var_27;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            mercury__calendar__Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17;
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18;
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20;
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl3_days_9_p_1(
  MR_Word mercury__calendar__TypeInfo_for_A_41,
  MR_Word mercury__calendar__TypeInfo_for_B_42,
  MR_Word mercury__calendar__TypeInfo_for_C_43,
  MR_Word mercury__calendar__Pred_10,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
  MR_Word mercury__calendar__End_12,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_16;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
      switch (mercury__calendar__Res_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
            MR_Word mercury__calendar__Var_27;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            mercury__calendar__Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17;
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18;
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20;
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl3_days_9_p_0(
  MR_Word mercury__calendar__TypeInfo_for_A_41,
  MR_Word mercury__calendar__TypeInfo_for_B_42,
  MR_Word mercury__calendar__TypeInfo_for_C_43,
  MR_Word mercury__calendar__Pred_10,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_17,
  MR_Word mercury__calendar__End_12,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_16;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_16, mercury__calendar__STATE_VARIABLE_Curr_0_17, mercury__calendar__End_12);
      switch (mercury__calendar__Res_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc3_26_26;
            MR_Word mercury__calendar__Var_27;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_28_28;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_10, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_10), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_17)), mercury__calendar__STATE_VARIABLE_Acc1_0_18, &mercury__calendar__STATE_VARIABLE_Acc1_24_24, mercury__calendar__STATE_VARIABLE_Acc2_0_20, &mercury__calendar__STATE_VARIABLE_Acc2_25_25, mercury__calendar__STATE_VARIABLE_Acc3_0_22, &mercury__calendar__STATE_VARIABLE_Acc3_26_26);
            mercury__calendar__Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_27, mercury__calendar__STATE_VARIABLE_Curr_0_17, &mercury__calendar__STATE_VARIABLE_Curr_28_28);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17 = mercury__calendar__STATE_VARIABLE_Curr_28_28;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__calendar__STATE_VARIABLE_Acc1_24_24;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__calendar__STATE_VARIABLE_Acc2_25_25;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__calendar__STATE_VARIABLE_Acc3_26_26;

              mercury__calendar__STATE_VARIABLE_Curr_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_17;
              mercury__calendar__STATE_VARIABLE_Acc1_0_18 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_18;
              mercury__calendar__STATE_VARIABLE_Acc2_0_20 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_20;
              mercury__calendar__STATE_VARIABLE_Acc3_0_22 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc3_0_22;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_19 = mercury__calendar__STATE_VARIABLE_Acc1_0_18;
            *mercury__calendar__STATE_VARIABLE_Acc2_21 = mercury__calendar__STATE_VARIABLE_Acc2_0_20;
            *mercury__calendar__STATE_VARIABLE_Acc3_23 = mercury__calendar__STATE_VARIABLE_Acc3_0_22;
          }
          break;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_5(
  MR_Word mercury__calendar__TypeInfo_for_A_34,
  MR_Word mercury__calendar__TypeInfo_for_B_35,
  MR_Word mercury__calendar__Pred_8,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
  MR_Word mercury__calendar__End_10,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_13;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
      switch (mercury__calendar__Res_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
            MR_Word mercury__calendar__Var_21;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
            MR_Integer mercury__calendar__Var_23;
            MR_Integer mercury__calendar__Var_24;
            MR_Integer mercury__calendar__Var_25;
            MR_Integer mercury__calendar__Var_26;
            MR_Integer mercury__calendar__Var_27;
            MR_Integer mercury__calendar__Var_28;
            MR_Integer mercury__calendar__Var_29;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_23 = (MR_Integer) 0;
              mercury__calendar__Var_24 = (MR_Integer) 0;
              mercury__calendar__Var_25 = (MR_Integer) 1;
              mercury__calendar__Var_26 = (MR_Integer) 0;
              mercury__calendar__Var_27 = (MR_Integer) 0;
              mercury__calendar__Var_28 = (MR_Integer) 0;
              mercury__calendar__Var_29 = (MR_Integer) 0;
              mercury__calendar__Var_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_23, mercury__calendar__Var_24, mercury__calendar__Var_25, mercury__calendar__Var_26, mercury__calendar__Var_27, mercury__calendar__Var_28, mercury__calendar__Var_29);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

                mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14;
                mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15;
                mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_4(
  MR_Word mercury__calendar__TypeInfo_for_A_34,
  MR_Word mercury__calendar__TypeInfo_for_B_35,
  MR_Word mercury__calendar__Pred_8,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
  MR_Word mercury__calendar__End_10,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_13;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
      switch (mercury__calendar__Res_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
            MR_Word mercury__calendar__Var_21;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
            MR_Integer mercury__calendar__Var_23;
            MR_Integer mercury__calendar__Var_24;
            MR_Integer mercury__calendar__Var_25;
            MR_Integer mercury__calendar__Var_26;
            MR_Integer mercury__calendar__Var_27;
            MR_Integer mercury__calendar__Var_28;
            MR_Integer mercury__calendar__Var_29;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_23 = (MR_Integer) 0;
              mercury__calendar__Var_24 = (MR_Integer) 0;
              mercury__calendar__Var_25 = (MR_Integer) 1;
              mercury__calendar__Var_26 = (MR_Integer) 0;
              mercury__calendar__Var_27 = (MR_Integer) 0;
              mercury__calendar__Var_28 = (MR_Integer) 0;
              mercury__calendar__Var_29 = (MR_Integer) 0;
              mercury__calendar__Var_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_23, mercury__calendar__Var_24, mercury__calendar__Var_25, mercury__calendar__Var_26, mercury__calendar__Var_27, mercury__calendar__Var_28, mercury__calendar__Var_29);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

                mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14;
                mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15;
                mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_3(
  MR_Word mercury__calendar__TypeInfo_for_A_34,
  MR_Word mercury__calendar__TypeInfo_for_B_35,
  MR_Word mercury__calendar__Pred_8,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
  MR_Word mercury__calendar__End_10,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_13;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
      switch (mercury__calendar__Res_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
            MR_Word mercury__calendar__Var_21;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
            MR_Integer mercury__calendar__Var_23;
            MR_Integer mercury__calendar__Var_24;
            MR_Integer mercury__calendar__Var_25;
            MR_Integer mercury__calendar__Var_26;
            MR_Integer mercury__calendar__Var_27;
            MR_Integer mercury__calendar__Var_28;
            MR_Integer mercury__calendar__Var_29;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_23 = (MR_Integer) 0;
              mercury__calendar__Var_24 = (MR_Integer) 0;
              mercury__calendar__Var_25 = (MR_Integer) 1;
              mercury__calendar__Var_26 = (MR_Integer) 0;
              mercury__calendar__Var_27 = (MR_Integer) 0;
              mercury__calendar__Var_28 = (MR_Integer) 0;
              mercury__calendar__Var_29 = (MR_Integer) 0;
              mercury__calendar__Var_21 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_23, mercury__calendar__Var_24, mercury__calendar__Var_25, mercury__calendar__Var_26, mercury__calendar__Var_27, mercury__calendar__Var_28, mercury__calendar__Var_29);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

                mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14;
                mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15;
                mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl2_days_7_p_2(
  MR_Word mercury__calendar__TypeInfo_for_A_34,
  MR_Word mercury__calendar__TypeInfo_for_B_35,
  MR_Word mercury__calendar__Pred_8,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
  MR_Word mercury__calendar__End_10,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_13;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
      switch (mercury__calendar__Res_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
            MR_Word mercury__calendar__Var_21;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            mercury__calendar__Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14;
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15;
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl2_days_7_p_1(
  MR_Word mercury__calendar__TypeInfo_for_A_34,
  MR_Word mercury__calendar__TypeInfo_for_B_35,
  MR_Word mercury__calendar__Pred_8,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
  MR_Word mercury__calendar__End_10,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_13;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
      switch (mercury__calendar__Res_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
            MR_Word mercury__calendar__Var_21;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            mercury__calendar__Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14;
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15;
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl2_days_7_p_0(
  MR_Word mercury__calendar__TypeInfo_for_A_34,
  MR_Word mercury__calendar__TypeInfo_for_B_35,
  MR_Word mercury__calendar__Pred_8,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_14,
  MR_Word mercury__calendar__End_10,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_13;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_13, mercury__calendar__STATE_VARIABLE_Curr_0_14, mercury__calendar__End_10);
      switch (mercury__calendar__Res_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__calendar__STATE_VARIABLE_Acc2_20_20;
            MR_Word mercury__calendar__Var_21;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_22_22;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_8, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_8), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_14)), mercury__calendar__STATE_VARIABLE_Acc1_0_15, &mercury__calendar__STATE_VARIABLE_Acc1_19_19, mercury__calendar__STATE_VARIABLE_Acc2_0_17, &mercury__calendar__STATE_VARIABLE_Acc2_20_20);
            mercury__calendar__Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_21, mercury__calendar__STATE_VARIABLE_Curr_0_14, &mercury__calendar__STATE_VARIABLE_Curr_22_22);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14 = mercury__calendar__STATE_VARIABLE_Curr_22_22;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__calendar__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__calendar__STATE_VARIABLE_Acc2_20_20;

              mercury__calendar__STATE_VARIABLE_Curr_0_14 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_14;
              mercury__calendar__STATE_VARIABLE_Acc1_0_15 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc1_0_15;
              mercury__calendar__STATE_VARIABLE_Acc2_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc2_0_17;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc1_16 = mercury__calendar__STATE_VARIABLE_Acc1_0_15;
            *mercury__calendar__STATE_VARIABLE_Acc2_18 = mercury__calendar__STATE_VARIABLE_Acc2_0_17;
          }
          break;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_5(
  MR_Word mercury__calendar__TypeInfo_for_A_27,
  MR_Word mercury__calendar__Pred_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
  MR_Word mercury__calendar__End_8,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_10;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
      switch (mercury__calendar__Res_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
            MR_Word mercury__calendar__Var_15;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
            MR_Integer mercury__calendar__Var_17;
            MR_Integer mercury__calendar__Var_18;
            MR_Integer mercury__calendar__Var_19;
            MR_Integer mercury__calendar__Var_20;
            MR_Integer mercury__calendar__Var_21;
            MR_Integer mercury__calendar__Var_22;
            MR_Integer mercury__calendar__Var_23;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_17 = (MR_Integer) 0;
              mercury__calendar__Var_18 = (MR_Integer) 0;
              mercury__calendar__Var_19 = (MR_Integer) 1;
              mercury__calendar__Var_20 = (MR_Integer) 0;
              mercury__calendar__Var_21 = (MR_Integer) 0;
              mercury__calendar__Var_22 = (MR_Integer) 0;
              mercury__calendar__Var_23 = (MR_Integer) 0;
              mercury__calendar__Var_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_17, mercury__calendar__Var_18, mercury__calendar__Var_19, mercury__calendar__Var_20, mercury__calendar__Var_21, mercury__calendar__Var_22, mercury__calendar__Var_23);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

                mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11;
                mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_4(
  MR_Word mercury__calendar__TypeInfo_for_A_27,
  MR_Word mercury__calendar__Pred_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
  MR_Word mercury__calendar__End_8,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_10;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
      switch (mercury__calendar__Res_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
            MR_Word mercury__calendar__Var_15;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
            MR_Integer mercury__calendar__Var_17;
            MR_Integer mercury__calendar__Var_18;
            MR_Integer mercury__calendar__Var_19;
            MR_Integer mercury__calendar__Var_20;
            MR_Integer mercury__calendar__Var_21;
            MR_Integer mercury__calendar__Var_22;
            MR_Integer mercury__calendar__Var_23;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_17 = (MR_Integer) 0;
              mercury__calendar__Var_18 = (MR_Integer) 0;
              mercury__calendar__Var_19 = (MR_Integer) 1;
              mercury__calendar__Var_20 = (MR_Integer) 0;
              mercury__calendar__Var_21 = (MR_Integer) 0;
              mercury__calendar__Var_22 = (MR_Integer) 0;
              mercury__calendar__Var_23 = (MR_Integer) 0;
              mercury__calendar__Var_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_17, mercury__calendar__Var_18, mercury__calendar__Var_19, mercury__calendar__Var_20, mercury__calendar__Var_21, mercury__calendar__Var_22, mercury__calendar__Var_23);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

                mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11;
                mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_3(
  MR_Word mercury__calendar__TypeInfo_for_A_27,
  MR_Word mercury__calendar__Pred_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
  MR_Word mercury__calendar__End_8,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Word mercury__calendar__Res_10;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
      switch (mercury__calendar__Res_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
            MR_Word mercury__calendar__Var_15;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
            MR_Integer mercury__calendar__Var_17;
            MR_Integer mercury__calendar__Var_18;
            MR_Integer mercury__calendar__Var_19;
            MR_Integer mercury__calendar__Var_20;
            MR_Integer mercury__calendar__Var_21;
            MR_Integer mercury__calendar__Var_22;
            MR_Integer mercury__calendar__Var_23;
            MR_bool MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

            mercury__calendar__succeeded = mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_17 = (MR_Integer) 0;
              mercury__calendar__Var_18 = (MR_Integer) 0;
              mercury__calendar__Var_19 = (MR_Integer) 1;
              mercury__calendar__Var_20 = (MR_Integer) 0;
              mercury__calendar__Var_21 = (MR_Integer) 0;
              mercury__calendar__Var_22 = (MR_Integer) 0;
              mercury__calendar__Var_23 = (MR_Integer) 0;
              mercury__calendar__Var_15 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_17, mercury__calendar__Var_18, mercury__calendar__Var_19, mercury__calendar__Var_20, mercury__calendar__Var_21, mercury__calendar__Var_22, mercury__calendar__Var_23);
              mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
                MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

                mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11;
                mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
            mercury__calendar__succeeded = MR_TRUE;
          }
          break;
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl_days_5_p_2(
  MR_Word mercury__calendar__TypeInfo_for_A_27,
  MR_Word mercury__calendar__Pred_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
  MR_Word mercury__calendar__End_8,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_10;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
      switch (mercury__calendar__Res_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
            MR_Word mercury__calendar__Var_15;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            mercury__calendar__Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11;
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl_days_5_p_1(
  MR_Word mercury__calendar__TypeInfo_for_A_27,
  MR_Word mercury__calendar__Pred_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
  MR_Word mercury__calendar__End_8,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_10;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
      switch (mercury__calendar__Res_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
            MR_Word mercury__calendar__Var_15;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            mercury__calendar__Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11;
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl_days_5_p_0(
  MR_Word mercury__calendar__TypeInfo_for_A_27,
  MR_Word mercury__calendar__Pred_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Curr_0_11,
  MR_Word mercury__calendar__End_8,
  MR_Box mercury__calendar__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__calendar__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mercury__calendar__Res_10;

      mercury__calendar____Compare____date_0_0(&mercury__calendar__Res_10, mercury__calendar__STATE_VARIABLE_Curr_0_11, mercury__calendar__End_8);
      switch (mercury__calendar__Res_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_Box mercury__calendar__STATE_VARIABLE_Acc_14_14;
            MR_Word mercury__calendar__Var_15;
            MR_Word mercury__calendar__STATE_VARIABLE_Curr_16_16;
            void MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__calendar__Pred_6, (MR_Integer) 1)));

            mercury__calendar__func_0(((MR_Box) mercury__calendar__Pred_6), ((MR_Box) (mercury__calendar__STATE_VARIABLE_Curr_0_11)), mercury__calendar__STATE_VARIABLE_Acc_0_12, &mercury__calendar__STATE_VARIABLE_Acc_14_14);
            mercury__calendar__Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
            mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_15, mercury__calendar__STATE_VARIABLE_Curr_0_11, &mercury__calendar__STATE_VARIABLE_Curr_16_16);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11 = mercury__calendar__STATE_VARIABLE_Curr_16_16;
              MR_Box mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__calendar__STATE_VARIABLE_Acc_14_14;

              mercury__calendar__STATE_VARIABLE_Curr_0_11 = mercury__calendar__next_value_of_STATE_VARIABLE_Curr_0_11;
              mercury__calendar__STATE_VARIABLE_Acc_0_12 = mercury__calendar__next_value_of_STATE_VARIABLE_Acc_0_12;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          *mercury__calendar__STATE_VARIABLE_Acc_13 = mercury__calendar__STATE_VARIABLE_Acc_0_12;
          break;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__calendar__day_duration_2_f_0(
  MR_Word mercury__calendar__DateA_4,
  MR_Word mercury__calendar__DateB_5)
{
  {
    MR_Word mercury__calendar__Duration_6;
    MR_Word mercury__calendar__CompResult_7;

    mercury__calendar____Compare____date_0_0(&mercury__calendar__CompResult_7, mercury__calendar__DateB_5, mercury__calendar__DateA_4);
    switch (mercury__calendar__CompResult_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word mercury__calendar__Duration0_8;
          MR_Integer mercury__calendar__Months_88;
          MR_Integer mercury__calendar__Days_89;
          MR_Integer mercury__calendar__Seconds_90;
          MR_Integer mercury__calendar__MicroSeconds_91;
          MR_Integer mercury__calendar__Var_92;
          MR_Integer mercury__calendar__Var_93;
          MR_Integer mercury__calendar__Var_94;
          MR_Integer mercury__calendar__Var_95;

          mercury__calendar__Duration0_8 = mercury__calendar__day_duration_2_f_0(mercury__calendar__DateB_5, mercury__calendar__DateA_4);
          mercury__calendar__Months_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 0)));
          mercury__calendar__Days_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 1)));
          mercury__calendar__Seconds_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 2)));
          mercury__calendar__MicroSeconds_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 3)));
          mercury__calendar__Var_92 = ((MR_Integer) 0 - mercury__calendar__Months_88);
          mercury__calendar__Var_93 = ((MR_Integer) 0 - mercury__calendar__Days_89);
          mercury__calendar__Var_94 = ((MR_Integer) 0 - mercury__calendar__Seconds_90);
          mercury__calendar__Var_95 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_91);
          {
            mercury__calendar__Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 0) = ((MR_Box) (mercury__calendar__Var_92));
            MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 1) = ((MR_Box) (mercury__calendar__Var_93));
            MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 2) = ((MR_Box) (mercury__calendar__Var_94));
            MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 3) = ((MR_Box) (mercury__calendar__Var_95));
          }
        }
        break;
      case (MR_Integer) 0:
        mercury__calendar__Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mercury__calendar__MicroSecond1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
          MR_Integer mercury__calendar__MicroSecond2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
          MR_Integer mercury__calendar__MicroSeconds_12;
          MR_Integer mercury__calendar__Second1_13;
          MR_Integer mercury__calendar__Second2_14;
          MR_Integer mercury__calendar__Seconds_15;
          MR_Integer mercury__calendar__Minute1_16;
          MR_Integer mercury__calendar__Minute2_17;
          MR_Integer mercury__calendar__Minutes_18;
          MR_Integer mercury__calendar__Hour1_19;
          MR_Integer mercury__calendar__Hour2_20;
          MR_Integer mercury__calendar__Hours_21;
          MR_Integer mercury__calendar__JDN1_22;
          MR_Integer mercury__calendar__JDN2_23;
          MR_Integer mercury__calendar__Days_24;
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_26_26;
          MR_Integer mercury__calendar__Var_27;
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_29_29;
          MR_Integer mercury__calendar__Var_30;
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_32_32;
          MR_Integer mercury__calendar__Var_33;
          MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_35_35;
          MR_Integer mercury__calendar__Var_36;
          MR_Integer mercury__calendar__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
          MR_Integer mercury__calendar__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
          MR_Integer mercury__calendar__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
          MR_Integer mercury__calendar__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
          MR_Integer mercury__calendar__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
          MR_Integer mercury__calendar__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
          MR_Integer mercury__calendar__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
          MR_Integer mercury__calendar__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
          MR_Integer mercury__calendar__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
          MR_Integer mercury__calendar__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
          MR_Integer mercury__calendar__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
          MR_Integer mercury__calendar__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
          MR_Integer mercury__calendar__Var_51;
          MR_Integer mercury__calendar__Var_52;
          MR_Integer mercury__calendar__Var_53;
          MR_Integer mercury__calendar__Var_54;
          MR_Integer mercury__calendar__Var_55;
          MR_Integer mercury__calendar__Var_56;
          MR_Integer mercury__calendar__Var_57;
          MR_Integer mercury__calendar__Var_58;
          MR_Integer mercury__calendar__Var_59;
          MR_Integer mercury__calendar__Var_60;
          MR_Integer mercury__calendar__Var_61;
          MR_Integer mercury__calendar__Var_62;
          MR_Integer mercury__calendar__Var_63;
          MR_Integer mercury__calendar__Var_64;
          MR_Integer mercury__calendar__Var_65;
          MR_Integer mercury__calendar__Var_66;
          MR_Integer mercury__calendar__Var_67;
          MR_Integer mercury__calendar__Var_68;
          MR_Integer mercury__calendar__Var_69;
          MR_Integer mercury__calendar__Var_70;
          MR_Integer mercury__calendar__Var_71;
          MR_Integer mercury__calendar__Var_72;
          MR_Integer mercury__calendar__Var_73;
          MR_Integer mercury__calendar__Var_74;
          MR_Integer mercury__calendar__Var_75;
          MR_Integer mercury__calendar__Var_76;
          MR_Integer mercury__calendar__Var_77;
          MR_Integer mercury__calendar__Var_78;
          MR_Integer mercury__calendar__Var_79;
          MR_Integer mercury__calendar__Var_80;
          MR_Integer mercury__calendar__Var_81;
          MR_Integer mercury__calendar__Var_82;
          MR_Integer mercury__calendar__Var_83;
          MR_Integer mercury__calendar__Var_84;
          MR_Integer mercury__calendar__Var_85;
          MR_Integer mercury__calendar__Var_86;

          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 1000000, mercury__calendar__MicroSecond1_10, mercury__calendar__MicroSecond2_11, &mercury__calendar__MicroSeconds_12, &mercury__calendar__STATE_VARIABLE_Borrow_26_26);
          mercury__calendar__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
          mercury__calendar__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
          mercury__calendar__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
          mercury__calendar__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
          mercury__calendar__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
          mercury__calendar__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
          mercury__calendar__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
          mercury__calendar__Second1_13 = (mercury__calendar__Var_27 - mercury__calendar__STATE_VARIABLE_Borrow_26_26);
          mercury__calendar__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
          mercury__calendar__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
          mercury__calendar__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
          mercury__calendar__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
          mercury__calendar__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
          mercury__calendar__Second2_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
          mercury__calendar__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__Second1_13, mercury__calendar__Second2_14, &mercury__calendar__Seconds_15, &mercury__calendar__STATE_VARIABLE_Borrow_29_29);
          mercury__calendar__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
          mercury__calendar__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
          mercury__calendar__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
          mercury__calendar__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
          mercury__calendar__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
          mercury__calendar__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
          mercury__calendar__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
          mercury__calendar__Minute1_16 = (mercury__calendar__Var_30 - mercury__calendar__STATE_VARIABLE_Borrow_29_29);
          mercury__calendar__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
          mercury__calendar__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
          mercury__calendar__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
          mercury__calendar__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
          mercury__calendar__Minute2_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
          mercury__calendar__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
          mercury__calendar__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__Minute1_16, mercury__calendar__Minute2_17, &mercury__calendar__Minutes_18, &mercury__calendar__STATE_VARIABLE_Borrow_32_32);
          mercury__calendar__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 0)));
          mercury__calendar__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 1)));
          mercury__calendar__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 2)));
          mercury__calendar__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 3)));
          mercury__calendar__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 4)));
          mercury__calendar__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 5)));
          mercury__calendar__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_5, (MR_Integer) 6)));
          mercury__calendar__Hour1_19 = (mercury__calendar__Var_33 - mercury__calendar__STATE_VARIABLE_Borrow_32_32);
          mercury__calendar__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 0)));
          mercury__calendar__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 1)));
          mercury__calendar__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 2)));
          mercury__calendar__Hour2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 3)));
          mercury__calendar__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 4)));
          mercury__calendar__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 5)));
          mercury__calendar__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_4, (MR_Integer) 6)));
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, mercury__calendar__Hour1_19, mercury__calendar__Hour2_20, &mercury__calendar__Hours_21, &mercury__calendar__STATE_VARIABLE_Borrow_35_35);
          mercury__calendar__JDN1_22 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__DateB_5);
          mercury__calendar__JDN2_23 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__DateA_4);
          mercury__calendar__Var_36 = (mercury__calendar__JDN1_22 - mercury__calendar__STATE_VARIABLE_Borrow_35_35);
          mercury__calendar__Days_24 = (mercury__calendar__Var_36 - mercury__calendar__JDN2_23);
          mercury__calendar__Duration_6 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, mercury__calendar__Days_24, mercury__calendar__Hours_21, mercury__calendar__Minutes_18, mercury__calendar__Seconds_15, mercury__calendar__MicroSeconds_12);
        }
        break;
    }
    return mercury__calendar__Duration_6;
  }
}

void MR_CALL 
mercury__calendar__local_time_offset_3_p_0(
  MR_Word * mercury__calendar__TZ_4)
{
  {
    MR_Word mercury__calendar__TimeT_6;
    MR_Word mercury__calendar__LocalTM_7;
    MR_Word mercury__calendar__LocalTime_9;
    MR_Word mercury__calendar__GMTime_10;
    MR_Box mercury__calendar__V_3_16;
    MR_Integer mercury__calendar__V_13_25;
    MR_Integer mercury__calendar__TMYear_29;
    MR_Integer mercury__calendar__TMMonth_30;
    MR_Integer mercury__calendar__Year_38;
    MR_Integer mercury__calendar__Month_39;
    MR_Integer mercury__calendar__Day_40;
    MR_Integer mercury__calendar__Hour_41;
    MR_Integer mercury__calendar__Minute_42;
    MR_Integer mercury__calendar__Second_43;
    MR_Integer mercury__calendar__TMYear_49;
    MR_Integer mercury__calendar__TMMonth_50;
    MR_Integer mercury__calendar__Year_58;
    MR_Integer mercury__calendar__Month_59;
    MR_Integer mercury__calendar__Day_60;
    MR_Integer mercury__calendar__Hour_61;
    MR_Integer mercury__calendar__Minute_62;
    MR_Integer mercury__calendar__Second_63;
    MR_Integer mercury__calendar__V_11_23;
    MR_Integer mercury__calendar__V_12_24;
    MR_Word mercury__calendar__V_14_26;
    MR_Integer mercury__calendar__Var_35;
    MR_Integer mercury__calendar__Var_36;
    MR_Word mercury__calendar__Var_37;

    mercury__time__time_3_p_0(&mercury__calendar__TimeT_6);
    mercury__time__localtime_4_p_0(mercury__calendar__TimeT_6, &mercury__calendar__LocalTM_7);
    mercury__calendar__V_3_16 = (MR_Box) mercury__calendar__TimeT_6;
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

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__calendar__V_3_16 , Time);
		{
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

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__TMYear_49  = Yr;
	 mercury__calendar__TMMonth_50  = Mnt;
	 mercury__calendar__Day_60  = MD;
	 mercury__calendar__Hour_61  = Hrs;
	 mercury__calendar__Minute_62  = Min;
	 mercury__calendar__Second_63  = Sec;
	 mercury__calendar__V_11_23  = YD;
	 mercury__calendar__V_12_24  = WD;
	 mercury__calendar__V_13_25  = N;
}
    mercury__calendar__V_14_26 = mercury__time__int_to_maybe_dst_1_f_0(mercury__calendar__V_13_25);
    mercury__calendar__TMYear_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 0)));
    mercury__calendar__TMMonth_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 1)));
    mercury__calendar__Day_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 2)));
    mercury__calendar__Hour_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 3)));
    mercury__calendar__Minute_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 4)));
    mercury__calendar__Second_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 5)));
    mercury__calendar__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 6)));
    mercury__calendar__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 7)));
    mercury__calendar__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__LocalTM_7, (MR_Integer) 8)));
    mercury__calendar__Year_38 = ((MR_Integer) 1900 + mercury__calendar__TMYear_29);
    mercury__calendar__Month_39 = (mercury__calendar__TMMonth_30 + (MR_Integer) 1);
    {
      mercury__calendar__LocalTime_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 0) = ((MR_Box) (mercury__calendar__Year_38));
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 1) = ((MR_Box) (mercury__calendar__Month_39));
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 2) = ((MR_Box) (mercury__calendar__Day_40));
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 3) = ((MR_Box) (mercury__calendar__Hour_41));
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 4) = ((MR_Box) (mercury__calendar__Minute_42));
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 5) = ((MR_Box) (mercury__calendar__Second_43));
      MR_hl_field(MR_mktag(0), mercury__calendar__LocalTime_9, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__calendar__Year_58 = ((MR_Integer) 1900 + mercury__calendar__TMYear_49);
    mercury__calendar__Month_59 = (mercury__calendar__TMMonth_50 + (MR_Integer) 1);
    {
      mercury__calendar__GMTime_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 0) = ((MR_Box) (mercury__calendar__Year_58));
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 1) = ((MR_Box) (mercury__calendar__Month_59));
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 2) = ((MR_Box) (mercury__calendar__Day_60));
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 3) = ((MR_Box) (mercury__calendar__Hour_61));
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 4) = ((MR_Box) (mercury__calendar__Minute_62));
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 5) = ((MR_Box) (mercury__calendar__Second_63));
      MR_hl_field(MR_mktag(0), mercury__calendar__GMTime_10, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    *mercury__calendar__TZ_4 = mercury__calendar__duration_2_f_0(mercury__calendar__GMTime_10, mercury__calendar__LocalTime_9);
  }
}

MR_Word MR_CALL 
mercury__calendar__duration_2_f_0(
  MR_Word mercury__calendar__DateA_4,
  MR_Word mercury__calendar__DateB_5)
{
  {
    MR_Word mercury__calendar__Duration_6;
    MR_Word mercury__calendar__CompResult_7;

    mercury__calendar____Compare____date_0_0(&mercury__calendar__CompResult_7, mercury__calendar__DateB_5, mercury__calendar__DateA_4);
    switch (mercury__calendar__CompResult_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word mercury__calendar__Duration0_8;
          MR_Integer mercury__calendar__Months_12;
          MR_Integer mercury__calendar__Days_13;
          MR_Integer mercury__calendar__Seconds_14;
          MR_Integer mercury__calendar__MicroSeconds_15;
          MR_Integer mercury__calendar__Var_16;
          MR_Integer mercury__calendar__Var_17;
          MR_Integer mercury__calendar__Var_18;
          MR_Integer mercury__calendar__Var_19;

          mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 0, mercury__calendar__DateA_4, mercury__calendar__DateB_5, &mercury__calendar__Duration0_8);
          mercury__calendar__Months_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 0)));
          mercury__calendar__Days_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 1)));
          mercury__calendar__Seconds_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 2)));
          mercury__calendar__MicroSeconds_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration0_8, (MR_Integer) 3)));
          mercury__calendar__Var_16 = ((MR_Integer) 0 - mercury__calendar__Months_12);
          mercury__calendar__Var_17 = ((MR_Integer) 0 - mercury__calendar__Days_13);
          mercury__calendar__Var_18 = ((MR_Integer) 0 - mercury__calendar__Seconds_14);
          mercury__calendar__Var_19 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_15);
          {
            mercury__calendar__Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 0) = ((MR_Box) (mercury__calendar__Var_16));
            MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 1) = ((MR_Box) (mercury__calendar__Var_17));
            MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 2) = ((MR_Box) (mercury__calendar__Var_18));
            MR_hl_field(MR_mktag(0), mercury__calendar__Duration_6, 3) = ((MR_Box) (mercury__calendar__Var_19));
          }
        }
        break;
      case (MR_Integer) 0:
        mercury__calendar__Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
        break;
      case (MR_Integer) 2:
        {
          mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 1, mercury__calendar__DateB_5, mercury__calendar__DateA_4, &mercury__calendar__Duration_6);
        }
        break;
    }
    return mercury__calendar__Duration_6;
  }
}

static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
  MR_Word mercury__calendar__OriginalOrder_5,
  MR_Word mercury__calendar__DateA_6,
  MR_Word mercury__calendar__DateB_7,
  MR_Word * mercury__calendar__Duration_8)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__MicroSecondA_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
    MR_Integer mercury__calendar__MicroSecondB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
    MR_Integer mercury__calendar__MicroSeconds_12;
    MR_Integer mercury__calendar__SecondA_13;
    MR_Integer mercury__calendar__SecondB_14;
    MR_Integer mercury__calendar__Seconds_15;
    MR_Integer mercury__calendar__MinuteA_16;
    MR_Integer mercury__calendar__MinuteB_17;
    MR_Integer mercury__calendar__Minutes_18;
    MR_Integer mercury__calendar__HourA_19;
    MR_Integer mercury__calendar__HourB_20;
    MR_Integer mercury__calendar__Hours_21;
    MR_Integer mercury__calendar__DaysToBorrow_23;
    MR_Integer mercury__calendar__DayA_25;
    MR_Integer mercury__calendar__DayB_26;
    MR_Integer mercury__calendar__Days_28;
    MR_Integer mercury__calendar__MonthA_29;
    MR_Integer mercury__calendar__MonthB_30;
    MR_Integer mercury__calendar__Months_31;
    MR_Integer mercury__calendar__YearA_32;
    MR_Integer mercury__calendar__YearB_33;
    MR_Integer mercury__calendar__Years_34;
    MR_Integer mercury__calendar__Var_35;
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_36_36;
    MR_Integer mercury__calendar__Var_37;
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_39_39;
    MR_Integer mercury__calendar__Var_40;
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_42_42;
    MR_Integer mercury__calendar__Var_43;
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_45_45;
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_63_63;
    MR_Integer mercury__calendar__Var_64;
    MR_Integer mercury__calendar__STATE_VARIABLE_Borrow_66_66;
    MR_Integer mercury__calendar__Var_67;
    MR_Integer mercury__calendar__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_82;
    MR_Integer mercury__calendar__Var_83;
    MR_Integer mercury__calendar__Var_84;
    MR_Integer mercury__calendar__Var_85;
    MR_Integer mercury__calendar__Var_86;
    MR_Integer mercury__calendar__Var_87;
    MR_Integer mercury__calendar__Var_88;
    MR_Integer mercury__calendar__Var_89;
    MR_Integer mercury__calendar__Var_90;
    MR_Integer mercury__calendar__Var_91;
    MR_Integer mercury__calendar__Var_92;
    MR_Integer mercury__calendar__Var_93;
    MR_Integer mercury__calendar__Var_94;
    MR_Integer mercury__calendar__Var_95;
    MR_Integer mercury__calendar__Var_96;
    MR_Integer mercury__calendar__Var_97;
    MR_Integer mercury__calendar__Var_98;
    MR_Integer mercury__calendar__Var_99;
    MR_Integer mercury__calendar__Var_100;
    MR_Integer mercury__calendar__Var_101;
    MR_Integer mercury__calendar__Var_102;
    MR_Integer mercury__calendar__Var_103;
    MR_Integer mercury__calendar__Var_104;
    MR_Integer mercury__calendar__Var_105;
    MR_Integer mercury__calendar__Var_106;
    MR_Integer mercury__calendar__Var_107;
    MR_Integer mercury__calendar__Var_108;
    MR_Integer mercury__calendar__Var_109;
    MR_Integer mercury__calendar__Var_110;
    MR_Integer mercury__calendar__Var_111;
    MR_Integer mercury__calendar__Var_112;
    MR_Integer mercury__calendar__Var_113;
    MR_Integer mercury__calendar__Var_114;
    MR_Integer mercury__calendar__Var_115;
    MR_Integer mercury__calendar__Var_116;
    MR_Integer mercury__calendar__Var_117;
    MR_Integer mercury__calendar__Var_190;
    MR_Integer mercury__calendar__Var_191;
    MR_Integer mercury__calendar__Var_192;
    MR_Integer mercury__calendar__Var_193;
    MR_Integer mercury__calendar__Var_194;
    MR_Integer mercury__calendar__Var_195;
    MR_Integer mercury__calendar__Var_196;
    MR_Integer mercury__calendar__Var_197;
    MR_Integer mercury__calendar__Var_198;
    MR_Integer mercury__calendar__Var_199;
    MR_Integer mercury__calendar__Var_200;
    MR_Integer mercury__calendar__Var_201;
    MR_Integer mercury__calendar__Var_202;
    MR_Integer mercury__calendar__Var_203;
    MR_Integer mercury__calendar__Var_204;
    MR_Integer mercury__calendar__Var_205;
    MR_Integer mercury__calendar__Var_206;
    MR_Integer mercury__calendar__Var_207;
    MR_Integer mercury__calendar__Var_208;
    MR_Integer mercury__calendar__Var_209;
    MR_Integer mercury__calendar__Var_210;
    MR_Integer mercury__calendar__Var_211;
    MR_Integer mercury__calendar__Var_212;
    MR_Integer mercury__calendar__Var_213;

    mercury__calendar__Var_35 = mercury__calendar__microseconds_per_second_0_f_0();
    mercury__calendar__subtract_ints_with_borrow_5_p_0(mercury__calendar__Var_35, mercury__calendar__MicroSecondA_10, mercury__calendar__MicroSecondB_11, &mercury__calendar__MicroSeconds_12, &mercury__calendar__STATE_VARIABLE_Borrow_36_36);
    mercury__calendar__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
    mercury__calendar__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
    mercury__calendar__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
    mercury__calendar__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
    mercury__calendar__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
    mercury__calendar__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
    mercury__calendar__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
    mercury__calendar__SecondA_13 = (mercury__calendar__Var_37 - mercury__calendar__STATE_VARIABLE_Borrow_36_36);
    mercury__calendar__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
    mercury__calendar__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
    mercury__calendar__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
    mercury__calendar__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
    mercury__calendar__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
    mercury__calendar__SecondB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
    mercury__calendar__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
    mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__SecondA_13, mercury__calendar__SecondB_14, &mercury__calendar__Seconds_15, &mercury__calendar__STATE_VARIABLE_Borrow_39_39);
    mercury__calendar__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
    mercury__calendar__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
    mercury__calendar__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
    mercury__calendar__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
    mercury__calendar__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
    mercury__calendar__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
    mercury__calendar__Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
    mercury__calendar__MinuteA_16 = (mercury__calendar__Var_40 - mercury__calendar__STATE_VARIABLE_Borrow_39_39);
    mercury__calendar__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
    mercury__calendar__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
    mercury__calendar__Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
    mercury__calendar__Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
    mercury__calendar__MinuteB_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
    mercury__calendar__Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
    mercury__calendar__Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
    mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, mercury__calendar__MinuteA_16, mercury__calendar__MinuteB_17, &mercury__calendar__Minutes_18, &mercury__calendar__STATE_VARIABLE_Borrow_42_42);
    mercury__calendar__Var_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
    mercury__calendar__Var_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
    mercury__calendar__Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
    mercury__calendar__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
    mercury__calendar__Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
    mercury__calendar__Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
    mercury__calendar__Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
    mercury__calendar__HourA_19 = (mercury__calendar__Var_43 - mercury__calendar__STATE_VARIABLE_Borrow_42_42);
    mercury__calendar__Var_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
    mercury__calendar__Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
    mercury__calendar__Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
    mercury__calendar__HourB_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
    mercury__calendar__Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
    mercury__calendar__Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
    mercury__calendar__Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
    mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, mercury__calendar__HourA_19, mercury__calendar__HourB_20, &mercury__calendar__Hours_21, &mercury__calendar__STATE_VARIABLE_Borrow_45_45);
    switch (mercury__calendar__OriginalOrder_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer mercury__calendar__DateBEndOfMonth_27;
          MR_Integer mercury__calendar__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
          MR_Integer mercury__calendar__Var_48;
          MR_Integer mercury__calendar__Var_50;
          MR_Integer mercury__calendar__Var_51;
          MR_Integer mercury__calendar__Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
          MR_Integer mercury__calendar__Var_166;
          MR_Integer mercury__calendar__Var_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
          MR_Integer mercury__calendar__Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
          MR_Integer mercury__calendar__Var_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
          MR_Integer mercury__calendar__Var_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
          MR_Integer mercury__calendar__Var_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
          MR_Integer mercury__calendar__Var_167;
          MR_Integer mercury__calendar__Var_168;
          MR_Integer mercury__calendar__Var_169;
          MR_Integer mercury__calendar__Var_170;
          MR_Integer mercury__calendar__Var_171;
          MR_Integer mercury__calendar__Var_178;
          MR_Integer mercury__calendar__Var_179;
          MR_Integer mercury__calendar__Var_180;
          MR_Integer mercury__calendar__Var_181;
          MR_Integer mercury__calendar__Var_182;
          MR_Integer mercury__calendar__Var_183;
          MR_Integer mercury__calendar__Var_184;
          MR_Integer mercury__calendar__Var_185;
          MR_Integer mercury__calendar__Var_186;
          MR_Integer mercury__calendar__Var_187;
          MR_Integer mercury__calendar__Var_188;
          MR_Integer mercury__calendar__Var_189;

          mercury__calendar__DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Var_46, mercury__calendar__Var_154);
          mercury__calendar__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
          mercury__calendar__Var_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
          mercury__calendar__Var_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
          mercury__calendar__Var_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
          mercury__calendar__Var_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
          mercury__calendar__Var_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
          mercury__calendar__Var_171 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
          mercury__calendar__DateBEndOfMonth_27 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Var_48, mercury__calendar__Var_166);
          mercury__calendar__Var_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
          mercury__calendar__Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
          mercury__calendar__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
          mercury__calendar__Var_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
          mercury__calendar__Var_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
          mercury__calendar__Var_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
          mercury__calendar__Var_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
          mercury__calendar__Var_50 = (mercury__calendar__Var_51 - mercury__calendar__STATE_VARIABLE_Borrow_45_45);
          mercury__calendar__DayA_25 = mercury__int__min_2_f_0(mercury__calendar__Var_50, mercury__calendar__DateBEndOfMonth_27);
          mercury__calendar__Var_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
          mercury__calendar__Var_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
          mercury__calendar__DayB_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
          mercury__calendar__Var_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
          mercury__calendar__Var_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
          mercury__calendar__Var_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
          mercury__calendar__Var_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__calendar__DateAMinus1Month_22;
          MR_Integer mercury__calendar__DateAEndOfMonth_24;
          MR_Word mercury__calendar__Var_52 = (MR_Word) &mercury__calendar_scalar_common_3[2];
          MR_Integer mercury__calendar__Var_57;
          MR_Integer mercury__calendar__Var_59;
          MR_Integer mercury__calendar__Var_61;
          MR_Integer mercury__calendar__Var_62;
          MR_Integer mercury__calendar__Var_118;
          MR_Integer mercury__calendar__Var_130;
          MR_Integer mercury__calendar__Var_119;
          MR_Integer mercury__calendar__Var_120;
          MR_Integer mercury__calendar__Var_121;
          MR_Integer mercury__calendar__Var_122;
          MR_Integer mercury__calendar__Var_123;
          MR_Integer mercury__calendar__Var_131;
          MR_Integer mercury__calendar__Var_132;
          MR_Integer mercury__calendar__Var_133;
          MR_Integer mercury__calendar__Var_134;
          MR_Integer mercury__calendar__Var_135;
          MR_Integer mercury__calendar__Var_142;
          MR_Integer mercury__calendar__Var_143;
          MR_Integer mercury__calendar__Var_144;
          MR_Integer mercury__calendar__Var_145;
          MR_Integer mercury__calendar__Var_146;
          MR_Integer mercury__calendar__Var_147;
          MR_Integer mercury__calendar__Var_148;
          MR_Integer mercury__calendar__Var_149;
          MR_Integer mercury__calendar__Var_150;
          MR_Integer mercury__calendar__Var_151;
          MR_Integer mercury__calendar__Var_152;
          MR_Integer mercury__calendar__Var_153;

          mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_52, mercury__calendar__DateA_6, &mercury__calendar__DateAMinus1Month_22);
          mercury__calendar__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 0)));
          mercury__calendar__Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 1)));
          mercury__calendar__Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 2)));
          mercury__calendar__Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 3)));
          mercury__calendar__Var_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 4)));
          mercury__calendar__Var_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 5)));
          mercury__calendar__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateAMinus1Month_22, (MR_Integer) 6)));
          mercury__calendar__DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Var_57, mercury__calendar__Var_118);
          mercury__calendar__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
          mercury__calendar__Var_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
          mercury__calendar__Var_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
          mercury__calendar__Var_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
          mercury__calendar__Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
          mercury__calendar__Var_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
          mercury__calendar__Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
          mercury__calendar__DateAEndOfMonth_24 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Var_59, mercury__calendar__Var_130);
          mercury__calendar__Var_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
          mercury__calendar__Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
          mercury__calendar__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
          mercury__calendar__Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
          mercury__calendar__Var_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
          mercury__calendar__Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
          mercury__calendar__Var_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
          mercury__calendar__DayA_25 = (mercury__calendar__Var_61 - mercury__calendar__STATE_VARIABLE_Borrow_45_45);
          mercury__calendar__Var_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
          mercury__calendar__Var_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
          mercury__calendar__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
          mercury__calendar__Var_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
          mercury__calendar__Var_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
          mercury__calendar__Var_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
          mercury__calendar__Var_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
          mercury__calendar__DayB_26 = mercury__int__min_2_f_0(mercury__calendar__Var_62, mercury__calendar__DateAEndOfMonth_24);
        }
        break;
    }
    mercury__calendar__subtract_ints_with_borrow_5_p_0(mercury__calendar__DaysToBorrow_23, mercury__calendar__DayA_25, mercury__calendar__DayB_26, &mercury__calendar__Days_28, &mercury__calendar__STATE_VARIABLE_Borrow_63_63);
    mercury__calendar__Var_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
    mercury__calendar__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
    mercury__calendar__Var_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
    mercury__calendar__Var_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
    mercury__calendar__Var_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
    mercury__calendar__Var_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
    mercury__calendar__Var_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
    mercury__calendar__MonthA_29 = (mercury__calendar__Var_64 - mercury__calendar__STATE_VARIABLE_Borrow_63_63);
    mercury__calendar__Var_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
    mercury__calendar__MonthB_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
    mercury__calendar__Var_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
    mercury__calendar__Var_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
    mercury__calendar__Var_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
    mercury__calendar__Var_200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
    mercury__calendar__Var_201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
    mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 12, mercury__calendar__MonthA_29, mercury__calendar__MonthB_30, &mercury__calendar__Months_31, &mercury__calendar__STATE_VARIABLE_Borrow_66_66);
    mercury__calendar__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 0)));
    mercury__calendar__Var_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 1)));
    mercury__calendar__Var_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 2)));
    mercury__calendar__Var_204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 3)));
    mercury__calendar__Var_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 4)));
    mercury__calendar__Var_206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 5)));
    mercury__calendar__Var_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateA_6, (MR_Integer) 6)));
    mercury__calendar__YearA_32 = (mercury__calendar__Var_67 - mercury__calendar__STATE_VARIABLE_Borrow_66_66);
    mercury__calendar__YearB_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 0)));
    mercury__calendar__Var_208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 1)));
    mercury__calendar__Var_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 2)));
    mercury__calendar__Var_210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 3)));
    mercury__calendar__Var_211 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 4)));
    mercury__calendar__Var_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 5)));
    mercury__calendar__Var_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__DateB_7, (MR_Integer) 6)));
    mercury__calendar__succeeded = (mercury__calendar__YearA_32 >= mercury__calendar__YearB_33);
    if (mercury__calendar__succeeded)
      mercury__calendar__Years_34 = (mercury__calendar__YearA_32 - mercury__calendar__YearB_33);
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140calendar.greedy_subtract_descending\'/4", (MR_String) "left over years");
        return;
      }
    }
    *mercury__calendar__Duration_8 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Years_34, mercury__calendar__Months_31, mercury__calendar__Days_28, mercury__calendar__Hours_21, mercury__calendar__Minutes_18, mercury__calendar__Seconds_15, mercury__calendar__MicroSeconds_12);
  }
}

static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
  MR_Integer mercury__calendar__BorrowVal_6,
  MR_Integer mercury__calendar__Val1_7,
  MR_Integer mercury__calendar__Val2_8,
  MR_Integer * mercury__calendar__Diff_9,
  MR_Integer * mercury__calendar__Borrow_10)
{
  {
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Val1_7 >= mercury__calendar__Val2_8);

    if (mercury__calendar__succeeded)
    {
      *mercury__calendar__Borrow_10 = (MR_Integer) 0;
      *mercury__calendar__Diff_9 = (mercury__calendar__Val1_7 - mercury__calendar__Val2_8);
    }
    else
    {
      MR_Integer mercury__calendar__Var_11;

      *mercury__calendar__Borrow_10 = (MR_Integer) 1;
      mercury__calendar__Var_11 = (mercury__calendar__BorrowVal_6 + mercury__calendar__Val1_7);
      *mercury__calendar__Diff_9 = (mercury__calendar__Var_11 - mercury__calendar__Val2_8);
    }
  }
}

MR_bool MR_CALL 
mercury__calendar__duration_leq_2_p_0(
  MR_Word mercury__calendar__DurA_3,
  MR_Word mercury__calendar__DurB_4)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

    mercury__calendar__succeeded = mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(mercury__calendar__DurA_3, mercury__calendar__DurB_4, mercury__calendar__Var_10);
    return mercury__calendar__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(
  MR_Word mercury__calendar__Var_8,
  MR_Word mercury__calendar__Var_9,
  MR_Word mercury__calendar__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;

      if ((mercury__calendar__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__calendar__succeeded = MR_TRUE;
      else
      {
        MR_Word mercury__calendar__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__calendar__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__calendar__DateA_13;
        MR_Word mercury__calendar__DateB_14;
        MR_Word mercury__calendar__CompRes_15;

        mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_8, mercury__calendar__V_5_5, &mercury__calendar__DateA_13);
        mercury__calendar__add_duration_3_p_0(mercury__calendar__Var_9, mercury__calendar__V_5_5, &mercury__calendar__DateB_14);
        mercury__calendar____Compare____date_0_0(&mercury__calendar__CompRes_15, mercury__calendar__DateA_13, mercury__calendar__DateB_14);
        switch (mercury__calendar__CompRes_15) {
          default:
            mercury__calendar__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__calendar__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__calendar__succeeded = MR_TRUE;
            break;
        }
        if (mercury__calendar__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word mercury__calendar__next_value_of_HeadVar__2_2 = mercury__calendar__V_6_6;

            mercury__calendar__HeadVar__2_2 = mercury__calendar__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      }
      return mercury__calendar__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar____Compare____date_0_0(
  MR_Word * mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2,
  MR_Word mercury__calendar__HeadVar__3_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__CastX_24 = (MR_Integer) mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__CastY_25 = (MR_Integer) mercury__calendar__HeadVar__3_3;

    mercury__calendar__succeeded = (mercury__calendar__CastX_24 == mercury__calendar__CastY_25);
    if (mercury__calendar__succeeded)
      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer mercury__calendar__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__calendar__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer mercury__calendar__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__calendar__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer mercury__calendar__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mercury__calendar__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer mercury__calendar__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer mercury__calendar__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer mercury__calendar__ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer mercury__calendar__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 4)));
      MR_Integer mercury__calendar__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer mercury__calendar__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer mercury__calendar__ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer mercury__calendar__ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word mercury__calendar__Var_18;

      mercury__calendar__succeeded = (mercury__calendar__ArgX1_4 < mercury__calendar__ArgY1_5);
      if (mercury__calendar__succeeded)
        mercury__calendar__Var_18 = (MR_Integer) 1;
      else
      {
        mercury__calendar__succeeded = (mercury__calendar__ArgX1_4 == mercury__calendar__ArgY1_5);
        if (mercury__calendar__succeeded)
          mercury__calendar__Var_18 = (MR_Integer) 0;
        else
          mercury__calendar__Var_18 = (MR_Integer) 2;
      }
      mercury__calendar__succeeded = (mercury__calendar__Var_18 == (MR_Integer) 0);
      mercury__calendar__succeeded = !(mercury__calendar__succeeded);
      if (mercury__calendar__succeeded)
        *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_18;
      else
      {
        MR_Word mercury__calendar__Var_19;

        mercury__calendar__succeeded = (mercury__calendar__ArgX2_6 < mercury__calendar__ArgY2_7);
        if (mercury__calendar__succeeded)
          mercury__calendar__Var_19 = (MR_Integer) 1;
        else
        {
          mercury__calendar__succeeded = (mercury__calendar__ArgX2_6 == mercury__calendar__ArgY2_7);
          if (mercury__calendar__succeeded)
            mercury__calendar__Var_19 = (MR_Integer) 0;
          else
            mercury__calendar__Var_19 = (MR_Integer) 2;
        }
        mercury__calendar__succeeded = (mercury__calendar__Var_19 == (MR_Integer) 0);
        mercury__calendar__succeeded = !(mercury__calendar__succeeded);
        if (mercury__calendar__succeeded)
          *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_19;
        else
        {
          MR_Word mercury__calendar__Var_20;

          mercury__calendar__succeeded = (mercury__calendar__ArgX3_8 < mercury__calendar__ArgY3_9);
          if (mercury__calendar__succeeded)
            mercury__calendar__Var_20 = (MR_Integer) 1;
          else
          {
            mercury__calendar__succeeded = (mercury__calendar__ArgX3_8 == mercury__calendar__ArgY3_9);
            if (mercury__calendar__succeeded)
              mercury__calendar__Var_20 = (MR_Integer) 0;
            else
              mercury__calendar__Var_20 = (MR_Integer) 2;
          }
          mercury__calendar__succeeded = (mercury__calendar__Var_20 == (MR_Integer) 0);
          mercury__calendar__succeeded = !(mercury__calendar__succeeded);
          if (mercury__calendar__succeeded)
            *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_20;
          else
          {
            MR_Word mercury__calendar__Var_21;

            mercury__calendar__succeeded = (mercury__calendar__ArgX4_10 < mercury__calendar__ArgY4_11);
            if (mercury__calendar__succeeded)
              mercury__calendar__Var_21 = (MR_Integer) 1;
            else
            {
              mercury__calendar__succeeded = (mercury__calendar__ArgX4_10 == mercury__calendar__ArgY4_11);
              if (mercury__calendar__succeeded)
                mercury__calendar__Var_21 = (MR_Integer) 0;
              else
                mercury__calendar__Var_21 = (MR_Integer) 2;
            }
            mercury__calendar__succeeded = (mercury__calendar__Var_21 == (MR_Integer) 0);
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
            if (mercury__calendar__succeeded)
              *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_21;
            else
            {
              MR_Word mercury__calendar__Var_22;

              mercury__calendar__succeeded = (mercury__calendar__ArgX5_12 < mercury__calendar__ArgY5_13);
              if (mercury__calendar__succeeded)
                mercury__calendar__Var_22 = (MR_Integer) 1;
              else
              {
                mercury__calendar__succeeded = (mercury__calendar__ArgX5_12 == mercury__calendar__ArgY5_13);
                if (mercury__calendar__succeeded)
                  mercury__calendar__Var_22 = (MR_Integer) 0;
                else
                  mercury__calendar__Var_22 = (MR_Integer) 2;
              }
              mercury__calendar__succeeded = (mercury__calendar__Var_22 == (MR_Integer) 0);
              mercury__calendar__succeeded = !(mercury__calendar__succeeded);
              if (mercury__calendar__succeeded)
                *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_22;
              else
              {
                MR_Word mercury__calendar__Var_23;

                mercury__calendar__succeeded = (mercury__calendar__ArgX6_14 < mercury__calendar__ArgY6_15);
                if (mercury__calendar__succeeded)
                  mercury__calendar__Var_23 = (MR_Integer) 1;
                else
                {
                  mercury__calendar__succeeded = (mercury__calendar__ArgX6_14 == mercury__calendar__ArgY6_15);
                  if (mercury__calendar__succeeded)
                    mercury__calendar__Var_23 = (MR_Integer) 0;
                  else
                    mercury__calendar__Var_23 = (MR_Integer) 2;
                }
                mercury__calendar__succeeded = (mercury__calendar__Var_23 == (MR_Integer) 0);
                mercury__calendar__succeeded = !(mercury__calendar__succeeded);
                if (mercury__calendar__succeeded)
                  *mercury__calendar__HeadVar__1_1 = mercury__calendar__Var_23;
                else
                {
                  mercury__calendar__succeeded = (mercury__calendar__ArgX7_16 < mercury__calendar__ArgY7_17);
                  if (mercury__calendar__succeeded)
                    *mercury__calendar__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__calendar__succeeded = (mercury__calendar__ArgX7_16 == mercury__calendar__ArgY7_17);
                    if (mercury__calendar__succeeded)
                      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__calendar__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mercury__calendar__add_duration_3_p_0(
  MR_Word mercury__calendar__D_4,
  MR_Word mercury__calendar__S_5,
  MR_Word * mercury__calendar__E_6)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__MaxDaysInMonth_9;
    MR_Integer mercury__calendar__TempDays_10;
    MR_Word mercury__calendar__STATE_VARIABLE_E_11_11 = (MR_Word) &mercury__calendar_scalar_common_5[1];
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_19_19;
    MR_Integer mercury__calendar__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
    MR_Word mercury__calendar__STATE_VARIABLE_E_22_22;
    MR_Integer mercury__calendar__Var_23;
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_26_26;
    MR_Word mercury__calendar__STATE_VARIABLE_E_29_29;
    MR_Integer mercury__calendar__Var_30;
    MR_Integer mercury__calendar__Var_31;
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_32_32;
    MR_Integer mercury__calendar__Var_34;
    MR_Word mercury__calendar__STATE_VARIABLE_E_35_35;
    MR_Integer mercury__calendar__Var_36;
    MR_Integer mercury__calendar__Var_37;
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_38_38;
    MR_Integer mercury__calendar__Var_39;
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_40_40;
    MR_Integer mercury__calendar__Var_41;
    MR_Integer mercury__calendar__Var_42;
    MR_Integer mercury__calendar__Var_43;
    MR_Word mercury__calendar__STATE_VARIABLE_E_44_44;
    MR_Integer mercury__calendar__Var_45;
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_47_47;
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_49_49;
    MR_Integer mercury__calendar__Var_50;
    MR_Word mercury__calendar__STATE_VARIABLE_E_51_51;
    MR_Integer mercury__calendar__Var_52;
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_54_54;
    MR_Integer mercury__calendar__STATE_VARIABLE_Temp_56_56;
    MR_Integer mercury__calendar__Var_57;
    MR_Word mercury__calendar__STATE_VARIABLE_E_58_58;
    MR_Integer mercury__calendar__Var_59;
    MR_Integer mercury__calendar__STATE_VARIABLE_Carry_61_61;
    MR_Integer mercury__calendar__Var_63;
    MR_Word mercury__calendar__STATE_VARIABLE_E_68_68;
    MR_Integer mercury__calendar__Var_69;
    MR_Integer mercury__calendar__Var_70;
    MR_Integer mercury__calendar__Var_71;
    MR_Integer mercury__calendar__Var_94;
    MR_Integer mercury__calendar__Var_160;
    MR_Integer mercury__calendar__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
    MR_Integer mercury__calendar__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_82;
    MR_Integer mercury__calendar__Var_84;
    MR_Integer mercury__calendar__Var_85;
    MR_Integer mercury__calendar__Var_86;
    MR_Integer mercury__calendar__Var_87;
    MR_Integer mercury__calendar__Var_88;
    MR_Integer mercury__calendar__Var_83;
    MR_Integer mercury__calendar__Var_89;
    MR_Integer mercury__calendar__Var_90;
    MR_Integer mercury__calendar__Var_91;
    MR_Integer mercury__calendar__Var_92;
    MR_Integer mercury__calendar__Var_93;
    MR_Integer mercury__calendar__Var_96;
    MR_Integer mercury__calendar__Var_97;
    MR_Integer mercury__calendar__Var_98;
    MR_Integer mercury__calendar__Var_99;
    MR_Integer mercury__calendar__Var_100;
    MR_Integer mercury__calendar__Var_101;
    MR_Integer mercury__calendar__Var_95;
    MR_Integer mercury__calendar__Var_108;
    MR_Integer mercury__calendar__Var_109;
    MR_Integer mercury__calendar__Var_110;
    MR_Integer mercury__calendar__Var_111;
    MR_Integer mercury__calendar__Var_112;
    MR_Integer mercury__calendar__Var_113;
    MR_Integer mercury__calendar__Var_114;
    MR_Integer mercury__calendar__Var_115;
    MR_Integer mercury__calendar__Var_116;
    MR_Integer mercury__calendar__Var_117;
    MR_Integer mercury__calendar__Var_118;
    MR_Integer mercury__calendar__Var_119;
    MR_Integer mercury__calendar__Var_120;
    MR_Integer mercury__calendar__Var_121;
    MR_Integer mercury__calendar__Var_122;
    MR_Integer mercury__calendar__Var_123;
    MR_Integer mercury__calendar__Var_124;
    MR_Integer mercury__calendar__Var_125;
    MR_Integer mercury__calendar__Var_126;
    MR_Integer mercury__calendar__Var_127;
    MR_Integer mercury__calendar__Var_128;
    MR_Integer mercury__calendar__Var_129;
    MR_Integer mercury__calendar__Var_130;
    MR_Integer mercury__calendar__Var_131;
    MR_Integer mercury__calendar__Var_133;
    MR_Integer mercury__calendar__Var_132;
    MR_Integer mercury__calendar__Var_134;
    MR_Integer mercury__calendar__Var_135;
    MR_Integer mercury__calendar__Var_136;
    MR_Integer mercury__calendar__Var_137;
    MR_Integer mercury__calendar__Var_138;
    MR_Integer mercury__calendar__Var_139;
    MR_Integer mercury__calendar__Var_140;
    MR_Integer mercury__calendar__Var_141;
    MR_Integer mercury__calendar__Var_142;
    MR_Integer mercury__calendar__Var_143;
    MR_Integer mercury__calendar__Var_145;
    MR_Integer mercury__calendar__Var_146;
    MR_Integer mercury__calendar__Var_144;
    MR_Integer mercury__calendar__Var_147;
    MR_Integer mercury__calendar__Var_148;
    MR_Integer mercury__calendar__Var_149;
    MR_Integer mercury__calendar__Var_150;
    MR_Integer mercury__calendar__Var_151;
    MR_Integer mercury__calendar__Var_152;
    MR_Integer mercury__calendar__Var_153;
    MR_Integer mercury__calendar__Var_154;
    MR_Integer mercury__calendar__Var_155;
    MR_Integer mercury__calendar__Var_157;
    MR_Integer mercury__calendar__Var_158;
    MR_Integer mercury__calendar__Var_159;
    MR_Integer mercury__calendar__Var_156;
    MR_Integer mercury__calendar__Var_161;
    MR_Integer mercury__calendar__Var_162;
    MR_Integer mercury__calendar__Var_163;
    MR_Integer mercury__calendar__Var_164;
    MR_Integer mercury__calendar__Var_165;
    MR_Integer mercury__calendar__Var_65;
    MR_Integer mercury__calendar__Var_172;
    MR_Integer mercury__calendar__Var_173;
    MR_Integer mercury__calendar__Var_174;
    MR_Integer mercury__calendar__Var_175;
    MR_Integer mercury__calendar__Var_176;
    MR_Integer mercury__calendar__Var_177;
    MR_Integer mercury__calendar__Var_190;
    MR_Integer mercury__calendar__Var_191;
    MR_Integer mercury__calendar__Var_192;
    MR_Integer mercury__calendar__Var_193;
    MR_Integer mercury__calendar__Var_194;
    MR_Integer mercury__calendar__Var_196;
    MR_Integer mercury__calendar__Var_197;
    MR_Integer mercury__calendar__Var_198;
    MR_Integer mercury__calendar__Var_199;
    MR_Integer mercury__calendar__Var_195;

    mercury__calendar__STATE_VARIABLE_Temp_19_19 = (mercury__calendar__Var_20 + mercury__calendar__Var_21);
    mercury__calendar__Var_23 = mercury__calendar__modulo_3_f_0(mercury__calendar__STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    mercury__calendar__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 0)));
    mercury__calendar__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 1)));
    mercury__calendar__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 2)));
    mercury__calendar__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 3)));
    mercury__calendar__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 4)));
    mercury__calendar__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 5)));
    mercury__calendar__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_11_11, (MR_Integer) 6)));
    {
      mercury__calendar__STATE_VARIABLE_E_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 0) = ((MR_Box) (mercury__calendar__Var_82));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 1) = ((MR_Box) (mercury__calendar__Var_23));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 2) = ((MR_Box) (mercury__calendar__Var_84));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 3) = ((MR_Box) (mercury__calendar__Var_85));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 4) = ((MR_Box) (mercury__calendar__Var_86));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 5) = ((MR_Box) (mercury__calendar__Var_87));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, 6) = ((MR_Box) (mercury__calendar__Var_88));
    }
    mercury__calendar__STATE_VARIABLE_Carry_26_26 = mercury__calendar__fquotient_3_f_0(mercury__calendar__STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    mercury__calendar__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
    mercury__calendar__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
    mercury__calendar__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
    mercury__calendar__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
    mercury__calendar__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
    mercury__calendar__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
    mercury__calendar__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
    mercury__calendar__Var_30 = (mercury__calendar__Var_31 + mercury__calendar__STATE_VARIABLE_Carry_26_26);
    mercury__calendar__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 0)));
    mercury__calendar__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 1)));
    mercury__calendar__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 2)));
    mercury__calendar__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 3)));
    mercury__calendar__Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 4)));
    mercury__calendar__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 5)));
    mercury__calendar__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_22_22, (MR_Integer) 6)));
    {
      mercury__calendar__STATE_VARIABLE_E_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 0) = ((MR_Box) (mercury__calendar__Var_30));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 1) = ((MR_Box) (mercury__calendar__Var_96));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 2) = ((MR_Box) (mercury__calendar__Var_97));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 3) = ((MR_Box) (mercury__calendar__Var_98));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 4) = ((MR_Box) (mercury__calendar__Var_99));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 5) = ((MR_Box) (mercury__calendar__Var_100));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, 6) = ((MR_Box) (mercury__calendar__Var_101));
    }
    mercury__calendar__Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
    mercury__calendar__Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
    mercury__calendar__Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
    mercury__calendar__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
    mercury__calendar__STATE_VARIABLE_Temp_32_32 = (mercury__calendar__Var_94 + mercury__calendar__Var_34);
    mercury__calendar__Var_37 = mercury__calendar__microseconds_per_second_0_f_0();
    mercury__calendar__Var_36 = mercury__calendar__modulo_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_32_32, mercury__calendar__Var_37);
    mercury__calendar__Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 0)));
    mercury__calendar__Var_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 1)));
    mercury__calendar__Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 2)));
    mercury__calendar__Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 3)));
    mercury__calendar__Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 4)));
    mercury__calendar__Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 5)));
    mercury__calendar__Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_29_29, (MR_Integer) 6)));
    {
      mercury__calendar__STATE_VARIABLE_E_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 0) = ((MR_Box) (mercury__calendar__Var_111));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 1) = ((MR_Box) (mercury__calendar__Var_112));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 2) = ((MR_Box) (mercury__calendar__Var_113));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 3) = ((MR_Box) (mercury__calendar__Var_114));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 4) = ((MR_Box) (mercury__calendar__Var_115));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 5) = ((MR_Box) (mercury__calendar__Var_116));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, 6) = ((MR_Box) (mercury__calendar__Var_36));
    }
    mercury__calendar__Var_39 = mercury__calendar__microseconds_per_second_0_f_0();
    mercury__calendar__STATE_VARIABLE_Carry_38_38 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_32_32, mercury__calendar__Var_39);
    mercury__calendar__Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
    mercury__calendar__Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
    mercury__calendar__Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
    mercury__calendar__Var_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
    mercury__calendar__Var_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
    mercury__calendar__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
    mercury__calendar__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
    mercury__calendar__Var_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
    mercury__calendar__Var_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
    mercury__calendar__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
    mercury__calendar__Var_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
    mercury__calendar__Var_41 = (mercury__calendar__Var_42 + mercury__calendar__Var_43);
    mercury__calendar__STATE_VARIABLE_Temp_40_40 = (mercury__calendar__Var_41 + mercury__calendar__STATE_VARIABLE_Carry_38_38);
    mercury__calendar__Var_45 = mercury__calendar__modulo_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    mercury__calendar__Var_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 0)));
    mercury__calendar__Var_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 1)));
    mercury__calendar__Var_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 2)));
    mercury__calendar__Var_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 3)));
    mercury__calendar__Var_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 4)));
    mercury__calendar__Var_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 5)));
    mercury__calendar__Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_35_35, (MR_Integer) 6)));
    {
      mercury__calendar__STATE_VARIABLE_E_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 0) = ((MR_Box) (mercury__calendar__Var_127));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 1) = ((MR_Box) (mercury__calendar__Var_128));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 2) = ((MR_Box) (mercury__calendar__Var_129));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 3) = ((MR_Box) (mercury__calendar__Var_130));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 4) = ((MR_Box) (mercury__calendar__Var_131));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 5) = ((MR_Box) (mercury__calendar__Var_45));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, 6) = ((MR_Box) (mercury__calendar__Var_133));
    }
    mercury__calendar__STATE_VARIABLE_Carry_47_47 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    mercury__calendar__Var_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
    mercury__calendar__Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
    mercury__calendar__Var_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
    mercury__calendar__Var_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
    mercury__calendar__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
    mercury__calendar__Var_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
    mercury__calendar__Var_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
    mercury__calendar__STATE_VARIABLE_Temp_49_49 = (mercury__calendar__Var_50 + mercury__calendar__STATE_VARIABLE_Carry_47_47);
    mercury__calendar__Var_52 = mercury__int__mod_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    mercury__calendar__Var_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 0)));
    mercury__calendar__Var_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 1)));
    mercury__calendar__Var_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 2)));
    mercury__calendar__Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 3)));
    mercury__calendar__Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 4)));
    mercury__calendar__Var_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 5)));
    mercury__calendar__Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_44_44, (MR_Integer) 6)));
    {
      mercury__calendar__STATE_VARIABLE_E_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 0) = ((MR_Box) (mercury__calendar__Var_140));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 1) = ((MR_Box) (mercury__calendar__Var_141));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 2) = ((MR_Box) (mercury__calendar__Var_142));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 3) = ((MR_Box) (mercury__calendar__Var_143));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 4) = ((MR_Box) (mercury__calendar__Var_52));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 5) = ((MR_Box) (mercury__calendar__Var_145));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, 6) = ((MR_Box) (mercury__calendar__Var_146));
    }
    mercury__calendar__STATE_VARIABLE_Carry_54_54 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    mercury__calendar__Var_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
    mercury__calendar__Var_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
    mercury__calendar__Var_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
    mercury__calendar__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
    mercury__calendar__Var_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
    mercury__calendar__Var_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
    mercury__calendar__Var_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
    mercury__calendar__STATE_VARIABLE_Temp_56_56 = (mercury__calendar__Var_57 + mercury__calendar__STATE_VARIABLE_Carry_54_54);
    mercury__calendar__Var_59 = mercury__int__mod_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    mercury__calendar__Var_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 0)));
    mercury__calendar__Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 1)));
    mercury__calendar__Var_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 2)));
    mercury__calendar__Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 3)));
    mercury__calendar__Var_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 4)));
    mercury__calendar__Var_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 5)));
    mercury__calendar__Var_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_51_51, (MR_Integer) 6)));
    {
      mercury__calendar__STATE_VARIABLE_E_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 0) = ((MR_Box) (mercury__calendar__Var_153));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 1) = ((MR_Box) (mercury__calendar__Var_154));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 2) = ((MR_Box) (mercury__calendar__Var_155));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 3) = ((MR_Box) (mercury__calendar__Var_59));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 4) = ((MR_Box) (mercury__calendar__Var_157));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 5) = ((MR_Box) (mercury__calendar__Var_158));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, 6) = ((MR_Box) (mercury__calendar__Var_159));
    }
    mercury__calendar__STATE_VARIABLE_Carry_61_61 = mercury__int__div_2_f_0(mercury__calendar__STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    mercury__calendar__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
    mercury__calendar__Var_160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
    mercury__calendar__Var_161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
    mercury__calendar__Var_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
    mercury__calendar__Var_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
    mercury__calendar__Var_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
    mercury__calendar__Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
    mercury__calendar__MaxDaysInMonth_9 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Var_63, mercury__calendar__Var_160);
    mercury__calendar__Var_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
    mercury__calendar__Var_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
    mercury__calendar__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
    mercury__calendar__Var_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
    mercury__calendar__Var_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
    mercury__calendar__Var_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
    mercury__calendar__Var_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
    mercury__calendar__succeeded = (mercury__calendar__Var_65 > mercury__calendar__MaxDaysInMonth_9);
    if (mercury__calendar__succeeded)
      mercury__calendar__TempDays_10 = mercury__calendar__MaxDaysInMonth_9;
    else
    {
      MR_Integer mercury__calendar__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
      MR_Integer mercury__calendar__Var_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
      MR_Integer mercury__calendar__Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
      MR_Integer mercury__calendar__Var_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
      MR_Integer mercury__calendar__Var_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
      MR_Integer mercury__calendar__Var_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
      MR_Integer mercury__calendar__Var_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));

      mercury__calendar__succeeded = (mercury__calendar__Var_66 < (MR_Integer) 1);
      if (mercury__calendar__succeeded)
        mercury__calendar__TempDays_10 = (MR_Integer) 1;
      else
      {
        MR_Integer mercury__calendar__Var_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 0)));
        MR_Integer mercury__calendar__Var_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 1)));
        MR_Integer mercury__calendar__Var_186;
        MR_Integer mercury__calendar__Var_187;
        MR_Integer mercury__calendar__Var_188;
        MR_Integer mercury__calendar__Var_189;

        mercury__calendar__TempDays_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 2)));
        mercury__calendar__Var_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 3)));
        mercury__calendar__Var_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 4)));
        mercury__calendar__Var_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 5)));
        mercury__calendar__Var_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__S_5, (MR_Integer) 6)));
      }
    }
    mercury__calendar__Var_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 0)));
    mercury__calendar__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 1)));
    mercury__calendar__Var_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 2)));
    mercury__calendar__Var_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__D_4, (MR_Integer) 3)));
    mercury__calendar__Var_70 = (mercury__calendar__TempDays_10 + mercury__calendar__Var_71);
    mercury__calendar__Var_69 = (mercury__calendar__Var_70 + mercury__calendar__STATE_VARIABLE_Carry_61_61);
    mercury__calendar__Var_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
    mercury__calendar__Var_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
    mercury__calendar__Var_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
    mercury__calendar__Var_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
    mercury__calendar__Var_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
    mercury__calendar__Var_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
    mercury__calendar__Var_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
    {
      mercury__calendar__STATE_VARIABLE_E_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 0) = ((MR_Box) (mercury__calendar__Var_193));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 1) = ((MR_Box) (mercury__calendar__Var_194));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 2) = ((MR_Box) (mercury__calendar__Var_69));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 3) = ((MR_Box) (mercury__calendar__Var_196));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 4) = ((MR_Box) (mercury__calendar__Var_197));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 5) = ((MR_Box) (mercury__calendar__Var_198));
      MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_68_68, 6) = ((MR_Box) (mercury__calendar__Var_199));
    }
    mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__calendar__STATE_VARIABLE_E_68_68, mercury__calendar__E_6);
  }
}

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word mercury__calendar__STATE_VARIABLE_E_0_11,
  MR_Word * mercury__calendar__STATE_VARIABLE_E_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Integer mercury__calendar__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
      MR_Integer mercury__calendar__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
      MR_Integer mercury__calendar__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
      MR_Integer mercury__calendar__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
      MR_Integer mercury__calendar__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
      MR_Integer mercury__calendar__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
      MR_Integer mercury__calendar__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

      mercury__calendar__succeeded = (mercury__calendar__Var_13 < (MR_Integer) 1);
      if (mercury__calendar__succeeded)
      {
        MR_Integer mercury__calendar__Temp_9;
        MR_Word mercury__calendar__STATE_VARIABLE_E_15_15;
        MR_Integer mercury__calendar__Var_16;
        MR_Integer mercury__calendar__Var_18;
        MR_Integer mercury__calendar__Var_20 = (mercury__calendar__Var_58 - (MR_Integer) 1);
        MR_Word mercury__calendar__STATE_VARIABLE_E_24_24;
        MR_Integer mercury__calendar__Var_25;
        MR_Word mercury__calendar__STATE_VARIABLE_E_28_28;
        MR_Integer mercury__calendar__Var_29;
        MR_Integer mercury__calendar__Var_31;
        MR_Integer mercury__calendar__Var_82;
        MR_Integer mercury__calendar__Var_94;
        MR_Integer mercury__calendar__Var_81;
        MR_Integer mercury__calendar__Var_84;
        MR_Integer mercury__calendar__Var_85;
        MR_Integer mercury__calendar__Var_86;
        MR_Integer mercury__calendar__Var_87;
        MR_Integer mercury__calendar__Var_83;
        MR_Integer mercury__calendar__Var_96;
        MR_Integer mercury__calendar__Var_97;
        MR_Integer mercury__calendar__Var_98;
        MR_Integer mercury__calendar__Var_99;
        MR_Integer mercury__calendar__Var_100;
        MR_Integer mercury__calendar__Var_95;
        MR_Integer mercury__calendar__Var_108;
        MR_Integer mercury__calendar__Var_109;
        MR_Integer mercury__calendar__Var_110;
        MR_Integer mercury__calendar__Var_111;
        MR_Integer mercury__calendar__Var_112;
        MR_Integer mercury__calendar__Var_113;
        MR_Integer mercury__calendar__Var_107;

        mercury__calendar__Var_18 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Var_57, mercury__calendar__Var_20);
        mercury__calendar__Var_16 = (mercury__calendar__Var_13 + mercury__calendar__Var_18);
        mercury__calendar__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
        mercury__calendar__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
        mercury__calendar__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
        mercury__calendar__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
        mercury__calendar__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
        mercury__calendar__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
        mercury__calendar__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
        {
          mercury__calendar__STATE_VARIABLE_E_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 0) = ((MR_Box) (mercury__calendar__Var_81));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 1) = ((MR_Box) (mercury__calendar__Var_82));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 2) = ((MR_Box) (mercury__calendar__Var_16));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 3) = ((MR_Box) (mercury__calendar__Var_84));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 4) = ((MR_Box) (mercury__calendar__Var_85));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 5) = ((MR_Box) (mercury__calendar__Var_86));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, 6) = ((MR_Box) (mercury__calendar__Var_87));
        }
        mercury__calendar__Temp_9 = (mercury__calendar__Var_82 + (MR_Integer) -1);
        mercury__calendar__Var_25 = mercury__calendar__modulo_3_f_0(mercury__calendar__Temp_9, (MR_Integer) 1, (MR_Integer) 13);
        mercury__calendar__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 0)));
        mercury__calendar__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 1)));
        mercury__calendar__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 2)));
        mercury__calendar__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 3)));
        mercury__calendar__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 4)));
        mercury__calendar__Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 5)));
        mercury__calendar__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_15_15, (MR_Integer) 6)));
        {
          mercury__calendar__STATE_VARIABLE_E_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 0) = ((MR_Box) (mercury__calendar__Var_94));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 1) = ((MR_Box) (mercury__calendar__Var_25));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 2) = ((MR_Box) (mercury__calendar__Var_96));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 3) = ((MR_Box) (mercury__calendar__Var_97));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 4) = ((MR_Box) (mercury__calendar__Var_98));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 5) = ((MR_Box) (mercury__calendar__Var_99));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, 6) = ((MR_Box) (mercury__calendar__Var_100));
        }
        mercury__calendar__Var_31 = mercury__calendar__fquotient_3_f_0(mercury__calendar__Temp_9, (MR_Integer) 1, (MR_Integer) 13);
        mercury__calendar__Var_29 = (mercury__calendar__Var_94 + mercury__calendar__Var_31);
        mercury__calendar__Var_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 0)));
        mercury__calendar__Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 1)));
        mercury__calendar__Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 2)));
        mercury__calendar__Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 3)));
        mercury__calendar__Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 4)));
        mercury__calendar__Var_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 5)));
        mercury__calendar__Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_24_24, (MR_Integer) 6)));
        {
          mercury__calendar__STATE_VARIABLE_E_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 0) = ((MR_Box) (mercury__calendar__Var_29));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 1) = ((MR_Box) (mercury__calendar__Var_108));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 2) = ((MR_Box) (mercury__calendar__Var_109));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 3) = ((MR_Box) (mercury__calendar__Var_110));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 4) = ((MR_Box) (mercury__calendar__Var_111));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 5) = ((MR_Box) (mercury__calendar__Var_112));
          MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_28_28, 6) = ((MR_Box) (mercury__calendar__Var_113));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_E_0_11 = mercury__calendar__STATE_VARIABLE_E_28_28;

          mercury__calendar__STATE_VARIABLE_E_0_11 = mercury__calendar__next_value_of_STATE_VARIABLE_E_0_11;
        }
        continue;
      }
      else
      {
        MR_Integer mercury__calendar__MaxDaysInMonth_10;
        MR_Integer mercury__calendar__Var_37;
        MR_Integer mercury__calendar__Var_126;
        MR_Integer mercury__calendar__Var_127;
        MR_Integer mercury__calendar__Var_128;
        MR_Integer mercury__calendar__Var_129;
        MR_Integer mercury__calendar__Var_130;
        MR_Integer mercury__calendar__Var_131;
        MR_Integer mercury__calendar__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
        MR_Integer mercury__calendar__Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
        MR_Integer mercury__calendar__Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
        MR_Integer mercury__calendar__Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
        MR_Integer mercury__calendar__Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
        MR_Integer mercury__calendar__Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
        MR_Integer mercury__calendar__Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

        mercury__calendar__MaxDaysInMonth_10 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Var_35, mercury__calendar__Var_114);
        mercury__calendar__Var_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
        mercury__calendar__Var_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
        mercury__calendar__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
        mercury__calendar__Var_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
        mercury__calendar__Var_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
        mercury__calendar__Var_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
        mercury__calendar__Var_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
        mercury__calendar__succeeded = (mercury__calendar__Var_37 > mercury__calendar__MaxDaysInMonth_10);
        if (mercury__calendar__succeeded)
        {
          MR_Word mercury__calendar__STATE_VARIABLE_E_38_38;
          MR_Integer mercury__calendar__Var_39 = (mercury__calendar__Var_37 - mercury__calendar__MaxDaysInMonth_10);
          MR_Word mercury__calendar__STATE_VARIABLE_E_42_42;
          MR_Integer mercury__calendar__Var_43;
          MR_Word mercury__calendar__STATE_VARIABLE_E_46_46;
          MR_Integer mercury__calendar__Var_47;
          MR_Integer mercury__calendar__Var_49;
          MR_Integer mercury__calendar__Temp_54;
          MR_Integer mercury__calendar__Var_139 = mercury__calendar__Var_127;
          MR_Integer mercury__calendar__Var_151;
          MR_Integer mercury__calendar__Var_153;
          MR_Integer mercury__calendar__Var_154;
          MR_Integer mercury__calendar__Var_155;
          MR_Integer mercury__calendar__Var_156;
          MR_Integer mercury__calendar__Var_157;
          MR_Integer mercury__calendar__Var_152;
          MR_Integer mercury__calendar__Var_165;
          MR_Integer mercury__calendar__Var_166;
          MR_Integer mercury__calendar__Var_167;
          MR_Integer mercury__calendar__Var_168;
          MR_Integer mercury__calendar__Var_169;
          MR_Integer mercury__calendar__Var_170;
          MR_Integer mercury__calendar__Var_164;

          {
            mercury__calendar__STATE_VARIABLE_E_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 0) = ((MR_Box) (mercury__calendar__Var_126));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 1) = ((MR_Box) (mercury__calendar__Var_139));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 2) = ((MR_Box) (mercury__calendar__Var_39));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 3) = ((MR_Box) (mercury__calendar__Var_128));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 4) = ((MR_Box) (mercury__calendar__Var_129));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 5) = ((MR_Box) (mercury__calendar__Var_130));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, 6) = ((MR_Box) (mercury__calendar__Var_131));
          }
          mercury__calendar__Temp_54 = (mercury__calendar__Var_139 + (MR_Integer) 1);
          mercury__calendar__Var_43 = mercury__calendar__modulo_3_f_0(mercury__calendar__Temp_54, (MR_Integer) 1, (MR_Integer) 13);
          mercury__calendar__Var_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 0)));
          mercury__calendar__Var_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 1)));
          mercury__calendar__Var_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 2)));
          mercury__calendar__Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 3)));
          mercury__calendar__Var_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 4)));
          mercury__calendar__Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 5)));
          mercury__calendar__Var_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_38_38, (MR_Integer) 6)));
          {
            mercury__calendar__STATE_VARIABLE_E_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 0) = ((MR_Box) (mercury__calendar__Var_151));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 1) = ((MR_Box) (mercury__calendar__Var_43));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 2) = ((MR_Box) (mercury__calendar__Var_153));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 3) = ((MR_Box) (mercury__calendar__Var_154));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 4) = ((MR_Box) (mercury__calendar__Var_155));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 5) = ((MR_Box) (mercury__calendar__Var_156));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, 6) = ((MR_Box) (mercury__calendar__Var_157));
          }
          mercury__calendar__Var_49 = mercury__calendar__fquotient_3_f_0(mercury__calendar__Temp_54, (MR_Integer) 1, (MR_Integer) 13);
          mercury__calendar__Var_47 = (mercury__calendar__Var_151 + mercury__calendar__Var_49);
          mercury__calendar__Var_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 0)));
          mercury__calendar__Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 1)));
          mercury__calendar__Var_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 2)));
          mercury__calendar__Var_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 3)));
          mercury__calendar__Var_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 4)));
          mercury__calendar__Var_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 5)));
          mercury__calendar__Var_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_42_42, (MR_Integer) 6)));
          {
            mercury__calendar__STATE_VARIABLE_E_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 0) = ((MR_Box) (mercury__calendar__Var_47));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 1) = ((MR_Box) (mercury__calendar__Var_165));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 2) = ((MR_Box) (mercury__calendar__Var_166));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 3) = ((MR_Box) (mercury__calendar__Var_167));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 4) = ((MR_Box) (mercury__calendar__Var_168));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 5) = ((MR_Box) (mercury__calendar__Var_169));
            MR_hl_field(MR_mktag(0), mercury__calendar__STATE_VARIABLE_E_46_46, 6) = ((MR_Box) (mercury__calendar__Var_170));
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_E_0_11 = mercury__calendar__STATE_VARIABLE_E_46_46;

            mercury__calendar__STATE_VARIABLE_E_0_11 = mercury__calendar__next_value_of_STATE_VARIABLE_E_0_11;
          }
          continue;
        }
        else
          *mercury__calendar__STATE_VARIABLE_E_12 = mercury__calendar__STATE_VARIABLE_E_0_11;
      }
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
  MR_Integer mercury__calendar__A_5,
  MR_Integer mercury__calendar__Low_6,
  MR_Integer mercury__calendar__High_7)
{
  {
    MR_Integer mercury__calendar__HeadVar__4_4;
    MR_Integer mercury__calendar__Var_8;
    MR_Integer mercury__calendar__Var_9 = (mercury__calendar__A_5 - mercury__calendar__Low_6);
    MR_Integer mercury__calendar__Var_10 = (mercury__calendar__High_7 - mercury__calendar__Low_6);
    MR_Integer mercury__calendar__Var_13;
    MR_Integer mercury__calendar__Var_14;

    mercury__calendar__Var_14 = mercury__int__div_2_f_0(mercury__calendar__Var_9, mercury__calendar__Var_10);
    mercury__calendar__Var_13 = (mercury__calendar__Var_14 * mercury__calendar__Var_10);
    mercury__calendar__Var_8 = (mercury__calendar__Var_9 - mercury__calendar__Var_13);
    mercury__calendar__HeadVar__4_4 = (mercury__calendar__Var_8 + mercury__calendar__Low_6);
    return mercury__calendar__HeadVar__4_4;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
  MR_Integer mercury__calendar__A_4,
  MR_Integer mercury__calendar__B_5)
{
  {
    MR_Integer mercury__calendar__HeadVar__3_3;
    MR_Integer mercury__calendar__Var_6;
    MR_Integer mercury__calendar__Var_7;

    mercury__calendar__Var_7 = mercury__int__div_2_f_0(mercury__calendar__A_4, mercury__calendar__B_5);
    mercury__calendar__Var_6 = (mercury__calendar__Var_7 * mercury__calendar__B_5);
    mercury__calendar__HeadVar__3_3 = (mercury__calendar__A_4 - mercury__calendar__Var_6);
    return mercury__calendar__HeadVar__3_3;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
  MR_Integer mercury__calendar__A_5,
  MR_Integer mercury__calendar__Low_6,
  MR_Integer mercury__calendar__High_7)
{
  {
    MR_Integer mercury__calendar__HeadVar__4_4;
    MR_Integer mercury__calendar__Var_8 = (mercury__calendar__A_5 - mercury__calendar__Low_6);
    MR_Integer mercury__calendar__Var_9 = (mercury__calendar__High_7 - mercury__calendar__Low_6);

    mercury__calendar__HeadVar__4_4 = mercury__int__div_2_f_0(mercury__calendar__Var_8, mercury__calendar__Var_9);
    return mercury__calendar__HeadVar__4_4;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void)
{
  {
    return (MR_Integer) 1000000;
  }
}

MR_String MR_CALL 
mercury__calendar__duration_to_string_1_f_0(
  MR_Word mercury__calendar__Duration_1)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_String mercury__calendar__Str_8;
    MR_Integer mercury__calendar__Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
    MR_Integer mercury__calendar__MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));

    mercury__calendar__succeeded = (mercury__calendar__Months_3 == (MR_Integer) 0);
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__succeeded = (mercury__calendar__Days_4 == (MR_Integer) 0);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__succeeded = (mercury__calendar__Seconds_5 == (MR_Integer) 0);
        if (mercury__calendar__succeeded)
          mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 == (MR_Integer) 0);
      }
    }
    if (mercury__calendar__succeeded)
      mercury__calendar__Str_8 = (MR_String) "P0D";
    else
    {
      MR_Word mercury__calendar__TypeCtorInfo_60_60;
      MR_Integer mercury__calendar__Sign_9;
      MR_String mercury__calendar__SignStr_10;
      MR_Word mercury__calendar__TimePart_11;
      MR_Word mercury__calendar__Var_40;
      MR_Word mercury__calendar__Var_41;
      MR_Word mercury__calendar__Var_42;
      MR_Word mercury__calendar__Var_44;
      MR_String mercury__calendar__Var_45;
      MR_Integer mercury__calendar__Var_46;
      MR_Integer mercury__calendar__Var_47;
      MR_Word mercury__calendar__Var_49;
      MR_String mercury__calendar__Var_50;
      MR_Integer mercury__calendar__Var_51;
      MR_Integer mercury__calendar__Var_52;
      MR_Word mercury__calendar__Var_54;
      MR_String mercury__calendar__Var_55;
      MR_Integer mercury__calendar__Var_56;
      MR_Integer mercury__calendar__Var_57;
      MR_Word mercury__calendar__Var_59;
      MR_Integer mercury__calendar__Var_13;
      MR_Integer mercury__calendar__Var_14;
      MR_Integer mercury__calendar__Var_15;
      MR_Integer mercury__calendar__Var_94;
      MR_Integer mercury__calendar__Var_95;
      MR_Integer mercury__calendar__Var_96;

      mercury__calendar__succeeded = (mercury__calendar__Months_3 >= (MR_Integer) 0);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Var_13 = (MR_Integer) 0;
        mercury__calendar__succeeded = (mercury__calendar__Days_4 >= mercury__calendar__Var_13);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_14 = (MR_Integer) 0;
          mercury__calendar__succeeded = (mercury__calendar__Seconds_5 >= mercury__calendar__Var_14);
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__Var_15 = (MR_Integer) 0;
            mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 >= mercury__calendar__Var_15);
          }
        }
      }
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Sign_9 = (MR_Integer) 1;
        mercury__calendar__SignStr_10 = (MR_String) "";
      }
      else
      {
        MR_Integer mercury__calendar__Var_17;
        MR_Integer mercury__calendar__Var_18;
        MR_Integer mercury__calendar__Var_19;

        mercury__calendar__succeeded = (mercury__calendar__Months_3 <= (MR_Integer) 0);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_17 = (MR_Integer) 0;
          mercury__calendar__succeeded = (mercury__calendar__Days_4 <= mercury__calendar__Var_17);
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__Var_18 = (MR_Integer) 0;
            mercury__calendar__succeeded = (mercury__calendar__Seconds_5 <= mercury__calendar__Var_18);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_19 = (MR_Integer) 0;
              mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 <= mercury__calendar__Var_19);
            }
          }
        }
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Sign_9 = (MR_Integer) -1;
          mercury__calendar__SignStr_10 = (MR_String) "-";
        }
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.duration_to_string\'/1", (MR_String) "duration components have mixed signs");
        }
      }
      mercury__calendar__succeeded = (mercury__calendar__Seconds_5 == (MR_Integer) 0);
      if (mercury__calendar__succeeded)
        mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_6 == (MR_Integer) 0);
      if (mercury__calendar__succeeded)
        mercury__calendar__TimePart_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word mercury__calendar__Var_23;
        MR_String mercury__calendar__Var_24;
        MR_Integer mercury__calendar__Var_25;
        MR_Integer mercury__calendar__Var_26;
        MR_Word mercury__calendar__Var_28;
        MR_String mercury__calendar__Var_29;
        MR_Integer mercury__calendar__Var_30;
        MR_Integer mercury__calendar__Var_31;
        MR_Word mercury__calendar__Var_33;
        MR_String mercury__calendar__Var_34;
        MR_Integer mercury__calendar__Var_35;
        MR_Integer mercury__calendar__Var_36;
        MR_Integer mercury__calendar__Var_37;
        MR_Integer mercury__calendar__Var_38;
        MR_Word mercury__calendar__Var_39;
        MR_Integer mercury__calendar__Var_90;
        MR_Integer mercury__calendar__Var_91;
        MR_Integer mercury__calendar__Var_92;

        mercury__calendar__Var_26 = mercury__calendar__hours_1_f_0(mercury__calendar__Duration_1);
        mercury__calendar__Var_25 = (mercury__calendar__Sign_9 * mercury__calendar__Var_26);
        mercury__calendar__succeeded = (mercury__calendar__Var_25 == (MR_Integer) 0);
        if (mercury__calendar__succeeded)
          mercury__calendar__Var_24 = (MR_String) "";
        else
        {
          MR_String mercury__calendar__Var_63;

          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Var_25, (MR_Integer) 10, &mercury__calendar__Var_63);
          mercury__string__append_3_p_2(mercury__calendar__Var_63, (MR_String) "H", &mercury__calendar__Var_24);
        }
        mercury__calendar__Var_31 = mercury__calendar__minutes_1_f_0(mercury__calendar__Duration_1);
        mercury__calendar__Var_30 = (mercury__calendar__Sign_9 * mercury__calendar__Var_31);
        mercury__calendar__succeeded = (mercury__calendar__Var_30 == (MR_Integer) 0);
        if (mercury__calendar__succeeded)
          mercury__calendar__Var_29 = (MR_String) "";
        else
        {
          MR_String mercury__calendar__Var_77;

          mercury__string__int_to_base_string_3_p_0(mercury__calendar__Var_30, (MR_Integer) 10, &mercury__calendar__Var_77);
          mercury__string__append_3_p_2(mercury__calendar__Var_77, (MR_String) "M", &mercury__calendar__Var_29);
        }
        mercury__calendar__Var_36 = mercury__calendar__seconds_1_f_0(mercury__calendar__Duration_1);
        mercury__calendar__Var_35 = (mercury__calendar__Sign_9 * mercury__calendar__Var_36);
        mercury__calendar__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
        mercury__calendar__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
        mercury__calendar__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
        mercury__calendar__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
        mercury__calendar__Var_37 = (mercury__calendar__Sign_9 * mercury__calendar__Var_38);
        mercury__calendar__Var_34 = mercury__calendar__seconds_duration_string_2_f_0(mercury__calendar__Var_35, mercury__calendar__Var_37);
        mercury__calendar__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__calendar__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__calendar__Var_33, 0) = ((MR_Box) (mercury__calendar__Var_34));
          MR_hl_field(MR_mktag(1), mercury__calendar__Var_33, 1) = ((MR_Box) (mercury__calendar__Var_39));
        }
        {
          mercury__calendar__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__calendar__Var_28, 0) = ((MR_Box) (mercury__calendar__Var_29));
          MR_hl_field(MR_mktag(1), mercury__calendar__Var_28, 1) = ((MR_Box) (mercury__calendar__Var_33));
        }
        {
          mercury__calendar__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__calendar__Var_23, 0) = ((MR_Box) (mercury__calendar__Var_24));
          MR_hl_field(MR_mktag(1), mercury__calendar__Var_23, 1) = ((MR_Box) (mercury__calendar__Var_28));
        }
        {
          mercury__calendar__TimePart_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_11, 0) = ((MR_Box) ((MR_String) "T"));
          MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_11, 1) = ((MR_Box) (mercury__calendar__Var_23));
        }
      }
      mercury__calendar__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__calendar__Var_47 = mercury__calendar__years_1_f_0(mercury__calendar__Duration_1);
      mercury__calendar__Var_46 = (mercury__calendar__Sign_9 * mercury__calendar__Var_47);
      mercury__calendar__Var_45 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__Var_46, (MR_String) "Y");
      mercury__calendar__Var_52 = mercury__calendar__months_1_f_0(mercury__calendar__Duration_1);
      mercury__calendar__Var_51 = (mercury__calendar__Sign_9 * mercury__calendar__Var_52);
      mercury__calendar__Var_50 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__Var_51, (MR_String) "M");
      mercury__calendar__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 0)));
      mercury__calendar__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 1)));
      mercury__calendar__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 2)));
      mercury__calendar__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_1, (MR_Integer) 3)));
      mercury__calendar__Var_56 = (mercury__calendar__Sign_9 * mercury__calendar__Var_57);
      mercury__calendar__Var_55 = mercury__calendar__string_if_nonzero_2_f_0(mercury__calendar__Var_56, (MR_String) "D");
      mercury__calendar__Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__calendar__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_54, 0) = ((MR_Box) (mercury__calendar__Var_55));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_54, 1) = ((MR_Box) (mercury__calendar__Var_59));
      }
      {
        mercury__calendar__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_49, 0) = ((MR_Box) (mercury__calendar__Var_50));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_49, 1) = ((MR_Box) (mercury__calendar__Var_54));
      }
      {
        mercury__calendar__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_44, 0) = ((MR_Box) (mercury__calendar__Var_45));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_44, 1) = ((MR_Box) (mercury__calendar__Var_49));
      }
      {
        mercury__calendar__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_42, 0) = ((MR_Box) ((MR_String) "P"));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_42, 1) = ((MR_Box) (mercury__calendar__Var_44));
      }
      {
        mercury__calendar__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_41, 0) = ((MR_Box) (mercury__calendar__SignStr_10));
        MR_hl_field(MR_mktag(1), mercury__calendar__Var_41, 1) = ((MR_Box) (mercury__calendar__Var_42));
      }
      mercury__calendar__Var_40 = mercury__list__f_43_43_2_f_0(mercury__calendar__TypeCtorInfo_60_60, mercury__calendar__Var_41, mercury__calendar__TimePart_11);
      mercury__calendar__Str_8 = mercury__string__append_list_1_f_0(mercury__calendar__Var_40);
    }
    return mercury__calendar__Str_8;
  }
}

static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
  MR_Integer mercury__calendar__Seconds_4,
  MR_Integer mercury__calendar__MicroSeconds_5)
{
  {
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Seconds_4 == (MR_Integer) 0);
    MR_String mercury__calendar__Str_6;

    if (mercury__calendar__succeeded)
      mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_5 == (MR_Integer) 0);
    if (mercury__calendar__succeeded)
      mercury__calendar__Str_6 = (MR_String) "";
    else
    {
      MR_String mercury__calendar__Var_7;
      MR_String mercury__calendar__Var_8;
      MR_String mercury__calendar__Var_9;

      mercury__string__int_to_base_string_3_p_0(mercury__calendar__Seconds_4, (MR_Integer) 10, &mercury__calendar__Var_7);
      mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_5 > (MR_Integer) 0);
      if (mercury__calendar__succeeded)
      {
        MR_String mercury__calendar__Var_23;
        MR_String mercury__calendar__Var_30;
        MR_Word mercury__calendar__Var_36 = (MR_Word) &mercury__calendar_scalar_common_9[1];
        MR_Word mercury__calendar__V_9_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_9[2]);
        MR_Word mercury__calendar__V_10_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Integer mercury__calendar__V_6_54;
        MR_Integer mercury__calendar__V_7_55;
        MR_Integer mercury__calendar__V_8_56;
        MR_Integer mercury__calendar__V_6_62;
        MR_Integer mercury__calendar__V_7_63;
        MR_String mercury__calendar__V_7_72;

        mercury__string__format__format_signed_int_component_5_p_0(mercury__calendar__Var_36, mercury__calendar__V_9_43, mercury__calendar__V_10_44, mercury__calendar__MicroSeconds_5, &mercury__calendar__Var_30);
        mercury__string__append_3_p_2((MR_String) ".", mercury__calendar__Var_30, &mercury__calendar__Var_23);
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__Var_23 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_7_55  = Length;
}
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__Var_23 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_6_62  = Length;
}
        mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, mercury__calendar__Var_23, mercury__calendar__V_6_62, &mercury__calendar__V_7_63);
        mercury__calendar__V_8_56 = (mercury__calendar__V_6_62 - mercury__calendar__V_7_63);
        mercury__calendar__V_6_54 = (mercury__calendar__V_7_55 - mercury__calendar__V_8_56);
        mercury__string__split_4_p_0(mercury__calendar__Var_23, mercury__calendar__V_6_54, &mercury__calendar__Var_9, &mercury__calendar__V_7_72);
      }
      else
        mercury__calendar__Var_9 = (MR_String) "";
      mercury__string__append_3_p_2(mercury__calendar__Var_9, (MR_String) "S", &mercury__calendar__Var_8);
      mercury__string__append_3_p_2(mercury__calendar__Var_7, mercury__calendar__Var_8, &mercury__calendar__Str_6);
    }
    return mercury__calendar__Str_6;
  }
}

static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
  MR_Integer mercury__calendar__X_4,
  MR_String mercury__calendar__Suffix_5)
{
  {
    MR_bool mercury__calendar__succeeded = (mercury__calendar__X_4 == (MR_Integer) 0);
    MR_String mercury__calendar__HeadVar__3_3;

    if (mercury__calendar__succeeded)
      mercury__calendar__HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_String mercury__calendar__Var_6;

      mercury__string__int_to_base_string_3_p_0(mercury__calendar__X_4, (MR_Integer) 10, &mercury__calendar__Var_6);
      mercury__string__append_3_p_2(mercury__calendar__Var_6, mercury__calendar__Suffix_5, &mercury__calendar__HeadVar__3_3);
    }
    return mercury__calendar__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_duration_from_string_1_f_0(
  MR_String mercury__calendar__Str_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__Duration_4;
    MR_Word mercury__calendar__Duration0_5;

    mercury__calendar__succeeded = mercury__calendar__duration_from_string_2_p_0(mercury__calendar__Str_3, &mercury__calendar__Duration0_5);
    if (mercury__calendar__succeeded)
      mercury__calendar__Duration_4 = mercury__calendar__Duration0_5;
    else
    {
      MR_String mercury__calendar__Var_7;

      mercury__string__append_3_p_2((MR_String) "invalid duration: ", mercury__calendar__Str_3, &mercury__calendar__Var_7);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_duration_from_string\'/1", mercury__calendar__Var_7);
    }
    return mercury__calendar__Duration_4;
  }
}

MR_bool MR_CALL 
mercury__calendar__duration_from_string_2_p_0(
  MR_String mercury__calendar__Str_3,
  MR_Word * mercury__calendar__Duration_4)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Sign_6;
    MR_Integer mercury__calendar__Years_7;
    MR_Integer mercury__calendar__Months_8;
    MR_Integer mercury__calendar__Days_9;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_17_17;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_18_18;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_20_20;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_21_21;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_22_22;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_23_23;
    MR_Char mercury__calendar__Var_44;
    MR_Char mercury__calendar__Var_61;
    MR_Word mercury__calendar__Rest_52;
    MR_Char mercury__calendar__Var_53;
    MR_Integer mercury__calendar__Int0_68;
    MR_Word mercury__calendar__Rest_70;
    MR_Word mercury__calendar__Chars1_69;
    MR_Char mercury__calendar__Var_72;
    MR_Integer mercury__calendar__Var_77;
    MR_Word mercury__calendar__TimePart_10;
    MR_Char mercury__calendar__Var_24;
    MR_Char mercury__calendar__Var_45;

    mercury__string__to_char_list_2_p_0(mercury__calendar__Str_3, &mercury__calendar__STATE_VARIABLE_Chars_17_17);
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_17_17)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_17_17, (MR_Integer) 0)));
      mercury__calendar__Rest_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_17_17, (MR_Integer) 1)));
      mercury__calendar__succeeded = (mercury__calendar__Var_53 == (MR_Char) 45);
    }
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__STATE_VARIABLE_Chars_18_18 = mercury__calendar__Rest_52;
      mercury__calendar__Sign_6 = (MR_Integer) -1;
    }
    else
    {
      mercury__calendar__Sign_6 = (MR_Integer) 1;
      mercury__calendar__STATE_VARIABLE_Chars_18_18 = mercury__calendar__STATE_VARIABLE_Chars_17_17;
    }
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_18_18)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_18_18, (MR_Integer) 0)));
      mercury__calendar__STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_18_18, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 80 == mercury__calendar__Var_44);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Var_61 = (MR_Char) 89;
        mercury__calendar__Var_77 = (MR_Integer) 0;
        mercury__calendar__read_int_2_4_p_0(mercury__calendar__Var_77, &mercury__calendar__Int0_68, mercury__calendar__STATE_VARIABLE_Chars_20_20, &mercury__calendar__Chars1_69);
        mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_69)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_72 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_69, (MR_Integer) 0)));
          mercury__calendar__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_69, (MR_Integer) 1)));
          mercury__calendar__succeeded = (mercury__calendar__Var_61 == mercury__calendar__Var_72);
        }
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__STATE_VARIABLE_Chars_21_21 = mercury__calendar__Rest_70;
          mercury__calendar__Years_7 = mercury__calendar__Int0_68;
        }
        else
        {
          mercury__calendar__Years_7 = (MR_Integer) 0;
          mercury__calendar__STATE_VARIABLE_Chars_21_21 = mercury__calendar__STATE_VARIABLE_Chars_20_20;
        }
        mercury__calendar__read_months_3_p_0(&mercury__calendar__Months_8, mercury__calendar__STATE_VARIABLE_Chars_21_21, &mercury__calendar__STATE_VARIABLE_Chars_22_22);
        mercury__calendar__read_days_3_p_0(&mercury__calendar__Days_9, mercury__calendar__STATE_VARIABLE_Chars_22_22, &mercury__calendar__STATE_VARIABLE_Chars_23_23);
        mercury__calendar__Var_24 = (MR_Char) 84;
        mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_23_23)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_23_23, (MR_Integer) 0)));
          mercury__calendar__TimePart_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_23_23, (MR_Integer) 1)));
          mercury__calendar__succeeded = (mercury__calendar__Var_24 == mercury__calendar__Var_45);
        }
        if (mercury__calendar__succeeded)
        {
          MR_Integer mercury__calendar__Hours_13;
          MR_Integer mercury__calendar__Minutes_14;
          MR_Integer mercury__calendar__Seconds_15;
          MR_Integer mercury__calendar__MicroSeconds_16;
          MR_Word mercury__calendar__STATE_VARIABLE_Chars_25_25;
          MR_Word mercury__calendar__STATE_VARIABLE_Chars_26_26;
          MR_Word mercury__calendar__STATE_VARIABLE_Chars_27_27;
          MR_Integer mercury__calendar__Var_28;
          MR_Integer mercury__calendar__Var_29;
          MR_Integer mercury__calendar__Var_30;
          MR_Integer mercury__calendar__Var_31;
          MR_Integer mercury__calendar__Var_32;
          MR_Integer mercury__calendar__Var_33;
          MR_Integer mercury__calendar__Var_34;
          MR_Char mercury__calendar__Var_11;
          MR_Word mercury__calendar__Var_12;

          mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__TimePart_10)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__Var_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_10, (MR_Integer) 0)));
            mercury__calendar__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__TimePart_10, (MR_Integer) 1)));
            mercury__calendar__read_hours_3_p_0(&mercury__calendar__Hours_13, mercury__calendar__TimePart_10, &mercury__calendar__STATE_VARIABLE_Chars_25_25);
            mercury__calendar__read_minutes_3_p_0(&mercury__calendar__Minutes_14, mercury__calendar__STATE_VARIABLE_Chars_25_25, &mercury__calendar__STATE_VARIABLE_Chars_26_26);
            mercury__calendar__read_seconds_and_microseconds_4_p_0(&mercury__calendar__Seconds_15, &mercury__calendar__MicroSeconds_16, mercury__calendar__STATE_VARIABLE_Chars_26_26, &mercury__calendar__STATE_VARIABLE_Chars_27_27);
            mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_28 = (mercury__calendar__Sign_6 * mercury__calendar__Years_7);
              mercury__calendar__Var_29 = (mercury__calendar__Sign_6 * mercury__calendar__Months_8);
              mercury__calendar__Var_30 = (mercury__calendar__Sign_6 * mercury__calendar__Days_9);
              mercury__calendar__Var_31 = (mercury__calendar__Sign_6 * mercury__calendar__Hours_13);
              mercury__calendar__Var_32 = (mercury__calendar__Sign_6 * mercury__calendar__Minutes_14);
              mercury__calendar__Var_33 = (mercury__calendar__Sign_6 * mercury__calendar__Seconds_15);
              mercury__calendar__Var_34 = (mercury__calendar__Sign_6 * mercury__calendar__MicroSeconds_16);
              *mercury__calendar__Duration_4 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_28, mercury__calendar__Var_29, mercury__calendar__Var_30, mercury__calendar__Var_31, mercury__calendar__Var_32, mercury__calendar__Var_33, mercury__calendar__Var_34);
              mercury__calendar__succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Integer mercury__calendar__Var_35;
          MR_Integer mercury__calendar__Var_36;
          MR_Integer mercury__calendar__Var_37;
          MR_Integer mercury__calendar__Var_38;
          MR_Integer mercury__calendar__Var_39;
          MR_Integer mercury__calendar__Var_40;
          MR_Integer mercury__calendar__Var_41;

          mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__Var_35 = (mercury__calendar__Sign_6 * mercury__calendar__Years_7);
            mercury__calendar__Var_36 = (mercury__calendar__Sign_6 * mercury__calendar__Months_8);
            mercury__calendar__Var_37 = (mercury__calendar__Sign_6 * mercury__calendar__Days_9);
            mercury__calendar__Var_38 = (MR_Integer) 0;
            mercury__calendar__Var_39 = (MR_Integer) 0;
            mercury__calendar__Var_40 = (MR_Integer) 0;
            mercury__calendar__Var_41 = (MR_Integer) 0;
            *mercury__calendar__Duration_4 = mercury__calendar__init_duration_7_f_0(mercury__calendar__Var_35, mercury__calendar__Var_36, mercury__calendar__Var_37, mercury__calendar__Var_38, mercury__calendar__Var_39, mercury__calendar__Var_40, mercury__calendar__Var_41);
            mercury__calendar__succeeded = MR_TRUE;
          }
        }
      }
    }
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
  MR_Integer * mercury__calendar__Seconds_5,
  MR_Integer * mercury__calendar__MicroSeconds_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_13,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_14)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Seconds0_8;
    MR_Integer mercury__calendar__MicroSeconds0_10;
    MR_Word mercury__calendar__Chars3_12;
    MR_Word mercury__calendar__Chars1_9;
    MR_Word mercury__calendar__Chars2_11;
    MR_Char mercury__calendar__Var_17;
    MR_Integer mercury__calendar__Fraction_29;
    MR_Integer mercury__calendar__FractionDigits_30;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_12_32;
    MR_Word mercury__calendar__Chars1_28;
    MR_Integer mercury__calendar__Var_33;
    MR_Integer mercury__calendar__Var_34;
    MR_Char mercury__calendar__Var_40;
    MR_Integer mercury__calendar__Var_48;
    MR_Integer mercury__calendar__Var_49;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Seconds0_8, mercury__calendar__STATE_VARIABLE_Chars_0_13, &mercury__calendar__Chars1_9);
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_9)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_9, (MR_Integer) 0)));
      mercury__calendar__Chars1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_9, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 46 == mercury__calendar__Var_40);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Var_48 = (MR_Integer) 0;
        mercury__calendar__Var_49 = (MR_Integer) 0;
        mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__Var_48, &mercury__calendar__Fraction_29, mercury__calendar__Var_49, &mercury__calendar__FractionDigits_30, mercury__calendar__Chars1_28, &mercury__calendar__STATE_VARIABLE_Chars_12_32);
        mercury__calendar__Var_33 = (MR_Integer) 0;
        mercury__calendar__succeeded = (mercury__calendar__FractionDigits_30 > mercury__calendar__Var_33);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_34 = (MR_Integer) 7;
          mercury__calendar__succeeded = (mercury__calendar__FractionDigits_30 < mercury__calendar__Var_34);
        }
      }
    }
    if (mercury__calendar__succeeded)
    {
      MR_Integer mercury__calendar__Var_35;
      MR_Integer mercury__calendar__Var_37;

      mercury__calendar__Chars2_11 = mercury__calendar__STATE_VARIABLE_Chars_12_32;
      mercury__calendar__Var_37 = ((MR_Integer) 6 - mercury__calendar__FractionDigits_30);
      mercury__int__pow_3_p_0((MR_Integer) 10, mercury__calendar__Var_37, &mercury__calendar__Var_35);
      mercury__calendar__MicroSeconds0_10 = (mercury__calendar__Var_35 * mercury__calendar__Fraction_29);
    }
    else
    {
      mercury__calendar__MicroSeconds0_10 = (MR_Integer) 0;
      mercury__calendar__Chars2_11 = mercury__calendar__Chars1_9;
    }
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars2_11)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars2_11, (MR_Integer) 0)));
      mercury__calendar__Chars3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars2_11, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 83 == mercury__calendar__Var_17);
    }
    if (mercury__calendar__succeeded)
    {
      *mercury__calendar__STATE_VARIABLE_Chars_14 = mercury__calendar__Chars3_12;
      *mercury__calendar__Seconds_5 = mercury__calendar__Seconds0_8;
      *mercury__calendar__MicroSeconds_6 = mercury__calendar__MicroSeconds0_10;
    }
    else
    {
      *mercury__calendar__Seconds_5 = (MR_Integer) 0;
      *mercury__calendar__MicroSeconds_6 = (MR_Integer) 0;
      *mercury__calendar__STATE_VARIABLE_Chars_14 = mercury__calendar__STATE_VARIABLE_Chars_0_13;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
  MR_Integer * mercury__calendar__Minutes_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Int0_15;
    MR_Word mercury__calendar__Rest_17;
    MR_Word mercury__calendar__Chars1_16;
    MR_Char mercury__calendar__Var_19;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
      mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 77 == mercury__calendar__Var_19);
    }
    if (mercury__calendar__succeeded)
    {
      *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
      *mercury__calendar__Minutes_4 = mercury__calendar__Int0_15;
    }
    else
    {
      *mercury__calendar__Minutes_4 = (MR_Integer) 0;
      *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
  MR_Integer * mercury__calendar__Hours_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Int0_15;
    MR_Word mercury__calendar__Rest_17;
    MR_Word mercury__calendar__Chars1_16;
    MR_Char mercury__calendar__Var_19;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
      mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 72 == mercury__calendar__Var_19);
    }
    if (mercury__calendar__succeeded)
    {
      *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
      *mercury__calendar__Hours_4 = mercury__calendar__Int0_15;
    }
    else
    {
      *mercury__calendar__Hours_4 = (MR_Integer) 0;
      *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_days_3_p_0(
  MR_Integer * mercury__calendar__Days_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Int0_15;
    MR_Word mercury__calendar__Rest_17;
    MR_Word mercury__calendar__Chars1_16;
    MR_Char mercury__calendar__Var_19;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
      mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 68 == mercury__calendar__Var_19);
    }
    if (mercury__calendar__succeeded)
    {
      *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
      *mercury__calendar__Days_4 = mercury__calendar__Int0_15;
    }
    else
    {
      *mercury__calendar__Days_4 = (MR_Integer) 0;
      *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_months_3_p_0(
  MR_Integer * mercury__calendar__Months_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_7)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Int0_15;
    MR_Word mercury__calendar__Rest_17;
    MR_Word mercury__calendar__Chars1_16;
    MR_Char mercury__calendar__Var_19;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &mercury__calendar__Int0_15, mercury__calendar__STATE_VARIABLE_Chars_0_6, &mercury__calendar__Chars1_16);
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__Chars1_16)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 0)));
      mercury__calendar__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__Chars1_16, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 77 == mercury__calendar__Var_19);
    }
    if (mercury__calendar__succeeded)
    {
      *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__Rest_17;
      *mercury__calendar__Months_4 = mercury__calendar__Int0_15;
    }
    else
    {
      *mercury__calendar__Months_4 = (MR_Integer) 0;
      *mercury__calendar__STATE_VARIABLE_Chars_7 = mercury__calendar__STATE_VARIABLE_Chars_0_6;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_10,
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_11,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_12,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_12)) == (MR_mktag((MR_Integer) 1)));
      MR_Word mercury__calendar__Rest_8;
      MR_Integer mercury__calendar__Digit_9;
      MR_Char mercury__calendar__Char_7;

      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_12, (MR_Integer) 0)));
        mercury__calendar__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_12, (MR_Integer) 1)));
        mercury__calendar__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__calendar__Char_7, &mercury__calendar__Digit_9);
      }
      if (mercury__calendar__succeeded)
      {
        MR_Integer mercury__calendar__STATE_VARIABLE_Val_14_14;
        MR_Integer mercury__calendar__Var_15 = (mercury__calendar__STATE_VARIABLE_Val_0_10 * (MR_Integer) 10);

        mercury__calendar__STATE_VARIABLE_Val_14_14 = (mercury__calendar__Var_15 + mercury__calendar__Digit_9);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__calendar__next_value_of_STATE_VARIABLE_Val_0_10 = mercury__calendar__STATE_VARIABLE_Val_14_14;
          MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Chars_0_12 = mercury__calendar__Rest_8;

          mercury__calendar__STATE_VARIABLE_Val_0_10 = mercury__calendar__next_value_of_STATE_VARIABLE_Val_0_10;
          mercury__calendar__STATE_VARIABLE_Chars_0_12 = mercury__calendar__next_value_of_STATE_VARIABLE_Chars_0_12;
        }
        continue;
      }
      else
      {
        *mercury__calendar__STATE_VARIABLE_Chars_13 = mercury__calendar__STATE_VARIABLE_Chars_0_12;
        *mercury__calendar__STATE_VARIABLE_Val_11 = mercury__calendar__STATE_VARIABLE_Val_0_10;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__calendar__negate_1_f_0(
  MR_Word mercury__calendar__HeadVar__1_1)
{
  {
    MR_Word mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer mercury__calendar__MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) 0 - mercury__calendar__Months_3);
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) 0 - mercury__calendar__Days_4);
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) 0 - mercury__calendar__Seconds_5);
    MR_Integer mercury__calendar__Var_10 = ((MR_Integer) 0 - mercury__calendar__MicroSeconds_6);

    {
      mercury__calendar__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 0) = ((MR_Box) (mercury__calendar__Var_7));
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 1) = ((MR_Box) (mercury__calendar__Var_8));
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 2) = ((MR_Box) (mercury__calendar__Var_9));
      MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__2_2, 3) = ((MR_Box) (mercury__calendar__Var_10));
    }
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__zero_duration_0_f_0(void)
{
  {
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_3[1];

    return mercury__calendar__HeadVar__1_1;
  }
}

void MR_CALL 
mercury__calendar__unpack_duration_8_p_0(
  MR_Word mercury__calendar__Duration_9,
  MR_Integer * mercury__calendar__HeadVar__2_2,
  MR_Integer * mercury__calendar__HeadVar__3_3,
  MR_Integer * mercury__calendar__HeadVar__4_4,
  MR_Integer * mercury__calendar__HeadVar__5_5,
  MR_Integer * mercury__calendar__HeadVar__6_6,
  MR_Integer * mercury__calendar__HeadVar__7_7,
  MR_Integer * mercury__calendar__HeadVar__8_8)
{
  {
    MR_Integer mercury__calendar__Var_11;
    MR_Integer mercury__calendar__Var_12;
    MR_Integer mercury__calendar__Var_13;
    MR_Integer mercury__calendar__Var_15;
    MR_Integer mercury__calendar__Var_16;
    MR_Integer mercury__calendar__Var_17;

    *mercury__calendar__HeadVar__2_2 = mercury__calendar__years_1_f_0(mercury__calendar__Duration_9);
    *mercury__calendar__HeadVar__3_3 = mercury__calendar__months_1_f_0(mercury__calendar__Duration_9);
    mercury__calendar__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 0)));
    *mercury__calendar__HeadVar__4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 1)));
    mercury__calendar__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 2)));
    mercury__calendar__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 3)));
    *mercury__calendar__HeadVar__5_5 = mercury__calendar__hours_1_f_0(mercury__calendar__Duration_9);
    *mercury__calendar__HeadVar__6_6 = mercury__calendar__minutes_1_f_0(mercury__calendar__Duration_9);
    *mercury__calendar__HeadVar__7_7 = mercury__calendar__seconds_1_f_0(mercury__calendar__Duration_9);
    mercury__calendar__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 0)));
    mercury__calendar__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 1)));
    mercury__calendar__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 2)));
    *mercury__calendar__HeadVar__8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Duration_9, (MR_Integer) 3)));
  }
}

MR_Word MR_CALL 
mercury__calendar__init_duration_7_f_0(
  MR_Integer mercury__calendar__Years0_9,
  MR_Integer mercury__calendar__Months0_10,
  MR_Integer mercury__calendar__Days0_11,
  MR_Integer mercury__calendar__Hours0_12,
  MR_Integer mercury__calendar__Minutes0_13,
  MR_Integer mercury__calendar__Seconds0_14,
  MR_Integer mercury__calendar__MicroSeconds0_15)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__Dur_16;

    {
      MR_Integer mercury__calendar__Var_31;
      MR_Integer mercury__calendar__Var_32;
      MR_Integer mercury__calendar__Var_33;
      MR_Integer mercury__calendar__Var_34;
      MR_Integer mercury__calendar__Var_35;
      MR_Integer mercury__calendar__Var_36;

      mercury__calendar__succeeded = (mercury__calendar__Years0_9 >= (MR_Integer) 0);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Var_31 = (MR_Integer) 0;
        mercury__calendar__succeeded = (mercury__calendar__Months0_10 >= mercury__calendar__Var_31);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_32 = (MR_Integer) 0;
          mercury__calendar__succeeded = (mercury__calendar__Days0_11 >= mercury__calendar__Var_32);
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__Var_33 = (MR_Integer) 0;
            mercury__calendar__succeeded = (mercury__calendar__Hours0_12 >= mercury__calendar__Var_33);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_34 = (MR_Integer) 0;
              mercury__calendar__succeeded = (mercury__calendar__Minutes0_13 >= mercury__calendar__Var_34);
              if (mercury__calendar__succeeded)
              {
                mercury__calendar__Var_35 = (MR_Integer) 0;
                mercury__calendar__succeeded = (mercury__calendar__Seconds0_14 >= mercury__calendar__Var_35);
                if (mercury__calendar__succeeded)
                {
                  mercury__calendar__Var_36 = (MR_Integer) 0;
                  mercury__calendar__succeeded = (mercury__calendar__MicroSeconds0_15 >= mercury__calendar__Var_36);
                }
              }
            }
          }
        }
      }
    }
    if (!(mercury__calendar__succeeded))
    {
      MR_Integer mercury__calendar__Var_24;
      MR_Integer mercury__calendar__Var_25;
      MR_Integer mercury__calendar__Var_26;
      MR_Integer mercury__calendar__Var_27;
      MR_Integer mercury__calendar__Var_28;
      MR_Integer mercury__calendar__Var_29;

      mercury__calendar__succeeded = (mercury__calendar__Years0_9 <= (MR_Integer) 0);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Var_24 = (MR_Integer) 0;
        mercury__calendar__succeeded = (mercury__calendar__Months0_10 <= mercury__calendar__Var_24);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_25 = (MR_Integer) 0;
          mercury__calendar__succeeded = (mercury__calendar__Days0_11 <= mercury__calendar__Var_25);
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__Var_26 = (MR_Integer) 0;
            mercury__calendar__succeeded = (mercury__calendar__Hours0_12 <= mercury__calendar__Var_26);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_27 = (MR_Integer) 0;
              mercury__calendar__succeeded = (mercury__calendar__Minutes0_13 <= mercury__calendar__Var_27);
              if (mercury__calendar__succeeded)
              {
                mercury__calendar__Var_28 = (MR_Integer) 0;
                mercury__calendar__succeeded = (mercury__calendar__Seconds0_14 <= mercury__calendar__Var_28);
                if (mercury__calendar__succeeded)
                {
                  mercury__calendar__Var_29 = (MR_Integer) 0;
                  mercury__calendar__succeeded = (mercury__calendar__MicroSeconds0_15 <= mercury__calendar__Var_29);
                }
              }
            }
          }
        }
      }
    }
    if (mercury__calendar__succeeded)
    {
      MR_Integer mercury__calendar__Months_17;
      MR_Integer mercury__calendar__Seconds1_18;
      MR_Integer mercury__calendar__MicroSeconds_19;
      MR_Integer mercury__calendar__Seconds2_20;
      MR_Integer mercury__calendar__Days_21;
      MR_Integer mercury__calendar__Seconds_22;
      MR_Integer mercury__calendar__Var_37 = (mercury__calendar__Years0_9 * (MR_Integer) 12);
      MR_Integer mercury__calendar__Var_39;
      MR_Integer mercury__calendar__Var_42;
      MR_Integer mercury__calendar__Var_43;
      MR_Integer mercury__calendar__Var_45;
      MR_Integer mercury__calendar__Var_47;

      mercury__calendar__Months_17 = (mercury__calendar__Var_37 + mercury__calendar__Months0_10);
      mercury__calendar__Var_39 = (mercury__calendar__MicroSeconds0_15 / (MR_Integer) 1000000);
      mercury__calendar__Seconds1_18 = (mercury__calendar__Seconds0_14 + mercury__calendar__Var_39);
      mercury__calendar__MicroSeconds_19 = (mercury__calendar__MicroSeconds0_15 % (MR_Integer) 1000000);
      mercury__calendar__Var_43 = (mercury__calendar__Minutes0_13 * (MR_Integer) 60);
      mercury__calendar__Var_42 = (mercury__calendar__Seconds1_18 + mercury__calendar__Var_43);
      mercury__calendar__Var_45 = (mercury__calendar__Hours0_12 * (MR_Integer) 3600);
      mercury__calendar__Seconds2_20 = (mercury__calendar__Var_42 + mercury__calendar__Var_45);
      mercury__calendar__Var_47 = (mercury__calendar__Seconds2_20 / (MR_Integer) 86400);
      mercury__calendar__Days_21 = (mercury__calendar__Days0_11 + mercury__calendar__Var_47);
      mercury__calendar__Seconds_22 = (mercury__calendar__Seconds2_20 % (MR_Integer) 86400);
      {
        mercury__calendar__Dur_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__calendar__Dur_16, 0) = ((MR_Box) (mercury__calendar__Months_17));
        MR_hl_field(MR_mktag(0), mercury__calendar__Dur_16, 1) = ((MR_Box) (mercury__calendar__Days_21));
        MR_hl_field(MR_mktag(0), mercury__calendar__Dur_16, 2) = ((MR_Box) (mercury__calendar__Seconds_22));
        MR_hl_field(MR_mktag(0), mercury__calendar__Dur_16, 3) = ((MR_Box) (mercury__calendar__MicroSeconds_19));
      }
    }
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.init_duration\'/7", (MR_String) "some components negative and some positive");
    }
    return mercury__calendar__Dur_16;
  }
}

MR_Integer MR_CALL 
mercury__calendar__microseconds_1_f_0(
  MR_Word mercury__calendar__Dur_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));

    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__seconds_1_f_0(
  MR_Word mercury__calendar__Dur_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

    mercury__calendar__HeadVar__2_2 = (mercury__calendar__Var_4 % (MR_Integer) 60);
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__minutes_1_f_0(
  MR_Word mercury__calendar__Dur_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Var_4;
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

    mercury__calendar__Var_4 = (mercury__calendar__Var_5 % (MR_Integer) 3600);
    mercury__calendar__HeadVar__2_2 = (mercury__calendar__Var_4 / (MR_Integer) 60);
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__hours_1_f_0(
  MR_Word mercury__calendar__Dur_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

    mercury__calendar__HeadVar__2_2 = (mercury__calendar__Var_4 / (MR_Integer) 3600);
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__days_1_f_0(
  MR_Word mercury__calendar__Dur_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__months_1_f_0(
  MR_Word mercury__calendar__Dur_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

    mercury__calendar__HeadVar__2_2 = (mercury__calendar__Var_4 % (MR_Integer) 12);
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__years_1_f_0(
  MR_Word mercury__calendar__Dur_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Dur_3, (MR_Integer) 3)));

    mercury__calendar__HeadVar__2_2 = (mercury__calendar__Var_4 / (MR_Integer) 12);
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__calendar__same_date_2_p_0(
  MR_Word mercury__calendar__A_3,
  MR_Word mercury__calendar__B_4)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Year_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Month_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Day_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__A_3, (MR_Integer) 6)));
    MR_Integer mercury__calendar__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__B_4, (MR_Integer) 6)));

    mercury__calendar__succeeded = (mercury__calendar__Year_5 == mercury__calendar__Var_16);
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__succeeded = (mercury__calendar__Month_6 == mercury__calendar__Var_17);
      if (mercury__calendar__succeeded)
        mercury__calendar__succeeded = (mercury__calendar__Day_7 == mercury__calendar__Var_18);
    }
    return mercury__calendar__succeeded;
  }
}

MR_Word MR_CALL 
mercury__calendar__unix_epoch_0_f_0(void)
{
  {
    MR_Word mercury__calendar__HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_5[0];

    return mercury__calendar__HeadVar__1_1;
  }
}

void MR_CALL 
mercury__calendar__current_utc_time_3_p_0(
  MR_Word * mercury__calendar__Now_4)
{
  {
    MR_Word mercury__calendar__TimeT_6;
    MR_Box mercury__calendar__V_3_12;
    MR_Integer mercury__calendar__V_13_21;
    MR_Integer mercury__calendar__TMYear_25;
    MR_Integer mercury__calendar__TMMonth_26;
    MR_Integer mercury__calendar__Year_34;
    MR_Integer mercury__calendar__Month_35;
    MR_Integer mercury__calendar__Day_36;
    MR_Integer mercury__calendar__Hour_37;
    MR_Integer mercury__calendar__Minute_38;
    MR_Integer mercury__calendar__Second_39;
    MR_Integer mercury__calendar__V_11_19;
    MR_Integer mercury__calendar__V_12_20;
    MR_Word mercury__calendar__V_14_22;

    mercury__time__time_3_p_0(&mercury__calendar__TimeT_6);
    mercury__calendar__V_3_12 = (MR_Box) mercury__calendar__TimeT_6;
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

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__calendar__V_3_12 , Time);
		{
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

		;}
#undef MR_PROC_LABEL
	 mercury__calendar__TMYear_25  = Yr;
	 mercury__calendar__TMMonth_26  = Mnt;
	 mercury__calendar__Day_36  = MD;
	 mercury__calendar__Hour_37  = Hrs;
	 mercury__calendar__Minute_38  = Min;
	 mercury__calendar__Second_39  = Sec;
	 mercury__calendar__V_11_19  = YD;
	 mercury__calendar__V_12_20  = WD;
	 mercury__calendar__V_13_21  = N;
}
    mercury__calendar__V_14_22 = mercury__time__int_to_maybe_dst_1_f_0(mercury__calendar__V_13_21);
    mercury__calendar__Year_34 = ((MR_Integer) 1900 + mercury__calendar__TMYear_25);
    mercury__calendar__Month_35 = (mercury__calendar__TMMonth_26 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *mercury__calendar__Now_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_39));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

void MR_CALL 
mercury__calendar__current_local_time_3_p_0(
  MR_Word * mercury__calendar__Now_4)
{
  {
    MR_Word mercury__calendar__TimeT_6;
    MR_Word mercury__calendar__TM_7;
    MR_Integer mercury__calendar__TMYear_14;
    MR_Integer mercury__calendar__TMMonth_15;
    MR_Integer mercury__calendar__Year_23;
    MR_Integer mercury__calendar__Month_24;
    MR_Integer mercury__calendar__Day_25;
    MR_Integer mercury__calendar__Hour_26;
    MR_Integer mercury__calendar__Minute_27;
    MR_Integer mercury__calendar__Second_28;
    MR_Integer mercury__calendar__Var_20;
    MR_Integer mercury__calendar__Var_21;
    MR_Word mercury__calendar__Var_22;

    mercury__time__time_3_p_0(&mercury__calendar__TimeT_6);
    mercury__time__localtime_4_p_0(mercury__calendar__TimeT_6, &mercury__calendar__TM_7);
    mercury__calendar__TMYear_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 0)));
    mercury__calendar__TMMonth_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 1)));
    mercury__calendar__Day_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 2)));
    mercury__calendar__Hour_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 3)));
    mercury__calendar__Minute_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 4)));
    mercury__calendar__Second_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 5)));
    mercury__calendar__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 6)));
    mercury__calendar__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 7)));
    mercury__calendar__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__calendar__TM_7, (MR_Integer) 8)));
    mercury__calendar__Year_23 = ((MR_Integer) 1900 + mercury__calendar__TMYear_14);
    mercury__calendar__Month_24 = (mercury__calendar__TMMonth_15 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *mercury__calendar__Now_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

MR_String MR_CALL 
mercury__calendar__date_to_string_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_String mercury__calendar__Str_4;
    MR_Integer mercury__calendar__Year0_5;
    MR_Word mercury__calendar__Month_6;
    MR_Integer mercury__calendar__Day_7;
    MR_Integer mercury__calendar__Hour_8;
    MR_Integer mercury__calendar__Minute_9;
    MR_Integer mercury__calendar__Second_10;
    MR_Integer mercury__calendar__MicroSecond_11;
    MR_String mercury__calendar__SignStr_12;
    MR_Integer mercury__calendar__Year_13;
    MR_String mercury__calendar__MicroSecondStr_14;
    MR_Integer mercury__calendar__Var_23;
    MR_String mercury__calendar__Var_35;
    MR_Word mercury__calendar__Var_41;
    MR_String mercury__calendar__Var_43;
    MR_String mercury__calendar__Var_45;
    MR_String mercury__calendar__Var_46;
    MR_String mercury__calendar__Var_54;
    MR_String mercury__calendar__Var_56;
    MR_String mercury__calendar__Var_57;
    MR_String mercury__calendar__Var_65;
    MR_String mercury__calendar__Var_67;
    MR_String mercury__calendar__Var_68;
    MR_String mercury__calendar__Var_76;
    MR_String mercury__calendar__Var_78;
    MR_String mercury__calendar__Var_79;
    MR_String mercury__calendar__Var_87;
    MR_String mercury__calendar__Var_89;
    MR_String mercury__calendar__Var_90;
    MR_String mercury__calendar__Var_98;

    mercury__calendar__unpack_date_8_p_0(mercury__calendar__Date_3, &mercury__calendar__Year0_5, &mercury__calendar__Month_6, &mercury__calendar__Day_7, &mercury__calendar__Hour_8, &mercury__calendar__Minute_9, &mercury__calendar__Second_10, &mercury__calendar__MicroSecond_11);
    mercury__calendar__succeeded = (mercury__calendar__Year0_5 < (MR_Integer) 0);
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__SignStr_12 = (MR_String) "-";
      mercury__calendar__Year_13 = ((MR_Integer) 0 - mercury__calendar__Year0_5);
    }
    else
    {
      mercury__calendar__SignStr_12 = (MR_String) "";
      mercury__calendar__Year_13 = mercury__calendar__Year0_5;
    }
    mercury__calendar__MicroSecondStr_14 = mercury__calendar__microsecond_string_1_f_0(mercury__calendar__MicroSecond_11);
    mercury__calendar__Var_23 = mercury__calendar__month_to_int_1_f_0(mercury__calendar__Month_6);
    mercury__calendar__Var_41 = (MR_Word) &mercury__calendar_scalar_common_9[1];
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__Var_41, (MR_Integer) 2, mercury__calendar__Second_10, &mercury__calendar__Var_35);
    mercury__calendar__Var_43 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_35, mercury__calendar__MicroSecondStr_14);
    mercury__calendar__Var_45 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__Var_43);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__Var_41, (MR_Integer) 2, mercury__calendar__Minute_9, &mercury__calendar__Var_46);
    mercury__calendar__Var_54 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_46, mercury__calendar__Var_45);
    mercury__calendar__Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__Var_54);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__Var_41, (MR_Integer) 2, mercury__calendar__Hour_8, &mercury__calendar__Var_57);
    mercury__calendar__Var_65 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_57, mercury__calendar__Var_56);
    mercury__calendar__Var_67 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__calendar__Var_65);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__Var_41, (MR_Integer) 2, mercury__calendar__Day_7, &mercury__calendar__Var_68);
    mercury__calendar__Var_76 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_68, mercury__calendar__Var_67);
    mercury__calendar__Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__Var_76);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__Var_41, (MR_Integer) 2, mercury__calendar__Var_23, &mercury__calendar__Var_79);
    mercury__calendar__Var_87 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_79, mercury__calendar__Var_78);
    mercury__calendar__Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__Var_87);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__calendar__Var_41, (MR_Integer) 4, mercury__calendar__Year_13, &mercury__calendar__Var_90);
    mercury__calendar__Var_98 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_90, mercury__calendar__Var_89);
    mercury__calendar__Str_4 = mercury__string__f_43_43_2_f_0(mercury__calendar__SignStr_12, mercury__calendar__Var_98);
    return mercury__calendar__Str_4;
  }
}

static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
  MR_Integer mercury__calendar__MicroSeconds_3)
{
  {
    MR_bool mercury__calendar__succeeded = (mercury__calendar__MicroSeconds_3 > (MR_Integer) 0);
    MR_String mercury__calendar__Str_4;

    if (mercury__calendar__succeeded)
    {
      MR_String mercury__calendar__Var_8;
      MR_String mercury__calendar__Var_15;
      MR_Word mercury__calendar__Var_21 = (MR_Word) &mercury__calendar_scalar_common_9[1];
      MR_Word mercury__calendar__V_9_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_9[2]);
      MR_Word mercury__calendar__V_10_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Integer mercury__calendar__V_6_39;
      MR_Integer mercury__calendar__V_7_40;
      MR_Integer mercury__calendar__V_8_41;
      MR_Integer mercury__calendar__V_6_47;
      MR_Integer mercury__calendar__V_7_48;
      MR_String mercury__calendar__V_7_57;

      mercury__string__format__format_signed_int_component_5_p_0(mercury__calendar__Var_21, mercury__calendar__V_9_28, mercury__calendar__V_10_29, mercury__calendar__MicroSeconds_3, &mercury__calendar__Var_15);
      mercury__string__append_3_p_2((MR_String) ".", mercury__calendar__Var_15, &mercury__calendar__Var_8);
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__Var_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_7_40  = Length;
}
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__calendar__Var_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__calendar__V_6_47  = Length;
}
      mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, mercury__calendar__Var_8, mercury__calendar__V_6_47, &mercury__calendar__V_7_48);
      mercury__calendar__V_8_41 = (mercury__calendar__V_6_47 - mercury__calendar__V_7_48);
      mercury__calendar__V_6_39 = (mercury__calendar__V_7_40 - mercury__calendar__V_8_41);
      mercury__string__split_4_p_0(mercury__calendar__Var_8, mercury__calendar__V_6_39, &mercury__calendar__Str_4, &mercury__calendar__V_7_57);
    }
    else
      mercury__calendar__Str_4 = (MR_String) "";
    return mercury__calendar__Str_4;
  }
}

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0(
  MR_Char mercury__calendar__Var_11,
  MR_String mercury__calendar__V_6_6,
  MR_Integer mercury__calendar__V_7_7,
  MR_Integer * mercury__calendar__V_8_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded;
      MR_Integer mercury__calendar__V_9_9;
      MR_Char mercury__calendar__V_10_10;

{
#define MR_PROC_LABEL mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__calendar__V_6_6 ;
	Index =  mercury__calendar__V_7_7 ;
		{

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


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__calendar__V_9_9  = PrevIndex;
	 mercury__calendar__V_10_10  = Ch;
	}
mercury__calendar__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__calendar__succeeded)
        mercury__calendar__succeeded = (mercury__calendar__Var_11 == mercury__calendar__V_10_10);
      if (mercury__calendar__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__calendar__next_value_of_V_7_7 = mercury__calendar__V_9_9;

          mercury__calendar__V_7_7 = mercury__calendar__next_value_of_V_7_7;
        }
        continue;
      }
      else
        *mercury__calendar__V_8_8 = mercury__calendar__V_7_7;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_date_from_string_1_f_0(
  MR_String mercury__calendar__Str_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__Date_4;
    MR_Word mercury__calendar__Date0_5;

    mercury__calendar__succeeded = mercury__calendar__date_from_string_2_p_0(mercury__calendar__Str_3, &mercury__calendar__Date0_5);
    if (mercury__calendar__succeeded)
      mercury__calendar__Date_4 = mercury__calendar__Date0_5;
    else
    {
      MR_String mercury__calendar__Var_7;

      mercury__string__append_3_p_2((MR_String) "invalid date: ", mercury__calendar__Str_3, &mercury__calendar__Var_7);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_date_from_string\'/1", mercury__calendar__Var_7);
    }
    return mercury__calendar__Date_4;
  }
}

MR_bool MR_CALL 
mercury__calendar__date_from_string_2_p_0(
  MR_String mercury__calendar__Str_3,
  MR_Word * mercury__calendar__Date_4)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__YearChars_8;
    MR_Integer mercury__calendar__Year_9;
    MR_Integer mercury__calendar__Month_10;
    MR_Integer mercury__calendar__Day_11;
    MR_Integer mercury__calendar__Hour_12;
    MR_Integer mercury__calendar__Minute_13;
    MR_Integer mercury__calendar__Second_14;
    MR_Integer mercury__calendar__MicroSecond_15;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_16_16;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_19_19;
    MR_Char mercury__calendar__Var_22;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_23_23;
    MR_Integer mercury__calendar__Var_24;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_25_25;
    MR_Integer mercury__calendar__Var_26;
    MR_Integer mercury__calendar__Var_27;
    MR_Char mercury__calendar__Var_28;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_29_29;
    MR_Integer mercury__calendar__Var_30;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_31_31;
    MR_Integer mercury__calendar__Var_32;
    MR_Integer mercury__calendar__Var_33;
    MR_Char mercury__calendar__Var_34;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_35_35;
    MR_Integer mercury__calendar__Var_36;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_37_37;
    MR_Integer mercury__calendar__Var_38;
    MR_Integer mercury__calendar__Var_39;
    MR_Char mercury__calendar__Var_40;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_41_41;
    MR_Integer mercury__calendar__Var_42;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_43_43;
    MR_Integer mercury__calendar__Var_44;
    MR_Integer mercury__calendar__Var_45;
    MR_Char mercury__calendar__Var_46;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_47_47;
    MR_Integer mercury__calendar__Var_48;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_49_49;
    MR_Integer mercury__calendar__Var_50;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_51_51;
    MR_Char mercury__calendar__Var_53;
    MR_Integer mercury__calendar__Var_54;
    MR_Char mercury__calendar__Var_55;
    MR_Integer mercury__calendar__Var_56;
    MR_Char mercury__calendar__Var_57;
    MR_Integer mercury__calendar__Var_58;
    MR_Char mercury__calendar__Var_59;
    MR_Integer mercury__calendar__Var_60;
    MR_Char mercury__calendar__Var_61;
    MR_Integer mercury__calendar__Var_62;
    MR_Integer mercury__calendar__Var_90;
    MR_Integer mercury__calendar__Var_91;
    MR_Word mercury__calendar__Rest1_6;
    MR_Char mercury__calendar__Var_52;

    mercury__string__to_char_list_2_p_0(mercury__calendar__Str_3, &mercury__calendar__STATE_VARIABLE_Chars_16_16);
    mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_16_16)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_16_16, (MR_Integer) 0)));
      mercury__calendar__Rest1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_16_16, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 45 == mercury__calendar__Var_52);
    }
    if (mercury__calendar__succeeded)
    {
      MR_Integer mercury__calendar__Year0_7;

      mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &mercury__calendar__Year0_7, (MR_Integer) 0, &mercury__calendar__YearChars_8, mercury__calendar__Rest1_6, &mercury__calendar__STATE_VARIABLE_Chars_19_19);
      mercury__calendar__Year_9 = ((MR_Integer) 0 - mercury__calendar__Year0_7);
    }
    else
    {
      mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &mercury__calendar__Year_9, (MR_Integer) 0, &mercury__calendar__YearChars_8, mercury__calendar__STATE_VARIABLE_Chars_16_16, &mercury__calendar__STATE_VARIABLE_Chars_19_19);
    }
    mercury__calendar__succeeded = (mercury__calendar__YearChars_8 >= (MR_Integer) 4);
    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_22 = (MR_Char) 45;
      mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_19_19)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_19_19, (MR_Integer) 0)));
        mercury__calendar__STATE_VARIABLE_Chars_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_19_19, (MR_Integer) 1)));
        mercury__calendar__succeeded = (mercury__calendar__Var_22 == mercury__calendar__Var_53);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_24 = (MR_Integer) 2;
          mercury__calendar__Var_90 = (MR_Integer) 0;
          mercury__calendar__Var_91 = (MR_Integer) 0;
          mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__Var_90, &mercury__calendar__Month_10, mercury__calendar__Var_91, &mercury__calendar__Var_54, mercury__calendar__STATE_VARIABLE_Chars_23_23, &mercury__calendar__STATE_VARIABLE_Chars_25_25);
          mercury__calendar__succeeded = (mercury__calendar__Var_24 == mercury__calendar__Var_54);
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__Var_26 = (MR_Integer) 1;
            mercury__calendar__succeeded = (mercury__calendar__Month_10 >= mercury__calendar__Var_26);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_27 = (MR_Integer) 12;
              mercury__calendar__succeeded = (mercury__calendar__Month_10 <= mercury__calendar__Var_27);
              if (mercury__calendar__succeeded)
              {
                mercury__calendar__Var_28 = (MR_Char) 45;
                mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_25_25)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__calendar__succeeded)
                {
                  mercury__calendar__Var_55 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_25_25, (MR_Integer) 0)));
                  mercury__calendar__STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_25_25, (MR_Integer) 1)));
                  mercury__calendar__succeeded = (mercury__calendar__Var_28 == mercury__calendar__Var_55);
                  if (mercury__calendar__succeeded)
                  {
                    mercury__calendar__Var_30 = (MR_Integer) 2;
                    mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Day_11, &mercury__calendar__Var_56, mercury__calendar__STATE_VARIABLE_Chars_29_29, &mercury__calendar__STATE_VARIABLE_Chars_31_31);
                    mercury__calendar__succeeded = (mercury__calendar__Var_30 == mercury__calendar__Var_56);
                    if (mercury__calendar__succeeded)
                    {
                      mercury__calendar__Var_32 = (MR_Integer) 1;
                      mercury__calendar__succeeded = (mercury__calendar__Day_11 >= mercury__calendar__Var_32);
                      if (mercury__calendar__succeeded)
                      {
                        mercury__calendar__Var_33 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Year_9, mercury__calendar__Month_10);
                        mercury__calendar__succeeded = (mercury__calendar__Day_11 <= mercury__calendar__Var_33);
                        if (mercury__calendar__succeeded)
                        {
                          mercury__calendar__Var_34 = (MR_Char) 32;
                          mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_31_31)) == (MR_mktag((MR_Integer) 1)));
                          if (mercury__calendar__succeeded)
                          {
                            mercury__calendar__Var_57 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
                            mercury__calendar__STATE_VARIABLE_Chars_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_31_31, (MR_Integer) 1)));
                            mercury__calendar__succeeded = (mercury__calendar__Var_34 == mercury__calendar__Var_57);
                            if (mercury__calendar__succeeded)
                            {
                              mercury__calendar__Var_36 = (MR_Integer) 2;
                              mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Hour_12, &mercury__calendar__Var_58, mercury__calendar__STATE_VARIABLE_Chars_35_35, &mercury__calendar__STATE_VARIABLE_Chars_37_37);
                              mercury__calendar__succeeded = (mercury__calendar__Var_36 == mercury__calendar__Var_58);
                              if (mercury__calendar__succeeded)
                              {
                                mercury__calendar__Var_38 = (MR_Integer) 0;
                                mercury__calendar__succeeded = (mercury__calendar__Hour_12 >= mercury__calendar__Var_38);
                                if (mercury__calendar__succeeded)
                                {
                                  mercury__calendar__Var_39 = (MR_Integer) 23;
                                  mercury__calendar__succeeded = (mercury__calendar__Hour_12 <= mercury__calendar__Var_39);
                                  if (mercury__calendar__succeeded)
                                  {
                                    mercury__calendar__Var_40 = (MR_Char) 58;
                                    mercury__calendar__succeeded = mercury__calendar__read_char_3_p_0(&mercury__calendar__Var_59, mercury__calendar__STATE_VARIABLE_Chars_37_37, &mercury__calendar__STATE_VARIABLE_Chars_41_41);
                                    if (mercury__calendar__succeeded)
                                    {
                                      mercury__calendar__succeeded = (mercury__calendar__Var_40 == mercury__calendar__Var_59);
                                      if (mercury__calendar__succeeded)
                                      {
                                        mercury__calendar__Var_42 = (MR_Integer) 2;
                                        mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Minute_13, &mercury__calendar__Var_60, mercury__calendar__STATE_VARIABLE_Chars_41_41, &mercury__calendar__STATE_VARIABLE_Chars_43_43);
                                        mercury__calendar__succeeded = (mercury__calendar__Var_42 == mercury__calendar__Var_60);
                                        if (mercury__calendar__succeeded)
                                        {
                                          mercury__calendar__Var_44 = (MR_Integer) 0;
                                          mercury__calendar__succeeded = (mercury__calendar__Minute_13 >= mercury__calendar__Var_44);
                                          if (mercury__calendar__succeeded)
                                          {
                                            mercury__calendar__Var_45 = (MR_Integer) 59;
                                            mercury__calendar__succeeded = (mercury__calendar__Minute_13 <= mercury__calendar__Var_45);
                                            if (mercury__calendar__succeeded)
                                            {
                                              mercury__calendar__Var_46 = (MR_Char) 58;
                                              mercury__calendar__succeeded = mercury__calendar__read_char_3_p_0(&mercury__calendar__Var_61, mercury__calendar__STATE_VARIABLE_Chars_43_43, &mercury__calendar__STATE_VARIABLE_Chars_47_47);
                                              if (mercury__calendar__succeeded)
                                              {
                                                mercury__calendar__succeeded = (mercury__calendar__Var_46 == mercury__calendar__Var_61);
                                                if (mercury__calendar__succeeded)
                                                {
                                                  mercury__calendar__Var_48 = (MR_Integer) 2;
                                                  mercury__calendar__read_int_and_num_chars_4_p_0(&mercury__calendar__Second_14, &mercury__calendar__Var_62, mercury__calendar__STATE_VARIABLE_Chars_47_47, &mercury__calendar__STATE_VARIABLE_Chars_49_49);
                                                  mercury__calendar__succeeded = (mercury__calendar__Var_48 == mercury__calendar__Var_62);
                                                  if (mercury__calendar__succeeded)
                                                  {
                                                    mercury__calendar__Var_50 = (MR_Integer) 62;
                                                    mercury__calendar__succeeded = (mercury__calendar__Second_14 < mercury__calendar__Var_50);
                                                    if (mercury__calendar__succeeded)
                                                    {
                                                      mercury__calendar__read_microseconds_3_p_0(&mercury__calendar__MicroSecond_15, mercury__calendar__STATE_VARIABLE_Chars_49_49, &mercury__calendar__STATE_VARIABLE_Chars_51_51);
                                                      mercury__calendar__succeeded = (mercury__calendar__STATE_VARIABLE_Chars_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      if (mercury__calendar__succeeded)
                                                      {
                                                        {
                                                          MR_Word base;
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                                                          *mercury__calendar__Date_4 = base;
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_9));
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Month_10));
                                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_11));
                                                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_12));
                                                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_13));
                                                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_14));
                                                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__calendar__MicroSecond_15));
                                                        }
                                                        mercury__calendar__succeeded = MR_TRUE;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return mercury__calendar__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
  MR_Char * mercury__calendar__Char_4,
  MR_Word mercury__calendar__HeadVar__2_2,
  MR_Word * mercury__calendar__Rest_5)
{
  {
    MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));

    if (mercury__calendar__succeeded)
    {
      *mercury__calendar__Char_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 0)));
      *mercury__calendar__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__HeadVar__2_2, (MR_Integer) 1)));
    }
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
  MR_Integer * mercury__calendar__Val_5,
  MR_Integer * mercury__calendar__N_6,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_8,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_9)
{
  {
    mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, mercury__calendar__Val_5, (MR_Integer) 0, mercury__calendar__N_6, mercury__calendar__STATE_VARIABLE_Chars_0_8, mercury__calendar__STATE_VARIABLE_Chars_9);
  }
}

static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
  MR_Integer * mercury__calendar__MicroSeconds_4,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_9,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_10)
{
  {
    MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__calendar__Fraction_7;
    MR_Integer mercury__calendar__FractionDigits_8;
    MR_Word mercury__calendar__STATE_VARIABLE_Chars_12_12;
    MR_Word mercury__calendar__Chars1_6;
    MR_Integer mercury__calendar__Var_13;
    MR_Integer mercury__calendar__Var_14;
    MR_Char mercury__calendar__Var_20;
    MR_Integer mercury__calendar__Var_28;
    MR_Integer mercury__calendar__Var_29;

    if (mercury__calendar__succeeded)
    {
      mercury__calendar__Var_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_9, (MR_Integer) 0)));
      mercury__calendar__Chars1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_9, (MR_Integer) 1)));
      mercury__calendar__succeeded = ((MR_Char) 46 == mercury__calendar__Var_20);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Var_28 = (MR_Integer) 0;
        mercury__calendar__Var_29 = (MR_Integer) 0;
        mercury__calendar__read_int_and_num_chars_2_6_p_0(mercury__calendar__Var_28, &mercury__calendar__Fraction_7, mercury__calendar__Var_29, &mercury__calendar__FractionDigits_8, mercury__calendar__Chars1_6, &mercury__calendar__STATE_VARIABLE_Chars_12_12);
        mercury__calendar__Var_13 = (MR_Integer) 0;
        mercury__calendar__succeeded = (mercury__calendar__FractionDigits_8 > mercury__calendar__Var_13);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_14 = (MR_Integer) 7;
          mercury__calendar__succeeded = (mercury__calendar__FractionDigits_8 < mercury__calendar__Var_14);
        }
      }
    }
    if (mercury__calendar__succeeded)
    {
      MR_Integer mercury__calendar__Var_15;
      MR_Integer mercury__calendar__Var_17;

      *mercury__calendar__STATE_VARIABLE_Chars_10 = mercury__calendar__STATE_VARIABLE_Chars_12_12;
      mercury__calendar__Var_17 = ((MR_Integer) 6 - mercury__calendar__FractionDigits_8);
      mercury__int__pow_3_p_0((MR_Integer) 10, mercury__calendar__Var_17, &mercury__calendar__Var_15);
      *mercury__calendar__MicroSeconds_4 = (mercury__calendar__Var_15 * mercury__calendar__Fraction_7);
    }
    else
    {
      *mercury__calendar__MicroSeconds_4 = (MR_Integer) 0;
      *mercury__calendar__STATE_VARIABLE_Chars_10 = mercury__calendar__STATE_VARIABLE_Chars_0_9;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
  MR_Integer mercury__calendar__STATE_VARIABLE_Val_0_13,
  MR_Integer * mercury__calendar__STATE_VARIABLE_Val_14,
  MR_Integer mercury__calendar__STATE_VARIABLE_N_0_15,
  MR_Integer * mercury__calendar__STATE_VARIABLE_N_16,
  MR_Word mercury__calendar__STATE_VARIABLE_Chars_0_17,
  MR_Word * mercury__calendar__STATE_VARIABLE_Chars_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__calendar__succeeded = ((MR_tag((MR_Word) mercury__calendar__STATE_VARIABLE_Chars_0_17)) == (MR_mktag((MR_Integer) 1)));
      MR_Word mercury__calendar__Rest_11;
      MR_Integer mercury__calendar__Digit_12;
      MR_Char mercury__calendar__Char_10;

      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
        mercury__calendar__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__calendar__STATE_VARIABLE_Chars_0_17, (MR_Integer) 1)));
        mercury__calendar__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__calendar__Char_10, &mercury__calendar__Digit_12);
      }
      if (mercury__calendar__succeeded)
      {
        MR_Integer mercury__calendar__STATE_VARIABLE_Val_19_19;
        MR_Integer mercury__calendar__Var_20 = (mercury__calendar__STATE_VARIABLE_Val_0_13 * (MR_Integer) 10);
        MR_Integer mercury__calendar__Var_23;

        mercury__calendar__STATE_VARIABLE_Val_19_19 = (mercury__calendar__Var_20 + mercury__calendar__Digit_12);
        mercury__calendar__Var_23 = (mercury__calendar__STATE_VARIABLE_N_0_15 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__calendar__next_value_of_STATE_VARIABLE_Val_0_13 = mercury__calendar__STATE_VARIABLE_Val_19_19;
          MR_Integer mercury__calendar__next_value_of_STATE_VARIABLE_N_0_15 = mercury__calendar__Var_23;
          MR_Word mercury__calendar__next_value_of_STATE_VARIABLE_Chars_0_17 = mercury__calendar__Rest_11;

          mercury__calendar__STATE_VARIABLE_Val_0_13 = mercury__calendar__next_value_of_STATE_VARIABLE_Val_0_13;
          mercury__calendar__STATE_VARIABLE_N_0_15 = mercury__calendar__next_value_of_STATE_VARIABLE_N_0_15;
          mercury__calendar__STATE_VARIABLE_Chars_0_17 = mercury__calendar__next_value_of_STATE_VARIABLE_Chars_0_17;
        }
        continue;
      }
      else
      {
        *mercury__calendar__STATE_VARIABLE_Chars_18 = mercury__calendar__STATE_VARIABLE_Chars_0_17;
        *mercury__calendar__STATE_VARIABLE_N_16 = mercury__calendar__STATE_VARIABLE_N_0_15;
        *mercury__calendar__STATE_VARIABLE_Val_14 = mercury__calendar__STATE_VARIABLE_Val_0_13;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__unpack_date_8_p_0(
  MR_Word mercury__calendar__HeadVar__1_1,
  MR_Integer * mercury__calendar__Year_9,
  MR_Word * mercury__calendar__HeadVar__3_3,
  MR_Integer * mercury__calendar__Day_11,
  MR_Integer * mercury__calendar__Hour_12,
  MR_Integer * mercury__calendar__Minute_13,
  MR_Integer * mercury__calendar__Second_14,
  MR_Integer * mercury__calendar__MicroSecond_15)
{
  {
    MR_Integer mercury__calendar__Month_10;

    *mercury__calendar__Year_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
    mercury__calendar__Month_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
    *mercury__calendar__Day_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
    *mercury__calendar__Hour_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
    *mercury__calendar__Minute_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
    *mercury__calendar__Second_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
    *mercury__calendar__MicroSecond_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));
    *mercury__calendar__HeadVar__3_3 = mercury__calendar__det_int_to_month_1_f_0(mercury__calendar__Month_10);
  }
}

MR_Word MR_CALL 
mercury__calendar__det_init_date_7_f_0(
  MR_Integer mercury__calendar__Year_9,
  MR_Word mercury__calendar__Month_10,
  MR_Integer mercury__calendar__Day_11,
  MR_Integer mercury__calendar__Hour_12,
  MR_Integer mercury__calendar__Minute_13,
  MR_Integer mercury__calendar__Second_14,
  MR_Integer mercury__calendar__MicroSecond_15)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__Date_16;
    MR_Word mercury__calendar__Date0_17;

    mercury__calendar__succeeded = mercury__calendar__init_date_8_p_0(mercury__calendar__Year_9, mercury__calendar__Month_10, mercury__calendar__Day_11, mercury__calendar__Hour_12, mercury__calendar__Minute_13, mercury__calendar__Second_14, mercury__calendar__MicroSecond_15, &mercury__calendar__Date0_17);
    if (mercury__calendar__succeeded)
      mercury__calendar__Date_16 = mercury__calendar__Date0_17;
    else
    {
      MR_String mercury__calendar__Msg_18;
      MR_Integer mercury__calendar__Var_24;
      MR_String mercury__calendar__Var_35;
      MR_Word mercury__calendar__Var_41;
      MR_String mercury__calendar__Var_43;
      MR_String mercury__calendar__Var_44;
      MR_String mercury__calendar__Var_51;
      MR_String mercury__calendar__Var_53;
      MR_String mercury__calendar__Var_54;
      MR_String mercury__calendar__Var_61;
      MR_String mercury__calendar__Var_63;
      MR_String mercury__calendar__Var_64;
      MR_String mercury__calendar__Var_71;
      MR_String mercury__calendar__Var_73;
      MR_String mercury__calendar__Var_74;
      MR_String mercury__calendar__Var_81;
      MR_String mercury__calendar__Var_83;
      MR_String mercury__calendar__Var_84;
      MR_String mercury__calendar__Var_91;

      mercury__calendar__int_to_month_2_p_1(&mercury__calendar__Var_24, mercury__calendar__Month_10);
      mercury__calendar__Var_41 = (MR_Word) &mercury__calendar_scalar_common_9[0];
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__Var_41, mercury__calendar__Second_14, &mercury__calendar__Var_35);
      mercury__calendar__Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__Var_35);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__Var_41, mercury__calendar__Minute_13, &mercury__calendar__Var_44);
      mercury__calendar__Var_51 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_44, mercury__calendar__Var_43);
      mercury__calendar__Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__calendar__Var_51);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__Var_41, mercury__calendar__Hour_12, &mercury__calendar__Var_54);
      mercury__calendar__Var_61 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_54, mercury__calendar__Var_53);
      mercury__calendar__Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__calendar__Var_61);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__Var_41, mercury__calendar__Day_11, &mercury__calendar__Var_64);
      mercury__calendar__Var_71 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_64, mercury__calendar__Var_63);
      mercury__calendar__Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__Var_71);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__Var_41, mercury__calendar__Var_24, &mercury__calendar__Var_74);
      mercury__calendar__Var_81 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_74, mercury__calendar__Var_73);
      mercury__calendar__Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__calendar__Var_81);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__calendar__Var_41, mercury__calendar__Year_9, &mercury__calendar__Var_84);
      mercury__calendar__Var_91 = mercury__string__f_43_43_2_f_0(mercury__calendar__Var_84, mercury__calendar__Var_83);
      mercury__calendar__Msg_18 = mercury__string__f_43_43_2_f_0((MR_String) "invalid date: ", mercury__calendar__Var_91);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_init_date\'/7", mercury__calendar__Msg_18);
    }
    return mercury__calendar__Date_16;
  }
}

MR_bool MR_CALL 
mercury__calendar__init_date_8_p_0(
  MR_Integer mercury__calendar__Year_9,
  MR_Word mercury__calendar__Month_10,
  MR_Integer mercury__calendar__Day_11,
  MR_Integer mercury__calendar__Hour_12,
  MR_Integer mercury__calendar__Minute_13,
  MR_Integer mercury__calendar__Second_14,
  MR_Integer mercury__calendar__MicroSecond_15,
  MR_Word * mercury__calendar__Date_16)
{
  {
    MR_bool mercury__calendar__succeeded = (mercury__calendar__Day_11 >= (MR_Integer) 1);
    MR_Integer mercury__calendar__Var_18;
    MR_Integer mercury__calendar__Var_19;
    MR_Integer mercury__calendar__Var_20;
    MR_Integer mercury__calendar__Var_21;
    MR_Integer mercury__calendar__Var_22;
    MR_Integer mercury__calendar__Var_23;
    MR_Integer mercury__calendar__Var_24;

    if (mercury__calendar__succeeded)
    {
      mercury__calendar__int_to_month_2_p_1(&mercury__calendar__Var_19, mercury__calendar__Month_10);
      mercury__calendar__Var_18 = mercury__calendar__max_day_in_month_for_2_f_0(mercury__calendar__Year_9, mercury__calendar__Var_19);
      mercury__calendar__succeeded = (mercury__calendar__Day_11 <= mercury__calendar__Var_18);
      if (mercury__calendar__succeeded)
      {
        mercury__calendar__Var_20 = (MR_Integer) 24;
        mercury__calendar__succeeded = (mercury__calendar__Hour_12 < mercury__calendar__Var_20);
        if (mercury__calendar__succeeded)
        {
          mercury__calendar__Var_21 = (MR_Integer) 60;
          mercury__calendar__succeeded = (mercury__calendar__Minute_13 < mercury__calendar__Var_21);
          if (mercury__calendar__succeeded)
          {
            mercury__calendar__Var_22 = (MR_Integer) 62;
            mercury__calendar__succeeded = (mercury__calendar__Second_14 < mercury__calendar__Var_22);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_23 = (MR_Integer) 1000000;
              mercury__calendar__succeeded = (mercury__calendar__MicroSecond_15 < mercury__calendar__Var_23);
              if (mercury__calendar__succeeded)
              {
                mercury__calendar__int_to_month_2_p_1(&mercury__calendar__Var_24, mercury__calendar__Month_10);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__calendar__Date_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__calendar__Year_9));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__calendar__Var_24));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__calendar__Day_11));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__calendar__Hour_12));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__calendar__Minute_13));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__calendar__Second_14));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__calendar__MicroSecond_15));
                }
                mercury__calendar__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    return mercury__calendar__succeeded;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
  MR_Integer mercury__calendar__YearValue_4,
  MR_Integer mercury__calendar__MonthValue_5)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Max_6;
    MR_Integer mercury__calendar__M_7;
    MR_Integer mercury__calendar__Y_8;
    MR_Integer mercury__calendar__Var_10;
    MR_Integer mercury__calendar__Var_11 = (mercury__calendar__MonthValue_5 - (MR_Integer) 1);
    MR_Integer mercury__calendar__Var_15;
    MR_Integer mercury__calendar__Var_16;
    MR_Integer mercury__calendar__V_6_33;
    MR_Integer mercury__calendar__V_7_34;
    MR_Integer mercury__calendar__Max0_9;

    mercury__calendar__V_7_34 = mercury__int__div_2_f_0(mercury__calendar__Var_11, (MR_Integer) 12);
    mercury__calendar__V_6_33 = (mercury__calendar__V_7_34 * (MR_Integer) 12);
    mercury__calendar__Var_10 = (mercury__calendar__Var_11 - mercury__calendar__V_6_33);
    mercury__calendar__M_7 = (mercury__calendar__Var_10 + (MR_Integer) 1);
    mercury__calendar__Var_16 = (mercury__calendar__MonthValue_5 - (MR_Integer) 1);
    mercury__calendar__Var_15 = mercury__int__div_2_f_0(mercury__calendar__Var_16, (MR_Integer) 12);
    mercury__calendar__Y_8 = (mercury__calendar__YearValue_4 + mercury__calendar__Var_15);
    switch (mercury__calendar__M_7) {
      default:
        mercury__calendar__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 8:
      case (MR_Integer) 10:
      case (MR_Integer) 12:
        {
          mercury__calendar__Max0_9 = (MR_Integer) 31;
          mercury__calendar__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            MR_Integer mercury__calendar__Var_23;
            MR_Integer mercury__calendar__V_6_38;
            MR_Integer mercury__calendar__V_7_39;

            mercury__calendar__V_7_39 = mercury__int__div_2_f_0(mercury__calendar__Y_8, (MR_Integer) 400);
            mercury__calendar__V_6_38 = (mercury__calendar__V_7_39 * (MR_Integer) 400);
            mercury__calendar__Var_23 = (mercury__calendar__Y_8 - mercury__calendar__V_6_38);
            mercury__calendar__succeeded = (mercury__calendar__Var_23 == (MR_Integer) 0);
          }
          if (!(mercury__calendar__succeeded))
          {
            MR_Integer mercury__calendar__Var_21;
            MR_Integer mercury__calendar__Var_22;
            MR_Integer mercury__calendar__V_6_48;
            MR_Integer mercury__calendar__V_7_49;
            MR_Integer mercury__calendar__Var_19;
            MR_Integer mercury__calendar__V_6_43;
            MR_Integer mercury__calendar__V_7_44;

            mercury__calendar__V_7_44 = mercury__int__div_2_f_0(mercury__calendar__Y_8, (MR_Integer) 100);
            mercury__calendar__V_6_43 = (mercury__calendar__V_7_44 * (MR_Integer) 100);
            mercury__calendar__Var_19 = (mercury__calendar__Y_8 - mercury__calendar__V_6_43);
            mercury__calendar__succeeded = (mercury__calendar__Var_19 == (MR_Integer) 0);
            mercury__calendar__succeeded = !(mercury__calendar__succeeded);
            if (mercury__calendar__succeeded)
            {
              mercury__calendar__Var_22 = (MR_Integer) 4;
              mercury__calendar__V_7_49 = mercury__int__div_2_f_0(mercury__calendar__Y_8, mercury__calendar__Var_22);
              mercury__calendar__V_6_48 = (mercury__calendar__V_7_49 * mercury__calendar__Var_22);
              mercury__calendar__Var_21 = (mercury__calendar__Y_8 - mercury__calendar__V_6_48);
              mercury__calendar__succeeded = (mercury__calendar__Var_21 == (MR_Integer) 0);
            }
          }
          if (mercury__calendar__succeeded)
            mercury__calendar__Max0_9 = (MR_Integer) 29;
          else
            mercury__calendar__Max0_9 = (MR_Integer) 28;
          mercury__calendar__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 9:
      case (MR_Integer) 11:
        {
          mercury__calendar__Max0_9 = (MR_Integer) 30;
          mercury__calendar__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__calendar__succeeded)
      mercury__calendar__Max_6 = mercury__calendar__Max0_9;
    else
    {
      MR_Word mercury__calendar__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word mercury__calendar__TypeCtorInfo_13_63;
      MR_Word mercury__calendar__TypeClassInfo_for_op_table_72;
      MR_String mercury__calendar__Var_26;
      MR_String mercury__calendar__Var_28;
      MR_Word mercury__calendar__V_10_60;
      MR_Word mercury__calendar__V_9_61;
      MR_Word mercury__calendar__V_11_62;
      MR_Integer mercury__calendar__V_10_69;
      MR_Integer mercury__calendar__V_13_70;
      MR_Box MR_CALL (* mercury__calendar__func_0)(MR_Box, MR_Box);
      MR_Box mercury__calendar__conv1_V_13_70;

      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      mercury__calendar__V_10_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__calendar__TypeClassInfo_for_op_table_72 = (MR_Word) &mercury__calendar_scalar_common_1[0];
      mercury__calendar__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__calendar__TypeClassInfo_for_op_table_72, (MR_Integer) 0)), (MR_Integer) 12)));
      mercury__calendar__conv1_V_13_70 = mercury__calendar__func_0(((MR_Box) mercury__calendar__TypeClassInfo_for_op_table_72), ((MR_Box) ((MR_Integer) 0)));
      mercury__calendar__V_13_70 = ((MR_Integer) mercury__calendar__conv1_V_13_70);
      mercury__calendar__V_10_69 = (mercury__calendar__V_13_70 + (MR_Integer) 1);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__calendar__TypeCtorInfo_29_29, (MR_Integer) 1, mercury__calendar__V_10_69, ((MR_Box) (mercury__calendar__M_7)), mercury__calendar__V_10_60, &mercury__calendar__V_9_61);
      mercury__calendar__TypeCtorInfo_13_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__list__reverse_2_p_0(mercury__calendar__TypeCtorInfo_13_63, mercury__calendar__V_9_61, &mercury__calendar__V_11_62);
      mercury__calendar__Var_28 = mercury__string__append_list_1_f_0(mercury__calendar__V_11_62);
      mercury__string__append_3_p_2((MR_String) "unexpected value for M: ", mercury__calendar__Var_28, &mercury__calendar__Var_26);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.max_day_in_month_for\'/2", mercury__calendar__Var_26);
    }
    return mercury__calendar__Max_6;
  }
}

MR_Integer MR_CALL 
mercury__calendar__month_to_int0_1_f_0(
  MR_Word mercury__calendar__Month_3)
{
  {
    MR_Integer mercury__calendar__Int_4;
    MR_Integer mercury__calendar__Var_7;

    mercury__calendar__int_to_month_2_p_1(&mercury__calendar__Var_7, mercury__calendar__Month_3);
    mercury__calendar__Int_4 = (mercury__calendar__Var_7 - (MR_Integer) 1);
    return mercury__calendar__Int_4;
  }
}

MR_Integer MR_CALL 
mercury__calendar__month_to_int_1_f_0(
  MR_Word mercury__calendar__Month_3)
{
  {
    MR_Integer mercury__calendar__Int_4;

    mercury__calendar__int_to_month_2_p_1(&mercury__calendar__Int_4, mercury__calendar__Month_3);
    return mercury__calendar__Int_4;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_int0_to_month_1_f_0(
  MR_Integer mercury__calendar__Int_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__HeadVar__2_2;
    MR_Word mercury__calendar__Month_4;
    MR_Integer mercury__calendar__Var_12 = (mercury__calendar__Int_3 + (MR_Integer) 1);

    mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__Var_12, &mercury__calendar__Month_4);
    if (mercury__calendar__succeeded)
      mercury__calendar__HeadVar__2_2 = mercury__calendar__Month_4;
    else
    {
      MR_String mercury__calendar__Var_6;
      MR_String mercury__calendar__Var_8;

      mercury__string__int_to_base_string_3_p_0(mercury__calendar__Int_3, (MR_Integer) 10, &mercury__calendar__Var_8);
      mercury__string__append_3_p_2((MR_String) "invalid month: ", mercury__calendar__Var_8, &mercury__calendar__Var_6);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_int0_to_month\'/1", mercury__calendar__Var_6);
    }
    return mercury__calendar__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__calendar__int0_to_month_2_p_1(
  MR_Integer * mercury__calendar__Int_3,
  MR_Word mercury__calendar__Month_4)
{
  {
    MR_Integer mercury__calendar__Var_5;

    mercury__calendar__int_to_month_2_p_1(&mercury__calendar__Var_5, mercury__calendar__Month_4);
    *mercury__calendar__Int_3 = (mercury__calendar__Var_5 - (MR_Integer) 1);
  }
}

MR_bool MR_CALL 
mercury__calendar__int0_to_month_2_p_0(
  MR_Integer mercury__calendar__Int_3,
  MR_Word * mercury__calendar__Month_4)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Integer mercury__calendar__Var_5 = (mercury__calendar__Int_3 + (MR_Integer) 1);

    mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__Var_5, mercury__calendar__Month_4);
    return mercury__calendar__succeeded;
  }
}

void MR_CALL 
mercury__calendar__int_to_month_2_p_1(
  MR_Integer * mercury__calendar__HeadVar__1_1,
  MR_Word mercury__calendar__HeadVar__2_2)
{
  {
    *mercury__calendar__HeadVar__1_1 = ((&mercury__calendar_vector_common_8[0 + mercury__calendar__HeadVar__2_2]))->mercury__calendar__vector_common_type_8_0__vct_8_f_0;
  }
}

MR_Integer MR_CALL 
mercury__calendar__microsecond_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));

    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__second_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__minute_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__hour_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__day_of_week_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Word mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__JDN_6;
    MR_Integer mercury__calendar__Mod_7;
    MR_Integer mercury__calendar__V_6_12;
    MR_Integer mercury__calendar__V_7_13;

    mercury__calendar__JDN_6 = mercury__calendar__julian_day_number_1_f_0(mercury__calendar__Date_3);
    mercury__calendar__V_7_13 = mercury__int__div_2_f_0(mercury__calendar__JDN_6, (MR_Integer) 7);
    mercury__calendar__V_6_12 = (mercury__calendar__V_7_13 * (MR_Integer) 7);
    mercury__calendar__Mod_7 = (mercury__calendar__JDN_6 - mercury__calendar__V_6_12);
    mercury__calendar__HeadVar__2_2 = mercury__calendar__det_day_of_week_from_mod_1_f_0(mercury__calendar__Mod_7);
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_day_of_week_from_mod_1_f_0(
  MR_Integer mercury__calendar__Mod_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__DayOfWeek_4;
    MR_Word mercury__calendar__DayOfWeek0_5;

    if ((((MR_Unsigned) mercury__calendar__Mod_3) <= ((MR_Unsigned) (MR_Integer) 6)))
    {
      mercury__calendar__DayOfWeek0_5 = ((&mercury__calendar_vector_common_7[0 + mercury__calendar__Mod_3]))->mercury__calendar__vector_common_type_7_0__vct_7_f_0;
      mercury__calendar__succeeded = MR_TRUE;
    }
    else
      mercury__calendar__succeeded = MR_FALSE;
    if (mercury__calendar__succeeded)
      mercury__calendar__DayOfWeek_4 = mercury__calendar__DayOfWeek0_5;
    else
    {
      MR_String mercury__calendar__Var_7;
      MR_String mercury__calendar__Var_9;

      mercury__string__int_to_base_string_3_p_0(mercury__calendar__Mod_3, (MR_Integer) 10, &mercury__calendar__Var_9);
      mercury__string__append_3_p_2((MR_String) "invalid mod: ", mercury__calendar__Var_9, &mercury__calendar__Var_7);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_day_of_week_from_mod\'/1", mercury__calendar__Var_7);
    }
    return mercury__calendar__DayOfWeek_4;
  }
}

MR_Integer MR_CALL 
mercury__calendar__julian_day_number_1_f_0(
  MR_Word mercury__calendar__HeadVar__1_1)
{
  {
    MR_Integer mercury__calendar__JDN_10;
    MR_Integer mercury__calendar__Year_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Month_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Day_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer mercury__calendar__A_11;
    MR_Integer mercury__calendar__Y_12;
    MR_Integer mercury__calendar__M_13;
    MR_Integer mercury__calendar__Var_14 = ((MR_Integer) 14 - mercury__calendar__Month_4);
    MR_Integer mercury__calendar__Var_17;
    MR_Integer mercury__calendar__Var_19;
    MR_Integer mercury__calendar__Var_20;
    MR_Integer mercury__calendar__Var_23;
    MR_Integer mercury__calendar__Var_24;
    MR_Integer mercury__calendar__Var_25;
    MR_Integer mercury__calendar__Var_26;
    MR_Integer mercury__calendar__Var_27;
    MR_Integer mercury__calendar__Var_28;
    MR_Integer mercury__calendar__Var_29;
    MR_Integer mercury__calendar__Var_30;
    MR_Integer mercury__calendar__Var_34;
    MR_Integer mercury__calendar__Var_36;
    MR_Integer mercury__calendar__Var_38;
    MR_Integer mercury__calendar__Var_40;
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__HeadVar__1_1, (MR_Integer) 6)));

    mercury__calendar__A_11 = mercury__int__div_2_f_0(mercury__calendar__Var_14, (MR_Integer) 12);
    mercury__calendar__Var_17 = (mercury__calendar__Year_3 + (MR_Integer) 4800);
    mercury__calendar__Y_12 = (mercury__calendar__Var_17 - mercury__calendar__A_11);
    mercury__calendar__Var_20 = ((MR_Integer) 12 * mercury__calendar__A_11);
    mercury__calendar__Var_19 = (mercury__calendar__Month_4 + mercury__calendar__Var_20);
    mercury__calendar__M_13 = (mercury__calendar__Var_19 - (MR_Integer) 3);
    mercury__calendar__Var_30 = ((MR_Integer) 153 * mercury__calendar__M_13);
    mercury__calendar__Var_29 = (mercury__calendar__Var_30 + (MR_Integer) 2);
    mercury__calendar__Var_28 = mercury__int__div_2_f_0(mercury__calendar__Var_29, (MR_Integer) 5);
    mercury__calendar__Var_27 = (mercury__calendar__Day_5 + mercury__calendar__Var_28);
    mercury__calendar__Var_34 = ((MR_Integer) 365 * mercury__calendar__Y_12);
    mercury__calendar__Var_26 = (mercury__calendar__Var_27 + mercury__calendar__Var_34);
    mercury__calendar__Var_36 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 4);
    mercury__calendar__Var_25 = (mercury__calendar__Var_26 + mercury__calendar__Var_36);
    mercury__calendar__Var_38 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 100);
    mercury__calendar__Var_24 = (mercury__calendar__Var_25 - mercury__calendar__Var_38);
    mercury__calendar__Var_40 = mercury__int__div_2_f_0(mercury__calendar__Y_12, (MR_Integer) 400);
    mercury__calendar__Var_23 = (mercury__calendar__Var_24 + mercury__calendar__Var_40);
    mercury__calendar__JDN_10 = (mercury__calendar__Var_23 - (MR_Integer) 32045);
    return mercury__calendar__JDN_10;
  }
}

MR_Integer MR_CALL 
mercury__calendar__day_of_month_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__month_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Word mercury__calendar__HeadVar__2_2;
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

    mercury__calendar__HeadVar__2_2 = mercury__calendar__det_int_to_month_1_f_0(mercury__calendar__Var_4);
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_int_to_month_1_f_0(
  MR_Integer mercury__calendar__Int_3)
{
  {
    MR_bool mercury__calendar__succeeded;
    MR_Word mercury__calendar__HeadVar__2_2;
    MR_Word mercury__calendar__Month_4;

    mercury__calendar__succeeded = mercury__calendar__int_to_month_2_p_0(mercury__calendar__Int_3, &mercury__calendar__Month_4);
    if (mercury__calendar__succeeded)
      mercury__calendar__HeadVar__2_2 = mercury__calendar__Month_4;
    else
    {
      MR_String mercury__calendar__Var_6;
      MR_String mercury__calendar__Var_8;

      mercury__string__int_to_base_string_3_p_0(mercury__calendar__Int_3, (MR_Integer) 10, &mercury__calendar__Var_8);
      mercury__string__append_3_p_2((MR_String) "invalid month: ", mercury__calendar__Var_8, &mercury__calendar__Var_6);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_int_to_month\'/1", mercury__calendar__Var_6);
    }
    return mercury__calendar__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__calendar__int_to_month_2_p_0(
  MR_Integer mercury__calendar__HeadVar__1_1,
  MR_Word * mercury__calendar__HeadVar__2_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    if ((((MR_Unsigned) (mercury__calendar__HeadVar__1_1 - (MR_Integer) 1)) <= ((MR_Unsigned) (MR_Integer) 11)))
    {
      *mercury__calendar__HeadVar__2_2 = ((&mercury__calendar_vector_common_6[0 + (mercury__calendar__HeadVar__1_1 - (MR_Integer) 1)]))->mercury__calendar__vector_common_type_6_0__vct_6_f_0;
      mercury__calendar__succeeded = MR_TRUE;
    }
    else
      mercury__calendar__succeeded = MR_FALSE;
    return mercury__calendar__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__calendar__year_1_f_0(
  MR_Word mercury__calendar__Date_3)
{
  {
    MR_Integer mercury__calendar__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 0)));
    MR_Integer mercury__calendar__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 1)));
    MR_Integer mercury__calendar__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 2)));
    MR_Integer mercury__calendar__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 3)));
    MR_Integer mercury__calendar__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 4)));
    MR_Integer mercury__calendar__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 5)));
    MR_Integer mercury__calendar__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__calendar__Date_3, (MR_Integer) 6)));

    return mercury__calendar__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____date_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____date_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____date_time_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____date_time_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____date_time_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____day_of_month_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____day_of_month_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____day_of_week_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____day_of_week_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____days_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____days_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____duration_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____duration_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____hour_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____hour_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____hours_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____hours_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____microsecond_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____microsecond_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____microseconds_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____microseconds_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____minute_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____minute_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____minutes_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____minutes_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____month_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____month_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____months_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____months_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____order_0_0(((MR_Word) mercury__calendar__wrapper_arg_1), ((MR_Word) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____order_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Word) mercury__calendar__wrapper_arg_2), ((MR_Word) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____second_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____second_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____seconds_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____seconds_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____year_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____year_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
  MR_Box mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2)
{
  {
    MR_bool mercury__calendar__succeeded;

    mercury__calendar__succeeded = mercury__calendar____Unify____years_0_0(((MR_Integer) mercury__calendar__wrapper_arg_1), ((MR_Integer) mercury__calendar__wrapper_arg_2));
    return mercury__calendar__succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
  MR_Box * mercury__calendar__wrapper_arg_1,
  MR_Box mercury__calendar__wrapper_arg_2,
  MR_Box mercury__calendar__wrapper_arg_3)
{
  {
    MR_Word mercury__calendar__conv0_HeadVar__1_1;

    mercury__calendar____Compare____years_0_0(&mercury__calendar__conv0_HeadVar__1_1, ((MR_Integer) mercury__calendar__wrapper_arg_2), ((MR_Integer) mercury__calendar__wrapper_arg_3));
    *mercury__calendar__wrapper_arg_1 = ((MR_Box) (mercury__calendar__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__calendar__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module calendar. */
