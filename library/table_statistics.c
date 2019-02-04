/*
** Automatically generated from `table_statistics.m'
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
INIT mercury__table_statistics__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "table_statistics.c"
#include "table_statistics.mh"

#line 27 "table_statistics.c"
#line 534 "io.int"
#include "io.mh"

#line 31 "table_statistics.c"
#line 542 "io.int"
#include "string.mh"

#line 35 "table_statistics.c"
#line 218 "table_builtin.int"
#include "table_builtin.mh"

#line 39 "table_statistics.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 43 "table_statistics.c"
#line 28 "time.int2"
#include "time.mh"

#line 47 "table_statistics.c"
#line 31 "array.int2"
#include "array.mh"

#line 51 "table_statistics.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 55 "table_statistics.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 59 "table_statistics.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 63 "table_statistics.c"
#line 20 "store.opt"
#include "store.mh"

#line 67 "table_statistics.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 71 "table_statistics.c"
#line 4 "char.opt"
#include "char.mh"

#line 75 "table_statistics.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 79 "table_statistics.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 83 "table_statistics.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 87 "table_statistics.c"
#line 3 "float.opt"
#include "float.mh"

#line 91 "table_statistics.c"
#line 3 "math.opt"
#include "math.mh"

#line 95 "table_statistics.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "table_statistics.c"
#line 150 "io.opt"
#include "dir.mh"

#line 103 "table_statistics.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "table_statistics.c"
#line 108 "table_statistics.c"
#ifndef TABLE_STATISTICS_DECL_GUARD
#define TABLE_STATISTICS_DECL_GUARD

#line 112 "table_statistics.c"
#line 113 "table_statistics.c"

#endif
#line 116 "table_statistics.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_table_statistics__type_ctor_info_ml_table_stats_ptr_0,
	mercury_data_table_statistics__type_ctor_info_ml_table_step_desc_ptr_0,
	mercury_data_table_statistics__type_ctor_info_proc_table_statistics_0,
	mercury_data_table_statistics__type_ctor_info_table_stats_0,
	mercury_data_table_statistics__type_ctor_info_table_stats_curr_prev_0,
	mercury_data_table_statistics__type_ctor_info_table_step_kind_0,
	mercury_data_table_statistics__type_ctor_info_table_step_stat_details_0,
	mercury_data_table_statistics__type_ctor_info_table_step_stats_0;
MR_decl_label3(table_statistics__list__foldl2__ho8_6_0, 10,3,4)
MR_decl_label10(table_statistics__get_one_table_stats_step_loop_8_0, 393,3,6,4,22,20,45,43,68,66)
MR_decl_label4(table_statistics__get_one_table_stats_step_loop_8_0, 78,76,88,86)
MR_decl_label5(table_statistics__get_tabling_stats_4_0, 2,4,8,10,7)
MR_decl_label7(table_statistics__table_step_stats_detail_diff_3_0, 12,17,6,23,24,14,1)
MR_decl_label9(table_statistics__write_table_stats_3_0, 2,3,4,7,9,10,15,20,22)
MR_decl_label10(table_statistics__write_table_step_stats_4_0, 27,114,43,115,18,116,23,51,4,7)
MR_decl_label8(table_statistics__write_table_step_stats_4_0, 6,9,10,29,30,32,35,113)
MR_decl_label8(table_statistics__write_table_step_stats_du_6_0, 2,3,4,5,8,11,14,19)
MR_decl_label4(table_statistics__write_table_step_stats_enum_4_0, 2,3,6,9)
MR_decl_label10(table_statistics__write_table_step_stats_hash_11_0, 2,3,4,5,6,7,8,9,10,13)
MR_decl_label8(table_statistics__write_table_step_stats_hash_11_0, 16,19,22,25,28,31,35,39)
MR_decl_label10(table_statistics__write_table_step_stats_header_7_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label5(table_statistics__write_table_step_stats_header_7_0, 14,16,17,22,28)
MR_decl_label4(table_statistics__write_table_step_stats_start_4_0, 2,3,6,9)
MR_decl_label2(fn__table_statistics__percentage_str_2_0, 3,10)
MR_decl_label1(fn__table_statistics__table_stats_difference_2_0, 2)
MR_decl_label8(fn__table_statistics__table_step_stats_diff_2_0, 3,10,12,15,14,19,20,9)
MR_decl_label3(__Unify___table_statistics__proc_table_statistics_0_0, 4,8,1)
MR_decl_label2(__Unify___table_statistics__table_stats_0_0, 6,1)
MR_decl_label3(__Unify___table_statistics__table_stats_curr_prev_0_0, 4,8,1)
MR_decl_label8(__Unify___table_statistics__table_step_stat_details_0_0, 11,14,7,19,20,12,22,1)
MR_decl_label2(__Unify___table_statistics__table_step_stats_0_0, 6,1)
MR_decl_label4(__Compare___table_statistics__proc_table_statistics_0_0, 3,2,5,21)
MR_decl_label9(__Compare___table_statistics__table_stats_0_0, 3,2,6,7,9,14,15,17,49)
MR_decl_label4(__Compare___table_statistics__table_stats_curr_prev_0_0, 3,2,5,21)
MR_decl_label2(__Compare___table_statistics__table_step_kind_0_0, 2,3)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 266,277,278,424,431,434,435,437,440,448)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 449,149,152,155,156,158,161,173,174,454)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 183,184,186,191,192,194,199,200,202,207)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 208,210,215,216,218,223,224,226,231,232)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 234,239,240,242,245,264,455,147,10,11)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 13,18,19,21,26,27,29,34,35,37)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 42,43,45,50,51,53,58,59,61,66)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 67,69,74,75,77,82,83,85,90,91)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 93,98,99,101,106,107,109,114,115,117)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 120,691,280,422,552,286,289,290,292,297)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 298,300,305,306,308,313,314,316,321,322)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 324,329,330,332,337,338,340,345,346,348)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 353,354,356,361,362,364,369,370,372,377)
MR_decl_label10(__Compare___table_statistics__table_step_stat_details_0_0, 378,380,385,386,388,393,394,396,595,399)
MR_decl_label2(__Compare___table_statistics__table_step_stat_details_0_0, 596,457)
MR_decl_label10(__Compare___table_statistics__table_step_stats_0_0, 3,2,6,7,10,15,16,18,23,24)
MR_decl_label2(__Compare___table_statistics__table_step_stats_0_0, 26,68)
MR_decl_static(table_statistics__table_step_stats_detail_diff_3_0)
MR_def_extern_entry(fn__table_statistics__table_step_stats_diff_2_0)
MR_def_extern_entry(fn__table_statistics__table_stats_difference_2_0)
MR_decl_static(fn__table_statistics__percentage_str_2_0)
MR_def_extern_entry(table_statistics__write_table_stats_3_0)
MR_decl_static(table_statistics__get_proc_info_direct_fields_12_0)
MR_decl_static(table_statistics__get_one_table_overall_stats_5_0)
MR_decl_static(table_statistics__get_one_table_step_stat_details_26_0)
MR_decl_static(table_statistics__get_one_table_stats_step_loop_8_0)
MR_decl_static(table_statistics__copy_current_stats_to_prev_5_0)
MR_decl_static(table_statistics__get_tabling_stats_4_0)
MR_decl_static(table_statistics__write_table_step_stats_header_7_0)
MR_decl_static(table_statistics__write_table_step_stats_start_4_0)
MR_decl_static(table_statistics__write_table_step_stats_enum_4_0)
MR_decl_static(table_statistics__write_table_step_stats_hash_11_0)
MR_decl_static(table_statistics__write_table_step_stats_du_6_0)
MR_decl_static(table_statistics__write_table_step_stats_4_0)
MR_def_extern_entry(__Unify___table_statistics__ml_table_stats_ptr_0_0)
MR_def_extern_entry(__Compare___table_statistics__ml_table_stats_ptr_0_0)
MR_def_extern_entry(__Unify___table_statistics__ml_table_step_desc_ptr_0_0)
MR_def_extern_entry(__Compare___table_statistics__ml_table_step_desc_ptr_0_0)
MR_def_extern_entry(__Unify___table_statistics__proc_table_statistics_0_0)
MR_def_extern_entry(__Compare___table_statistics__proc_table_statistics_0_0)
MR_def_extern_entry(__Unify___table_statistics__table_stats_0_0)
MR_def_extern_entry(__Compare___table_statistics__table_stats_0_0)
MR_def_extern_entry(__Unify___table_statistics__table_stats_curr_prev_0_0)
MR_def_extern_entry(__Compare___table_statistics__table_stats_curr_prev_0_0)
MR_def_extern_entry(__Unify___table_statistics__table_step_kind_0_0)
MR_def_extern_entry(__Compare___table_statistics__table_step_kind_0_0)
MR_def_extern_entry(__Unify___table_statistics__table_step_stat_details_0_0)
MR_def_extern_entry(__Compare___table_statistics__table_step_stat_details_0_0)
MR_def_extern_entry(__Unify___table_statistics__table_step_stats_0_0)
MR_def_extern_entry(__Compare___table_statistics__table_step_stats_0_0)
MR_decl_static(table_statistics__list__foldl2__ho8_6_0)
MR_decl_static(fn__f_116_97_98_108_101_95_115_116_97_116_105_115_116_105_99_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(table_statistics, table_step_stats)
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_ml_table_stats_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_statistics__ml_table_stats_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_statistics__ml_table_stats_ptr_0_0)),
	"table_statistics",
	"ml_table_stats_ptr",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_ml_table_step_desc_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_statistics__ml_table_step_desc_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_statistics__ml_table_step_desc_ptr_0_0)),
	"table_statistics",
	"ml_table_step_desc_ptr",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_stats_curr_prev_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_table_statistics__type_ctor_info_table_stats_curr_prev_0
}};

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_proc_table_statistics_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_table_statistics__type_ctor_info_table_stats_curr_prev_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0
};

const MR_ConstString mercury_data_table_statistics__field_names_proc_table_statistics_0_0[] = {
	"call_table_stats",
	"maybe_answer_table_stats"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_proc_table_statistics_0_0 = {
	"proc_table_statistics",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_proc_table_statistics_0_0,
	mercury_data_table_statistics__field_names_proc_table_statistics_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_stag_ordered_proc_table_statistics_0_0[] = {
	&mercury_data_table_statistics__du_functor_desc_proc_table_statistics_0_0

};

const MR_DuPtagLayout mercury_data_table_statistics__du_ptag_ordered_proc_table_statistics_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_statistics__du_stag_ordered_proc_table_statistics_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_name_ordered_proc_table_statistics_0[] = {
	&mercury_data_table_statistics__du_functor_desc_proc_table_statistics_0_0
};

const MR_Integer mercury_data_table_statistics__functor_number_map_proc_table_statistics_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_proc_table_statistics_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_statistics__proc_table_statistics_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_statistics__proc_table_statistics_0_0)),
	"table_statistics",
	"proc_table_statistics",
	{ (void *)mercury_data_table_statistics__du_name_ordered_proc_table_statistics_0 },
	{ (void *)mercury_data_table_statistics__du_ptag_ordered_proc_table_statistics_0 },
	1,
	4,
	mercury_data_table_statistics__functor_number_map_proc_table_statistics_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_step_stats_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_table_statistics__type_ctor_info_table_step_stats_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_table_stats_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0
};

const MR_ConstString mercury_data_table_statistics__field_names_table_stats_0_0[] = {
	"num_lookups",
	"num_lookups_is_dupl",
	"step_statistics"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_stats_0_0 = {
	"table_stats",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_table_stats_0_0,
	mercury_data_table_statistics__field_names_table_stats_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_stag_ordered_table_stats_0_0[] = {
	&mercury_data_table_statistics__du_functor_desc_table_stats_0_0

};

const MR_DuPtagLayout mercury_data_table_statistics__du_ptag_ordered_table_stats_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_statistics__du_stag_ordered_table_stats_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_name_ordered_table_stats_0[] = {
	&mercury_data_table_statistics__du_functor_desc_table_stats_0_0
};

const MR_Integer mercury_data_table_statistics__functor_number_map_table_stats_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_stats_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_statistics__table_stats_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_statistics__table_stats_0_0)),
	"table_statistics",
	"table_stats",
	{ (void *)mercury_data_table_statistics__du_name_ordered_table_stats_0 },
	{ (void *)mercury_data_table_statistics__du_ptag_ordered_table_stats_0 },
	1,
	4,
	mercury_data_table_statistics__functor_number_map_table_stats_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_stats_0;

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_table_stats_curr_prev_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_table_statistics__type_ctor_info_table_stats_0,
	(MR_PseudoTypeInfo) &mercury_data_table_statistics__type_ctor_info_table_stats_0
};

const MR_ConstString mercury_data_table_statistics__field_names_table_stats_curr_prev_0_0[] = {
	"current_stats",
	"stats_at_last_call"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_stats_curr_prev_0_0 = {
	"table_stats_curr_prev",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_table_stats_curr_prev_0_0,
	mercury_data_table_statistics__field_names_table_stats_curr_prev_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_stag_ordered_table_stats_curr_prev_0_0[] = {
	&mercury_data_table_statistics__du_functor_desc_table_stats_curr_prev_0_0

};

const MR_DuPtagLayout mercury_data_table_statistics__du_ptag_ordered_table_stats_curr_prev_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_statistics__du_stag_ordered_table_stats_curr_prev_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_name_ordered_table_stats_curr_prev_0[] = {
	&mercury_data_table_statistics__du_functor_desc_table_stats_curr_prev_0_0
};

const MR_Integer mercury_data_table_statistics__functor_number_map_table_stats_curr_prev_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_stats_curr_prev_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_statistics__table_stats_curr_prev_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_statistics__table_stats_curr_prev_0_0)),
	"table_statistics",
	"table_stats_curr_prev",
	{ (void *)mercury_data_table_statistics__du_name_ordered_table_stats_curr_prev_0 },
	{ (void *)mercury_data_table_statistics__du_ptag_ordered_table_stats_curr_prev_0 },
	1,
	4,
	mercury_data_table_statistics__functor_number_map_table_stats_curr_prev_0
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_0 = {
	"table_step_dummy",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_1 = {
	"table_step_int",
	1
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_2 = {
	"table_step_char",
	2
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_3 = {
	"table_step_string",
	3
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_4 = {
	"table_step_float",
	4
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_5 = {
	"table_step_enum",
	5
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_6 = {
	"table_step_foreign_enum",
	6
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_7 = {
	"table_step_general",
	7
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_8 = {
	"table_step_general_addr",
	8
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_9 = {
	"table_step_general_poly",
	9
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_10 = {
	"table_step_general_poly_addr",
	10
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_11 = {
	"table_step_typeinfo",
	11
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_12 = {
	"table_step_typeclassinfo",
	12
};

static const MR_EnumFunctorDesc mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_13 = {
	"table_step_promise_implied",
	13
};

const MR_EnumFunctorDescPtr mercury_data_table_statistics__enum_value_ordered_table_step_kind_0[] = {
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_0,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_1,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_2,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_3,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_4,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_5,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_6,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_7,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_8,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_9,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_10,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_11,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_12,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_13
};

const MR_EnumFunctorDescPtr mercury_data_table_statistics__enum_name_ordered_table_step_kind_0[] = {
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_2,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_0,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_5,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_4,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_6,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_7,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_8,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_9,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_10,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_1,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_13,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_3,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_12,
	&mercury_data_table_statistics__enum_functor_desc_table_step_kind_0_11
};

const MR_Integer mercury_data_table_statistics__functor_number_map_table_step_kind_0[] = {
	1,
	9,
	0,
	11,
	3,
	2,
	4,
	5,
	6,
	7,
	8,
	13,
	12,
	10 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_step_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_statistics__table_step_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_statistics__table_step_kind_0_0)),
	"table_statistics",
	"table_step_kind",
	{ (void *)mercury_data_table_statistics__enum_name_ordered_table_step_kind_0 },
	{ (void *)mercury_data_table_statistics__enum_value_ordered_table_step_kind_0 },
	14,
	4,
	mercury_data_table_statistics__functor_number_map_table_step_kind_0
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_0 = {
	"step_stats_none",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_table_step_stat_details_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_table_statistics__field_names_table_step_stat_details_0_1[] = {
	"start_num_node_allocs",
	"start_num_node_bytes"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_1 = {
	"step_stats_start",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_table_step_stat_details_0_1,
	mercury_data_table_statistics__field_names_table_step_stat_details_0_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_table_step_stat_details_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_table_statistics__field_names_table_step_stat_details_0_2[] = {
	"enum_num_node_allocs",
	"enum_num_node_bytes"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_2 = {
	"step_stats_enum",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_table_step_stat_details_0_2,
	mercury_data_table_statistics__field_names_table_step_stat_details_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_table_step_stat_details_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_table_statistics__field_names_table_step_stat_details_0_3[] = {
	"hash_num_table_allocs",
	"hash_num_table_bytes",
	"hash_num_link_chunk_allocs",
	"hash_num_link_chunk_bytes",
	"hash_num_num_key_compares_not_dupl",
	"hash_num_num_key_compares_dupl",
	"hash_num_resizes",
	"hash_resizes_num_old_entries",
	"hash_resizes_num_new_entries"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_3 = {
	"step_stats_hash",
	9,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_table_step_stat_details_0_3,
	mercury_data_table_statistics__field_names_table_step_stat_details_0_3,
	NULL
};

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_table_step_stat_details_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_table_statistics__field_names_table_step_stat_details_0_4[] = {
	"du_num_node_allocs",
	"du_num_node_bytes",
	"du_num_arg_lookups",
	"du_num_exist_lookups",
	"du_enum_num_node_allocs",
	"du_enum_num_node_bytes",
	"du_hash_num_table_allocs",
	"du_hash_num_table_bytes",
	"du_hash_num_link_chunk_allocs",
	"du_hash_num_link_chunk_bytes",
	"du_hash_num_num_key_compares_not_dupl",
	"du_hash_num_num_key_compares_dupl",
	"du_hash_num_resizes",
	"du_hash_resizes_num_old_entries",
	"du_hash_resizes_num_new_entries"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_4 = {
	"step_stats_du",
	15,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_table_step_stat_details_0_4,
	mercury_data_table_statistics__field_names_table_step_stat_details_0_4,
	NULL
};

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_table_step_stat_details_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_table_statistics__field_names_table_step_stat_details_0_5[] = {
	"poly_du_num_node_allocs",
	"poly_du_num_node_bytes",
	"poly_du_num_arg_lookups",
	"poly_du_num_exist_lookups",
	"poly_enum_num_node_allocs",
	"poly_enum_num_node_bytes",
	"poly_hash_num_table_allocs",
	"poly_hash_num_table_bytes",
	"poly_hash_num_link_chunk_allocs",
	"poly_hash_num_link_chunk_bytes",
	"poly_hash_num_num_key_compares_not_dupl",
	"poly_hash_num_num_key_compares_dupl",
	"poly_hash_num_resizes",
	"poly_hash_resizes_num_old_entries",
	"poly_hash_resizes_num_new_entries"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_5 = {
	"step_stats_poly",
	15,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_table_step_stat_details_0_5,
	mercury_data_table_statistics__field_names_table_step_stat_details_0_5,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_stag_ordered_table_step_stat_details_0_0[] = {
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_0

};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_stag_ordered_table_step_stat_details_0_1[] = {
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_1

};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_stag_ordered_table_step_stat_details_0_2[] = {
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_2

};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_stag_ordered_table_step_stat_details_0_3[] = {
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_3,
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_4,
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_5

};

const MR_DuPtagLayout mercury_data_table_statistics__du_ptag_ordered_table_step_stat_details_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_table_statistics__du_stag_ordered_table_step_stat_details_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_statistics__du_stag_ordered_table_step_stat_details_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_statistics__du_stag_ordered_table_step_stat_details_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_table_statistics__du_stag_ordered_table_step_stat_details_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_name_ordered_table_step_stat_details_0[] = {
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_4,
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_2,
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_3,
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_0,
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_5,
	&mercury_data_table_statistics__du_functor_desc_table_step_stat_details_0_1
};

const MR_Integer mercury_data_table_statistics__functor_number_map_table_step_stat_details_0[] = {
	3,
	5,
	1,
	2,
	0,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_step_stat_details_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_statistics__table_step_stat_details_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_statistics__table_step_stat_details_0_0)),
	"table_statistics",
	"table_step_stat_details",
	{ (void *)mercury_data_table_statistics__du_name_ordered_table_step_stat_details_0 },
	{ (void *)mercury_data_table_statistics__du_ptag_ordered_table_step_stat_details_0 },
	6,
	4,
	mercury_data_table_statistics__functor_number_map_table_step_stat_details_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_step_stat_details_0;

const MR_PseudoTypeInfo mercury_data_table_statistics__field_types_table_step_stats_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_table_statistics__type_ctor_info_table_step_stat_details_0
};

const MR_ConstString mercury_data_table_statistics__field_names_table_step_stats_0_0[] = {
	"table_step_var_name",
	"table_step_num_lookups",
	"table_step_num_lookups_is_dupl",
	"table_step_detail"
};

static const MR_DuFunctorDesc mercury_data_table_statistics__du_functor_desc_table_step_stats_0_0 = {
	"table_step_stats",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_table_statistics__field_types_table_step_stats_0_0,
	mercury_data_table_statistics__field_names_table_step_stats_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_stag_ordered_table_step_stats_0_0[] = {
	&mercury_data_table_statistics__du_functor_desc_table_step_stats_0_0

};

const MR_DuPtagLayout mercury_data_table_statistics__du_ptag_ordered_table_step_stats_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_statistics__du_stag_ordered_table_step_stats_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_table_statistics__du_name_ordered_table_step_stats_0[] = {
	&mercury_data_table_statistics__du_functor_desc_table_step_stats_0_0
};

const MR_Integer mercury_data_table_statistics__functor_number_map_table_step_stats_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_statistics__type_ctor_info_table_step_stats_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_statistics__table_step_stats_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_statistics__table_step_stats_0_0)),
	"table_statistics",
	"table_step_stats",
	{ (void *)mercury_data_table_statistics__du_name_ordered_table_step_stats_0 },
	{ (void *)mercury_data_table_statistics__du_ptag_ordered_table_step_stats_0 },
	1,
	4,
	mercury_data_table_statistics__functor_number_map_table_step_stats_0
};




MR_BEGIN_MODULE(table_statistics_module0)
	MR_init_entry1(table_statistics__table_step_stats_detail_diff_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__table_step_stats_detail_diff_3_0);
	MR_init_label7(table_statistics__table_step_stats_detail_diff_3_0,12,17,6,23,24,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_step_stats_detail_diff'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__table_step_stats_detail_diff_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(table_statistics__table_step_stats_detail_diff_3_0_i12) MR_AND
		MR_LABEL_AP(table_statistics__table_step_stats_detail_diff_3_0_i17) MR_AND
		MR_LABEL_AP(table_statistics__table_step_stats_detail_diff_3_0_i6) MR_AND
		MR_LABEL_AP(table_statistics__table_step_stats_detail_diff_3_0_i23));
MR_def_label(table_statistics__table_step_stats_detail_diff_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(table_statistics__table_step_stats_detail_diff_3_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_statistics__table_step_stats_detail_diff_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(table_statistics__table_step_stats_detail_diff_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_tfield(1, MR_tempr2, 0) - (MR_Integer) MR_tfield(1, MR_tempr3, 0));
	MR_tfield(1, MR_tempr1, 1) = ((MR_Integer) MR_tfield(1, MR_tempr2, 1) - (MR_Integer) MR_tfield(1, MR_tempr3, 1));
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(table_statistics__table_step_stats_detail_diff_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(table_statistics__table_step_stats_detail_diff_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tempr3 = MR_r2;
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_tfield(2, MR_tempr2, 0) - (MR_Integer) MR_tfield(2, MR_tempr3, 0));
	MR_tfield(2, MR_tempr1, 1) = ((MR_Integer) MR_tfield(2, MR_tempr2, 1) - (MR_Integer) MR_tfield(2, MR_tempr3, 1));
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(table_statistics__table_step_stats_detail_diff_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(table_statistics__table_step_stats_detail_diff_3_0_i24);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(table_statistics__table_step_stats_detail_diff_3_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) - (MR_Integer) MR_tfield(3, MR_tempr3, 1));
	MR_tfield(3, MR_tempr1, 2) = ((MR_Integer) MR_tfield(3, MR_tempr2, 2) - (MR_Integer) MR_tfield(3, MR_tempr3, 2));
	MR_tfield(3, MR_tempr1, 3) = ((MR_Integer) MR_tfield(3, MR_tempr2, 3) - (MR_Integer) MR_tfield(3, MR_tempr3, 3));
	MR_tfield(3, MR_tempr1, 4) = ((MR_Integer) MR_tfield(3, MR_tempr2, 4) - (MR_Integer) MR_tfield(3, MR_tempr3, 4));
	MR_tfield(3, MR_tempr1, 5) = ((MR_Integer) MR_tfield(3, MR_tempr2, 5) - (MR_Integer) MR_tfield(3, MR_tempr3, 5));
	MR_tfield(3, MR_tempr1, 6) = ((MR_Integer) MR_tfield(3, MR_tempr2, 6) - (MR_Integer) MR_tfield(3, MR_tempr3, 6));
	MR_tfield(3, MR_tempr1, 7) = ((MR_Integer) MR_tfield(3, MR_tempr2, 7) - (MR_Integer) MR_tfield(3, MR_tempr3, 7));
	MR_tfield(3, MR_tempr1, 8) = ((MR_Integer) MR_tfield(3, MR_tempr2, 8) - (MR_Integer) MR_tfield(3, MR_tempr3, 8));
	MR_tfield(3, MR_tempr1, 9) = ((MR_Integer) MR_tfield(3, MR_tempr2, 9) - (MR_Integer) MR_tfield(3, MR_tempr3, 9));
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(table_statistics__table_step_stats_detail_diff_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(table_statistics__table_step_stats_detail_diff_3_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(table_statistics__table_step_stats_detail_diff_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 16);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tempr3 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) - (MR_Integer) MR_tfield(3, MR_tempr3, 1));
	MR_tfield(3, MR_tempr1, 2) = ((MR_Integer) MR_tfield(3, MR_tempr2, 2) - (MR_Integer) MR_tfield(3, MR_tempr3, 2));
	MR_tfield(3, MR_tempr1, 3) = ((MR_Integer) MR_tfield(3, MR_tempr2, 3) - (MR_Integer) MR_tfield(3, MR_tempr3, 3));
	MR_tfield(3, MR_tempr1, 4) = ((MR_Integer) MR_tfield(3, MR_tempr2, 4) - (MR_Integer) MR_tfield(3, MR_tempr3, 4));
	MR_tfield(3, MR_tempr1, 5) = ((MR_Integer) MR_tfield(3, MR_tempr2, 5) - (MR_Integer) MR_tfield(3, MR_tempr3, 5));
	MR_tfield(3, MR_tempr1, 6) = ((MR_Integer) MR_tfield(3, MR_tempr2, 6) - (MR_Integer) MR_tfield(3, MR_tempr3, 6));
	MR_tfield(3, MR_tempr1, 7) = ((MR_Integer) MR_tfield(3, MR_tempr2, 7) - (MR_Integer) MR_tfield(3, MR_tempr3, 7));
	MR_tfield(3, MR_tempr1, 8) = ((MR_Integer) MR_tfield(3, MR_tempr2, 8) - (MR_Integer) MR_tfield(3, MR_tempr3, 8));
	MR_tfield(3, MR_tempr1, 9) = ((MR_Integer) MR_tfield(3, MR_tempr2, 9) - (MR_Integer) MR_tfield(3, MR_tempr3, 9));
	MR_tfield(3, MR_tempr1, 10) = ((MR_Integer) MR_tfield(3, MR_tempr2, 10) - (MR_Integer) MR_tfield(3, MR_tempr3, 10));
	MR_tfield(3, MR_tempr1, 11) = ((MR_Integer) MR_tfield(3, MR_tempr2, 11) - (MR_Integer) MR_tfield(3, MR_tempr3, 11));
	MR_tfield(3, MR_tempr1, 12) = ((MR_Integer) MR_tfield(3, MR_tempr2, 12) - (MR_Integer) MR_tfield(3, MR_tempr3, 12));
	MR_tfield(3, MR_tempr1, 13) = ((MR_Integer) MR_tfield(3, MR_tempr2, 13) - (MR_Integer) MR_tfield(3, MR_tempr3, 13));
	MR_tfield(3, MR_tempr1, 14) = ((MR_Integer) MR_tfield(3, MR_tempr2, 14) - (MR_Integer) MR_tfield(3, MR_tempr3, 14));
	MR_tfield(3, MR_tempr1, 15) = ((MR_Integer) MR_tfield(3, MR_tempr2, 15) - (MR_Integer) MR_tfield(3, MR_tempr3, 15));
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(table_statistics__table_step_stats_detail_diff_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(table_statistics__table_step_stats_detail_diff_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 16);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tempr3 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) - (MR_Integer) MR_tfield(3, MR_tempr3, 1));
	MR_tfield(3, MR_tempr1, 2) = ((MR_Integer) MR_tfield(3, MR_tempr2, 2) - (MR_Integer) MR_tfield(3, MR_tempr3, 2));
	MR_tfield(3, MR_tempr1, 3) = ((MR_Integer) MR_tfield(3, MR_tempr2, 3) - (MR_Integer) MR_tfield(3, MR_tempr3, 3));
	MR_tfield(3, MR_tempr1, 4) = ((MR_Integer) MR_tfield(3, MR_tempr2, 4) - (MR_Integer) MR_tfield(3, MR_tempr3, 4));
	MR_tfield(3, MR_tempr1, 5) = ((MR_Integer) MR_tfield(3, MR_tempr2, 5) - (MR_Integer) MR_tfield(3, MR_tempr3, 5));
	MR_tfield(3, MR_tempr1, 6) = ((MR_Integer) MR_tfield(3, MR_tempr2, 6) - (MR_Integer) MR_tfield(3, MR_tempr3, 6));
	MR_tfield(3, MR_tempr1, 7) = ((MR_Integer) MR_tfield(3, MR_tempr2, 7) - (MR_Integer) MR_tfield(3, MR_tempr3, 7));
	MR_tfield(3, MR_tempr1, 8) = ((MR_Integer) MR_tfield(3, MR_tempr2, 8) - (MR_Integer) MR_tfield(3, MR_tempr3, 8));
	MR_tfield(3, MR_tempr1, 9) = ((MR_Integer) MR_tfield(3, MR_tempr2, 9) - (MR_Integer) MR_tfield(3, MR_tempr3, 9));
	MR_tfield(3, MR_tempr1, 10) = ((MR_Integer) MR_tfield(3, MR_tempr2, 10) - (MR_Integer) MR_tfield(3, MR_tempr3, 10));
	MR_tfield(3, MR_tempr1, 11) = ((MR_Integer) MR_tfield(3, MR_tempr2, 11) - (MR_Integer) MR_tfield(3, MR_tempr3, 11));
	MR_tfield(3, MR_tempr1, 12) = ((MR_Integer) MR_tfield(3, MR_tempr2, 12) - (MR_Integer) MR_tfield(3, MR_tempr3, 12));
	MR_tfield(3, MR_tempr1, 13) = ((MR_Integer) MR_tfield(3, MR_tempr2, 13) - (MR_Integer) MR_tfield(3, MR_tempr3, 13));
	MR_tfield(3, MR_tempr1, 14) = ((MR_Integer) MR_tfield(3, MR_tempr2, 14) - (MR_Integer) MR_tfield(3, MR_tempr3, 14));
	MR_tfield(3, MR_tempr1, 15) = ((MR_Integer) MR_tfield(3, MR_tempr2, 15) - (MR_Integer) MR_tfield(3, MR_tempr3, 15));
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(table_statistics__table_step_stats_detail_diff_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(table_statistics_module1)
	MR_init_entry1(fn__table_statistics__table_step_stats_diff_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__table_statistics__table_step_stats_diff_2_0);
	MR_init_label8(fn__table_statistics__table_step_stats_diff_2_0,3,10,12,15,14,19,20,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_step_stats_diff'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__table_statistics__table_step_stats_diff_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__table_statistics__table_step_stats_diff_2_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__table_statistics__table_step_stats_diff_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__table_statistics__table_step_stats_diff_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__table_statistics__table_step_stats_diff_2_0_i9);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr6, 1);
	MR_tempr7 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_tfield(1, MR_tempr6, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr3, 3);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr7, 1);
	MR_tempr5 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_tempr5) != 0)) {
		MR_GOTO_LAB(fn__table_statistics__table_step_stats_diff_2_0_i10);
	}
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr2;
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr3, 1) - (MR_Integer) MR_tfield(0, MR_tempr1, 1));
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_tempr3, 2) - (MR_Integer) MR_tfield(0, MR_tempr1, 2));
	}
	MR_np_call_localret_ent(table_statistics__table_step_stats_detail_diff_3_0,
		fn__table_statistics__table_step_stats_diff_2_0_i15);
MR_def_label(fn__table_statistics__table_step_stats_diff_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("table_step_stats_diff: mismatches in variable name", 50);
	MR_np_call_localret_ent(require__error_1_0,
		fn__table_statistics__table_step_stats_diff_2_0_i12);
MR_def_label(fn__table_statistics__table_step_stats_diff_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(table_statistics__table_step_stats_detail_diff_3_0,
		fn__table_statistics__table_step_stats_diff_2_0_i15);
MR_def_label(fn__table_statistics__table_step_stats_diff_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__table_statistics__table_step_stats_diff_2_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_localcall_lab(fn__table_statistics__table_step_stats_diff_2_0,
		fn__table_statistics__table_step_stats_diff_2_0_i20);
MR_def_label(fn__table_statistics__table_step_stats_diff_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("table_step_stats_diff: mismatches in details", 44);
	MR_np_call_localret_ent(require__error_1_0,
		fn__table_statistics__table_step_stats_diff_2_0_i19);
MR_def_label(fn__table_statistics__table_step_stats_diff_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(fn__table_statistics__table_step_stats_diff_2_0,
		fn__table_statistics__table_step_stats_diff_2_0_i20);
MR_def_label(fn__table_statistics__table_step_stats_diff_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__table_statistics__table_step_stats_diff_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("mismatched table stats", 22);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module2)
	MR_init_entry1(fn__table_statistics__table_stats_difference_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__table_statistics__table_stats_difference_2_0);
	MR_init_label1(fn__table_statistics__table_stats_difference_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_stats_difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__table_statistics__table_stats_difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) - (MR_Integer) MR_tfield(0, MR_tempr2, 0));
	MR_sv(2) = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) - (MR_Integer) MR_tfield(0, MR_tempr2, 1));
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(fn__table_statistics__table_step_stats_diff_2_0,
		fn__table_statistics__table_stats_difference_2_0_i2);
MR_def_label(fn__table_statistics__table_stats_difference_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
extern const MR_TypeCtorInfo_Struct mercury_data_math__type_ctor_info_domain_error_0;
MR_decl_entry(exception__throw_1_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(table_statistics_module3)
	MR_init_entry1(fn__table_statistics__percentage_str_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__table_statistics__percentage_str_2_0);
	MR_init_label2(fn__table_statistics__percentage_str_2_0,3,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'percentage_str'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__table_statistics__percentage_str_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__table_statistics__percentage_str_2_0
	IntVal = (MR_Integer) 100;
{
#line 64 "float.opt"

	FloatVal = IntVal;
;}
#line 1263 "table_statistics.c"
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__table_statistics__percentage_str_2_0
	IntVal = MR_r1;
{
#line 64 "float.opt"

	FloatVal = IntVal;
;}
#line 1277 "table_statistics.c"
	MR_tempr2 = MR_float_to_word(FloatVal);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__table_statistics__percentage_str_2_0
	IntVal = MR_r2;
{
#line 64 "float.opt"

	FloatVal = IntVal;
;}
#line 1291 "table_statistics.c"
	MR_r5 = MR_float_to_word(FloatVal);
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_tempr1) * MR_word_to_float(MR_tempr2)));
	{
#define	MR_PROC_LABEL	mercury__fn__table_statistics__percentage_str_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 134 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1310 "table_statistics.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__table_statistics__percentage_str_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r5) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__table_statistics__percentage_str_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float.\'/\': division by zero", 27);
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__table_statistics__percentage_str_2_0_i10);
MR_def_label(fn__table_statistics__percentage_str_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_float_to_word((MR_word_to_float(MR_sv(1)) / MR_word_to_float(MR_r5)));
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("(%.2f%%)", 8);
	}
MR_def_label(fn__table_statistics__percentage_str_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__format_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_base_string_group_4_0);
MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(table_statistics_module4)
	MR_init_entry1(table_statistics__write_table_stats_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__write_table_stats_3_0);
	MR_init_label9(table_statistics__write_table_stats_3_0,2,3,4,7,9,10,15,20,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_stats'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_statistics__write_table_stats_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(2));
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_stats_3_0_i2);
MR_def_label(table_statistics__write_table_stats_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_stats_3_0_i3);
MR_def_label(table_statistics__write_table_stats_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_stats_3_0_i4);
MR_def_label(table_statistics__write_table_stats_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_stats_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1411 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 1421 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("number of lookups:                            %9s\n", 50);
	}
	MR_np_call_localret_ent(string__format_3_0,
		table_statistics__write_table_stats_3_0_i7);
MR_def_label(table_statistics__write_table_stats_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_stats_3_0
	Stream = (MercuryFilePtr) MR_sv(7);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1328 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 1449 "table_statistics.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(table_statistics__write_table_stats_3_0_i22);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__table_statistics__percentage_str_2_0,
		table_statistics__write_table_stats_3_0_i9);
MR_def_label(table_statistics__write_table_stats_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__table_statistics__percentage_str_2_0,
		table_statistics__write_table_stats_3_0_i10);
MR_def_label(table_statistics__write_table_stats_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("number of successful lookups (old calls):     %9s %9s\n", 54);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_stats_3_0_i15);
MR_def_label(table_statistics__write_table_stats_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("number of unsuccessful lookups (new calls):   %9s %9s\n", 54);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_stats_3_0_i20);
MR_def_label(table_statistics__write_table_stats_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_stats_3_0
	Message = (MR_String) (MR_Word) MR_string_const("statistics for the individual steps:\n", 37);
	MR_save_registers();
{
#line 535 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 1529 "table_statistics.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(table_statistics__list__foldl2__ho8_6_0);
	}
MR_def_label(table_statistics__write_table_stats_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module5)
	MR_init_entry1(table_statistics__get_proc_info_direct_fields_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__get_proc_info_direct_fields_12_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_proc_info_direct_fields'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__get_proc_info_direct_fields_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	Info;
	MR_Integer	HasAnswerTable;
	MR_Integer	NumInputs;
	MR_Integer	NumOutputs;
	const MR_TableStepDesc *	InputStepDescsPtr;
	const MR_TableStepDesc *	OutputStepDescsPtr;
	MR_TableStats *	CurCallStatsPtr;
	MR_TableStats *	PrevCallStatsPtr;
	MR_TableStats *	CurAnswerStatsPtr;
	MR_TableStats *	PrevAnswerStatsPtr;
#define	MR_PROC_LABEL	mercury__table_statistics__get_proc_info_direct_fields_12_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_proc_info_direct_fields");
{
#line 211 "table_statistics.m"

    HasAnswerTable = ( Info->MR_pt_has_answer_table ? 1 : 0 );
    NumInputs = Info->MR_pt_num_inputs;
    NumOutputs = Info->MR_pt_num_outputs;
    InputStepDescsPtr = Info->MR_pt_steps_desc[MR_TABLE_CALL_TABLE];
    OutputStepDescsPtr = Info->MR_pt_steps_desc[MR_TABLE_ANSWER_TABLE];
    CurCallStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_CALL_TABLE][MR_TABLE_STATS_CURR]);
    PrevCallStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_CALL_TABLE][MR_TABLE_STATS_PREV]);
    CurAnswerStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_CURR]);
    PrevAnswerStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_PREV]);
;}
#line 1595 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_proc_info_direct_fields");
	MR_r1 = HasAnswerTable;
	MR_r2 = NumInputs;
	MR_r3 = NumOutputs;
	MR_r4 = (MR_Word) InputStepDescsPtr;
	MR_r5 = (MR_Word) OutputStepDescsPtr;
	MR_r6 = (MR_Word) CurCallStatsPtr;
	MR_r7 = (MR_Word) PrevCallStatsPtr;
	MR_r8 = (MR_Word) CurAnswerStatsPtr;
	MR_r9 = (MR_Word) PrevAnswerStatsPtr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module6)
	MR_init_entry1(table_statistics__get_one_table_overall_stats_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__get_one_table_overall_stats_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_one_table_overall_stats'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__get_one_table_overall_stats_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TableStats *	StatsPtr;
	MR_Integer	NumLookups;
	MR_Integer	NumLookupsIsDupl;
#define	MR_PROC_LABEL	mercury__table_statistics__get_one_table_overall_stats_5_0
	StatsPtr = (MR_TableStats *) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_one_table_overall_stats");
{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;
;}
#line 1642 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_one_table_overall_stats");
	MR_r1 = NumLookups;
	MR_r2 = NumLookupsIsDupl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module7)
	MR_init_entry1(table_statistics__get_one_table_step_stat_details_26_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__get_one_table_step_stat_details_26_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_one_table_step_stat_details'/26 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__get_one_table_step_stat_details_26_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_TableStepDesc *	StepDescsPtr;
	MR_TableStats *	StatsStructPtr;
	MR_Integer	StepNum;
	MR_String	VarName;
	MR_Integer	NumLookups;
	MR_Integer	NumLookupsIsDupl;
	MR_Integer	KindInt;
	MR_Integer	HashTableAllocs;
	MR_Integer	HashTableBytes;
	MR_Integer	HashLinkChunkAllocs;
	MR_Integer	HashLinkChunkBytes;
	MR_Integer	HashKeyComparesNotDupl;
	MR_Integer	HashKeyComparesIsDupl;
	MR_Integer	HashResizes;
	MR_Integer	HashResizeOldEntries;
	MR_Integer	HashResizeNewEntries;
	MR_Integer	EnumNodeAllocs;
	MR_Integer	EnumNodeBytes;
	MR_Integer	DuNodeAllocs;
	MR_Integer	DuNodeBytes;
	MR_Integer	DuArgLookups;
	MR_Integer	DuExistLookups;
	MR_Integer	StartAllocs;
	MR_Integer	StartBytes;
#define	MR_PROC_LABEL	mercury__table_statistics__get_one_table_step_stat_details_26_0
	StepDescsPtr = (const MR_TableStepDesc *) MR_r1;
	StatsStructPtr = (MR_TableStats *) MR_r2;
	StepNum = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_one_table_step_stat_details");
{
#line 419 "table_statistics.m"

    const MR_TableStepStats *ptr;

    ptr = &(StatsStructPtr->MR_ts_steps[StepNum]);

    /* The casts are to discard const. */
    VarName = (MR_String) (MR_Integer) StepDescsPtr[StepNum].MR_tsd_var_name;

    NumLookups =                ptr->MR_tss_num_lookups;
    NumLookupsIsDupl =          ptr->MR_tss_num_lookups_is_dupl;

    KindInt = (MR_Integer)      ptr->MR_tss_detail_kind;

    HashTableAllocs =           ptr->MR_tss_hash_num_table_allocs;
    HashTableBytes =            ptr->MR_tss_hash_num_table_alloc_bytes;
    HashLinkChunkAllocs =       ptr->MR_tss_hash_num_link_chunk_allocs;
    HashLinkChunkBytes =        ptr->MR_tss_hash_num_link_chunk_alloc_bytes;
    HashKeyComparesNotDupl =    ptr->MR_tss_hash_num_key_compares_not_dupl;
    HashKeyComparesIsDupl =     ptr->MR_tss_hash_num_key_compares_dupl;
    HashResizes =               ptr->MR_tss_hash_num_resizes;
    HashResizeOldEntries =      ptr->MR_tss_hash_resize_old_entries;
    HashResizeNewEntries =      ptr->MR_tss_hash_resize_new_entries;

    EnumNodeAllocs =            ptr->MR_tss_enum_num_node_allocs;
    EnumNodeBytes =             ptr->MR_tss_enum_num_node_alloc_bytes;

    DuNodeAllocs =              ptr->MR_tss_du_num_node_allocs;
    DuNodeBytes =               ptr->MR_tss_du_num_node_alloc_bytes;
    DuArgLookups =              ptr->MR_tss_du_num_arg_lookups;
    DuExistLookups =            ptr->MR_tss_du_num_exist_lookups;

    StartAllocs =               ptr->MR_tss_start_num_allocs;
    StartBytes =                ptr->MR_tss_start_num_alloc_bytes;
;}
#line 1735 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_one_table_step_stat_details");
	MR_r1 = (MR_Word) VarName;
	MR_r2 = NumLookups;
	MR_r3 = NumLookupsIsDupl;
	MR_r4 = KindInt;
	MR_r5 = HashTableAllocs;
	MR_r6 = HashTableBytes;
	MR_r7 = HashLinkChunkAllocs;
	MR_r8 = HashLinkChunkBytes;
	MR_r9 = HashKeyComparesNotDupl;
	MR_r10 = HashKeyComparesIsDupl;
	MR_r11 = HashResizes;
	MR_r12 = HashResizeOldEntries;
	MR_r13 = HashResizeNewEntries;
	MR_r14 = EnumNodeAllocs;
	MR_r15 = EnumNodeBytes;
	MR_r16 = DuNodeAllocs;
	MR_r17 = DuNodeBytes;
	MR_r18 = DuArgLookups;
	MR_r19 = DuExistLookups;
	MR_r20 = StartAllocs;
	MR_r21 = StartBytes;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module8)
	MR_init_entry1(table_statistics__get_one_table_stats_step_loop_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__get_one_table_stats_step_loop_8_0);
	MR_init_label10(table_statistics__get_one_table_stats_step_loop_8_0,393,3,6,4,22,20,45,43,68,66)
	MR_init_label4(table_statistics__get_one_table_stats_step_loop_8_0,78,76,88,86)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_one_table_stats_step_loop'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__get_one_table_stats_step_loop_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i393);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_np_localcall_lab(table_statistics__get_one_table_stats_step_loop_8_0,
		table_statistics__get_one_table_stats_step_loop_8_0_i3);
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_TableStepDesc *	StepDescsPtr;
	MR_TableStats *	StatsStructPtr;
	MR_Integer	StepNum;
	MR_String	VarName;
	MR_Integer	NumLookups;
	MR_Integer	NumLookupsIsDupl;
	MR_Integer	KindInt;
	MR_Integer	HashTableAllocs;
	MR_Integer	HashTableBytes;
	MR_Integer	HashLinkChunkAllocs;
	MR_Integer	HashLinkChunkBytes;
	MR_Integer	HashKeyComparesNotDupl;
	MR_Integer	HashKeyComparesIsDupl;
	MR_Integer	HashResizes;
	MR_Integer	HashResizeOldEntries;
	MR_Integer	HashResizeNewEntries;
	MR_Integer	EnumNodeAllocs;
	MR_Integer	EnumNodeBytes;
	MR_Integer	DuNodeAllocs;
	MR_Integer	DuNodeBytes;
	MR_Integer	DuArgLookups;
	MR_Integer	DuExistLookups;
	MR_Integer	StartAllocs;
	MR_Integer	StartBytes;
#define	MR_PROC_LABEL	mercury__table_statistics__get_one_table_stats_step_loop_8_0
	StepDescsPtr = (const MR_TableStepDesc *) MR_sv(1);
	StatsStructPtr = (MR_TableStats *) MR_sv(2);
	StepNum = MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("get_one_table_step_stat_details");
{
#line 419 "table_statistics.m"

    const MR_TableStepStats *ptr;

    ptr = &(StatsStructPtr->MR_ts_steps[StepNum]);

    /* The casts are to discard const. */
    VarName = (MR_String) (MR_Integer) StepDescsPtr[StepNum].MR_tsd_var_name;

    NumLookups =                ptr->MR_tss_num_lookups;
    NumLookupsIsDupl =          ptr->MR_tss_num_lookups_is_dupl;

    KindInt = (MR_Integer)      ptr->MR_tss_detail_kind;

    HashTableAllocs =           ptr->MR_tss_hash_num_table_allocs;
    HashTableBytes =            ptr->MR_tss_hash_num_table_alloc_bytes;
    HashLinkChunkAllocs =       ptr->MR_tss_hash_num_link_chunk_allocs;
    HashLinkChunkBytes =        ptr->MR_tss_hash_num_link_chunk_alloc_bytes;
    HashKeyComparesNotDupl =    ptr->MR_tss_hash_num_key_compares_not_dupl;
    HashKeyComparesIsDupl =     ptr->MR_tss_hash_num_key_compares_dupl;
    HashResizes =               ptr->MR_tss_hash_num_resizes;
    HashResizeOldEntries =      ptr->MR_tss_hash_resize_old_entries;
    HashResizeNewEntries =      ptr->MR_tss_hash_resize_new_entries;

    EnumNodeAllocs =            ptr->MR_tss_enum_num_node_allocs;
    EnumNodeBytes =             ptr->MR_tss_enum_num_node_alloc_bytes;

    DuNodeAllocs =              ptr->MR_tss_du_num_node_allocs;
    DuNodeBytes =               ptr->MR_tss_du_num_node_alloc_bytes;
    DuArgLookups =              ptr->MR_tss_du_num_arg_lookups;
    DuExistLookups =            ptr->MR_tss_du_num_exist_lookups;

    StartAllocs =               ptr->MR_tss_start_num_allocs;
    StartBytes =                ptr->MR_tss_start_num_alloc_bytes;
;}
#line 1866 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_one_table_step_stat_details");
	MR_r3 = (MR_Word) VarName;
	MR_r4 = NumLookups;
	MR_r5 = NumLookupsIsDupl;
	MR_r6 = KindInt;
	MR_r7 = HashTableAllocs;
	MR_r8 = HashTableBytes;
	MR_r9 = HashLinkChunkAllocs;
	MR_r10 = HashLinkChunkBytes;
	MR_r11 = HashKeyComparesNotDupl;
	MR_r12 = HashKeyComparesIsDupl;
	MR_r13 = HashResizes;
	MR_r14 = HashResizeOldEntries;
	MR_r15 = HashResizeNewEntries;
	MR_r16 = EnumNodeAllocs;
	MR_r17 = EnumNodeBytes;
	MR_r18 = DuNodeAllocs;
	MR_r19 = DuNodeBytes;
	MR_r20 = DuArgLookups;
	MR_r21 = DuExistLookups;
	MR_r22 = StartAllocs;
	MR_r23 = StartBytes;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i4);
	}
	if (MR_INT_NE(MR_r16,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i6);
	}
	if (MR_INT_NE(MR_r17,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i6);
	}
	if (MR_INT_NE(MR_r18,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i6);
	}
	if (MR_INT_NE(MR_r19,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i6);
	}
	if (MR_INT_NE(MR_r20,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i6);
	}
	if (MR_INT_NE(MR_r21,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i6);
	}
	if (MR_INT_NE(MR_r22,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i6);
	}
	if (MR_INT_NE(MR_r23,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r7;
	MR_tfield(3, MR_tempr1, 2) = MR_r8;
	MR_tfield(3, MR_tempr1, 3) = MR_r9;
	MR_tfield(3, MR_tempr1, 4) = MR_r10;
	MR_tfield(3, MR_tempr1, 5) = MR_r11;
	MR_tfield(3, MR_tempr1, 6) = MR_r12;
	MR_tfield(3, MR_tempr1, 7) = MR_r13;
	MR_tfield(3, MR_tempr1, 8) = MR_r14;
	MR_tfield(3, MR_tempr1, 9) = MR_r15;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tfield(0, MR_tempr2, 2) = MR_r5;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_one_table_step_stat_details: extra counts for hash", 54);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i20);
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r10,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r11,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r12,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r13,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r14,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r15,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r18,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r19,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r20,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r21,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r22,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	if (MR_INT_NE(MR_r23,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r16;
	MR_tfield(2, MR_tempr1, 1) = MR_r17;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tfield(0, MR_tempr2, 2) = MR_r5;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_one_table_step_stat_details: extra counts for enum", 54);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i43);
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r10,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r11,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r12,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r13,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r14,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r15,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r16,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r17,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r18,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r19,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r20,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	if (MR_INT_NE(MR_r21,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r22;
	MR_tfield(1, MR_tempr1, 1) = MR_r23;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tfield(0, MR_tempr2, 2) = MR_r5;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_one_table_step_stat_details: extra counts for start", 55);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,3)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i66);
	}
	if (MR_INT_NE(MR_r22,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i68);
	}
	if (MR_INT_NE(MR_r23,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i68);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 16);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r18;
	MR_tfield(3, MR_tempr1, 2) = MR_r19;
	MR_tfield(3, MR_tempr1, 3) = MR_r20;
	MR_tfield(3, MR_tempr1, 4) = MR_r21;
	MR_tfield(3, MR_tempr1, 5) = MR_r16;
	MR_tfield(3, MR_tempr1, 6) = MR_r17;
	MR_tfield(3, MR_tempr1, 7) = MR_r7;
	MR_tfield(3, MR_tempr1, 8) = MR_r8;
	MR_tfield(3, MR_tempr1, 9) = MR_r9;
	MR_tfield(3, MR_tempr1, 10) = MR_r10;
	MR_tfield(3, MR_tempr1, 11) = MR_r11;
	MR_tfield(3, MR_tempr1, 12) = MR_r12;
	MR_tfield(3, MR_tempr1, 13) = MR_r13;
	MR_tfield(3, MR_tempr1, 14) = MR_r14;
	MR_tfield(3, MR_tempr1, 15) = MR_r15;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tfield(0, MR_tempr2, 2) = MR_r5;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_one_table_step_stat_details: extra counts for du", 52);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,4)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i76);
	}
	if (MR_INT_NE(MR_r22,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i78);
	}
	if (MR_INT_NE(MR_r23,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i78);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 16);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r18;
	MR_tfield(3, MR_tempr1, 2) = MR_r19;
	MR_tfield(3, MR_tempr1, 3) = MR_r20;
	MR_tfield(3, MR_tempr1, 4) = MR_r21;
	MR_tfield(3, MR_tempr1, 5) = MR_r16;
	MR_tfield(3, MR_tempr1, 6) = MR_r17;
	MR_tfield(3, MR_tempr1, 7) = MR_r7;
	MR_tfield(3, MR_tempr1, 8) = MR_r8;
	MR_tfield(3, MR_tempr1, 9) = MR_r9;
	MR_tfield(3, MR_tempr1, 10) = MR_r10;
	MR_tfield(3, MR_tempr1, 11) = MR_r11;
	MR_tfield(3, MR_tempr1, 12) = MR_r12;
	MR_tfield(3, MR_tempr1, 13) = MR_r13;
	MR_tfield(3, MR_tempr1, 14) = MR_r14;
	MR_tfield(3, MR_tempr1, 15) = MR_r15;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tfield(0, MR_tempr2, 2) = MR_r5;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_one_table_step_stat_details: extra counts for poly", 54);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,5)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i86);
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r11,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r12,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r13,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r14,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r15,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r16,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r17,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r18,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r19,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r20,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r21,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r22,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	if (MR_INT_NE(MR_r23,0)) {
		MR_GOTO_LAB(table_statistics__get_one_table_stats_step_loop_8_0_i88);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_one_table_step_stat_details: extra counts for none", 54);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(table_statistics__get_one_table_stats_step_loop_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_one_table_step_stat_details: unexpected detail kind", 55);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module9)
	MR_init_entry1(table_statistics__copy_current_stats_to_prev_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__copy_current_stats_to_prev_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_current_stats_to_prev'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__copy_current_stats_to_prev_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TableStats *	CurPtr;
	MR_TableStats *	PrevPtr;
	MR_Integer	NumSteps;
#define	MR_PROC_LABEL	mercury__table_statistics__copy_current_stats_to_prev_5_0
	CurPtr = (MR_TableStats *) MR_r1;
	PrevPtr = (MR_TableStats *) MR_r2;
	NumSteps = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("copy_current_stats_to_prev");
{
#line 461 "table_statistics.m"

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;
    int                 i;

    PrevPtr->MR_ts_num_lookups = CurPtr->MR_ts_num_lookups;
    PrevPtr->MR_ts_num_lookups_is_dupl = CurPtr->MR_ts_num_lookups_is_dupl;

    for (i = 0; i < NumSteps; i++) {
        cur = &(CurPtr->MR_ts_steps[i]);
        prev = &(PrevPtr->MR_ts_steps[i]);

        prev->MR_tss_num_lookups =
            cur->MR_tss_num_lookups;
        prev->MR_tss_num_lookups_is_dupl =
            cur->MR_tss_num_lookups_is_dupl;

        prev->MR_tss_hash_num_table_allocs =
            cur->MR_tss_hash_num_table_allocs;
        prev->MR_tss_hash_num_table_alloc_bytes =
            cur->MR_tss_hash_num_table_alloc_bytes;
        prev->MR_tss_hash_num_link_chunk_allocs =
            cur->MR_tss_hash_num_link_chunk_allocs;
        prev->MR_tss_hash_num_link_chunk_alloc_bytes =
            cur->MR_tss_hash_num_link_chunk_alloc_bytes;
        prev->MR_tss_hash_num_key_compares_not_dupl =
            cur->MR_tss_hash_num_key_compares_not_dupl;
        prev->MR_tss_hash_num_key_compares_dupl =
            cur->MR_tss_hash_num_key_compares_dupl;
        prev->MR_tss_hash_num_resizes =
            cur->MR_tss_hash_num_resizes;
        prev->MR_tss_hash_resize_old_entries =
            cur->MR_tss_hash_resize_old_entries;
        prev->MR_tss_hash_resize_new_entries =
            cur->MR_tss_hash_resize_new_entries;

        prev->MR_tss_enum_num_node_allocs =
            cur->MR_tss_enum_num_node_allocs;
        prev->MR_tss_enum_num_node_alloc_bytes =
            cur->MR_tss_enum_num_node_alloc_bytes;

        prev->MR_tss_du_num_node_allocs =
            cur->MR_tss_du_num_node_allocs;
        prev->MR_tss_du_num_node_alloc_bytes =
            cur->MR_tss_du_num_node_alloc_bytes;
        prev->MR_tss_du_num_arg_lookups =
            cur->MR_tss_du_num_arg_lookups;
        prev->MR_tss_du_num_exist_lookups =
            cur->MR_tss_du_num_exist_lookups;

        prev->MR_tss_start_num_allocs =
            cur->MR_tss_start_num_allocs;
        prev->MR_tss_start_num_alloc_bytes =
            cur->MR_tss_start_num_alloc_bytes;
    }
;}
#line 2351 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("copy_current_stats_to_prev");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module10)
	MR_init_entry1(table_statistics__get_tabling_stats_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__get_tabling_stats_4_0);
	MR_init_label5(table_statistics__get_tabling_stats_4_0,2,4,8,10,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_tabling_stats'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__get_tabling_stats_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	{
	MR_ProcTableInfoPtr	Info;
	MR_Integer	HasAnswerTable;
	MR_Integer	NumInputs;
	MR_Integer	NumOutputs;
	const MR_TableStepDesc *	InputStepDescsPtr;
	const MR_TableStepDesc *	OutputStepDescsPtr;
	MR_TableStats *	CurCallStatsPtr;
	MR_TableStats *	PrevCallStatsPtr;
	MR_TableStats *	CurAnswerStatsPtr;
	MR_TableStats *	PrevAnswerStatsPtr;
#define	MR_PROC_LABEL	mercury__table_statistics__get_tabling_stats_4_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_proc_info_direct_fields");
{
#line 211 "table_statistics.m"

    HasAnswerTable = ( Info->MR_pt_has_answer_table ? 1 : 0 );
    NumInputs = Info->MR_pt_num_inputs;
    NumOutputs = Info->MR_pt_num_outputs;
    InputStepDescsPtr = Info->MR_pt_steps_desc[MR_TABLE_CALL_TABLE];
    OutputStepDescsPtr = Info->MR_pt_steps_desc[MR_TABLE_ANSWER_TABLE];
    CurCallStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_CALL_TABLE][MR_TABLE_STATS_CURR]);
    PrevCallStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_CALL_TABLE][MR_TABLE_STATS_PREV]);
    CurAnswerStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_CURR]);
    PrevAnswerStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_PREV]);
;}
#line 2412 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_proc_info_direct_fields");
	MR_tempr1 = HasAnswerTable;
	MR_r4 = NumInputs;
	MR_tempr2 = NumOutputs;
	MR_r1 = (MR_Word) InputStepDescsPtr;
	MR_tempr3 = (MR_Word) OutputStepDescsPtr;
	MR_tempr4 = (MR_Word) CurCallStatsPtr;
	MR_tempr5 = (MR_Word) PrevCallStatsPtr;
	MR_tempr6 = (MR_Word) CurAnswerStatsPtr;
	MR_tempr7 = (MR_Word) PrevAnswerStatsPtr;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr4;
	{
	MR_TableStats *	StatsPtr;
	MR_Integer	NumLookups;
	MR_Integer	NumLookupsIsDupl;
#define	MR_PROC_LABEL	mercury__table_statistics__get_tabling_stats_4_0
	StatsPtr = (MR_TableStats *) MR_tempr4;
	MR_OBTAIN_GLOBAL_LOCK("get_one_table_overall_stats");
{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;
;}
#line 2439 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_one_table_overall_stats");
	MR_tempr8 = NumLookups;
	MR_tempr9 = NumLookupsIsDupl;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = MR_tempr5;
	MR_sv(8) = MR_tempr6;
	MR_sv(9) = MR_tempr7;
	MR_sv(10) = MR_tempr8;
	MR_sv(11) = MR_tempr9;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(table_statistics__get_one_table_stats_step_loop_8_0,
		table_statistics__get_tabling_stats_4_0_i2);
MR_def_label(table_statistics__get_tabling_stats_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	{
	MR_TableStats *	StatsPtr;
	MR_Integer	NumLookups;
	MR_Integer	NumLookupsIsDupl;
#define	MR_PROC_LABEL	mercury__table_statistics__get_tabling_stats_4_0
	StatsPtr = (MR_TableStats *) MR_sv(7);
	MR_OBTAIN_GLOBAL_LOCK("get_one_table_overall_stats");
{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;
;}
#line 2482 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_one_table_overall_stats");
	MR_tempr2 = NumLookups;
	MR_tempr3 = NumLookupsIsDupl;
#undef	MR_PROC_LABEL
	}
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(10) = MR_tempr2;
	MR_sv(11) = MR_tempr3;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(table_statistics__get_one_table_stats_step_loop_8_0,
		table_statistics__get_tabling_stats_4_0_i4);
MR_def_label(table_statistics__get_tabling_stats_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r8 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	{
	MR_TableStats *	CurPtr;
	MR_TableStats *	PrevPtr;
	MR_Integer	NumSteps;
#define	MR_PROC_LABEL	mercury__table_statistics__get_tabling_stats_4_0
	CurPtr = (MR_TableStats *) MR_sv(6);
	PrevPtr = (MR_TableStats *) MR_sv(7);
	NumSteps = MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("copy_current_stats_to_prev");
{
#line 461 "table_statistics.m"

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;
    int                 i;

    PrevPtr->MR_ts_num_lookups = CurPtr->MR_ts_num_lookups;
    PrevPtr->MR_ts_num_lookups_is_dupl = CurPtr->MR_ts_num_lookups_is_dupl;

    for (i = 0; i < NumSteps; i++) {
        cur = &(CurPtr->MR_ts_steps[i]);
        prev = &(PrevPtr->MR_ts_steps[i]);

        prev->MR_tss_num_lookups =
            cur->MR_tss_num_lookups;
        prev->MR_tss_num_lookups_is_dupl =
            cur->MR_tss_num_lookups_is_dupl;

        prev->MR_tss_hash_num_table_allocs =
            cur->MR_tss_hash_num_table_allocs;
        prev->MR_tss_hash_num_table_alloc_bytes =
            cur->MR_tss_hash_num_table_alloc_bytes;
        prev->MR_tss_hash_num_link_chunk_allocs =
            cur->MR_tss_hash_num_link_chunk_allocs;
        prev->MR_tss_hash_num_link_chunk_alloc_bytes =
            cur->MR_tss_hash_num_link_chunk_alloc_bytes;
        prev->MR_tss_hash_num_key_compares_not_dupl =
            cur->MR_tss_hash_num_key_compares_not_dupl;
        prev->MR_tss_hash_num_key_compares_dupl =
            cur->MR_tss_hash_num_key_compares_dupl;
        prev->MR_tss_hash_num_resizes =
            cur->MR_tss_hash_num_resizes;
        prev->MR_tss_hash_resize_old_entries =
            cur->MR_tss_hash_resize_old_entries;
        prev->MR_tss_hash_resize_new_entries =
            cur->MR_tss_hash_resize_new_entries;

        prev->MR_tss_enum_num_node_allocs =
            cur->MR_tss_enum_num_node_allocs;
        prev->MR_tss_enum_num_node_alloc_bytes =
            cur->MR_tss_enum_num_node_alloc_bytes;

        prev->MR_tss_du_num_node_allocs =
            cur->MR_tss_du_num_node_allocs;
        prev->MR_tss_du_num_node_alloc_bytes =
            cur->MR_tss_du_num_node_alloc_bytes;
        prev->MR_tss_du_num_arg_lookups =
            cur->MR_tss_du_num_arg_lookups;
        prev->MR_tss_du_num_exist_lookups =
            cur->MR_tss_du_num_exist_lookups;

        prev->MR_tss_start_num_allocs =
            cur->MR_tss_start_num_allocs;
        prev->MR_tss_start_num_alloc_bytes =
            cur->MR_tss_start_num_alloc_bytes;
    }
;}
#line 2579 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("copy_current_stats_to_prev");
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(table_statistics__get_tabling_stats_4_0_i7);
	}
	{
	MR_TableStats *	StatsPtr;
	MR_Integer	NumLookups;
	MR_Integer	NumLookupsIsDupl;
#define	MR_PROC_LABEL	mercury__table_statistics__get_tabling_stats_4_0
	StatsPtr = (MR_TableStats *) MR_sv(8);
	MR_OBTAIN_GLOBAL_LOCK("get_one_table_overall_stats");
{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;
;}
#line 2599 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_one_table_overall_stats");
	MR_tempr1 = NumLookups;
	MR_tempr3 = NumLookupsIsDupl;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(table_statistics__get_one_table_stats_step_loop_8_0,
		table_statistics__get_tabling_stats_4_0_i8);
MR_def_label(table_statistics__get_tabling_stats_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	{
	MR_TableStats *	StatsPtr;
	MR_Integer	NumLookups;
	MR_Integer	NumLookupsIsDupl;
#define	MR_PROC_LABEL	mercury__table_statistics__get_tabling_stats_4_0
	StatsPtr = (MR_TableStats *) MR_sv(9);
	MR_OBTAIN_GLOBAL_LOCK("get_one_table_overall_stats");
{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;
;}
#line 2637 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("get_one_table_overall_stats");
	MR_tempr2 = NumLookups;
	MR_tempr3 = NumLookupsIsDupl;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_tempr4 = MR_sv(5);
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(table_statistics__get_one_table_stats_step_loop_8_0,
		table_statistics__get_tabling_stats_4_0_i10);
MR_def_label(table_statistics__get_tabling_stats_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	{
	MR_TableStats *	CurPtr;
	MR_TableStats *	PrevPtr;
	MR_Integer	NumSteps;
#define	MR_PROC_LABEL	mercury__table_statistics__get_tabling_stats_4_0
	CurPtr = (MR_TableStats *) MR_sv(8);
	PrevPtr = (MR_TableStats *) MR_sv(9);
	NumSteps = MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("copy_current_stats_to_prev");
{
#line 461 "table_statistics.m"

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;
    int                 i;

    PrevPtr->MR_ts_num_lookups = CurPtr->MR_ts_num_lookups;
    PrevPtr->MR_ts_num_lookups_is_dupl = CurPtr->MR_ts_num_lookups_is_dupl;

    for (i = 0; i < NumSteps; i++) {
        cur = &(CurPtr->MR_ts_steps[i]);
        prev = &(PrevPtr->MR_ts_steps[i]);

        prev->MR_tss_num_lookups =
            cur->MR_tss_num_lookups;
        prev->MR_tss_num_lookups_is_dupl =
            cur->MR_tss_num_lookups_is_dupl;

        prev->MR_tss_hash_num_table_allocs =
            cur->MR_tss_hash_num_table_allocs;
        prev->MR_tss_hash_num_table_alloc_bytes =
            cur->MR_tss_hash_num_table_alloc_bytes;
        prev->MR_tss_hash_num_link_chunk_allocs =
            cur->MR_tss_hash_num_link_chunk_allocs;
        prev->MR_tss_hash_num_link_chunk_alloc_bytes =
            cur->MR_tss_hash_num_link_chunk_alloc_bytes;
        prev->MR_tss_hash_num_key_compares_not_dupl =
            cur->MR_tss_hash_num_key_compares_not_dupl;
        prev->MR_tss_hash_num_key_compares_dupl =
            cur->MR_tss_hash_num_key_compares_dupl;
        prev->MR_tss_hash_num_resizes =
            cur->MR_tss_hash_num_resizes;
        prev->MR_tss_hash_resize_old_entries =
            cur->MR_tss_hash_resize_old_entries;
        prev->MR_tss_hash_resize_new_entries =
            cur->MR_tss_hash_resize_new_entries;

        prev->MR_tss_enum_num_node_allocs =
            cur->MR_tss_enum_num_node_allocs;
        prev->MR_tss_enum_num_node_alloc_bytes =
            cur->MR_tss_enum_num_node_alloc_bytes;

        prev->MR_tss_du_num_node_allocs =
            cur->MR_tss_du_num_node_allocs;
        prev->MR_tss_du_num_node_alloc_bytes =
            cur->MR_tss_du_num_node_alloc_bytes;
        prev->MR_tss_du_num_arg_lookups =
            cur->MR_tss_du_num_arg_lookups;
        prev->MR_tss_du_num_exist_lookups =
            cur->MR_tss_du_num_exist_lookups;

        prev->MR_tss_start_num_allocs =
            cur->MR_tss_start_num_allocs;
        prev->MR_tss_start_num_alloc_bytes =
            cur->MR_tss_start_num_alloc_bytes;
    }
;}
#line 2733 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("copy_current_stats_to_prev");
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(table_statistics__get_tabling_stats_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);
MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__string__int_to_string_thousands_1_0);

MR_BEGIN_MODULE(table_statistics_module11)
	MR_init_entry1(table_statistics__write_table_step_stats_header_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__write_table_step_stats_header_7_0);
	MR_init_label10(table_statistics__write_table_step_stats_header_7_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label5(table_statistics__write_table_step_stats_header_7_0,14,16,17,22,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_step_stats_header'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__write_table_step_stats_header_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(string__append_3_2,
		table_statistics__write_table_step_stats_header_7_0_i2);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		table_statistics__write_table_step_stats_header_7_0_i3);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		table_statistics__write_table_step_stats_header_7_0_i4);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", variable ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		table_statistics__write_table_step_stats_header_7_0_i5);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		table_statistics__write_table_step_stats_header_7_0_i6);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_2,
		table_statistics__write_table_step_stats_header_7_0_i7);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nstep ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		table_statistics__write_table_step_stats_header_7_0_i8);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_header_7_0
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 535 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 2860 "table_statistics.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(1) = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_sv(4));
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_header_7_0_i9);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_header_7_0_i10);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_header_7_0_i11);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  number of lookups:                          %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_header_7_0_i14);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(3),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_header_7_0_i28);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__table_statistics__percentage_str_2_0,
		table_statistics__write_table_step_stats_header_7_0_i16);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__table_statistics__percentage_str_2_0,
		table_statistics__write_table_step_stats_header_7_0_i17);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  number of successful lookups:               %9s %9s\n", 54);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_header_7_0_i22);
MR_def_label(table_statistics__write_table_step_stats_header_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("  number of unsuccessful lookups:             %9s %9s\n", 54);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(table_statistics__write_table_step_stats_header_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module12)
	MR_init_entry1(table_statistics__write_table_step_stats_start_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__write_table_step_stats_start_4_0);
	MR_init_label4(table_statistics__write_table_step_stats_start_4_0,2,3,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_step_stats_start'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__write_table_step_stats_start_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_start_4_0_i2);
MR_def_label(table_statistics__write_table_step_stats_start_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_start_4_0_i3);
MR_def_label(table_statistics__write_table_step_stats_start_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_start_4_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1411 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 3026 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("  number of array (re)allocations:            %9s\n", 50);
	}
	MR_np_call_localret_ent(string__format_3_0,
		table_statistics__write_table_step_stats_start_4_0_i6);
MR_def_label(table_statistics__write_table_step_stats_start_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_start_4_0
	Stream = (MercuryFilePtr) MR_sv(2);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1328 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 3056 "table_statistics.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_start_4_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1411 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 3080 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("  number of bytes (re)allocationed:           %9s\n", 50);
	}
	MR_np_call_localret_ent(string__format_3_0,
		table_statistics__write_table_step_stats_start_4_0_i9);
MR_def_label(table_statistics__write_table_step_stats_start_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_start_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1328 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 3107 "table_statistics.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module13)
	MR_init_entry1(table_statistics__write_table_step_stats_enum_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__write_table_step_stats_enum_4_0);
	MR_init_label4(table_statistics__write_table_step_stats_enum_4_0,2,3,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_step_stats_enum'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__write_table_step_stats_enum_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_enum_4_0_i2);
MR_def_label(table_statistics__write_table_step_stats_enum_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_enum_4_0_i3);
MR_def_label(table_statistics__write_table_step_stats_enum_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_enum_4_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1411 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 3178 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("  number of enum node allocations:            %9s\n", 50);
	}
	MR_np_call_localret_ent(string__format_3_0,
		table_statistics__write_table_step_stats_enum_4_0_i6);
MR_def_label(table_statistics__write_table_step_stats_enum_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_enum_4_0
	Stream = (MercuryFilePtr) MR_sv(2);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1328 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 3208 "table_statistics.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_enum_4_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1411 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 3232 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("  number of bytes allocated for enum nodes:   %9s\n", 50);
	}
	MR_np_call_localret_ent(string__format_3_0,
		table_statistics__write_table_step_stats_enum_4_0_i9);
MR_def_label(table_statistics__write_table_step_stats_enum_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_enum_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1328 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 3259 "table_statistics.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module14)
	MR_init_entry1(table_statistics__write_table_step_stats_hash_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__write_table_step_stats_hash_11_0);
	MR_init_label10(table_statistics__write_table_step_stats_hash_11_0,2,3,4,5,6,7,8,9,10,13)
	MR_init_label8(table_statistics__write_table_step_stats_hash_11_0,16,19,22,25,28,31,35,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_step_stats_hash'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__write_table_step_stats_hash_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i2);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i3);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i4);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_hash_11_0_i5);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_hash_11_0_i6);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_hash_11_0_i7);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_hash_11_0_i8);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_hash_11_0_i9);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		table_statistics__write_table_step_stats_hash_11_0_i10);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  number of hash table allocations:           %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i13);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of bytes allocated for hash tables:  %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i16);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of bulk hash link allocations:       %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i19);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of bytes allocated for hash links:   %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i22);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of key compares when unsuccessful:   %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i25);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of key compares when successful:     %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i28);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of hash table resizes:               %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i31);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(6),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_hash_11_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of old entries in resizes:           %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_hash_11_0_i35);
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of new entries in resizes:           %9s\n", 50);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(table_statistics__write_table_step_stats_hash_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module15)
	MR_init_entry1(table_statistics__write_table_step_stats_du_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__write_table_step_stats_du_6_0);
	MR_init_label8(table_statistics__write_table_step_stats_du_6_0,2,3,4,5,8,11,14,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_step_stats_du'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__write_table_step_stats_du_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_du_6_0_i2);
MR_def_label(table_statistics__write_table_step_stats_du_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_du_6_0_i3);
MR_def_label(table_statistics__write_table_step_stats_du_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_du_6_0_i4);
MR_def_label(table_statistics__write_table_step_stats_du_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__string__int_to_base_string_group_4_0,
		table_statistics__write_table_step_stats_du_6_0_i5);
MR_def_label(table_statistics__write_table_step_stats_du_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_du_6_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1411 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 3607 "table_statistics.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("  number of du functor node allocations:      %9s\n", 50);
	}
	MR_np_call_localret_ent(string__format_3_0,
		table_statistics__write_table_step_stats_du_6_0_i8);
MR_def_label(table_statistics__write_table_step_stats_du_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__table_statistics__write_table_step_stats_du_6_0
	Stream = (MercuryFilePtr) MR_sv(5);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1328 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 3637 "table_statistics.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of bytes allocated for du functors:  %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_du_6_0_i11);
MR_def_label(table_statistics__write_table_step_stats_du_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of du functor argument lookups:      %9s\n", 50);
	}
	MR_np_call_localret_ent(io__format_4_0,
		table_statistics__write_table_step_stats_du_6_0_i14);
MR_def_label(table_statistics__write_table_step_stats_du_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(3),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_du_6_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("  number of du existential type lookups:      %9s\n", 50);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(table_statistics__write_table_step_stats_du_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module16)
	MR_init_entry1(table_statistics__write_table_step_stats_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__write_table_step_stats_4_0);
	MR_init_label10(table_statistics__write_table_step_stats_4_0,27,114,43,115,18,116,23,51,4,7)
	MR_init_label8(table_statistics__write_table_step_stats_4_0,6,9,10,29,30,32,35,113)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_step_stats'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__write_table_step_stats_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_tfield(0, MR_r1, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r7),
		MR_LABEL_AP(table_statistics__write_table_step_stats_4_0_i27) MR_AND
		MR_LABEL_AP(table_statistics__write_table_step_stats_4_0_i114) MR_AND
		MR_LABEL_AP(table_statistics__write_table_step_stats_4_0_i115) MR_AND
		MR_LABEL_AP(table_statistics__write_table_step_stats_4_0_i116));
MR_def_label(table_statistics__write_table_step_stats_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = (MR_Word) MR_string_const("none", 4);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(table_statistics__write_table_step_stats_header_7_0);
	}
MR_def_label(table_statistics__write_table_step_stats_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = (MR_Word) MR_string_const("expandable array", 16);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_header_7_0,
		table_statistics__write_table_step_stats_4_0_i43);
MR_def_label(table_statistics__write_table_step_stats_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i113);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(table_statistics__write_table_step_stats_start_4_0);
MR_def_label(table_statistics__write_table_step_stats_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r7;
	MR_sv(2) = MR_tfield(2, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr3, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = (MR_Word) MR_string_const("enum trie", 9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_header_7_0,
		table_statistics__write_table_step_stats_4_0_i18);
MR_def_label(table_statistics__write_table_step_stats_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i113);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(table_statistics__write_table_step_stats_enum_4_0);
MR_def_label(table_statistics__write_table_step_stats_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_r9 = MR_tfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i51);
	}
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 8);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 9);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = (MR_Word) MR_string_const("hash table", 10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_header_7_0,
		table_statistics__write_table_step_stats_4_0_i23);
MR_def_label(table_statistics__write_table_step_stats_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i113);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(table_statistics__write_table_step_stats_hash_11_0);
MR_def_label(table_statistics__write_table_step_stats_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r7;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr3, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr3, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr3, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr3, 7);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 8);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 9);
	MR_sv(11) = MR_tfield(3, MR_tempr3, 10);
	MR_sv(12) = MR_tfield(3, MR_tempr3, 11);
	MR_sv(13) = MR_tfield(3, MR_tempr3, 12);
	MR_sv(14) = MR_tfield(3, MR_tempr3, 13);
	MR_sv(15) = MR_tfield(3, MR_tempr3, 14);
	MR_sv(16) = MR_tfield(3, MR_tempr3, 15);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = (MR_Word) MR_string_const("discriminated union nested trie", 31);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_header_7_0,
		table_statistics__write_table_step_stats_4_0_i4);
MR_def_label(table_statistics__write_table_step_stats_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i113);
	}
	if (MR_INT_LE(MR_sv(2),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_du_6_0,
		table_statistics__write_table_step_stats_4_0_i7);
MR_def_label(table_statistics__write_table_step_stats_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i9);
MR_def_label(table_statistics__write_table_step_stats_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("write_table_step_stats: no du stats", 35);
	MR_np_call_localret_ent(require__error_1_0,
		table_statistics__write_table_step_stats_4_0_i9);
MR_def_label(table_statistics__write_table_step_stats_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i10);
	}
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_enum_4_0,
		table_statistics__write_table_step_stats_4_0_i10);
MR_def_label(table_statistics__write_table_step_stats_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(16);
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i113);
	}
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(table_statistics__write_table_step_stats_hash_11_0);
MR_def_label(table_statistics__write_table_step_stats_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r7;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr3, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr3, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr3, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr3, 7);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 8);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 9);
	MR_sv(11) = MR_tfield(3, MR_tempr3, 10);
	MR_sv(12) = MR_tfield(3, MR_tempr3, 11);
	MR_sv(13) = MR_tfield(3, MR_tempr3, 12);
	MR_sv(14) = MR_tfield(3, MR_tempr3, 13);
	MR_sv(15) = MR_tfield(3, MR_tempr3, 14);
	MR_sv(16) = MR_tfield(3, MR_tempr3, 15);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = (MR_Word) MR_string_const("polymorphic table", 17);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_header_7_0,
		table_statistics__write_table_step_stats_4_0_i30);
MR_def_label(table_statistics__write_table_step_stats_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i113);
	}
	if (MR_INT_LE(MR_sv(2),0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i32);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_du_6_0,
		table_statistics__write_table_step_stats_4_0_i32);
MR_def_label(table_statistics__write_table_step_stats_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i35);
	}
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_enum_4_0,
		table_statistics__write_table_step_stats_4_0_i35);
MR_def_label(table_statistics__write_table_step_stats_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(16);
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(table_statistics__write_table_step_stats_4_0_i113);
	}
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(table_statistics__write_table_step_stats_hash_11_0);
MR_def_label(table_statistics__write_table_step_stats_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(table_statistics_module17)
	MR_init_entry1(__Unify___table_statistics__ml_table_stats_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___table_statistics__ml_table_stats_ptr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_statistics__ml_table_stats_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(table_statistics_module18)
	MR_init_entry1(__Compare___table_statistics__ml_table_stats_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___table_statistics__ml_table_stats_ptr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_statistics__ml_table_stats_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module19)
	MR_init_entry1(__Unify___table_statistics__ml_table_step_desc_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___table_statistics__ml_table_step_desc_ptr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_statistics__ml_table_step_desc_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module20)
	MR_init_entry1(__Compare___table_statistics__ml_table_step_desc_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___table_statistics__ml_table_step_desc_ptr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_statistics__ml_table_step_desc_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(table_statistics_module21)
	MR_init_entry1(__Unify___table_statistics__proc_table_statistics_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___table_statistics__proc_table_statistics_0_0);
	MR_init_label3(__Unify___table_statistics__proc_table_statistics_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_statistics__proc_table_statistics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_statistics__proc_table_statistics_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___table_statistics__table_stats_curr_prev_0_0,
		__Unify___table_statistics__proc_table_statistics_0_0_i4);
MR_def_label(__Unify___table_statistics__proc_table_statistics_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___table_statistics__proc_table_statistics_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_statistics, table_stats_curr_prev);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___table_statistics__proc_table_statistics_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_statistics__proc_table_statistics_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(table_statistics_module22)
	MR_init_entry1(__Compare___table_statistics__proc_table_statistics_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___table_statistics__proc_table_statistics_0_0);
	MR_init_label4(__Compare___table_statistics__proc_table_statistics_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_statistics__proc_table_statistics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__proc_table_statistics_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_statistics__proc_table_statistics_0_0_i2);
MR_def_label(__Compare___table_statistics__proc_table_statistics_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_statistics__proc_table_statistics_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___table_statistics__table_stats_curr_prev_0_0,
		__Compare___table_statistics__proc_table_statistics_0_0_i5);
MR_def_label(__Compare___table_statistics__proc_table_statistics_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__proc_table_statistics_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_statistics, table_stats_curr_prev);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___table_statistics__proc_table_statistics_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(table_statistics_module23)
	MR_init_entry1(__Unify___table_statistics__table_stats_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___table_statistics__table_stats_0_0);
	MR_init_label2(__Unify___table_statistics__table_stats_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_statistics__table_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_stats_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_stats_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_stats_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_statistics, table_step_stats);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___table_statistics__table_stats_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_statistics__table_stats_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(table_statistics_module24)
	MR_init_entry1(__Compare___table_statistics__table_stats_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___table_statistics__table_stats_0_0);
	MR_init_label9(__Compare___table_statistics__table_stats_0_0,3,2,6,7,9,14,15,17,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_statistics__table_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i2);
MR_def_label(__Compare___table_statistics__table_stats_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_stats_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i9);
	}
MR_def_label(__Compare___table_statistics__table_stats_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i9);
MR_def_label(__Compare___table_statistics__table_stats_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_stats_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i49);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i17);
MR_def_label(__Compare___table_statistics__table_stats_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i17);
MR_def_label(__Compare___table_statistics__table_stats_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_stats_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_0_0_i49);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_statistics, table_step_stats);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___table_statistics__table_stats_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module25)
	MR_init_entry1(__Unify___table_statistics__table_stats_curr_prev_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___table_statistics__table_stats_curr_prev_0_0);
	MR_init_label3(__Unify___table_statistics__table_stats_curr_prev_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_statistics__table_stats_curr_prev_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_stats_curr_prev_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___table_statistics__table_stats_0_0,
		__Unify___table_statistics__table_stats_curr_prev_0_0_i4);
MR_def_label(__Unify___table_statistics__table_stats_curr_prev_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_stats_curr_prev_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___table_statistics__table_stats_0_0);
MR_def_label(__Unify___table_statistics__table_stats_curr_prev_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_statistics__table_stats_curr_prev_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module26)
	MR_init_entry1(__Compare___table_statistics__table_stats_curr_prev_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___table_statistics__table_stats_curr_prev_0_0);
	MR_init_label4(__Compare___table_statistics__table_stats_curr_prev_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_statistics__table_stats_curr_prev_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_curr_prev_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_statistics__table_stats_curr_prev_0_0_i2);
MR_def_label(__Compare___table_statistics__table_stats_curr_prev_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_stats_curr_prev_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___table_statistics__table_stats_0_0,
		__Compare___table_statistics__table_stats_curr_prev_0_0_i5);
MR_def_label(__Compare___table_statistics__table_stats_curr_prev_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_stats_curr_prev_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___table_statistics__table_stats_0_0);
MR_def_label(__Compare___table_statistics__table_stats_curr_prev_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module27)
	MR_init_entry1(__Unify___table_statistics__table_step_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___table_statistics__table_step_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_statistics__table_step_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module28)
	MR_init_entry1(__Compare___table_statistics__table_step_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___table_statistics__table_step_kind_0_0);
	MR_init_label2(__Compare___table_statistics__table_step_kind_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_statistics__table_step_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_kind_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_kind_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_kind_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_kind_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module29)
	MR_init_entry1(__Unify___table_statistics__table_step_stat_details_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___table_statistics__table_step_stat_details_0_0);
	MR_init_label8(__Unify___table_statistics__table_step_stat_details_0_0,11,14,7,19,20,12,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_statistics__table_step_stat_details_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___table_statistics__table_step_stat_details_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___table_statistics__table_step_stat_details_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___table_statistics__table_step_stat_details_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___table_statistics__table_step_stat_details_0_0_i19));
MR_def_label(__Unify___table_statistics__table_step_stat_details_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___table_statistics__table_step_stat_details_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___table_statistics__table_step_stat_details_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___table_statistics__table_step_stat_details_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 4);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 5);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 5);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 6);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 6);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 7);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 7);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 8);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 8);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 9);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 9);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___table_statistics__table_step_stat_details_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i12);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 4);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 5);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 5);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 6);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 6);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 7);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 7);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 8);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 8);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 9);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 9);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 10);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 10);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 11);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 11);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 12);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 12);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 13);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 13);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 14);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 14);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 15);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 15);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___table_statistics__table_step_stat_details_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 4);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 5);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 5);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 6);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 6);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 7);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 7);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 8);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 8);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 9);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 9);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 10);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 10);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 11);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 11);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 12);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 12);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 13);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 13);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 14);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 14);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stat_details_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 15);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 15);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___table_statistics__table_step_stat_details_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_statistics__table_step_stat_details_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module30)
	MR_init_entry1(__Compare___table_statistics__table_step_stat_details_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___table_statistics__table_step_stat_details_0_0);
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,266,277,278,424,431,434,435,437,440,448)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,449,149,152,155,156,158,161,173,174,454)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,183,184,186,191,192,194,199,200,202,207)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,208,210,215,216,218,223,224,226,231,232)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,234,239,240,242,245,264,455,147,10,11)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,13,18,19,21,26,27,29,34,35,37)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,42,43,45,50,51,53,58,59,61,66)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,67,69,74,75,77,82,83,85,90,91)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,93,98,99,101,106,107,109,114,115,117)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,120,691,280,422,552,286,289,290,292,297)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,298,300,305,306,308,313,314,316,321,322)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,324,329,330,332,337,338,340,345,346,348)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,353,354,356,361,362,364,369,370,372,377)
	MR_init_label10(__Compare___table_statistics__table_step_stat_details_0_0,378,380,385,386,388,393,394,396,595,399)
	MR_init_label2(__Compare___table_statistics__table_step_stat_details_0_0,596,457)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_statistics__table_step_stat_details_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i691);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i266) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i424) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i149) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i454));
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i596) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i595) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i595) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i277));
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i278);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i595);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,424)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i552) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i431) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i595) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i448));
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,431)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i434);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i437);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,434)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i435);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i437);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,437)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i440);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,440)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i552);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i449);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,449)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i595);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i552) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i552) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i152) MR_AND
		MR_LABEL_AP(__Compare___table_statistics__table_step_stat_details_0_0_i173));
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_r5 = MR_tfield(2, MR_tempr2, 0);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i155);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i158);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i156);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i158);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i161);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i552);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i174);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i595);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,454)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i455);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i552);
	}
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_tfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i264);
	}
	MR_sv(16) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(15) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(14) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(12) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 9);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 9);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 8);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 4);
	MR_r2 = MR_tfield(3, MR_tempr2, 3);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr2, 1);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i183);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i186);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i184);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i186);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_sv(16) >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i191);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i194);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(16) != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i192);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i194);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_sv(15) >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i199);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i202);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(15) != MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i200);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i202);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(14) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i207);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i210);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(14) != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i208);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i210);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(13) >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i215);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i218);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(13) != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i216);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i218);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(12) >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i223);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i226);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(12) != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i224);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i226);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(11) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i231);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i234);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(11) != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i232);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i234);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(10) >= (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i239);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i242);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(10) != MR_sv(7))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i240);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i242);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(9) >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i245);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(9) != MR_sv(8))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i552);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i595);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,455)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i280);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i552);
	}
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i147);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i595);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(28) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(27) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(26) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(25) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(24) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(23) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(22) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(21) = MR_tfield(3, MR_tempr1, 9);
	MR_sv(20) = MR_tfield(3, MR_tempr1, 10);
	MR_sv(19) = MR_tfield(3, MR_tempr1, 11);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 12);
	MR_sv(17) = MR_tfield(3, MR_tempr1, 13);
	MR_sv(16) = MR_tfield(3, MR_tempr1, 14);
	MR_sv(15) = MR_tfield(3, MR_tempr1, 15);
	MR_tempr2 = MR_sv(2);
	MR_sv(14) = MR_tfield(3, MR_tempr2, 15);
	MR_sv(13) = MR_tfield(3, MR_tempr2, 14);
	MR_sv(12) = MR_tfield(3, MR_tempr2, 13);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 12);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 11);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 10);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 9);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 8);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 4);
	MR_r2 = MR_tfield(3, MR_tempr2, 3);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr2, 1);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i13);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i13);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_sv(28) >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i21);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(28) != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i19);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i21);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_sv(27) >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i29);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(27) != MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i29);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(26) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i37);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(26) != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i35);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i37);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(25) >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i45);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(25) != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i43);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i45);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(24) >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i53);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(24) != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i51);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i53);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(23) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i58);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i61);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(23) != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i59);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i61);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(22) >= (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i69);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(22) != MR_sv(7))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i67);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i69);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(21) >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i74);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i77);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(21) != MR_sv(8))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i75);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i77);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(20) >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i82);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i85);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(20) != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i83);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i85);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(19) >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i90);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i93);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(19) != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i91);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i93);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(18) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i98);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i101);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(18) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i99);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i101);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(17) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i106);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i109);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(17) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i107);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i109);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(16) >= (MR_Integer) MR_sv(13))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i114);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i117);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(16) != MR_sv(13))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i115);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i117);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(15) >= (MR_Integer) MR_sv(14))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i120);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(15) != MR_sv(14))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i552);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,691)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i552);
	}
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i422);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,422)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i286);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,552)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(28) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(27) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(26) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(25) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(24) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(23) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(22) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(21) = MR_tfield(3, MR_tempr1, 9);
	MR_sv(20) = MR_tfield(3, MR_tempr1, 10);
	MR_sv(19) = MR_tfield(3, MR_tempr1, 11);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 12);
	MR_sv(17) = MR_tfield(3, MR_tempr1, 13);
	MR_sv(16) = MR_tfield(3, MR_tempr1, 14);
	MR_sv(15) = MR_tfield(3, MR_tempr1, 15);
	MR_tempr2 = MR_sv(2);
	MR_sv(14) = MR_tfield(3, MR_tempr2, 15);
	MR_sv(13) = MR_tfield(3, MR_tempr2, 14);
	MR_sv(12) = MR_tfield(3, MR_tempr2, 13);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 12);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 11);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 10);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 9);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 8);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 4);
	MR_r2 = MR_tfield(3, MR_tempr2, 3);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr2, 1);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i289);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i292);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i290);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i292);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_sv(28) >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i297);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i300);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(28) != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i298);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i300);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_sv(27) >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i305);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i308);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(27) != MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i306);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i308);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(26) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i313);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i316);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(26) != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i314);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i316);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(25) >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i321);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i324);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(25) != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i322);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i324);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(24) >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i329);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i332);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(24) != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i330);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i332);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(23) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i337);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i340);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(23) != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i338);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i340);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(22) >= (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i345);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i348);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(22) != MR_sv(7))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i346);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i348);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(21) >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i353);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i356);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(21) != MR_sv(8))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i354);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i356);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(20) >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i361);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i364);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,361)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(20) != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i362);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i364);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(19) >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i369);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i372);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(19) != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i370);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i372);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(18) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i377);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i380);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(18) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i378);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i380);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(17) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i385);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i388);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(17) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i386);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i388);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,386)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,388)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(16) >= (MR_Integer) MR_sv(13))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i393);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i396);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(16) != MR_sv(13))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i394);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i396);
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,394)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i457);
	}
	if (((MR_Integer) MR_sv(15) >= (MR_Integer) MR_sv(14))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i399);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,595)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(28);
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,399)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(15) != MR_sv(14))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stat_details_0_0_i552);
	}
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,596)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___table_statistics__table_step_stat_details_0_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(28);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module31)
	MR_init_entry1(__Unify___table_statistics__table_step_stats_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___table_statistics__table_step_stats_0_0);
	MR_init_label2(__Unify___table_statistics__table_step_stats_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_statistics__table_step_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stats_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stats_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stats_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___table_statistics__table_step_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___table_statistics__table_step_stat_details_0_0);
	}
MR_def_label(__Unify___table_statistics__table_step_stats_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_statistics__table_step_stats_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module32)
	MR_init_entry1(__Compare___table_statistics__table_step_stats_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___table_statistics__table_step_stats_0_0);
	MR_init_label10(__Compare___table_statistics__table_step_stats_0_0,3,2,6,7,10,15,16,18,23,24)
	MR_init_label2(__Compare___table_statistics__table_step_stats_0_0,26,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_statistics__table_step_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i2);
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___table_statistics__table_step_stats_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6164 "table_statistics.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i10);
	}
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i10);
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i68);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i18);
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i16);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i18);
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i68);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i26);
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i26);
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_statistics__table_step_stats_0_0_i68);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___table_statistics__table_step_stat_details_0_0);
MR_def_label(__Compare___table_statistics__table_step_stats_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module33)
	MR_init_entry1(table_statistics__list__foldl2__ho8_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__table_statistics__list__foldl2__ho8_6_0);
	MR_init_label3(table_statistics__list__foldl2__ho8_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2__ho8'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_statistics__list__foldl2__ho8_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(table_statistics__list__foldl2__ho8_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(table_statistics__list__foldl2__ho8_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(table_statistics__list__foldl2__ho8_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(table_statistics__write_table_step_stats_4_0,
		table_statistics__list__foldl2__ho8_6_0_i4);
MR_def_label(table_statistics__list__foldl2__ho8_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(table_statistics__list__foldl2__ho8_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_statistics_module34)
	MR_init_entry1(fn__f_116_97_98_108_101_95_115_116_97_116_105_115_116_105_99_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_97_98_108_101_95_115_116_97_116_105_115_116_105_99_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_97_98_108_101_95_115_116_97_116_105_115_116_105_99_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__table_statistics__get_tabling_stats_4_0);

void
MR_get_tabling_stats(MR_ProcTableInfoPtr Mercury__argument1, MR_Word * Mercury__argument2);

void
MR_get_tabling_stats(MR_ProcTableInfoPtr Mercury__argument1, MR_Word * Mercury__argument2)
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

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__table_statistics__get_tabling_stats_4_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcTableInfoPtr, Mercury__argument1, MR_r1);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__table_statistics__get_tabling_stats_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__table_statistics_maybe_bunch_0(void)
{
	table_statistics_module0();
	table_statistics_module1();
	table_statistics_module2();
	table_statistics_module3();
	table_statistics_module4();
	table_statistics_module5();
	table_statistics_module6();
	table_statistics_module7();
	table_statistics_module8();
	table_statistics_module9();
	table_statistics_module10();
	table_statistics_module11();
	table_statistics_module12();
	table_statistics_module13();
	table_statistics_module14();
	table_statistics_module15();
	table_statistics_module16();
	table_statistics_module17();
	table_statistics_module18();
	table_statistics_module19();
	table_statistics_module20();
	table_statistics_module21();
	table_statistics_module22();
	table_statistics_module23();
	table_statistics_module24();
	table_statistics_module25();
	table_statistics_module26();
	table_statistics_module27();
	table_statistics_module28();
	table_statistics_module29();
	table_statistics_module30();
	table_statistics_module31();
	table_statistics_module32();
	table_statistics_module33();
	table_statistics_module34();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__table_statistics__init(void);
void mercury__table_statistics__init_type_tables(void);
void mercury__table_statistics__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__table_statistics__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__table_statistics__init_complexity_procs(void);
#endif

void mercury__table_statistics__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__table_statistics_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_statistics__type_ctor_info_ml_table_stats_ptr_0,
		table_statistics__ml_table_stats_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_statistics__type_ctor_info_ml_table_step_desc_ptr_0,
		table_statistics__ml_table_step_desc_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_statistics__type_ctor_info_proc_table_statistics_0,
		table_statistics__proc_table_statistics_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_statistics__type_ctor_info_table_stats_0,
		table_statistics__table_stats_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_statistics__type_ctor_info_table_stats_curr_prev_0,
		table_statistics__table_stats_curr_prev_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_statistics__type_ctor_info_table_step_kind_0,
		table_statistics__table_step_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_statistics__type_ctor_info_table_step_stat_details_0,
		table_statistics__table_step_stat_details_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_statistics__type_ctor_info_table_step_stats_0,
		table_statistics__table_step_stats_0_0);
	mercury__table_statistics__init_debugger();
}

void mercury__table_statistics__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_table_statistics__type_ctor_info_ml_table_stats_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_statistics__type_ctor_info_ml_table_step_desc_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_statistics__type_ctor_info_proc_table_statistics_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_statistics__type_ctor_info_table_stats_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_statistics__type_ctor_info_table_stats_curr_prev_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_statistics__type_ctor_info_table_step_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_statistics__type_ctor_info_table_step_stat_details_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_statistics__type_ctor_info_table_step_stats_0);
	}
}


void mercury__table_statistics__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__table_statistics__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__table_statistics);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__table_statistics__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
