/*
** Automatically generated from `calendar.m'
** by the Mercury compiler,
** version rotd-2023-10-01
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module calendar.
// :- implementation.

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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
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

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_ordinal_ordered_day_of_week_0[7];

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

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_ordinal_ordered_month_0[12];

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_month_0[12];

static const MR_Integer mercury__calendar__calendar__functor_number_map_month_0[12];

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0;

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1;

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_ordinal_ordered_order_0[2];

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_name_ordered_order_0[2];

static const MR_Integer mercury__calendar__calendar__functor_number_map_order_0[2];

static MR_Word MR_CALL 
mercury__calendar__do_day_duration_2_f_0(
  MR_Word DateA_4,
  MR_Word DateB_5);

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
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_55_95_95_91_51_93_95_48_2_p_in__list_0(
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
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_57_95_95_91_50_93_95_48_4_p_in__string_0(
  MR_Char Var_14,
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

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

static /* final */ const MR_Box mercury__calendar_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__calendar_scalar_common_5[3][1];

static /* final */ const MR_Box mercury__calendar_scalar_common_6[5][7];


struct mercury__calendar__vector_common_type_7_0_s {
  const MR_Word mercury__calendar__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__calendar__vector_common_type_7_0_s mercury__calendar_vector_common_7[12];

struct mercury__calendar__vector_common_type_8_0_s {
  const MR_Word mercury__calendar__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mercury__calendar__vector_common_type_8_0_s mercury__calendar_vector_common_8[7];

struct mercury__calendar__vector_common_type_9_0_s {
  const MR_Integer mercury__calendar__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct mercury__calendar__vector_common_type_9_0_s mercury__calendar_vector_common_9[12];



static /* final */ const MR_Box mercury__calendar_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__calendar_scalar_common_6[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__calendar_scalar_common_6[2])),
    ((MR_Box) (MR_mkword(1, &mercury__calendar_scalar_common_1[1])))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__calendar_scalar_common_6[3])),
    ((MR_Box) (MR_mkword(1, &mercury__calendar_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__calendar_scalar_common_6[4])),
    ((MR_Box) (MR_mkword(1, &mercury__calendar_scalar_common_1[3])))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_3[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__calendar_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__calendar_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_5[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 6)) },
};

static /* final */ const MR_Box mercury__calendar_scalar_common_6[5][7] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 1970)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1903)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 1903)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 1697)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
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


static /* final */ const struct mercury__calendar__vector_common_type_7_0_s mercury__calendar_vector_common_7[12] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
  /* row   8 */   { (MR_Integer) 8 },
  /* row   9 */   { (MR_Integer) 9 },
  /* row  10 */   { (MR_Integer) 10 },
  /* row  11 */   { (MR_Integer) 11 },
};

static /* final */ const struct mercury__calendar__vector_common_type_8_0_s mercury__calendar_vector_common_8[7] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
};

static /* final */ const struct mercury__calendar__vector_common_type_9_0_s mercury__calendar_vector_common_9[12] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 3 },
  /* row   3 */   { (MR_Integer) 4 },
  /* row   4 */   { (MR_Integer) 5 },
  /* row   5 */   { (MR_Integer) 6 },
  /* row   6 */   { (MR_Integer) 7 },
  /* row   7 */   { (MR_Integer) 8 },
  /* row   8 */   { (MR_Integer) 9 },
  /* row   9 */   { (MR_Integer) 10 },
  /* row  10 */   { (MR_Integer) 11 },
  /* row  11 */   { (MR_Integer) 12 },
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
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
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
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_date_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__calendar__calendar__field_types_date_0_0,
  mercury__calendar__calendar__field_names_date_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_date_0_0[1] = { &mercury__calendar__calendar__du_functor_desc_date_0_0 };

static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_date_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_date_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_date_0[1] = { &mercury__calendar__calendar__du_functor_desc_date_0_0 };

static const MR_Integer mercury__calendar__calendar__functor_number_map_date_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_date_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__calendar____Unify____date_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____date_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "date",
  { mercury__calendar__calendar__du_name_ordered_date_0 },
  { mercury__calendar__calendar__du_ptag_ordered_date_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__calendar__calendar__functor_number_map_date_0,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_date_time_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____date_time_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____date_time_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "date_time",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__calendar__calendar__type_ctor_info_date_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_day_of_month_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____day_of_month_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____day_of_month_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "day_of_month",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_0 = {
  (MR_String) "monday",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_1 = {
  (MR_String) "tuesday",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_2 = {
  (MR_String) "wednesday",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_3 = {
  (MR_String) "thursday",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_4 = {
  (MR_String) "friday",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_5 = {
  (MR_String) "saturday",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_day_of_week_0_6 = {
  (MR_String) "sunday",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_ordinal_ordered_day_of_week_0[7] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____day_of_week_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____day_of_week_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "day_of_week",
  { mercury__calendar__calendar__enum_name_ordered_day_of_week_0 },
  { mercury__calendar__calendar__enum_ordinal_ordered_day_of_week_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  mercury__calendar__calendar__functor_number_map_day_of_week_0,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_days_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____days_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____days_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "days",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__calendar__calendar__field_types_duration_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__calendar__calendar__field_names_duration_0_0[4] = {
  (MR_String) "dur_months",
  (MR_String) "dur_days",
  (MR_String) "dur_seconds",
  (MR_String) "dur_microseconds"
};

static const MR_DuFunctorDesc mercury__calendar__calendar__du_functor_desc_duration_0_0 = {
  (MR_String) "duration",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__calendar__calendar__field_types_duration_0_0,
  mercury__calendar__calendar__field_names_duration_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_stag_ordered_duration_0_0[1] = { &mercury__calendar__calendar__du_functor_desc_duration_0_0 };

static const MR_DuPtagLayout mercury__calendar__calendar__du_ptag_ordered_duration_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__calendar__calendar__du_stag_ordered_duration_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__calendar__calendar__du_name_ordered_duration_0[1] = { &mercury__calendar__calendar__du_functor_desc_duration_0_0 };

static const MR_Integer mercury__calendar__calendar__functor_number_map_duration_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_duration_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__calendar____Unify____duration_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____duration_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "duration",
  { mercury__calendar__calendar__du_name_ordered_duration_0 },
  { mercury__calendar__calendar__du_ptag_ordered_duration_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__calendar__calendar__functor_number_map_duration_0,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_hour_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____hour_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____hour_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "hour",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_hours_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____hours_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____hours_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "hours",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_microsecond_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____microsecond_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____microsecond_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "microsecond",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_microseconds_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____microseconds_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____microseconds_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "microseconds",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_minute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____minute_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____minute_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "minute",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_minutes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____minutes_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____minutes_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "minutes",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_0 = {
  (MR_String) "january",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_1 = {
  (MR_String) "february",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_2 = {
  (MR_String) "march",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_3 = {
  (MR_String) "april",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_4 = {
  (MR_String) "may",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_5 = {
  (MR_String) "june",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_6 = {
  (MR_String) "july",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_7 = {
  (MR_String) "august",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_8 = {
  (MR_String) "september",
  INT32_C(8)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_9 = {
  (MR_String) "october",
  INT32_C(9)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_10 = {
  (MR_String) "november",
  INT32_C(10)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_month_0_11 = {
  (MR_String) "december",
  INT32_C(11)
};

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_ordinal_ordered_month_0[12] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____month_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____month_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "month",
  { mercury__calendar__calendar__enum_name_ordered_month_0 },
  { mercury__calendar__calendar__enum_ordinal_ordered_month_0 },
  (MR_Integer) 12,
  UINT16_C(12),
  mercury__calendar__calendar__functor_number_map_month_0,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_months_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____months_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____months_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "months",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_0 = {
  (MR_String) "ascending",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__calendar__calendar__enum_functor_desc_order_0_1 = {
  (MR_String) "descending",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__calendar__calendar__enum_ordinal_ordered_order_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__calendar____Unify____order_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____order_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "order",
  { mercury__calendar__calendar__enum_name_ordered_order_0 },
  { mercury__calendar__calendar__enum_ordinal_ordered_order_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__calendar__calendar__functor_number_map_order_0,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_second_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____second_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____second_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "second",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_seconds_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____seconds_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____seconds_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "seconds",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_year_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____year_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____year_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "year",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__calendar__calendar__type_ctor_info_years_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__calendar____Unify____years_0_0_10001)),
  ((MR_Box) (mercury__calendar____Compare____years_0_0_10001)),
  (MR_String) "calendar",
  (MR_String) "years",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__calendar____Compare____years_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____year_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____seconds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____second_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____order_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____months_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____month_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____minutes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____minute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____microseconds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____microsecond_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____hours_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____hour_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____duration_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
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

MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

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

void MR_CALL 
mercury__calendar____Compare____days_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar____Compare____date_time_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__calendar____Compare____date_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__calendar____Unify____date_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));

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

MR_Word MR_CALL 
mercury__calendar__test_dates_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__calendar_scalar_common_1[4]));
}

MR_Word MR_CALL 
mercury__calendar__tm_to_date_1_f_0(
  MR_Word TM_3)
{
  MR_Word Date_4;
  MR_Integer TMYear_5 = ((MR_Integer) ((MR_hl_field(0, TM_3, (MR_Integer) 0))));
  MR_Integer TMMonth_6 = ((MR_Integer) ((MR_hl_field(0, TM_3, (MR_Integer) 1))));
  MR_Integer Year_14 = (MR_Integer) ((MR_Unsigned) 1900 + (MR_Unsigned) TMYear_5);
  MR_Integer Month_15 = (MR_Integer) ((MR_Unsigned) TMMonth_6 + (MR_Unsigned) 1);
  MR_Integer Day_16 = ((MR_Integer) ((MR_hl_field(0, TM_3, (MR_Integer) 2))));
  MR_Integer Hour_17 = ((MR_Integer) ((MR_hl_field(0, TM_3, (MR_Integer) 3))));
  MR_Integer Minute_18 = ((MR_Integer) ((MR_hl_field(0, TM_3, (MR_Integer) 4))));
  MR_Integer Second_19 = ((MR_Integer) ((MR_hl_field(0, TM_3, (MR_Integer) 5))));

  {
    Date_4 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Date_4, 0) = ((MR_Box) (Year_14));
    MR_hl_field(0, Date_4, 1) = ((MR_Box) (Month_15));
    MR_hl_field(0, Date_4, 2) = ((MR_Box) (Day_16));
    MR_hl_field(0, Date_4, 3) = ((MR_Box) (Hour_17));
    MR_hl_field(0, Date_4, 4) = ((MR_Box) (Minute_18));
    MR_hl_field(0, Date_4, 5) = ((MR_Box) (Second_19));
    MR_hl_field(0, Date_4, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  return Date_4;
}

MR_Word MR_CALL 
mercury__calendar__compute_day_of_week_1_f_0(
  MR_Word Date_3)
{
  MR_Word DayOfWeek_4;
  MR_Integer JDN_5;
  MR_Integer Mod_6;
  MR_Integer Var_8;
  MR_Integer Var_9;

  JDN_5 = mercury__calendar__julian_day_number_1_f_0(Date_3);
  Var_9 = mercury__int__div_2_f_0(JDN_5, (MR_Integer) 7);
  Var_8 = (MR_Integer) ((MR_Unsigned) Var_9 * (MR_Unsigned) 7);
  Mod_6 = (MR_Integer) ((MR_Unsigned) JDN_5 - (MR_Unsigned) Var_8);
  DayOfWeek_4 = mercury__calendar__det_day_of_week_from_mod_1_f_0(Mod_6);
  return DayOfWeek_4;
}

MR_bool MR_CALL 
mercury__calendar__foldl3_days_9_p_5(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          succeeded = func_0(((MR_Box) (Pred_10)), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          succeeded = func_0(((MR_Box) (Pred_10)), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          succeeded = func_0(((MR_Box) (Pred_10)), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
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

    // setup for model_det tailcalls optimized into a loop
    ;
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
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          func_0(((MR_Box) (Pred_10)), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
          // direct tailcall eliminated
          ;
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
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
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

    // setup for model_det tailcalls optimized into a loop
    ;
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
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          func_0(((MR_Box) (Pred_10)), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
          // direct tailcall eliminated
          ;
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
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
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

    // setup for model_det tailcalls optimized into a loop
    ;
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
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_17;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

          func_0(((MR_Box) (Pred_10)), ((MR_Box) (STATE_VARIABLE_Curr_0_17)), STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_25_25, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_26_26);
          Var_27 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_27, STATE_VARIABLE_Curr_0_17, &STATE_VARIABLE_Curr_28_28);
          // direct tailcall eliminated
          ;
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
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          succeeded = func_0(((MR_Box) (Pred_8)), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          succeeded = func_0(((MR_Box) (Pred_8)), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          succeeded = func_0(((MR_Box) (Pred_8)), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
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

    // setup for model_det tailcalls optimized into a loop
    ;
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
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
          // direct tailcall eliminated
          ;
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
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
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

    // setup for model_det tailcalls optimized into a loop
    ;
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
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
          // direct tailcall eliminated
          ;
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
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
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

    // setup for model_det tailcalls optimized into a loop
    ;
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
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_14;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (STATE_VARIABLE_Curr_0_14)), STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_20_20);
          Var_21 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_21, STATE_VARIABLE_Curr_0_14, &STATE_VARIABLE_Curr_22_22);
          // direct tailcall eliminated
          ;
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
  MR_Word TypeInfo_for_A_24,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          succeeded = func_0(((MR_Box) (Pred_6)), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_24,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          succeeded = func_0(((MR_Box) (Pred_6)), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_24,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
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
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          succeeded = func_0(((MR_Box) (Pred_6)), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
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
            // direct tailcall eliminated
            ;
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
  MR_Word TypeInfo_for_A_24,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_Word Res_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          func_0(((MR_Box) (Pred_6)), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
          // direct tailcall eliminated
          ;
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
  MR_Word TypeInfo_for_A_24,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_Word Res_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          func_0(((MR_Box) (Pred_6)), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
          // direct tailcall eliminated
          ;
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
  MR_Word TypeInfo_for_A_24,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Curr_0_11,
  MR_Word End_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_Word Res_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__calendar____Compare____date_0_0(&Res_10, STATE_VARIABLE_Curr_0_11, End_8);
    switch (Res_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_Acc_14_14;
          MR_Word Var_15;
          MR_Word STATE_VARIABLE_Curr_16_16;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, (MR_Integer) 1))));
          MR_Word next_value_of_STATE_VARIABLE_Curr_0_11;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

          func_0(((MR_Box) (Pred_6)), ((MR_Box) (STATE_VARIABLE_Curr_0_11)), STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_14_14);
          Var_15 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          mercury__calendar__add_duration_3_p_0(Var_15, STATE_VARIABLE_Curr_0_11, &STATE_VARIABLE_Curr_16_16);
          // direct tailcall eliminated
          ;
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
  MR_bool succeeded;
  MR_Word Duration_6;
  MR_Word CompResult_7;

  mercury__calendar____Compare____date_0_0(&CompResult_7, DateB_5, DateA_4);
  switch (CompResult_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Duration0_8;
        MR_Integer MicroSecond1_10 = ((MR_Integer) ((MR_hl_field(0, DateA_4, (MR_Integer) 6))));
        MR_Integer MicroSecond2_11 = ((MR_Integer) ((MR_hl_field(0, DateB_5, (MR_Integer) 6))));
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
        MR_Integer STATE_VARIABLE_Borrow_24_26;
        MR_Integer Var_27;
        MR_Integer STATE_VARIABLE_Borrow_27_29;
        MR_Integer Var_30;
        MR_Integer STATE_VARIABLE_Borrow_30_32;
        MR_Integer Var_33;
        MR_Integer STATE_VARIABLE_Borrow_33_35;
        MR_Integer Var_36;
        MR_Integer Months_91;
        MR_Integer Days_92;
        MR_Integer Seconds_93;
        MR_Integer MicroSeconds_94;
        MR_Integer Var_95;
        MR_Integer Var_96;
        MR_Integer Var_97;
        MR_Integer Var_98;

        succeeded = (MicroSecond1_10 >= MicroSecond2_11);
        if (succeeded)
        {
          STATE_VARIABLE_Borrow_24_26 = (MR_Integer) 0;
          MicroSeconds_12 = (MR_Integer) ((MR_Unsigned) MicroSecond1_10 - (MR_Unsigned) MicroSecond2_11);
        }
        else
        {
          MR_Integer Var_87;

          STATE_VARIABLE_Borrow_24_26 = (MR_Integer) 1;
          Var_87 = (MR_Integer) ((MR_Unsigned) 1000000 + (MR_Unsigned) MicroSecond1_10);
          MicroSeconds_12 = (MR_Integer) ((MR_Unsigned) Var_87 - (MR_Unsigned) MicroSecond2_11);
        }
        Var_27 = ((MR_Integer) ((MR_hl_field(0, DateA_4, (MR_Integer) 5))));
        Second1_13 = (MR_Integer) ((MR_Unsigned) Var_27 - (MR_Unsigned) STATE_VARIABLE_Borrow_24_26);
        Second2_14 = ((MR_Integer) ((MR_hl_field(0, DateB_5, (MR_Integer) 5))));
        succeeded = (Second1_13 >= Second2_14);
        if (succeeded)
        {
          STATE_VARIABLE_Borrow_27_29 = (MR_Integer) 0;
          Seconds_15 = (MR_Integer) ((MR_Unsigned) Second1_13 - (MR_Unsigned) Second2_14);
        }
        else
        {
          MR_Integer Var_88;

          STATE_VARIABLE_Borrow_27_29 = (MR_Integer) 1;
          Var_88 = (MR_Integer) ((MR_Unsigned) 60 + (MR_Unsigned) Second1_13);
          Seconds_15 = (MR_Integer) ((MR_Unsigned) Var_88 - (MR_Unsigned) Second2_14);
        }
        Var_30 = ((MR_Integer) ((MR_hl_field(0, DateA_4, (MR_Integer) 4))));
        Minute1_16 = (MR_Integer) ((MR_Unsigned) Var_30 - (MR_Unsigned) STATE_VARIABLE_Borrow_27_29);
        Minute2_17 = ((MR_Integer) ((MR_hl_field(0, DateB_5, (MR_Integer) 4))));
        succeeded = (Minute1_16 >= Minute2_17);
        if (succeeded)
        {
          STATE_VARIABLE_Borrow_30_32 = (MR_Integer) 0;
          Minutes_18 = (MR_Integer) ((MR_Unsigned) Minute1_16 - (MR_Unsigned) Minute2_17);
        }
        else
        {
          MR_Integer Var_89;

          STATE_VARIABLE_Borrow_30_32 = (MR_Integer) 1;
          Var_89 = (MR_Integer) ((MR_Unsigned) 60 + (MR_Unsigned) Minute1_16);
          Minutes_18 = (MR_Integer) ((MR_Unsigned) Var_89 - (MR_Unsigned) Minute2_17);
        }
        Var_33 = ((MR_Integer) ((MR_hl_field(0, DateA_4, (MR_Integer) 3))));
        Hour1_19 = (MR_Integer) ((MR_Unsigned) Var_33 - (MR_Unsigned) STATE_VARIABLE_Borrow_30_32);
        Hour2_20 = ((MR_Integer) ((MR_hl_field(0, DateB_5, (MR_Integer) 3))));
        succeeded = (Hour1_19 >= Hour2_20);
        if (succeeded)
        {
          STATE_VARIABLE_Borrow_33_35 = (MR_Integer) 0;
          Hours_21 = (MR_Integer) ((MR_Unsigned) Hour1_19 - (MR_Unsigned) Hour2_20);
        }
        else
        {
          MR_Integer Var_90;

          STATE_VARIABLE_Borrow_33_35 = (MR_Integer) 1;
          Var_90 = (MR_Integer) ((MR_Unsigned) 24 + (MR_Unsigned) Hour1_19);
          Hours_21 = (MR_Integer) ((MR_Unsigned) Var_90 - (MR_Unsigned) Hour2_20);
        }
        JDN1_22 = mercury__calendar__julian_day_number_1_f_0(DateA_4);
        JDN2_23 = mercury__calendar__julian_day_number_1_f_0(DateB_5);
        Var_36 = (MR_Integer) ((MR_Unsigned) JDN1_22 - (MR_Unsigned) STATE_VARIABLE_Borrow_33_35);
        Days_24 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) JDN2_23);
        Duration0_8 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, Days_24, Hours_21, Minutes_18, Seconds_15, MicroSeconds_12);
        Months_91 = ((MR_Integer) ((MR_hl_field(0, Duration0_8, (MR_Integer) 0))));
        Days_92 = ((MR_Integer) ((MR_hl_field(0, Duration0_8, (MR_Integer) 1))));
        Seconds_93 = ((MR_Integer) ((MR_hl_field(0, Duration0_8, (MR_Integer) 2))));
        MicroSeconds_94 = ((MR_Integer) ((MR_hl_field(0, Duration0_8, (MR_Integer) 3))));
        Var_95 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Months_91);
        Var_96 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Days_92);
        Var_97 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Seconds_93);
        Var_98 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) MicroSeconds_94);
        {
          Duration_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Duration_6, 0) = ((MR_Box) (Var_95));
          MR_hl_field(0, Duration_6, 1) = ((MR_Box) (Var_96));
          MR_hl_field(0, Duration_6, 2) = ((MR_Box) (Var_97));
          MR_hl_field(0, Duration_6, 3) = ((MR_Box) (Var_98));
        }
      }
      break;
    case (MR_Integer) 0:
      Duration_6 = (MR_Word) (&mercury__calendar_scalar_common_3[1]);
      break;
    case (MR_Integer) 2:
      Duration_6 = mercury__calendar__do_day_duration_2_f_0(DateA_4, DateB_5);
      break;
  }
  return Duration_6;
}

static MR_Word MR_CALL 
mercury__calendar__do_day_duration_2_f_0(
  MR_Word DateA_4,
  MR_Word DateB_5)
{
  MR_bool succeeded;
  MR_Word Duration_6;
  MR_Integer MicroSecond1_8 = ((MR_Integer) ((MR_hl_field(0, DateB_5, (MR_Integer) 6))));
  MR_Integer MicroSecond2_9 = ((MR_Integer) ((MR_hl_field(0, DateA_4, (MR_Integer) 6))));
  MR_Integer MicroSeconds_10;
  MR_Integer Second1_11;
  MR_Integer Second2_12;
  MR_Integer Seconds_13;
  MR_Integer Minute1_14;
  MR_Integer Minute2_15;
  MR_Integer Minutes_16;
  MR_Integer Hour1_17;
  MR_Integer Hour2_18;
  MR_Integer Hours_19;
  MR_Integer JDN1_20;
  MR_Integer JDN2_21;
  MR_Integer Days_22;
  MR_Integer STATE_VARIABLE_Borrow_24_24;
  MR_Integer Var_25;
  MR_Integer STATE_VARIABLE_Borrow_27_27;
  MR_Integer Var_28;
  MR_Integer STATE_VARIABLE_Borrow_30_30;
  MR_Integer Var_31;
  MR_Integer STATE_VARIABLE_Borrow_33_33;
  MR_Integer Var_34;

  succeeded = (MicroSecond1_8 >= MicroSecond2_9);
  if (succeeded)
  {
    STATE_VARIABLE_Borrow_24_24 = (MR_Integer) 0;
    MicroSeconds_10 = (MR_Integer) ((MR_Unsigned) MicroSecond1_8 - (MR_Unsigned) MicroSecond2_9);
  }
  else
  {
    MR_Integer Var_85;

    STATE_VARIABLE_Borrow_24_24 = (MR_Integer) 1;
    Var_85 = (MR_Integer) ((MR_Unsigned) 1000000 + (MR_Unsigned) MicroSecond1_8);
    MicroSeconds_10 = (MR_Integer) ((MR_Unsigned) Var_85 - (MR_Unsigned) MicroSecond2_9);
  }
  Var_25 = ((MR_Integer) ((MR_hl_field(0, DateB_5, (MR_Integer) 5))));
  Second1_11 = (MR_Integer) ((MR_Unsigned) Var_25 - (MR_Unsigned) STATE_VARIABLE_Borrow_24_24);
  Second2_12 = ((MR_Integer) ((MR_hl_field(0, DateA_4, (MR_Integer) 5))));
  succeeded = (Second1_11 >= Second2_12);
  if (succeeded)
  {
    STATE_VARIABLE_Borrow_27_27 = (MR_Integer) 0;
    Seconds_13 = (MR_Integer) ((MR_Unsigned) Second1_11 - (MR_Unsigned) Second2_12);
  }
  else
  {
    MR_Integer Var_86;

    STATE_VARIABLE_Borrow_27_27 = (MR_Integer) 1;
    Var_86 = (MR_Integer) ((MR_Unsigned) 60 + (MR_Unsigned) Second1_11);
    Seconds_13 = (MR_Integer) ((MR_Unsigned) Var_86 - (MR_Unsigned) Second2_12);
  }
  Var_28 = ((MR_Integer) ((MR_hl_field(0, DateB_5, (MR_Integer) 4))));
  Minute1_14 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) STATE_VARIABLE_Borrow_27_27);
  Minute2_15 = ((MR_Integer) ((MR_hl_field(0, DateA_4, (MR_Integer) 4))));
  succeeded = (Minute1_14 >= Minute2_15);
  if (succeeded)
  {
    STATE_VARIABLE_Borrow_30_30 = (MR_Integer) 0;
    Minutes_16 = (MR_Integer) ((MR_Unsigned) Minute1_14 - (MR_Unsigned) Minute2_15);
  }
  else
  {
    MR_Integer Var_87;

    STATE_VARIABLE_Borrow_30_30 = (MR_Integer) 1;
    Var_87 = (MR_Integer) ((MR_Unsigned) 60 + (MR_Unsigned) Minute1_14);
    Minutes_16 = (MR_Integer) ((MR_Unsigned) Var_87 - (MR_Unsigned) Minute2_15);
  }
  Var_31 = ((MR_Integer) ((MR_hl_field(0, DateB_5, (MR_Integer) 3))));
  Hour1_17 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) STATE_VARIABLE_Borrow_30_30);
  Hour2_18 = ((MR_Integer) ((MR_hl_field(0, DateA_4, (MR_Integer) 3))));
  succeeded = (Hour1_17 >= Hour2_18);
  if (succeeded)
  {
    STATE_VARIABLE_Borrow_33_33 = (MR_Integer) 0;
    Hours_19 = (MR_Integer) ((MR_Unsigned) Hour1_17 - (MR_Unsigned) Hour2_18);
  }
  else
  {
    MR_Integer Var_88;

    STATE_VARIABLE_Borrow_33_33 = (MR_Integer) 1;
    Var_88 = (MR_Integer) ((MR_Unsigned) 24 + (MR_Unsigned) Hour1_17);
    Hours_19 = (MR_Integer) ((MR_Unsigned) Var_88 - (MR_Unsigned) Hour2_18);
  }
  JDN1_20 = mercury__calendar__julian_day_number_1_f_0(DateB_5);
  JDN2_21 = mercury__calendar__julian_day_number_1_f_0(DateA_4);
  Var_34 = (MR_Integer) ((MR_Unsigned) JDN1_20 - (MR_Unsigned) STATE_VARIABLE_Borrow_33_33);
  Days_22 = (MR_Integer) ((MR_Unsigned) Var_34 - (MR_Unsigned) JDN2_21);
  Duration_6 = mercury__calendar__init_duration_7_f_0((MR_Integer) 0, (MR_Integer) 0, Days_22, Hours_19, Minutes_16, Seconds_13, MicroSeconds_10);
  return Duration_6;
}

void MR_CALL 
mercury__calendar__local_time_offset_3_p_0(
  MR_Word * TZ_4)
{
  MR_Word TimeT_6;
  MR_Word LocalTM_7;
  MR_Word GMTM_8;
  MR_Word LocalTime_9;
  MR_Word GMTime_10;
  MR_Integer TMYear_14;
  MR_Integer TMMonth_15;
  MR_Integer Year_23;
  MR_Integer Month_24;
  MR_Integer Day_25;
  MR_Integer Hour_26;
  MR_Integer Minute_27;
  MR_Integer Second_28;
  MR_Integer TMYear_32;
  MR_Integer TMMonth_33;
  MR_Integer Year_41;
  MR_Integer Month_42;
  MR_Integer Day_43;
  MR_Integer Hour_44;
  MR_Integer Minute_45;
  MR_Integer Second_46;

  mercury__time__time_3_p_0(&TimeT_6);
  mercury__time__localtime_4_p_0(TimeT_6, &LocalTM_7);
  GMTM_8 = mercury__time__gmtime_1_f_0(TimeT_6);
  TMYear_14 = ((MR_Integer) ((MR_hl_field(0, LocalTM_7, (MR_Integer) 0))));
  TMMonth_15 = ((MR_Integer) ((MR_hl_field(0, LocalTM_7, (MR_Integer) 1))));
  Day_25 = ((MR_Integer) ((MR_hl_field(0, LocalTM_7, (MR_Integer) 2))));
  Hour_26 = ((MR_Integer) ((MR_hl_field(0, LocalTM_7, (MR_Integer) 3))));
  Minute_27 = ((MR_Integer) ((MR_hl_field(0, LocalTM_7, (MR_Integer) 4))));
  Second_28 = ((MR_Integer) ((MR_hl_field(0, LocalTM_7, (MR_Integer) 5))));
  Year_23 = (MR_Integer) ((MR_Unsigned) 1900 + (MR_Unsigned) TMYear_14);
  Month_24 = (MR_Integer) ((MR_Unsigned) TMMonth_15 + (MR_Unsigned) 1);
  {
    LocalTime_9 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LocalTime_9, 0) = ((MR_Box) (Year_23));
    MR_hl_field(0, LocalTime_9, 1) = ((MR_Box) (Month_24));
    MR_hl_field(0, LocalTime_9, 2) = ((MR_Box) (Day_25));
    MR_hl_field(0, LocalTime_9, 3) = ((MR_Box) (Hour_26));
    MR_hl_field(0, LocalTime_9, 4) = ((MR_Box) (Minute_27));
    MR_hl_field(0, LocalTime_9, 5) = ((MR_Box) (Second_28));
    MR_hl_field(0, LocalTime_9, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  TMYear_32 = ((MR_Integer) ((MR_hl_field(0, GMTM_8, (MR_Integer) 0))));
  TMMonth_33 = ((MR_Integer) ((MR_hl_field(0, GMTM_8, (MR_Integer) 1))));
  Day_43 = ((MR_Integer) ((MR_hl_field(0, GMTM_8, (MR_Integer) 2))));
  Hour_44 = ((MR_Integer) ((MR_hl_field(0, GMTM_8, (MR_Integer) 3))));
  Minute_45 = ((MR_Integer) ((MR_hl_field(0, GMTM_8, (MR_Integer) 4))));
  Second_46 = ((MR_Integer) ((MR_hl_field(0, GMTM_8, (MR_Integer) 5))));
  Year_41 = (MR_Integer) ((MR_Unsigned) 1900 + (MR_Unsigned) TMYear_32);
  Month_42 = (MR_Integer) ((MR_Unsigned) TMMonth_33 + (MR_Unsigned) 1);
  {
    GMTime_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GMTime_10, 0) = ((MR_Box) (Year_41));
    MR_hl_field(0, GMTime_10, 1) = ((MR_Box) (Month_42));
    MR_hl_field(0, GMTime_10, 2) = ((MR_Box) (Day_43));
    MR_hl_field(0, GMTime_10, 3) = ((MR_Box) (Hour_44));
    MR_hl_field(0, GMTime_10, 4) = ((MR_Box) (Minute_45));
    MR_hl_field(0, GMTime_10, 5) = ((MR_Box) (Second_46));
    MR_hl_field(0, GMTime_10, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  *TZ_4 = mercury__calendar__duration_2_f_0(GMTime_10, LocalTime_9);
}

MR_Word MR_CALL 
mercury__calendar__duration_2_f_0(
  MR_Word DateA_4,
  MR_Word DateB_5)
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
        Months_12 = ((MR_Integer) ((MR_hl_field(0, Duration0_8, (MR_Integer) 0))));
        Days_13 = ((MR_Integer) ((MR_hl_field(0, Duration0_8, (MR_Integer) 1))));
        Seconds_14 = ((MR_Integer) ((MR_hl_field(0, Duration0_8, (MR_Integer) 2))));
        MicroSeconds_15 = ((MR_Integer) ((MR_hl_field(0, Duration0_8, (MR_Integer) 3))));
        Var_16 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Months_12);
        Var_17 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Days_13);
        Var_18 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Seconds_14);
        Var_19 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) MicroSeconds_15);
        {
          Duration_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Duration_6, 0) = ((MR_Box) (Var_16));
          MR_hl_field(0, Duration_6, 1) = ((MR_Box) (Var_17));
          MR_hl_field(0, Duration_6, 2) = ((MR_Box) (Var_18));
          MR_hl_field(0, Duration_6, 3) = ((MR_Box) (Var_19));
        }
      }
      break;
    case (MR_Integer) 0:
      Duration_6 = (MR_Word) (&mercury__calendar_scalar_common_3[1]);
      break;
    case (MR_Integer) 2:
      mercury__calendar__greedy_subtract_descending_4_p_0((MR_Integer) 1, DateB_5, DateA_4, &Duration_6);
      break;
  }
  return Duration_6;
}

static void MR_CALL 
mercury__calendar__greedy_subtract_descending_4_p_0(
  MR_Word OriginalOrder_5,
  MR_Word DateA_6,
  MR_Word DateB_7,
  MR_Word * Duration_8)
{
  MR_bool succeeded;
  MR_Integer MicroSecondA_10 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 6))));
  MR_Integer MicroSecondB_11 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 6))));
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

  Var_35 = mercury__calendar__microseconds_per_second_0_f_0();
  mercury__calendar__subtract_ints_with_borrow_5_p_0(Var_35, MicroSecondA_10, MicroSecondB_11, &MicroSeconds_12, &STATE_VARIABLE_Borrow_36_36);
  Var_37 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 5))));
  SecondA_13 = (MR_Integer) ((MR_Unsigned) Var_37 - (MR_Unsigned) STATE_VARIABLE_Borrow_36_36);
  SecondB_14 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 5))));
  mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, SecondA_13, SecondB_14, &Seconds_15, &STATE_VARIABLE_Borrow_39_39);
  Var_40 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 4))));
  MinuteA_16 = (MR_Integer) ((MR_Unsigned) Var_40 - (MR_Unsigned) STATE_VARIABLE_Borrow_39_39);
  MinuteB_17 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 4))));
  mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 60, MinuteA_16, MinuteB_17, &Minutes_18, &STATE_VARIABLE_Borrow_42_42);
  Var_43 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 3))));
  HourA_19 = (MR_Integer) ((MR_Unsigned) Var_43 - (MR_Unsigned) STATE_VARIABLE_Borrow_42_42);
  HourB_20 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 3))));
  mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 24, HourA_19, HourB_20, &Hours_21, &STATE_VARIABLE_Borrow_45_45);
  switch (OriginalOrder_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer DateBEndOfMonth_27;
        MR_Integer Var_57 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 0))));
        MR_Integer Var_59;
        MR_Integer Var_61;
        MR_Integer Var_62;
        MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 1))));
        MR_Integer Var_166;

        DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(Var_57, Var_154);
        Var_59 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 0))));
        Var_166 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 1))));
        DateBEndOfMonth_27 = mercury__calendar__max_day_in_month_for_2_f_0(Var_59, Var_166);
        Var_62 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 2))));
        Var_61 = (MR_Integer) ((MR_Unsigned) Var_62 - (MR_Unsigned) STATE_VARIABLE_Borrow_45_45);
        DayA_25 = mercury__int__min_2_f_0(Var_61, DateBEndOfMonth_27);
        DayB_26 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 2))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DateAMinus1Month_22;
        MR_Integer DateAEndOfMonth_24;
        MR_Integer Var_51;
        MR_Integer Var_53;
        MR_Integer Var_55;
        MR_Integer Var_56;
        MR_Integer Var_118;
        MR_Integer Var_130;

        mercury__calendar__add_duration_3_p_0((MR_Word) (&mercury__calendar_scalar_common_3[2]), DateA_6, &DateAMinus1Month_22);
        Var_51 = ((MR_Integer) ((MR_hl_field(0, DateAMinus1Month_22, (MR_Integer) 0))));
        Var_118 = ((MR_Integer) ((MR_hl_field(0, DateAMinus1Month_22, (MR_Integer) 1))));
        DaysToBorrow_23 = mercury__calendar__max_day_in_month_for_2_f_0(Var_51, Var_118);
        Var_53 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 0))));
        Var_130 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 1))));
        DateAEndOfMonth_24 = mercury__calendar__max_day_in_month_for_2_f_0(Var_53, Var_130);
        Var_55 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 2))));
        DayA_25 = (MR_Integer) ((MR_Unsigned) Var_55 - (MR_Unsigned) STATE_VARIABLE_Borrow_45_45);
        Var_56 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 2))));
        DayB_26 = mercury__int__min_2_f_0(Var_56, DateAEndOfMonth_24);
      }
      break;
  }
  mercury__calendar__subtract_ints_with_borrow_5_p_0(DaysToBorrow_23, DayA_25, DayB_26, &Days_28, &STATE_VARIABLE_Borrow_63_63);
  Var_64 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 1))));
  MonthA_29 = (MR_Integer) ((MR_Unsigned) Var_64 - (MR_Unsigned) STATE_VARIABLE_Borrow_63_63);
  MonthB_30 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 1))));
  mercury__calendar__subtract_ints_with_borrow_5_p_0((MR_Integer) 12, MonthA_29, MonthB_30, &Months_31, &STATE_VARIABLE_Borrow_66_66);
  Var_67 = ((MR_Integer) ((MR_hl_field(0, DateA_6, (MR_Integer) 0))));
  YearA_32 = (MR_Integer) ((MR_Unsigned) Var_67 - (MR_Unsigned) STATE_VARIABLE_Borrow_66_66);
  YearB_33 = ((MR_Integer) ((MR_hl_field(0, DateB_7, (MR_Integer) 0))));
  succeeded = (YearA_32 >= YearB_33);
  if (succeeded)
    Years_34 = (MR_Integer) ((MR_Unsigned) YearA_32 - (MR_Unsigned) YearB_33);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140calendar.greedy_subtract_descending\'/4", (MR_String) "left over years");
      return;
    }
  *Duration_8 = mercury__calendar__init_duration_7_f_0(Years_34, Months_31, Days_28, Hours_21, Minutes_18, Seconds_15, MicroSeconds_12);
}

static void MR_CALL 
mercury__calendar__subtract_ints_with_borrow_5_p_0(
  MR_Integer BorrowVal_6,
  MR_Integer Val1_7,
  MR_Integer Val2_8,
  MR_Integer * Diff_9,
  MR_Integer * Borrow_10)
{
  MR_bool succeeded = (Val1_7 >= Val2_8);

  if (succeeded)
  {
    *Borrow_10 = (MR_Integer) 0;
    *Diff_9 = (MR_Integer) ((MR_Unsigned) Val1_7 - (MR_Unsigned) Val2_8);
  }
  else
  {
    MR_Integer Var_11;

    *Borrow_10 = (MR_Integer) 1;
    Var_11 = (MR_Integer) ((MR_Unsigned) BorrowVal_6 + (MR_Unsigned) Val1_7);
    *Diff_9 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) Val2_8);
  }
}

MR_bool MR_CALL 
mercury__calendar__duration_leq_2_p_0(
  MR_Word DurA_3,
  MR_Word DurB_4)
{
  MR_bool succeeded;

  succeeded = mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_55_95_95_91_51_93_95_48_2_p_in__list_0(DurA_3, DurB_4, (MR_Word) (MR_mkword(1, &mercury__calendar_scalar_common_1[4])));
  return succeeded;
}

static MR_bool MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_55_95_95_91_51_93_95_48_2_p_in__list_0(
  MR_Word Var_8,
  MR_Word Var_9,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word DateA_10;
      MR_Word DateB_11;
      MR_Word CompRes_12;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__calendar__add_duration_3_p_0(Var_8, Var_5, &DateA_10);
      mercury__calendar__add_duration_3_p_0(Var_9, Var_5, &DateB_11);
      mercury__calendar____Compare____date_0_0(&CompRes_12, DateA_10, DateB_11);
      switch (CompRes_12) {
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
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_6;
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
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 0;
            else
              SubResult4_15 = (MR_Integer) 2;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              SubResult5_18 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 == ArgY5_17);
              if (succeeded)
                SubResult5_18 = (MR_Integer) 0;
              else
                SubResult5_18 = (MR_Integer) 2;
            }
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                SubResult6_21 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 == ArgY6_20);
                if (succeeded)
                  SubResult6_21 = (MR_Integer) 0;
                else
                  SubResult6_21 = (MR_Integer) 2;
              }
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX7_22 == ArgY7_23);
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

void MR_CALL 
mercury__calendar__add_duration_3_p_0(
  MR_Word D_4,
  MR_Word S_5,
  MR_Word * STATE_VARIABLE_E_18)
{
  MR_bool succeeded;
  MR_Integer EMonth_9;
  MR_Integer EYear_10;
  MR_Integer EMicrosecond_11;
  MR_Integer ESecond_12;
  MR_Integer EMinute_13;
  MR_Integer EHour_14;
  MR_Integer MaxDaysInMonth_15;
  MR_Integer TempDays_16;
  MR_Integer EDay_17;
  MR_Integer STATE_VARIABLE_Temp_19_19;
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 1))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(0, D_4, (MR_Integer) 0))));
  MR_Integer STATE_VARIABLE_Carry_24_24;
  MR_Integer Var_27;
  MR_Integer STATE_VARIABLE_Temp_28_28;
  MR_Integer Var_30;
  MR_Integer Var_31;
  MR_Integer STATE_VARIABLE_Carry_32_32;
  MR_Integer Var_33;
  MR_Integer STATE_VARIABLE_Temp_34_34;
  MR_Integer Var_35;
  MR_Integer Var_36;
  MR_Integer Var_37;
  MR_Integer STATE_VARIABLE_Carry_39_39;
  MR_Integer STATE_VARIABLE_Temp_41_41;
  MR_Integer Var_42;
  MR_Integer STATE_VARIABLE_Carry_44_44;
  MR_Integer STATE_VARIABLE_Temp_46_46;
  MR_Integer Var_47;
  MR_Integer STATE_VARIABLE_Carry_49_49;
  MR_Integer Var_54;
  MR_Integer Var_55;
  MR_Word STATE_VARIABLE_E_56_56;
  MR_Integer Var_71;
  MR_Integer Var_51;

  STATE_VARIABLE_Temp_19_19 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) Var_21);
  EMonth_9 = mercury__calendar__modulo_3_f_0(STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
  STATE_VARIABLE_Carry_24_24 = mercury__calendar__fquotient_3_f_0(STATE_VARIABLE_Temp_19_19, (MR_Integer) 1, (MR_Integer) 13);
  Var_27 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 0))));
  Var_71 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 6))));
  EYear_10 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) STATE_VARIABLE_Carry_24_24);
  Var_30 = ((MR_Integer) ((MR_hl_field(0, D_4, (MR_Integer) 3))));
  STATE_VARIABLE_Temp_28_28 = (MR_Integer) ((MR_Unsigned) Var_71 + (MR_Unsigned) Var_30);
  Var_31 = mercury__calendar__microseconds_per_second_0_f_0();
  EMicrosecond_11 = mercury__calendar__modulo_2_f_0(STATE_VARIABLE_Temp_28_28, Var_31);
  Var_33 = mercury__calendar__microseconds_per_second_0_f_0();
  STATE_VARIABLE_Carry_32_32 = mercury__int__div_2_f_0(STATE_VARIABLE_Temp_28_28, Var_33);
  Var_36 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 5))));
  Var_37 = ((MR_Integer) ((MR_hl_field(0, D_4, (MR_Integer) 2))));
  Var_35 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) Var_37);
  STATE_VARIABLE_Temp_34_34 = (MR_Integer) ((MR_Unsigned) Var_35 + (MR_Unsigned) STATE_VARIABLE_Carry_32_32);
  ESecond_12 = mercury__calendar__modulo_2_f_0(STATE_VARIABLE_Temp_34_34, (MR_Integer) 60);
  STATE_VARIABLE_Carry_39_39 = mercury__int__div_2_f_0(STATE_VARIABLE_Temp_34_34, (MR_Integer) 60);
  Var_42 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 4))));
  STATE_VARIABLE_Temp_41_41 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) STATE_VARIABLE_Carry_39_39);
  EMinute_13 = mercury__int__mod_2_f_0(STATE_VARIABLE_Temp_41_41, (MR_Integer) 60);
  STATE_VARIABLE_Carry_44_44 = mercury__int__div_2_f_0(STATE_VARIABLE_Temp_41_41, (MR_Integer) 60);
  Var_47 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 3))));
  STATE_VARIABLE_Temp_46_46 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) STATE_VARIABLE_Carry_44_44);
  EHour_14 = mercury__int__mod_2_f_0(STATE_VARIABLE_Temp_46_46, (MR_Integer) 24);
  STATE_VARIABLE_Carry_49_49 = mercury__int__div_2_f_0(STATE_VARIABLE_Temp_46_46, (MR_Integer) 24);
  MaxDaysInMonth_15 = mercury__calendar__max_day_in_month_for_2_f_0(EYear_10, EMonth_9);
  Var_51 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 2))));
  succeeded = (Var_51 > MaxDaysInMonth_15);
  if (succeeded)
    TempDays_16 = MaxDaysInMonth_15;
  else
  {
    MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 2))));

    succeeded = (Var_52 < (MR_Integer) 1);
    if (succeeded)
      TempDays_16 = (MR_Integer) 1;
    else
      TempDays_16 = ((MR_Integer) ((MR_hl_field(0, S_5, (MR_Integer) 2))));
  }
  Var_55 = ((MR_Integer) ((MR_hl_field(0, D_4, (MR_Integer) 1))));
  Var_54 = (MR_Integer) ((MR_Unsigned) TempDays_16 + (MR_Unsigned) Var_55);
  EDay_17 = (MR_Integer) ((MR_Unsigned) Var_54 + (MR_Unsigned) STATE_VARIABLE_Carry_49_49);
  {
    STATE_VARIABLE_E_56_56 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_E_56_56, 0) = ((MR_Box) (EYear_10));
    MR_hl_field(0, STATE_VARIABLE_E_56_56, 1) = ((MR_Box) (EMonth_9));
    MR_hl_field(0, STATE_VARIABLE_E_56_56, 2) = ((MR_Box) (EDay_17));
    MR_hl_field(0, STATE_VARIABLE_E_56_56, 3) = ((MR_Box) (EHour_14));
    MR_hl_field(0, STATE_VARIABLE_E_56_56, 4) = ((MR_Box) (EMinute_13));
    MR_hl_field(0, STATE_VARIABLE_E_56_56, 5) = ((MR_Box) (ESecond_12));
    MR_hl_field(0, STATE_VARIABLE_E_56_56, 6) = ((MR_Box) (EMicrosecond_11));
  }
  mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(STATE_VARIABLE_E_56_56, STATE_VARIABLE_E_18);
}

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word STATE_VARIABLE_E_0_11,
  MR_Word * STATE_VARIABLE_E_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 2))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 0))));
    MR_Integer Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (Var_13 < (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Temp_9;
      MR_Word STATE_VARIABLE_E_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Var_56 - (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_E_24_24;
      MR_Integer Var_25;
      MR_Word STATE_VARIABLE_E_28_28;
      MR_Integer Var_29;
      MR_Integer Var_31;
      MR_Integer Var_80;
      MR_Integer Var_92;
      MR_Integer Var_79;
      MR_Integer Var_82;
      MR_Integer Var_83;
      MR_Integer Var_84;
      MR_Integer Var_85;
      MR_Integer Var_94;
      MR_Integer Var_95;
      MR_Integer Var_96;
      MR_Integer Var_97;
      MR_Integer Var_98;
      MR_Integer Var_106;
      MR_Integer Var_107;
      MR_Integer Var_108;
      MR_Integer Var_109;
      MR_Integer Var_110;
      MR_Integer Var_111;
      MR_Word next_value_of_STATE_VARIABLE_E_0_11;

      Var_18 = mercury__calendar__max_day_in_month_for_2_f_0(Var_55, Var_20);
      Var_16 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) Var_18);
      Var_79 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 0))));
      Var_80 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 1))));
      Var_82 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 3))));
      Var_83 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 4))));
      Var_84 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 5))));
      Var_85 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 6))));
      {
        STATE_VARIABLE_E_15_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_E_15_15, 0) = ((MR_Box) (Var_79));
        MR_hl_field(0, STATE_VARIABLE_E_15_15, 1) = ((MR_Box) (Var_80));
        MR_hl_field(0, STATE_VARIABLE_E_15_15, 2) = ((MR_Box) (Var_16));
        MR_hl_field(0, STATE_VARIABLE_E_15_15, 3) = ((MR_Box) (Var_82));
        MR_hl_field(0, STATE_VARIABLE_E_15_15, 4) = ((MR_Box) (Var_83));
        MR_hl_field(0, STATE_VARIABLE_E_15_15, 5) = ((MR_Box) (Var_84));
        MR_hl_field(0, STATE_VARIABLE_E_15_15, 6) = ((MR_Box) (Var_85));
      }
      Temp_9 = (MR_Integer) ((MR_Unsigned) Var_80 + (MR_Unsigned) (MR_Integer) -1);
      Var_25 = mercury__calendar__modulo_3_f_0(Temp_9, (MR_Integer) 1, (MR_Integer) 13);
      Var_92 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_15_15, (MR_Integer) 0))));
      Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_15_15, (MR_Integer) 2))));
      Var_95 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_15_15, (MR_Integer) 3))));
      Var_96 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_15_15, (MR_Integer) 4))));
      Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_15_15, (MR_Integer) 5))));
      Var_98 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_15_15, (MR_Integer) 6))));
      {
        STATE_VARIABLE_E_24_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_E_24_24, 0) = ((MR_Box) (Var_92));
        MR_hl_field(0, STATE_VARIABLE_E_24_24, 1) = ((MR_Box) (Var_25));
        MR_hl_field(0, STATE_VARIABLE_E_24_24, 2) = ((MR_Box) (Var_94));
        MR_hl_field(0, STATE_VARIABLE_E_24_24, 3) = ((MR_Box) (Var_95));
        MR_hl_field(0, STATE_VARIABLE_E_24_24, 4) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_E_24_24, 5) = ((MR_Box) (Var_97));
        MR_hl_field(0, STATE_VARIABLE_E_24_24, 6) = ((MR_Box) (Var_98));
      }
      Var_31 = mercury__calendar__fquotient_3_f_0(Temp_9, (MR_Integer) 1, (MR_Integer) 13);
      Var_29 = (MR_Integer) ((MR_Unsigned) Var_92 + (MR_Unsigned) Var_31);
      Var_106 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_24_24, (MR_Integer) 1))));
      Var_107 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_24_24, (MR_Integer) 2))));
      Var_108 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_24_24, (MR_Integer) 3))));
      Var_109 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_24_24, (MR_Integer) 4))));
      Var_110 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_24_24, (MR_Integer) 5))));
      Var_111 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_24_24, (MR_Integer) 6))));
      {
        STATE_VARIABLE_E_28_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_E_28_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(0, STATE_VARIABLE_E_28_28, 1) = ((MR_Box) (Var_106));
        MR_hl_field(0, STATE_VARIABLE_E_28_28, 2) = ((MR_Box) (Var_107));
        MR_hl_field(0, STATE_VARIABLE_E_28_28, 3) = ((MR_Box) (Var_108));
        MR_hl_field(0, STATE_VARIABLE_E_28_28, 4) = ((MR_Box) (Var_109));
        MR_hl_field(0, STATE_VARIABLE_E_28_28, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, STATE_VARIABLE_E_28_28, 6) = ((MR_Box) (Var_111));
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_E_0_11 = STATE_VARIABLE_E_28_28;
      STATE_VARIABLE_E_0_11 = next_value_of_STATE_VARIABLE_E_0_11;
      continue;
    }
    else
    {
      MR_Integer MaxDaysInMonth_10;
      MR_Integer Var_37;
      MR_Integer Var_124;
      MR_Integer Var_125;
      MR_Integer Var_126;
      MR_Integer Var_127;
      MR_Integer Var_128;
      MR_Integer Var_129;
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 0))));
      MR_Integer Var_112 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 1))));

      MaxDaysInMonth_10 = mercury__calendar__max_day_in_month_for_2_f_0(Var_35, Var_112);
      Var_124 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 0))));
      Var_125 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 1))));
      Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 2))));
      Var_126 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 3))));
      Var_127 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 4))));
      Var_128 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 5))));
      Var_129 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_0_11, (MR_Integer) 6))));
      succeeded = (Var_37 > MaxDaysInMonth_10);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_E_38_38;
        MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) Var_37 - (MR_Unsigned) MaxDaysInMonth_10);
        MR_Word STATE_VARIABLE_E_42_42;
        MR_Integer Var_43;
        MR_Word STATE_VARIABLE_E_46_46;
        MR_Integer Var_47;
        MR_Integer Var_49;
        MR_Integer Temp_54;
        MR_Integer Var_149;
        MR_Integer Var_151;
        MR_Integer Var_152;
        MR_Integer Var_153;
        MR_Integer Var_154;
        MR_Integer Var_155;
        MR_Integer Var_163;
        MR_Integer Var_164;
        MR_Integer Var_165;
        MR_Integer Var_166;
        MR_Integer Var_167;
        MR_Integer Var_168;
        MR_Word next_value_of_STATE_VARIABLE_E_0_11;

        {
          STATE_VARIABLE_E_38_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_E_38_38, 0) = ((MR_Box) (Var_124));
          MR_hl_field(0, STATE_VARIABLE_E_38_38, 1) = ((MR_Box) (Var_125));
          MR_hl_field(0, STATE_VARIABLE_E_38_38, 2) = ((MR_Box) (Var_39));
          MR_hl_field(0, STATE_VARIABLE_E_38_38, 3) = ((MR_Box) (Var_126));
          MR_hl_field(0, STATE_VARIABLE_E_38_38, 4) = ((MR_Box) (Var_127));
          MR_hl_field(0, STATE_VARIABLE_E_38_38, 5) = ((MR_Box) (Var_128));
          MR_hl_field(0, STATE_VARIABLE_E_38_38, 6) = ((MR_Box) (Var_129));
        }
        Temp_54 = (MR_Integer) ((MR_Unsigned) Var_125 + (MR_Unsigned) 1);
        Var_43 = mercury__calendar__modulo_3_f_0(Temp_54, (MR_Integer) 1, (MR_Integer) 13);
        Var_149 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_38_38, (MR_Integer) 0))));
        Var_151 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_38_38, (MR_Integer) 2))));
        Var_152 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_38_38, (MR_Integer) 3))));
        Var_153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_38_38, (MR_Integer) 4))));
        Var_154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_38_38, (MR_Integer) 5))));
        Var_155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_38_38, (MR_Integer) 6))));
        {
          STATE_VARIABLE_E_42_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_E_42_42, 0) = ((MR_Box) (Var_149));
          MR_hl_field(0, STATE_VARIABLE_E_42_42, 1) = ((MR_Box) (Var_43));
          MR_hl_field(0, STATE_VARIABLE_E_42_42, 2) = ((MR_Box) (Var_151));
          MR_hl_field(0, STATE_VARIABLE_E_42_42, 3) = ((MR_Box) (Var_152));
          MR_hl_field(0, STATE_VARIABLE_E_42_42, 4) = ((MR_Box) (Var_153));
          MR_hl_field(0, STATE_VARIABLE_E_42_42, 5) = ((MR_Box) (Var_154));
          MR_hl_field(0, STATE_VARIABLE_E_42_42, 6) = ((MR_Box) (Var_155));
        }
        Var_49 = mercury__calendar__fquotient_3_f_0(Temp_54, (MR_Integer) 1, (MR_Integer) 13);
        Var_47 = (MR_Integer) ((MR_Unsigned) Var_149 + (MR_Unsigned) Var_49);
        Var_163 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_42_42, (MR_Integer) 1))));
        Var_164 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_42_42, (MR_Integer) 2))));
        Var_165 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_42_42, (MR_Integer) 3))));
        Var_166 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_42_42, (MR_Integer) 4))));
        Var_167 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_42_42, (MR_Integer) 5))));
        Var_168 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_E_42_42, (MR_Integer) 6))));
        {
          STATE_VARIABLE_E_46_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_E_46_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(0, STATE_VARIABLE_E_46_46, 1) = ((MR_Box) (Var_163));
          MR_hl_field(0, STATE_VARIABLE_E_46_46, 2) = ((MR_Box) (Var_164));
          MR_hl_field(0, STATE_VARIABLE_E_46_46, 3) = ((MR_Box) (Var_165));
          MR_hl_field(0, STATE_VARIABLE_E_46_46, 4) = ((MR_Box) (Var_166));
          MR_hl_field(0, STATE_VARIABLE_E_46_46, 5) = ((MR_Box) (Var_167));
          MR_hl_field(0, STATE_VARIABLE_E_46_46, 6) = ((MR_Box) (Var_168));
        }
        // direct tailcall eliminated
        ;
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
  MR_Integer HeadVar__4_4;
  MR_Integer Var_8;
  MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) A_5 - (MR_Unsigned) Low_6);
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) High_7 - (MR_Unsigned) Low_6);
  MR_Integer Var_11;
  MR_Integer Var_12;

  Var_12 = mercury__int__div_2_f_0(Var_9, Var_10);
  Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 * (MR_Unsigned) Var_10);
  Var_8 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) Var_11);
  HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) Var_8 + (MR_Unsigned) Low_6);
  return HeadVar__4_4;
}

static MR_Integer MR_CALL 
mercury__calendar__modulo_2_f_0(
  MR_Integer A_4,
  MR_Integer B_5)
{
  MR_Integer HeadVar__3_3;
  MR_Integer Var_6;
  MR_Integer Var_7;

  Var_7 = mercury__int__div_2_f_0(A_4, B_5);
  Var_6 = (MR_Integer) ((MR_Unsigned) Var_7 * (MR_Unsigned) B_5);
  HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) A_4 - (MR_Unsigned) Var_6);
  return HeadVar__3_3;
}

static MR_Integer MR_CALL 
mercury__calendar__fquotient_3_f_0(
  MR_Integer A_5,
  MR_Integer Low_6,
  MR_Integer High_7)
{
  MR_Integer HeadVar__4_4;
  MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) A_5 - (MR_Unsigned) Low_6);
  MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) High_7 - (MR_Unsigned) Low_6);

  HeadVar__4_4 = mercury__int__div_2_f_0(Var_8, Var_9);
  return HeadVar__4_4;
}

static MR_Integer MR_CALL 
mercury__calendar__microseconds_per_second_0_f_0(void)
{
  return (MR_Integer) 1000000;
}

MR_String MR_CALL 
mercury__calendar__duration_to_string_1_f_0(
  MR_Word Duration_1)
{
  MR_bool succeeded;
  MR_String Str_8;
  MR_Integer Months_3 = ((MR_Integer) ((MR_hl_field(0, Duration_1, (MR_Integer) 0))));
  MR_Integer Days_4 = ((MR_Integer) ((MR_hl_field(0, Duration_1, (MR_Integer) 1))));
  MR_Integer Seconds_5 = ((MR_Integer) ((MR_hl_field(0, Duration_1, (MR_Integer) 2))));
  MR_Integer MicroSeconds_6 = ((MR_Integer) ((MR_hl_field(0, Duration_1, (MR_Integer) 3))));

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
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Integer Var_15;

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
        mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.duration_to_string\'/1", (MR_String) "duration components have mixed signs");
    }
    succeeded = (Seconds_5 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (MicroSeconds_6 == (MR_Integer) 0);
    if (succeeded)
      TimePart_11 = (MR_Word) ((MR_Unsigned) 0U);
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

      Var_26 = mercury__calendar__hours_1_f_0(Duration_1);
      Var_25 = (MR_Integer) ((MR_Unsigned) Sign_9 * (MR_Unsigned) Var_26);
      succeeded = (Var_25 == (MR_Integer) 0);
      if (succeeded)
        Var_24 = (MR_String) "";
      else
      {
        MR_String Var_61;

{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_Integer I;
	MR_String S;

	I = Var_25 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_61  = S;
}
        mercury__string__append_3_p_2(Var_61, (MR_String) "H", &Var_24);
      }
      Var_31 = mercury__calendar__minutes_1_f_0(Duration_1);
      Var_30 = (MR_Integer) ((MR_Unsigned) Sign_9 * (MR_Unsigned) Var_31);
      succeeded = (Var_30 == (MR_Integer) 0);
      if (succeeded)
        Var_29 = (MR_String) "";
      else
      {
        MR_String Var_62;

{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_Integer I;
	MR_String S;

	I = Var_30 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_62  = S;
}
        mercury__string__append_3_p_2(Var_62, (MR_String) "M", &Var_29);
      }
      Var_36 = mercury__calendar__seconds_1_f_0(Duration_1);
      Var_35 = (MR_Integer) ((MR_Unsigned) Sign_9 * (MR_Unsigned) Var_36);
      Var_38 = ((MR_Integer) ((MR_hl_field(0, Duration_1, (MR_Integer) 3))));
      Var_37 = (MR_Integer) ((MR_Unsigned) Sign_9 * (MR_Unsigned) Var_38);
      succeeded = (Var_35 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_37 == (MR_Integer) 0);
      if (succeeded)
        Var_34 = (MR_String) "";
      else
      {
        MR_String Var_66;
        MR_String Var_67;
        MR_String Var_68;

{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_Integer I;
	MR_String S;

	I = Var_35 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_66  = S;
}
        succeeded = (Var_37 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_String Var_73;
          MR_String Var_74;
          MR_Integer Var_80;
          MR_Integer Var_82;
          MR_Integer Var_83;
          MR_Integer Var_84;
          MR_Integer Var_85;

          mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__calendar_scalar_common_5[1]), (MR_Word) (MR_mkword(1, &mercury__calendar_scalar_common_5[2])), (MR_Word) ((MR_Unsigned) 0U), Var_37, &Var_74);
          mercury__string__append_3_p_2((MR_String) ".", Var_74, &Var_73);
{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_73 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_84  = Length;
}
          mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_57_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, Var_73, Var_84, &Var_85);
          Var_80 = (MR_Integer) ((MR_Unsigned) Var_84 - (MR_Unsigned) Var_85);
{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_73 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_83  = Length;
}
          Var_82 = (MR_Integer) ((MR_Unsigned) Var_83 - (MR_Unsigned) Var_80);
{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Var_73 ;
	Start = (MR_Integer) 0 ;
	End = Var_82 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	Var_68  = SubString;
}
        }
        else
          Var_68 = (MR_String) "";
        mercury__string__append_3_p_2(Var_68, (MR_String) "S", &Var_67);
        mercury__string__append_3_p_2(Var_66, Var_67, &Var_34);
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_28));
      }
      {
        TimePart_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TimePart_11, 0) = ((MR_Box) ((MR_String) "T"));
        MR_hl_field(1, TimePart_11, 1) = ((MR_Box) (Var_23));
      }
    }
    Var_47 = mercury__calendar__years_1_f_0(Duration_1);
    Var_46 = (MR_Integer) ((MR_Unsigned) Sign_9 * (MR_Unsigned) Var_47);
    succeeded = (Var_46 == (MR_Integer) 0);
    if (succeeded)
      Var_45 = (MR_String) "";
    else
    {
      MR_String Var_86;

{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_Integer I;
	MR_String S;

	I = Var_46 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_86  = S;
}
      mercury__string__append_3_p_2(Var_86, (MR_String) "Y", &Var_45);
    }
    Var_52 = mercury__calendar__months_1_f_0(Duration_1);
    Var_51 = (MR_Integer) ((MR_Unsigned) Sign_9 * (MR_Unsigned) Var_52);
    succeeded = (Var_51 == (MR_Integer) 0);
    if (succeeded)
      Var_50 = (MR_String) "";
    else
    {
      MR_String Var_87;

{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_Integer I;
	MR_String S;

	I = Var_51 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_87  = S;
}
      mercury__string__append_3_p_2(Var_87, (MR_String) "M", &Var_50);
    }
    Var_57 = ((MR_Integer) ((MR_hl_field(0, Duration_1, (MR_Integer) 1))));
    Var_56 = (MR_Integer) ((MR_Unsigned) Sign_9 * (MR_Unsigned) Var_57);
    succeeded = (Var_56 == (MR_Integer) 0);
    if (succeeded)
      Var_55 = (MR_String) "";
    else
    {
      MR_String Var_91;

{
#define MR_PROC_LABEL mercury__calendar__duration_to_string_1_f_0

	MR_Integer I;
	MR_String S;

	I = Var_56 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_91  = S;
}
      mercury__string__append_3_p_2(Var_91, (MR_String) "D", &Var_55);
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_String) "P"));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (SignStr_10));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
    }
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, TimePart_11, &Var_40);
    Str_8 = mercury__string__append_list_1_f_0(Var_40);
  }
  return Str_8;
}

MR_Word MR_CALL 
mercury__calendar__det_duration_from_string_1_f_0(
  MR_String Str_3)
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

MR_bool MR_CALL 
mercury__calendar__duration_from_string_2_p_0(
  MR_String Str_3,
  MR_Word * Duration_4)
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
  MR_Char Var_42;
  MR_Integer Var_44;
  MR_Char Var_48;
  MR_Char Var_54;
  MR_Char Var_60;
  MR_Word Rest_46;
  MR_Char Var_47;
  MR_Integer Int0_49;
  MR_Word Rest_51;
  MR_Word Chars1_50;
  MR_Char Var_52;
  MR_Integer Var_53;
  MR_Integer Int0_55;
  MR_Word Rest_57;
  MR_Word Chars1_56;
  MR_Char Var_58;
  MR_Integer Var_59;
  MR_Integer Int0_61;
  MR_Word Rest_63;
  MR_Word Chars1_62;
  MR_Char Var_64;
  MR_Integer Var_65;
  MR_Word TimePart_10;
  MR_Char Var_24;
  MR_Char Var_43;

{
#define MR_PROC_LABEL mercury__calendar__duration_from_string_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_44  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(Str_3, Var_44, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Chars_17_17);
  succeeded = (STATE_VARIABLE_Chars_17_17 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_47 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_17_17, (MR_Integer) 0)));
    Rest_46 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_17_17, (MR_Integer) 1))));
    succeeded = (Var_47 == (MR_Char) 45);
  }
  if (succeeded)
  {
    STATE_VARIABLE_Chars_18_18 = Rest_46;
    Sign_6 = (MR_Integer) -1;
  }
  else
  {
    Sign_6 = (MR_Integer) 1;
    STATE_VARIABLE_Chars_18_18 = STATE_VARIABLE_Chars_17_17;
  }
  succeeded = (STATE_VARIABLE_Chars_18_18 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_42 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_18_18, (MR_Integer) 0)));
    STATE_VARIABLE_Chars_20_20 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_18_18, (MR_Integer) 1))));
    succeeded = ((MR_Char) 80 == Var_42);
    if (succeeded)
    {
      Var_48 = (MR_Char) 89;
      Var_53 = (MR_Integer) 0;
      mercury__calendar__read_int_2_4_p_0(Var_53, &Int0_49, STATE_VARIABLE_Chars_20_20, &Chars1_50);
      succeeded = (Chars1_50 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_52 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars1_50, (MR_Integer) 0)));
        Rest_51 = ((MR_Word) ((MR_hl_field(1, Chars1_50, (MR_Integer) 1))));
        succeeded = (Var_48 == Var_52);
      }
      if (succeeded)
      {
        STATE_VARIABLE_Chars_21_21 = Rest_51;
        Years_7 = Int0_49;
      }
      else
      {
        Years_7 = (MR_Integer) 0;
        STATE_VARIABLE_Chars_21_21 = STATE_VARIABLE_Chars_20_20;
      }
      Var_54 = (MR_Char) 77;
      Var_59 = (MR_Integer) 0;
      mercury__calendar__read_int_2_4_p_0(Var_59, &Int0_55, STATE_VARIABLE_Chars_21_21, &Chars1_56);
      succeeded = (Chars1_56 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_58 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars1_56, (MR_Integer) 0)));
        Rest_57 = ((MR_Word) ((MR_hl_field(1, Chars1_56, (MR_Integer) 1))));
        succeeded = (Var_54 == Var_58);
      }
      if (succeeded)
      {
        STATE_VARIABLE_Chars_22_22 = Rest_57;
        Months_8 = Int0_55;
      }
      else
      {
        Months_8 = (MR_Integer) 0;
        STATE_VARIABLE_Chars_22_22 = STATE_VARIABLE_Chars_21_21;
      }
      Var_60 = (MR_Char) 68;
      Var_65 = (MR_Integer) 0;
      mercury__calendar__read_int_2_4_p_0(Var_65, &Int0_61, STATE_VARIABLE_Chars_22_22, &Chars1_62);
      succeeded = (Chars1_62 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_64 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars1_62, (MR_Integer) 0)));
        Rest_63 = ((MR_Word) ((MR_hl_field(1, Chars1_62, (MR_Integer) 1))));
        succeeded = (Var_60 == Var_64);
      }
      if (succeeded)
      {
        STATE_VARIABLE_Chars_23_23 = Rest_63;
        Days_9 = Int0_61;
      }
      else
      {
        Days_9 = (MR_Integer) 0;
        STATE_VARIABLE_Chars_23_23 = STATE_VARIABLE_Chars_22_22;
      }
      Var_24 = (MR_Char) 84;
      succeeded = (STATE_VARIABLE_Chars_23_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_43 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_23_23, (MR_Integer) 0)));
        TimePart_10 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_23_23, (MR_Integer) 1))));
        succeeded = (Var_24 == Var_43);
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
        MR_Char Var_66;
        MR_Char Var_72;
        MR_Integer Int0_67;
        MR_Word Rest_69;
        MR_Word Chars1_68;
        MR_Char Var_70;
        MR_Integer Var_71;
        MR_Integer Int0_73;
        MR_Word Rest_75;
        MR_Word Chars1_74;
        MR_Char Var_76;
        MR_Integer Var_77;
        MR_Integer Seconds0_78;
        MR_Integer MicroSeconds0_80;
        MR_Word Chars3_82;
        MR_Word Chars1_79;
        MR_Word Chars2_81;
        MR_Char Var_83;
        MR_Char Var_84;
        MR_Integer Var_85;
        MR_Integer Fraction_87;
        MR_Integer FractionDigits_88;
        MR_Word STATE_VARIABLE_Chars_12_90;
        MR_Word Chars1_86;
        MR_Char Var_89;
        MR_Integer Var_91;
        MR_Integer Var_92;
        MR_Char Var_97;
        MR_Integer Var_98;
        MR_Integer Var_99;

        succeeded = (TimePart_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_66 = (MR_Char) 72;
          Var_71 = (MR_Integer) 0;
          mercury__calendar__read_int_2_4_p_0(Var_71, &Int0_67, TimePart_10, &Chars1_68);
          succeeded = (Chars1_68 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_70 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars1_68, (MR_Integer) 0)));
            Rest_69 = ((MR_Word) ((MR_hl_field(1, Chars1_68, (MR_Integer) 1))));
            succeeded = (Var_66 == Var_70);
          }
          if (succeeded)
          {
            STATE_VARIABLE_Chars_25_25 = Rest_69;
            Hours_13 = Int0_67;
          }
          else
          {
            Hours_13 = (MR_Integer) 0;
            STATE_VARIABLE_Chars_25_25 = TimePart_10;
          }
          Var_72 = (MR_Char) 77;
          Var_77 = (MR_Integer) 0;
          mercury__calendar__read_int_2_4_p_0(Var_77, &Int0_73, STATE_VARIABLE_Chars_25_25, &Chars1_74);
          succeeded = (Chars1_74 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_76 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars1_74, (MR_Integer) 0)));
            Rest_75 = ((MR_Word) ((MR_hl_field(1, Chars1_74, (MR_Integer) 1))));
            succeeded = (Var_72 == Var_76);
          }
          if (succeeded)
          {
            STATE_VARIABLE_Chars_26_26 = Rest_75;
            Minutes_14 = Int0_73;
          }
          else
          {
            Minutes_14 = (MR_Integer) 0;
            STATE_VARIABLE_Chars_26_26 = STATE_VARIABLE_Chars_25_25;
          }
          Var_85 = (MR_Integer) 0;
          mercury__calendar__read_int_2_4_p_0(Var_85, &Seconds0_78, STATE_VARIABLE_Chars_26_26, &Chars1_79);
          Var_89 = (MR_Char) 46;
          succeeded = (Chars1_79 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_97 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars1_79, (MR_Integer) 0)));
            Chars1_86 = ((MR_Word) ((MR_hl_field(1, Chars1_79, (MR_Integer) 1))));
            succeeded = (Var_89 == Var_97);
            if (succeeded)
            {
              Var_98 = (MR_Integer) 0;
              Var_99 = (MR_Integer) 0;
              mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_98, &Fraction_87, Var_99, &FractionDigits_88, Chars1_86, &STATE_VARIABLE_Chars_12_90);
              Var_91 = (MR_Integer) 0;
              succeeded = (FractionDigits_88 > Var_91);
              if (succeeded)
              {
                Var_92 = (MR_Integer) 7;
                succeeded = (FractionDigits_88 < Var_92);
              }
            }
          }
          if (succeeded)
          {
            MR_Integer Var_93;
            MR_Integer Var_95;

            Chars2_81 = STATE_VARIABLE_Chars_12_90;
            Var_95 = (MR_Integer) ((MR_Unsigned) 6 - (MR_Unsigned) FractionDigits_88);
            mercury__int__pow_3_p_0((MR_Integer) 10, Var_95, &Var_93);
            MicroSeconds0_80 = (MR_Integer) ((MR_Unsigned) Var_93 * (MR_Unsigned) Fraction_87);
          }
          else
          {
            MicroSeconds0_80 = (MR_Integer) 0;
            Chars2_81 = Chars1_79;
          }
          Var_83 = (MR_Char) 83;
          succeeded = (Chars2_81 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_84 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars2_81, (MR_Integer) 0)));
            Chars3_82 = ((MR_Word) ((MR_hl_field(1, Chars2_81, (MR_Integer) 1))));
            succeeded = (Var_83 == Var_84);
          }
          if (succeeded)
          {
            STATE_VARIABLE_Chars_27_27 = Chars3_82;
            Seconds_15 = Seconds0_78;
            MicroSeconds_16 = MicroSeconds0_80;
          }
          else
          {
            Seconds_15 = (MR_Integer) 0;
            MicroSeconds_16 = (MR_Integer) 0;
            STATE_VARIABLE_Chars_27_27 = STATE_VARIABLE_Chars_26_26;
          }
          succeeded = (STATE_VARIABLE_Chars_27_27 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_28 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Years_7);
            Var_29 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Months_8);
            Var_30 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Days_9);
            Var_31 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Hours_13);
            Var_32 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Minutes_14);
            Var_33 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Seconds_15);
            Var_34 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) MicroSeconds_16);
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

        succeeded = (STATE_VARIABLE_Chars_23_23 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_35 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Years_7);
          Var_36 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Months_8);
          Var_37 = (MR_Integer) ((MR_Unsigned) Sign_6 * (MR_Unsigned) Days_9);
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

static void MR_CALL 
mercury__calendar__read_int_2_4_p_0(
  MR_Integer STATE_VARIABLE_Val_0_10,
  MR_Integer * STATE_VARIABLE_Val_11,
  MR_Word STATE_VARIABLE_Chars_0_12,
  MR_Word * STATE_VARIABLE_Chars_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_Chars_0_12 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Rest_8;
    MR_Integer Digit_9;
    MR_Char Char_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_0_12, (MR_Integer) 0)));
      Rest_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_0_12, (MR_Integer) 1))));
      succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_7, &Digit_9);
    }
    if (succeeded)
    {
      MR_Integer STATE_VARIABLE_Val_14_14;
      MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Val_0_10 * (MR_Unsigned) 10);
      MR_Integer next_value_of_STATE_VARIABLE_Val_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Chars_0_12;

      STATE_VARIABLE_Val_14_14 = (MR_Integer) ((MR_Unsigned) Var_15 + (MR_Unsigned) Digit_9);
      // direct tailcall eliminated
      ;
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
  MR_Word HeadVar__2_2;
  MR_Integer Months_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Days_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Seconds_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Integer MicroSeconds_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Months_3);
  MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Days_4);
  MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Seconds_5);
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) MicroSeconds_6);

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_9));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_10));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__calendar__zero_duration_0_f_0(void)
{
  return (MR_Word) (&mercury__calendar_scalar_common_3[1]);
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
  *HeadVar__2_2 = mercury__calendar__years_1_f_0(Duration_9);
  *HeadVar__3_3 = mercury__calendar__months_1_f_0(Duration_9);
  *HeadVar__4_4 = ((MR_Integer) ((MR_hl_field(0, Duration_9, (MR_Integer) 1))));
  *HeadVar__5_5 = mercury__calendar__hours_1_f_0(Duration_9);
  *HeadVar__6_6 = mercury__calendar__minutes_1_f_0(Duration_9);
  *HeadVar__7_7 = mercury__calendar__seconds_1_f_0(Duration_9);
  *HeadVar__8_8 = ((MR_Integer) ((MR_hl_field(0, Duration_9, (MR_Integer) 3))));
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
  MR_bool succeeded;
  MR_Word Dur_16;

  {
    MR_Integer Var_24;
    MR_Integer Var_25;
    MR_Integer Var_26;
    MR_Integer Var_27;
    MR_Integer Var_28;
    MR_Integer Var_29;

    succeeded = (Years0_9 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_24 = (MR_Integer) 0;
      succeeded = (Months0_10 >= Var_24);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 0;
        succeeded = (Days0_11 >= Var_25);
        if (succeeded)
        {
          Var_26 = (MR_Integer) 0;
          succeeded = (Hours0_12 >= Var_26);
          if (succeeded)
          {
            Var_27 = (MR_Integer) 0;
            succeeded = (Minutes0_13 >= Var_27);
            if (succeeded)
            {
              Var_28 = (MR_Integer) 0;
              succeeded = (Seconds0_14 >= Var_28);
              if (succeeded)
              {
                Var_29 = (MR_Integer) 0;
                succeeded = (MicroSeconds0_15 >= Var_29);
              }
            }
          }
        }
      }
    }
  }
  if (!(succeeded))
  {
    MR_Integer Var_31;
    MR_Integer Var_32;
    MR_Integer Var_33;
    MR_Integer Var_34;
    MR_Integer Var_35;
    MR_Integer Var_36;

    succeeded = (Years0_9 <= (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = (MR_Integer) 0;
      succeeded = (Months0_10 <= Var_31);
      if (succeeded)
      {
        Var_32 = (MR_Integer) 0;
        succeeded = (Days0_11 <= Var_32);
        if (succeeded)
        {
          Var_33 = (MR_Integer) 0;
          succeeded = (Hours0_12 <= Var_33);
          if (succeeded)
          {
            Var_34 = (MR_Integer) 0;
            succeeded = (Minutes0_13 <= Var_34);
            if (succeeded)
            {
              Var_35 = (MR_Integer) 0;
              succeeded = (Seconds0_14 <= Var_35);
              if (succeeded)
              {
                Var_36 = (MR_Integer) 0;
                succeeded = (MicroSeconds0_15 <= Var_36);
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
    MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) Years0_9 * (MR_Unsigned) 12);
    MR_Integer Var_39;
    MR_Integer Var_42;
    MR_Integer Var_43;
    MR_Integer Var_45;
    MR_Integer Var_47;

    Months_17 = (MR_Integer) ((MR_Unsigned) Var_37 + (MR_Unsigned) Months0_10);
    Var_39 = (MicroSeconds0_15 / (MR_Integer) 1000000);
    Seconds1_18 = (MR_Integer) ((MR_Unsigned) Seconds0_14 + (MR_Unsigned) Var_39);
    MicroSeconds_19 = (MicroSeconds0_15 % (MR_Integer) 1000000);
    Var_43 = (MR_Integer) ((MR_Unsigned) Minutes0_13 * (MR_Unsigned) 60);
    Var_42 = (MR_Integer) ((MR_Unsigned) Seconds1_18 + (MR_Unsigned) Var_43);
    Var_45 = (MR_Integer) ((MR_Unsigned) Hours0_12 * (MR_Unsigned) 3600);
    Seconds2_20 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) Var_45);
    Var_47 = (Seconds2_20 / (MR_Integer) 86400);
    Days_21 = (MR_Integer) ((MR_Unsigned) Days0_11 + (MR_Unsigned) Var_47);
    Seconds_22 = (Seconds2_20 % (MR_Integer) 86400);
    {
      Dur_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Dur_16, 0) = ((MR_Box) (Months_17));
      MR_hl_field(0, Dur_16, 1) = ((MR_Box) (Days_21));
      MR_hl_field(0, Dur_16, 2) = ((MR_Box) (Seconds_22));
      MR_hl_field(0, Dur_16, 3) = ((MR_Box) (MicroSeconds_19));
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.init_duration\'/7", (MR_String) "some components negative and some positive");
  return Dur_16;
}

MR_Integer MR_CALL 
mercury__calendar__microseconds_1_f_0(
  MR_Word Dur_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Dur_3, (MR_Integer) 3))));

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__seconds_1_f_0(
  MR_Word Dur_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(0, Dur_3, (MR_Integer) 2))));

  HeadVar__2_2 = (Var_4 % (MR_Integer) 60);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__minutes_1_f_0(
  MR_Word Dur_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4;
  MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(0, Dur_3, (MR_Integer) 2))));

  Var_4 = (Var_5 % (MR_Integer) 3600);
  HeadVar__2_2 = (Var_4 / (MR_Integer) 60);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__hours_1_f_0(
  MR_Word Dur_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(0, Dur_3, (MR_Integer) 2))));

  HeadVar__2_2 = (Var_4 / (MR_Integer) 3600);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__days_1_f_0(
  MR_Word Dur_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Dur_3, (MR_Integer) 1))));

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__months_1_f_0(
  MR_Word Dur_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(0, Dur_3, (MR_Integer) 0))));

  HeadVar__2_2 = (Var_4 % (MR_Integer) 12);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__years_1_f_0(
  MR_Word Dur_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(0, Dur_3, (MR_Integer) 0))));

  HeadVar__2_2 = (Var_4 / (MR_Integer) 12);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__calendar__same_date_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  MR_bool succeeded;
  MR_Integer Year_5 = ((MR_Integer) ((MR_hl_field(0, A_3, (MR_Integer) 0))));
  MR_Integer Month_6 = ((MR_Integer) ((MR_hl_field(0, A_3, (MR_Integer) 1))));
  MR_Integer Day_7 = ((MR_Integer) ((MR_hl_field(0, A_3, (MR_Integer) 2))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, B_4, (MR_Integer) 0))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, B_4, (MR_Integer) 1))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, B_4, (MR_Integer) 2))));

  succeeded = (Year_5 == Var_16);
  if (succeeded)
  {
    succeeded = (Month_6 == Var_17);
    if (succeeded)
      succeeded = (Day_7 == Var_18);
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__calendar__unix_epoch_0_f_0(void)
{
  return (MR_Word) (&mercury__calendar_scalar_common_6[0]);
}

void MR_CALL 
mercury__calendar__current_utc_time_3_p_0(
  MR_Word * Now_4)
{
  MR_Word TimeT_6;
  MR_Word TM_7;
  MR_Integer TMYear_10;
  MR_Integer TMMonth_11;
  MR_Integer Year_19;
  MR_Integer Month_20;
  MR_Integer Day_21;
  MR_Integer Hour_22;
  MR_Integer Minute_23;
  MR_Integer Second_24;

  mercury__time__time_3_p_0(&TimeT_6);
  TM_7 = mercury__time__gmtime_1_f_0(TimeT_6);
  TMYear_10 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 0))));
  TMMonth_11 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 1))));
  Day_21 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 2))));
  Hour_22 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 3))));
  Minute_23 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 4))));
  Second_24 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 5))));
  Year_19 = (MR_Integer) ((MR_Unsigned) 1900 + (MR_Unsigned) TMYear_10);
  Month_20 = (MR_Integer) ((MR_Unsigned) TMMonth_11 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Now_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Year_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Month_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Day_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Hour_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Minute_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Second_24));
    MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Integer) 0));
  }
}

void MR_CALL 
mercury__calendar__current_local_time_3_p_0(
  MR_Word * Now_4)
{
  MR_Word TimeT_6;
  MR_Word TM_7;
  MR_Integer TMYear_11;
  MR_Integer TMMonth_12;
  MR_Integer Year_20;
  MR_Integer Month_21;
  MR_Integer Day_22;
  MR_Integer Hour_23;
  MR_Integer Minute_24;
  MR_Integer Second_25;

  mercury__time__time_3_p_0(&TimeT_6);
  mercury__time__localtime_4_p_0(TimeT_6, &TM_7);
  TMYear_11 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 0))));
  TMMonth_12 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 1))));
  Day_22 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 2))));
  Hour_23 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 3))));
  Minute_24 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 4))));
  Second_25 = ((MR_Integer) ((MR_hl_field(0, TM_7, (MR_Integer) 5))));
  Year_20 = (MR_Integer) ((MR_Unsigned) 1900 + (MR_Unsigned) TMYear_11);
  Month_21 = (MR_Integer) ((MR_Unsigned) TMMonth_12 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Now_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Year_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Month_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (Day_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (Hour_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (Minute_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (Second_25));
    MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Integer) 0));
  }
}

MR_String MR_CALL 
mercury__calendar__date_to_string_1_f_0(
  MR_Word Date_3)
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
    Year_13 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Year0_5);
  }
  else
  {
    SignStr_12 = (MR_String) "";
    Year_13 = Year0_5;
  }
  MicroSecondStr_14 = mercury__calendar__microsecond_string_1_f_0(MicroSecond_11);
  mercury__calendar__int_to_month_2_p_1(&Var_23, Month_6);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mercury__calendar_scalar_common_5[1]), (MR_Integer) 2, Second_10, &Var_35);
  mercury__string__append_3_p_2(Var_35, MicroSecondStr_14, &Var_43);
  mercury__string__append_3_p_2((MR_String) ":", Var_43, &Var_45);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mercury__calendar_scalar_common_5[1]), (MR_Integer) 2, Minute_9, &Var_46);
  mercury__string__append_3_p_2(Var_46, Var_45, &Var_54);
  mercury__string__append_3_p_2((MR_String) ":", Var_54, &Var_56);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mercury__calendar_scalar_common_5[1]), (MR_Integer) 2, Hour_8, &Var_57);
  mercury__string__append_3_p_2(Var_57, Var_56, &Var_65);
  mercury__string__append_3_p_2((MR_String) " ", Var_65, &Var_67);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mercury__calendar_scalar_common_5[1]), (MR_Integer) 2, Day_7, &Var_68);
  mercury__string__append_3_p_2(Var_68, Var_67, &Var_76);
  mercury__string__append_3_p_2((MR_String) "-", Var_76, &Var_78);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mercury__calendar_scalar_common_5[1]), (MR_Integer) 2, Var_23, &Var_79);
  mercury__string__append_3_p_2(Var_79, Var_78, &Var_87);
  mercury__string__append_3_p_2((MR_String) "-", Var_87, &Var_89);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mercury__calendar_scalar_common_5[1]), (MR_Integer) 4, Year_13, &Var_90);
  mercury__string__append_3_p_2(Var_90, Var_89, &Var_98);
  mercury__string__append_3_p_2(SignStr_12, Var_98, &Str_4);
  return Str_4;
}

static MR_String MR_CALL 
mercury__calendar__microsecond_string_1_f_0(
  MR_Integer MicroSeconds_3)
{
  MR_bool succeeded = (MicroSeconds_3 > (MR_Integer) 0);
  MR_String Str_4;

  if (succeeded)
  {
    MR_String Var_8;
    MR_String Var_15;
    MR_Integer Var_26;
    MR_Integer Var_28;
    MR_Integer Var_29;
    MR_Integer Var_30;
    MR_Integer Var_31;

    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__calendar_scalar_common_5[1]), (MR_Word) (MR_mkword(1, &mercury__calendar_scalar_common_5[2])), (MR_Word) ((MR_Unsigned) 0U), MicroSeconds_3, &Var_15);
    mercury__string__append_3_p_2((MR_String) ".", Var_15, &Var_8);
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_30  = Length;
}
    mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_57_95_95_91_50_93_95_48_4_p_in__string_0((MR_Char) 48, Var_8, Var_30, &Var_31);
    Var_26 = (MR_Integer) ((MR_Unsigned) Var_30 - (MR_Unsigned) Var_31);
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_29  = Length;
}
    Var_28 = (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) Var_26);
{
#define MR_PROC_LABEL mercury__calendar__microsecond_string_1_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Var_8 ;
	Start = (MR_Integer) 0 ;
	End = Var_28 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	Str_4  = SubString;
}
  }
  else
    Str_4 = (MR_String) "";
  return Str_4;
}

static void MR_CALL 
mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_57_95_95_91_50_93_95_48_4_p_in__string_0(
  MR_Char Var_14,
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_10;
    MR_Char Var_11;
    MR_Word Var_12;
    MR_Integer Var_15;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_57_95_95_91_50_93_95_48_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_10  = PrevIndex;
	Var_11  = Ch;
	Var_15  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_15 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_16;

{
#define MR_PROC_LABEL mercury__calendar__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_108_111_111_112_95_95_104_111_57_95_95_91_50_93_95_48_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_15 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	Var_16  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (Var_16));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
        succeeded = (Var_14 == Var_11);
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_7 = Var_10;

      // direct tailcall eliminated
      ;
      HeadVar__3_7 = next_value_of_HeadVar__3_7;
      continue;
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

MR_Word MR_CALL 
mercury__calendar__det_date_from_string_1_f_0(
  MR_String Str_3)
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

MR_bool MR_CALL 
mercury__calendar__date_from_string_2_p_0(
  MR_String Str_3,
  MR_Word * Date_4)
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
  MR_Integer Var_63;
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
  MR_Word Rest1_6;
  MR_Char Var_52;
  MR_Integer Fraction_80;
  MR_Integer FractionDigits_81;
  MR_Word STATE_VARIABLE_Chars_12_83;
  MR_Word Chars1_79;
  MR_Char Var_82;
  MR_Integer Var_84;
  MR_Integer Var_85;
  MR_Char Var_90;
  MR_Integer Var_91;
  MR_Integer Var_92;

{
#define MR_PROC_LABEL mercury__calendar__date_from_string_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_63  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(Str_3, Var_63, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Chars_16_16);
  succeeded = (STATE_VARIABLE_Chars_16_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_52 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_16_16, (MR_Integer) 0)));
    Rest1_6 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_16_16, (MR_Integer) 1))));
    succeeded = ((MR_Char) 45 == Var_52);
  }
  if (succeeded)
  {
    MR_Integer Year0_7;

    mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &Year0_7, (MR_Integer) 0, &YearChars_8, Rest1_6, &STATE_VARIABLE_Chars_19_19);
    Year_9 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Year0_7);
  }
  else
    mercury__calendar__read_int_and_num_chars_2_6_p_0((MR_Integer) 0, &Year_9, (MR_Integer) 0, &YearChars_8, STATE_VARIABLE_Chars_16_16, &STATE_VARIABLE_Chars_19_19);
  succeeded = (YearChars_8 >= (MR_Integer) 4);
  if (succeeded)
  {
    Var_22 = (MR_Char) 45;
    succeeded = (STATE_VARIABLE_Chars_19_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_19_19, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_23_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_19_19, (MR_Integer) 1))));
      succeeded = (Var_22 == Var_53);
      if (succeeded)
      {
        Var_24 = (MR_Integer) 2;
        Var_69 = (MR_Integer) 0;
        Var_70 = (MR_Integer) 0;
        mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_69, &Month_10, Var_70, &Var_54, STATE_VARIABLE_Chars_23_23, &STATE_VARIABLE_Chars_25_25);
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
              succeeded = (STATE_VARIABLE_Chars_25_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_55 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_25_25, (MR_Integer) 0)));
                STATE_VARIABLE_Chars_29_29 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_25_25, (MR_Integer) 1))));
                succeeded = (Var_28 == Var_55);
                if (succeeded)
                {
                  Var_30 = (MR_Integer) 2;
                  Var_71 = (MR_Integer) 0;
                  Var_72 = (MR_Integer) 0;
                  mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_71, &Day_11, Var_72, &Var_56, STATE_VARIABLE_Chars_29_29, &STATE_VARIABLE_Chars_31_31);
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
                        succeeded = (STATE_VARIABLE_Chars_31_31 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_57 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
                          STATE_VARIABLE_Chars_35_35 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_31_31, (MR_Integer) 1))));
                          succeeded = (Var_34 == Var_57);
                          if (succeeded)
                          {
                            Var_36 = (MR_Integer) 2;
                            Var_73 = (MR_Integer) 0;
                            Var_74 = (MR_Integer) 0;
                            mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_73, &Hour_12, Var_74, &Var_58, STATE_VARIABLE_Chars_35_35, &STATE_VARIABLE_Chars_37_37);
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
                                  succeeded = (STATE_VARIABLE_Chars_37_37 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_59 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_37_37, (MR_Integer) 0)));
                                    STATE_VARIABLE_Chars_41_41 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_37_37, (MR_Integer) 1))));
                                    succeeded = (Var_40 == Var_59);
                                    if (succeeded)
                                    {
                                      Var_42 = (MR_Integer) 2;
                                      Var_75 = (MR_Integer) 0;
                                      Var_76 = (MR_Integer) 0;
                                      mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_75, &Minute_13, Var_76, &Var_60, STATE_VARIABLE_Chars_41_41, &STATE_VARIABLE_Chars_43_43);
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
                                            succeeded = (STATE_VARIABLE_Chars_43_43 != (MR_Word) ((MR_Unsigned) 0U));
                                            if (succeeded)
                                            {
                                              Var_61 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_43_43, (MR_Integer) 0)));
                                              STATE_VARIABLE_Chars_47_47 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_43_43, (MR_Integer) 1))));
                                              succeeded = (Var_46 == Var_61);
                                              if (succeeded)
                                              {
                                                Var_48 = (MR_Integer) 2;
                                                Var_77 = (MR_Integer) 0;
                                                Var_78 = (MR_Integer) 0;
                                                mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_77, &Second_14, Var_78, &Var_62, STATE_VARIABLE_Chars_47_47, &STATE_VARIABLE_Chars_49_49);
                                                succeeded = (Var_48 == Var_62);
                                                if (succeeded)
                                                {
                                                  Var_50 = (MR_Integer) 62;
                                                  succeeded = (Second_14 < Var_50);
                                                  if (succeeded)
                                                  {
                                                    Var_82 = (MR_Char) 46;
                                                    succeeded = (STATE_VARIABLE_Chars_49_49 != (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      Var_90 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_49_49, (MR_Integer) 0)));
                                                      Chars1_79 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_49_49, (MR_Integer) 1))));
                                                      succeeded = (Var_82 == Var_90);
                                                      if (succeeded)
                                                      {
                                                        Var_91 = (MR_Integer) 0;
                                                        Var_92 = (MR_Integer) 0;
                                                        mercury__calendar__read_int_and_num_chars_2_6_p_0(Var_91, &Fraction_80, Var_92, &FractionDigits_81, Chars1_79, &STATE_VARIABLE_Chars_12_83);
                                                        Var_84 = (MR_Integer) 0;
                                                        succeeded = (FractionDigits_81 > Var_84);
                                                        if (succeeded)
                                                        {
                                                          Var_85 = (MR_Integer) 7;
                                                          succeeded = (FractionDigits_81 < Var_85);
                                                        }
                                                      }
                                                    }
                                                    if (succeeded)
                                                    {
                                                      MR_Integer Var_86;
                                                      MR_Integer Var_88;

                                                      STATE_VARIABLE_Chars_51_51 = STATE_VARIABLE_Chars_12_83;
                                                      Var_88 = (MR_Integer) ((MR_Unsigned) 6 - (MR_Unsigned) FractionDigits_81);
                                                      mercury__int__pow_3_p_0((MR_Integer) 10, Var_88, &Var_86);
                                                      MicroSecond_15 = (MR_Integer) ((MR_Unsigned) Var_86 * (MR_Unsigned) Fraction_80);
                                                    }
                                                    else
                                                    {
                                                      MicroSecond_15 = (MR_Integer) 0;
                                                      STATE_VARIABLE_Chars_51_51 = STATE_VARIABLE_Chars_49_49;
                                                    }
                                                    succeeded = (STATE_VARIABLE_Chars_51_51 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      {
                                                        MR_Word base;
                                                        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                                                        *Date_4 = base;
                                                        MR_hl_field(0, base, 0) = ((MR_Box) (Year_9));
                                                        MR_hl_field(0, base, 1) = ((MR_Box) (Month_10));
                                                        MR_hl_field(0, base, 2) = ((MR_Box) (Day_11));
                                                        MR_hl_field(0, base, 3) = ((MR_Box) (Hour_12));
                                                        MR_hl_field(0, base, 4) = ((MR_Box) (Minute_13));
                                                        MR_hl_field(0, base, 5) = ((MR_Box) (Second_14));
                                                        MR_hl_field(0, base, 6) = ((MR_Box) (MicroSecond_15));
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
    MR_bool succeeded = (STATE_VARIABLE_Chars_0_17 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Rest_11;
    MR_Integer Digit_12;
    MR_Char Char_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
      Rest_11 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_0_17, (MR_Integer) 1))));
      succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_10, &Digit_12);
    }
    if (succeeded)
    {
      MR_Integer STATE_VARIABLE_Val_19_19;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Val_0_13 * (MR_Unsigned) 10);
      MR_Integer Var_23;
      MR_Integer next_value_of_STATE_VARIABLE_Val_0_13;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Chars_0_17;

      STATE_VARIABLE_Val_19_19 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) Digit_12);
      Var_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_15 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
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
  MR_Integer Month_10;

  *Year_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  Month_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  *Day_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  *Hour_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  *Minute_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  *Second_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
  *MicroSecond_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
  *HeadVar__3_3 = mercury__calendar__det_int_to_month_1_f_0(Month_10);
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
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__calendar_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Second_14, &Var_35);
    mercury__string__append_3_p_2((MR_String) ":", Var_35, &Var_43);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__calendar_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Minute_13, &Var_44);
    mercury__string__append_3_p_2(Var_44, Var_43, &Var_51);
    mercury__string__append_3_p_2((MR_String) ":", Var_51, &Var_53);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__calendar_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Hour_12, &Var_54);
    mercury__string__append_3_p_2(Var_54, Var_53, &Var_61);
    mercury__string__append_3_p_2((MR_String) " ", Var_61, &Var_63);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__calendar_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Day_11, &Var_64);
    mercury__string__append_3_p_2(Var_64, Var_63, &Var_71);
    mercury__string__append_3_p_2((MR_String) "-", Var_71, &Var_73);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__calendar_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_24, &Var_74);
    mercury__string__append_3_p_2(Var_74, Var_73, &Var_81);
    mercury__string__append_3_p_2((MR_String) "-", Var_81, &Var_83);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__calendar_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Year_9, &Var_84);
    mercury__string__append_3_p_2(Var_84, Var_83, &Var_91);
    mercury__string__append_3_p_2((MR_String) "invalid date: ", Var_91, &Msg_18);
    mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_init_date\'/7", Msg_18);
  }
  return Date_16;
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
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *Date_16 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Year_9));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_24));
                MR_hl_field(0, base, 2) = ((MR_Box) (Day_11));
                MR_hl_field(0, base, 3) = ((MR_Box) (Hour_12));
                MR_hl_field(0, base, 4) = ((MR_Box) (Minute_13));
                MR_hl_field(0, base, 5) = ((MR_Box) (Second_14));
                MR_hl_field(0, base, 6) = ((MR_Box) (MicroSecond_15));
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

static MR_Integer MR_CALL 
mercury__calendar__max_day_in_month_for_2_f_0(
  MR_Integer YearValue_4,
  MR_Integer MonthValue_5)
{
  MR_bool succeeded;
  MR_Integer Max_6;
  MR_Integer M_7;
  MR_Integer Y_8;
  MR_Integer Var_10;
  MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) MonthValue_5 - (MR_Unsigned) 1);
  MR_Integer Var_15;
  MR_Integer Var_16;
  MR_Integer Var_30;
  MR_Integer Var_31;
  MR_Integer Max0_9;

  Var_31 = mercury__int__div_2_f_0(Var_11, (MR_Integer) 12);
  Var_30 = (MR_Integer) ((MR_Unsigned) Var_31 * (MR_Unsigned) 12);
  Var_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) Var_30);
  M_7 = (MR_Integer) ((MR_Unsigned) Var_10 + (MR_Unsigned) 1);
  Var_16 = (MR_Integer) ((MR_Unsigned) MonthValue_5 - (MR_Unsigned) 1);
  Var_15 = mercury__int__div_2_f_0(Var_16, (MR_Integer) 12);
  Y_8 = (MR_Integer) ((MR_Unsigned) YearValue_4 + (MR_Unsigned) Var_15);
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
          MR_Integer Var_19;
          MR_Integer Var_32;
          MR_Integer Var_33;

          Var_33 = mercury__int__div_2_f_0(Y_8, (MR_Integer) 400);
          Var_32 = (MR_Integer) ((MR_Unsigned) Var_33 * (MR_Unsigned) 400);
          Var_19 = (MR_Integer) ((MR_Unsigned) Y_8 - (MR_Unsigned) Var_32);
          succeeded = (Var_19 == (MR_Integer) 0);
        }
        if (!(succeeded))
        {
          MR_Integer Var_23;
          MR_Integer Var_24;
          MR_Integer Var_36;
          MR_Integer Var_37;
          MR_Integer Var_21;
          MR_Integer Var_34;
          MR_Integer Var_35;

          Var_35 = mercury__int__div_2_f_0(Y_8, (MR_Integer) 100);
          Var_34 = (MR_Integer) ((MR_Unsigned) Var_35 * (MR_Unsigned) 100);
          Var_21 = (MR_Integer) ((MR_Unsigned) Y_8 - (MR_Unsigned) Var_34);
          succeeded = (Var_21 != (MR_Integer) 0);
          if (succeeded)
          {
            Var_24 = (MR_Integer) 4;
            Var_37 = mercury__int__div_2_f_0(Y_8, Var_24);
            Var_36 = (MR_Integer) ((MR_Unsigned) Var_37 * (MR_Unsigned) Var_24);
            Var_23 = (MR_Integer) ((MR_Unsigned) Y_8 - (MR_Unsigned) Var_36);
            succeeded = (Var_23 == (MR_Integer) 0);
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
    MR_String Var_26;
    MR_String Var_28;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_44;

    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__calendar_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_44 = func_0(((MR_Box) ((MR_Word) (&mercury__calendar_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_44 = ((MR_Word) (conv1_Var_44));
    mercury__string__to_string__value_to_revstrings_prio_6_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Integer) 1, Var_44, ((MR_Box) (M_7)), (MR_Word) ((MR_Unsigned) 0U), &Var_41);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_28 = mercury__string__append_list_1_f_0(Var_42);
    mercury__string__append_3_p_2((MR_String) "unexpected value for M: ", Var_28, &Var_26);
    mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.max_day_in_month_for\'/2", Var_26);
  }
  return Max_6;
}

MR_Integer MR_CALL 
mercury__calendar__month_to_int0_1_f_0(
  MR_Word Month_3)
{
  MR_Integer Int_4;
  MR_Integer Var_5;

  mercury__calendar__int_to_month_2_p_1(&Var_5, Month_3);
  Int_4 = (MR_Integer) ((MR_Unsigned) Var_5 - (MR_Unsigned) 1);
  return Int_4;
}

MR_Integer MR_CALL 
mercury__calendar__month_to_int_1_f_0(
  MR_Word Month_3)
{
  MR_Integer Int_4;

  mercury__calendar__int_to_month_2_p_1(&Int_4, Month_3);
  return Int_4;
}

MR_Word MR_CALL 
mercury__calendar__det_int0_to_month_1_f_0(
  MR_Integer Int_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Month_4;
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Int_3 + (MR_Unsigned) 1);

  succeeded = mercury__calendar__int_to_month_2_p_0(Var_10, &Month_4);
  if (succeeded)
    HeadVar__2_2 = Month_4;
  else
  {
    MR_String Var_6;
    MR_String Var_8;

{
#define MR_PROC_LABEL mercury__calendar__det_int0_to_month_1_f_0

	MR_Integer I;
	MR_String S;

	I = Int_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_8  = S;
}
    mercury__string__append_3_p_2((MR_String) "invalid month: ", Var_8, &Var_6);
    mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_int0_to_month\'/1", Var_6);
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__calendar__int0_to_month_2_p_1(
  MR_Integer * Int_3,
  MR_Word Month_4)
{
  MR_Integer Var_5;

  mercury__calendar__int_to_month_2_p_1(&Var_5, Month_4);
  *Int_3 = (MR_Integer) ((MR_Unsigned) Var_5 - (MR_Unsigned) 1);
}

MR_bool MR_CALL 
mercury__calendar__int0_to_month_2_p_0(
  MR_Integer Int_3,
  MR_Word * Month_4)
{
  MR_bool succeeded;
  MR_Integer Var_5 = (MR_Integer) ((MR_Unsigned) Int_3 + (MR_Unsigned) 1);

  succeeded = mercury__calendar__int_to_month_2_p_0(Var_5, Month_4);
  return succeeded;
}

void MR_CALL 
mercury__calendar__int_to_month_2_p_1(
  MR_Integer * HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  *HeadVar__1_1 = ((&mercury__calendar_vector_common_9[0 + HeadVar__2_2]))->mercury__calendar__vector_common_type_9_0__vct_9_f_0;
}

MR_Integer MR_CALL 
mercury__calendar__microsecond_1_f_0(
  MR_Word Date_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Date_3, (MR_Integer) 6))));

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__second_1_f_0(
  MR_Word Date_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Date_3, (MR_Integer) 5))));

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__minute_1_f_0(
  MR_Word Date_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Date_3, (MR_Integer) 4))));

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__calendar__hour_1_f_0(
  MR_Word Date_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Date_3, (MR_Integer) 3))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__calendar__day_of_week_1_f_0(
  MR_Word Date_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer JDN_4;
  MR_Integer Mod_5;
  MR_Integer Var_7;
  MR_Integer Var_8;

  JDN_4 = mercury__calendar__julian_day_number_1_f_0(Date_3);
  Var_8 = mercury__int__div_2_f_0(JDN_4, (MR_Integer) 7);
  Var_7 = (MR_Integer) ((MR_Unsigned) Var_8 * (MR_Unsigned) 7);
  Mod_5 = (MR_Integer) ((MR_Unsigned) JDN_4 - (MR_Unsigned) Var_7);
  HeadVar__2_2 = mercury__calendar__det_day_of_week_from_mod_1_f_0(Mod_5);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__calendar__det_day_of_week_from_mod_1_f_0(
  MR_Integer Mod_3)
{
  MR_bool succeeded;
  MR_Word DayOfWeek_4;
  MR_Word DayOfWeek0_5;

  if ((((MR_Unsigned) Mod_3) <= ((MR_Unsigned) 6)))
  {
    DayOfWeek0_5 = ((&mercury__calendar_vector_common_8[0 + Mod_3]))->mercury__calendar__vector_common_type_8_0__vct_8_f_0;
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

{
#define MR_PROC_LABEL mercury__calendar__det_day_of_week_from_mod_1_f_0

	MR_Integer I;
	MR_String S;

	I = Mod_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    mercury__string__append_3_p_2((MR_String) "invalid mod: ", Var_9, &Var_7);
    mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_day_of_week_from_mod\'/1", Var_7);
  }
  return DayOfWeek_4;
}

MR_Integer MR_CALL 
mercury__calendar__julian_day_number_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer JDN_10;
  MR_Integer Year_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Month_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Day_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Integer A_11;
  MR_Integer Y_12;
  MR_Integer M_13;
  MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) 14 - (MR_Unsigned) Month_4);
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

  A_11 = mercury__int__div_2_f_0(Var_14, (MR_Integer) 12);
  Var_17 = (MR_Integer) ((MR_Unsigned) Year_3 + (MR_Unsigned) 4800);
  Y_12 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) A_11);
  Var_20 = (MR_Integer) ((MR_Unsigned) 12 * (MR_Unsigned) A_11);
  Var_19 = (MR_Integer) ((MR_Unsigned) Month_4 + (MR_Unsigned) Var_20);
  M_13 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 3);
  Var_30 = (MR_Integer) ((MR_Unsigned) 153 * (MR_Unsigned) M_13);
  Var_29 = (MR_Integer) ((MR_Unsigned) Var_30 + (MR_Unsigned) 2);
  Var_28 = mercury__int__div_2_f_0(Var_29, (MR_Integer) 5);
  Var_27 = (MR_Integer) ((MR_Unsigned) Day_5 + (MR_Unsigned) Var_28);
  Var_34 = (MR_Integer) ((MR_Unsigned) 365 * (MR_Unsigned) Y_12);
  Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) Var_34);
  Var_36 = mercury__int__div_2_f_0(Y_12, (MR_Integer) 4);
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) Var_36);
  Var_38 = mercury__int__div_2_f_0(Y_12, (MR_Integer) 100);
  Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 - (MR_Unsigned) Var_38);
  Var_40 = mercury__int__div_2_f_0(Y_12, (MR_Integer) 400);
  Var_23 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) Var_40);
  JDN_10 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) 32045);
  return JDN_10;
}

MR_Integer MR_CALL 
mercury__calendar__day_of_month_1_f_0(
  MR_Word Date_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Date_3, (MR_Integer) 2))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__calendar__month_1_f_0(
  MR_Word Date_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(0, Date_3, (MR_Integer) 1))));

  HeadVar__2_2 = mercury__calendar__det_int_to_month_1_f_0(Var_4);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__calendar__det_int_to_month_1_f_0(
  MR_Integer Int_3)
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

{
#define MR_PROC_LABEL mercury__calendar__det_int_to_month_1_f_0

	MR_Integer I;
	MR_String S;

	I = Int_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_8  = S;
}
    mercury__string__append_3_p_2((MR_String) "invalid month: ", Var_8, &Var_6);
    mercury__require__unexpected_2_p_0((MR_String) "function \140calendar.det_int_to_month\'/1", Var_6);
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__calendar__int_to_month_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 1))) <= ((MR_Unsigned) 11)))
  {
    *HeadVar__2_2 = ((&mercury__calendar_vector_common_7[0 + (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 1)]))->mercury__calendar__vector_common_type_7_0__vct_7_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Integer MR_CALL 
mercury__calendar__year_1_f_0(
  MR_Word Date_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Date_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mercury__calendar____Unify____date_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____date_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____date_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____date_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____date_time_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____date_time_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____date_time_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____date_time_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_month_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____day_of_month_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____day_of_month_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____day_of_month_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____day_of_week_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____day_of_week_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____day_of_week_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____day_of_week_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____days_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____days_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____days_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____days_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____duration_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____duration_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____duration_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____duration_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____hour_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____hour_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____hour_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____hour_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____hours_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____hours_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____hours_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____hours_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____microsecond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____microsecond_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____microsecond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____microsecond_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____microseconds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____microseconds_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____microseconds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____microseconds_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____minute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____minute_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____minute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____minute_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____minutes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____minutes_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____minutes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____minutes_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____month_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____month_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____month_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____month_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____months_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____months_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____months_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____months_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____order_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____order_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____second_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____second_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____second_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____second_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____seconds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____seconds_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____seconds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____seconds_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____year_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____year_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____year_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____year_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__calendar____Unify____years_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__calendar____Unify____years_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__calendar____Compare____years_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__calendar____Compare____years_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module calendar.
