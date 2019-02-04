/*
** Automatically generated from `report.m'
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
INIT mercury__report__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 256 "profile.int"
#include "profile.mh"

#line 27 "report.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 31 "report.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 35 "report.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 39 "report.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "report.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "report.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "report.c"
#line 52 "report.c"
#include "report.mh"

#line 55 "report.c"
#line 56 "report.c"
#ifndef REPORT_DECL_GUARD
#define REPORT_DECL_GUARD

#line 60 "report.c"
#line 61 "report.c"

#endif
#line 64 "report.c"

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
	mercury_data_report__type_ctor_info_row_data_1,
	mercury_data_report__type_ctor_info_report_proc_0,
	mercury_data_report__type_ctor_info_report_ordering_0,
	mercury_data_report__type_ctor_info_deep_report_0;
MR_decl_label5(__Unify___report__deep_report_0_0, 9,11,5,18,1)
MR_decl_label3(__Unify___report__report_ordering_0_0, 4,6,1)
MR_decl_label2(__Unify___report__report_proc_0_0, 4,1)
MR_decl_label8(__Unify___report__row_data_1_0, 4,6,8,10,12,14,16,18)
MR_decl_label8(__Unify___report__row_data_1_0, 20,22,24,26,28,30,32,34)
MR_decl_label2(__Unify___report__row_data_1_0, 38,1)
MR_decl_label8(__Compare___report__deep_report_0_0, 3,2,61,65,67,5,105,50)
MR_decl_label8(__Compare___report__deep_report_0_0, 7,9,13,17,21,25,29,33)
MR_decl_label2(__Compare___report__deep_report_0_0, 37,174)
MR_decl_label6(__Compare___report__report_ordering_0_0, 3,2,5,9,13,37)
MR_decl_label6(__Compare___report__report_proc_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___report__row_data_1_0, 3,2,5,9,13,17,21,25)
MR_decl_label8(__Compare___report__row_data_1_0, 29,33,37,41,45,49,53,57)
MR_decl_label8(__Compare___report__row_data_1_0, 61,65,69,73,77,81,85,89)
MR_decl_label8(__Compare___report__row_data_1_0, 93,97,101,105,109,113,117,121)
MR_decl_label3(__Compare___report__row_data_1_0, 125,129,269)
MR_def_extern_entry(__Unify___report__deep_report_0_0)
MR_def_extern_entry(__Compare___report__deep_report_0_0)
MR_def_extern_entry(__Unify___report__report_ordering_0_0)
MR_def_extern_entry(__Compare___report__report_ordering_0_0)
MR_def_extern_entry(__Unify___report__report_proc_0_0)
MR_def_extern_entry(__Compare___report__report_proc_0_0)
MR_def_extern_entry(__Unify___report__row_data_1_0)
MR_def_extern_entry(__Compare___report__row_data_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(report, row_data),
MR_CTOR0_ADDR(report, report_proc)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_row_data_1_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_time_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_time_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_time_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_time_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_0
};

const MR_ConstString mercury_data_report__field_names_row_data_1_0[] = {
	"subject",
	"calls",
	"exits",
	"fails",
	"redos",
	"excps",
	"self_ticks",
	"self_time",
	"self_time_percent",
	"self_time_percall",
	"ticks",
	"time",
	"time_percent",
	"time_percall",
	"self_callseqs",
	"self_callseqs_percent",
	"self_callseqs_percall",
	"callseqs",
	"callseqs_percent",
	"callseqs_percall",
	"self_allocs",
	"self_allocs_percent",
	"self_allocs_percall",
	"allocs",
	"allocs_percent",
	"allocs_percall",
	"bytes_per_word",
	"self_mem",
	"self_mem_percent",
	"self_mem_percall",
	"mem",
	"mem_percent",
	"mem_percall"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_row_data_1_0 = {
	"row_data",
	33,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_row_data_1_0,
	mercury_data_report__field_names_row_data_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_row_data_1_0[] = {
	&mercury_data_report__du_functor_desc_row_data_1_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_row_data_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_row_data_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_row_data_1[] = {
	&mercury_data_report__du_functor_desc_row_data_1_0
};

const MR_Integer mercury_data_report__functor_number_map_row_data_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_row_data_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__row_data_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__row_data_1_0)),
	"report",
	"row_data",
	{ (void *)mercury_data_report__du_name_ordered_row_data_1 },
	{ (void *)mercury_data_report__du_ptag_ordered_row_data_1 },
	1,
	4,
	mercury_data_report__functor_number_map_row_data_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_report_proc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_report__field_names_report_proc_0_0[] = {
	"proc_static_ptr",
	"proc_filename",
	"proc_linenumber",
	"proc_name"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_report_proc_0_0 = {
	"report_proc",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_report_proc_0_0,
	mercury_data_report__field_names_report_proc_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_report_proc_0_0[] = {
	&mercury_data_report__du_functor_desc_report_proc_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_report_proc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_report_proc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_report_proc_0[] = {
	&mercury_data_report__du_functor_desc_report_proc_0_0
};

const MR_Integer mercury_data_report__functor_number_map_report_proc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_proc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__report_proc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__report_proc_0_0)),
	"report",
	"report_proc",
	{ (void *)mercury_data_report__du_name_ordered_report_proc_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_report_proc_0 },
	1,
	4,
	mercury_data_report__functor_number_map_report_proc_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_display_limit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_include_descendants_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_measurement_scope_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_display_limit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_include_descendants_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_measurement_scope_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_report_ordering_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_display_limit_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cost_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_include_descendants_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_measurement_scope_0
};

const MR_ConstString mercury_data_report__field_names_report_ordering_0_0[] = {
	"display_limit",
	"cost_kind",
	"incl_desc",
	"scope"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_report_ordering_0_0 = {
	"report_ordering",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_report_ordering_0_0,
	mercury_data_report__field_names_report_ordering_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_report_ordering_0_0[] = {
	&mercury_data_report__du_functor_desc_report_ordering_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_report_ordering_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_report_ordering_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_report_ordering_0[] = {
	&mercury_data_report__du_functor_desc_report_ordering_0_0
};

const MR_Integer mercury_data_report__functor_number_map_report_ordering_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_ordering_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__report_ordering_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__report_ordering_0_0)),
	"report",
	"report_ordering",
	{ (void *)mercury_data_report__du_name_ordered_report_ordering_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_report_ordering_0 },
	1,
	4,
	mercury_data_report__functor_number_map_report_ordering_0
};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_0 = {
	"report_message",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_1[] = {
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

const MR_ConstString mercury_data_report__field_names_deep_report_0_1[] = {
	"quanta_per_sec",
	"user_quanta",
	"inst_quanta",
	"num_callsequs",
	"num_csd",
	"num_css",
	"num_pd",
	"num_ps",
	"num_clique"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_1 = {
	"report_menu",
	9,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_1,
	mercury_data_report__field_names_deep_report_0_1,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_proc_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_row_data_1report__type_ctor_info_report_proc_0 = {
	&mercury_data_report__type_ctor_info_row_data_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_report_proc_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__ti_row_data_1report__type_ctor_info_report_proc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__ti_row_data_1report__type_ctor_info_report_proc_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_ordering_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_report_ordering_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_row_data_1report__type_ctor_info_report_proc_0
};

const MR_ConstString mercury_data_report__field_names_deep_report_0_2[] = {
	"ordering",
	"top_procs"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_2 = {
	"report_top_procs",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_2,
	mercury_data_report__field_names_deep_report_0_2,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_deep_report_0_0[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_0

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_deep_report_0_1[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_1

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_deep_report_0_2[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_2

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_deep_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_deep_report_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_deep_report_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_deep_report_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_deep_report_0[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_1,
	&mercury_data_report__du_functor_desc_deep_report_0_0,
	&mercury_data_report__du_functor_desc_deep_report_0_2
};

const MR_Integer mercury_data_report__functor_number_map_deep_report_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_deep_report_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__deep_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__deep_report_0_0)),
	"report",
	"deep_report",
	{ (void *)mercury_data_report__du_name_ordered_deep_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_deep_report_0 },
	3,
	4,
	mercury_data_report__functor_number_map_deep_report_0
};

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(report_module0)
	MR_init_entry1(__Unify___report__deep_report_0_0);
	MR_init_label5(__Unify___report__deep_report_0_0,9,11,5,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__deep_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr3;
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i5);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr4) == 0);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___report__deep_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___report__report_ordering_0_0,
		__Unify___report__deep_report_0_0_i11);
MR_def_label(__Unify___report__deep_report_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__deep_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 3);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 4);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 5);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 5);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 6);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 6);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 7);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 7);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 8);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 8);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___report__deep_report_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__deep_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(report_module1)
	MR_init_entry1(__Compare___report__deep_report_0_0);
	MR_init_label8(__Compare___report__deep_report_0_0,3,2,61,65,67,5,105,50)
	MR_init_label8(__Compare___report__deep_report_0_0,7,9,13,17,21,25,29,33)
	MR_init_label2(__Compare___report__deep_report_0_0,37,174)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__deep_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__deep_report_0_0_i2);
MR_def_label(__Compare___report__deep_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__deep_report_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i5);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i61);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i50);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i50);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
	}
MR_def_label(__Compare___report__deep_report_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i105);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i65);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(17);
	}
MR_def_label(__Compare___report__deep_report_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___report__report_ordering_0_0,
		__Compare___report__deep_report_0_0_i67);
MR_def_label(__Compare___report__deep_report_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__deep_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i7);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i50);
	}
	}
MR_def_label(__Compare___report__deep_report_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___report__deep_report_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___report__deep_report_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(16) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(15) = MR_ctfield(1, MR_tempr5, 2);
	MR_sv(14) = MR_ctfield(1, MR_tempr5, 3);
	MR_sv(13) = MR_ctfield(1, MR_tempr5, 4);
	MR_sv(12) = MR_ctfield(1, MR_tempr5, 5);
	MR_sv(11) = MR_ctfield(1, MR_tempr5, 6);
	MR_sv(10) = MR_ctfield(1, MR_tempr5, 7);
	MR_sv(9) = MR_ctfield(1, MR_tempr5, 8);
	MR_tempr6 = MR_sv(2);
	MR_sv(8) = MR_ctfield(1, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(1, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(1, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__deep_report_0_0_i9);
MR_def_label(__Compare___report__deep_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__deep_report_0_0_i13);
MR_def_label(__Compare___report__deep_report_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__deep_report_0_0_i17);
MR_def_label(__Compare___report__deep_report_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__deep_report_0_0_i21);
MR_def_label(__Compare___report__deep_report_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__deep_report_0_0_i25);
MR_def_label(__Compare___report__deep_report_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__deep_report_0_0_i29);
MR_def_label(__Compare___report__deep_report_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__deep_report_0_0_i33);
MR_def_label(__Compare___report__deep_report_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__deep_report_0_0_i37);
MR_def_label(__Compare___report__deep_report_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i174);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___report__deep_report_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___query__display_limit_0_0);

MR_BEGIN_MODULE(report_module2)
	MR_init_entry1(__Unify___report__report_ordering_0_0);
	MR_init_label3(__Unify___report__report_ordering_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__report_ordering_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__report_ordering_0_0_i6);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___query__display_limit_0_0,
		__Unify___report__report_ordering_0_0_i4);
MR_def_label(__Unify___report__report_ordering_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__report_ordering_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___report__report_ordering_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___report__report_ordering_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___report__report_ordering_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__report_ordering_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___query__display_limit_0_0);

MR_BEGIN_MODULE(report_module3)
	MR_init_entry1(__Compare___report__report_ordering_0_0);
	MR_init_label6(__Compare___report__report_ordering_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__report_ordering_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i2);
MR_def_label(__Compare___report__report_ordering_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__report_ordering_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___query__display_limit_0_0,
		__Compare___report__report_ordering_0_0_i5);
MR_def_label(__Compare___report__report_ordering_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__report_ordering_0_0_i9);
MR_def_label(__Compare___report__report_ordering_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__report_ordering_0_0_i13);
MR_def_label(__Compare___report__report_ordering_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___report__report_ordering_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module4)
	MR_init_entry1(__Unify___report__report_proc_0_0);
	MR_init_label2(__Unify___report__report_proc_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__report_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__report_proc_0_0_i4);
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
		MR_GOTO_LAB(__Unify___report__report_proc_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___report__report_proc_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___report__report_proc_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___report__report_proc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__report_proc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module5)
	MR_init_entry1(__Compare___report__report_proc_0_0);
	MR_init_label6(__Compare___report__report_proc_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__report_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__report_proc_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__report_proc_0_0_i2);
MR_def_label(__Compare___report__report_proc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__report_proc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__report_proc_0_0_i5);
MR_def_label(__Compare___report__report_proc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_proc_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__report_proc_0_0_i9);
MR_def_label(__Compare___report__report_proc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_proc_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__report_proc_0_0_i13);
MR_def_label(__Compare___report__report_proc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_proc_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___report__report_proc_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___measurement_units__time_0_0);
MR_decl_entry(__Unify___measurement_units__percent_0_0);
MR_decl_entry(__Unify___measurement_units__memory_0_0);

MR_BEGIN_MODULE(report_module6)
	MR_init_entry1(__Unify___report__row_data_1_0);
	MR_init_label8(__Unify___report__row_data_1_0,4,6,8,10,12,14,16,18)
	MR_init_label8(__Unify___report__row_data_1_0,20,22,24,26,28,30,32,34)
	MR_init_label2(__Unify___report__row_data_1_0,38,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__row_data_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i38);
	}
	MR_incr_sp(65);
	MR_sv(65) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 15);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 16);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 17);
	MR_sv(18) = MR_ctfield(0, MR_tempr1, 18);
	MR_sv(19) = MR_ctfield(0, MR_tempr1, 19);
	MR_sv(20) = MR_ctfield(0, MR_tempr1, 20);
	MR_sv(21) = MR_ctfield(0, MR_tempr1, 21);
	MR_sv(22) = MR_ctfield(0, MR_tempr1, 22);
	MR_sv(23) = MR_ctfield(0, MR_tempr1, 23);
	MR_sv(24) = MR_ctfield(0, MR_tempr1, 24);
	MR_sv(25) = MR_ctfield(0, MR_tempr1, 25);
	MR_sv(26) = MR_ctfield(0, MR_tempr1, 26);
	MR_sv(27) = MR_ctfield(0, MR_tempr1, 27);
	MR_sv(28) = MR_ctfield(0, MR_tempr1, 28);
	MR_sv(29) = MR_ctfield(0, MR_tempr1, 29);
	MR_sv(30) = MR_ctfield(0, MR_tempr1, 30);
	MR_sv(31) = MR_ctfield(0, MR_tempr1, 31);
	MR_sv(32) = MR_ctfield(0, MR_tempr1, 32);
	MR_sv(33) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(34) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(35) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(36) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(37) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(38) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(39) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(40) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(41) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(42) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(43) = MR_ctfield(0, MR_tempr2, 11);
	MR_sv(44) = MR_ctfield(0, MR_tempr2, 12);
	MR_sv(45) = MR_ctfield(0, MR_tempr2, 13);
	MR_sv(46) = MR_ctfield(0, MR_tempr2, 14);
	MR_sv(47) = MR_ctfield(0, MR_tempr2, 15);
	MR_sv(48) = MR_ctfield(0, MR_tempr2, 16);
	MR_sv(49) = MR_ctfield(0, MR_tempr2, 17);
	MR_sv(50) = MR_ctfield(0, MR_tempr2, 18);
	MR_sv(51) = MR_ctfield(0, MR_tempr2, 19);
	MR_sv(52) = MR_ctfield(0, MR_tempr2, 20);
	MR_sv(53) = MR_ctfield(0, MR_tempr2, 21);
	MR_sv(54) = MR_ctfield(0, MR_tempr2, 22);
	MR_sv(55) = MR_ctfield(0, MR_tempr2, 23);
	MR_sv(56) = MR_ctfield(0, MR_tempr2, 24);
	MR_sv(57) = MR_ctfield(0, MR_tempr2, 25);
	MR_sv(58) = MR_ctfield(0, MR_tempr2, 26);
	MR_sv(59) = MR_ctfield(0, MR_tempr2, 27);
	MR_sv(60) = MR_ctfield(0, MR_tempr2, 28);
	MR_sv(61) = MR_ctfield(0, MR_tempr2, 29);
	MR_sv(62) = MR_ctfield(0, MR_tempr2, 30);
	MR_sv(63) = MR_ctfield(0, MR_tempr2, 31);
	MR_sv(64) = MR_ctfield(0, MR_tempr2, 32);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___report__row_data_1_0_i4);
MR_def_label(__Unify___report__row_data_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(1) != MR_sv(33))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(2) != MR_sv(34))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(3) != MR_sv(35))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(4) != MR_sv(36))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(5) != MR_sv(37))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(6) != MR_sv(38))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(39);
	MR_np_call_localret_ent(__Unify___measurement_units__time_0_0,
		__Unify___report__row_data_1_0_i6);
MR_def_label(__Unify___report__row_data_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(40);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__row_data_1_0_i8);
MR_def_label(__Unify___report__row_data_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(41);
	MR_np_call_localret_ent(__Unify___measurement_units__time_0_0,
		__Unify___report__row_data_1_0_i10);
MR_def_label(__Unify___report__row_data_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(10) != MR_sv(42))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(43);
	MR_np_call_localret_ent(__Unify___measurement_units__time_0_0,
		__Unify___report__row_data_1_0_i12);
MR_def_label(__Unify___report__row_data_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(44);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__row_data_1_0_i14);
MR_def_label(__Unify___report__row_data_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(45);
	MR_np_call_localret_ent(__Unify___measurement_units__time_0_0,
		__Unify___report__row_data_1_0_i16);
MR_def_label(__Unify___report__row_data_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(14) != MR_sv(46))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(47);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__row_data_1_0_i18);
MR_def_label(__Unify___report__row_data_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_word_to_float(MR_sv(16)) != MR_word_to_float(MR_sv(48)))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(17) != MR_sv(49))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(50);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__row_data_1_0_i20);
MR_def_label(__Unify___report__row_data_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_word_to_float(MR_sv(19)) != MR_word_to_float(MR_sv(51)))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(20) != MR_sv(52))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(53);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__row_data_1_0_i22);
MR_def_label(__Unify___report__row_data_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_word_to_float(MR_sv(22)) != MR_word_to_float(MR_sv(54)))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(23) != MR_sv(55))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(56);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__row_data_1_0_i24);
MR_def_label(__Unify___report__row_data_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_word_to_float(MR_sv(25)) != MR_word_to_float(MR_sv(57)))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	if ((MR_sv(26) != MR_sv(58))) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(59);
	MR_np_call_localret_ent(__Unify___measurement_units__memory_0_0,
		__Unify___report__row_data_1_0_i26);
MR_def_label(__Unify___report__row_data_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(28);
	MR_r2 = MR_sv(60);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__row_data_1_0_i28);
MR_def_label(__Unify___report__row_data_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(29);
	MR_r2 = MR_sv(61);
	MR_np_call_localret_ent(__Unify___measurement_units__memory_0_0,
		__Unify___report__row_data_1_0_i30);
MR_def_label(__Unify___report__row_data_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(30);
	MR_r2 = MR_sv(62);
	MR_np_call_localret_ent(__Unify___measurement_units__memory_0_0,
		__Unify___report__row_data_1_0_i32);
MR_def_label(__Unify___report__row_data_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(63);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__row_data_1_0_i34);
MR_def_label(__Unify___report__row_data_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__row_data_1_0_i1);
	}
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(64);
	MR_succip_word = MR_sv(65);
	MR_decr_sp(65);
	MR_np_tailcall_ent(__Unify___measurement_units__memory_0_0);
MR_def_label(__Unify___report__row_data_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__row_data_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(65);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___measurement_units__time_0_0);
MR_decl_entry(__Compare___measurement_units__percent_0_0);
MR_decl_entry(private_builtin__builtin_compare_float_3_0);
MR_decl_entry(__Compare___measurement_units__memory_0_0);

MR_BEGIN_MODULE(report_module7)
	MR_init_entry1(__Compare___report__row_data_1_0);
	MR_init_label8(__Compare___report__row_data_1_0,3,2,5,9,13,17,21,25)
	MR_init_label8(__Compare___report__row_data_1_0,29,33,37,41,45,49,53,57)
	MR_init_label8(__Compare___report__row_data_1_0,61,65,69,73,77,81,85,89)
	MR_init_label8(__Compare___report__row_data_1_0,93,97,101,105,109,113,117,121)
	MR_init_label3(__Compare___report__row_data_1_0,125,129,269)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__row_data_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i3);
	}
	MR_incr_sp(65);
	MR_sv(65) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___report__row_data_1_0_i2);
MR_def_label(__Compare___report__row_data_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__row_data_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(2);
	MR_sv(64) = MR_ctfield(0, MR_tempr7, 32);
	MR_sv(63) = MR_ctfield(0, MR_tempr7, 31);
	MR_sv(62) = MR_ctfield(0, MR_tempr7, 30);
	MR_sv(61) = MR_ctfield(0, MR_tempr7, 29);
	MR_sv(60) = MR_ctfield(0, MR_tempr7, 28);
	MR_sv(59) = MR_ctfield(0, MR_tempr7, 27);
	MR_sv(58) = MR_ctfield(0, MR_tempr7, 26);
	MR_sv(57) = MR_ctfield(0, MR_tempr7, 25);
	MR_sv(56) = MR_ctfield(0, MR_tempr7, 24);
	MR_sv(55) = MR_ctfield(0, MR_tempr7, 23);
	MR_sv(54) = MR_ctfield(0, MR_tempr7, 22);
	MR_sv(53) = MR_ctfield(0, MR_tempr7, 21);
	MR_sv(52) = MR_ctfield(0, MR_tempr7, 20);
	MR_sv(51) = MR_ctfield(0, MR_tempr7, 19);
	MR_sv(50) = MR_ctfield(0, MR_tempr7, 18);
	MR_sv(49) = MR_ctfield(0, MR_tempr7, 17);
	MR_sv(48) = MR_ctfield(0, MR_tempr7, 16);
	MR_sv(47) = MR_ctfield(0, MR_tempr7, 15);
	MR_sv(46) = MR_ctfield(0, MR_tempr7, 14);
	MR_sv(45) = MR_ctfield(0, MR_tempr7, 13);
	MR_sv(44) = MR_ctfield(0, MR_tempr7, 12);
	MR_sv(43) = MR_ctfield(0, MR_tempr7, 11);
	MR_sv(42) = MR_ctfield(0, MR_tempr7, 10);
	MR_sv(41) = MR_ctfield(0, MR_tempr7, 9);
	MR_sv(40) = MR_ctfield(0, MR_tempr7, 8);
	MR_sv(39) = MR_ctfield(0, MR_tempr7, 7);
	MR_sv(38) = MR_ctfield(0, MR_tempr7, 6);
	MR_sv(37) = MR_ctfield(0, MR_tempr7, 5);
	MR_sv(36) = MR_ctfield(0, MR_tempr7, 4);
	MR_sv(35) = MR_ctfield(0, MR_tempr7, 3);
	MR_sv(34) = MR_ctfield(0, MR_tempr7, 2);
	MR_sv(33) = MR_ctfield(0, MR_tempr7, 1);
	MR_tempr8 = MR_sv(1);
	MR_sv(32) = MR_ctfield(0, MR_tempr8, 32);
	MR_sv(31) = MR_ctfield(0, MR_tempr8, 31);
	MR_sv(30) = MR_ctfield(0, MR_tempr8, 30);
	MR_sv(29) = MR_ctfield(0, MR_tempr8, 29);
	MR_sv(28) = MR_ctfield(0, MR_tempr8, 28);
	MR_sv(27) = MR_ctfield(0, MR_tempr8, 27);
	MR_sv(26) = MR_ctfield(0, MR_tempr8, 26);
	MR_sv(25) = MR_ctfield(0, MR_tempr8, 25);
	MR_sv(24) = MR_ctfield(0, MR_tempr8, 24);
	MR_sv(23) = MR_ctfield(0, MR_tempr8, 23);
	MR_sv(22) = MR_ctfield(0, MR_tempr8, 22);
	MR_sv(21) = MR_ctfield(0, MR_tempr8, 21);
	MR_sv(20) = MR_ctfield(0, MR_tempr8, 20);
	MR_sv(19) = MR_ctfield(0, MR_tempr8, 19);
	MR_sv(18) = MR_ctfield(0, MR_tempr8, 18);
	MR_sv(17) = MR_ctfield(0, MR_tempr8, 17);
	MR_sv(16) = MR_ctfield(0, MR_tempr8, 16);
	MR_sv(15) = MR_ctfield(0, MR_tempr8, 15);
	MR_sv(14) = MR_ctfield(0, MR_tempr8, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr8, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr8, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr8, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr8, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr8, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr8, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr8, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr8, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr8, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr8, 4);
	MR_tempr1 = MR_ctfield(0, MR_tempr8, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr8, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr8, 1);
	MR_tempr4 = MR_tempr8;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr7;
	MR_sv(2) = MR_tempr2;
	MR_tempr6 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	MR_r3 = MR_ctfield(0, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___report__row_data_1_0_i5);
MR_def_label(__Compare___report__row_data_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i9);
MR_def_label(__Compare___report__row_data_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(34);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i13);
MR_def_label(__Compare___report__row_data_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i17);
MR_def_label(__Compare___report__row_data_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(36);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i21);
MR_def_label(__Compare___report__row_data_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(37);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i25);
MR_def_label(__Compare___report__row_data_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(38);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i29);
MR_def_label(__Compare___report__row_data_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(39);
	MR_np_call_localret_ent(__Compare___measurement_units__time_0_0,
		__Compare___report__row_data_1_0_i33);
MR_def_label(__Compare___report__row_data_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(40);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__row_data_1_0_i37);
MR_def_label(__Compare___report__row_data_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(41);
	MR_np_call_localret_ent(__Compare___measurement_units__time_0_0,
		__Compare___report__row_data_1_0_i41);
MR_def_label(__Compare___report__row_data_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(42);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i45);
MR_def_label(__Compare___report__row_data_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(43);
	MR_np_call_localret_ent(__Compare___measurement_units__time_0_0,
		__Compare___report__row_data_1_0_i49);
MR_def_label(__Compare___report__row_data_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(44);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__row_data_1_0_i53);
MR_def_label(__Compare___report__row_data_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(45);
	MR_np_call_localret_ent(__Compare___measurement_units__time_0_0,
		__Compare___report__row_data_1_0_i57);
MR_def_label(__Compare___report__row_data_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(46);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i61);
MR_def_label(__Compare___report__row_data_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(47);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__row_data_1_0_i65);
MR_def_label(__Compare___report__row_data_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(48);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___report__row_data_1_0_i69);
MR_def_label(__Compare___report__row_data_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(49);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i73);
MR_def_label(__Compare___report__row_data_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(50);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__row_data_1_0_i77);
MR_def_label(__Compare___report__row_data_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(51);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___report__row_data_1_0_i81);
MR_def_label(__Compare___report__row_data_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(52);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i85);
MR_def_label(__Compare___report__row_data_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(53);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__row_data_1_0_i89);
MR_def_label(__Compare___report__row_data_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(54);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___report__row_data_1_0_i93);
MR_def_label(__Compare___report__row_data_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(55);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i97);
MR_def_label(__Compare___report__row_data_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(56);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__row_data_1_0_i101);
MR_def_label(__Compare___report__row_data_1_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(57);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___report__row_data_1_0_i105);
MR_def_label(__Compare___report__row_data_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(26);
	MR_r2 = MR_sv(58);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__row_data_1_0_i109);
MR_def_label(__Compare___report__row_data_1_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(59);
	MR_np_call_localret_ent(__Compare___measurement_units__memory_0_0,
		__Compare___report__row_data_1_0_i113);
MR_def_label(__Compare___report__row_data_1_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(28);
	MR_r2 = MR_sv(60);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__row_data_1_0_i117);
MR_def_label(__Compare___report__row_data_1_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(29);
	MR_r2 = MR_sv(61);
	MR_np_call_localret_ent(__Compare___measurement_units__memory_0_0,
		__Compare___report__row_data_1_0_i121);
MR_def_label(__Compare___report__row_data_1_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(30);
	MR_r2 = MR_sv(62);
	MR_np_call_localret_ent(__Compare___measurement_units__memory_0_0,
		__Compare___report__row_data_1_0_i125);
MR_def_label(__Compare___report__row_data_1_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(63);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__row_data_1_0_i129);
MR_def_label(__Compare___report__row_data_1_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__row_data_1_0_i269);
	}
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(64);
	MR_succip_word = MR_sv(65);
	MR_decr_sp(65);
	MR_np_tailcall_ent(__Compare___measurement_units__memory_0_0);
MR_def_label(__Compare___report__row_data_1_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(65);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__report_maybe_bunch_0(void)
{
	report_module0();
	report_module1();
	report_module2();
	report_module3();
	report_module4();
	report_module5();
	report_module6();
	report_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__report__init(void);
void mercury__report__init_type_tables(void);
void mercury__report__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__report__init_complexity_procs(void);
#endif

void mercury__report__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__report_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_row_data_1,
		report__row_data_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_report_proc_0,
		report__report_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_report_ordering_0,
		report__report_ordering_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_deep_report_0,
		report__deep_report_0_0);
	mercury__report__init_debugger();
}

void mercury__report__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_row_data_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_report_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_report_ordering_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_deep_report_0);
	}
}


void mercury__report__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__report);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__report__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
