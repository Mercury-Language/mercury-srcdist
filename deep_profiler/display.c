/*
** Automatically generated from `display.m'
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
INIT mercury__display__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "display.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "display.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "display.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "display.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "display.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "display.c"
#line 48 "display.c"
#include "display.mh"

#line 51 "display.c"
#line 52 "display.c"
#ifndef DISPLAY_DECL_GUARD
#define DISPLAY_DECL_GUARD

#line 56 "display.c"
#line 57 "display.c"

#endif
#line 60 "display.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_display__type_ctor_info_table_row_0,
	mercury_data_display__type_ctor_info_table_header_cell_0,
	mercury_data_display__type_ctor_info_table_header_0,
	mercury_data_display__type_ctor_info_table_data_0,
	mercury_data_display__type_ctor_info_table_col_class_0,
	mercury_data_display__type_ctor_info_table_class_0,
	mercury_data_display__type_ctor_info_table_cell_0,
	mercury_data_display__type_ctor_info_table_0,
	mercury_data_display__type_ctor_info_list_class_0,
	mercury_data_display__type_ctor_info_link_class_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_display__type_ctor_info_display_item_0,
	mercury_data_display__type_ctor_info_display_0,
	mercury_data_display__type_ctor_info_deep_link_0;
MR_decl_label3(display__table_add_header_col_5_0, 3,4,5)
MR_decl_label1(display__table_maybe_add_header_col_5_0, 3)
MR_decl_label4(__Unify___display__deep_link_0_0, 4,6,8,1)
MR_decl_label3(__Unify___display__display_0_0, 4,8,1)
MR_decl_label7(__Unify___display__display_item_0_0, 15,17,9,11,5,25,1)
MR_decl_label3(__Unify___display__table_0_0, 4,8,1)
MR_decl_label3(__Unify___display__table_cell_0_0, 12,5,1)
MR_decl_label8(__Unify___display__table_data_0_0, 5,7,9,30,13,15,17,21)
MR_decl_label2(__Unify___display__table_data_0_0, 31,1)
MR_decl_label1(__Unify___display__table_header_0_0, 6)
MR_decl_label5(__Unify___display__table_header_cell_0_0, 7,17,5,10,1)
MR_decl_label3(__Unify___display__table_row_0_0, 16,5,1)
MR_decl_label6(__Compare___display__deep_link_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___display__display_0_0, 3,2,5,21)
MR_decl_label8(__Compare___display__display_item_0_0, 3,37,48,53,16,19,21,25)
MR_decl_label5(__Compare___display__display_item_0_0, 18,5,9,7,96)
MR_decl_label6(__Compare___display__table_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___display__table_cell_0_0, 18,7,5,9)
MR_decl_label8(__Compare___display__table_data_0_0, 3,5,7,18,19,22,32,33)
MR_decl_label8(__Compare___display__table_data_0_0, 37,46,116,47,52,54,58,71)
MR_decl_label6(__Compare___display__table_data_0_0, 77,85,144,91,92,282)
MR_decl_label2(__Compare___display__table_header_0_0, 3,2)
MR_decl_label8(__Compare___display__table_header_cell_0_0, 3,2,9,7,5,15,17,21)
MR_decl_label1(__Compare___display__table_header_cell_0_0, 63)
MR_decl_label5(__Compare___display__table_row_0_0, 3,2,7,5,10)
MR_def_extern_entry(display__table_add_header_col_5_0)
MR_def_extern_entry(display__table_maybe_add_header_col_5_0)
MR_def_extern_entry(__Unify___display__deep_link_0_0)
MR_def_extern_entry(__Compare___display__deep_link_0_0)
MR_def_extern_entry(__Unify___display__display_0_0)
MR_def_extern_entry(__Compare___display__display_0_0)
MR_def_extern_entry(__Unify___display__display_item_0_0)
MR_def_extern_entry(__Compare___display__display_item_0_0)
MR_def_extern_entry(__Unify___display__link_class_0_0)
MR_def_extern_entry(__Compare___display__link_class_0_0)
MR_def_extern_entry(__Unify___display__list_class_0_0)
MR_def_extern_entry(__Compare___display__list_class_0_0)
MR_def_extern_entry(__Unify___display__table_0_0)
MR_def_extern_entry(__Compare___display__table_0_0)
MR_def_extern_entry(__Unify___display__table_cell_0_0)
MR_def_extern_entry(__Compare___display__table_cell_0_0)
MR_def_extern_entry(__Unify___display__table_class_0_0)
MR_def_extern_entry(__Compare___display__table_class_0_0)
MR_def_extern_entry(__Unify___display__table_col_class_0_0)
MR_def_extern_entry(__Compare___display__table_col_class_0_0)
MR_def_extern_entry(__Unify___display__table_data_0_0)
MR_def_extern_entry(__Compare___display__table_data_0_0)
MR_def_extern_entry(__Unify___display__table_header_0_0)
MR_def_extern_entry(__Compare___display__table_header_0_0)
MR_def_extern_entry(__Unify___display__table_header_cell_0_0)
MR_def_extern_entry(__Compare___display__table_header_cell_0_0)
MR_def_extern_entry(__Unify___display__table_row_0_0)
MR_def_extern_entry(__Compare___display__table_row_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_cell_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_table_cell_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_table_cell_0
}};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_row_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_table_cell_0
};

const MR_ConstString mercury_data_display__field_names_table_row_0_0[] = {
	"tr_cells"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_row_0_0 = {
	"table_row",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_row_0_0,
	mercury_data_display__field_names_table_row_0_0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_data_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_row_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_data_0
};

const MR_ConstString mercury_data_display__field_names_table_row_0_1[] = {
	"tsh_text"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_row_0_1 = {
	"table_section_header",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_row_0_1,
	mercury_data_display__field_names_table_row_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_row_0_0[] = {
	&mercury_data_display__du_functor_desc_table_row_0_0

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_row_0_1[] = {
	&mercury_data_display__du_functor_desc_table_row_0_1

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_row_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_row_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_row_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_row_0[] = {
	&mercury_data_display__du_functor_desc_table_row_0_0,
	&mercury_data_display__du_functor_desc_table_row_0_1
};

const MR_Integer mercury_data_display__functor_number_map_table_row_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_row_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_row_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_row_0_0)),
	"display",
	"table_row",
	{ (void *)mercury_data_display__du_name_ordered_table_row_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_row_0 },
	2,
	4,
	mercury_data_display__functor_number_map_table_row_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_col_class_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_header_cell_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_data_0,
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_col_class_0
};

const MR_ConstString mercury_data_display__field_names_table_header_cell_0_0[] = {
	"thc_contents",
	"thc_class"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_header_cell_0_0 = {
	"table_header_cell",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_header_cell_0_0,
	mercury_data_display__field_names_table_header_cell_0_0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_table_data_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_table_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_header_cell_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_table_data_0,
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_col_class_0
};

const MR_ConstString mercury_data_display__field_names_table_header_cell_0_1[] = {
	"thg_title",
	"thg_subtitles",
	"thg_class"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_header_cell_0_1 = {
	"table_header_group",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_header_cell_0_1,
	mercury_data_display__field_names_table_header_cell_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_header_cell_0_0[] = {
	&mercury_data_display__du_functor_desc_table_header_cell_0_0

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_header_cell_0_1[] = {
	&mercury_data_display__du_functor_desc_table_header_cell_0_1

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_header_cell_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_header_cell_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_header_cell_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_header_cell_0[] = {
	&mercury_data_display__du_functor_desc_table_header_cell_0_0,
	&mercury_data_display__du_functor_desc_table_header_cell_0_1
};

const MR_Integer mercury_data_display__functor_number_map_table_header_cell_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_cell_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_header_cell_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_header_cell_0_0)),
	"display",
	"table_header_cell",
	{ (void *)mercury_data_display__du_name_ordered_table_header_cell_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_header_cell_0 },
	2,
	4,
	mercury_data_display__functor_number_map_table_header_cell_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_cell_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_table_header_cell_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_table_header_cell_0
}};

static const MR_NotagFunctorDesc mercury_data_display__notag_functor_desc_table_header_0 = {
	"table_header",
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_table_header_cell_0,
	"th_cells"
};

const MR_Integer mercury_data_display__functor_number_map_table_header_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_header_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_header_0_0)),
	"display",
	"table_header",
	{ (void *)&mercury_data_display__notag_functor_desc_table_header_0 },
	{ (void *)&mercury_data_display__notag_functor_desc_table_header_0 },
	1,
	4,
	mercury_data_display__functor_number_map_table_header_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_0 = {
	"f",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_1 = {
	"i",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_deep_link_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_deep_link_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_2 = {
	"l",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_units_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_units_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_units_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_3 = {
	"m",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_4 = {
	"p",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_5 = {
	"s",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_time_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_6 = {
	"t",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_6,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_data_0_0[] = {
	&mercury_data_display__du_functor_desc_table_data_0_0

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_data_0_1[] = {
	&mercury_data_display__du_functor_desc_table_data_0_1

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_data_0_2[] = {
	&mercury_data_display__du_functor_desc_table_data_0_2

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_data_0_3[] = {
	&mercury_data_display__du_functor_desc_table_data_0_3,
	&mercury_data_display__du_functor_desc_table_data_0_4,
	&mercury_data_display__du_functor_desc_table_data_0_5,
	&mercury_data_display__du_functor_desc_table_data_0_6

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_data_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_data_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_data_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_display__du_stag_ordered_table_data_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_data_0[] = {
	&mercury_data_display__du_functor_desc_table_data_0_0,
	&mercury_data_display__du_functor_desc_table_data_0_1,
	&mercury_data_display__du_functor_desc_table_data_0_2,
	&mercury_data_display__du_functor_desc_table_data_0_3,
	&mercury_data_display__du_functor_desc_table_data_0_4,
	&mercury_data_display__du_functor_desc_table_data_0_5,
	&mercury_data_display__du_functor_desc_table_data_0_6
};

const MR_Integer mercury_data_display__functor_number_map_table_data_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_data_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_data_0_0)),
	"display",
	"table_data",
	{ (void *)mercury_data_display__du_name_ordered_table_data_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_data_0 },
	7,
	4,
	mercury_data_display__functor_number_map_table_data_0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_0 = {
	"table_col_class_allocations",
	0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_1 = {
	"table_col_class_callseqs",
	1
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_2 = {
	"table_col_class_memory",
	2
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_3 = {
	"table_col_class_no_class",
	3
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_4 = {
	"table_col_class_number",
	4
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_5 = {
	"table_col_class_ordinal_rank",
	5
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_6 = {
	"table_col_class_port_counts",
	6
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_7 = {
	"table_col_class_proc",
	7
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_col_class_0_8 = {
	"table_col_class_ticks_and_times",
	8
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_table_col_class_0[] = {
	&mercury_data_display__enum_functor_desc_table_col_class_0_0,
	&mercury_data_display__enum_functor_desc_table_col_class_0_1,
	&mercury_data_display__enum_functor_desc_table_col_class_0_2,
	&mercury_data_display__enum_functor_desc_table_col_class_0_3,
	&mercury_data_display__enum_functor_desc_table_col_class_0_4,
	&mercury_data_display__enum_functor_desc_table_col_class_0_5,
	&mercury_data_display__enum_functor_desc_table_col_class_0_6,
	&mercury_data_display__enum_functor_desc_table_col_class_0_7,
	&mercury_data_display__enum_functor_desc_table_col_class_0_8
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_table_col_class_0[] = {
	&mercury_data_display__enum_functor_desc_table_col_class_0_0,
	&mercury_data_display__enum_functor_desc_table_col_class_0_1,
	&mercury_data_display__enum_functor_desc_table_col_class_0_2,
	&mercury_data_display__enum_functor_desc_table_col_class_0_3,
	&mercury_data_display__enum_functor_desc_table_col_class_0_4,
	&mercury_data_display__enum_functor_desc_table_col_class_0_5,
	&mercury_data_display__enum_functor_desc_table_col_class_0_6,
	&mercury_data_display__enum_functor_desc_table_col_class_0_7,
	&mercury_data_display__enum_functor_desc_table_col_class_0_8
};

const MR_Integer mercury_data_display__functor_number_map_table_col_class_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_col_class_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_col_class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_col_class_0_0)),
	"display",
	"table_col_class",
	{ (void *)mercury_data_display__enum_name_ordered_table_col_class_0 },
	{ (void *)mercury_data_display__enum_value_ordered_table_col_class_0 },
	9,
	4,
	mercury_data_display__functor_number_map_table_col_class_0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_class_0_0 = {
	"table_class_menu",
	0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_class_0_1 = {
	"table_class_top_procs",
	1
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_table_class_0[] = {
	&mercury_data_display__enum_functor_desc_table_class_0_0,
	&mercury_data_display__enum_functor_desc_table_class_0_1
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_table_class_0[] = {
	&mercury_data_display__enum_functor_desc_table_class_0_0,
	&mercury_data_display__enum_functor_desc_table_class_0_1
};

const MR_Integer mercury_data_display__functor_number_map_table_class_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_class_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_class_0_0)),
	"display",
	"table_class",
	{ (void *)mercury_data_display__enum_name_ordered_table_class_0 },
	{ (void *)mercury_data_display__enum_value_ordered_table_class_0 },
	2,
	4,
	mercury_data_display__functor_number_map_table_class_0
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_cell_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_data_0
};

const MR_ConstString mercury_data_display__field_names_table_cell_0_0[] = {
	"tc_text"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_cell_0_0 = {
	"table_cell",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_cell_0_0,
	mercury_data_display__field_names_table_cell_0_0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_cell_0_1 = {
	"table_empty_cell",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_cell_0_0[] = {
	&mercury_data_display__du_functor_desc_table_cell_0_1

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_cell_0_1[] = {
	&mercury_data_display__du_functor_desc_table_cell_0_0

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_cell_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_display__du_stag_ordered_table_cell_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_cell_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_cell_0[] = {
	&mercury_data_display__du_functor_desc_table_cell_0_0,
	&mercury_data_display__du_functor_desc_table_cell_0_1
};

const MR_Integer mercury_data_display__functor_number_map_table_cell_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_cell_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_cell_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_cell_0_0)),
	"display",
	"table_cell",
	{ (void *)mercury_data_display__du_name_ordered_table_cell_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_cell_0 },
	2,
	4,
	mercury_data_display__functor_number_map_table_cell_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1display__type_ctor_info_table_header_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_table_header_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_row_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_table_row_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_table_row_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_class_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_class_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1display__type_ctor_info_table_header_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_table_row_0
};

const MR_ConstString mercury_data_display__field_names_table_0_0[] = {
	"table_class",
	"table_num_cols",
	"table_header",
	"table_rows"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_0_0 = {
	"table",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_0_0,
	mercury_data_display__field_names_table_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_0_0[] = {
	&mercury_data_display__du_functor_desc_table_0_0

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_0[] = {
	&mercury_data_display__du_functor_desc_table_0_0
};

const MR_Integer mercury_data_display__functor_number_map_table_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_0_0)),
	"display",
	"table",
	{ (void *)mercury_data_display__du_name_ordered_table_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_0 },
	1,
	4,
	mercury_data_display__functor_number_map_table_0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_list_class_0_0 = {
	"list_class_vertical_no_bullets",
	0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_list_class_0_1 = {
	"list_class_vertical_bullets",
	1
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_list_class_0_2 = {
	"list_class_horizontal",
	2
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_list_class_0[] = {
	&mercury_data_display__enum_functor_desc_list_class_0_0,
	&mercury_data_display__enum_functor_desc_list_class_0_1,
	&mercury_data_display__enum_functor_desc_list_class_0_2
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_list_class_0[] = {
	&mercury_data_display__enum_functor_desc_list_class_0_2,
	&mercury_data_display__enum_functor_desc_list_class_0_1,
	&mercury_data_display__enum_functor_desc_list_class_0_0
};

const MR_Integer mercury_data_display__functor_number_map_list_class_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_list_class_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__list_class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__list_class_0_0)),
	"display",
	"list_class",
	{ (void *)mercury_data_display__enum_name_ordered_list_class_0 },
	{ (void *)mercury_data_display__enum_value_ordered_list_class_0 },
	3,
	4,
	mercury_data_display__functor_number_map_list_class_0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_link_class_0_0 = {
	"link_class_link",
	0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_link_class_0_1 = {
	"link_class_control",
	1
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_link_class_0[] = {
	&mercury_data_display__enum_functor_desc_link_class_0_0,
	&mercury_data_display__enum_functor_desc_link_class_0_1
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_link_class_0[] = {
	&mercury_data_display__enum_functor_desc_link_class_0_1,
	&mercury_data_display__enum_functor_desc_link_class_0_0
};

const MR_Integer mercury_data_display__functor_number_map_link_class_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_link_class_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__link_class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__link_class_0_0)),
	"display",
	"link_class",
	{ (void *)mercury_data_display__enum_name_ordered_link_class_0 },
	{ (void *)mercury_data_display__enum_value_ordered_link_class_0 },
	2,
	4,
	mercury_data_display__functor_number_map_link_class_0
};

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_0 = {
	"display_message",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_1 = {
	"display_table",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_1,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_display_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_display_item_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_display_item_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_list_class_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_list_class_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_display_item_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_2 = {
	"display_list",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_deep_link_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_3 = {
	"display_command_link",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_item_0_0[] = {
	&mercury_data_display__du_functor_desc_display_item_0_0

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_item_0_1[] = {
	&mercury_data_display__du_functor_desc_display_item_0_1

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_item_0_2[] = {
	&mercury_data_display__du_functor_desc_display_item_0_2

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_item_0_3[] = {
	&mercury_data_display__du_functor_desc_display_item_0_3

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_display_item_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_display_item_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_display_item_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_display_item_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_display_item_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_display_item_0[] = {
	&mercury_data_display__du_functor_desc_display_item_0_3,
	&mercury_data_display__du_functor_desc_display_item_0_2,
	&mercury_data_display__du_functor_desc_display_item_0_0,
	&mercury_data_display__du_functor_desc_display_item_0_1
};

const MR_Integer mercury_data_display__functor_number_map_display_item_0[] = {
	2,
	3,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_display_item_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__display_item_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__display_item_0_0)),
	"display",
	"display_item",
	{ (void *)mercury_data_display__du_name_ordered_display_item_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_display_item_0 },
	4,
	4,
	mercury_data_display__functor_number_map_display_item_0
};

const MR_PseudoTypeInfo mercury_data_display__field_types_display_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_display_item_0
};

const MR_ConstString mercury_data_display__field_names_display_0_0[] = {
	"title",
	"content"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_0_0 = {
	"display",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_0_0,
	mercury_data_display__field_names_display_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_0_0[] = {
	&mercury_data_display__du_functor_desc_display_0_0

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_display_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_display_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_display_0[] = {
	&mercury_data_display__du_functor_desc_display_0_0
};

const MR_Integer mercury_data_display__functor_number_map_display_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_display_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__display_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__display_0_0)),
	"display",
	"display",
	{ (void *)mercury_data_display__du_name_ordered_display_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_display_0 },
	1,
	4,
	mercury_data_display__functor_number_map_display_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_query__type_ctor_info_preferences_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_link_class_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_deep_link_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cmd_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1query__type_ctor_info_preferences_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_link_class_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_deep_link_0_0 = {
	"deep_link",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_deep_link_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_deep_link_0_0[] = {
	&mercury_data_display__du_functor_desc_deep_link_0_0

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_deep_link_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_deep_link_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_deep_link_0[] = {
	&mercury_data_display__du_functor_desc_deep_link_0_0
};

const MR_Integer mercury_data_display__functor_number_map_deep_link_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_deep_link_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__deep_link_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__deep_link_0_0)),
	"display",
	"deep_link",
	{ (void *)mercury_data_display__du_name_ordered_deep_link_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_deep_link_0 },
	1,
	4,
	mercury_data_display__functor_number_map_deep_link_0
};

MR_decl_entry(list__cons_3_0);
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(display_module0)
	MR_init_entry1(display__table_add_header_col_5_0);
	MR_init_label3(display__table_add_header_col_5_0,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__display__table_add_header_col_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(display__table_add_header_col_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_cell);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		display__table_add_header_col_5_0_i5);
MR_def_label(display__table_add_header_col_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_data);
	MR_r2 = MR_ctfield(1, MR_sv(1), 1);
	MR_np_call_localret_ent(list__length_2_0,
		display__table_add_header_col_5_0_i4);
MR_def_label(display__table_add_header_col_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_cell);
	MR_np_call_localret_ent(list__cons_3_0,
		display__table_add_header_col_5_0_i5);
MR_def_label(display__table_add_header_col_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module1)
	MR_init_entry1(display__table_maybe_add_header_col_5_0);
	MR_init_label1(display__table_maybe_add_header_col_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__display__table_maybe_add_header_col_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(display__table_maybe_add_header_col_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(display__table_maybe_add_header_col_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(display__table_add_header_col_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___query__cmd_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(display_module2)
	MR_init_entry1(__Unify___display__deep_link_0_0);
	MR_init_label4(__Unify___display__deep_link_0_0,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__deep_link_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__deep_link_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___query__cmd_0_0,
		__Unify___display__deep_link_0_0_i4);
MR_def_label(__Unify___display__deep_link_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__deep_link_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, preferences);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___display__deep_link_0_0_i6);
MR_def_label(__Unify___display__deep_link_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__deep_link_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(5)) != 0)) {
		MR_GOTO_LAB(__Unify___display__deep_link_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___display__deep_link_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__deep_link_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___query__cmd_0_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(display_module3)
	MR_init_entry1(__Compare___display__deep_link_0_0);
	MR_init_label6(__Compare___display__deep_link_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__deep_link_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__deep_link_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__deep_link_0_0_i2);
MR_def_label(__Compare___display__deep_link_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__deep_link_0_0,2)
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
	MR_np_call_localret_ent(__Compare___query__cmd_0_0,
		__Compare___display__deep_link_0_0_i5);
MR_def_label(__Compare___display__deep_link_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__deep_link_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, preferences);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___display__deep_link_0_0_i9);
MR_def_label(__Compare___display__deep_link_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__deep_link_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___display__deep_link_0_0_i13);
MR_def_label(__Compare___display__deep_link_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__deep_link_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__deep_link_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(display_module4)
	MR_init_entry1(__Unify___display__display_0_0);
	MR_init_label3(__Unify___display__display_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__display_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__display_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___display__display_0_0_i4);
MR_def_label(__Unify___display__display_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__display_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___display__display_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__display_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(display_module5)
	MR_init_entry1(__Compare___display__display_0_0);
	MR_init_label4(__Compare___display__display_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__display_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__display_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__display_0_0_i2);
MR_def_label(__Compare___display__display_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__display_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___display__display_0_0_i5);
MR_def_label(__Compare___display__display_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__display_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___display__display_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module6)
	MR_init_entry1(__Unify___display__display_item_0_0);
	MR_init_label7(__Unify___display__display_item_0_0,15,17,9,11,5,25,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__display_item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i25);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___display__display_item_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___display__display_item_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___display__display_item_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___display__display_item_0_0_i5));
MR_def_label(__Unify___display__display_item_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___display__display_item_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__table_0_0);
MR_def_label(__Unify___display__display_item_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r3 = MR_ctfield(2, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___display__display_item_0_0_i11);
MR_def_label(__Unify___display__display_item_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___display__display_item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 0);
	MR_r2 = MR_ctfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__deep_link_0_0);
MR_def_label(__Unify___display__display_item_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__display_item_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module7)
	MR_init_entry1(__Compare___display__display_item_0_0);
	MR_init_label8(__Compare___display__display_item_0_0,3,37,48,53,16,19,21,25)
	MR_init_label5(__Compare___display__display_item_0_0,18,5,9,7,96)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__display_item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___display__display_item_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i48) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i5));
MR_def_label(__Compare___display__display_item_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__display_item_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i18);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___display__display_item_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___display__display_item_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i53) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i18));
MR_def_label(__Compare___display__display_item_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___display__table_0_0);
MR_def_label(__Compare___display__display_item_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___display__display_item_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___display__display_item_0_0_i18));
MR_def_label(__Compare___display__display_item_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___display__display_item_0_0_i21);
MR_def_label(__Compare___display__display_item_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i96);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___display__display_item_0_0_i25);
MR_def_label(__Compare___display__display_item_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i96);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___display__display_item_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i7);
	}
MR_def_label(__Compare___display__display_item_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 0);
	MR_r2 = MR_ctfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___display__deep_link_0_0);
MR_def_label(__Compare___display__display_item_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module8)
	MR_init_entry1(__Unify___display__link_class_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__link_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module9)
	MR_init_entry1(__Compare___display__link_class_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__link_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module10)
	MR_init_entry1(__Unify___display__list_class_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__list_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module11)
	MR_init_entry1(__Compare___display__list_class_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__list_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module12)
	MR_init_entry1(__Unify___display__table_0_0);
	MR_init_label3(__Unify___display__table_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_0_0_i8);
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
		MR_GOTO_LAB(__Unify___display__table_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___display__table_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header);
	MR_r2 = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = MR_ctfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___display__table_0_0_i4);
MR_def_label(__Unify___display__table_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__table_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_row);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___display__table_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module13)
	MR_init_entry1(__Compare___display__table_0_0);
	MR_init_label6(__Compare___display__table_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__table_0_0_i2);
MR_def_label(__Compare___display__table_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__table_0_0,2)
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
		__Compare___display__table_0_0_i5);
MR_def_label(__Compare___display__table_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___display__table_0_0_i9);
MR_def_label(__Compare___display__table_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___display__table_0_0_i13);
MR_def_label(__Compare___display__table_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_row);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___display__table_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module14)
	MR_init_entry1(__Unify___display__table_cell_0_0);
	MR_init_label3(__Unify___display__table_cell_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_cell_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_cell_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___display__table_cell_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___display__table_cell_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___display__table_cell_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__table_data_0_0);
MR_def_label(__Unify___display__table_cell_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module15)
	MR_init_entry1(__Compare___display__table_cell_0_0);
	MR_init_label4(__Compare___display__table_cell_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_cell_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i7);
	}
MR_def_label(__Compare___display__table_cell_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_cell_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_cell_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___display__table_data_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module16)
	MR_init_entry1(__Unify___display__table_class_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module17)
	MR_init_entry1(__Compare___display__table_class_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module18)
	MR_init_entry1(__Unify___display__table_col_class_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_col_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module19)
	MR_init_entry1(__Compare___display__table_col_class_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_col_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurement_units__time_0_0);
MR_decl_entry(__Unify___measurement_units__memory_0_0);
MR_decl_entry(__Unify___measurement_units__percent_0_0);

MR_BEGIN_MODULE(display_module20)
	MR_init_entry1(__Unify___display__table_data_0_0);
	MR_init_label8(__Unify___display__table_data_0_0,5,7,9,30,13,15,17,21)
	MR_init_label2(__Unify___display__table_data_0_0,31,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i31);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___display__table_data_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___display__table_data_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___display__table_data_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___display__table_data_0_0_i30));
MR_def_label(__Unify___display__table_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___display__table_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___display__table_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___display__deep_link_0_0);
MR_def_label(__Unify___display__table_data_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i13);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i17);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___measurement_units__time_0_0);
	}
MR_def_label(__Unify___display__table_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___measurement_units__memory_0_0,
		__Unify___display__table_data_0_0_i15);
MR_def_label(__Unify___display__table_data_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___display__table_data_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___measurement_units__percent_0_0);
MR_def_label(__Unify___display__table_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___display__table_data_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);
MR_decl_entry(__Compare___measurement_units__time_0_0);
MR_decl_entry(__Compare___measurement_units__memory_0_0);
MR_decl_entry(__Compare___measurement_units__percent_0_0);

MR_BEGIN_MODULE(display_module21)
	MR_init_entry1(__Compare___display__table_data_0_0);
	MR_init_label8(__Compare___display__table_data_0_0,3,5,7,18,19,22,32,33)
	MR_init_label8(__Compare___display__table_data_0_0,37,46,116,47,52,54,58,71)
	MR_init_label6(__Compare___display__table_data_0_0,77,85,144,91,92,282)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___display__table_data_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i116));
MR_def_label(__Compare___display__table_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__table_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___display__table_data_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i18));
MR_def_label(__Compare___display__table_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___display__table_data_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___display__table_data_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___display__table_data_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i32));
MR_def_label(__Compare___display__table_data_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__table_data_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___display__table_data_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___display__table_data_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___display__table_data_0_0_i46));
MR_def_label(__Compare___display__table_data_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___display__deep_link_0_0);
MR_def_label(__Compare___display__table_data_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___display__table_data_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i47);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i71);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i85);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___measurement_units__time_0_0);
	}
MR_def_label(__Compare___display__table_data_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i52);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___display__table_data_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___measurement_units__memory_0_0,
		__Compare___display__table_data_0_0_i54);
MR_def_label(__Compare___display__table_data_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i282);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___display__table_data_0_0_i58);
MR_def_label(__Compare___display__table_data_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i282);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__table_data_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i77);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i144);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___display__table_data_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___measurement_units__percent_0_0);
MR_def_label(__Compare___display__table_data_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i92);
	}
	}
MR_def_label(__Compare___display__table_data_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___display__table_data_0_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module22)
	MR_init_entry1(__Unify___display__table_header_0_0);
	MR_init_label1(__Unify___display__table_header_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_header_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_header_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_cell);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___display__table_header_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module23)
	MR_init_entry1(__Compare___display__table_header_0_0);
	MR_init_label2(__Compare___display__table_header_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_header_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_header_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__table_header_0_0_i2);
MR_def_label(__Compare___display__table_header_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__table_header_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_cell);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module24)
	MR_init_entry1(__Unify___display__table_header_cell_0_0);
	MR_init_label5(__Unify___display__table_header_cell_0_0,7,17,5,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_header_cell_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_header_cell_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___display__table_header_cell_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___display__table_header_cell_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___display__table_data_0_0,
		__Unify___display__table_header_cell_0_0_i7);
MR_def_label(__Unify___display__table_header_cell_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__table_header_cell_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___display__table_header_cell_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_header_cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___display__table_header_cell_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___display__table_header_cell_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_data);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___display__table_header_cell_0_0_i10);
MR_def_label(__Unify___display__table_header_cell_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__table_header_cell_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___display__table_header_cell_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module25)
	MR_init_entry1(__Compare___display__table_header_cell_0_0);
	MR_init_label8(__Compare___display__table_header_cell_0_0,3,2,9,7,5,15,17,21)
	MR_init_label1(__Compare___display__table_header_cell_0_0,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_header_cell_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_header_cell_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__table_header_cell_0_0_i2);
MR_def_label(__Compare___display__table_header_cell_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__table_header_cell_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___display__table_header_cell_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_header_cell_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___display__table_data_0_0,
		__Compare___display__table_header_cell_0_0_i9);
MR_def_label(__Compare___display__table_header_cell_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_header_cell_0_0_i63);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__table_header_cell_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_header_cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_header_cell_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_header_cell_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___display__table_header_cell_0_0_i17);
MR_def_label(__Compare___display__table_header_cell_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_header_cell_0_0_i63);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_data);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___display__table_header_cell_0_0_i21);
MR_def_label(__Compare___display__table_header_cell_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_header_cell_0_0_i63);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__table_header_cell_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module26)
	MR_init_entry1(__Unify___display__table_row_0_0);
	MR_init_label3(__Unify___display__table_row_0_0,16,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_row_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___display__table_row_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_row_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__table_data_0_0);
MR_def_label(__Unify___display__table_row_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module27)
	MR_init_entry1(__Compare___display__table_row_0_0);
	MR_init_label5(__Compare___display__table_row_0_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_row_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__table_row_0_0_i2);
MR_def_label(__Compare___display__table_row_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__table_row_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___display__table_row_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_row_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_row_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___display__table_data_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__display_maybe_bunch_0(void)
{
	display_module0();
	display_module1();
	display_module2();
	display_module3();
	display_module4();
	display_module5();
	display_module6();
	display_module7();
	display_module8();
	display_module9();
	display_module10();
	display_module11();
	display_module12();
	display_module13();
	display_module14();
	display_module15();
	display_module16();
	display_module17();
	display_module18();
	display_module19();
	display_module20();
	display_module21();
	display_module22();
	display_module23();
	display_module24();
	display_module25();
	display_module26();
	display_module27();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__display__init(void);
void mercury__display__init_type_tables(void);
void mercury__display__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__display__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__display__init_complexity_procs(void);
#endif

void mercury__display__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__display_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_row_0,
		display__table_row_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_header_cell_0,
		display__table_header_cell_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_header_0,
		display__table_header_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_data_0,
		display__table_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_col_class_0,
		display__table_col_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_class_0,
		display__table_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_cell_0,
		display__table_cell_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_0,
		display__table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_list_class_0,
		display__list_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_link_class_0,
		display__link_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_display_item_0,
		display__display_item_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_display_0,
		display__display_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_deep_link_0,
		display__deep_link_0_0);
	mercury__display__init_debugger();
}

void mercury__display__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_row_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_header_cell_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_header_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_col_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_cell_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_list_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_link_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_display_item_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_display_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_deep_link_0);
	}
}


void mercury__display__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__display__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__display);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__display__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
