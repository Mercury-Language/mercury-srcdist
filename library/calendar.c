/*
** Automatically generated from `calendar.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__calendar__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "io.int"
#include "io.mh"

#line 27 "calendar.c"
#line 542 "io.int"
#include "string.mh"

#line 31 "calendar.c"
#line 43 "time.int"
#include "time.mh"

#line 35 "calendar.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "calendar.c"
#line 31 "array.int2"
#include "array.mh"

#line 43 "calendar.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "calendar.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 51 "calendar.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "calendar.c"
#line 20 "store.opt"
#include "store.mh"

#line 59 "calendar.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 63 "calendar.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 67 "calendar.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 71 "calendar.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 75 "calendar.c"
#line 4 "char.opt"
#include "char.mh"

#line 79 "calendar.c"
#line 3 "float.opt"
#include "float.mh"

#line 83 "calendar.c"
#line 3 "math.opt"
#include "math.mh"

#line 87 "calendar.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "calendar.c"
#line 150 "io.opt"
#include "dir.mh"

#line 95 "calendar.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 99 "calendar.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "calendar.c"
#line 104 "calendar.c"
#include "calendar.mh"

#line 107 "calendar.c"
#line 108 "calendar.c"
#ifndef CALENDAR_DECL_GUARD
#define CALENDAR_DECL_GUARD

#line 112 "calendar.c"
#line 113 "calendar.c"

#endif
#line 116 "calendar.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1[7];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_2[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_3[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_calendar__type_ctor_info_date_0,
	mercury_data_calendar__type_ctor_info_day_of_month_0,
	mercury_data_calendar__type_ctor_info_day_of_week_0,
	mercury_data_calendar__type_ctor_info_days_0,
	mercury_data_calendar__type_ctor_info_duration_0,
	mercury_data_calendar__type_ctor_info_hour_0,
	mercury_data_calendar__type_ctor_info_hours_0,
	mercury_data_calendar__type_ctor_info_microsecond_0,
	mercury_data_calendar__type_ctor_info_microseconds_0,
	mercury_data_calendar__type_ctor_info_minute_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_calendar__type_ctor_info_minutes_0,
	mercury_data_calendar__type_ctor_info_month_0,
	mercury_data_calendar__type_ctor_info_months_0,
	mercury_data_calendar__type_ctor_info_order_0,
	mercury_data_calendar__type_ctor_info_second_0,
	mercury_data_calendar__type_ctor_info_seconds_0,
	mercury_data_calendar__type_ctor_info_year_0,
	mercury_data_calendar__type_ctor_info_years_0;
MR_decl_label8(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0, 31,3,5,2,11,13,15,10)
MR_decl_label10(calendar__add_duration_3_0, 2,4,6,7,9,10,11,13,14,16)
MR_decl_label6(calendar__add_duration_3_0, 17,19,20,21,22,24)
MR_decl_label2(calendar__current_local_time_3_0, 2,3)
MR_decl_label2(calendar__current_utc_time_3_0, 2,3)
MR_decl_label10(calendar__date_from_string_2_0, 2,5,3,6,7,9,11,12,14,16)
MR_decl_label3(calendar__date_from_string_2_0, 18,19,1)
MR_decl_label10(calendar__duration_from_string_2_0, 2,3,6,9,8,12,13,17,18,19)
MR_decl_label3(calendar__duration_from_string_2_0, 14,23,1)
MR_decl_label10(calendar__greedy_subtract_descending_4_0, 2,3,4,5,6,9,10,11,8,13)
MR_decl_label7(calendar__greedy_subtract_descending_4_0, 14,15,16,17,18,19,21)
MR_decl_label10(calendar__init_date_8_0, 3,5,7,9,11,13,15,17,19,21)
MR_decl_label4(calendar__init_date_8_0, 23,25,27,1)
MR_decl_label3(calendar__local_time_offset_3_0, 2,3,5)
MR_decl_label2(calendar__read_days_3_0, 3,2)
MR_decl_label2(calendar__read_hours_3_0, 3,2)
MR_decl_label1(calendar__read_int_2_4_0, 19)
MR_decl_label1(calendar__read_int_and_num_chars_2_6_0, 19)
MR_decl_label4(calendar__read_microseconds_3_0, 5,6,2,3)
MR_decl_label2(calendar__read_minutes_3_0, 3,2)
MR_decl_label2(calendar__read_months_3_0, 3,2)
MR_decl_label7(calendar__read_seconds_and_microseconds_4_0, 3,7,8,4,5,9,2)
MR_decl_label1(calendar__subtract_ints_with_borrow_5_0, 2)
MR_decl_label1(calendar__unpack_date_8_0, 2)
MR_decl_label5(calendar__unpack_duration_8_0, 2,3,4,5,6)
MR_decl_label7(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0, 25,4,5,6,8,2,1)
MR_decl_label10(fn__calendar__date_to_string_1_0, 2,3,4,8,9,10,5,17,32,47)
MR_decl_label9(fn__calendar__date_to_string_1_0, 62,77,92,107,122,137,152,167,182)
MR_decl_label10(fn__calendar__day_duration_2_0, 2,5,4,7,9,10,11,12,13,14)
MR_decl_label2(fn__calendar__day_of_week_1_0, 2,3)
MR_decl_label3(fn__calendar__det_date_from_string_1_0, 4,2,6)
MR_decl_label3(fn__calendar__det_day_of_week_from_mod_1_0, 15,4,14)
MR_decl_label3(fn__calendar__det_duration_from_string_1_0, 4,2,6)
MR_decl_label10(fn__calendar__det_init_date_7_0, 4,2,8,20,32,44,56,68,80,92)
MR_decl_label5(fn__calendar__det_init_date_7_0, 104,116,128,140,152)
MR_decl_label3(fn__calendar__det_month_1_0, 15,4,14)
MR_decl_label4(fn__calendar__duration_2_0, 2,5,4,7)
MR_decl_label10(fn__calendar__duration_to_string_1_0, 99,7,8,11,12,15,16,18,19,20)
MR_decl_label10(fn__calendar__duration_to_string_1_0, 21,22,24,25,26,27,28,33,34,35)
MR_decl_label4(fn__calendar__duration_to_string_1_0, 36,37,38,98)
MR_decl_label3(fn__calendar__init_duration_7_0, 4,3,2)
MR_decl_label5(fn__calendar__julian_day_number_1_0, 2,3,4,5,6)
MR_decl_label10(fn__calendar__max_day_in_month_for_2_0, 2,3,7,8,13,16,18,11,10,21)
MR_decl_label5(fn__calendar__max_day_in_month_for_2_0, 5,22,23,24,25)
MR_decl_label1(fn__calendar__modulo_2_0, 2)
MR_decl_label1(fn__calendar__modulo_3_0, 2)
MR_decl_label6(fn__calendar__seconds_duration_string_2_0, 38,5,9,10,11,6)
MR_decl_label2(fn__calendar__string_if_nonzero_2_0, 14,4)
MR_decl_label1(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0, 2)
MR_decl_label2(__Unify___calendar__date_0_0, 4,1)
MR_decl_label2(__Unify___calendar__duration_0_0, 4,1)
MR_decl_label10(__Compare___calendar__date_0_0, 6,7,9,14,15,17,22,23,25,30)
MR_decl_label10(__Compare___calendar__date_0_0, 31,33,38,39,41,46,47,49,52,83)
MR_decl_label2(__Compare___calendar__date_0_0, 53,62)
MR_decl_label2(__Compare___calendar__day_of_month_0_0, 2,3)
MR_decl_label2(__Compare___calendar__day_of_week_0_0, 2,3)
MR_decl_label2(__Compare___calendar__days_0_0, 2,3)
MR_decl_label10(__Compare___calendar__duration_0_0, 6,7,9,14,15,17,22,23,25,28)
MR_decl_label3(__Compare___calendar__duration_0_0, 47,29,35)
MR_decl_label2(__Compare___calendar__hour_0_0, 2,3)
MR_decl_label2(__Compare___calendar__hours_0_0, 2,3)
MR_decl_label2(__Compare___calendar__microsecond_0_0, 2,3)
MR_decl_label2(__Compare___calendar__microseconds_0_0, 2,3)
MR_decl_label2(__Compare___calendar__minute_0_0, 2,3)
MR_decl_label2(__Compare___calendar__minutes_0_0, 2,3)
MR_decl_label2(__Compare___calendar__month_0_0, 2,3)
MR_decl_label2(__Compare___calendar__months_0_0, 2,3)
MR_decl_label2(__Compare___calendar__order_0_0, 2,3)
MR_decl_label2(__Compare___calendar__second_0_0, 2,3)
MR_decl_label2(__Compare___calendar__seconds_0_0, 2,3)
MR_decl_label2(__Compare___calendar__year_0_0, 2,3)
MR_decl_label2(__Compare___calendar__years_0_0, 2,3)
MR_def_extern_entry(fn__calendar__year_1_0)
MR_def_extern_entry(fn__calendar__det_month_1_0)
MR_def_extern_entry(fn__calendar__month_1_0)
MR_def_extern_entry(fn__calendar__day_of_month_1_0)
MR_def_extern_entry(fn__calendar__julian_day_number_1_0)
MR_def_extern_entry(fn__calendar__det_day_of_week_from_mod_1_0)
MR_def_extern_entry(fn__calendar__day_of_week_1_0)
MR_def_extern_entry(fn__calendar__hour_1_0)
MR_def_extern_entry(fn__calendar__minute_1_0)
MR_def_extern_entry(fn__calendar__second_1_0)
MR_def_extern_entry(fn__calendar__microsecond_1_0)
MR_decl_static(fn__calendar__max_day_in_month_for_2_0)
MR_def_extern_entry(calendar__init_date_8_0)
MR_def_extern_entry(fn__calendar__det_init_date_7_0)
MR_def_extern_entry(calendar__unpack_date_8_0)
MR_decl_static(calendar__read_int_and_num_chars_2_6_0)
MR_decl_static(calendar__read_int_and_num_chars_4_0)
MR_decl_static(calendar__read_microseconds_3_0)
MR_def_extern_entry(calendar__date_from_string_2_0)
MR_def_extern_entry(fn__calendar__det_date_from_string_1_0)
MR_def_extern_entry(fn__calendar__date_to_string_1_0)
MR_def_extern_entry(fn__calendar__tm_to_date_1_0)
MR_def_extern_entry(calendar__current_local_time_3_0)
MR_def_extern_entry(calendar__current_utc_time_3_0)
MR_def_extern_entry(fn__calendar__unix_epoch_0_0)
MR_def_extern_entry(fn__calendar__years_1_0)
MR_def_extern_entry(fn__calendar__months_1_0)
MR_def_extern_entry(fn__calendar__days_1_0)
MR_def_extern_entry(fn__calendar__hours_1_0)
MR_def_extern_entry(fn__calendar__minutes_1_0)
MR_def_extern_entry(fn__calendar__seconds_1_0)
MR_def_extern_entry(fn__calendar__microseconds_1_0)
MR_decl_static(fn__calendar__microseconds_per_second_0_0)
MR_def_extern_entry(fn__calendar__init_duration_7_0)
MR_def_extern_entry(calendar__unpack_duration_8_0)
MR_def_extern_entry(fn__calendar__zero_duration_0_0)
MR_def_extern_entry(fn__calendar__negate_1_0)
MR_decl_static(calendar__read_int_2_4_0)
MR_decl_static(calendar__read_months_3_0)
MR_decl_static(calendar__read_days_3_0)
MR_decl_static(calendar__read_hours_3_0)
MR_decl_static(calendar__read_minutes_3_0)
MR_decl_static(calendar__read_seconds_and_microseconds_4_0)
MR_def_extern_entry(calendar__duration_from_string_2_0)
MR_def_extern_entry(fn__calendar__det_duration_from_string_1_0)
MR_decl_static(fn__calendar__string_if_nonzero_2_0)
MR_decl_static(fn__calendar__seconds_duration_string_2_0)
MR_def_extern_entry(fn__calendar__duration_to_string_1_0)
MR_decl_static(fn__calendar__fquotient_3_0)
MR_decl_static(fn__calendar__modulo_2_0)
MR_decl_static(fn__calendar__modulo_3_0)
MR_def_extern_entry(calendar__add_duration_3_0)
MR_def_extern_entry(fn__calendar__test_dates_0_0)
MR_def_extern_entry(calendar__duration_leq_2_0)
MR_decl_static(calendar__subtract_ints_with_borrow_5_0)
MR_decl_static(calendar__greedy_subtract_descending_4_0)
MR_def_extern_entry(fn__calendar__duration_2_0)
MR_def_extern_entry(calendar__local_time_offset_3_0)
MR_def_extern_entry(fn__calendar__day_duration_2_0)
MR_def_extern_entry(__Unify___calendar__date_0_0)
MR_def_extern_entry(__Compare___calendar__date_0_0)
MR_def_extern_entry(__Unify___calendar__day_of_month_0_0)
MR_def_extern_entry(__Compare___calendar__day_of_month_0_0)
MR_def_extern_entry(__Unify___calendar__day_of_week_0_0)
MR_def_extern_entry(__Compare___calendar__day_of_week_0_0)
MR_def_extern_entry(__Unify___calendar__days_0_0)
MR_def_extern_entry(__Compare___calendar__days_0_0)
MR_def_extern_entry(__Unify___calendar__duration_0_0)
MR_def_extern_entry(__Compare___calendar__duration_0_0)
MR_def_extern_entry(__Unify___calendar__hour_0_0)
MR_def_extern_entry(__Compare___calendar__hour_0_0)
MR_def_extern_entry(__Unify___calendar__hours_0_0)
MR_def_extern_entry(__Compare___calendar__hours_0_0)
MR_def_extern_entry(__Unify___calendar__microsecond_0_0)
MR_def_extern_entry(__Compare___calendar__microsecond_0_0)
MR_def_extern_entry(__Unify___calendar__microseconds_0_0)
MR_def_extern_entry(__Compare___calendar__microseconds_0_0)
MR_def_extern_entry(__Unify___calendar__minute_0_0)
MR_def_extern_entry(__Compare___calendar__minute_0_0)
MR_def_extern_entry(__Unify___calendar__minutes_0_0)
MR_def_extern_entry(__Compare___calendar__minutes_0_0)
MR_def_extern_entry(__Unify___calendar__month_0_0)
MR_def_extern_entry(__Compare___calendar__month_0_0)
MR_def_extern_entry(__Unify___calendar__months_0_0)
MR_def_extern_entry(__Compare___calendar__months_0_0)
MR_def_extern_entry(__Unify___calendar__order_0_0)
MR_def_extern_entry(__Compare___calendar__order_0_0)
MR_def_extern_entry(__Unify___calendar__second_0_0)
MR_def_extern_entry(__Compare___calendar__second_0_0)
MR_def_extern_entry(__Unify___calendar__seconds_0_0)
MR_def_extern_entry(__Compare___calendar__seconds_0_0)
MR_def_extern_entry(__Unify___calendar__year_0_0)
MR_def_extern_entry(__Compare___calendar__year_0_0)
MR_def_extern_entry(__Unify___calendar__years_0_0)
MR_def_extern_entry(__Compare___calendar__years_0_0)
MR_decl_static(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(fn__f_99_97_108_101_110_100_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0)
MR_decl_static(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[12] =
{
{
4
},
{
8
},
{
12
},
{
2
},
{
1
},
{
7
},
{
6
},
{
3
},
{
5
},
{
11
},
{
10
},
{
9
},
};

static const struct mercury_type_1 mercury_common_1[6] =
{
{
{
1970,
1,
1,
0,
0,
0,
0
}
},
{
{
0,
0,
0,
0,
0,
0,
0
}
},
{
{
1903,
7,
1,
0,
0,
0,
0
}
},
{
{
1903,
3,
1,
0,
0,
0,
0
}
},
{
{
1697,
2,
1,
0,
0,
0,
0
}
},
{
{
1696,
9,
1,
0,
0,
0,
0
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
0,
0,
0,
0
}
},
{
{
0,
-1,
0,
0
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_string_const("S", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("", 0),
MR_TAG_COMMON(1,3,0)
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
{
MR_TAG_COMMON(0,1,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,3),
MR_TAG_COMMON(1,4,0)
}
},
{
{
MR_TAG_COMMON(0,1,4),
MR_TAG_COMMON(1,4,1)
}
},
{
{
MR_TAG_COMMON(0,1,5),
MR_TAG_COMMON(1,4,2)
}
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[12] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
{
10
},
{
11
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[7] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
};

static const struct mercury_type_0 mercury_vector_common_0_2[12] =
{
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
{
10
},
{
11
},
{
12
},
};

static const struct mercury_type_0 mercury_vector_common_0_3[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};

static const struct mercury_type_0 mercury_vector_common_0_4[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_calendar__field_types_date_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_calendar__field_names_date_0_0[] = {
	"dt_year",
	"dt_month",
	"dt_day",
	"dt_hour",
	"dt_minute",
	"dt_second",
	"dt_microsecond"
};

static const MR_DuFunctorDesc mercury_data_calendar__du_functor_desc_date_0_0 = {
	"date",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_calendar__field_types_date_0_0,
	mercury_data_calendar__field_names_date_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_calendar__du_stag_ordered_date_0_0[] = {
	&mercury_data_calendar__du_functor_desc_date_0_0

};

const MR_DuPtagLayout mercury_data_calendar__du_ptag_ordered_date_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_calendar__du_stag_ordered_date_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_calendar__du_name_ordered_date_0[] = {
	&mercury_data_calendar__du_functor_desc_date_0_0
};

const MR_Integer mercury_data_calendar__functor_number_map_date_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_date_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__date_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__date_0_0)),
	"calendar",
	"date",
	{ (void *)mercury_data_calendar__du_name_ordered_date_0 },
	{ (void *)mercury_data_calendar__du_ptag_ordered_date_0 },
	1,
	4,
	mercury_data_calendar__functor_number_map_date_0
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_day_of_month_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__day_of_month_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__day_of_month_0_0)),
	"calendar",
	"day_of_month",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_day_of_week_0_0 = {
	"monday",
	0
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_day_of_week_0_1 = {
	"tuesday",
	1
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_day_of_week_0_2 = {
	"wednesday",
	2
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_day_of_week_0_3 = {
	"thursday",
	3
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_day_of_week_0_4 = {
	"friday",
	4
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_day_of_week_0_5 = {
	"saturday",
	5
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_day_of_week_0_6 = {
	"sunday",
	6
};

const MR_EnumFunctorDescPtr mercury_data_calendar__enum_value_ordered_day_of_week_0[] = {
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_0,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_1,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_2,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_3,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_4,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_5,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_6
};

const MR_EnumFunctorDescPtr mercury_data_calendar__enum_name_ordered_day_of_week_0[] = {
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_4,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_0,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_5,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_6,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_3,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_1,
	&mercury_data_calendar__enum_functor_desc_day_of_week_0_2
};

const MR_Integer mercury_data_calendar__functor_number_map_day_of_week_0[] = {
	1,
	5,
	6,
	4,
	0,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_day_of_week_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__day_of_week_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__day_of_week_0_0)),
	"calendar",
	"day_of_week",
	{ (void *)mercury_data_calendar__enum_name_ordered_day_of_week_0 },
	{ (void *)mercury_data_calendar__enum_value_ordered_day_of_week_0 },
	7,
	4,
	mercury_data_calendar__functor_number_map_day_of_week_0
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_days_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__days_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__days_0_0)),
	"calendar",
	"days",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_calendar__field_types_duration_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_calendar__field_names_duration_0_0[] = {
	"dur_months",
	"dur_days",
	"dur_seconds",
	"dur_microseconds"
};

static const MR_DuFunctorDesc mercury_data_calendar__du_functor_desc_duration_0_0 = {
	"duration",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_calendar__field_types_duration_0_0,
	mercury_data_calendar__field_names_duration_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_calendar__du_stag_ordered_duration_0_0[] = {
	&mercury_data_calendar__du_functor_desc_duration_0_0

};

const MR_DuPtagLayout mercury_data_calendar__du_ptag_ordered_duration_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_calendar__du_stag_ordered_duration_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_calendar__du_name_ordered_duration_0[] = {
	&mercury_data_calendar__du_functor_desc_duration_0_0
};

const MR_Integer mercury_data_calendar__functor_number_map_duration_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_duration_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__duration_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__duration_0_0)),
	"calendar",
	"duration",
	{ (void *)mercury_data_calendar__du_name_ordered_duration_0 },
	{ (void *)mercury_data_calendar__du_ptag_ordered_duration_0 },
	1,
	4,
	mercury_data_calendar__functor_number_map_duration_0
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_hour_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__hour_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__hour_0_0)),
	"calendar",
	"hour",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_hours_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__hours_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__hours_0_0)),
	"calendar",
	"hours",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_microsecond_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__microsecond_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__microsecond_0_0)),
	"calendar",
	"microsecond",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_microseconds_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__microseconds_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__microseconds_0_0)),
	"calendar",
	"microseconds",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_minute_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__minute_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__minute_0_0)),
	"calendar",
	"minute",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_minutes_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__minutes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__minutes_0_0)),
	"calendar",
	"minutes",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_0 = {
	"january",
	0
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_1 = {
	"february",
	1
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_2 = {
	"march",
	2
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_3 = {
	"april",
	3
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_4 = {
	"may",
	4
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_5 = {
	"june",
	5
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_6 = {
	"july",
	6
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_7 = {
	"august",
	7
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_8 = {
	"september",
	8
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_9 = {
	"october",
	9
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_10 = {
	"november",
	10
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_month_0_11 = {
	"december",
	11
};

const MR_EnumFunctorDescPtr mercury_data_calendar__enum_value_ordered_month_0[] = {
	&mercury_data_calendar__enum_functor_desc_month_0_0,
	&mercury_data_calendar__enum_functor_desc_month_0_1,
	&mercury_data_calendar__enum_functor_desc_month_0_2,
	&mercury_data_calendar__enum_functor_desc_month_0_3,
	&mercury_data_calendar__enum_functor_desc_month_0_4,
	&mercury_data_calendar__enum_functor_desc_month_0_5,
	&mercury_data_calendar__enum_functor_desc_month_0_6,
	&mercury_data_calendar__enum_functor_desc_month_0_7,
	&mercury_data_calendar__enum_functor_desc_month_0_8,
	&mercury_data_calendar__enum_functor_desc_month_0_9,
	&mercury_data_calendar__enum_functor_desc_month_0_10,
	&mercury_data_calendar__enum_functor_desc_month_0_11
};

const MR_EnumFunctorDescPtr mercury_data_calendar__enum_name_ordered_month_0[] = {
	&mercury_data_calendar__enum_functor_desc_month_0_3,
	&mercury_data_calendar__enum_functor_desc_month_0_7,
	&mercury_data_calendar__enum_functor_desc_month_0_11,
	&mercury_data_calendar__enum_functor_desc_month_0_1,
	&mercury_data_calendar__enum_functor_desc_month_0_0,
	&mercury_data_calendar__enum_functor_desc_month_0_6,
	&mercury_data_calendar__enum_functor_desc_month_0_5,
	&mercury_data_calendar__enum_functor_desc_month_0_2,
	&mercury_data_calendar__enum_functor_desc_month_0_4,
	&mercury_data_calendar__enum_functor_desc_month_0_10,
	&mercury_data_calendar__enum_functor_desc_month_0_9,
	&mercury_data_calendar__enum_functor_desc_month_0_8
};

const MR_Integer mercury_data_calendar__functor_number_map_month_0[] = {
	4,
	3,
	7,
	0,
	8,
	6,
	5,
	1,
	11,
	10,
	9,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_month_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__month_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__month_0_0)),
	"calendar",
	"month",
	{ (void *)mercury_data_calendar__enum_name_ordered_month_0 },
	{ (void *)mercury_data_calendar__enum_value_ordered_month_0 },
	12,
	4,
	mercury_data_calendar__functor_number_map_month_0
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_months_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__months_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__months_0_0)),
	"calendar",
	"months",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_order_0_0 = {
	"ascending",
	0
};

static const MR_EnumFunctorDesc mercury_data_calendar__enum_functor_desc_order_0_1 = {
	"descending",
	1
};

const MR_EnumFunctorDescPtr mercury_data_calendar__enum_value_ordered_order_0[] = {
	&mercury_data_calendar__enum_functor_desc_order_0_0,
	&mercury_data_calendar__enum_functor_desc_order_0_1
};

const MR_EnumFunctorDescPtr mercury_data_calendar__enum_name_ordered_order_0[] = {
	&mercury_data_calendar__enum_functor_desc_order_0_0,
	&mercury_data_calendar__enum_functor_desc_order_0_1
};

const MR_Integer mercury_data_calendar__functor_number_map_order_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_order_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__order_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__order_0_0)),
	"calendar",
	"order",
	{ (void *)mercury_data_calendar__enum_name_ordered_order_0 },
	{ (void *)mercury_data_calendar__enum_value_ordered_order_0 },
	2,
	4,
	mercury_data_calendar__functor_number_map_order_0
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_second_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__second_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__second_0_0)),
	"calendar",
	"second",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_seconds_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__seconds_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__seconds_0_0)),
	"calendar",
	"seconds",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_year_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__year_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__year_0_0)),
	"calendar",
	"year",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_calendar__type_ctor_info_years_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calendar__years_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calendar__years_0_0)),
	"calendar",
	"years",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(calendar_module0)
	MR_init_entry1(fn__calendar__year_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__year_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'year'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__year_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(calendar_module1)
	MR_init_entry1(fn__calendar__det_month_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__det_month_1_0);
	MR_init_label3(fn__calendar__det_month_1_0,15,4,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_month'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__det_month_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 1) <= 11))) {
		MR_GOTO_LAB(fn__calendar__det_month_1_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, ((MR_Integer) MR_tempr3 - (MR_Integer) 1));
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(fn__calendar__det_month_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__calendar__det_month_1_0_i4);
MR_def_label(fn__calendar__det_month_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("det_month: invalid month: ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__calendar__det_month_1_0_i14);
MR_def_label(fn__calendar__det_month_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module2)
	MR_init_entry1(fn__calendar__month_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__month_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'month'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__month_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__calendar__det_month_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module3)
	MR_init_entry1(fn__calendar__day_of_month_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__day_of_month_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'day_of_month'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__day_of_month_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__div_2_0);

MR_BEGIN_MODULE(calendar_module4)
	MR_init_entry1(fn__calendar__julian_day_number_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__julian_day_number_1_0);
	MR_init_label5(fn__calendar__julian_day_number_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'julian_day_number'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__julian_day_number_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = ((MR_Integer) 14 - (MR_Integer) MR_sv(2));
	MR_r2 = (MR_Integer) 12;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__julian_day_number_1_0_i2);
MR_def_label(fn__calendar__julian_day_number_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (((MR_Integer) MR_sv(1) + (MR_Integer) 4800) - (MR_Integer) MR_r1);
	MR_r1 = (((MR_Integer) 153 * (((MR_Integer) MR_sv(2) + ((MR_Integer) 12 * (MR_Integer) MR_r1)) - (MR_Integer) 3)) + (MR_Integer) 2);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__julian_day_number_1_0_i3);
MR_def_label(fn__calendar__julian_day_number_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(2) = (((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1) + ((MR_Integer) 365 * (MR_Integer) MR_tempr1));
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__julian_day_number_1_0_i4);
MR_def_label(fn__calendar__julian_day_number_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 100;
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__julian_day_number_1_0_i5);
MR_def_label(fn__calendar__julian_day_number_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 400;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__julian_day_number_1_0_i6);
MR_def_label(fn__calendar__julian_day_number_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1) - (MR_Integer) 32045);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module5)
	MR_init_entry1(fn__calendar__det_day_of_week_from_mod_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__det_day_of_week_from_mod_1_0);
	MR_init_label3(fn__calendar__det_day_of_week_from_mod_1_0,15,4,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_day_of_week_from_mod'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__det_day_of_week_from_mod_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) MR_r1 <= 6))) {
		MR_GOTO_LAB(fn__calendar__det_day_of_week_from_mod_1_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(fn__calendar__det_day_of_week_from_mod_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__calendar__det_day_of_week_from_mod_1_0_i4);
MR_def_label(fn__calendar__det_day_of_week_from_mod_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("det_day_of_week_from_mod: invalid mod: ", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__calendar__det_day_of_week_from_mod_1_0_i14);
MR_def_label(fn__calendar__det_day_of_week_from_mod_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module6)
	MR_init_entry1(fn__calendar__day_of_week_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__day_of_week_1_0);
	MR_init_label2(fn__calendar__day_of_week_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'day_of_week'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__day_of_week_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__calendar__julian_day_number_1_0,
		fn__calendar__day_of_week_1_0_i2);
MR_def_label(fn__calendar__day_of_week_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Integer) 7;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__day_of_week_1_0_i3);
MR_def_label(fn__calendar__day_of_week_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(2)));
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__calendar__det_day_of_week_from_mod_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module7)
	MR_init_entry1(fn__calendar__hour_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__hour_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hour'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__hour_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module8)
	MR_init_entry1(fn__calendar__minute_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__minute_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'minute'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__minute_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module9)
	MR_init_entry1(fn__calendar__second_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__second_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'second'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__second_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module10)
	MR_init_entry1(fn__calendar__microsecond_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__microsecond_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'microsecond'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__microsecond_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(string__value_to_revstrings_5_1);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(calendar_module11)
	MR_init_entry1(fn__calendar__max_day_in_month_for_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__max_day_in_month_for_2_0);
	MR_init_label10(fn__calendar__max_day_in_month_for_2_0,2,3,7,8,13,16,18,11,10,21)
	MR_init_label5(fn__calendar__max_day_in_month_for_2_0,5,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_day_in_month_for'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calendar__max_day_in_month_for_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_sv(4) = (MR_Integer) 12;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__max_day_in_month_for_2_0_i2);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (((MR_Integer) MR_sv(3) - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(4))) + (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = (MR_Integer) 12;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__max_day_in_month_for_2_0_i3);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_sv(2) - (MR_Integer) 1) <= 11))) {
		MR_GOTO_LAB(fn__calendar__max_day_in_month_for_2_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) ((MR_Integer) MR_sv(2) - (MR_Integer) 1),
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i7) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i8) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i7) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i21) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i7) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i21) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i7) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i7) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i21) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i7) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i21) MR_AND
		MR_LABEL_AP(fn__calendar__max_day_in_month_for_2_0_i7));
MR_def_label(fn__calendar__max_day_in_month_for_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_decr_sp_and_return(5);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = (MR_Integer) 400;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__max_day_in_month_for_2_0_i13);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_tempr1 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3)));
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__max_day_in_month_for_2_0_i11);
	}
	MR_sv(3) = (MR_Integer) 100;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__max_day_in_month_for_2_0_i16);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = ((MR_Integer) MR_tempr2 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3)));
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__calendar__max_day_in_month_for_2_0_i10);
	}
	MR_sv(3) = (MR_Integer) 4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__max_day_in_month_for_2_0_i18);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3)));
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__calendar__max_day_in_month_for_2_0_i10);
	}
	}
MR_def_label(fn__calendar__max_day_in_month_for_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_decr_sp_and_return(5);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_decr_sp_and_return(5);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_decr_sp_and_return(5);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(string__value_to_revstrings_5_1,
		fn__calendar__max_day_in_month_for_2_0_i22);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__calendar__max_day_in_month_for_2_0_i23);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__calendar__max_day_in_month_for_2_0_i24);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("max_day_in_month_for: unexpected value for M: ", 46);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__calendar__max_day_in_month_for_2_0_i25);
MR_def_label(fn__calendar__max_day_in_month_for_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module12)
	MR_init_entry1(calendar__init_date_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__init_date_8_0);
	MR_init_label10(calendar__init_date_8_0,3,5,7,9,11,13,15,17,19,21)
	MR_init_label4(calendar__init_date_8_0,23,25,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_date'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__init_date_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_LT(MR_r3,1)) {
		MR_GOTO_LAB(calendar__init_date_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, (MR_Integer) MR_tempr2);
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		calendar__init_date_8_0_i3);
MR_def_label(calendar__init_date_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(calendar__init_date_8_0_i1);
	}
	if (MR_INT_GE(MR_sv(4),24)) {
		MR_GOTO_LAB(calendar__init_date_8_0_i1);
	}
	if (MR_INT_GE(MR_sv(5),60)) {
		MR_GOTO_LAB(calendar__init_date_8_0_i1);
	}
	if (MR_INT_GE(MR_sv(6),62)) {
		MR_GOTO_LAB(calendar__init_date_8_0_i1);
	}
	if (MR_INT_GE(MR_sv(7),1000000)) {
		MR_GOTO_LAB(calendar__init_date_8_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(2),
		MR_LABEL_AP(calendar__init_date_8_0_i13) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i11) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i19) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i5) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i21) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i17) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i15) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i7) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i27) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i25) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i23) MR_AND
		MR_LABEL_AP(calendar__init_date_8_0_i9));
MR_def_label(calendar__init_date_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 8;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 12;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 11;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 10;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 9;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__init_date_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(calendar_module13)
	MR_init_entry1(fn__calendar__det_init_date_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__det_init_date_7_0);
	MR_init_label10(fn__calendar__det_init_date_7_0,4,2,8,20,32,44,56,68,80,92)
	MR_init_label5(fn__calendar__det_init_date_7_0,104,116,128,140,152)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_init_date'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__det_init_date_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(calendar__init_date_8_0,
		fn__calendar__det_init_date_7_0_i4);
MR_def_label(fn__calendar__det_init_date_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__calendar__det_init_date_7_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(fn__calendar__det_init_date_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_tag_alloc_heap(MR_r7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r7, 0) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i56) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i44) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i92) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i8) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i104) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i80) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i68) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i20) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i140) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i128) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i116) MR_AND
		MR_LABEL_AP(fn__calendar__det_init_date_7_0_i32));
MR_def_label(fn__calendar__det_init_date_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_r7;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("calendar.det_init_date: invalid date: %i-%i-%i %i:%i:%i", 55);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__det_init_date_7_0_i152);
MR_def_label(fn__calendar__det_init_date_7_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module14)
	MR_init_entry1(calendar__unpack_date_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__unpack_date_8_0);
	MR_init_label1(calendar__unpack_date_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpack_date'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__unpack_date_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__calendar__det_month_1_0,
		calendar__unpack_date_8_0_i2);
MR_def_label(calendar__unpack_date_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module15)
	MR_init_entry1(calendar__read_int_and_num_chars_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_int_and_num_chars_2_6_0);
	MR_init_label1(calendar__read_int_and_num_chars_2_6_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_int_and_num_chars_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_int_and_num_chars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(calendar__read_int_and_num_chars_2_6_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr8, 0);
	if (!(((MR_Unsigned) ((MR_Integer) MR_tempr1 - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(calendar__read_int_and_num_chars_2_6_0_i19);
	}
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_3, ((MR_Integer) MR_tempr1 - (MR_Integer) 48));
	MR_tempr3 = MR_tempr8;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_tempr4 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr5 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_tempr6 = MR_tempr1;
	MR_tempr1 = MR_tempr5;
	MR_tempr7 = MR_tempr3;
	MR_r1 = (((MR_Integer) MR_r2 * (MR_Integer) 10) + (MR_Integer) MR_r1);
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_np_localtailcall(calendar__read_int_and_num_chars_2_6_0);
	}
MR_def_label(calendar__read_int_and_num_chars_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module16)
	MR_init_entry1(calendar__read_int_and_num_chars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_int_and_num_chars_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_int_and_num_chars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_int_and_num_chars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(calendar__read_int_and_num_chars_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__pow_3_0);

MR_BEGIN_MODULE(calendar_module17)
	MR_init_entry1(calendar__read_microseconds_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_microseconds_3_0);
	MR_init_label4(calendar__read_microseconds_3_0,5,6,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_microseconds'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_microseconds_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(calendar__read_microseconds_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 46 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__read_microseconds_3_0_i3);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(1, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_2_6_0,
		calendar__read_microseconds_3_0_i5);
MR_def_label(calendar__read_microseconds_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(calendar__read_microseconds_3_0_i2);
	}
	if (MR_INT_GE(MR_r2,7)) {
		MR_GOTO_LAB(calendar__read_microseconds_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 10;
	MR_r2 = ((MR_Integer) 6 - (MR_Integer) MR_r2);
	MR_np_call_localret_ent(int__pow_3_0,
		calendar__read_microseconds_3_0_i6);
MR_def_label(calendar__read_microseconds_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(1));
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(calendar__read_microseconds_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(calendar__read_microseconds_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);

MR_BEGIN_MODULE(calendar_module18)
	MR_init_entry1(calendar__date_from_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__date_from_string_2_0);
	MR_init_label10(calendar__date_from_string_2_0,2,5,3,6,7,9,11,12,14,16)
	MR_init_label3(calendar__date_from_string_2_0,18,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'date_from_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__date_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		calendar__date_from_string_2_0_i2);
MR_def_label(calendar__date_from_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 45 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_2_6_0,
		calendar__date_from_string_2_0_i5);
MR_def_label(calendar__date_from_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_r4);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(calendar__date_from_string_2_0_i7);
MR_def_label(calendar__date_from_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_2_6_0,
		calendar__date_from_string_2_0_i6);
MR_def_label(calendar__date_from_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
MR_def_label(calendar__date_from_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,4)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 45 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_4_0,
		calendar__date_from_string_2_0_i9);
MR_def_label(calendar__date_from_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_INT_LT(MR_r1,1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_INT_GT(MR_r1,12)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 45 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_4_0,
		calendar__date_from_string_2_0_i11);
MR_def_label(calendar__date_from_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_INT_LT(MR_r1,1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		calendar__date_from_string_2_0_i12);
MR_def_label(calendar__date_from_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 32 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_4_0,
		calendar__date_from_string_2_0_i14);
MR_def_label(calendar__date_from_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_INT_GT(MR_r1,23)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 58 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_4_0,
		calendar__date_from_string_2_0_i16);
MR_def_label(calendar__date_from_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_INT_GT(MR_r1,59)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 58 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_4_0,
		calendar__date_from_string_2_0_i18);
MR_def_label(calendar__date_from_string_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	if (MR_INT_GE(MR_r1,62)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(calendar__read_microseconds_3_0,
		calendar__date_from_string_2_0_i19);
MR_def_label(calendar__date_from_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__date_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(calendar__date_from_string_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module19)
	MR_init_entry1(fn__calendar__det_date_from_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__det_date_from_string_1_0);
	MR_init_label3(fn__calendar__det_date_from_string_1_0,4,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_date_from_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__det_date_from_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(calendar__date_from_string_2_0,
		fn__calendar__det_date_from_string_1_0_i4);
MR_def_label(fn__calendar__det_date_from_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__calendar__det_date_from_string_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__calendar__det_date_from_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("det_date_from_string: invalid date: ", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__calendar__det_date_from_string_1_0_i6);
MR_def_label(fn__calendar__det_date_from_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__split_4_0);

MR_BEGIN_MODULE(calendar_module20)
	MR_init_entry1(fn__calendar__date_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__date_to_string_1_0);
	MR_init_label10(fn__calendar__date_to_string_1_0,2,3,4,8,9,10,5,17,32,47)
	MR_init_label9(fn__calendar__date_to_string_1_0,62,77,92,107,122,137,152,167,182)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'date_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__date_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__calendar__det_month_1_0,
		fn__calendar__date_to_string_1_0_i2);
MR_def_label(fn__calendar__date_to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__calendar__date_to_string_1_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_sv(7) = ((MR_Integer) 0 - (MR_Integer) MR_r2);
	MR_GOTO_LAB(fn__calendar__date_to_string_1_0_i4);
MR_def_label(fn__calendar__date_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
MR_def_label(fn__calendar__date_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(6),0)) {
		MR_GOTO_LAB(fn__calendar__date_to_string_1_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".%06d", 5);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__date_to_string_1_0_i8);
MR_def_label(fn__calendar__date_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__calendar__date_to_string_1_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 3174 "calendar.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__calendar__date_to_string_1_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 3188 "calendar.c"
	MR_tempr2 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__calendar__date_to_string_1_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 3202 "calendar.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Integer) 48;
	MR_r2 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0,
		fn__calendar__date_to_string_1_0_i9);
MR_def_label(fn__calendar__date_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = ((MR_Integer) MR_sv(9) - (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(string__split_4_0,
		fn__calendar__date_to_string_1_0_i10);
MR_def_label(fn__calendar__date_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i77) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i62) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i122) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i17) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i137) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i107) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i92) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i32) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i182) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i167) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i152) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i47));
	}
MR_def_label(fn__calendar__date_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i77) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i62) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i122) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i17) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i137) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i107) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i92) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i32) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i182) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i167) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i152) MR_AND
		MR_LABEL_AP(fn__calendar__date_to_string_1_0_i47));
	}
MR_def_label(fn__calendar__date_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__calendar__date_to_string_1_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_r2 = MR_tempr7;
	MR_r1 = (MR_Word) MR_string_const("%s%04d-%02d-%02d %02d:%02d:%02d%s", 33);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module21)
	MR_init_entry1(fn__calendar__tm_to_date_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__tm_to_date_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tm_to_date'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__tm_to_date_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 1900 + (MR_Integer) MR_tfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(time__time_3_0);
MR_decl_entry(fn__time__int_to_maybe_dst_1_0);

MR_BEGIN_MODULE(calendar_module22)
	MR_init_entry1(calendar__current_local_time_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__current_local_time_3_0);
	MR_init_label2(calendar__current_local_time_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'current_local_time'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__current_local_time_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(time__time_3_0,
		calendar__current_local_time_3_0_i2);
MR_def_label(calendar__current_local_time_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	time_t	Time;
	MR_Integer	Yr;
	MR_Integer	Mnt;
	MR_Integer	MD;
	MR_Integer	Hrs;
	MR_Integer	Min;
	MR_Integer	Sec;
	MR_Integer	YD;
	MR_Integer	WD;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__calendar__current_local_time_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Time);
	MR_OBTAIN_GLOBAL_LOCK("c_localtime");
{
#line 90 "time.opt"

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
;}
#line 3906 "calendar.c"
	MR_RELEASE_GLOBAL_LOCK("c_localtime");
	MR_tempr1 = Yr;
	MR_tempr2 = Mnt;
	MR_tempr3 = MD;
	MR_tempr4 = Hrs;
	MR_tempr5 = Min;
	MR_tempr6 = Sec;
	MR_r1 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr5;
	MR_sv(6) = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__time__int_to_maybe_dst_1_0,
		calendar__current_local_time_3_0_i3);
MR_def_label(calendar__current_local_time_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 1900 + (MR_Integer) MR_sv(1));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module23)
	MR_init_entry1(calendar__current_utc_time_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__current_utc_time_3_0);
	MR_init_label2(calendar__current_utc_time_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'current_utc_time'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__current_utc_time_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(time__time_3_0,
		calendar__current_utc_time_3_0_i2);
MR_def_label(calendar__current_utc_time_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	time_t	Time;
	MR_Integer	Yr;
	MR_Integer	Mnt;
	MR_Integer	MD;
	MR_Integer	Hrs;
	MR_Integer	Min;
	MR_Integer	Sec;
	MR_Integer	YD;
	MR_Integer	WD;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__calendar__current_utc_time_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Time);
	MR_OBTAIN_GLOBAL_LOCK("c_gmtime");
{
#line 110 "time.opt"
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
};}
#line 4006 "calendar.c"
	MR_RELEASE_GLOBAL_LOCK("c_gmtime");
	MR_tempr1 = Yr;
	MR_tempr2 = Mnt;
	MR_tempr3 = MD;
	MR_tempr4 = Hrs;
	MR_tempr5 = Min;
	MR_tempr6 = Sec;
	MR_r1 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr5;
	MR_sv(6) = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__time__int_to_maybe_dst_1_0,
		calendar__current_utc_time_3_0_i3);
MR_def_label(calendar__current_utc_time_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 1900 + (MR_Integer) MR_sv(1));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module24)
	MR_init_entry1(fn__calendar__unix_epoch_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__unix_epoch_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unix_epoch'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__unix_epoch_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module25)
	MR_init_entry1(fn__calendar__years_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__years_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'years'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__years_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r1, 0) / (MR_Integer) 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module26)
	MR_init_entry1(fn__calendar__months_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__months_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'months'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__months_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r1, 0) % (MR_Integer) 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module27)
	MR_init_entry1(fn__calendar__days_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__days_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'days'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__days_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module28)
	MR_init_entry1(fn__calendar__hours_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__hours_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hours'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__hours_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r1, 2) / (MR_Integer) 3600);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module29)
	MR_init_entry1(fn__calendar__minutes_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__minutes_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'minutes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__minutes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 2) % (MR_Integer) 3600) / (MR_Integer) 60);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module30)
	MR_init_entry1(fn__calendar__seconds_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__seconds_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'seconds'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__seconds_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r1, 2) % (MR_Integer) 60);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module31)
	MR_init_entry1(fn__calendar__microseconds_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__microseconds_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'microseconds'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__microseconds_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module32)
	MR_init_entry1(fn__calendar__microseconds_per_second_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__microseconds_per_second_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'microseconds_per_second'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calendar__microseconds_per_second_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1000000;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module33)
	MR_init_entry1(fn__calendar__init_duration_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__init_duration_7_0);
	MR_init_label3(fn__calendar__init_duration_7_0,4,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_duration'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__init_duration_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i4);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i4);
	}
	if (MR_INT_LT(MR_r3,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i4);
	}
	if (MR_INT_LT(MR_r4,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i4);
	}
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i4);
	}
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i4);
	}
	if (MR_INT_GE(MR_r7,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i3);
	}
MR_def_label(fn__calendar__init_duration_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i2);
	}
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i2);
	}
	if (MR_INT_GT(MR_r3,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i2);
	}
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i2);
	}
	if (MR_INT_GT(MR_r5,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i2);
	}
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i2);
	}
	if (MR_INT_GT(MR_r7,0)) {
		MR_GOTO_LAB(fn__calendar__init_duration_7_0_i2);
	}
MR_def_label(fn__calendar__init_duration_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (((MR_Integer) MR_r1 * (MR_Integer) 12) + (MR_Integer) MR_r2);
	MR_tempr3 = MR_r7;
	MR_tempr2 = ((((MR_Integer) MR_r6 + ((MR_Integer) MR_tempr3 / (MR_Integer) 1000000)) + ((MR_Integer) MR_r5 * (MR_Integer) 60)) + ((MR_Integer) MR_r4 * (MR_Integer) 3600));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_r3 + ((MR_Integer) MR_tempr2 / (MR_Integer) 86400));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tempr2 % (MR_Integer) 86400);
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tempr3 % (MR_Integer) 1000000);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__calendar__init_duration_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("init_duration: some components negative and some positive", 57);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module34)
	MR_init_entry1(calendar__unpack_duration_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__unpack_duration_8_0);
	MR_init_label5(calendar__unpack_duration_8_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpack_duration'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__unpack_duration_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__calendar__years_1_0,
		calendar__unpack_duration_8_0_i2);
MR_def_label(calendar__unpack_duration_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__calendar__months_1_0,
		calendar__unpack_duration_8_0_i3);
MR_def_label(calendar__unpack_duration_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__calendar__hours_1_0,
		calendar__unpack_duration_8_0_i4);
MR_def_label(calendar__unpack_duration_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__calendar__minutes_1_0,
		calendar__unpack_duration_8_0_i5);
MR_def_label(calendar__unpack_duration_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__calendar__seconds_1_0,
		calendar__unpack_duration_8_0_i6);
MR_def_label(calendar__unpack_duration_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_sv(6), 3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module35)
	MR_init_entry1(fn__calendar__zero_duration_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__zero_duration_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_duration'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__zero_duration_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module36)
	MR_init_entry1(fn__calendar__negate_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__negate_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negate'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__negate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module37)
	MR_init_entry1(calendar__read_int_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_int_2_4_0);
	MR_init_label1(calendar__read_int_2_4_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_int_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_int_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__read_int_2_4_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 0);
	if (!(((MR_Unsigned) ((MR_Integer) MR_tempr1 - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(calendar__read_int_2_4_0_i19);
	}
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_4, ((MR_Integer) MR_tempr1 - (MR_Integer) 48));
	MR_tempr3 = MR_tempr7;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_tempr4 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr5 = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_tempr6 = MR_tempr3;
	MR_r1 = (((MR_Integer) MR_tempr1 * (MR_Integer) 10) + (MR_Integer) MR_r1);
	MR_np_localtailcall(calendar__read_int_2_4_0);
	}
MR_def_label(calendar__read_int_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module38)
	MR_init_entry1(calendar__read_months_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_months_3_0);
	MR_init_label2(calendar__read_months_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_months'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_months_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(calendar__read_int_2_4_0,
		calendar__read_months_3_0_i3);
MR_def_label(calendar__read_months_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__read_months_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (((MR_Integer) 77 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__read_months_3_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(calendar__read_months_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module39)
	MR_init_entry1(calendar__read_days_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_days_3_0);
	MR_init_label2(calendar__read_days_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_days'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_days_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(calendar__read_int_2_4_0,
		calendar__read_days_3_0_i3);
MR_def_label(calendar__read_days_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__read_days_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (((MR_Integer) 68 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__read_days_3_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(calendar__read_days_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module40)
	MR_init_entry1(calendar__read_hours_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_hours_3_0);
	MR_init_label2(calendar__read_hours_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_hours'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_hours_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(calendar__read_int_2_4_0,
		calendar__read_hours_3_0_i3);
MR_def_label(calendar__read_hours_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__read_hours_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (((MR_Integer) 72 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__read_hours_3_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(calendar__read_hours_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module41)
	MR_init_entry1(calendar__read_minutes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_minutes_3_0);
	MR_init_label2(calendar__read_minutes_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_minutes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_minutes_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(calendar__read_int_2_4_0,
		calendar__read_minutes_3_0_i3);
MR_def_label(calendar__read_minutes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__read_minutes_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (((MR_Integer) 77 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__read_minutes_3_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(calendar__read_minutes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module42)
	MR_init_entry1(calendar__read_seconds_and_microseconds_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__read_seconds_and_microseconds_4_0);
	MR_init_label7(calendar__read_seconds_and_microseconds_4_0,3,7,8,4,5,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_seconds_and_microseconds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__read_seconds_and_microseconds_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(calendar__read_int_2_4_0,
		calendar__read_seconds_and_microseconds_4_0_i3);
MR_def_label(calendar__read_seconds_and_microseconds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__read_seconds_and_microseconds_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 46 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__read_seconds_and_microseconds_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(1, MR_sv(2), 1);
	}
	MR_np_call_localret_ent(calendar__read_int_and_num_chars_2_6_0,
		calendar__read_seconds_and_microseconds_4_0_i7);
MR_def_label(calendar__read_seconds_and_microseconds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(calendar__read_seconds_and_microseconds_4_0_i4);
	}
	if (MR_INT_GE(MR_r2,7)) {
		MR_GOTO_LAB(calendar__read_seconds_and_microseconds_4_0_i4);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_r2 = ((MR_Integer) 6 - (MR_Integer) MR_r2);
	MR_np_call_localret_ent(int__pow_3_0,
		calendar__read_seconds_and_microseconds_4_0_i8);
MR_def_label(calendar__read_seconds_and_microseconds_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_r3 * (MR_Integer) MR_sv(4));
	MR_GOTO_LAB(calendar__read_seconds_and_microseconds_4_0_i9);
MR_def_label(calendar__read_seconds_and_microseconds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(calendar__read_seconds_and_microseconds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 0;
MR_def_label(calendar__read_seconds_and_microseconds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(calendar__read_seconds_and_microseconds_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 83 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__read_seconds_and_microseconds_4_0_i2);
	}
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(calendar__read_seconds_and_microseconds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module43)
	MR_init_entry1(calendar__duration_from_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__duration_from_string_2_0);
	MR_init_label10(calendar__duration_from_string_2_0,2,3,6,9,8,12,13,17,18,19)
	MR_init_label3(calendar__duration_from_string_2_0,14,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'duration_from_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__duration_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		calendar__duration_from_string_2_0_i2);
MR_def_label(calendar__duration_from_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i3);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,45)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i3);
	}
	MR_sv(1) = (MR_Integer) -1;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(calendar__duration_from_string_2_0_i6);
MR_def_label(calendar__duration_from_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 1;
MR_def_label(calendar__duration_from_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 80 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(calendar__read_int_2_4_0,
		calendar__duration_from_string_2_0_i9);
MR_def_label(calendar__duration_from_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 89 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(calendar__read_months_3_0,
		calendar__duration_from_string_2_0_i12);
MR_def_label(calendar__duration_from_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(calendar__read_months_3_0,
		calendar__duration_from_string_2_0_i12);
MR_def_label(calendar__duration_from_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(calendar__read_days_3_0,
		calendar__duration_from_string_2_0_i13);
MR_def_label(calendar__duration_from_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) 84 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i14);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i1);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(calendar__read_hours_3_0,
		calendar__duration_from_string_2_0_i17);
MR_def_label(calendar__duration_from_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(calendar__read_minutes_3_0,
		calendar__duration_from_string_2_0_i18);
MR_def_label(calendar__duration_from_string_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(calendar__read_seconds_and_microseconds_4_0,
		calendar__duration_from_string_2_0_i19);
MR_def_label(calendar__duration_from_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_tempr3 = MR_sv(1);
	MR_r1 = ((MR_Integer) MR_tempr3 * (MR_Integer) MR_sv(2));
	MR_tempr2 = MR_r2;
	MR_r2 = ((MR_Integer) MR_tempr3 * (MR_Integer) MR_sv(3));
	MR_r3 = ((MR_Integer) MR_tempr3 * (MR_Integer) MR_sv(4));
	MR_r4 = ((MR_Integer) MR_tempr3 * (MR_Integer) MR_sv(5));
	MR_r5 = ((MR_Integer) MR_tempr3 * (MR_Integer) MR_sv(6));
	MR_r6 = ((MR_Integer) MR_tempr3 * (MR_Integer) MR_tempr1);
	MR_r7 = ((MR_Integer) MR_tempr3 * (MR_Integer) MR_tempr2);
	}
	MR_np_call_localret_ent(fn__calendar__init_duration_7_0,
		calendar__duration_from_string_2_0_i23);
MR_def_label(calendar__duration_from_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(calendar__duration_from_string_2_0_i1);
	}
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(2));
	MR_r2 = ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(3));
	MR_r3 = ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(4));
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__calendar__init_duration_7_0,
		calendar__duration_from_string_2_0_i23);
MR_def_label(calendar__duration_from_string_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(calendar__duration_from_string_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module44)
	MR_init_entry1(fn__calendar__det_duration_from_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__det_duration_from_string_1_0);
	MR_init_label3(fn__calendar__det_duration_from_string_1_0,4,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_duration_from_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__det_duration_from_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(calendar__duration_from_string_2_0,
		fn__calendar__det_duration_from_string_1_0_i4);
MR_def_label(fn__calendar__det_duration_from_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__calendar__det_duration_from_string_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__calendar__det_duration_from_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("det_duration_from_string: invalid duration: ", 44);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__calendar__det_duration_from_string_1_0_i6);
MR_def_label(fn__calendar__det_duration_from_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module45)
	MR_init_entry1(fn__calendar__string_if_nonzero_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__string_if_nonzero_2_0);
	MR_init_label2(fn__calendar__string_if_nonzero_2_0,14,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_if_nonzero'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calendar__string_if_nonzero_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__calendar__string_if_nonzero_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__calendar__string_if_nonzero_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__calendar__string_if_nonzero_2_0_i4);
MR_def_label(fn__calendar__string_if_nonzero_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module46)
	MR_init_entry1(fn__calendar__seconds_duration_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__seconds_duration_string_2_0);
	MR_init_label6(fn__calendar__seconds_duration_string_2_0,38,5,9,10,11,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'seconds_duration_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calendar__seconds_duration_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__calendar__seconds_duration_string_2_0_i38);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__seconds_duration_string_2_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__calendar__seconds_duration_string_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__calendar__seconds_duration_string_2_0_i5);
MR_def_label(fn__calendar__seconds_duration_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__calendar__seconds_duration_string_2_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".%06d", 5);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__calendar__seconds_duration_string_2_0_i9);
MR_def_label(fn__calendar__seconds_duration_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__calendar__seconds_duration_string_2_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 5109 "calendar.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__calendar__seconds_duration_string_2_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 5123 "calendar.c"
	MR_tempr2 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__calendar__seconds_duration_string_2_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 5137 "calendar.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 48;
	MR_r2 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0,
		fn__calendar__seconds_duration_string_2_0_i10);
MR_def_label(fn__calendar__seconds_duration_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(string__split_4_0,
		fn__calendar__seconds_duration_string_2_0_i11);
MR_def_label(fn__calendar__seconds_duration_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
MR_def_label(fn__calendar__seconds_duration_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(calendar_module47)
	MR_init_entry1(fn__calendar__duration_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__duration_to_string_1_0);
	MR_init_label10(fn__calendar__duration_to_string_1_0,99,7,8,11,12,15,16,18,19,20)
	MR_init_label10(fn__calendar__duration_to_string_1_0,21,22,24,25,26,27,28,33,34,35)
	MR_init_label4(fn__calendar__duration_to_string_1_0,36,37,38,98)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'duration_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__duration_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i99);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i99);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i99);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i99);
	}
	MR_r1 = (MR_Word) MR_string_const("P0D", 3);
	MR_proceed();
	}
MR_def_label(fn__calendar__duration_to_string_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i7);
	}
	if (MR_INT_LT(MR_r4,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i7);
	}
	if (MR_INT_LT(MR_r3,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i7);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i7);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(2) = (MR_Integer) 1;
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i11);
MR_def_label(fn__calendar__duration_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r5,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i8);
	}
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i8);
	}
	if (MR_INT_GT(MR_r3,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i8);
	}
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i8);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(2) = (MR_Integer) -1;
	MR_sv(3) = (MR_Word) MR_string_const("-", 1);
	MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i11);
MR_def_label(fn__calendar__duration_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("duration_to_string: duration components have mixed signs", 56);
	MR_np_call_localret_ent(require__error_1_0,
		fn__calendar__duration_to_string_1_0_i11);
MR_def_label(fn__calendar__duration_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i12);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i12);
	}
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i33);
MR_def_label(fn__calendar__duration_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__calendar__hours_1_0,
		fn__calendar__duration_to_string_1_0_i15);
MR_def_label(fn__calendar__duration_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i20);
MR_def_label(fn__calendar__duration_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__calendar__duration_to_string_1_0_i18);
MR_def_label(fn__calendar__duration_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("H", 1);
	MR_np_call_localret_ent(string__append_3_2,
		fn__calendar__duration_to_string_1_0_i19);
MR_def_label(fn__calendar__duration_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(fn__calendar__duration_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__calendar__minutes_1_0,
		fn__calendar__duration_to_string_1_0_i21);
MR_def_label(fn__calendar__duration_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(fn__calendar__duration_to_string_1_0_i26);
MR_def_label(fn__calendar__duration_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__calendar__duration_to_string_1_0_i24);
MR_def_label(fn__calendar__duration_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("M", 1);
	MR_np_call_localret_ent(string__append_3_2,
		fn__calendar__duration_to_string_1_0_i25);
MR_def_label(fn__calendar__duration_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(fn__calendar__duration_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__calendar__seconds_1_0,
		fn__calendar__duration_to_string_1_0_i27);
MR_def_label(fn__calendar__duration_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_tempr1 * (MR_Integer) MR_r1);
	MR_r2 = ((MR_Integer) MR_tempr1 * (MR_Integer) MR_tfield(0, MR_sv(1), 3));
	}
	MR_np_call_localret_ent(fn__calendar__seconds_duration_string_2_0,
		fn__calendar__duration_to_string_1_0_i28);
MR_def_label(fn__calendar__duration_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("T", 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
MR_def_label(fn__calendar__duration_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__calendar__years_1_0,
		fn__calendar__duration_to_string_1_0_i34);
MR_def_label(fn__calendar__duration_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_r1);
	MR_r2 = (MR_Word) MR_string_const("Y", 1);
	MR_np_call_localret_ent(fn__calendar__string_if_nonzero_2_0,
		fn__calendar__duration_to_string_1_0_i35);
MR_def_label(fn__calendar__duration_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__calendar__months_1_0,
		fn__calendar__duration_to_string_1_0_i36);
MR_def_label(fn__calendar__duration_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_r1);
	MR_r2 = (MR_Word) MR_string_const("M", 1);
	MR_np_call_localret_ent(fn__calendar__string_if_nonzero_2_0,
		fn__calendar__duration_to_string_1_0_i37);
MR_def_label(fn__calendar__duration_to_string_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_tfield(0, MR_tempr1, 1));
	MR_r2 = (MR_Word) MR_string_const("D", 1);
	}
	MR_np_call_localret_ent(fn__calendar__string_if_nonzero_2_0,
		fn__calendar__duration_to_string_1_0_i38);
MR_def_label(fn__calendar__duration_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("P", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__calendar__duration_to_string_1_0_i98);
MR_def_label(fn__calendar__duration_to_string_1_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module48)
	MR_init_entry1(fn__calendar__fquotient_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__fquotient_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fquotient'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calendar__fquotient_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_r2);
	MR_r2 = ((MR_Integer) MR_r3 - (MR_Integer) MR_r2);
	MR_np_tailcall_ent(fn__int__div_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module49)
	MR_init_entry1(fn__calendar__modulo_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__modulo_2_0);
	MR_init_label1(fn__calendar__modulo_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modulo'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calendar__modulo_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__modulo_2_0_i2);
MR_def_label(fn__calendar__modulo_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(2)));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module50)
	MR_init_entry1(fn__calendar__modulo_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__modulo_3_0);
	MR_init_label1(fn__calendar__modulo_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modulo'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calendar__modulo_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = ((MR_Integer) MR_r1 - (MR_Integer) MR_tempr1);
	MR_sv(3) = ((MR_Integer) MR_r3 - (MR_Integer) MR_tempr1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__calendar__modulo_3_0_i2);
MR_def_label(fn__calendar__modulo_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_sv(2) - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3))) + (MR_Integer) MR_sv(1));
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__mod_2_0);

MR_BEGIN_MODULE(calendar_module51)
	MR_init_entry1(calendar__add_duration_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__add_duration_3_0);
	MR_init_label10(calendar__add_duration_3_0,2,4,6,7,9,10,11,13,14,16)
	MR_init_label6(calendar__add_duration_3_0,17,19,20,21,22,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_duration'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__add_duration_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) + (MR_Integer) MR_tfield(0, MR_tempr1, 0));
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(fn__calendar__modulo_3_0,
		calendar__add_duration_3_0_i2);
MR_def_label(calendar__add_duration_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(fn__calendar__fquotient_3_0,
		calendar__add_duration_3_0_i4);
MR_def_label(calendar__add_duration_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) + (MR_Integer) MR_r1);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr2, 6) + (MR_Integer) MR_tfield(0, MR_sv(1), 3));
	}
	MR_np_call_localret_ent(fn__calendar__microseconds_per_second_0_0,
		calendar__add_duration_3_0_i6);
MR_def_label(calendar__add_duration_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__calendar__modulo_2_0,
		calendar__add_duration_3_0_i7);
MR_def_label(calendar__add_duration_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__calendar__microseconds_per_second_0_0,
		calendar__add_duration_3_0_i9);
MR_def_label(calendar__add_duration_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		calendar__add_duration_3_0_i10);
MR_def_label(calendar__add_duration_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (((MR_Integer) MR_tfield(0, MR_sv(2), 5) + (MR_Integer) MR_tfield(0, MR_sv(1), 2)) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 60;
	MR_np_call_localret_ent(fn__calendar__modulo_2_0,
		calendar__add_duration_3_0_i11);
MR_def_label(calendar__add_duration_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 60;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		calendar__add_duration_3_0_i13);
MR_def_label(calendar__add_duration_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_sv(2), 4) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 60;
	MR_np_call_localret_ent(fn__int__mod_2_0,
		calendar__add_duration_3_0_i14);
MR_def_label(calendar__add_duration_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 60;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		calendar__add_duration_3_0_i16);
MR_def_label(calendar__add_duration_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_sv(2), 3) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 24;
	MR_np_call_localret_ent(fn__int__mod_2_0,
		calendar__add_duration_3_0_i17);
MR_def_label(calendar__add_duration_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 24;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		calendar__add_duration_3_0_i19);
MR_def_label(calendar__add_duration_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		calendar__add_duration_3_0_i20);
MR_def_label(calendar__add_duration_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(calendar__add_duration_3_0_i21);
	}
	MR_r1 = (((MR_Integer) MR_r1 + (MR_Integer) MR_tfield(0, MR_sv(1), 1)) + (MR_Integer) MR_sv(4));
	MR_GOTO_LAB(calendar__add_duration_3_0_i24);
MR_def_label(calendar__add_duration_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	if (MR_INT_GE(MR_r2,1)) {
		MR_GOTO_LAB(calendar__add_duration_3_0_i22);
	}
	MR_r1 = (((MR_Integer) 1 + (MR_Integer) MR_tfield(0, MR_sv(1), 1)) + (MR_Integer) MR_sv(4));
	MR_GOTO_LAB(calendar__add_duration_3_0_i24);
MR_def_label(calendar__add_duration_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_sv(2), 2) + (MR_Integer) MR_tfield(0, MR_sv(1), 1)) + (MR_Integer) MR_sv(4));
MR_def_label(calendar__add_duration_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module52)
	MR_init_entry1(fn__calendar__test_dates_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__test_dates_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test_dates'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__test_dates_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module53)
	MR_init_entry1(calendar__duration_leq_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__duration_leq_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'duration_leq'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__duration_leq_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_np_tailcall_ent(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module54)
	MR_init_entry1(calendar__subtract_ints_with_borrow_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__subtract_ints_with_borrow_5_0);
	MR_init_label1(calendar__subtract_ints_with_borrow_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subtract_ints_with_borrow'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__subtract_ints_with_borrow_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(calendar__subtract_ints_with_borrow_5_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) MR_r3);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(calendar__subtract_ints_with_borrow_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 + (MR_Integer) MR_r2) - (MR_Integer) MR_r3);
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__min_2_0);

MR_BEGIN_MODULE(calendar_module55)
	MR_init_entry1(calendar__greedy_subtract_descending_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__greedy_subtract_descending_4_0);
	MR_init_label10(calendar__greedy_subtract_descending_4_0,2,3,4,5,6,9,10,11,8,13)
	MR_init_label7(calendar__greedy_subtract_descending_4_0,14,15,16,17,18,19,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'greedy_subtract_descending'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(calendar__greedy_subtract_descending_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 6);
	}
	MR_np_call_localret_ent(fn__calendar__microseconds_per_second_0_0,
		calendar__greedy_subtract_descending_4_0_i2);
MR_def_label(calendar__greedy_subtract_descending_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		calendar__greedy_subtract_descending_4_0_i3);
MR_def_label(calendar__greedy_subtract_descending_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 60;
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(2), 5) - (MR_Integer) MR_r2);
	MR_r3 = MR_tfield(0, MR_sv(3), 5);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		calendar__greedy_subtract_descending_4_0_i4);
MR_def_label(calendar__greedy_subtract_descending_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 60;
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(2), 4) - (MR_Integer) MR_r2);
	MR_r3 = MR_tfield(0, MR_sv(3), 4);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		calendar__greedy_subtract_descending_4_0_i5);
MR_def_label(calendar__greedy_subtract_descending_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(2), 3) - (MR_Integer) MR_r2);
	MR_r3 = MR_tfield(0, MR_sv(3), 3);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		calendar__greedy_subtract_descending_4_0_i6);
MR_def_label(calendar__greedy_subtract_descending_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(calendar__greedy_subtract_descending_4_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		calendar__greedy_subtract_descending_4_0_i9);
MR_def_label(calendar__greedy_subtract_descending_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		calendar__greedy_subtract_descending_4_0_i10);
MR_def_label(calendar__greedy_subtract_descending_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_sv(2), 2) - (MR_Integer) MR_sv(8));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__min_2_0,
		calendar__greedy_subtract_descending_4_0_i11);
MR_def_label(calendar__greedy_subtract_descending_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(3), 2);
	}
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		calendar__greedy_subtract_descending_4_0_i17);
MR_def_label(calendar__greedy_subtract_descending_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(calendar__add_duration_3_0,
		calendar__greedy_subtract_descending_4_0_i13);
MR_def_label(calendar__greedy_subtract_descending_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		calendar__greedy_subtract_descending_4_0_i14);
MR_def_label(calendar__greedy_subtract_descending_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		calendar__greedy_subtract_descending_4_0_i15);
MR_def_label(calendar__greedy_subtract_descending_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = ((MR_Integer) MR_tfield(0, MR_sv(2), 2) - (MR_Integer) MR_sv(8));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__min_2_0,
		calendar__greedy_subtract_descending_4_0_i16);
MR_def_label(calendar__greedy_subtract_descending_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		calendar__greedy_subtract_descending_4_0_i17);
MR_def_label(calendar__greedy_subtract_descending_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(2), 1) - (MR_Integer) MR_r2);
	MR_r3 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		calendar__greedy_subtract_descending_4_0_i18);
MR_def_label(calendar__greedy_subtract_descending_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_sv(2), 0) - (MR_Integer) MR_r2);
	MR_tempr2 = MR_tfield(0, MR_sv(3), 0);
	if (((MR_Integer) MR_tempr1 < (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(calendar__greedy_subtract_descending_4_0_i19);
	}
	MR_r7 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__calendar__init_duration_7_0);
	}
MR_def_label(calendar__greedy_subtract_descending_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("greedy_subtract_descending: left over years", 43);
	}
	MR_np_call_localret_ent(require__error_1_0,
		calendar__greedy_subtract_descending_4_0_i21);
MR_def_label(calendar__greedy_subtract_descending_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__calendar__init_duration_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module56)
	MR_init_entry1(fn__calendar__duration_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__duration_2_0);
	MR_init_label4(fn__calendar__duration_2_0,2,5,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'duration'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__duration_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Compare___calendar__date_0_0,
		fn__calendar__duration_2_0_i2);
MR_def_label(fn__calendar__duration_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__calendar__duration_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(calendar__greedy_subtract_descending_4_0,
		fn__calendar__duration_2_0_i5);
MR_def_label(fn__calendar__duration_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 3));
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__calendar__duration_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__calendar__duration_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__calendar__duration_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(calendar__greedy_subtract_descending_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module57)
	MR_init_entry1(calendar__local_time_offset_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__calendar__local_time_offset_3_0);
	MR_init_label3(calendar__local_time_offset_3_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'local_time_offset'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__calendar__local_time_offset_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(time__time_3_0,
		calendar__local_time_offset_3_0_i2);
MR_def_label(calendar__local_time_offset_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	{
	time_t	Time;
	MR_Integer	Yr;
	MR_Integer	Mnt;
	MR_Integer	MD;
	MR_Integer	Hrs;
	MR_Integer	Min;
	MR_Integer	Sec;
	MR_Integer	YD;
	MR_Integer	WD;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__calendar__local_time_offset_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Time);
	MR_OBTAIN_GLOBAL_LOCK("c_localtime");
{
#line 90 "time.opt"

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
;}
#line 6199 "calendar.c"
	MR_RELEASE_GLOBAL_LOCK("c_localtime");
	MR_tempr1 = Yr;
	MR_tempr2 = Mnt;
	MR_tempr3 = MD;
	MR_tempr4 = Hrs;
	MR_tempr5 = Min;
	MR_tempr6 = Sec;
	MR_tempr7 = YD;
	MR_tempr8 = WD;
	MR_tempr9 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_tempr5;
	MR_sv(7) = MR_tempr6;
	MR_sv(8) = MR_tempr7;
	MR_sv(9) = MR_tempr8;
	MR_r1 = MR_tempr9;
	}
	MR_np_call_localret_ent(fn__time__int_to_maybe_dst_1_0,
		calendar__local_time_offset_3_0_i3);
MR_def_label(calendar__local_time_offset_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	{
	time_t	Time;
	MR_Integer	Yr;
	MR_Integer	Mnt;
	MR_Integer	MD;
	MR_Integer	Hrs;
	MR_Integer	Min;
	MR_Integer	Sec;
	MR_Integer	YD;
	MR_Integer	WD;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__calendar__local_time_offset_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_sv(1), Time);
	MR_OBTAIN_GLOBAL_LOCK("c_gmtime");
{
#line 110 "time.opt"
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
};}
#line 6275 "calendar.c"
	MR_RELEASE_GLOBAL_LOCK("c_gmtime");
	MR_tempr2 = Yr;
	MR_tempr3 = Mnt;
	MR_tempr4 = MD;
	MR_tempr5 = Hrs;
	MR_tempr6 = Min;
	MR_tempr7 = Sec;
	MR_r1 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr5;
	MR_sv(6) = MR_tempr6;
	MR_sv(7) = MR_tempr7;
	}
	MR_np_call_localret_ent(fn__time__int_to_maybe_dst_1_0,
		calendar__local_time_offset_3_0_i5);
MR_def_label(calendar__local_time_offset_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 1900 + (MR_Integer) MR_tfield(0, MR_tempr3, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_tempr3, 1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) 1900 + (MR_Integer) MR_sv(2));
	MR_tfield(0, MR_tempr2, 1) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 6) = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__calendar__duration_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module58)
	MR_init_entry1(fn__calendar__day_duration_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calendar__day_duration_2_0);
	MR_init_label10(fn__calendar__day_duration_2_0,2,5,4,7,9,10,11,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'day_duration'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__calendar__day_duration_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Compare___calendar__date_0_0,
		fn__calendar__day_duration_2_0_i2);
MR_def_label(fn__calendar__day_duration_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__calendar__day_duration_2_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(fn__calendar__day_duration_2_0,
		fn__calendar__day_duration_2_0_i5);
MR_def_label(fn__calendar__day_duration_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr2, 3));
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__calendar__day_duration_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__calendar__day_duration_2_0_i7);
	}
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__calendar__zero_duration_0_0);
MR_def_label(fn__calendar__day_duration_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1000000;
	MR_r2 = MR_tfield(0, MR_sv(2), 6);
	MR_r3 = MR_tfield(0, MR_sv(1), 6);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		fn__calendar__day_duration_2_0_i9);
MR_def_label(fn__calendar__day_duration_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 60;
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(2), 5) - (MR_Integer) MR_r2);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		fn__calendar__day_duration_2_0_i10);
MR_def_label(fn__calendar__day_duration_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 60;
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(2), 4) - (MR_Integer) MR_r2);
	MR_r3 = MR_tfield(0, MR_sv(1), 4);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		fn__calendar__day_duration_2_0_i11);
MR_def_label(fn__calendar__day_duration_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(2), 3) - (MR_Integer) MR_r2);
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(calendar__subtract_ints_with_borrow_5_0,
		fn__calendar__day_duration_2_0_i12);
MR_def_label(fn__calendar__day_duration_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__calendar__julian_day_number_1_0,
		fn__calendar__day_duration_2_0_i13);
MR_def_label(fn__calendar__day_duration_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__calendar__julian_day_number_1_0,
		fn__calendar__day_duration_2_0_i14);
MR_def_label(fn__calendar__day_duration_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (((MR_Integer) MR_sv(1) - (MR_Integer) MR_sv(6)) - (MR_Integer) MR_tempr1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__calendar__init_duration_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module59)
	MR_init_entry1(__Unify___calendar__date_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__date_0_0);
	MR_init_label2(__Unify___calendar__date_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__date_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___calendar__date_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__date_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__date_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__date_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__date_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__date_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__date_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___calendar__date_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___calendar__date_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module60)
	MR_init_entry1(__Compare___calendar__date_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__date_0_0);
	MR_init_label10(__Compare___calendar__date_0_0,6,7,9,14,15,17,22,23,25,30)
	MR_init_label10(__Compare___calendar__date_0_0,31,33,38,39,41,46,47,49,52,83)
	MR_init_label2(__Compare___calendar__date_0_0,53,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__date_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i83);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i9);
	}
MR_def_label(__Compare___calendar__date_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i9);
MR_def_label(__Compare___calendar__date_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__date_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i62);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i17);
MR_def_label(__Compare___calendar__date_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(7))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i17);
MR_def_label(__Compare___calendar__date_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__date_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i62);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i25);
MR_def_label(__Compare___calendar__date_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(8))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i25);
MR_def_label(__Compare___calendar__date_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__date_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i62);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i33);
MR_def_label(__Compare___calendar__date_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i33);
MR_def_label(__Compare___calendar__date_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__date_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i62);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i41);
MR_def_label(__Compare___calendar__date_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i41);
MR_def_label(__Compare___calendar__date_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__date_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i62);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i49);
MR_def_label(__Compare___calendar__date_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__date_0_0_i49);
MR_def_label(__Compare___calendar__date_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__date_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i62);
	}
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(12);
	MR_proceed();
MR_def_label(__Compare___calendar__date_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___calendar__date_0_0_i53);
	}
MR_def_label(__Compare___calendar__date_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(12);
	MR_proceed();
MR_def_label(__Compare___calendar__date_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__date_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module61)
	MR_init_entry1(__Unify___calendar__day_of_month_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__day_of_month_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__day_of_month_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module62)
	MR_init_entry1(__Compare___calendar__day_of_month_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__day_of_month_0_0);
	MR_init_label2(__Compare___calendar__day_of_month_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__day_of_month_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__day_of_month_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__day_of_month_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__day_of_month_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__day_of_month_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module63)
	MR_init_entry1(__Unify___calendar__day_of_week_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__day_of_week_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__day_of_week_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module64)
	MR_init_entry1(__Compare___calendar__day_of_week_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__day_of_week_0_0);
	MR_init_label2(__Compare___calendar__day_of_week_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__day_of_week_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__day_of_week_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__day_of_week_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__day_of_week_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__day_of_week_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module65)
	MR_init_entry1(__Unify___calendar__days_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__days_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__days_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module66)
	MR_init_entry1(__Compare___calendar__days_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__days_0_0);
	MR_init_label2(__Compare___calendar__days_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__days_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__days_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__days_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__days_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__days_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module67)
	MR_init_entry1(__Unify___calendar__duration_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__duration_0_0);
	MR_init_label2(__Unify___calendar__duration_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__duration_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___calendar__duration_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__duration_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__duration_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___calendar__duration_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___calendar__duration_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___calendar__duration_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module68)
	MR_init_entry1(__Compare___calendar__duration_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__duration_0_0);
	MR_init_label10(__Compare___calendar__duration_0_0,6,7,9,14,15,17,22,23,25,28)
	MR_init_label3(__Compare___calendar__duration_0_0,47,29,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__duration_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__duration_0_0_i9);
	}
MR_def_label(__Compare___calendar__duration_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__duration_0_0_i9);
MR_def_label(__Compare___calendar__duration_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__duration_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i35);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__duration_0_0_i17);
MR_def_label(__Compare___calendar__duration_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__duration_0_0_i17);
MR_def_label(__Compare___calendar__duration_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__duration_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i35);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___calendar__duration_0_0_i25);
MR_def_label(__Compare___calendar__duration_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___calendar__duration_0_0_i25);
MR_def_label(__Compare___calendar__duration_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__duration_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i35);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___calendar__duration_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___calendar__duration_0_0_i29);
	}
MR_def_label(__Compare___calendar__duration_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___calendar__duration_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___calendar__duration_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module69)
	MR_init_entry1(__Unify___calendar__hour_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__hour_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__hour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module70)
	MR_init_entry1(__Compare___calendar__hour_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__hour_0_0);
	MR_init_label2(__Compare___calendar__hour_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__hour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__hour_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__hour_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__hour_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__hour_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module71)
	MR_init_entry1(__Unify___calendar__hours_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__hours_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__hours_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module72)
	MR_init_entry1(__Compare___calendar__hours_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__hours_0_0);
	MR_init_label2(__Compare___calendar__hours_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__hours_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__hours_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__hours_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__hours_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__hours_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module73)
	MR_init_entry1(__Unify___calendar__microsecond_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__microsecond_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__microsecond_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module74)
	MR_init_entry1(__Compare___calendar__microsecond_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__microsecond_0_0);
	MR_init_label2(__Compare___calendar__microsecond_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__microsecond_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__microsecond_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__microsecond_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__microsecond_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__microsecond_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module75)
	MR_init_entry1(__Unify___calendar__microseconds_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__microseconds_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__microseconds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module76)
	MR_init_entry1(__Compare___calendar__microseconds_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__microseconds_0_0);
	MR_init_label2(__Compare___calendar__microseconds_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__microseconds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__microseconds_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__microseconds_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__microseconds_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__microseconds_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module77)
	MR_init_entry1(__Unify___calendar__minute_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__minute_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__minute_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module78)
	MR_init_entry1(__Compare___calendar__minute_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__minute_0_0);
	MR_init_label2(__Compare___calendar__minute_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__minute_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__minute_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__minute_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__minute_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__minute_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module79)
	MR_init_entry1(__Unify___calendar__minutes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__minutes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__minutes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module80)
	MR_init_entry1(__Compare___calendar__minutes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__minutes_0_0);
	MR_init_label2(__Compare___calendar__minutes_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__minutes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__minutes_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__minutes_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__minutes_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__minutes_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module81)
	MR_init_entry1(__Unify___calendar__month_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__month_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__month_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module82)
	MR_init_entry1(__Compare___calendar__month_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__month_0_0);
	MR_init_label2(__Compare___calendar__month_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__month_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__month_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__month_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__month_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__month_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module83)
	MR_init_entry1(__Unify___calendar__months_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__months_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__months_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module84)
	MR_init_entry1(__Compare___calendar__months_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__months_0_0);
	MR_init_label2(__Compare___calendar__months_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__months_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__months_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__months_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__months_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__months_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module85)
	MR_init_entry1(__Unify___calendar__order_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__order_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__order_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module86)
	MR_init_entry1(__Compare___calendar__order_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__order_0_0);
	MR_init_label2(__Compare___calendar__order_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__order_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__order_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__order_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__order_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__order_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module87)
	MR_init_entry1(__Unify___calendar__second_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__second_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__second_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module88)
	MR_init_entry1(__Compare___calendar__second_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__second_0_0);
	MR_init_label2(__Compare___calendar__second_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__second_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__second_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__second_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__second_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__second_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module89)
	MR_init_entry1(__Unify___calendar__seconds_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__seconds_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__seconds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module90)
	MR_init_entry1(__Compare___calendar__seconds_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__seconds_0_0);
	MR_init_label2(__Compare___calendar__seconds_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__seconds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__seconds_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__seconds_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__seconds_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__seconds_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module91)
	MR_init_entry1(__Unify___calendar__year_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__year_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__year_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module92)
	MR_init_entry1(__Compare___calendar__year_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__year_0_0);
	MR_init_label2(__Compare___calendar__year_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__year_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__year_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__year_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__year_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__year_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module93)
	MR_init_entry1(__Unify___calendar__years_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calendar__years_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___calendar__years_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module94)
	MR_init_entry1(__Compare___calendar__years_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calendar__years_0_0);
	MR_init_label2(__Compare___calendar__years_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___calendar__years_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__years_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___calendar__years_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___calendar__years_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___calendar__years_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module95)
	MR_init_entry1(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_init_label8(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,31,3,5,2,11,13,15,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_duration_loop__[1, 2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	if (MR_INT_GE(MR_tempr1,1)) {
		MR_GOTO_LAB(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i2);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(1), 1) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i3);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(1) = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) + (MR_Integer) -1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(fn__calendar__modulo_3_0,
		f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i5);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(fn__calendar__fquotient_3_0,
		f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i15);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__calendar__max_day_in_month_for_2_0,
		f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i11);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_sv(2) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_r1);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(1) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) + (MR_Integer) 1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(fn__calendar__modulo_3_0,
		f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i13);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(fn__calendar__fquotient_3_0,
		f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i15);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i31);
	}
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_100_117_114_97_116_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module96)
	MR_init_entry1(fn__f_99_97_108_101_110_100_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_97_108_101_110_100_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_97_108_101_110_100_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module97)
	MR_init_entry1(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0);
	MR_init_label7(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0,25,4,5,6,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__all_true__ho8__[3]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(calendar__add_duration_3_0,
		f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0_i4);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(calendar__add_duration_3_0,
		f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0_i5);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Compare___calendar__date_0_0,
		f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0_i6);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0_i8);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0_i25);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0_i1);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0_i25);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(f_99_97_108_101_110_100_97_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_116_114_117_101_95_95_104_111_56_95_95_91_51_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calendar_module98)
	MR_init_entry1(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0);
	MR_init_label1(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__suffix_length_2__ho12__[4]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0
	Str = (MR_String) MR_r4;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 8211 "calendar.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0_i2);
	}
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_localtailcall(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0);
	}
MR_def_label(fn__f_99_97_108_101_110_100_97_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_102_102_105_120_95_108_101_110_103_116_104_95_50_95_95_104_111_49_50_95_95_91_52_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 - ((MR_Integer) MR_r2 + (MR_Integer) 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__calendar_maybe_bunch_0(void)
{
	calendar_module0();
	calendar_module1();
	calendar_module2();
	calendar_module3();
	calendar_module4();
	calendar_module5();
	calendar_module6();
	calendar_module7();
	calendar_module8();
	calendar_module9();
	calendar_module10();
	calendar_module11();
	calendar_module12();
	calendar_module13();
	calendar_module14();
	calendar_module15();
	calendar_module16();
	calendar_module17();
	calendar_module18();
	calendar_module19();
	calendar_module20();
	calendar_module21();
	calendar_module22();
	calendar_module23();
	calendar_module24();
	calendar_module25();
	calendar_module26();
	calendar_module27();
	calendar_module28();
	calendar_module29();
	calendar_module30();
	calendar_module31();
	calendar_module32();
	calendar_module33();
	calendar_module34();
	calendar_module35();
	calendar_module36();
	calendar_module37();
	calendar_module38();
	calendar_module39();
}

static void mercury__calendar_maybe_bunch_1(void)
{
	calendar_module40();
	calendar_module41();
	calendar_module42();
	calendar_module43();
	calendar_module44();
	calendar_module45();
	calendar_module46();
	calendar_module47();
	calendar_module48();
	calendar_module49();
	calendar_module50();
	calendar_module51();
	calendar_module52();
	calendar_module53();
	calendar_module54();
	calendar_module55();
	calendar_module56();
	calendar_module57();
	calendar_module58();
	calendar_module59();
	calendar_module60();
	calendar_module61();
	calendar_module62();
	calendar_module63();
	calendar_module64();
	calendar_module65();
	calendar_module66();
	calendar_module67();
	calendar_module68();
	calendar_module69();
	calendar_module70();
	calendar_module71();
	calendar_module72();
	calendar_module73();
	calendar_module74();
	calendar_module75();
	calendar_module76();
	calendar_module77();
	calendar_module78();
	calendar_module79();
}

static void mercury__calendar_maybe_bunch_2(void)
{
	calendar_module80();
	calendar_module81();
	calendar_module82();
	calendar_module83();
	calendar_module84();
	calendar_module85();
	calendar_module86();
	calendar_module87();
	calendar_module88();
	calendar_module89();
	calendar_module90();
	calendar_module91();
	calendar_module92();
	calendar_module93();
	calendar_module94();
	calendar_module95();
	calendar_module96();
	calendar_module97();
	calendar_module98();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__calendar__init(void);
void mercury__calendar__init_type_tables(void);
void mercury__calendar__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__calendar__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__calendar__init_complexity_procs(void);
#endif

void mercury__calendar__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__calendar_maybe_bunch_0();
	mercury__calendar_maybe_bunch_1();
	mercury__calendar_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_date_0,
		calendar__date_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_day_of_month_0,
		calendar__day_of_month_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_day_of_week_0,
		calendar__day_of_week_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_days_0,
		calendar__days_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_duration_0,
		calendar__duration_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_hour_0,
		calendar__hour_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_hours_0,
		calendar__hours_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_microsecond_0,
		calendar__microsecond_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_microseconds_0,
		calendar__microseconds_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_minute_0,
		calendar__minute_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_minutes_0,
		calendar__minutes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_month_0,
		calendar__month_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_months_0,
		calendar__months_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_order_0,
		calendar__order_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_second_0,
		calendar__second_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_seconds_0,
		calendar__seconds_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_year_0,
		calendar__year_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calendar__type_ctor_info_years_0,
		calendar__years_0_0);
	mercury__calendar__init_debugger();
}

void mercury__calendar__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_date_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_day_of_month_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_day_of_week_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_days_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_duration_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_hour_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_hours_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_microsecond_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_microseconds_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_minute_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_minutes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_month_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_months_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_order_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_second_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_seconds_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_year_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_calendar__type_ctor_info_years_0);
	}
}


void mercury__calendar__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__calendar__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__calendar);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__calendar__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
