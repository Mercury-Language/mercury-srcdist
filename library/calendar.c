/*
** Automatically generated from `calendar.m'
** by the Mercury compiler,
** version rotd-2017-08-31
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
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
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
#include "uint16.mih"
#include "uint32.mih"
#include "uint8.mih"
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
  MR_Word OriginalOrder_5,
  MR_Word DateA_6,
  MR_Word DateB_7,
  MR_Word * Duration_8);

static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
  MR_Integer BorrowVal_6,
  MR_Integer Val1_7,
  MR_Integer Val2_8,
  MR_Integer * Diff_9,
  MR_Integer * Borrow_10);

static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(
  MR_Word Var_8,
  MR_Word Var_9,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word STATE_VARIABLE_E_0_11,
  MR_Word * STATE_VARIABLE_E_12);

static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
  MR_Integer A_5,
  MR_Integer Low_6,
  MR_Integer High_7);

static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
  MR_Integer A_4,
  MR_Integer B_5);

static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
  MR_Integer A_5,
  MR_Integer Low_6,
  MR_Integer High_7);

static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void);

static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
  MR_Integer Seconds_4,
  MR_Integer MicroSeconds_5);

static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
  MR_Integer X_4,
  MR_String Suffix_5);

static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
  MR_Integer * Seconds_5,
  MR_Integer * MicroSeconds_6,
  MR_Word STATE_VARIABLE_Chars_0_13,
  MR_Word * STATE_VARIABLE_Chars_14);

static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
  MR_Integer * Minutes_4,
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7);

static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
  MR_Integer * Hours_4,
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7);

static void MR_CALL 
mercury__calendar__read_days_3_p_0(
  MR_Integer * Days_4,
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7);

static void MR_CALL 
mercury__calendar__read_months_3_p_0(
  MR_Integer * Months_4,
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7);

static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
  MR_Integer STATE_VARIABLE_Val_0_10,
  MR_Integer * STATE_VARIABLE_Val_11,
  MR_Word STATE_VARIABLE_Chars_0_12,
  MR_Word * STATE_VARIABLE_Chars_13);

static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
  MR_Integer MicroSeconds_3);

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0(
  MR_Char Var_11,
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
  MR_Char * Char_4,
  MR_Word HeadVar__2_2,
  MR_Word * Rest_5);

static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
  MR_Integer * Val_5,
  MR_Integer * N_6,
  MR_Word STATE_VARIABLE_Chars_0_8,
  MR_Word * STATE_VARIABLE_Chars_9);

static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
  MR_Integer * MicroSeconds_4,
  MR_Word STATE_VARIABLE_Chars_0_9,
  MR_Word * STATE_VARIABLE_Chars_10);

static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
  MR_Integer STATE_VARIABLE_Val_0_13,
  MR_Integer * STATE_VARIABLE_Val_14,
  MR_Integer STATE_VARIABLE_N_0_15,
  MR_Integer * STATE_VARIABLE_N_16,
  MR_Word STATE_VARIABLE_Chars_0_17,
  MR_Word * STATE_VARIABLE_Chars_18);

static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
  MR_Integer YearValue_4,
  MR_Integer MonthValue_5);

static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____date_time_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
#include "int16.mh"
#include "int32.mh"
#include "int8.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint8.mh"
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
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____year_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____seconds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____second_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____order_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____months_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____month_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____minutes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____minute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____microseconds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____microsecond_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____hours_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____hour_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____duration_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        Var_12 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          Var_12 = (MR_Integer) 0;
        else
          Var_12 = (MR_Integer) 2;
      }
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        succeeded = (ArgX2_6 < ArgY2_7);
        if (succeeded)
          Var_13 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_6 == ArgY2_7);
          if (succeeded)
            Var_13 = (MR_Integer) 0;
          else
            Var_13 = (MR_Integer) 2;
        }
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          succeeded = (ArgX3_8 < ArgY3_9);
          if (succeeded)
            Var_14 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_8 == ArgY3_9);
            if (succeeded)
              Var_14 = (MR_Integer) 0;
            else
              Var_14 = (MR_Integer) 2;
          }
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            succeeded = (ArgX4_10 < ArgY4_11);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX4_10 == ArgY4_11);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 0;
              else
                *HeadVar__1_1 = (MR_Integer) 2;
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____days_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar____Compare____date_time_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__calendar____Compare____date_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__calendar____Unify____date_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__calendar__test_dates_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__calendar__tm_to_date_1_f_0(
  MR_Word TM_3)
{
  {
    MR_Word Date_4;
    MR_Integer TMYear_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 0)));
    MR_Integer TMMonth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 1)));
    MR_Integer Year_14 = ((MR_Integer) 1900 + TMYear_5);
    MR_Integer Month_15 = (TMMonth_6 + (MR_Integer) 1);
    MR_Integer Day_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 2)));
    MR_Integer Hour_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 3)));
    MR_Integer Minute_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 4)));
    MR_Integer Second_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 5)));
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 6)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TM_3, (MR_Integer) 8)));

    {
      Date_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Date_4, 0) = ((MR_Box) (Year_14));
      MR_hl_field(MR_mktag(0), Date_4, 1) = ((MR_Box) (Month_15));
      MR_hl_field(MR_mktag(0), Date_4, 2) = ((MR_Box) (Day_16));
      MR_hl_field(MR_mktag(0), Date_4, 3) = ((MR_Box) (Hour_17));
      MR_hl_field(MR_mktag(0), Date_4, 4) = ((MR_Box) (Minute_18));
      MR_hl_field(MR_mktag(0), Date_4, 5) = ((MR_Box) (Second_19));
      MR_hl_field(MR_mktag(0), Date_4, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    return Date_4;
  }
}

MR_Word MR_CALL 
mercury__calendar__compute_day_of_week_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Word DayOfWeek_4;
    MR_Integer JDN_5;
    MR_Integer Mod_6;
    MR_Integer V_6_11;
    MR_Integer V_7_12;

    JDN_5 = mercury__calendar__julian_day_number_1_f_0(Date_3);
    V_7_12 = mercury__int__div_2_f_0(JDN_5, (MR_Integer) 7);
    V_6_11 = (V_7_12 * (MR_Integer) 7);
    Mod_6 = (JDN_5 - V_6_11);
    DayOfWeek_4 = mercury__calendar__det_day_of_week_from_mod_1_f_0(Mod_6);
    return DayOfWeek_4;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_5(
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Curr_0_17,
  MR_Word End_12,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_16;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_16, STATE_VARIABLE_Curr_0_17, End_12);
    switch (Res_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_24_24;
          MR_Box STATE_VARIABLE_Acc2_25_25;
          MR_Box STATE_VARIABLE_Acc3_26_26;
          MR_Word Var_27;
          MR_Word STATE_VARIABLE_Curr_28_28;
          MR_Integer Var_29;
          MR_Integer Var_30;
          MR_Integer Var_31;
          MR_Integer Var_32;
          MR_Integer Var_33;
          MR_Integer Var_34;
          MR_Integer Var_35;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          succeeded = func_0(((MR_Box) Pred_10), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          if (succeeded)
          {
            Var_29 = (MR_Integer) 0;
            Var_30 = (MR_Integer) 0;
            Var_31 = (MR_Integer) 1;
            Var_32 = (MR_Integer) 0;
            Var_33 = (MR_Integer) 0;
            Var_34 = (MR_Integer) 0;
            Var_35 = (MR_Integer) 0;
            Var_27 = mercury__calendar__init_duration_7_f_0(Var_29, Var_30, Var_31, Var_32, Var_33, Var_34, Var_35);
            mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_17 = STATE_VARIABLE_Curr_28_28;
            next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_24_24;
            next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_25_25;
            next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_26_26;
            STATE_VARIABLE_Curr_0_17 = next_value_of_STATE_VARIABLE_Curr_0_17;
            STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
            STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
            STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
          *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
          *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_4(
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Curr_0_17,
  MR_Word End_12,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_16;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_16, STATE_VARIABLE_Curr_0_17, End_12);
    switch (Res_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_24_24;
          MR_Box STATE_VARIABLE_Acc2_25_25;
          MR_Box STATE_VARIABLE_Acc3_26_26;
          MR_Word Var_27;
          MR_Word STATE_VARIABLE_Curr_28_28;
          MR_Integer Var_29;
          MR_Integer Var_30;
          MR_Integer Var_31;
          MR_Integer Var_32;
          MR_Integer Var_33;
          MR_Integer Var_34;
          MR_Integer Var_35;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          succeeded = func_0(((MR_Box) Pred_10), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          if (succeeded)
          {
            Var_29 = (MR_Integer) 0;
            Var_30 = (MR_Integer) 0;
            Var_31 = (MR_Integer) 1;
            Var_32 = (MR_Integer) 0;
            Var_33 = (MR_Integer) 0;
            Var_34 = (MR_Integer) 0;
            Var_35 = (MR_Integer) 0;
            Var_27 = mercury__calendar__init_duration_7_f_0(Var_29, Var_30, Var_31, Var_32, Var_33, Var_34, Var_35);
            mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_17 = STATE_VARIABLE_Curr_28_28;
            next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_24_24;
            next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_25_25;
            next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_26_26;
            STATE_VARIABLE_Curr_0_17 = next_value_of_STATE_VARIABLE_Curr_0_17;
            STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
            STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
            STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
          *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
          *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_3(
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Curr_0_17,
  MR_Word End_12,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_16;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_16, STATE_VARIABLE_Curr_0_17, End_12);
    switch (Res_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_24_24;
          MR_Box STATE_VARIABLE_Acc2_25_25;
          MR_Box STATE_VARIABLE_Acc3_26_26;
          MR_Word Var_27;
          MR_Word STATE_VARIABLE_Curr_28_28;
          MR_Integer Var_29;
          MR_Integer Var_30;
          MR_Integer Var_31;
          MR_Integer Var_32;
          MR_Integer Var_33;
          MR_Integer Var_34;
          MR_Integer Var_35;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          succeeded = func_0(((MR_Box) Pred_10), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          if (succeeded)
          {
            Var_29 = (MR_Integer) 0;
            Var_30 = (MR_Integer) 0;
            Var_31 = (MR_Integer) 1;
            Var_32 = (MR_Integer) 0;
            Var_33 = (MR_Integer) 0;
            Var_34 = (MR_Integer) 0;
            Var_35 = (MR_Integer) 0;
            Var_27 = mercury__calendar__init_duration_7_f_0(Var_29, Var_30, Var_31, Var_32, Var_33, Var_34, Var_35);
            mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_17 = STATE_VARIABLE_Curr_28_28;
            next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_24_24;
            next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_25_25;
            next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_26_26;
            STATE_VARIABLE_Curr_0_17 = next_value_of_STATE_VARIABLE_Curr_0_17;
            STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
            STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
            STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
          *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
          *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl3_days_9_p_2(
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Curr_0_17,
  MR_Word End_12,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_Word Res_16;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_16, STATE_VARIABLE_Curr_0_17, End_12);
    switch (Res_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_24_24;
          MR_Box STATE_VARIABLE_Acc2_25_25;
          MR_Box STATE_VARIABLE_Acc3_26_26;
          MR_Word Var_27;
          MR_Word STATE_VARIABLE_Curr_28_28;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          func_0(((MR_Box) Pred_10), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_17 = STATE_VARIABLE_Curr_28_28;
          next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_24_24;
          next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_25_25;
          next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_26_26;
          STATE_VARIABLE_Curr_0_17 = next_value_of_STATE_VARIABLE_Curr_0_17;
          STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
          STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
          STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
          *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
          *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl3_days_9_p_1(
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Curr_0_17,
  MR_Word End_12,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_Word Res_16;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_16, STATE_VARIABLE_Curr_0_17, End_12);
    switch (Res_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_24_24;
          MR_Box STATE_VARIABLE_Acc2_25_25;
          MR_Box STATE_VARIABLE_Acc3_26_26;
          MR_Word Var_27;
          MR_Word STATE_VARIABLE_Curr_28_28;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          func_0(((MR_Box) Pred_10), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_17 = STATE_VARIABLE_Curr_28_28;
          next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_24_24;
          next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_25_25;
          next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_26_26;
          STATE_VARIABLE_Curr_0_17 = next_value_of_STATE_VARIABLE_Curr_0_17;
          STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
          STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
          STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
          *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
          *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl3_days_9_p_0(
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Curr_0_17,
  MR_Word End_12,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_Word Res_16;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_16, STATE_VARIABLE_Curr_0_17, End_12);
    switch (Res_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_24_24;
          MR_Box STATE_VARIABLE_Acc2_25_25;
          MR_Box STATE_VARIABLE_Acc3_26_26;
          MR_Word Var_27;
          MR_Word STATE_VARIABLE_Curr_28_28;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          func_0(((MR_Box) Pred_10), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_17 = STATE_VARIABLE_Curr_28_28;
          next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_24_24;
          next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_25_25;
          next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_26_26;
          STATE_VARIABLE_Curr_0_17 = next_value_of_STATE_VARIABLE_Curr_0_17;
          STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
          STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
          STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
          *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
          *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_5(
  MR_Word TypeInfo_for_A_34,
  MR_Word TypeInfo_for_B_35,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Curr_0_14,
  MR_Word End_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_13;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_13, STATE_VARIABLE_Curr_0_14, End_10);
    switch (Res_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_19_19;
          MR_Box STATE_VARIABLE_Acc2_20_20;
          MR_Word Var_21;
          MR_Word STATE_VARIABLE_Curr_22_22;
          MR_Integer Var_23;
          MR_Integer Var_24;
          MR_Integer Var_25;
          MR_Integer Var_26;
          MR_Integer Var_27;
          MR_Integer Var_28;
          MR_Integer Var_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          succeeded = func_0(((MR_Box) Pred_8), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          if (succeeded)
          {
            Var_23 = (MR_Integer) 0;
            Var_24 = (MR_Integer) 0;
            Var_25 = (MR_Integer) 1;
            Var_26 = (MR_Integer) 0;
            Var_27 = (MR_Integer) 0;
            Var_28 = (MR_Integer) 0;
            Var_29 = (MR_Integer) 0;
            Var_21 = mercury__calendar__init_duration_7_f_0(Var_23, Var_24, Var_25, Var_26, Var_27, Var_28, Var_29);
            mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_14 = STATE_VARIABLE_Curr_22_22;
            next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_19_19;
            next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_20_20;
            STATE_VARIABLE_Curr_0_14 = next_value_of_STATE_VARIABLE_Curr_0_14;
            STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
            STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
          *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_4(
  MR_Word TypeInfo_for_A_34,
  MR_Word TypeInfo_for_B_35,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Curr_0_14,
  MR_Word End_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_13;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_13, STATE_VARIABLE_Curr_0_14, End_10);
    switch (Res_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_19_19;
          MR_Box STATE_VARIABLE_Acc2_20_20;
          MR_Word Var_21;
          MR_Word STATE_VARIABLE_Curr_22_22;
          MR_Integer Var_23;
          MR_Integer Var_24;
          MR_Integer Var_25;
          MR_Integer Var_26;
          MR_Integer Var_27;
          MR_Integer Var_28;
          MR_Integer Var_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          succeeded = func_0(((MR_Box) Pred_8), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          if (succeeded)
          {
            Var_23 = (MR_Integer) 0;
            Var_24 = (MR_Integer) 0;
            Var_25 = (MR_Integer) 1;
            Var_26 = (MR_Integer) 0;
            Var_27 = (MR_Integer) 0;
            Var_28 = (MR_Integer) 0;
            Var_29 = (MR_Integer) 0;
            Var_21 = mercury__calendar__init_duration_7_f_0(Var_23, Var_24, Var_25, Var_26, Var_27, Var_28, Var_29);
            mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_14 = STATE_VARIABLE_Curr_22_22;
            next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_19_19;
            next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_20_20;
            STATE_VARIABLE_Curr_0_14 = next_value_of_STATE_VARIABLE_Curr_0_14;
            STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
            STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
          *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl2_days_7_p_3(
  MR_Word TypeInfo_for_A_34,
  MR_Word TypeInfo_for_B_35,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Curr_0_14,
  MR_Word End_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_13;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_13, STATE_VARIABLE_Curr_0_14, End_10);
    switch (Res_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_19_19;
          MR_Box STATE_VARIABLE_Acc2_20_20;
          MR_Word Var_21;
          MR_Word STATE_VARIABLE_Curr_22_22;
          MR_Integer Var_23;
          MR_Integer Var_24;
          MR_Integer Var_25;
          MR_Integer Var_26;
          MR_Integer Var_27;
          MR_Integer Var_28;
          MR_Integer Var_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          succeeded = func_0(((MR_Box) Pred_8), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          if (succeeded)
          {
            Var_23 = (MR_Integer) 0;
            Var_24 = (MR_Integer) 0;
            Var_25 = (MR_Integer) 1;
            Var_26 = (MR_Integer) 0;
            Var_27 = (MR_Integer) 0;
            Var_28 = (MR_Integer) 0;
            Var_29 = (MR_Integer) 0;
            Var_21 = mercury__calendar__init_duration_7_f_0(Var_23, Var_24, Var_25, Var_26, Var_27, Var_28, Var_29);
            mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_14 = STATE_VARIABLE_Curr_22_22;
            next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_19_19;
            next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_20_20;
            STATE_VARIABLE_Curr_0_14 = next_value_of_STATE_VARIABLE_Curr_0_14;
            STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
            STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
          *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl2_days_7_p_2(
  MR_Word TypeInfo_for_A_34,
  MR_Word TypeInfo_for_B_35,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Curr_0_14,
  MR_Word End_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_Word Res_13;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_13, STATE_VARIABLE_Curr_0_14, End_10);
    switch (Res_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_19_19;
          MR_Box STATE_VARIABLE_Acc2_20_20;
          MR_Word Var_21;
          MR_Word STATE_VARIABLE_Curr_22_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          func_0(((MR_Box) Pred_8), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_14 = STATE_VARIABLE_Curr_22_22;
          next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_19_19;
          next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_20_20;
          STATE_VARIABLE_Curr_0_14 = next_value_of_STATE_VARIABLE_Curr_0_14;
          STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
          STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
          *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl2_days_7_p_1(
  MR_Word TypeInfo_for_A_34,
  MR_Word TypeInfo_for_B_35,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Curr_0_14,
  MR_Word End_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_Word Res_13;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_13, STATE_VARIABLE_Curr_0_14, End_10);
    switch (Res_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_19_19;
          MR_Box STATE_VARIABLE_Acc2_20_20;
          MR_Word Var_21;
          MR_Word STATE_VARIABLE_Curr_22_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          func_0(((MR_Box) Pred_8), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_14 = STATE_VARIABLE_Curr_22_22;
          next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_19_19;
          next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_20_20;
          STATE_VARIABLE_Curr_0_14 = next_value_of_STATE_VARIABLE_Curr_0_14;
          STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
          STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
          *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl2_days_7_p_0(
  MR_Word TypeInfo_for_A_34,
  MR_Word TypeInfo_for_B_35,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Curr_0_14,
  MR_Word End_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_Word Res_13;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_13, STATE_VARIABLE_Curr_0_14, End_10);
    switch (Res_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc1_19_19;
          MR_Box STATE_VARIABLE_Acc2_20_20;
          MR_Word Var_21;
          MR_Word STATE_VARIABLE_Curr_22_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          func_0(((MR_Box) Pred_8), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_14 = STATE_VARIABLE_Curr_22_22;
          next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_19_19;
          next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_20_20;
          STATE_VARIABLE_Curr_0_14 = next_value_of_STATE_VARIABLE_Curr_0_14;
          STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
          STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
          *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_5(
  MR_Word TypeInfo_for_A_27,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_10;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          MR_Integer Var_17;
          MR_Integer Var_18;
          MR_Integer Var_19;
          MR_Integer Var_20;
          MR_Integer Var_21;
          MR_Integer Var_22;
          MR_Integer Var_23;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          succeeded = func_0(((MR_Box) Pred_6), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          if (succeeded)
          {
            Var_17 = (MR_Integer) 0;
            Var_18 = (MR_Integer) 0;
            Var_19 = (MR_Integer) 1;
            Var_20 = (MR_Integer) 0;
            Var_21 = (MR_Integer) 0;
            Var_22 = (MR_Integer) 0;
            Var_23 = (MR_Integer) 0;
            Var_15 = mercury__calendar__init_duration_7_f_0(Var_17, Var_18, Var_19, Var_20, Var_21, Var_22, Var_23);
            mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_11 = STATE_VARIABLE_Curr_16_16;
            next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_14_14;
            STATE_VARIABLE_Curr_0_11 = next_value_of_STATE_VARIABLE_Curr_0_11;
            STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_4(
  MR_Word TypeInfo_for_A_27,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_10;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          MR_Integer Var_17;
          MR_Integer Var_18;
          MR_Integer Var_19;
          MR_Integer Var_20;
          MR_Integer Var_21;
          MR_Integer Var_22;
          MR_Integer Var_23;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          succeeded = func_0(((MR_Box) Pred_6), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          if (succeeded)
          {
            Var_17 = (MR_Integer) 0;
            Var_18 = (MR_Integer) 0;
            Var_19 = (MR_Integer) 1;
            Var_20 = (MR_Integer) 0;
            Var_21 = (MR_Integer) 0;
            Var_22 = (MR_Integer) 0;
            Var_23 = (MR_Integer) 0;
            Var_15 = mercury__calendar__init_duration_7_f_0(Var_17, Var_18, Var_19, Var_20, Var_21, Var_22, Var_23);
            mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_11 = STATE_VARIABLE_Curr_16_16;
            next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_14_14;
            STATE_VARIABLE_Curr_0_11 = next_value_of_STATE_VARIABLE_Curr_0_11;
            STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__calendar__foldl_days_5_p_3(
  MR_Word TypeInfo_for_A_27,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_10;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          MR_Integer Var_17;
          MR_Integer Var_18;
          MR_Integer Var_19;
          MR_Integer Var_20;
          MR_Integer Var_21;
          MR_Integer Var_22;
          MR_Integer Var_23;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          succeeded = func_0(((MR_Box) Pred_6), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          if (succeeded)
          {
            Var_17 = (MR_Integer) 0;
            Var_18 = (MR_Integer) 0;
            Var_19 = (MR_Integer) 1;
            Var_20 = (MR_Integer) 0;
            Var_21 = (MR_Integer) 0;
            Var_22 = (MR_Integer) 0;
            Var_23 = (MR_Integer) 0;
            Var_15 = mercury__calendar__init_duration_7_f_0(Var_17, Var_18, Var_19, Var_20, Var_21, Var_22, Var_23);
            mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
            /* direct tailcall eliminated */
            next_value_of_STATE_VARIABLE_Curr_0_11 = STATE_VARIABLE_Curr_16_16;
            next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_14_14;
            STATE_VARIABLE_Curr_0_11 = next_value_of_STATE_VARIABLE_Curr_0_11;
            STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl_days_5_p_2(
  MR_Word TypeInfo_for_A_27,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_Word Res_10;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          func_0(((MR_Box) Pred_6), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_11 = STATE_VARIABLE_Curr_16_16;
          next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_14_14;
          STATE_VARIABLE_Curr_0_11 = next_value_of_STATE_VARIABLE_Curr_0_11;
          STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl_days_5_p_1(
  MR_Word TypeInfo_for_A_27,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_Word Res_10;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          func_0(((MR_Box) Pred_6), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_11 = STATE_VARIABLE_Curr_16_16;
          next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_14_14;
          STATE_VARIABLE_Curr_0_11 = next_value_of_STATE_VARIABLE_Curr_0_11;
          STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__foldl_days_5_p_0(
  MR_Word TypeInfo_for_A_27,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_Word Res_10;

    /* setup for tailcalls optimized into a loop */
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1)));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          func_0(((MR_Box) Pred_6), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
          /* direct tailcall eliminated */
          next_value_of_STATE_VARIABLE_Curr_0_11 = STATE_VARIABLE_Curr_16_16;
          next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_14_14;
          STATE_VARIABLE_Curr_0_11 = next_value_of_STATE_VARIABLE_Curr_0_11;
          STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__calendar__day_duration_2_f_0(
  MR_Word DateA_4,
  MR_Word DateB_5)
{
  {
    MR_Word Duration_6;
    MR_Word CompResult_7;

    mercury__calendar____Compare____date_0_0(&CompResult_7, DateB_5, DateA_4);
    switch (CompResult_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Duration0_8;
          MR_Integer Months_88;
          MR_Integer Days_89;
          MR_Integer Seconds_90;
          MR_Integer MicroSeconds_91;
          MR_Integer Var_92;
          MR_Integer Var_93;
          MR_Integer Var_94;
          MR_Integer Var_95;

          Duration0_8 = mercury__calendar__day_duration_2_f_0(DateB_5, DateA_4);
          Months_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration0_8, (MR_Integer) 0)));
          Days_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration0_8, (MR_Integer) 1)));
          Seconds_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration0_8, (MR_Integer) 2)));
          MicroSeconds_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration0_8, (MR_Integer) 3)));
          Var_92 = ((MR_Integer) 0 - Months_88);
          Var_93 = ((MR_Integer) 0 - Days_89);
          Var_94 = ((MR_Integer) 0 - Seconds_90);
          Var_95 = ((MR_Integer) 0 - MicroSeconds_91);
          {
            Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Duration_6, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(0), Duration_6, 1) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(0), Duration_6, 2) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(0), Duration_6, 3) = ((MR_Box) (Var_95));
          }
        }
        break;
      case (MR_Integer) 0:
        Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
        break;
      case (MR_Integer) 2:
        {
          MR_Integer MicroSecond1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 6)));
          MR_Integer MicroSecond2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 6)));
          MR_Integer MicroSeconds_12;
          MR_Integer Second1_13;
          MR_Integer Second2_14;
          MR_Integer Seconds_15;
          MR_Integer Minute1_16;
          MR_Integer Minute2_17;
          MR_Integer Minutes_18;
          MR_Integer Hour1_19;
          MR_Integer Hour2_20;
          MR_Integer Hours_21;
          MR_Integer JDN1_22;
          MR_Integer JDN2_23;
          MR_Integer Days_24;
          MR_Integer STATE_VARIABLE_Borrow_26_26;
          MR_Integer Var_27;
          MR_Integer STATE_VARIABLE_Borrow_29_29;
          MR_Integer Var_30;
          MR_Integer STATE_VARIABLE_Borrow_32_32;
          MR_Integer Var_33;
          MR_Integer STATE_VARIABLE_Borrow_35_35;
          MR_Integer Var_36;
          MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 0)));
          MR_Integer Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 1)));
          MR_Integer Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 2)));
          MR_Integer Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 3)));
          MR_Integer Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 4)));
          MR_Integer Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 5)));
          MR_Integer Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 0)));
          MR_Integer Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 1)));
          MR_Integer Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 2)));
          MR_Integer Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 3)));
          MR_Integer Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 4)));
          MR_Integer Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 5)));
          MR_Integer Var_51;
          MR_Integer Var_52;
          MR_Integer Var_53;
          MR_Integer Var_54;
          MR_Integer Var_55;
          MR_Integer Var_56;
          MR_Integer Var_57;
          MR_Integer Var_58;
          MR_Integer Var_59;
          MR_Integer Var_60;
          MR_Integer Var_61;
          MR_Integer Var_62;
          MR_Integer Var_63;
          MR_Integer Var_64;
          MR_Integer Var_65;
          MR_Integer Var_66;
          MR_Integer Var_67;
          MR_Integer Var_68;
          MR_Integer Var_69;
          MR_Integer Var_70;
          MR_Integer Var_71;
          MR_Integer Var_72;
          MR_Integer Var_73;
          MR_Integer Var_74;
          MR_Integer Var_75;
          MR_Integer Var_76;
          MR_Integer Var_77;
          MR_Integer Var_78;
          MR_Integer Var_79;
          MR_Integer Var_80;
          MR_Integer Var_81;
          MR_Integer Var_82;
          MR_Integer Var_83;
          MR_Integer Var_84;
          MR_Integer Var_85;
          MR_Integer Var_86;

          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 1000000, MicroSecond1_10, MicroSecond2_11, &MicroSeconds_12, &STATE_VARIABLE_Borrow_26_26);
          Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 0)));
          Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 1)));
          Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 2)));
          Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 3)));
          Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 4)));
          Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 5)));
          Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 6)));
          Second1_13 = (Var_27 - STATE_VARIABLE_Borrow_26_26);
          Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 0)));
          Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 1)));
          Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 2)));
          Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 3)));
          Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 4)));
          Second2_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 5)));
          Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 6)));
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, Second1_13, Second2_14, &Seconds_15, &STATE_VARIABLE_Borrow_29_29);
          Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 0)));
          Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 1)));
          Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 2)));
          Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 3)));
          Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 4)));
          Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 5)));
          Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 6)));
          Minute1_16 = (Var_30 - STATE_VARIABLE_Borrow_29_29);
          Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 0)));
          Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 1)));
          Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 2)));
          Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 3)));
          Minute2_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 4)));
          Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 5)));
          Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 6)));
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, Minute1_16, Minute2_17, &Minutes_18, &STATE_VARIABLE_Borrow_32_32);
          Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 0)));
          Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 1)));
          Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 2)));
          Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 3)));
          Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 4)));
          Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 5)));
          Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_5, (MR_Integer) 6)));
          Hour1_19 = (Var_33 - STATE_VARIABLE_Borrow_32_32);
          Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 0)));
          Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 1)));
          Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 2)));
          Hour2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 3)));
          Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 4)));
          Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 5)));
          Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_4, (MR_Integer) 6)));
          mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, Hour1_19, Hour2_20, &Hours_21, &STATE_VARIABLE_Borrow_35_35);
          JDN1_22 = mercury__calendar__julian_day_number_1_f_0(DateB_5);
          JDN2_23 = mercury__calendar__julian_day_number_1_f_0(DateA_4);
          Var_36 = (JDN1_22 - STATE_VARIABLE_Borrow_35_35);
          Days_24 = (Var_36 - JDN2_23);
          Duration_6 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, Days_24, Hours_21, Minutes_18, Seconds_15, MicroSeconds_12);
        }
        break;
    }
    return Duration_6;
  }
}

void MR_CALL 
mercury__calendar__local_time_offset_3_p_0(
  MR_Word * TZ_4)
{
  {
    MR_Word TimeT_6;
    MR_Word LocalTM_7;
    MR_Word LocalTime_9;
    MR_Word GMTime_10;
    MR_Box V_3_16;
    MR_Integer V_13_25;
    MR_Integer TMYear_29;
    MR_Integer TMMonth_30;
    MR_Integer Year_38;
    MR_Integer Month_39;
    MR_Integer Day_40;
    MR_Integer Hour_41;
    MR_Integer Minute_42;
    MR_Integer Second_43;
    MR_Integer TMYear_49;
    MR_Integer TMMonth_50;
    MR_Integer Year_58;
    MR_Integer Month_59;
    MR_Integer Day_60;
    MR_Integer Hour_61;
    MR_Integer Minute_62;
    MR_Integer Second_63;
    MR_Integer V_11_23;
    MR_Integer V_12_24;
    MR_Word V_14_26;
    MR_Integer Var_35;
    MR_Integer Var_36;
    MR_Word Var_37;

    mercury__time__time_3_p_0(&TimeT_6);
    mercury__time__localtime_4_p_0(TimeT_6, &LocalTM_7);
    V_3_16 = (MR_Box) TimeT_6;
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

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, V_3_16 , Time);
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
	 TMYear_49  = Yr;
	 TMMonth_50  = Mnt;
	 Day_60  = MD;
	 Hour_61  = Hrs;
	 Minute_62  = Min;
	 Second_63  = Sec;
	 V_11_23  = YD;
	 V_12_24  = WD;
	 V_13_25  = N;
}
    V_14_26 = mercury__time__int_to_maybe_dst_1_f_0(V_13_25);
    TMYear_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 0)));
    TMMonth_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 1)));
    Day_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 2)));
    Hour_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 3)));
    Minute_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 4)));
    Second_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 5)));
    Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 6)));
    Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 7)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalTM_7, (MR_Integer) 8)));
    Year_38 = ((MR_Integer) 1900 + TMYear_29);
    Month_39 = (TMMonth_30 + (MR_Integer) 1);
    {
      LocalTime_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LocalTime_9, 0) = ((MR_Box) (Year_38));
      MR_hl_field(MR_mktag(0), LocalTime_9, 1) = ((MR_Box) (Month_39));
      MR_hl_field(MR_mktag(0), LocalTime_9, 2) = ((MR_Box) (Day_40));
      MR_hl_field(MR_mktag(0), LocalTime_9, 3) = ((MR_Box) (Hour_41));
      MR_hl_field(MR_mktag(0), LocalTime_9, 4) = ((MR_Box) (Minute_42));
      MR_hl_field(MR_mktag(0), LocalTime_9, 5) = ((MR_Box) (Second_43));
      MR_hl_field(MR_mktag(0), LocalTime_9, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    Year_58 = ((MR_Integer) 1900 + TMYear_49);
    Month_59 = (TMMonth_50 + (MR_Integer) 1);
    {
      GMTime_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GMTime_10, 0) = ((MR_Box) (Year_58));
      MR_hl_field(MR_mktag(0), GMTime_10, 1) = ((MR_Box) (Month_59));
      MR_hl_field(MR_mktag(0), GMTime_10, 2) = ((MR_Box) (Day_60));
      MR_hl_field(MR_mktag(0), GMTime_10, 3) = ((MR_Box) (Hour_61));
      MR_hl_field(MR_mktag(0), GMTime_10, 4) = ((MR_Box) (Minute_62));
      MR_hl_field(MR_mktag(0), GMTime_10, 5) = ((MR_Box) (Second_63));
      MR_hl_field(MR_mktag(0), GMTime_10, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    *TZ_4 = mercury__calendar__duration_2_f_0(GMTime_10, LocalTime_9);
  }
}

MR_Word MR_CALL 
mercury__calendar__duration_2_f_0(
  MR_Word DateA_4,
  MR_Word DateB_5)
{
  {
    MR_Word Duration_6;
    MR_Word CompResult_7;

    mercury__calendar____Compare____date_0_0(&CompResult_7, DateB_5, DateA_4);
    switch (CompResult_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Duration0_8;
          MR_Integer Months_12;
          MR_Integer Days_13;
          MR_Integer Seconds_14;
          MR_Integer MicroSeconds_15;
          MR_Integer Var_16;
          MR_Integer Var_17;
          MR_Integer Var_18;
          MR_Integer Var_19;

          mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 0, DateA_4, DateB_5, &Duration0_8);
          Months_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration0_8, (MR_Integer) 0)));
          Days_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration0_8, (MR_Integer) 1)));
          Seconds_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration0_8, (MR_Integer) 2)));
          MicroSeconds_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration0_8, (MR_Integer) 3)));
          Var_16 = ((MR_Integer) 0 - Months_12);
          Var_17 = ((MR_Integer) 0 - Days_13);
          Var_18 = ((MR_Integer) 0 - Seconds_14);
          Var_19 = ((MR_Integer) 0 - MicroSeconds_15);
          {
            Duration_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Duration_6, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(0), Duration_6, 1) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Duration_6, 2) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(0), Duration_6, 3) = ((MR_Box) (Var_19));
          }
        }
        break;
      case (MR_Integer) 0:
        Duration_6 = (MR_Word) &mercury__calendar_scalar_common_3[1];
        break;
      case (MR_Integer) 2:
        {
          mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 1, DateB_5, DateA_4, &Duration_6);
        }
        break;
    }
    return Duration_6;
  }
}

static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
  MR_Word OriginalOrder_5,
  MR_Word DateA_6,
  MR_Word DateB_7,
  MR_Word * Duration_8)
{
  {
    MR_bool succeeded;
    MR_Integer MicroSecondA_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
    MR_Integer MicroSecondB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
    MR_Integer MicroSeconds_12;
    MR_Integer SecondA_13;
    MR_Integer SecondB_14;
    MR_Integer Seconds_15;
    MR_Integer MinuteA_16;
    MR_Integer MinuteB_17;
    MR_Integer Minutes_18;
    MR_Integer HourA_19;
    MR_Integer HourB_20;
    MR_Integer Hours_21;
    MR_Integer DaysToBorrow_23;
    MR_Integer DayA_25;
    MR_Integer DayB_26;
    MR_Integer Days_28;
    MR_Integer MonthA_29;
    MR_Integer MonthB_30;
    MR_Integer Months_31;
    MR_Integer YearA_32;
    MR_Integer YearB_33;
    MR_Integer Years_34;
    MR_Integer Var_35;
    MR_Integer STATE_VARIABLE_Borrow_36_36;
    MR_Integer Var_37;
    MR_Integer STATE_VARIABLE_Borrow_39_39;
    MR_Integer Var_40;
    MR_Integer STATE_VARIABLE_Borrow_42_42;
    MR_Integer Var_43;
    MR_Integer STATE_VARIABLE_Borrow_45_45;
    MR_Integer STATE_VARIABLE_Borrow_63_63;
    MR_Integer Var_64;
    MR_Integer STATE_VARIABLE_Borrow_66_66;
    MR_Integer Var_67;
    MR_Integer Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
    MR_Integer Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
    MR_Integer Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
    MR_Integer Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
    MR_Integer Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
    MR_Integer Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
    MR_Integer Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
    MR_Integer Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
    MR_Integer Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
    MR_Integer Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
    MR_Integer Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
    MR_Integer Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
    MR_Integer Var_82;
    MR_Integer Var_83;
    MR_Integer Var_84;
    MR_Integer Var_85;
    MR_Integer Var_86;
    MR_Integer Var_87;
    MR_Integer Var_88;
    MR_Integer Var_89;
    MR_Integer Var_90;
    MR_Integer Var_91;
    MR_Integer Var_92;
    MR_Integer Var_93;
    MR_Integer Var_94;
    MR_Integer Var_95;
    MR_Integer Var_96;
    MR_Integer Var_97;
    MR_Integer Var_98;
    MR_Integer Var_99;
    MR_Integer Var_100;
    MR_Integer Var_101;
    MR_Integer Var_102;
    MR_Integer Var_103;
    MR_Integer Var_104;
    MR_Integer Var_105;
    MR_Integer Var_106;
    MR_Integer Var_107;
    MR_Integer Var_108;
    MR_Integer Var_109;
    MR_Integer Var_110;
    MR_Integer Var_111;
    MR_Integer Var_112;
    MR_Integer Var_113;
    MR_Integer Var_114;
    MR_Integer Var_115;
    MR_Integer Var_116;
    MR_Integer Var_117;
    MR_Integer Var_190;
    MR_Integer Var_191;
    MR_Integer Var_192;
    MR_Integer Var_193;
    MR_Integer Var_194;
    MR_Integer Var_195;
    MR_Integer Var_196;
    MR_Integer Var_197;
    MR_Integer Var_198;
    MR_Integer Var_199;
    MR_Integer Var_200;
    MR_Integer Var_201;
    MR_Integer Var_202;
    MR_Integer Var_203;
    MR_Integer Var_204;
    MR_Integer Var_205;
    MR_Integer Var_206;
    MR_Integer Var_207;
    MR_Integer Var_208;
    MR_Integer Var_209;
    MR_Integer Var_210;
    MR_Integer Var_211;
    MR_Integer Var_212;
    MR_Integer Var_213;

    Var_35 = mercury__calendar__microseconds_per_second_0_f_0();
    mercury__calendar__subtract_ints_with_borrow_5_p_0(Var_35, MicroSecondA_10, MicroSecondB_11, &MicroSeconds_12, &STATE_VARIABLE_Borrow_36_36);
    Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
    Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
    Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
    Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
    Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
    Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
    Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
    SecondA_13 = (Var_37 - STATE_VARIABLE_Borrow_36_36);
    Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
    Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
    Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
    Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
    Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
    SecondB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
    Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
    mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, SecondA_13, SecondB_14, &Seconds_15, &STATE_VARIABLE_Borrow_39_39);
    Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
    Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
    Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
    Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
    Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
    Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
    Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
    MinuteA_16 = (Var_40 - STATE_VARIABLE_Borrow_39_39);
    Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
    Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
    Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
    Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
    MinuteB_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
    Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
    Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
    mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, MinuteA_16, MinuteB_17, &Minutes_18, &STATE_VARIABLE_Borrow_42_42);
    Var_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
    Var_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
    Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
    Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
    Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
    Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
    Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
    HourA_19 = (Var_43 - STATE_VARIABLE_Borrow_42_42);
    Var_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
    Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
    Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
    HourB_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
    Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
    Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
    Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
    mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, HourA_19, HourB_20, &Hours_21, &STATE_VARIABLE_Borrow_45_45);
    switch (OriginalOrder_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer DateBEndOfMonth_27;
          MR_Integer Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
          MR_Integer Var_48;
          MR_Integer Var_50;
          MR_Integer Var_51;
          MR_Integer Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
          MR_Integer Var_166;
          MR_Integer Var_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
          MR_Integer Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
          MR_Integer Var_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
          MR_Integer Var_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
          MR_Integer Var_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
          MR_Integer Var_167;
          MR_Integer Var_168;
          MR_Integer Var_169;
          MR_Integer Var_170;
          MR_Integer Var_171;
          MR_Integer Var_178;
          MR_Integer Var_179;
          MR_Integer Var_180;
          MR_Integer Var_181;
          MR_Integer Var_182;
          MR_Integer Var_183;
          MR_Integer Var_184;
          MR_Integer Var_185;
          MR_Integer Var_186;
          MR_Integer Var_187;
          MR_Integer Var_188;
          MR_Integer Var_189;

          DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(Var_46, Var_154);
          Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
          Var_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
          Var_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
          Var_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
          Var_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
          Var_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
          Var_171 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
          DateBEndOfMonth_27 = mercury__calendar__max_day_in_month_for_2_f_0(Var_48, Var_166);
          Var_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
          Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
          Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
          Var_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
          Var_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
          Var_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
          Var_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
          Var_50 = (Var_51 - STATE_VARIABLE_Borrow_45_45);
          DayA_25 = mercury__int__min_2_f_0(Var_50, DateBEndOfMonth_27);
          Var_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
          Var_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
          DayB_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
          Var_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
          Var_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
          Var_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
          Var_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DateAMinus1Month_22;
          MR_Integer DateAEndOfMonth_24;
          MR_Word Var_52 = (MR_Word) &mercury__calendar_scalar_common_3[2];
          MR_Integer Var_57;
          MR_Integer Var_59;
          MR_Integer Var_61;
          MR_Integer Var_62;
          MR_Integer Var_118;
          MR_Integer Var_130;
          MR_Integer Var_119;
          MR_Integer Var_120;
          MR_Integer Var_121;
          MR_Integer Var_122;
          MR_Integer Var_123;
          MR_Integer Var_131;
          MR_Integer Var_132;
          MR_Integer Var_133;
          MR_Integer Var_134;
          MR_Integer Var_135;
          MR_Integer Var_142;
          MR_Integer Var_143;
          MR_Integer Var_144;
          MR_Integer Var_145;
          MR_Integer Var_146;
          MR_Integer Var_147;
          MR_Integer Var_148;
          MR_Integer Var_149;
          MR_Integer Var_150;
          MR_Integer Var_151;
          MR_Integer Var_152;
          MR_Integer Var_153;

          mercury__calendar__add_duration_3_p_0(Var_52, DateA_6, &DateAMinus1Month_22);
          Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateAMinus1Month_22, (MR_Integer) 0)));
          Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateAMinus1Month_22, (MR_Integer) 1)));
          Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateAMinus1Month_22, (MR_Integer) 2)));
          Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateAMinus1Month_22, (MR_Integer) 3)));
          Var_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateAMinus1Month_22, (MR_Integer) 4)));
          Var_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateAMinus1Month_22, (MR_Integer) 5)));
          Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateAMinus1Month_22, (MR_Integer) 6)));
          DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(Var_57, Var_118);
          Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
          Var_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
          Var_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
          Var_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
          Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
          Var_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
          Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
          DateAEndOfMonth_24 = mercury__calendar__max_day_in_month_for_2_f_0(Var_59, Var_130);
          Var_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
          Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
          Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
          Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
          Var_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
          Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
          Var_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
          DayA_25 = (Var_61 - STATE_VARIABLE_Borrow_45_45);
          Var_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
          Var_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
          Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
          Var_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
          Var_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
          Var_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
          Var_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
          DayB_26 = mercury__int__min_2_f_0(Var_62, DateAEndOfMonth_24);
        }
        break;
    }
    mercury__calendar__subtract_ints_with_borrow_5_p_0(DaysToBorrow_23, DayA_25, DayB_26, &Days_28, &STATE_VARIABLE_Borrow_63_63);
    Var_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
    Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
    Var_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
    Var_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
    Var_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
    Var_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
    Var_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
    MonthA_29 = (Var_64 - STATE_VARIABLE_Borrow_63_63);
    Var_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
    MonthB_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
    Var_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
    Var_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
    Var_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
    Var_200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
    Var_201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
    mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 12, MonthA_29, MonthB_30, &Months_31, &STATE_VARIABLE_Borrow_66_66);
    Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 0)));
    Var_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 1)));
    Var_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 2)));
    Var_204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 3)));
    Var_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 4)));
    Var_206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 5)));
    Var_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateA_6, (MR_Integer) 6)));
    YearA_32 = (Var_67 - STATE_VARIABLE_Borrow_66_66);
    YearB_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 0)));
    Var_208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 1)));
    Var_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 2)));
    Var_210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 3)));
    Var_211 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 4)));
    Var_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 5)));
    Var_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DateB_7, (MR_Integer) 6)));
    succeeded = (YearA_32 >= YearB_33);
    if (succeeded)
      Years_34 = (YearA_32 - YearB_33);
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140calendar.greedy_subtract_descending\'/4", (MR_String) "left over years");
        return;
      }
    }
    *Duration_8 = mercury__calendar__init_duration_7_f_0(Years_34, Months_31, Days_28, Hours_21, Minutes_18, Seconds_15, MicroSeconds_12);
  }
}

static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
  MR_Integer BorrowVal_6,
  MR_Integer Val1_7,
  MR_Integer Val2_8,
  MR_Integer * Diff_9,
  MR_Integer * Borrow_10)
{
  {
    MR_bool succeeded = (Val1_7 >= Val2_8);

    if (succeeded)
    {
      *Borrow_10 = (MR_Integer) 0;
      *Diff_9 = (Val1_7 - Val2_8);
    }
    else
    {
      MR_Integer Var_11;

      *Borrow_10 = (MR_Integer) 1;
      Var_11 = (BorrowVal_6 + Val1_7);
      *Diff_9 = (Var_11 - Val2_8);
    }
  }
}

MR_bool MR_CALL 
mercury__calendar__duration_leq_2_p_0(
  MR_Word DurA_3,
  MR_Word DurB_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_1[4]);

    succeeded = mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(DurA_3, DurB_4, Var_10);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_54_95_95_91_51_93_95_48_2_p_in__list_0(
  MR_Word Var_8,
  MR_Word Var_9,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word DateA_13;
      MR_Word DateB_14;
      MR_Word CompRes_15;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__calendar__add_duration_3_p_0(Var_8, V_5_5, &DateA_13);
      mercury__calendar__add_duration_3_p_0(Var_9, V_5_5, &DateB_14);
      mercury__calendar____Compare____date_0_0(&CompRes_15, DateA_13, DateB_14);
      switch (CompRes_15) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        /* direct tailcall eliminated */
        next_value_of_HeadVar__2_2 = V_6_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__calendar____Compare____date_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Integer ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        Var_18 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          Var_18 = (MR_Integer) 0;
        else
          Var_18 = (MR_Integer) 2;
      }
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        succeeded = (ArgX2_6 < ArgY2_7);
        if (succeeded)
          Var_19 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_6 == ArgY2_7);
          if (succeeded)
            Var_19 = (MR_Integer) 0;
          else
            Var_19 = (MR_Integer) 2;
        }
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          succeeded = (ArgX3_8 < ArgY3_9);
          if (succeeded)
            Var_20 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_8 == ArgY3_9);
            if (succeeded)
              Var_20 = (MR_Integer) 0;
            else
              Var_20 = (MR_Integer) 2;
          }
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            succeeded = (ArgX4_10 < ArgY4_11);
            if (succeeded)
              Var_21 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX4_10 == ArgY4_11);
              if (succeeded)
                Var_21 = (MR_Integer) 0;
              else
                Var_21 = (MR_Integer) 2;
            }
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              succeeded = (ArgX5_12 < ArgY5_13);
              if (succeeded)
                Var_22 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX5_12 == ArgY5_13);
                if (succeeded)
                  Var_22 = (MR_Integer) 0;
                else
                  Var_22 = (MR_Integer) 2;
              }
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                succeeded = (ArgX6_14 < ArgY6_15);
                if (succeeded)
                  Var_23 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX6_14 == ArgY6_15);
                  if (succeeded)
                    Var_23 = (MR_Integer) 0;
                  else
                    Var_23 = (MR_Integer) 2;
                }
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  succeeded = (ArgX7_16 < ArgY7_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX7_16 == ArgY7_17);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
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
  MR_Word D_4,
  MR_Word S_5,
  MR_Word * E_6)
{
  {
    MR_bool succeeded;
    MR_Integer MaxDaysInMonth_9;
    MR_Integer TempDays_10;
    MR_Word STATE_VARIABLE_E_11_11 = (MR_Word) &mercury__calendar_scalar_common_5[1];
    MR_Integer STATE_VARIABLE_Temp_19_19;
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 1)));
    MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 0)));
    MR_Word STATE_VARIABLE_E_22_22;
    MR_Integer Var_23;
    MR_Integer STATE_VARIABLE_Carry_26_26;
    MR_Word STATE_VARIABLE_E_29_29;
    MR_Integer Var_30;
    MR_Integer Var_31;
    MR_Integer STATE_VARIABLE_Temp_32_32;
    MR_Integer Var_34;
    MR_Word STATE_VARIABLE_E_35_35;
    MR_Integer Var_36;
    MR_Integer Var_37;
    MR_Integer STATE_VARIABLE_Carry_38_38;
    MR_Integer Var_39;
    MR_Integer STATE_VARIABLE_Temp_40_40;
    MR_Integer Var_41;
    MR_Integer Var_42;
    MR_Integer Var_43;
    MR_Word STATE_VARIABLE_E_44_44;
    MR_Integer Var_45;
    MR_Integer STATE_VARIABLE_Carry_47_47;
    MR_Integer STATE_VARIABLE_Temp_49_49;
    MR_Integer Var_50;
    MR_Word STATE_VARIABLE_E_51_51;
    MR_Integer Var_52;
    MR_Integer STATE_VARIABLE_Carry_54_54;
    MR_Integer STATE_VARIABLE_Temp_56_56;
    MR_Integer Var_57;
    MR_Word STATE_VARIABLE_E_58_58;
    MR_Integer Var_59;
    MR_Integer STATE_VARIABLE_Carry_61_61;
    MR_Integer Var_63;
    MR_Word STATE_VARIABLE_E_68_68;
    MR_Integer Var_69;
    MR_Integer Var_70;
    MR_Integer Var_71;
    MR_Integer Var_94;
    MR_Integer Var_160;
    MR_Integer Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 0)));
    MR_Integer Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 2)));
    MR_Integer Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 3)));
    MR_Integer Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 4)));
    MR_Integer Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 5)));
    MR_Integer Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 6)));
    MR_Integer Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 1)));
    MR_Integer Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 2)));
    MR_Integer Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 3)));
    MR_Integer Var_82;
    MR_Integer Var_84;
    MR_Integer Var_85;
    MR_Integer Var_86;
    MR_Integer Var_87;
    MR_Integer Var_88;
    MR_Integer Var_83;
    MR_Integer Var_89;
    MR_Integer Var_90;
    MR_Integer Var_91;
    MR_Integer Var_92;
    MR_Integer Var_93;
    MR_Integer Var_96;
    MR_Integer Var_97;
    MR_Integer Var_98;
    MR_Integer Var_99;
    MR_Integer Var_100;
    MR_Integer Var_101;
    MR_Integer Var_95;
    MR_Integer Var_108;
    MR_Integer Var_109;
    MR_Integer Var_110;
    MR_Integer Var_111;
    MR_Integer Var_112;
    MR_Integer Var_113;
    MR_Integer Var_114;
    MR_Integer Var_115;
    MR_Integer Var_116;
    MR_Integer Var_117;
    MR_Integer Var_118;
    MR_Integer Var_119;
    MR_Integer Var_120;
    MR_Integer Var_121;
    MR_Integer Var_122;
    MR_Integer Var_123;
    MR_Integer Var_124;
    MR_Integer Var_125;
    MR_Integer Var_126;
    MR_Integer Var_127;
    MR_Integer Var_128;
    MR_Integer Var_129;
    MR_Integer Var_130;
    MR_Integer Var_131;
    MR_Integer Var_133;
    MR_Integer Var_132;
    MR_Integer Var_134;
    MR_Integer Var_135;
    MR_Integer Var_136;
    MR_Integer Var_137;
    MR_Integer Var_138;
    MR_Integer Var_139;
    MR_Integer Var_140;
    MR_Integer Var_141;
    MR_Integer Var_142;
    MR_Integer Var_143;
    MR_Integer Var_145;
    MR_Integer Var_146;
    MR_Integer Var_144;
    MR_Integer Var_147;
    MR_Integer Var_148;
    MR_Integer Var_149;
    MR_Integer Var_150;
    MR_Integer Var_151;
    MR_Integer Var_152;
    MR_Integer Var_153;
    MR_Integer Var_154;
    MR_Integer Var_155;
    MR_Integer Var_157;
    MR_Integer Var_158;
    MR_Integer Var_159;
    MR_Integer Var_156;
    MR_Integer Var_161;
    MR_Integer Var_162;
    MR_Integer Var_163;
    MR_Integer Var_164;
    MR_Integer Var_165;
    MR_Integer Var_65;
    MR_Integer Var_172;
    MR_Integer Var_173;
    MR_Integer Var_174;
    MR_Integer Var_175;
    MR_Integer Var_176;
    MR_Integer Var_177;
    MR_Integer Var_190;
    MR_Integer Var_191;
    MR_Integer Var_192;
    MR_Integer Var_193;
    MR_Integer Var_194;
    MR_Integer Var_196;
    MR_Integer Var_197;
    MR_Integer Var_198;
    MR_Integer Var_199;
    MR_Integer Var_195;

    STATE_VARIABLE_Temp_19_19 = (Var_20 + Var_21);
    Var_23 = mercury__calendar__modulo_3_f_0(STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_11_11, (MR_Integer) 0)));
    Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_11_11, (MR_Integer) 1)));
    Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_11_11, (MR_Integer) 2)));
    Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_11_11, (MR_Integer) 3)));
    Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_11_11, (MR_Integer) 4)));
    Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_11_11, (MR_Integer) 5)));
    Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_11_11, (MR_Integer) 6)));
    {
      STATE_VARIABLE_E_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, 0) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, 2) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, 3) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, 4) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, 5) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, 6) = ((MR_Box) (Var_88));
    }
    STATE_VARIABLE_Carry_26_26 = mercury__calendar__fquotient_3_f_0(STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
    Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 0)));
    Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 1)));
    Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 2)));
    Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 3)));
    Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 4)));
    Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 5)));
    Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 6)));
    Var_30 = (Var_31 + STATE_VARIABLE_Carry_26_26);
    Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, (MR_Integer) 0)));
    Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, (MR_Integer) 1)));
    Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, (MR_Integer) 2)));
    Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, (MR_Integer) 3)));
    Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, (MR_Integer) 4)));
    Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, (MR_Integer) 5)));
    Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_22_22, (MR_Integer) 6)));
    {
      STATE_VARIABLE_E_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, 1) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, 2) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, 3) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, 4) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, 5) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, 6) = ((MR_Box) (Var_101));
    }
    Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 0)));
    Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 1)));
    Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 2)));
    Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 3)));
    STATE_VARIABLE_Temp_32_32 = (Var_94 + Var_34);
    Var_37 = mercury__calendar__microseconds_per_second_0_f_0();
    Var_36 = mercury__calendar__modulo_2_f_0(STATE_VARIABLE_Temp_32_32, Var_37);
    Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, (MR_Integer) 0)));
    Var_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, (MR_Integer) 1)));
    Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, (MR_Integer) 2)));
    Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, (MR_Integer) 3)));
    Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, (MR_Integer) 4)));
    Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, (MR_Integer) 5)));
    Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_29_29, (MR_Integer) 6)));
    {
      STATE_VARIABLE_E_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, 0) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, 1) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, 2) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, 3) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, 4) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, 5) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, 6) = ((MR_Box) (Var_36));
    }
    Var_39 = mercury__calendar__microseconds_per_second_0_f_0();
    STATE_VARIABLE_Carry_38_38 = mercury__int__div_2_f_0(STATE_VARIABLE_Temp_32_32, Var_39);
    Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 0)));
    Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 1)));
    Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 2)));
    Var_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 3)));
    Var_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 4)));
    Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 5)));
    Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 6)));
    Var_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 0)));
    Var_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 1)));
    Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 2)));
    Var_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 3)));
    Var_41 = (Var_42 + Var_43);
    STATE_VARIABLE_Temp_40_40 = (Var_41 + STATE_VARIABLE_Carry_38_38);
    Var_45 = mercury__calendar__modulo_2_f_0(STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    Var_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, (MR_Integer) 0)));
    Var_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, (MR_Integer) 1)));
    Var_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, (MR_Integer) 2)));
    Var_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, (MR_Integer) 3)));
    Var_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, (MR_Integer) 4)));
    Var_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, (MR_Integer) 5)));
    Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_35_35, (MR_Integer) 6)));
    {
      STATE_VARIABLE_E_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, 0) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, 1) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, 2) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, 3) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, 4) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, 5) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, 6) = ((MR_Box) (Var_133));
    }
    STATE_VARIABLE_Carry_47_47 = mercury__int__div_2_f_0(STATE_VARIABLE_Temp_40_40, (MR_Integer) 60);
    Var_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 0)));
    Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 1)));
    Var_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 2)));
    Var_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 3)));
    Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 4)));
    Var_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 5)));
    Var_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 6)));
    STATE_VARIABLE_Temp_49_49 = (Var_50 + STATE_VARIABLE_Carry_47_47);
    Var_52 = mercury__int__mod_2_f_0(STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    Var_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, (MR_Integer) 0)));
    Var_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, (MR_Integer) 1)));
    Var_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, (MR_Integer) 2)));
    Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, (MR_Integer) 3)));
    Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, (MR_Integer) 4)));
    Var_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, (MR_Integer) 5)));
    Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_44_44, (MR_Integer) 6)));
    {
      STATE_VARIABLE_E_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, 0) = ((MR_Box) (Var_140));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, 1) = ((MR_Box) (Var_141));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, 2) = ((MR_Box) (Var_142));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, 3) = ((MR_Box) (Var_143));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, 4) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, 5) = ((MR_Box) (Var_145));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, 6) = ((MR_Box) (Var_146));
    }
    STATE_VARIABLE_Carry_54_54 = mercury__int__div_2_f_0(STATE_VARIABLE_Temp_49_49, (MR_Integer) 60);
    Var_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 0)));
    Var_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 1)));
    Var_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 2)));
    Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 3)));
    Var_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 4)));
    Var_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 5)));
    Var_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 6)));
    STATE_VARIABLE_Temp_56_56 = (Var_57 + STATE_VARIABLE_Carry_54_54);
    Var_59 = mercury__int__mod_2_f_0(STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    Var_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, (MR_Integer) 0)));
    Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, (MR_Integer) 1)));
    Var_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, (MR_Integer) 2)));
    Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, (MR_Integer) 3)));
    Var_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, (MR_Integer) 4)));
    Var_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, (MR_Integer) 5)));
    Var_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_51_51, (MR_Integer) 6)));
    {
      STATE_VARIABLE_E_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, 0) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, 1) = ((MR_Box) (Var_154));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, 2) = ((MR_Box) (Var_155));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, 3) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, 4) = ((MR_Box) (Var_157));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, 5) = ((MR_Box) (Var_158));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, 6) = ((MR_Box) (Var_159));
    }
    STATE_VARIABLE_Carry_61_61 = mercury__int__div_2_f_0(STATE_VARIABLE_Temp_56_56, (MR_Integer) 24);
    Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
    Var_160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
    Var_161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
    Var_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
    Var_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
    Var_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
    Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
    MaxDaysInMonth_9 = mercury__calendar__max_day_in_month_for_2_f_0(Var_63, Var_160);
    Var_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 0)));
    Var_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 1)));
    Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 2)));
    Var_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 3)));
    Var_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 4)));
    Var_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 5)));
    Var_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 6)));
    succeeded = (Var_65 > MaxDaysInMonth_9);
    if (succeeded)
      TempDays_10 = MaxDaysInMonth_9;
    else
    {
      MR_Integer Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 2)));
      MR_Integer Var_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 0)));
      MR_Integer Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 1)));
      MR_Integer Var_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 3)));
      MR_Integer Var_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 4)));
      MR_Integer Var_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 5)));
      MR_Integer Var_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 6)));

      succeeded = (Var_66 < (MR_Integer) 1);
      if (succeeded)
        TempDays_10 = (MR_Integer) 1;
      else
      {
        MR_Integer Var_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 0)));
        MR_Integer Var_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 1)));
        MR_Integer Var_186;
        MR_Integer Var_187;
        MR_Integer Var_188;
        MR_Integer Var_189;

        TempDays_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 2)));
        Var_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 3)));
        Var_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 4)));
        Var_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 5)));
        Var_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), S_5, (MR_Integer) 6)));
      }
    }
    Var_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 0)));
    Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 1)));
    Var_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 2)));
    Var_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), D_4, (MR_Integer) 3)));
    Var_70 = (TempDays_10 + Var_71);
    Var_69 = (Var_70 + STATE_VARIABLE_Carry_61_61);
    Var_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 0)));
    Var_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 1)));
    Var_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 2)));
    Var_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 3)));
    Var_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 4)));
    Var_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 5)));
    Var_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_58_58, (MR_Integer) 6)));
    {
      STATE_VARIABLE_E_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_68_68, 0) = ((MR_Box) (Var_193));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_68_68, 1) = ((MR_Box) (Var_194));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_68_68, 2) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_68_68, 3) = ((MR_Box) (Var_196));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_68_68, 4) = ((MR_Box) (Var_197));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_68_68, 5) = ((MR_Box) (Var_198));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_68_68, 6) = ((MR_Box) (Var_199));
    }
    mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(STATE_VARIABLE_E_68_68, E_6);
  }
}

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word STATE_VARIABLE_E_0_11,
  MR_Word * STATE_VARIABLE_E_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
    MR_Integer Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
    MR_Integer Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
    MR_Integer Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
    MR_Integer Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
    MR_Integer Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
    MR_Integer Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

    /* setup for tailcalls optimized into a loop */
    succeeded = (Var_13 < (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Temp_9;
      MR_Word STATE_VARIABLE_E_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_Integer Var_20 = (Var_58 - (MR_Integer) 1);
      MR_Word STATE_VARIABLE_E_24_24;
      MR_Integer Var_25;
      MR_Word STATE_VARIABLE_E_28_28;
      MR_Integer Var_29;
      MR_Integer Var_31;
      MR_Integer Var_82;
      MR_Integer Var_94;
      MR_Integer Var_81;
      MR_Integer Var_84;
      MR_Integer Var_85;
      MR_Integer Var_86;
      MR_Integer Var_87;
      MR_Integer Var_83;
      MR_Integer Var_96;
      MR_Integer Var_97;
      MR_Integer Var_98;
      MR_Integer Var_99;
      MR_Integer Var_100;
      MR_Integer Var_95;
      MR_Integer Var_108;
      MR_Integer Var_109;
      MR_Integer Var_110;
      MR_Integer Var_111;
      MR_Integer Var_112;
      MR_Integer Var_113;
      MR_Integer Var_107;
      MR_Word next_value_of_STATE_VARIABLE_E_0_11;

      Var_18 = mercury__calendar__max_day_in_month_for_2_f_0(Var_57, Var_20);
      Var_16 = (Var_13 + Var_18);
      Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
      Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
      Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
      Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
      Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
      Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
      Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
      {
        STATE_VARIABLE_E_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, 1) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, 2) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, 3) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, 4) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, 5) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, 6) = ((MR_Box) (Var_87));
      }
      Temp_9 = (Var_82 + (MR_Integer) -1);
      Var_25 = mercury__calendar__modulo_3_f_0(Temp_9, (MR_Integer) 1, (MR_Integer) 13);
      Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, (MR_Integer) 0)));
      Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, (MR_Integer) 1)));
      Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, (MR_Integer) 2)));
      Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, (MR_Integer) 3)));
      Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, (MR_Integer) 4)));
      Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, (MR_Integer) 5)));
      Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_15_15, (MR_Integer) 6)));
      {
        STATE_VARIABLE_E_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, 0) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, 1) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, 2) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, 3) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, 4) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, 5) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, 6) = ((MR_Box) (Var_100));
      }
      Var_31 = mercury__calendar__fquotient_3_f_0(Temp_9, (MR_Integer) 1, (MR_Integer) 13);
      Var_29 = (Var_94 + Var_31);
      Var_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, (MR_Integer) 0)));
      Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, (MR_Integer) 1)));
      Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, (MR_Integer) 2)));
      Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, (MR_Integer) 3)));
      Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, (MR_Integer) 4)));
      Var_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, (MR_Integer) 5)));
      Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_24_24, (MR_Integer) 6)));
      {
        STATE_VARIABLE_E_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_28_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_28_28, 1) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_28_28, 2) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_28_28, 3) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_28_28, 4) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_28_28, 5) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_28_28, 6) = ((MR_Box) (Var_113));
      }
      /* direct tailcall eliminated */
      next_value_of_STATE_VARIABLE_E_0_11 = STATE_VARIABLE_E_28_28;
      STATE_VARIABLE_E_0_11 = next_value_of_STATE_VARIABLE_E_0_11;
      continue;
    }
    else
    {
      MR_Integer MaxDaysInMonth_10;
      MR_Integer Var_37;
      MR_Integer Var_126;
      MR_Integer Var_127;
      MR_Integer Var_128;
      MR_Integer Var_129;
      MR_Integer Var_130;
      MR_Integer Var_131;
      MR_Integer Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
      MR_Integer Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
      MR_Integer Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
      MR_Integer Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
      MR_Integer Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
      MR_Integer Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
      MR_Integer Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 6)));

      MaxDaysInMonth_10 = mercury__calendar__max_day_in_month_for_2_f_0(Var_35, Var_114);
      Var_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 0)));
      Var_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 1)));
      Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 2)));
      Var_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 3)));
      Var_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 4)));
      Var_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 5)));
      Var_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_0_11, (MR_Integer) 6)));
      succeeded = (Var_37 > MaxDaysInMonth_10);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_E_38_38;
        MR_Integer Var_39 = (Var_37 - MaxDaysInMonth_10);
        MR_Word STATE_VARIABLE_E_42_42;
        MR_Integer Var_43;
        MR_Word STATE_VARIABLE_E_46_46;
        MR_Integer Var_47;
        MR_Integer Var_49;
        MR_Integer Temp_54;
        MR_Integer Var_139 = Var_127;
        MR_Integer Var_151;
        MR_Integer Var_153;
        MR_Integer Var_154;
        MR_Integer Var_155;
        MR_Integer Var_156;
        MR_Integer Var_157;
        MR_Integer Var_152;
        MR_Integer Var_165;
        MR_Integer Var_166;
        MR_Integer Var_167;
        MR_Integer Var_168;
        MR_Integer Var_169;
        MR_Integer Var_170;
        MR_Integer Var_164;
        MR_Word next_value_of_STATE_VARIABLE_E_0_11;

        {
          STATE_VARIABLE_E_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, 0) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, 2) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, 3) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, 4) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, 5) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, 6) = ((MR_Box) (Var_131));
        }
        Temp_54 = (Var_139 + (MR_Integer) 1);
        Var_43 = mercury__calendar__modulo_3_f_0(Temp_54, (MR_Integer) 1, (MR_Integer) 13);
        Var_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, (MR_Integer) 0)));
        Var_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, (MR_Integer) 1)));
        Var_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, (MR_Integer) 2)));
        Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, (MR_Integer) 3)));
        Var_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, (MR_Integer) 4)));
        Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, (MR_Integer) 5)));
        Var_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_38_38, (MR_Integer) 6)));
        {
          STATE_VARIABLE_E_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, 0) = ((MR_Box) (Var_151));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, 1) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, 2) = ((MR_Box) (Var_153));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, 3) = ((MR_Box) (Var_154));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, 4) = ((MR_Box) (Var_155));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, 5) = ((MR_Box) (Var_156));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, 6) = ((MR_Box) (Var_157));
        }
        Var_49 = mercury__calendar__fquotient_3_f_0(Temp_54, (MR_Integer) 1, (MR_Integer) 13);
        Var_47 = (Var_151 + Var_49);
        Var_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, (MR_Integer) 0)));
        Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, (MR_Integer) 1)));
        Var_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, (MR_Integer) 2)));
        Var_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, (MR_Integer) 3)));
        Var_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, (MR_Integer) 4)));
        Var_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, (MR_Integer) 5)));
        Var_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_42_42, (MR_Integer) 6)));
        {
          STATE_VARIABLE_E_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_46_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_46_46, 1) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_46_46, 2) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_46_46, 3) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_46_46, 4) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_46_46, 5) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_E_46_46, 6) = ((MR_Box) (Var_170));
        }
        /* direct tailcall eliminated */
        next_value_of_STATE_VARIABLE_E_0_11 = STATE_VARIABLE_E_46_46;
        STATE_VARIABLE_E_0_11 = next_value_of_STATE_VARIABLE_E_0_11;
        continue;
      }
      else
        *STATE_VARIABLE_E_12 = STATE_VARIABLE_E_0_11;
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__modulo_3_f_0(
  MR_Integer A_5,
  MR_Integer Low_6,
  MR_Integer High_7)
{
  {
    MR_Integer HeadVar__4_4;
    MR_Integer Var_8;
    MR_Integer Var_9 = (A_5 - Low_6);
    MR_Integer Var_10 = (High_7 - Low_6);
    MR_Integer Var_13;
    MR_Integer Var_14;

    Var_14 = mercury__int__div_2_f_0(Var_9, Var_10);
    Var_13 = (Var_14 * Var_10);
    Var_8 = (Var_9 - Var_13);
    HeadVar__4_4 = (Var_8 + Low_6);
    return HeadVar__4_4;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
  MR_Integer A_4,
  MR_Integer B_5)
{
  {
    MR_Integer HeadVar__3_3;
    MR_Integer Var_6;
    MR_Integer Var_7;

    Var_7 = mercury__int__div_2_f_0(A_4, B_5);
    Var_6 = (Var_7 * B_5);
    HeadVar__3_3 = (A_4 - Var_6);
    return HeadVar__3_3;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
  MR_Integer A_5,
  MR_Integer Low_6,
  MR_Integer High_7)
{
  {
    MR_Integer HeadVar__4_4;
    MR_Integer Var_8 = (A_5 - Low_6);
    MR_Integer Var_9 = (High_7 - Low_6);

    HeadVar__4_4 = mercury__int__div_2_f_0(Var_8, Var_9);
    return HeadVar__4_4;
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
  MR_Word Duration_1)
{
  {
    MR_bool succeeded;
    MR_String Str_8;
    MR_Integer Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 0)));
    MR_Integer Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 1)));
    MR_Integer Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 2)));
    MR_Integer MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 3)));

    succeeded = (Months_3 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Days_4 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Seconds_5 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (MicroSeconds_6 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      Str_8 = (MR_String) "P0D";
    else
    {
      MR_Word TypeCtorInfo_60_60;
      MR_Integer Sign_9;
      MR_String SignStr_10;
      MR_Word TimePart_11;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_String Var_45;
      MR_Integer Var_46;
      MR_Integer Var_47;
      MR_Word Var_49;
      MR_String Var_50;
      MR_Integer Var_51;
      MR_Integer Var_52;
      MR_Word Var_54;
      MR_String Var_55;
      MR_Integer Var_56;
      MR_Integer Var_57;
      MR_Word Var_59;
      MR_Integer Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer Var_94;
      MR_Integer Var_95;
      MR_Integer Var_96;

      succeeded = (Months_3 >= (MR_Integer) 0);
      if (succeeded)
      {
        Var_13 = (MR_Integer) 0;
        succeeded = (Days_4 >= Var_13);
        if (succeeded)
        {
          Var_14 = (MR_Integer) 0;
          succeeded = (Seconds_5 >= Var_14);
          if (succeeded)
          {
            Var_15 = (MR_Integer) 0;
            succeeded = (MicroSeconds_6 >= Var_15);
          }
        }
      }
      if (succeeded)
      {
        Sign_9 = (MR_Integer) 1;
        SignStr_10 = (MR_String) "";
      }
      else
      {
        MR_Integer Var_17;
        MR_Integer Var_18;
        MR_Integer Var_19;

        succeeded = (Months_3 <= (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = (MR_Integer) 0;
          succeeded = (Days_4 <= Var_17);
          if (succeeded)
          {
            Var_18 = (MR_Integer) 0;
            succeeded = (Seconds_5 <= Var_18);
            if (succeeded)
            {
              Var_19 = (MR_Integer) 0;
              succeeded = (MicroSeconds_6 <= Var_19);
            }
          }
        }
        if (succeeded)
        {
          Sign_9 = (MR_Integer) -1;
          SignStr_10 = (MR_String) "-";
        }
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.duration_to_string\'/1", (MR_String) "duration components have mixed signs");
        }
      }
      succeeded = (Seconds_5 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (MicroSeconds_6 == (MR_Integer) 0);
      if (succeeded)
        TimePart_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_23;
        MR_String Var_24;
        MR_Integer Var_25;
        MR_Integer Var_26;
        MR_Word Var_28;
        MR_String Var_29;
        MR_Integer Var_30;
        MR_Integer Var_31;
        MR_Word Var_33;
        MR_String Var_34;
        MR_Integer Var_35;
        MR_Integer Var_36;
        MR_Integer Var_37;
        MR_Integer Var_38;
        MR_Word Var_39;
        MR_Integer Var_90;
        MR_Integer Var_91;
        MR_Integer Var_92;

        Var_26 = mercury__calendar__hours_1_f_0(Duration_1);
        Var_25 = (Sign_9 * Var_26);
        succeeded = (Var_25 == (MR_Integer) 0);
        if (succeeded)
          Var_24 = (MR_String) "";
        else
        {
          MR_String Var_63;

          mercury__string__int_to_base_string_3_p_0(Var_25, (MR_Integer) 10, &Var_63);
          mercury__string__append_3_p_2(Var_63, (MR_String) "H", &Var_24);
        }
        Var_31 = mercury__calendar__minutes_1_f_0(Duration_1);
        Var_30 = (Sign_9 * Var_31);
        succeeded = (Var_30 == (MR_Integer) 0);
        if (succeeded)
          Var_29 = (MR_String) "";
        else
        {
          MR_String Var_77;

          mercury__string__int_to_base_string_3_p_0(Var_30, (MR_Integer) 10, &Var_77);
          mercury__string__append_3_p_2(Var_77, (MR_String) "M", &Var_29);
        }
        Var_36 = mercury__calendar__seconds_1_f_0(Duration_1);
        Var_35 = (Sign_9 * Var_36);
        Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 0)));
        Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 1)));
        Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 2)));
        Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 3)));
        Var_37 = (Sign_9 * Var_38);
        Var_34 = mercury__calendar__seconds_duration_string_2_f_0(Var_35, Var_37);
        Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_28));
        }
        {
          TimePart_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TimePart_11, 0) = ((MR_Box) ((MR_String) "T"));
          MR_hl_field(MR_mktag(1), TimePart_11, 1) = ((MR_Box) (Var_23));
        }
      }
      TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      Var_47 = mercury__calendar__years_1_f_0(Duration_1);
      Var_46 = (Sign_9 * Var_47);
      Var_45 = mercury__calendar__string_if_nonzero_2_f_0(Var_46, (MR_String) "Y");
      Var_52 = mercury__calendar__months_1_f_0(Duration_1);
      Var_51 = (Sign_9 * Var_52);
      Var_50 = mercury__calendar__string_if_nonzero_2_f_0(Var_51, (MR_String) "M");
      Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 0)));
      Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 1)));
      Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 2)));
      Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_1, (MR_Integer) 3)));
      Var_56 = (Sign_9 * Var_57);
      Var_55 = mercury__calendar__string_if_nonzero_2_f_0(Var_56, (MR_String) "D");
      Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_String) "P"));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (SignStr_10));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
      }
      Var_40 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_60_60, Var_41, TimePart_11);
      Str_8 = mercury__string__append_list_1_f_0(Var_40);
    }
    return Str_8;
  }
}

static MR_String MR_CALL 
mercury__calendar__seconds_duration_string_2_f_0(
  MR_Integer Seconds_4,
  MR_Integer MicroSeconds_5)
{
  {
    MR_bool succeeded = (Seconds_4 == (MR_Integer) 0);
    MR_String Str_6;

    if (succeeded)
      succeeded = (MicroSeconds_5 == (MR_Integer) 0);
    if (succeeded)
      Str_6 = (MR_String) "";
    else
    {
      MR_String Var_7;
      MR_String Var_8;
      MR_String Var_9;

      mercury__string__int_to_base_string_3_p_0(Seconds_4, (MR_Integer) 10, &Var_7);
      succeeded = (MicroSeconds_5 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_String Var_23;
        MR_String Var_30;
        MR_Word Var_36 = (MR_Word) &mercury__calendar_scalar_common_9[1];
        MR_Word V_9_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_9[2]);
        MR_Word V_10_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Integer V_6_54;
        MR_Integer V_7_55;
        MR_Integer V_8_56;
        MR_Integer V_6_62;
        MR_Integer V_7_63;
        MR_String V_7_72;

        mercury__string__format__format_signed_int_component_5_p_0(Var_36, V_9_43, V_10_44, MicroSeconds_5, &Var_30);
        mercury__string__append_3_p_2((MR_String) ".", Var_30, &Var_23);
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Var_23 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_7_55  = Length;
}
{
#define MR_PROC_LABEL mercury__calendar__seconds_duration_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Var_23 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_6_62  = Length;
}
        mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, Var_23, V_6_62, &V_7_63);
        V_8_56 = (V_6_62 - V_7_63);
        V_6_54 = (V_7_55 - V_8_56);
        mercury__string__split_4_p_0(Var_23, V_6_54, &Var_9, &V_7_72);
      }
      else
        Var_9 = (MR_String) "";
      mercury__string__append_3_p_2(Var_9, (MR_String) "S", &Var_8);
      mercury__string__append_3_p_2(Var_7, Var_8, &Str_6);
    }
    return Str_6;
  }
}

static MR_String MR_CALL 
mercury__calendar__string_if_nonzero_2_f_0(
  MR_Integer X_4,
  MR_String Suffix_5)
{
  {
    MR_bool succeeded = (X_4 == (MR_Integer) 0);
    MR_String HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_String Var_6;

      mercury__string__int_to_base_string_3_p_0(X_4, (MR_Integer) 10, &Var_6);
      mercury__string__append_3_p_2(Var_6, Suffix_5, &HeadVar__3_3);
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_duration_from_string_1_f_0(
  MR_String Str_3)
{
  {
    MR_bool succeeded;
    MR_Word Duration_4;
    MR_Word Duration0_5;

    succeeded = mercury__calendar__duration_from_string_2_p_0(Str_3, &Duration0_5);
    if (succeeded)
      Duration_4 = Duration0_5;
    else
    {
      MR_String Var_7;

      mercury__string__append_3_p_2((MR_String) "invalid duration: ", Str_3, &Var_7);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_duration_from_string\'/1", Var_7);
    }
    return Duration_4;
  }
}

MR_bool MR_CALL 
mercury__calendar__duration_from_string_2_p_0(
  MR_String Str_3,
  MR_Word * Duration_4)
{
  {
    MR_bool succeeded;
    MR_Integer Sign_6;
    MR_Integer Years_7;
    MR_Integer Months_8;
    MR_Integer Days_9;
    MR_Word STATE_VARIABLE_Chars_17_17;
    MR_Word STATE_VARIABLE_Chars_18_18;
    MR_Word STATE_VARIABLE_Chars_20_20;
    MR_Word STATE_VARIABLE_Chars_21_21;
    MR_Word STATE_VARIABLE_Chars_22_22;
    MR_Word STATE_VARIABLE_Chars_23_23;
    MR_Char Var_44;
    MR_Char Var_61;
    MR_Word Rest_52;
    MR_Char Var_53;
    MR_Integer Int0_68;
    MR_Word Rest_70;
    MR_Word Chars1_69;
    MR_Char Var_72;
    MR_Integer Var_77;
    MR_Word TimePart_10;
    MR_Char Var_24;
    MR_Char Var_45;

    mercury__string__to_char_list_2_p_0(Str_3, &STATE_VARIABLE_Chars_17_17);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_17_17)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_17_17, (MR_Integer) 0)));
      Rest_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_17_17, (MR_Integer) 1)));
      succeeded = (Var_53 == (MR_Char) 45);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_18_18 = Rest_52;
      Sign_6 = (MR_Integer) -1;
    }
    else
    {
      Sign_6 = (MR_Integer) 1;
      STATE_VARIABLE_Chars_18_18 = STATE_VARIABLE_Chars_17_17;
    }
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_18_18)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_18_18, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_18_18, (MR_Integer) 1)));
      succeeded = ((MR_Char) 80 == Var_44);
      if (succeeded)
      {
        Var_61 = (MR_Char) 89;
        Var_77 = (MR_Integer) 0;
        mercury__calendar__read_int_2_4_p_0(Var_77, &Int0_68, STATE_VARIABLE_Chars_20_20, &Chars1_69);
        succeeded = ((MR_tag((MR_Word) Chars1_69)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_72 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars1_69, (MR_Integer) 0)));
          Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars1_69, (MR_Integer) 1)));
          succeeded = (Var_61 == Var_72);
        }
        if (succeeded)
        {
          STATE_VARIABLE_Chars_21_21 = Rest_70;
          Years_7 = Int0_68;
        }
        else
        {
          Years_7 = (MR_Integer) 0;
          STATE_VARIABLE_Chars_21_21 = STATE_VARIABLE_Chars_20_20;
        }
        mercury__calendar__read_months_3_p_0(&Months_8, STATE_VARIABLE_Chars_21_21, &STATE_VARIABLE_Chars_22_22);
        mercury__calendar__read_days_3_p_0(&Days_9, STATE_VARIABLE_Chars_22_22, &STATE_VARIABLE_Chars_23_23);
        Var_24 = (MR_Char) 84;
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_23_23)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_23_23, (MR_Integer) 0)));
          TimePart_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_23_23, (MR_Integer) 1)));
          succeeded = (Var_24 == Var_45);
        }
        if (succeeded)
        {
          MR_Integer Hours_13;
          MR_Integer Minutes_14;
          MR_Integer Seconds_15;
          MR_Integer MicroSeconds_16;
          MR_Word STATE_VARIABLE_Chars_25_25;
          MR_Word STATE_VARIABLE_Chars_26_26;
          MR_Word STATE_VARIABLE_Chars_27_27;
          MR_Integer Var_28;
          MR_Integer Var_29;
          MR_Integer Var_30;
          MR_Integer Var_31;
          MR_Integer Var_32;
          MR_Integer Var_33;
          MR_Integer Var_34;
          MR_Char Var_11;
          MR_Word Var_12;

          succeeded = ((MR_tag((MR_Word) TimePart_10)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), TimePart_10, (MR_Integer) 0)));
            Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), TimePart_10, (MR_Integer) 1)));
            mercury__calendar__read_hours_3_p_0(&Hours_13, TimePart_10, &STATE_VARIABLE_Chars_25_25);
            mercury__calendar__read_minutes_3_p_0(&Minutes_14, STATE_VARIABLE_Chars_25_25, &STATE_VARIABLE_Chars_26_26);
            mercury__calendar__read_seconds_and_microseconds_4_p_0(&Seconds_15, &MicroSeconds_16, STATE_VARIABLE_Chars_26_26, &STATE_VARIABLE_Chars_27_27);
            succeeded = (STATE_VARIABLE_Chars_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              Var_28 = (Sign_6 * Years_7);
              Var_29 = (Sign_6 * Months_8);
              Var_30 = (Sign_6 * Days_9);
              Var_31 = (Sign_6 * Hours_13);
              Var_32 = (Sign_6 * Minutes_14);
              Var_33 = (Sign_6 * Seconds_15);
              Var_34 = (Sign_6 * MicroSeconds_16);
              *Duration_4 = mercury__calendar__init_duration_7_f_0(Var_28, Var_29, Var_30, Var_31, Var_32, Var_33, Var_34);
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Integer Var_35;
          MR_Integer Var_36;
          MR_Integer Var_37;
          MR_Integer Var_38;
          MR_Integer Var_39;
          MR_Integer Var_40;
          MR_Integer Var_41;

          succeeded = (STATE_VARIABLE_Chars_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            Var_35 = (Sign_6 * Years_7);
            Var_36 = (Sign_6 * Months_8);
            Var_37 = (Sign_6 * Days_9);
            Var_38 = (MR_Integer) 0;
            Var_39 = (MR_Integer) 0;
            Var_40 = (MR_Integer) 0;
            Var_41 = (MR_Integer) 0;
            *Duration_4 = mercury__calendar__init_duration_7_f_0(Var_35, Var_36, Var_37, Var_38, Var_39, Var_40, Var_41);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar__read_seconds_and_microseconds_4_p_0(
  MR_Integer * Seconds_5,
  MR_Integer * MicroSeconds_6,
  MR_Word STATE_VARIABLE_Chars_0_13,
  MR_Word * STATE_VARIABLE_Chars_14)
{
  {
    MR_bool succeeded;
    MR_Integer Seconds0_8;
    MR_Integer MicroSeconds0_10;
    MR_Word Chars3_12;
    MR_Word Chars1_9;
    MR_Word Chars2_11;
    MR_Char Var_17;
    MR_Integer Fraction_29;
    MR_Integer FractionDigits_30;
    MR_Word STATE_VARIABLE_Chars_12_32;
    MR_Word Chars1_28;
    MR_Integer Var_33;
    MR_Integer Var_34;
    MR_Char Var_40;
    MR_Integer Var_48;
    MR_Integer Var_49;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &Seconds0_8, STATE_VARIABLE_Chars_0_13, &Chars1_9);
    succeeded = ((MR_tag((MR_Word) Chars1_9)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars1_9, (MR_Integer) 0)));
      Chars1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars1_9, (MR_Integer) 1)));
      succeeded = ((MR_Char) 46 == Var_40);
      if (succeeded)
      {
        Var_48 = (MR_Integer) 0;
        Var_49 = (MR_Integer) 0;
        mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_48, &Fraction_29, Var_49, &FractionDigits_30, Chars1_28, &STATE_VARIABLE_Chars_12_32);
        Var_33 = (MR_Integer) 0;
        succeeded = (FractionDigits_30 > Var_33);
        if (succeeded)
        {
          Var_34 = (MR_Integer) 7;
          succeeded = (FractionDigits_30 < Var_34);
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Var_35;
      MR_Integer Var_37;

      Chars2_11 = STATE_VARIABLE_Chars_12_32;
      Var_37 = ((MR_Integer) 6 - FractionDigits_30);
      mercury__int__pow_3_p_0((MR_Integer) 10, Var_37, &Var_35);
      MicroSeconds0_10 = (Var_35 * Fraction_29);
    }
    else
    {
      MicroSeconds0_10 = (MR_Integer) 0;
      Chars2_11 = Chars1_9;
    }
    succeeded = ((MR_tag((MR_Word) Chars2_11)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars2_11, (MR_Integer) 0)));
      Chars3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars2_11, (MR_Integer) 1)));
      succeeded = ((MR_Char) 83 == Var_17);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Chars_14 = Chars3_12;
      *Seconds_5 = Seconds0_8;
      *MicroSeconds_6 = MicroSeconds0_10;
    }
    else
    {
      *Seconds_5 = (MR_Integer) 0;
      *MicroSeconds_6 = (MR_Integer) 0;
      *STATE_VARIABLE_Chars_14 = STATE_VARIABLE_Chars_0_13;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_minutes_3_p_0(
  MR_Integer * Minutes_4,
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7)
{
  {
    MR_bool succeeded;
    MR_Integer Int0_15;
    MR_Word Rest_17;
    MR_Word Chars1_16;
    MR_Char Var_19;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &Int0_15, STATE_VARIABLE_Chars_0_6, &Chars1_16);
    succeeded = ((MR_tag((MR_Word) Chars1_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars1_16, (MR_Integer) 0)));
      Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars1_16, (MR_Integer) 1)));
      succeeded = ((MR_Char) 77 == Var_19);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Chars_7 = Rest_17;
      *Minutes_4 = Int0_15;
    }
    else
    {
      *Minutes_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Chars_7 = STATE_VARIABLE_Chars_0_6;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_hours_3_p_0(
  MR_Integer * Hours_4,
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7)
{
  {
    MR_bool succeeded;
    MR_Integer Int0_15;
    MR_Word Rest_17;
    MR_Word Chars1_16;
    MR_Char Var_19;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &Int0_15, STATE_VARIABLE_Chars_0_6, &Chars1_16);
    succeeded = ((MR_tag((MR_Word) Chars1_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars1_16, (MR_Integer) 0)));
      Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars1_16, (MR_Integer) 1)));
      succeeded = ((MR_Char) 72 == Var_19);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Chars_7 = Rest_17;
      *Hours_4 = Int0_15;
    }
    else
    {
      *Hours_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Chars_7 = STATE_VARIABLE_Chars_0_6;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_days_3_p_0(
  MR_Integer * Days_4,
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7)
{
  {
    MR_bool succeeded;
    MR_Integer Int0_15;
    MR_Word Rest_17;
    MR_Word Chars1_16;
    MR_Char Var_19;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &Int0_15, STATE_VARIABLE_Chars_0_6, &Chars1_16);
    succeeded = ((MR_tag((MR_Word) Chars1_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars1_16, (MR_Integer) 0)));
      Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars1_16, (MR_Integer) 1)));
      succeeded = ((MR_Char) 68 == Var_19);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Chars_7 = Rest_17;
      *Days_4 = Int0_15;
    }
    else
    {
      *Days_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Chars_7 = STATE_VARIABLE_Chars_0_6;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_months_3_p_0(
  MR_Integer * Months_4,
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7)
{
  {
    MR_bool succeeded;
    MR_Integer Int0_15;
    MR_Word Rest_17;
    MR_Word Chars1_16;
    MR_Char Var_19;

    mercury__calendar__read_int_2_4_p_0((MR_Integer) 0, &Int0_15, STATE_VARIABLE_Chars_0_6, &Chars1_16);
    succeeded = ((MR_tag((MR_Word) Chars1_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars1_16, (MR_Integer) 0)));
      Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars1_16, (MR_Integer) 1)));
      succeeded = ((MR_Char) 77 == Var_19);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Chars_7 = Rest_17;
      *Months_4 = Int0_15;
    }
    else
    {
      *Months_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Chars_7 = STATE_VARIABLE_Chars_0_6;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
  MR_Integer STATE_VARIABLE_Val_0_10,
  MR_Integer * STATE_VARIABLE_Val_11,
  MR_Word STATE_VARIABLE_Chars_0_12,
  MR_Word * STATE_VARIABLE_Chars_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_0_12)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Rest_8;
    MR_Integer Digit_9;
    MR_Char Char_7;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_12, (MR_Integer) 0)));
      Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_12, (MR_Integer) 1)));
      succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_7, &Digit_9);
    }
    if (succeeded)
    {
      MR_Integer STATE_VARIABLE_Val_14_14;
      MR_Integer Var_15 = (STATE_VARIABLE_Val_0_10 * (MR_Integer) 10);
      MR_Integer next_value_of_STATE_VARIABLE_Val_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Chars_0_12;

      STATE_VARIABLE_Val_14_14 = (Var_15 + Digit_9);
      /* direct tailcall eliminated */
      next_value_of_STATE_VARIABLE_Val_0_10 = STATE_VARIABLE_Val_14_14;
      next_value_of_STATE_VARIABLE_Chars_0_12 = Rest_8;
      STATE_VARIABLE_Val_0_10 = next_value_of_STATE_VARIABLE_Val_0_10;
      STATE_VARIABLE_Chars_0_12 = next_value_of_STATE_VARIABLE_Chars_0_12;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Chars_13 = STATE_VARIABLE_Chars_0_12;
      *STATE_VARIABLE_Val_11 = STATE_VARIABLE_Val_0_10;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__calendar__negate_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer Months_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Days_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Seconds_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer MicroSeconds_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Integer Var_7 = ((MR_Integer) 0 - Months_3);
    MR_Integer Var_8 = ((MR_Integer) 0 - Days_4);
    MR_Integer Var_9 = ((MR_Integer) 0 - Seconds_5);
    MR_Integer Var_10 = ((MR_Integer) 0 - MicroSeconds_6);

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_10));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__zero_duration_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_3[1];

    return HeadVar__1_1;
  }
}

void MR_CALL 
mercury__calendar__unpack_duration_8_p_0(
  MR_Word Duration_9,
  MR_Integer * HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Integer * HeadVar__5_5,
  MR_Integer * HeadVar__6_6,
  MR_Integer * HeadVar__7_7,
  MR_Integer * HeadVar__8_8)
{
  {
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Integer Var_13;
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_Integer Var_17;

    *HeadVar__2_2 = mercury__calendar__years_1_f_0(Duration_9);
    *HeadVar__3_3 = mercury__calendar__months_1_f_0(Duration_9);
    Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_9, (MR_Integer) 0)));
    *HeadVar__4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_9, (MR_Integer) 1)));
    Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_9, (MR_Integer) 2)));
    Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_9, (MR_Integer) 3)));
    *HeadVar__5_5 = mercury__calendar__hours_1_f_0(Duration_9);
    *HeadVar__6_6 = mercury__calendar__minutes_1_f_0(Duration_9);
    *HeadVar__7_7 = mercury__calendar__seconds_1_f_0(Duration_9);
    Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_9, (MR_Integer) 0)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_9, (MR_Integer) 1)));
    Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_9, (MR_Integer) 2)));
    *HeadVar__8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Duration_9, (MR_Integer) 3)));
  }
}

MR_Word MR_CALL 
mercury__calendar__init_duration_7_f_0(
  MR_Integer Years0_9,
  MR_Integer Months0_10,
  MR_Integer Days0_11,
  MR_Integer Hours0_12,
  MR_Integer Minutes0_13,
  MR_Integer Seconds0_14,
  MR_Integer MicroSeconds0_15)
{
  {
    MR_bool succeeded;
    MR_Word Dur_16;

    {
      MR_Integer Var_31;
      MR_Integer Var_32;
      MR_Integer Var_33;
      MR_Integer Var_34;
      MR_Integer Var_35;
      MR_Integer Var_36;

      succeeded = (Years0_9 >= (MR_Integer) 0);
      if (succeeded)
      {
        Var_31 = (MR_Integer) 0;
        succeeded = (Months0_10 >= Var_31);
        if (succeeded)
        {
          Var_32 = (MR_Integer) 0;
          succeeded = (Days0_11 >= Var_32);
          if (succeeded)
          {
            Var_33 = (MR_Integer) 0;
            succeeded = (Hours0_12 >= Var_33);
            if (succeeded)
            {
              Var_34 = (MR_Integer) 0;
              succeeded = (Minutes0_13 >= Var_34);
              if (succeeded)
              {
                Var_35 = (MR_Integer) 0;
                succeeded = (Seconds0_14 >= Var_35);
                if (succeeded)
                {
                  Var_36 = (MR_Integer) 0;
                  succeeded = (MicroSeconds0_15 >= Var_36);
                }
              }
            }
          }
        }
      }
    }
    if (!(succeeded))
    {
      MR_Integer Var_24;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Integer Var_28;
      MR_Integer Var_29;

      succeeded = (Years0_9 <= (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = (MR_Integer) 0;
        succeeded = (Months0_10 <= Var_24);
        if (succeeded)
        {
          Var_25 = (MR_Integer) 0;
          succeeded = (Days0_11 <= Var_25);
          if (succeeded)
          {
            Var_26 = (MR_Integer) 0;
            succeeded = (Hours0_12 <= Var_26);
            if (succeeded)
            {
              Var_27 = (MR_Integer) 0;
              succeeded = (Minutes0_13 <= Var_27);
              if (succeeded)
              {
                Var_28 = (MR_Integer) 0;
                succeeded = (Seconds0_14 <= Var_28);
                if (succeeded)
                {
                  Var_29 = (MR_Integer) 0;
                  succeeded = (MicroSeconds0_15 <= Var_29);
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Months_17;
      MR_Integer Seconds1_18;
      MR_Integer MicroSeconds_19;
      MR_Integer Seconds2_20;
      MR_Integer Days_21;
      MR_Integer Seconds_22;
      MR_Integer Var_37 = (Years0_9 * (MR_Integer) 12);
      MR_Integer Var_39;
      MR_Integer Var_42;
      MR_Integer Var_43;
      MR_Integer Var_45;
      MR_Integer Var_47;

      Months_17 = (Var_37 + Months0_10);
      Var_39 = (MicroSeconds0_15 / (MR_Integer) 1000000);
      Seconds1_18 = (Seconds0_14 + Var_39);
      MicroSeconds_19 = (MicroSeconds0_15 % (MR_Integer) 1000000);
      Var_43 = (Minutes0_13 * (MR_Integer) 60);
      Var_42 = (Seconds1_18 + Var_43);
      Var_45 = (Hours0_12 * (MR_Integer) 3600);
      Seconds2_20 = (Var_42 + Var_45);
      Var_47 = (Seconds2_20 / (MR_Integer) 86400);
      Days_21 = (Days0_11 + Var_47);
      Seconds_22 = (Seconds2_20 % (MR_Integer) 86400);
      {
        Dur_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Dur_16, 0) = ((MR_Box) (Months_17));
        MR_hl_field(MR_mktag(0), Dur_16, 1) = ((MR_Box) (Days_21));
        MR_hl_field(MR_mktag(0), Dur_16, 2) = ((MR_Box) (Seconds_22));
        MR_hl_field(MR_mktag(0), Dur_16, 3) = ((MR_Box) (MicroSeconds_19));
      }
    }
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.init_duration\'/7", (MR_String) "some components negative and some positive");
    }
    return Dur_16;
  }
}

MR_Integer MR_CALL 
mercury__calendar__microseconds_1_f_0(
  MR_Word Dur_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 3)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 0)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 1)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 2)));

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__seconds_1_f_0(
  MR_Word Dur_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 2)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 0)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 1)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 3)));

    HeadVar__2_2 = (Var_4 % (MR_Integer) 60);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__minutes_1_f_0(
  MR_Word Dur_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_4;
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 2)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 0)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 1)));
    MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 3)));

    Var_4 = (Var_5 % (MR_Integer) 3600);
    HeadVar__2_2 = (Var_4 / (MR_Integer) 60);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__hours_1_f_0(
  MR_Word Dur_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 2)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 0)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 1)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 3)));

    HeadVar__2_2 = (Var_4 / (MR_Integer) 3600);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__days_1_f_0(
  MR_Word Dur_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 1)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 0)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 2)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 3)));

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__months_1_f_0(
  MR_Word Dur_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 0)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 1)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 2)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 3)));

    HeadVar__2_2 = (Var_4 % (MR_Integer) 12);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__years_1_f_0(
  MR_Word Dur_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 0)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 1)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 2)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Dur_3, (MR_Integer) 3)));

    HeadVar__2_2 = (Var_4 / (MR_Integer) 12);
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__calendar__same_date_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  {
    MR_bool succeeded;
    MR_Integer Year_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 0)));
    MR_Integer Month_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 1)));
    MR_Integer Day_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 2)));
    MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 0)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 1)));
    MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 2)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 3)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 4)));
    MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 5)));
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 6)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 3)));
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 4)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 5)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 6)));

    succeeded = (Year_5 == Var_16);
    if (succeeded)
    {
      succeeded = (Month_6 == Var_17);
      if (succeeded)
        succeeded = (Day_7 == Var_18);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__calendar__unix_epoch_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1 = (MR_Word) &mercury__calendar_scalar_common_5[0];

    return HeadVar__1_1;
  }
}

void MR_CALL 
mercury__calendar__current_utc_time_3_p_0(
  MR_Word * Now_4)
{
  {
    MR_Word TimeT_6;
    MR_Box V_3_12;
    MR_Integer V_13_21;
    MR_Integer TMYear_25;
    MR_Integer TMMonth_26;
    MR_Integer Year_34;
    MR_Integer Month_35;
    MR_Integer Day_36;
    MR_Integer Hour_37;
    MR_Integer Minute_38;
    MR_Integer Second_39;
    MR_Integer V_11_19;
    MR_Integer V_12_20;
    MR_Word V_14_22;

    mercury__time__time_3_p_0(&TimeT_6);
    V_3_12 = (MR_Box) TimeT_6;
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

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, V_3_12 , Time);
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
	 TMYear_25  = Yr;
	 TMMonth_26  = Mnt;
	 Day_36  = MD;
	 Hour_37  = Hrs;
	 Minute_38  = Min;
	 Second_39  = Sec;
	 V_11_19  = YD;
	 V_12_20  = WD;
	 V_13_21  = N;
}
    V_14_22 = mercury__time__int_to_maybe_dst_1_f_0(V_13_21);
    Year_34 = ((MR_Integer) 1900 + TMYear_25);
    Month_35 = (TMMonth_26 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *Now_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Year_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Month_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Day_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Hour_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Minute_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Second_39));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

void MR_CALL 
mercury__calendar__current_local_time_3_p_0(
  MR_Word * Now_4)
{
  {
    MR_Word TimeT_6;
    MR_Word TM_7;
    MR_Integer TMYear_14;
    MR_Integer TMMonth_15;
    MR_Integer Year_23;
    MR_Integer Month_24;
    MR_Integer Day_25;
    MR_Integer Hour_26;
    MR_Integer Minute_27;
    MR_Integer Second_28;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Word Var_22;

    mercury__time__time_3_p_0(&TimeT_6);
    mercury__time__localtime_4_p_0(TimeT_6, &TM_7);
    TMYear_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 0)));
    TMMonth_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 1)));
    Day_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 2)));
    Hour_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 3)));
    Minute_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 4)));
    Second_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 5)));
    Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 6)));
    Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 7)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 8)));
    Year_23 = ((MR_Integer) 1900 + TMYear_14);
    Month_24 = (TMMonth_15 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *Now_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Year_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Month_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Day_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Hour_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Minute_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Second_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

MR_String MR_CALL 
mercury__calendar__date_to_string_1_f_0(
  MR_Word Date_3)
{
  {
    MR_bool succeeded;
    MR_String Str_4;
    MR_Integer Year0_5;
    MR_Word Month_6;
    MR_Integer Day_7;
    MR_Integer Hour_8;
    MR_Integer Minute_9;
    MR_Integer Second_10;
    MR_Integer MicroSecond_11;
    MR_String SignStr_12;
    MR_Integer Year_13;
    MR_String MicroSecondStr_14;
    MR_Integer Var_23;
    MR_String Var_35;
    MR_Word Var_41;
    MR_String Var_43;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_54;
    MR_String Var_56;
    MR_String Var_57;
    MR_String Var_65;
    MR_String Var_67;
    MR_String Var_68;
    MR_String Var_76;
    MR_String Var_78;
    MR_String Var_79;
    MR_String Var_87;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_98;

    mercury__calendar__unpack_date_8_p_0(Date_3, &Year0_5, &Month_6, &Day_7, &Hour_8, &Minute_9, &Second_10, &MicroSecond_11);
    succeeded = (Year0_5 < (MR_Integer) 0);
    if (succeeded)
    {
      SignStr_12 = (MR_String) "-";
      Year_13 = ((MR_Integer) 0 - Year0_5);
    }
    else
    {
      SignStr_12 = (MR_String) "";
      Year_13 = Year0_5;
    }
    MicroSecondStr_14 = mercury__calendar__microsecond_string_1_f_0(MicroSecond_11);
    Var_23 = mercury__calendar__month_to_int_1_f_0(Month_6);
    Var_41 = (MR_Word) &mercury__calendar_scalar_common_9[1];
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_41, (MR_Integer) 2, Second_10, &Var_35);
    Var_43 = mercury__string__f_43_43_2_f_0(Var_35, MicroSecondStr_14);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_43);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_41, (MR_Integer) 2, Minute_9, &Var_46);
    Var_54 = mercury__string__f_43_43_2_f_0(Var_46, Var_45);
    Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_54);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_41, (MR_Integer) 2, Hour_8, &Var_57);
    Var_65 = mercury__string__f_43_43_2_f_0(Var_57, Var_56);
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_65);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_41, (MR_Integer) 2, Day_7, &Var_68);
    Var_76 = mercury__string__f_43_43_2_f_0(Var_68, Var_67);
    Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_76);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_41, (MR_Integer) 2, Var_23, &Var_79);
    Var_87 = mercury__string__f_43_43_2_f_0(Var_79, Var_78);
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_87);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_41, (MR_Integer) 4, Year_13, &Var_90);
    Var_98 = mercury__string__f_43_43_2_f_0(Var_90, Var_89);
    Str_4 = mercury__string__f_43_43_2_f_0(SignStr_12, Var_98);
    return Str_4;
  }
}

static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
  MR_Integer MicroSeconds_3)
{
  {
    MR_bool succeeded = (MicroSeconds_3 > (MR_Integer) 0);
    MR_String Str_4;

    if (succeeded)
    {
      MR_String Var_8;
      MR_String Var_15;
      MR_Word Var_21 = (MR_Word) &mercury__calendar_scalar_common_9[1];
      MR_Word V_9_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__calendar_scalar_common_9[2]);
      MR_Word V_10_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Integer V_6_39;
      MR_Integer V_7_40;
      MR_Integer V_8_41;
      MR_Integer V_6_47;
      MR_Integer V_7_48;
      MR_String V_7_57;

      mercury__string__format__format_signed_int_component_5_p_0(Var_21, V_9_28, V_10_29, MicroSeconds_3, &Var_15);
      mercury__string__append_3_p_2((MR_String) ".", Var_15, &Var_8);
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Var_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_7_40  = Length;
}
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Var_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_6_47  = Length;
}
      mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, Var_8, V_6_47, &V_7_48);
      V_8_41 = (V_6_47 - V_7_48);
      V_6_39 = (V_7_40 - V_8_41);
      mercury__string__split_4_p_0(Var_8, V_6_39, &Str_4, &V_7_57);
    }
    else
      Str_4 = (MR_String) "";
    return Str_4;
  }
}

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0(
  MR_Char Var_11,
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    /* setup for tailcalls optimized into a loop */
{
#define MR_PROC_LABEL mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_93_95_48_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
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
	 V_9_9  = PrevIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (Var_11 == V_10_10);
    if (succeeded)
    {
      MR_Integer next_value_of_V_7_7 = V_9_9;

      /* direct tailcall eliminated */
      V_7_7 = next_value_of_V_7_7;
      continue;
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_date_from_string_1_f_0(
  MR_String Str_3)
{
  {
    MR_bool succeeded;
    MR_Word Date_4;
    MR_Word Date0_5;

    succeeded = mercury__calendar__date_from_string_2_p_0(Str_3, &Date0_5);
    if (succeeded)
      Date_4 = Date0_5;
    else
    {
      MR_String Var_7;

      mercury__string__append_3_p_2((MR_String) "invalid date: ", Str_3, &Var_7);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_date_from_string\'/1", Var_7);
    }
    return Date_4;
  }
}

MR_bool MR_CALL 
mercury__calendar__date_from_string_2_p_0(
  MR_String Str_3,
  MR_Word * Date_4)
{
  {
    MR_bool succeeded;
    MR_Integer YearChars_8;
    MR_Integer Year_9;
    MR_Integer Month_10;
    MR_Integer Day_11;
    MR_Integer Hour_12;
    MR_Integer Minute_13;
    MR_Integer Second_14;
    MR_Integer MicroSecond_15;
    MR_Word STATE_VARIABLE_Chars_16_16;
    MR_Word STATE_VARIABLE_Chars_19_19;
    MR_Char Var_22;
    MR_Word STATE_VARIABLE_Chars_23_23;
    MR_Integer Var_24;
    MR_Word STATE_VARIABLE_Chars_25_25;
    MR_Integer Var_26;
    MR_Integer Var_27;
    MR_Char Var_28;
    MR_Word STATE_VARIABLE_Chars_29_29;
    MR_Integer Var_30;
    MR_Word STATE_VARIABLE_Chars_31_31;
    MR_Integer Var_32;
    MR_Integer Var_33;
    MR_Char Var_34;
    MR_Word STATE_VARIABLE_Chars_35_35;
    MR_Integer Var_36;
    MR_Word STATE_VARIABLE_Chars_37_37;
    MR_Integer Var_38;
    MR_Integer Var_39;
    MR_Char Var_40;
    MR_Word STATE_VARIABLE_Chars_41_41;
    MR_Integer Var_42;
    MR_Word STATE_VARIABLE_Chars_43_43;
    MR_Integer Var_44;
    MR_Integer Var_45;
    MR_Char Var_46;
    MR_Word STATE_VARIABLE_Chars_47_47;
    MR_Integer Var_48;
    MR_Word STATE_VARIABLE_Chars_49_49;
    MR_Integer Var_50;
    MR_Word STATE_VARIABLE_Chars_51_51;
    MR_Char Var_53;
    MR_Integer Var_54;
    MR_Char Var_55;
    MR_Integer Var_56;
    MR_Char Var_57;
    MR_Integer Var_58;
    MR_Char Var_59;
    MR_Integer Var_60;
    MR_Char Var_61;
    MR_Integer Var_62;
    MR_Integer Var_90;
    MR_Integer Var_91;
    MR_Word Rest1_6;
    MR_Char Var_52;

    mercury__string__to_char_list_2_p_0(Str_3, &STATE_VARIABLE_Chars_16_16);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_16_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_16_16, (MR_Integer) 0)));
      Rest1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_16_16, (MR_Integer) 1)));
      succeeded = ((MR_Char) 45 == Var_52);
    }
    if (succeeded)
    {
      MR_Integer Year0_7;

      mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &Year0_7, (MR_Integer) 0, &YearChars_8, Rest1_6, &STATE_VARIABLE_Chars_19_19);
      Year_9 = ((MR_Integer) 0 - Year0_7);
    }
    else
    {
      mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &Year_9, (MR_Integer) 0, &YearChars_8, STATE_VARIABLE_Chars_16_16, &STATE_VARIABLE_Chars_19_19);
    }
    succeeded = (YearChars_8 >= (MR_Integer) 4);
    if (succeeded)
    {
      Var_22 = (MR_Char) 45;
      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_19_19)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_19_19, (MR_Integer) 0)));
        STATE_VARIABLE_Chars_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_19_19, (MR_Integer) 1)));
        succeeded = (Var_22 == Var_53);
        if (succeeded)
        {
          Var_24 = (MR_Integer) 2;
          Var_90 = (MR_Integer) 0;
          Var_91 = (MR_Integer) 0;
          mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_90, &Month_10, Var_91, &Var_54, STATE_VARIABLE_Chars_23_23, &STATE_VARIABLE_Chars_25_25);
          succeeded = (Var_24 == Var_54);
          if (succeeded)
          {
            Var_26 = (MR_Integer) 1;
            succeeded = (Month_10 >= Var_26);
            if (succeeded)
            {
              Var_27 = (MR_Integer) 12;
              succeeded = (Month_10 <= Var_27);
              if (succeeded)
              {
                Var_28 = (MR_Char) 45;
                succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_25_25)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_55 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_25_25, (MR_Integer) 0)));
                  STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_25_25, (MR_Integer) 1)));
                  succeeded = (Var_28 == Var_55);
                  if (succeeded)
                  {
                    Var_30 = (MR_Integer) 2;
                    mercury__calendar__read_int_and_num_chars_4_p_0(&Day_11, &Var_56, STATE_VARIABLE_Chars_29_29, &STATE_VARIABLE_Chars_31_31);
                    succeeded = (Var_30 == Var_56);
                    if (succeeded)
                    {
                      Var_32 = (MR_Integer) 1;
                      succeeded = (Day_11 >= Var_32);
                      if (succeeded)
                      {
                        Var_33 = mercury__calendar__max_day_in_month_for_2_f_0(Year_9, Month_10);
                        succeeded = (Day_11 <= Var_33);
                        if (succeeded)
                        {
                          Var_34 = (MR_Char) 32;
                          succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_31_31)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_57 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
                            STATE_VARIABLE_Chars_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_31_31, (MR_Integer) 1)));
                            succeeded = (Var_34 == Var_57);
                            if (succeeded)
                            {
                              Var_36 = (MR_Integer) 2;
                              mercury__calendar__read_int_and_num_chars_4_p_0(&Hour_12, &Var_58, STATE_VARIABLE_Chars_35_35, &STATE_VARIABLE_Chars_37_37);
                              succeeded = (Var_36 == Var_58);
                              if (succeeded)
                              {
                                Var_38 = (MR_Integer) 0;
                                succeeded = (Hour_12 >= Var_38);
                                if (succeeded)
                                {
                                  Var_39 = (MR_Integer) 23;
                                  succeeded = (Hour_12 <= Var_39);
                                  if (succeeded)
                                  {
                                    Var_40 = (MR_Char) 58;
                                    succeeded = mercury__calendar__read_char_3_p_0(&Var_59, STATE_VARIABLE_Chars_37_37, &STATE_VARIABLE_Chars_41_41);
                                    if (succeeded)
                                    {
                                      succeeded = (Var_40 == Var_59);
                                      if (succeeded)
                                      {
                                        Var_42 = (MR_Integer) 2;
                                        mercury__calendar__read_int_and_num_chars_4_p_0(&Minute_13, &Var_60, STATE_VARIABLE_Chars_41_41, &STATE_VARIABLE_Chars_43_43);
                                        succeeded = (Var_42 == Var_60);
                                        if (succeeded)
                                        {
                                          Var_44 = (MR_Integer) 0;
                                          succeeded = (Minute_13 >= Var_44);
                                          if (succeeded)
                                          {
                                            Var_45 = (MR_Integer) 59;
                                            succeeded = (Minute_13 <= Var_45);
                                            if (succeeded)
                                            {
                                              Var_46 = (MR_Char) 58;
                                              succeeded = mercury__calendar__read_char_3_p_0(&Var_61, STATE_VARIABLE_Chars_43_43, &STATE_VARIABLE_Chars_47_47);
                                              if (succeeded)
                                              {
                                                succeeded = (Var_46 == Var_61);
                                                if (succeeded)
                                                {
                                                  Var_48 = (MR_Integer) 2;
                                                  mercury__calendar__read_int_and_num_chars_4_p_0(&Second_14, &Var_62, STATE_VARIABLE_Chars_47_47, &STATE_VARIABLE_Chars_49_49);
                                                  succeeded = (Var_48 == Var_62);
                                                  if (succeeded)
                                                  {
                                                    Var_50 = (MR_Integer) 62;
                                                    succeeded = (Second_14 < Var_50);
                                                    if (succeeded)
                                                    {
                                                      mercury__calendar__read_microseconds_3_p_0(&MicroSecond_15, STATE_VARIABLE_Chars_49_49, &STATE_VARIABLE_Chars_51_51);
                                                      succeeded = (STATE_VARIABLE_Chars_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      if (succeeded)
                                                      {
                                                        {
                                                          MR_Word base;
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                                                          *Date_4 = base;
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Year_9));
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Month_10));
                                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Day_11));
                                                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Hour_12));
                                                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Minute_13));
                                                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Second_14));
                                                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MicroSecond_15));
                                                        }
                                                        succeeded = MR_TRUE;
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
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__calendar__read_char_3_p_0(
  MR_Char * Char_4,
  MR_Word HeadVar__2_2,
  MR_Word * Rest_5)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));

    if (succeeded)
    {
      *Char_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      *Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar__read_int_and_num_chars_4_p_0(
  MR_Integer * Val_5,
  MR_Integer * N_6,
  MR_Word STATE_VARIABLE_Chars_0_8,
  MR_Word * STATE_VARIABLE_Chars_9)
{
  {
    mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, Val_5, (MR_Integer) 0, N_6, STATE_VARIABLE_Chars_0_8, STATE_VARIABLE_Chars_9);
  }
}

static void MR_CALL 
mercury__calendar__read_microseconds_3_p_0(
  MR_Integer * MicroSeconds_4,
  MR_Word STATE_VARIABLE_Chars_0_9,
  MR_Word * STATE_VARIABLE_Chars_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_0_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer Fraction_7;
    MR_Integer FractionDigits_8;
    MR_Word STATE_VARIABLE_Chars_12_12;
    MR_Word Chars1_6;
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Char Var_20;
    MR_Integer Var_28;
    MR_Integer Var_29;

    if (succeeded)
    {
      Var_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_9, (MR_Integer) 0)));
      Chars1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_9, (MR_Integer) 1)));
      succeeded = ((MR_Char) 46 == Var_20);
      if (succeeded)
      {
        Var_28 = (MR_Integer) 0;
        Var_29 = (MR_Integer) 0;
        mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_28, &Fraction_7, Var_29, &FractionDigits_8, Chars1_6, &STATE_VARIABLE_Chars_12_12);
        Var_13 = (MR_Integer) 0;
        succeeded = (FractionDigits_8 > Var_13);
        if (succeeded)
        {
          Var_14 = (MR_Integer) 7;
          succeeded = (FractionDigits_8 < Var_14);
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Var_15;
      MR_Integer Var_17;

      *STATE_VARIABLE_Chars_10 = STATE_VARIABLE_Chars_12_12;
      Var_17 = ((MR_Integer) 6 - FractionDigits_8);
      mercury__int__pow_3_p_0((MR_Integer) 10, Var_17, &Var_15);
      *MicroSeconds_4 = (Var_15 * Fraction_7);
    }
    else
    {
      *MicroSeconds_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Chars_10 = STATE_VARIABLE_Chars_0_9;
    }
  }
}

static void MR_CALL 
mercury__calendar__read_int_and_num_chars_2_6_p_0(
  MR_Integer STATE_VARIABLE_Val_0_13,
  MR_Integer * STATE_VARIABLE_Val_14,
  MR_Integer STATE_VARIABLE_N_0_15,
  MR_Integer * STATE_VARIABLE_N_16,
  MR_Word STATE_VARIABLE_Chars_0_17,
  MR_Word * STATE_VARIABLE_Chars_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_0_17)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Rest_11;
    MR_Integer Digit_12;
    MR_Char Char_10;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
      Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_17, (MR_Integer) 1)));
      succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_10, &Digit_12);
    }
    if (succeeded)
    {
      MR_Integer STATE_VARIABLE_Val_19_19;
      MR_Integer Var_20 = (STATE_VARIABLE_Val_0_13 * (MR_Integer) 10);
      MR_Integer Var_23;
      MR_Integer next_value_of_STATE_VARIABLE_Val_0_13;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Chars_0_17;

      STATE_VARIABLE_Val_19_19 = (Var_20 + Digit_12);
      Var_23 = (STATE_VARIABLE_N_0_15 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_STATE_VARIABLE_Val_0_13 = STATE_VARIABLE_Val_19_19;
      next_value_of_STATE_VARIABLE_N_0_15 = Var_23;
      next_value_of_STATE_VARIABLE_Chars_0_17 = Rest_11;
      STATE_VARIABLE_Val_0_13 = next_value_of_STATE_VARIABLE_Val_0_13;
      STATE_VARIABLE_N_0_15 = next_value_of_STATE_VARIABLE_N_0_15;
      STATE_VARIABLE_Chars_0_17 = next_value_of_STATE_VARIABLE_Chars_0_17;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Chars_18 = STATE_VARIABLE_Chars_0_17;
      *STATE_VARIABLE_N_16 = STATE_VARIABLE_N_0_15;
      *STATE_VARIABLE_Val_14 = STATE_VARIABLE_Val_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__calendar__unpack_date_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Year_9,
  MR_Word * HeadVar__3_3,
  MR_Integer * Day_11,
  MR_Integer * Hour_12,
  MR_Integer * Minute_13,
  MR_Integer * Second_14,
  MR_Integer * MicroSecond_15)
{
  {
    MR_Integer Month_10;

    *Year_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    Month_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    *Day_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    *Hour_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    *Minute_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
    *Second_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
    *MicroSecond_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
    *HeadVar__3_3 = mercury__calendar__det_int_to_month_1_f_0(Month_10);
  }
}

MR_Word MR_CALL 
mercury__calendar__det_init_date_7_f_0(
  MR_Integer Year_9,
  MR_Word Month_10,
  MR_Integer Day_11,
  MR_Integer Hour_12,
  MR_Integer Minute_13,
  MR_Integer Second_14,
  MR_Integer MicroSecond_15)
{
  {
    MR_bool succeeded;
    MR_Word Date_16;
    MR_Word Date0_17;

    succeeded = mercury__calendar__init_date_8_p_0(Year_9, Month_10, Day_11, Hour_12, Minute_13, Second_14, MicroSecond_15, &Date0_17);
    if (succeeded)
      Date_16 = Date0_17;
    else
    {
      MR_String Msg_18;
      MR_Integer Var_24;
      MR_String Var_35;
      MR_Word Var_41;
      MR_String Var_43;
      MR_String Var_44;
      MR_String Var_51;
      MR_String Var_53;
      MR_String Var_54;
      MR_String Var_61;
      MR_String Var_63;
      MR_String Var_64;
      MR_String Var_71;
      MR_String Var_73;
      MR_String Var_74;
      MR_String Var_81;
      MR_String Var_83;
      MR_String Var_84;
      MR_String Var_91;

      mercury__calendar__int_to_month_2_p_1(&Var_24, Month_10);
      Var_41 = (MR_Word) &mercury__calendar_scalar_common_9[0];
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_41, Second_14, &Var_35);
      Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_35);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_41, Minute_13, &Var_44);
      Var_51 = mercury__string__f_43_43_2_f_0(Var_44, Var_43);
      Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_51);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_41, Hour_12, &Var_54);
      Var_61 = mercury__string__f_43_43_2_f_0(Var_54, Var_53);
      Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_61);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_41, Day_11, &Var_64);
      Var_71 = mercury__string__f_43_43_2_f_0(Var_64, Var_63);
      Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_71);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_41, Var_24, &Var_74);
      Var_81 = mercury__string__f_43_43_2_f_0(Var_74, Var_73);
      Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_81);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_41, Year_9, &Var_84);
      Var_91 = mercury__string__f_43_43_2_f_0(Var_84, Var_83);
      Msg_18 = mercury__string__f_43_43_2_f_0((MR_String) "invalid date: ", Var_91);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_init_date\'/7", Msg_18);
    }
    return Date_16;
  }
}

MR_bool MR_CALL 
mercury__calendar__init_date_8_p_0(
  MR_Integer Year_9,
  MR_Word Month_10,
  MR_Integer Day_11,
  MR_Integer Hour_12,
  MR_Integer Minute_13,
  MR_Integer Second_14,
  MR_Integer MicroSecond_15,
  MR_Word * Date_16)
{
  {
    MR_bool succeeded = (Day_11 >= (MR_Integer) 1);
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Integer Var_22;
    MR_Integer Var_23;
    MR_Integer Var_24;

    if (succeeded)
    {
      mercury__calendar__int_to_month_2_p_1(&Var_19, Month_10);
      Var_18 = mercury__calendar__max_day_in_month_for_2_f_0(Year_9, Var_19);
      succeeded = (Day_11 <= Var_18);
      if (succeeded)
      {
        Var_20 = (MR_Integer) 24;
        succeeded = (Hour_12 < Var_20);
        if (succeeded)
        {
          Var_21 = (MR_Integer) 60;
          succeeded = (Minute_13 < Var_21);
          if (succeeded)
          {
            Var_22 = (MR_Integer) 62;
            succeeded = (Second_14 < Var_22);
            if (succeeded)
            {
              Var_23 = (MR_Integer) 1000000;
              succeeded = (MicroSecond_15 < Var_23);
              if (succeeded)
              {
                mercury__calendar__int_to_month_2_p_1(&Var_24, Month_10);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  *Date_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Year_9));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Day_11));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Hour_12));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Minute_13));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Second_14));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MicroSecond_15));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
  MR_Integer YearValue_4,
  MR_Integer MonthValue_5)
{
  {
    MR_bool succeeded;
    MR_Integer Max_6;
    MR_Integer M_7;
    MR_Integer Y_8;
    MR_Integer Var_10;
    MR_Integer Var_11 = (MonthValue_5 - (MR_Integer) 1);
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_Integer V_6_33;
    MR_Integer V_7_34;
    MR_Integer Max0_9;

    V_7_34 = mercury__int__div_2_f_0(Var_11, (MR_Integer) 12);
    V_6_33 = (V_7_34 * (MR_Integer) 12);
    Var_10 = (Var_11 - V_6_33);
    M_7 = (Var_10 + (MR_Integer) 1);
    Var_16 = (MonthValue_5 - (MR_Integer) 1);
    Var_15 = mercury__int__div_2_f_0(Var_16, (MR_Integer) 12);
    Y_8 = (YearValue_4 + Var_15);
    switch (M_7) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 8:
      case (MR_Integer) 10:
      case (MR_Integer) 12:
        {
          Max0_9 = (MR_Integer) 31;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            MR_Integer Var_23;
            MR_Integer V_6_38;
            MR_Integer V_7_39;

            V_7_39 = mercury__int__div_2_f_0(Y_8, (MR_Integer) 400);
            V_6_38 = (V_7_39 * (MR_Integer) 400);
            Var_23 = (Y_8 - V_6_38);
            succeeded = (Var_23 == (MR_Integer) 0);
          }
          if (!(succeeded))
          {
            MR_Integer Var_21;
            MR_Integer Var_22;
            MR_Integer V_6_48;
            MR_Integer V_7_49;
            MR_Integer Var_19;
            MR_Integer V_6_43;
            MR_Integer V_7_44;

            V_7_44 = mercury__int__div_2_f_0(Y_8, (MR_Integer) 100);
            V_6_43 = (V_7_44 * (MR_Integer) 100);
            Var_19 = (Y_8 - V_6_43);
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_22 = (MR_Integer) 4;
              V_7_49 = mercury__int__div_2_f_0(Y_8, Var_22);
              V_6_48 = (V_7_49 * Var_22);
              Var_21 = (Y_8 - V_6_48);
              succeeded = (Var_21 == (MR_Integer) 0);
            }
          }
          if (succeeded)
            Max0_9 = (MR_Integer) 29;
          else
            Max0_9 = (MR_Integer) 28;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 9:
      case (MR_Integer) 11:
        {
          Max0_9 = (MR_Integer) 30;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
      Max_6 = Max0_9;
    else
    {
      MR_Word TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word TypeCtorInfo_13_63;
      MR_Word TypeClassInfo_for_op_table_72;
      MR_String Var_26;
      MR_String Var_28;
      MR_Word V_10_60;
      MR_Word V_9_61;
      MR_Word V_11_62;
      MR_Integer V_10_69;
      MR_Integer V_13_70;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_V_13_70;

      V_10_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      TypeClassInfo_for_op_table_72 = (MR_Word) &mercury__calendar_scalar_common_1[0];
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_72, (MR_Integer) 0)), (MR_Integer) 12)));
      conv1_V_13_70 = func_0(((MR_Box) TypeClassInfo_for_op_table_72), ((MR_Box) ((MR_Integer) 0)));
      V_13_70 = ((MR_Integer) conv1_V_13_70);
      V_10_69 = (V_13_70 + (MR_Integer) 1);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeCtorInfo_29_29, (MR_Integer) 1, V_10_69, ((MR_Box) (M_7)), V_10_60, &V_9_61);
      TypeCtorInfo_13_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__list__reverse_2_p_0(TypeCtorInfo_13_63, V_9_61, &V_11_62);
      Var_28 = mercury__string__append_list_1_f_0(V_11_62);
      mercury__string__append_3_p_2((MR_String) "unexpected value for M: ", Var_28, &Var_26);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.max_day_in_month_for\'/2", Var_26);
    }
    return Max_6;
  }
}

MR_Integer MR_CALL 
mercury__calendar__month_to_int0_1_f_0(
  MR_Word Month_3)
{
  {
    MR_Integer Int_4;
    MR_Integer Var_7;

    mercury__calendar__int_to_month_2_p_1(&Var_7, Month_3);
    Int_4 = (Var_7 - (MR_Integer) 1);
    return Int_4;
  }
}

MR_Integer MR_CALL 
mercury__calendar__month_to_int_1_f_0(
  MR_Word Month_3)
{
  {
    MR_Integer Int_4;

    mercury__calendar__int_to_month_2_p_1(&Int_4, Month_3);
    return Int_4;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_int0_to_month_1_f_0(
  MR_Integer Int_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Month_4;
    MR_Integer Var_12 = (Int_3 + (MR_Integer) 1);

    succeeded = mercury__calendar__int_to_month_2_p_0(Var_12, &Month_4);
    if (succeeded)
      HeadVar__2_2 = Month_4;
    else
    {
      MR_String Var_6;
      MR_String Var_8;

      mercury__string__int_to_base_string_3_p_0(Int_3, (MR_Integer) 10, &Var_8);
      mercury__string__append_3_p_2((MR_String) "invalid month: ", Var_8, &Var_6);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_int0_to_month\'/1", Var_6);
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__calendar__int0_to_month_2_p_1(
  MR_Integer * Int_3,
  MR_Word Month_4)
{
  {
    MR_Integer Var_5;

    mercury__calendar__int_to_month_2_p_1(&Var_5, Month_4);
    *Int_3 = (Var_5 - (MR_Integer) 1);
  }
}

MR_bool MR_CALL 
mercury__calendar__int0_to_month_2_p_0(
  MR_Integer Int_3,
  MR_Word * Month_4)
{
  {
    MR_bool succeeded;
    MR_Integer Var_5 = (Int_3 + (MR_Integer) 1);

    succeeded = mercury__calendar__int_to_month_2_p_0(Var_5, Month_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__calendar__int_to_month_2_p_1(
  MR_Integer * HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    *HeadVar__1_1 = ((&mercury__calendar_vector_common_8[0 + HeadVar__2_2]))->mercury__calendar__vector_common_type_8_0__vct_8_f_0;
  }
}

MR_Integer MR_CALL 
mercury__calendar__microsecond_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 6)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 0)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 1)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 2)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 3)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 4)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 5)));

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__second_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 5)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 0)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 1)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 2)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 3)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 4)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 6)));

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__minute_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 4)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 0)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 1)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 2)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 3)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 5)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 6)));

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__calendar__hour_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 3)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 0)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 1)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 2)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 4)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 5)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 6)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__day_of_week_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer JDN_6;
    MR_Integer Mod_7;
    MR_Integer V_6_12;
    MR_Integer V_7_13;

    JDN_6 = mercury__calendar__julian_day_number_1_f_0(Date_3);
    V_7_13 = mercury__int__div_2_f_0(JDN_6, (MR_Integer) 7);
    V_6_12 = (V_7_13 * (MR_Integer) 7);
    Mod_7 = (JDN_6 - V_6_12);
    HeadVar__2_2 = mercury__calendar__det_day_of_week_from_mod_1_f_0(Mod_7);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_day_of_week_from_mod_1_f_0(
  MR_Integer Mod_3)
{
  {
    MR_bool succeeded;
    MR_Word DayOfWeek_4;
    MR_Word DayOfWeek0_5;

    if ((((MR_Unsigned) Mod_3) <= ((MR_Unsigned) (MR_Integer) 6)))
    {
      DayOfWeek0_5 = ((&mercury__calendar_vector_common_7[0 + Mod_3]))->mercury__calendar__vector_common_type_7_0__vct_7_f_0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      DayOfWeek_4 = DayOfWeek0_5;
    else
    {
      MR_String Var_7;
      MR_String Var_9;

      mercury__string__int_to_base_string_3_p_0(Mod_3, (MR_Integer) 10, &Var_9);
      mercury__string__append_3_p_2((MR_String) "invalid mod: ", Var_9, &Var_7);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_day_of_week_from_mod\'/1", Var_7);
    }
    return DayOfWeek_4;
  }
}

MR_Integer MR_CALL 
mercury__calendar__julian_day_number_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer JDN_10;
    MR_Integer Year_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Month_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Day_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer A_11;
    MR_Integer Y_12;
    MR_Integer M_13;
    MR_Integer Var_14 = ((MR_Integer) 14 - Month_4);
    MR_Integer Var_17;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_Integer Var_23;
    MR_Integer Var_24;
    MR_Integer Var_25;
    MR_Integer Var_26;
    MR_Integer Var_27;
    MR_Integer Var_28;
    MR_Integer Var_29;
    MR_Integer Var_30;
    MR_Integer Var_34;
    MR_Integer Var_36;
    MR_Integer Var_38;
    MR_Integer Var_40;
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));

    A_11 = mercury__int__div_2_f_0(Var_14, (MR_Integer) 12);
    Var_17 = (Year_3 + (MR_Integer) 4800);
    Y_12 = (Var_17 - A_11);
    Var_20 = ((MR_Integer) 12 * A_11);
    Var_19 = (Month_4 + Var_20);
    M_13 = (Var_19 - (MR_Integer) 3);
    Var_30 = ((MR_Integer) 153 * M_13);
    Var_29 = (Var_30 + (MR_Integer) 2);
    Var_28 = mercury__int__div_2_f_0(Var_29, (MR_Integer) 5);
    Var_27 = (Day_5 + Var_28);
    Var_34 = ((MR_Integer) 365 * Y_12);
    Var_26 = (Var_27 + Var_34);
    Var_36 = mercury__int__div_2_f_0(Y_12, (MR_Integer) 4);
    Var_25 = (Var_26 + Var_36);
    Var_38 = mercury__int__div_2_f_0(Y_12, (MR_Integer) 100);
    Var_24 = (Var_25 - Var_38);
    Var_40 = mercury__int__div_2_f_0(Y_12, (MR_Integer) 400);
    Var_23 = (Var_24 + Var_40);
    JDN_10 = (Var_23 - (MR_Integer) 32045);
    return JDN_10;
  }
}

MR_Integer MR_CALL 
mercury__calendar__day_of_month_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 2)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 0)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 1)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 3)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 4)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 5)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 6)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__month_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 1)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 0)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 2)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 3)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 4)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 5)));
    MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 6)));

    HeadVar__2_2 = mercury__calendar__det_int_to_month_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_int_to_month_1_f_0(
  MR_Integer Int_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Month_4;

    succeeded = mercury__calendar__int_to_month_2_p_0(Int_3, &Month_4);
    if (succeeded)
      HeadVar__2_2 = Month_4;
    else
    {
      MR_String Var_6;
      MR_String Var_8;

      mercury__string__int_to_base_string_3_p_0(Int_3, (MR_Integer) 10, &Var_8);
      mercury__string__append_3_p_2((MR_String) "invalid month: ", Var_8, &Var_6);
      mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_int_to_month\'/1", Var_6);
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__calendar__int_to_month_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((((MR_Unsigned) (HeadVar__1_1 - (MR_Integer) 1)) <= ((MR_Unsigned) (MR_Integer) 11)))
    {
      *HeadVar__2_2 = ((&mercury__calendar_vector_common_6[0 + (HeadVar__1_1 - (MR_Integer) 1)]))->mercury__calendar__vector_common_type_6_0__vct_6_f_0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__calendar__year_1_f_0(
  MR_Word Date_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 0)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 1)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 2)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 3)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 4)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 5)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Date_3, (MR_Integer) 6)));

    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____date_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____date_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____date_time_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____date_time_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____date_time_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____day_of_month_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____day_of_month_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____day_of_week_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____day_of_week_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____days_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____days_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____duration_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____duration_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____hour_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____hour_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____hours_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____hours_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____microsecond_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____microsecond_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____microseconds_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____microseconds_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____minute_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____minute_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____minutes_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____minutes_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____month_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____month_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____months_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____months_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____order_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____order_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____second_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____second_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____seconds_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____seconds_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____year_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____year_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__calendar____Unify____years_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__calendar____Compare____years_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
