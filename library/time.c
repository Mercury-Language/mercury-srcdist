/*
** Automatically generated from `time.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__time__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "time.c"
#include "time.mh"

#line 27 "time.c"
#line 534 "io.int"
#include "io.mh"

#line 31 "time.c"
#line 542 "io.int"
#include "string.mh"

#line 35 "time.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "time.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 43 "time.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "time.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "time.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 55 "time.c"
#line 3 "float.opt"
#include "float.mh"

#line 59 "time.c"
#line 3 "math.opt"
#include "math.mh"

#line 63 "time.c"
#line 4 "char.opt"
#include "char.mh"

#line 67 "time.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 71 "time.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 75 "time.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 79 "time.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 83 "time.c"
#line 20 "store.opt"
#include "store.mh"

#line 87 "time.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "time.c"
#line 150 "io.opt"
#include "dir.mh"

#line 95 "time.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 99 "time.c"
#line 3 "list.opt"
#include "list.mh"

#line 103 "time.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "time.c"
#line 108 "time.c"
#ifndef TIME_DECL_GUARD
#define TIME_DECL_GUARD

#line 112 "time.c"
#line 197 "time.m"

    #include <time.h>
    #ifdef MR_HAVE_SYS_TYPES_H
        #include <sys/types.h>
    #endif
    #ifdef MR_HAVE_SYS_TIMES_H
        #include <sys/times.h>
    #endif
    #ifdef MR_HAVE_UNISTD_H
        #include <unistd.h>
    #endif

    #define MR_update_io(r_src, r_dest) ((r_dest) = (r_src))

    #include "mercury_timing.h" /* for MR_CLOCK_TICKS_PER_SECOND */

#line 130 "time.c"
#line 131 "time.c"

#endif
#line 134 "time.c"

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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_time__type_ctor_info_tms_0,
	mercury_data_time__type_ctor_info_tm_0,
	mercury_data_time__type_ctor_info_time_t_rep_0,
	mercury_data_time__type_ctor_info_time_t_0,
	mercury_data_time__type_ctor_info_time_error_0,
	mercury_data_time__type_ctor_info_dst_0,
	mercury_data_time__type_ctor_info_clock_t_0;
MR_decl_label1(time__clock_3_0, 2)
MR_decl_label2(time__compare_time_t_reps_3_0, 2,3)
MR_decl_label1(time__time_3_0, 3)
MR_decl_label1(time__time_t_is_invalid_1_0, 1)
MR_decl_label1(time__times_4_0, 2)
MR_decl_label4(fn__time__asctime_1_0, 2,6,7,23)
MR_decl_label1(fn__time__clk_tck_0_0, 2)
MR_decl_label1(fn__time__ctime_1_0, 2)
MR_decl_label1(fn__time__gmtime_1_0, 2)
MR_decl_label2(fn__time__int_to_maybe_dst_1_0, 2,5)
MR_decl_label1(fn__time__localtime_1_0, 2)
MR_decl_label2(fn__time__maybe_dst_to_int_1_0, 3,5)
MR_decl_label3(fn__time__mktime_1_0, 3,5,2)
MR_decl_label1(__Unify___time__time_error_0_0, 4)
MR_decl_label3(__Unify___time__time_t_0_0, 5,8,1)
MR_decl_label3(__Unify___time__time_t_rep_0_0, 4,6,1)
MR_decl_label2(__Unify___time__tm_0_0, 6,1)
MR_decl_label2(__Unify___time__tms_0_0, 4,1)
MR_decl_label2(__Compare___time__clock_t_0_0, 2,3)
MR_decl_label2(__Compare___time__dst_0_0, 2,3)
MR_decl_label3(__Compare___time__time_error_0_0, 4,12,5)
MR_decl_label2(__Compare___time__time_t_0_0, 9,4)
MR_decl_label2(__Compare___time__time_t_rep_0_0, 3,2)
MR_decl_label8(__Compare___time__tm_0_0, 3,2,6,7,9,14,15,17)
MR_decl_label8(__Compare___time__tm_0_0, 22,23,25,30,31,33,38,39)
MR_decl_label8(__Compare___time__tm_0_0, 41,46,47,49,54,55,57,62)
MR_decl_label3(__Compare___time__tm_0_0, 63,65,157)
MR_decl_label8(__Compare___time__tms_0_0, 6,7,9,14,15,17,22,23)
MR_decl_label5(__Compare___time__tms_0_0, 25,28,47,29,35)
MR_decl_static(time__c_clock_3_0)
MR_def_extern_entry(time__clock_3_0)
MR_def_extern_entry(fn__time__clocks_per_sec_0_0)
MR_decl_static(time__c_time_3_0)
MR_decl_static(time__time_t_is_invalid_1_0)
MR_def_extern_entry(time__time_3_0)
MR_decl_static(time__c_times_7_0)
MR_def_extern_entry(time__times_4_0)
MR_decl_static(fn__time__c_clk_tck_0_0)
MR_def_extern_entry(fn__time__clk_tck_0_0)
MR_def_extern_entry(time__c_difftime_3_0)
MR_def_extern_entry(fn__time__difftime_2_0)
MR_def_extern_entry(time__c_localtime_10_0)
MR_def_extern_entry(fn__time__int_to_maybe_dst_1_0)
MR_def_extern_entry(fn__time__localtime_1_0)
MR_def_extern_entry(time__c_gmtime_10_0)
MR_def_extern_entry(fn__time__gmtime_1_0)
MR_def_extern_entry(time__c_mktime_10_0)
MR_def_extern_entry(fn__time__maybe_dst_to_int_1_0)
MR_def_extern_entry(fn__time__mktime_1_0)
MR_def_extern_entry(fn__time__asctime_1_0)
MR_def_extern_entry(fn__time__ctime_1_0)
MR_def_extern_entry(time__compare_time_t_reps_3_0)
MR_def_extern_entry(fn__time__construct_time_t_1_0)
MR_def_extern_entry(__Unify___time__clock_t_0_0)
MR_def_extern_entry(__Compare___time__clock_t_0_0)
MR_def_extern_entry(__Unify___time__dst_0_0)
MR_def_extern_entry(__Compare___time__dst_0_0)
MR_def_extern_entry(__Unify___time__time_error_0_0)
MR_def_extern_entry(__Compare___time__time_error_0_0)
MR_def_extern_entry(__Unify___time__time_t_0_0)
MR_def_extern_entry(__Compare___time__time_t_0_0)
MR_def_extern_entry(__Unify___time__time_t_rep_0_0)
MR_def_extern_entry(__Compare___time__time_t_rep_0_0)
MR_def_extern_entry(__Unify___time__tm_0_0)
MR_def_extern_entry(__Compare___time__tm_0_0)
MR_def_extern_entry(__Unify___time__tms_0_0)
MR_def_extern_entry(__Compare___time__tms_0_0)
MR_decl_static(fn__f_116_105_109_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[7] =
{
{
MR_string_const("Sun", 3)
},
{
MR_string_const("Mon", 3)
},
{
MR_string_const("Tue", 3)
},
{
MR_string_const("Wed", 3)
},
{
MR_string_const("Thu", 3)
},
{
MR_string_const("Fri", 3)
},
{
MR_string_const("Sat", 3)
},
};

static const struct mercury_type_1 mercury_vector_common_1_1[12] =
{
{
MR_string_const("Jan", 3)
},
{
MR_string_const("Feb", 3)
},
{
MR_string_const("Mar", 3)
},
{
MR_string_const("Apr", 3)
},
{
MR_string_const("May", 3)
},
{
MR_string_const("Jun", 3)
},
{
MR_string_const("Jul", 3)
},
{
MR_string_const("Aug", 3)
},
{
MR_string_const("Sep", 3)
},
{
MR_string_const("Oct", 3)
},
{
MR_string_const("Nov", 3)
},
{
MR_string_const("Dec", 3)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_time__field_types_tms_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_time__du_functor_desc_tms_0_0 = {
	"tms",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_time__field_types_tms_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_time__du_stag_ordered_tms_0_0[] = {
	&mercury_data_time__du_functor_desc_tms_0_0

};

const MR_DuPtagLayout mercury_data_time__du_ptag_ordered_tms_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_time__du_stag_ordered_tms_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_time__du_name_ordered_tms_0[] = {
	&mercury_data_time__du_functor_desc_tms_0_0
};

const MR_Integer mercury_data_time__functor_number_map_tms_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_tms_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___time__tms_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___time__tms_0_0)),
	"time",
	"tms",
	{ (void *)mercury_data_time__du_name_ordered_tms_0 },
	{ (void *)mercury_data_time__du_ptag_ordered_tms_0 },
	1,
	4,
	mercury_data_time__functor_number_map_tms_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_dst_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1time__type_ctor_info_dst_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_time__type_ctor_info_dst_0
}};

const MR_PseudoTypeInfo mercury_data_time__field_types_tm_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1time__type_ctor_info_dst_0
};

const MR_ConstString mercury_data_time__field_names_tm_0_0[] = {
	"tm_year",
	"tm_mon",
	"tm_mday",
	"tm_hour",
	"tm_min",
	"tm_sec",
	"tm_yday",
	"tm_wday",
	"tm_dst"
};

static const MR_DuFunctorDesc mercury_data_time__du_functor_desc_tm_0_0 = {
	"tm",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_time__field_types_tm_0_0,
	mercury_data_time__field_names_tm_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_time__du_stag_ordered_tm_0_0[] = {
	&mercury_data_time__du_functor_desc_tm_0_0

};

const MR_DuPtagLayout mercury_data_time__du_ptag_ordered_tm_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_time__du_stag_ordered_tm_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_time__du_name_ordered_tm_0[] = {
	&mercury_data_time__du_functor_desc_tm_0_0
};

const MR_Integer mercury_data_time__functor_number_map_tm_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_tm_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___time__tm_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___time__tm_0_0)),
	"time",
	"tm",
	{ (void *)mercury_data_time__du_name_ordered_tm_0 },
	{ (void *)mercury_data_time__du_ptag_ordered_tm_0 },
	1,
	4,
	mercury_data_time__functor_number_map_tm_0
};

const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_time_t_rep_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___time__time_t_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___time__time_t_rep_0_0)),
	"time",
	"time_t_rep",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_time_t_rep_0;

static const MR_NotagFunctorDesc mercury_data_time__notag_functor_desc_time_t_0 = {
	"time_t",
	(MR_PseudoTypeInfo) &mercury_data_time__type_ctor_info_time_t_rep_0,
	NULL
};

const MR_Integer mercury_data_time__functor_number_map_time_t_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_time_t_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___time__time_t_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___time__time_t_0_0)),
	"time",
	"time_t",
	{ (void *)&mercury_data_time__notag_functor_desc_time_t_0 },
	{ (void *)&mercury_data_time__notag_functor_desc_time_t_0 },
	1,
	4,
	mercury_data_time__functor_number_map_time_t_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury_data_time__notag_functor_desc_time_error_0 = {
	"time_error",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_time__functor_number_map_time_error_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_time_error_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___time__time_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___time__time_error_0_0)),
	"time",
	"time_error",
	{ (void *)&mercury_data_time__notag_functor_desc_time_error_0 },
	{ (void *)&mercury_data_time__notag_functor_desc_time_error_0 },
	1,
	4,
	mercury_data_time__functor_number_map_time_error_0
};

static const MR_EnumFunctorDesc mercury_data_time__enum_functor_desc_dst_0_0 = {
	"standard_time",
	0
};

static const MR_EnumFunctorDesc mercury_data_time__enum_functor_desc_dst_0_1 = {
	"daylight_time",
	1
};

const MR_EnumFunctorDescPtr mercury_data_time__enum_value_ordered_dst_0[] = {
	&mercury_data_time__enum_functor_desc_dst_0_0,
	&mercury_data_time__enum_functor_desc_dst_0_1
};

const MR_EnumFunctorDescPtr mercury_data_time__enum_name_ordered_dst_0[] = {
	&mercury_data_time__enum_functor_desc_dst_0_1,
	&mercury_data_time__enum_functor_desc_dst_0_0
};

const MR_Integer mercury_data_time__functor_number_map_dst_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_dst_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___time__dst_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___time__dst_0_0)),
	"time",
	"dst",
	{ (void *)mercury_data_time__enum_name_ordered_dst_0 },
	{ (void *)mercury_data_time__enum_value_ordered_dst_0 },
	2,
	4,
	mercury_data_time__functor_number_map_dst_0
};

const MR_TypeCtorInfo_Struct mercury_data_time__type_ctor_info_clock_t_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___time__clock_t_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___time__clock_t_0_0)),
	"time",
	"clock_t",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};


MR_BEGIN_MODULE(time_module0)
	MR_init_entry1(time__c_clock_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(time__c_clock_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Ret;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__time__c_clock_3_0
{
#line 262 "time.m"

    Ret = (MR_Integer) clock();
    MR_update_io(IO0, IO);
;}
#line 587 "time.c"
	MR_r1 = Ret;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(time_module1)
	MR_init_entry1(time__clock_3_0);
	MR_init_label1(time__clock_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__time__clock_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Ret;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__time__clock_3_0
{
#line 262 "time.m"

    Ret = (MR_Integer) clock();
    MR_update_io(IO0, IO);
;}
#line 622 "time.c"
	MR_r3 = Ret;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(time__clock_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(time, time_error);
	MR_r2 = (MR_Word) MR_string_const("can\'t get clock value", 21);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(time__clock_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module2)
	MR_init_entry1(fn__time__clocks_per_sec_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__clocks_per_sec_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Ret;
#define	MR_PROC_LABEL	mercury__fn__time__clocks_per_sec_0_0
{
#line 297 "time.m"

    Ret = (MR_Integer) CLOCKS_PER_SEC;
;}
#line 661 "time.c"
	MR_r1 = Ret;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module3)
	MR_init_entry1(time__c_time_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(time__c_time_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	time_t	Ret;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__time__c_time_3_0
{
#line 441 "time.m"

    Ret = time(NULL);
    MR_update_io(IO0, IO);
;}
#line 694 "time.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Ret, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module4)
	MR_init_entry1(time__time_t_is_invalid_1_0);
	MR_init_label1(time__time_t_is_invalid_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(time__time_t_is_invalid_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	time_t	Val;
#define	MR_PROC_LABEL	mercury__time__time_t_is_invalid_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Val);
{
#line 469 "time.m"

    SUCCESS_INDICATOR = (Val == -1);
;}
#line 729 "time.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(time__time_t_is_invalid_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(time__time_t_is_invalid_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module5)
	MR_init_entry1(time__time_3_0);
	MR_init_label1(time__time_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__time__time_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	time_t	Ret;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__time__time_3_0
{
#line 441 "time.m"

    Ret = time(NULL);
    MR_update_io(IO0, IO);
;}
#line 770 "time.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Ret, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	time_t	Val;
#define	MR_PROC_LABEL	mercury__time__time_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r3, Val);
{
#line 469 "time.m"

    SUCCESS_INDICATOR = (Val == -1);
;}
#line 786 "time.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(time__time_3_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(time, time_error);
	MR_r2 = (MR_Word) MR_string_const("can\'t get time value", 20);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(time__time_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module6)
	MR_init_entry1(time__c_times_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(time__c_times_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Ret;
	MR_Integer	Ut;
	MR_Integer	St;
	MR_Integer	CUt;
	MR_Integer	CSt;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__time__c_times_7_0
{
#line 339 "time.m"
{
#ifdef MR_HAVE_POSIX_TIMES
    struct tms t;

    Ret = (MR_Integer) times(&t);

    Ut = (MR_Integer) t.tms_utime;
    St = (MR_Integer) t.tms_stime;
    CUt = (MR_Integer) t.tms_cutime;
    CSt = (MR_Integer) t.tms_cstime;
#else
    Ret = -1;
#endif
    MR_update_io(IO0, IO);
};}
#line 842 "time.c"
	MR_r1 = Ret;
	MR_r2 = Ut;
	MR_r3 = St;
	MR_r4 = CUt;
	MR_r5 = CSt;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module7)
	MR_init_entry1(time__times_4_0);
	MR_init_label1(time__times_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__time__times_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Ret;
	MR_Integer	Ut;
	MR_Integer	St;
	MR_Integer	CUt;
	MR_Integer	CSt;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__time__times_4_0
{
#line 339 "time.m"
{
#ifdef MR_HAVE_POSIX_TIMES
    struct tms t;

    Ret = (MR_Integer) times(&t);

    Ut = (MR_Integer) t.tms_utime;
    St = (MR_Integer) t.tms_stime;
    CUt = (MR_Integer) t.tms_cutime;
    CSt = (MR_Integer) t.tms_cstime;
#else
    Ret = -1;
#endif
    MR_update_io(IO0, IO);
};}
#line 895 "time.c"
	MR_r3 = Ret;
	MR_r4 = Ut;
	MR_r5 = St;
	MR_r6 = CUt;
	MR_r7 = CSt;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(time__times_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(time, time_error);
	MR_r2 = (MR_Word) MR_string_const("can\'t get times value", 21);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(time__times_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r6;
	MR_tfield(0, MR_tempr1, 3) = MR_r7;
	MR_r2 = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module8)
	MR_init_entry1(fn__time__c_clk_tck_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__time__c_clk_tck_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Ret;
#define	MR_PROC_LABEL	mercury__fn__time__c_clk_tck_0_0
{
#line 396 "time.m"

#if defined(MR_CLOCK_TICKS_PER_SECOND)
    Ret = MR_CLOCK_TICKS_PER_SECOND;
#else
    Ret = -1;
#endif
;}
#line 951 "time.c"
	MR_r1 = Ret;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module9)
	MR_init_entry1(fn__time__clk_tck_0_0);
	MR_init_label1(fn__time__clk_tck_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__clk_tck_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Ret;
#define	MR_PROC_LABEL	mercury__fn__time__clk_tck_0_0
{
#line 396 "time.m"

#if defined(MR_CLOCK_TICKS_PER_SECOND)
    Ret = MR_CLOCK_TICKS_PER_SECOND;
#else
    Ret = -1;
#endif
;}
#line 986 "time.c"
	MR_r3 = Ret;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(fn__time__clk_tck_0_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(time, time_error);
	MR_r2 = (MR_Word) MR_string_const("can\'t get clk_tck value", 23);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__time__clk_tck_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module10)
	MR_init_entry1(time__c_difftime_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__time__c_difftime_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	time_t	T1;
	time_t	T0;
	MR_Float	Diff;
#define	MR_PROC_LABEL	mercury__time__c_difftime_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r2, T0);
{
#line 503 "time.m"

    Diff = (MR_Float) difftime(T1, T0);
;}
#line 1029 "time.c"
	MR_r1 = MR_float_to_word(Diff);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module11)
	MR_init_entry1(fn__time__difftime_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__difftime_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	time_t	T1;
	time_t	T0;
	MR_Float	Diff;
#define	MR_PROC_LABEL	mercury__fn__time__difftime_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r2, T0);
{
#line 503 "time.m"

    Diff = (MR_Float) difftime(T1, T0);
;}
#line 1063 "time.c"
	MR_r1 = MR_float_to_word(Diff);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module12)
	MR_init_entry1(time__c_localtime_10_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__time__c_localtime_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
#define	MR_PROC_LABEL	mercury__time__c_localtime_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Time);
	MR_OBTAIN_GLOBAL_LOCK("c_localtime");
{
#line 542 "time.m"

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
#line 1121 "time.c"
	MR_RELEASE_GLOBAL_LOCK("c_localtime");
	MR_r1 = Yr;
	MR_r2 = Mnt;
	MR_r3 = MD;
	MR_r4 = Hrs;
	MR_r5 = Min;
	MR_r6 = Sec;
	MR_r7 = YD;
	MR_r8 = WD;
	MR_r9 = N;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module13)
	MR_init_entry1(fn__time__int_to_maybe_dst_1_0);
	MR_init_label2(fn__time__int_to_maybe_dst_1_0,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__int_to_maybe_dst_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__time__int_to_maybe_dst_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
MR_def_label(fn__time__int_to_maybe_dst_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__time__int_to_maybe_dst_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_proceed();
MR_def_label(fn__time__int_to_maybe_dst_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module14)
	MR_init_entry1(fn__time__localtime_1_0);
	MR_init_label1(fn__time__localtime_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__localtime_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
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
#define	MR_PROC_LABEL	mercury__fn__time__localtime_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Time);
	MR_OBTAIN_GLOBAL_LOCK("c_localtime");
{
#line 542 "time.m"

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
#line 1227 "time.c"
	MR_RELEASE_GLOBAL_LOCK("c_localtime");
	MR_tempr1 = Yr;
	MR_tempr2 = Mnt;
	MR_tempr3 = MD;
	MR_tempr4 = Hrs;
	MR_tempr5 = Min;
	MR_tempr6 = Sec;
	MR_tempr7 = YD;
	MR_tempr8 = WD;
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
	MR_sv(8) = MR_tempr8;
	}
	MR_np_call_localret_ent(fn__time__int_to_maybe_dst_1_0,
		fn__time__localtime_1_0_i2);
MR_def_label(fn__time__localtime_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module15)
	MR_init_entry1(time__c_gmtime_10_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__time__c_gmtime_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
#define	MR_PROC_LABEL	mercury__time__c_gmtime_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Time);
	MR_OBTAIN_GLOBAL_LOCK("c_gmtime");
{
#line 652 "time.m"
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
#line 1321 "time.c"
	MR_RELEASE_GLOBAL_LOCK("c_gmtime");
	MR_r1 = Yr;
	MR_r2 = Mnt;
	MR_r3 = MD;
	MR_r4 = Hrs;
	MR_r5 = Min;
	MR_r6 = Sec;
	MR_r7 = YD;
	MR_r8 = WD;
	MR_r9 = N;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module16)
	MR_init_entry1(fn__time__gmtime_1_0);
	MR_init_label1(fn__time__gmtime_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__gmtime_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
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
#define	MR_PROC_LABEL	mercury__fn__time__gmtime_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Time);
	MR_OBTAIN_GLOBAL_LOCK("c_gmtime");
{
#line 652 "time.m"
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
#line 1393 "time.c"
	MR_RELEASE_GLOBAL_LOCK("c_gmtime");
	MR_tempr1 = Yr;
	MR_tempr2 = Mnt;
	MR_tempr3 = MD;
	MR_tempr4 = Hrs;
	MR_tempr5 = Min;
	MR_tempr6 = Sec;
	MR_tempr7 = YD;
	MR_tempr8 = WD;
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
	MR_sv(8) = MR_tempr8;
	}
	MR_np_call_localret_ent(fn__time__int_to_maybe_dst_1_0,
		fn__time__gmtime_1_0_i2);
MR_def_label(fn__time__gmtime_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module17)
	MR_init_entry1(time__c_mktime_10_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__time__c_mktime_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Yr;
	MR_Integer	Mnt;
	MR_Integer	MD;
	MR_Integer	Hrs;
	MR_Integer	Min;
	MR_Integer	Sec;
	MR_Integer	YD;
	MR_Integer	WD;
	MR_Integer	N;
	time_t	Time;
#define	MR_PROC_LABEL	mercury__time__c_mktime_10_0
	Yr = MR_r1;
	Mnt = MR_r2;
	MD = MR_r3;
	Hrs = MR_r4;
	Min = MR_r5;
	Sec = MR_r6;
	YD = MR_r7;
	WD = MR_r8;
	N = MR_r9;
	MR_OBTAIN_GLOBAL_LOCK("c_mktime");
{
#line 783 "time.m"
{
    struct tm t;

    t.tm_sec = Sec;
    t.tm_min = Min;
    t.tm_hour = Hrs;
    t.tm_mon = Mnt;
    t.tm_year = Yr;
    t.tm_wday = WD;
    t.tm_mday = MD;
    t.tm_yday = YD;
    t.tm_isdst = N;

    Time = mktime(&t);
};}
#line 1490 "time.c"
	MR_RELEASE_GLOBAL_LOCK("c_mktime");
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module18)
	MR_init_entry1(fn__time__maybe_dst_to_int_1_0);
	MR_init_label2(fn__time__maybe_dst_to_int_1_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__maybe_dst_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__time__maybe_dst_to_int_1_0_i3);
	}
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
MR_def_label(fn__time__maybe_dst_to_int_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__time__maybe_dst_to_int_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(fn__time__maybe_dst_to_int_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module19)
	MR_init_entry1(fn__time__mktime_1_0);
	MR_init_label3(fn__time__mktime_1_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__mktime_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 8);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__time__mktime_1_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_r10 = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 5);
	MR_r7 = MR_ctfield(0, MR_tempr1, 6);
	MR_r8 = MR_ctfield(0, MR_tempr1, 7);
	MR_r9 = (MR_Integer) -1;
	MR_GOTO_LAB(fn__time__mktime_1_0_i2);
	}
MR_def_label(fn__time__mktime_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(fn__time__mktime_1_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r10 = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 5);
	MR_r7 = MR_ctfield(0, MR_tempr1, 6);
	MR_r8 = MR_ctfield(0, MR_tempr1, 7);
	MR_r9 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__time__mktime_1_0_i2);
	}
MR_def_label(fn__time__mktime_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r10 = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 5);
	MR_r7 = MR_ctfield(0, MR_tempr1, 6);
	MR_r8 = MR_ctfield(0, MR_tempr1, 7);
	MR_r9 = (MR_Integer) 0;
	}
MR_def_label(fn__time__mktime_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Yr;
	MR_Integer	Mnt;
	MR_Integer	MD;
	MR_Integer	Hrs;
	MR_Integer	Min;
	MR_Integer	Sec;
	MR_Integer	YD;
	MR_Integer	WD;
	MR_Integer	N;
	time_t	Time;
#define	MR_PROC_LABEL	mercury__fn__time__mktime_1_0
	Yr = MR_r1;
	Mnt = MR_r2;
	MD = MR_r3;
	Hrs = MR_r4;
	Min = MR_r5;
	Sec = MR_r6;
	YD = MR_r7;
	WD = MR_r8;
	N = MR_r9;
	MR_OBTAIN_GLOBAL_LOCK("c_mktime");
{
#line 783 "time.m"
{
    struct tm t;

    t.tm_sec = Sec;
    t.tm_min = Min;
    t.tm_hour = Hrs;
    t.tm_mon = Mnt;
    t.tm_year = Yr;
    t.tm_wday = WD;
    t.tm_mday = MD;
    t.tm_yday = YD;
    t.tm_isdst = N;

    Time = mktime(&t);
};}
#line 1652 "time.c"
	MR_RELEASE_GLOBAL_LOCK("c_mktime");
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(time_module20)
	MR_init_entry1(fn__time__asctime_1_0);
	MR_init_label4(fn__time__asctime_1_0,2,6,7,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__asctime_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_r3 = MR_ctfield(0, MR_tempr3, 5);
	MR_r4 = MR_ctfield(0, MR_tempr3, 4);
	MR_r5 = MR_ctfield(0, MR_tempr3, 3);
	MR_r6 = MR_ctfield(0, MR_tempr3, 2);
	MR_r7 = MR_ctfield(0, MR_tempr3, 1);
	MR_r8 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 7);
	MR_r9 = MR_tempr1;
	if (!(((MR_Unsigned) MR_tempr1 <= 6))) {
		MR_GOTO_LAB(fn__time__asctime_1_0_i2);
	}
	MR_r10 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) MR_tempr1);
	MR_r1 = MR_r8;
	MR_r2 = MR_r7;
	MR_r11 = MR_r3;
	MR_r3 = MR_r6;
	MR_r12 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r12;
	MR_r6 = MR_r11;
	MR_r7 = MR_ctfield(0, MR_r10, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_r8 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_r7;
	MR_r7 = MR_tempr2;
	MR_GOTO_LAB(fn__time__asctime_1_0_i6);
	}
MR_def_label(fn__time__asctime_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("time: wday_name", 15);
	MR_np_call_localret_ent(require__error_1_0,
		fn__time__asctime_1_0_i6);
MR_def_label(fn__time__asctime_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) MR_r2 <= 11))) {
		MR_GOTO_LAB(fn__time__asctime_1_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr10 = MR_r2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_1, (MR_Integer) MR_tempr10);
	MR_tempr2 = MR_tempr10;
	MR_r2 = MR_r3;
	MR_tempr3 = MR_r4;
	MR_tempr4 = MR_r5;
	MR_tempr5 = MR_r6;
	MR_tempr6 = MR_r7;
	MR_tempr7 = MR_ctfield(0, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr7, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = ((MR_Integer) 1900 + (MR_Integer) MR_r1);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%.3s %.3s%3d %.2d:%.2d:%.2d %d\n", 31);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__time__asctime_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("time: mon_name", 14);
	MR_np_call_localret_ent(require__error_1_0,
		fn__time__asctime_1_0_i23);
MR_def_label(fn__time__asctime_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__format_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module21)
	MR_init_entry1(fn__time__ctime_1_0);
	MR_init_label1(fn__time__ctime_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__ctime_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
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
#define	MR_PROC_LABEL	mercury__fn__time__ctime_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, Time);
	MR_OBTAIN_GLOBAL_LOCK("c_localtime");
{
#line 542 "time.m"

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
#line 1840 "time.c"
	MR_RELEASE_GLOBAL_LOCK("c_localtime");
	MR_tempr1 = Yr;
	MR_tempr2 = Mnt;
	MR_tempr3 = MD;
	MR_tempr4 = Hrs;
	MR_tempr5 = Min;
	MR_tempr6 = Sec;
	MR_tempr7 = YD;
	MR_tempr8 = WD;
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
	MR_sv(8) = MR_tempr8;
	}
	MR_np_call_localret_ent(fn__time__int_to_maybe_dst_1_0,
		fn__time__ctime_1_0_i2);
MR_def_label(fn__time__ctime_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__time__asctime_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;

MR_BEGIN_MODULE(time_module22)
	MR_init_entry1(time__compare_time_t_reps_3_0);
	MR_init_label2(time__compare_time_t_reps_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__time__compare_time_t_reps_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	time_t	T1;
	time_t	T0;
	MR_Float	Diff;
#define	MR_PROC_LABEL	mercury__time__compare_time_t_reps_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r1, T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, MR_r2, T0);
{
#line 503 "time.m"

    Diff = (MR_Float) difftime(T1, T0);
;}
#line 1914 "time.c"
	MR_r2 = MR_float_to_word(Diff);
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r2) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(time__compare_time_t_reps_3_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(time__compare_time_t_reps_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(time__compare_time_t_reps_3_0_i3);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(time__compare_time_t_reps_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module23)
	MR_init_entry1(fn__time__construct_time_t_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__time__construct_time_t_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module24)
	MR_init_entry1(__Unify___time__clock_t_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___time__clock_t_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module25)
	MR_init_entry1(__Compare___time__clock_t_0_0);
	MR_init_label2(__Compare___time__clock_t_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___time__clock_t_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___time__clock_t_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___time__clock_t_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___time__clock_t_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___time__clock_t_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module26)
	MR_init_entry1(__Unify___time__dst_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___time__dst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module27)
	MR_init_entry1(__Compare___time__dst_0_0);
	MR_init_label2(__Compare___time__dst_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___time__dst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___time__dst_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___time__dst_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___time__dst_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___time__dst_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module28)
	MR_init_entry1(__Unify___time__time_error_0_0);
	MR_init_label1(__Unify___time__time_error_0_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___time__time_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___time__time_error_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___time__time_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module29)
	MR_init_entry1(__Compare___time__time_error_0_0);
	MR_init_label3(__Compare___time__time_error_0_0,4,12,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___time__time_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___time__time_error_0_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___time__time_error_0_0
	S1 = (MR_String) MR_sv(1);
	S2 = (MR_String) MR_sv(2);
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 2130 "time.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___time__time_error_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___time__time_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___time__time_error_0_0_i5);
	}
MR_def_label(__Compare___time__time_error_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___time__time_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module30)
	MR_init_entry1(__Unify___time__time_t_0_0);
	MR_init_label3(__Unify___time__time_t_0_0,5,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___time__time_t_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___time__time_t_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if ((MR_tempr1 == MR_tempr2)) {
		MR_GOTO_LAB(__Unify___time__time_t_0_0_i8);
	}
	}
	MR_np_call_localret_ent(time__compare_time_t_reps_3_0,
		__Unify___time__time_t_0_0_i5);
MR_def_label(__Unify___time__time_t_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___time__time_t_0_0_i1);
	}
MR_def_label(__Unify___time__time_t_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___time__time_t_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module31)
	MR_init_entry1(__Compare___time__time_t_0_0);
	MR_init_label2(__Compare___time__time_t_0_0,9,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___time__time_t_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___time__time_t_0_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(__Compare___time__time_t_0_0_i4);
	}
MR_def_label(__Compare___time__time_t_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___time__time_t_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(time__compare_time_t_reps_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module32)
	MR_init_entry1(__Unify___time__time_t_rep_0_0);
	MR_init_label3(__Unify___time__time_t_rep_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___time__time_t_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___time__time_t_rep_0_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(time__compare_time_t_reps_3_0,
		__Unify___time__time_t_rep_0_0_i4);
MR_def_label(__Unify___time__time_t_rep_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___time__time_t_rep_0_0_i1);
	}
MR_def_label(__Unify___time__time_t_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___time__time_t_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module33)
	MR_init_entry1(__Compare___time__time_t_rep_0_0);
	MR_init_label2(__Compare___time__time_t_rep_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___time__time_t_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___time__time_t_rep_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___time__time_t_rep_0_0_i2);
MR_def_label(__Compare___time__time_t_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___time__time_t_rep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(time__compare_time_t_reps_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(time_module34)
	MR_init_entry1(__Unify___time__tm_0_0);
	MR_init_label2(__Unify___time__tm_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___time__tm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 4);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 5);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 5);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 6);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 6);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 7);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 7);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___time__tm_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(time, dst);
	MR_r2 = MR_ctfield(0, MR_tempr1, 8);
	MR_r3 = MR_ctfield(0, MR_tempr2, 8);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___time__tm_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___time__tm_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(time_module35)
	MR_init_entry1(__Compare___time__tm_0_0);
	MR_init_label8(__Compare___time__tm_0_0,3,2,6,7,9,14,15,17)
	MR_init_label8(__Compare___time__tm_0_0,22,23,25,30,31,33,38,39)
	MR_init_label8(__Compare___time__tm_0_0,41,46,47,49,54,55,57,62)
	MR_init_label3(__Compare___time__tm_0_0,63,65,157)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___time__tm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i2);
MR_def_label(__Compare___time__tm_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___time__tm_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i9);
	}
MR_def_label(__Compare___time__tm_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i9);
MR_def_label(__Compare___time__tm_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tm_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i157);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i17);
MR_def_label(__Compare___time__tm_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i17);
MR_def_label(__Compare___time__tm_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tm_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i157);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i25);
MR_def_label(__Compare___time__tm_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i25);
MR_def_label(__Compare___time__tm_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tm_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i157);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i33);
MR_def_label(__Compare___time__tm_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i33);
MR_def_label(__Compare___time__tm_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tm_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i157);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i41);
MR_def_label(__Compare___time__tm_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i41);
MR_def_label(__Compare___time__tm_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tm_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i157);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(13))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i49);
MR_def_label(__Compare___time__tm_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(13))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i49);
MR_def_label(__Compare___time__tm_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tm_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i157);
	}
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_sv(14))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i57);
MR_def_label(__Compare___time__tm_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i57);
MR_def_label(__Compare___time__tm_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tm_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i157);
	}
	if (((MR_Integer) MR_sv(7) >= (MR_Integer) MR_sv(15))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i62);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i65);
MR_def_label(__Compare___time__tm_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_sv(15))) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tm_0_0_i65);
MR_def_label(__Compare___time__tm_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tm_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tm_0_0_i157);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(time, dst);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___time__tm_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module36)
	MR_init_entry1(__Unify___time__tms_0_0);
	MR_init_label2(__Unify___time__tms_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___time__tms_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___time__tms_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___time__tms_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___time__tms_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___time__tms_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___time__tms_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___time__tms_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module37)
	MR_init_entry1(__Compare___time__tms_0_0);
	MR_init_label8(__Compare___time__tms_0_0,6,7,9,14,15,17,22,23)
	MR_init_label5(__Compare___time__tms_0_0,25,28,47,29,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___time__tms_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tms_0_0_i9);
	}
MR_def_label(__Compare___time__tms_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tms_0_0_i9);
MR_def_label(__Compare___time__tms_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tms_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i35);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tms_0_0_i17);
MR_def_label(__Compare___time__tms_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tms_0_0_i17);
MR_def_label(__Compare___time__tms_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tms_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i35);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___time__tms_0_0_i25);
MR_def_label(__Compare___time__tms_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___time__tms_0_0_i25);
MR_def_label(__Compare___time__tms_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tms_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i35);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___time__tms_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___time__tms_0_0_i29);
	}
MR_def_label(__Compare___time__tms_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___time__tms_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___time__tms_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(time_module38)
	MR_init_entry1(fn__f_116_105_109_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_105_109_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__fn__time__construct_time_t_1_0);

MR_Word
ML_construct_time_t(time_t Mercury__argument1);

MR_Word
ML_construct_time_t(time_t Mercury__argument1)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__time__construct_time_t_1_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Mercury__argument1, MR_r1);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__time__construct_time_t_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__time_maybe_bunch_0(void)
{
	time_module0();
	time_module1();
	time_module2();
	time_module3();
	time_module4();
	time_module5();
	time_module6();
	time_module7();
	time_module8();
	time_module9();
	time_module10();
	time_module11();
	time_module12();
	time_module13();
	time_module14();
	time_module15();
	time_module16();
	time_module17();
	time_module18();
	time_module19();
	time_module20();
	time_module21();
	time_module22();
	time_module23();
	time_module24();
	time_module25();
	time_module26();
	time_module27();
	time_module28();
	time_module29();
	time_module30();
	time_module31();
	time_module32();
	time_module33();
	time_module34();
	time_module35();
	time_module36();
	time_module37();
	time_module38();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__time__init(void);
void mercury__time__init_type_tables(void);
void mercury__time__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__time__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__time__init_complexity_procs(void);
#endif

void mercury__time__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__time_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_time__type_ctor_info_tms_0,
		time__tms_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_time__type_ctor_info_tm_0,
		time__tm_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_time__type_ctor_info_time_t_rep_0,
		time__time_t_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_time__type_ctor_info_time_t_0,
		time__time_t_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_time__type_ctor_info_time_error_0,
		time__time_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_time__type_ctor_info_dst_0,
		time__dst_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_time__type_ctor_info_clock_t_0,
		time__clock_t_0_0);
	mercury__time__init_debugger();
}

void mercury__time__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_time__type_ctor_info_tms_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_time__type_ctor_info_tm_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_time__type_ctor_info_time_t_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_time__type_ctor_info_time_t_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_time__type_ctor_info_time_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_time__type_ctor_info_dst_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_time__type_ctor_info_clock_t_0);
	}
}


void mercury__time__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__time__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__time);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__time__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
