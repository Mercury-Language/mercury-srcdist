/*
** Automatically generated from `display.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__display__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "display.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "display.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "display.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "display.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "display.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "display.c"
#line 49 "display.c"
#include "display.mh"

#line 52 "display.c"
#line 53 "display.c"
#ifndef DISPLAY_DECL_GUARD
#define DISPLAY_DECL_GUARD

#line 57 "display.c"
#line 58 "display.c"

#endif
#line 61 "display.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_display__type_ctor_info_attr_string_0,
	mercury_data_display__type_ctor_info_deep_link_0,
	mercury_data_display__type_ctor_info_display_0,
	mercury_data_display__type_ctor_info_display_item_0,
	mercury_data_display__type_ctor_info_link_class_0,
	mercury_data_display__type_ctor_info_list_class_0,
	mercury_data_display__type_ctor_info_pseudo_link_0,
	mercury_data_display__type_ctor_info_str_attr_0,
	mercury_data_display__type_ctor_info_table_0,
	mercury_data_display__type_ctor_info_table_cell_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_display__type_ctor_info_table_class_0,
	mercury_data_display__type_ctor_info_table_column_class_0,
	mercury_data_display__type_ctor_info_table_column_colour_0,
	mercury_data_display__type_ctor_info_table_data_0,
	mercury_data_display__type_ctor_info_table_header_0,
	mercury_data_display__type_ctor_info_table_header_group_0,
	mercury_data_display__type_ctor_info_table_header_group_columns_0,
	mercury_data_display__type_ctor_info_table_row_0;
MR_decl_label1(display__header_groups_to_header_3_0, 3)
MR_decl_label2(display__table_accumulate_columns_3_0, 4,3)
MR_decl_label3(__Unify___display__attr_string_0_0, 4,6,1)
MR_decl_label5(__Unify___display__deep_link_0_0, 4,6,8,10,1)
MR_decl_label3(__Unify___display__display_0_0, 4,8,1)
MR_decl_label10(__Unify___display__display_item_0_0, 119,5,6,10,14,18,22,20,26,59)
MR_decl_label2(__Unify___display__display_item_0_0, 30,1)
MR_decl_label2(__Unify___display__pseudo_link_0_0, 4,1)
MR_decl_label3(__Unify___display__table_0_0, 4,8,1)
MR_decl_label5(__Unify___display__table_cell_0_0, 5,19,6,11,1)
MR_decl_label10(__Unify___display__table_data_0_0, 5,9,11,15,19,17,21,54,25,1)
MR_decl_label1(__Unify___display__table_header_0_0, 6)
MR_decl_label3(__Unify___display__table_header_group_0_0, 4,6,1)
MR_decl_label3(__Unify___display__table_header_group_columns_0_0, 17,5,1)
MR_decl_label4(__Unify___display__table_row_0_0, 5,19,6,1)
MR_decl_label4(__Compare___display__attr_string_0_0, 3,2,5,21)
MR_decl_label6(__Compare___display__deep_link_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___display__display_0_0, 3,2,5,21)
MR_decl_label10(__Compare___display__display_item_0_0, 515,198,7,8,9,10,11,12,13,5)
MR_decl_label10(__Compare___display__display_item_0_0, 17,18,20,21,22,23,24,15,28,29)
MR_decl_label10(__Compare___display__display_item_0_0, 30,32,33,34,35,26,39,40,41,42)
MR_decl_label10(__Compare___display__display_item_0_0, 44,45,46,37,50,51,52,53,54,56)
MR_decl_label10(__Compare___display__display_item_0_0, 57,48,61,62,63,64,65,68,72,66)
MR_decl_label10(__Compare___display__display_item_0_0, 78,59,82,83,84,85,86,87,88,80)
MR_decl_label10(__Compare___display__display_item_0_0, 93,94,95,96,97,98,99,270,91,103)
MR_decl_label9(__Compare___display__display_item_0_0, 104,105,191,106,107,108,109,195,588)
MR_decl_label4(__Compare___display__pseudo_link_0_0, 3,2,5,21)
MR_decl_label6(__Compare___display__table_0_0, 3,2,5,9,13,37)
MR_decl_label10(__Compare___display__table_cell_0_0, 36,7,5,11,9,31,15,32,16,18)
MR_decl_label1(__Compare___display__table_cell_0_0, 23)
MR_decl_label10(__Compare___display__table_data_0_0, 3,2,7,9,10,11,12,13,5,17)
MR_decl_label10(__Compare___display__table_data_0_0, 18,20,21,22,23,15,27,28,29,31)
MR_decl_label10(__Compare___display__table_data_0_0, 32,33,25,37,38,39,40,42,43,35)
MR_decl_label10(__Compare___display__table_data_0_0, 47,48,49,50,53,57,51,63,45,67)
MR_decl_label10(__Compare___display__table_data_0_0, 68,69,70,71,72,65,213,77,78,79)
MR_decl_label10(__Compare___display__table_data_0_0, 80,81,82,75,86,87,88,89,90,91)
MR_decl_label2(__Compare___display__table_data_0_0, 92,482)
MR_decl_label2(__Compare___display__table_header_0_0, 3,2)
MR_decl_label5(__Compare___display__table_header_group_0_0, 3,2,5,9,29)
MR_decl_label7(__Compare___display__table_header_group_columns_0_0, 3,2,9,7,5,15,45)
MR_decl_label8(__Compare___display__table_row_0_0, 30,7,5,33,11,9,15,16)
MR_def_extern_entry(fn__display__make_single_table_header_group_3_0)
MR_def_extern_entry(fn__display__make_multi_table_header_group_4_0)
MR_def_extern_entry(display__header_groups_to_header_3_0)
MR_decl_static(display__table_accumulate_columns_3_0)
MR_def_extern_entry(__Unify___display__attr_string_0_0)
MR_def_extern_entry(__Compare___display__attr_string_0_0)
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
MR_def_extern_entry(__Unify___display__pseudo_link_0_0)
MR_def_extern_entry(__Compare___display__pseudo_link_0_0)
MR_def_extern_entry(__Unify___display__str_attr_0_0)
MR_def_extern_entry(__Compare___display__str_attr_0_0)
MR_def_extern_entry(__Unify___display__table_0_0)
MR_def_extern_entry(__Compare___display__table_0_0)
MR_def_extern_entry(__Unify___display__table_cell_0_0)
MR_def_extern_entry(__Compare___display__table_cell_0_0)
MR_def_extern_entry(__Unify___display__table_class_0_0)
MR_def_extern_entry(__Compare___display__table_class_0_0)
MR_def_extern_entry(__Unify___display__table_column_class_0_0)
MR_def_extern_entry(__Compare___display__table_column_class_0_0)
MR_def_extern_entry(__Unify___display__table_column_colour_0_0)
MR_def_extern_entry(__Compare___display__table_column_colour_0_0)
MR_def_extern_entry(__Unify___display__table_data_0_0)
MR_def_extern_entry(__Compare___display__table_data_0_0)
MR_def_extern_entry(__Unify___display__table_header_0_0)
MR_def_extern_entry(__Compare___display__table_header_0_0)
MR_def_extern_entry(__Unify___display__table_header_group_0_0)
MR_def_extern_entry(__Compare___display__table_header_group_0_0)
MR_def_extern_entry(__Unify___display__table_header_group_columns_0_0)
MR_def_extern_entry(__Compare___display__table_header_group_columns_0_0)
MR_def_extern_entry(__Unify___display__table_row_0_0)
MR_def_extern_entry(__Compare___display__table_row_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__display__header_groups_to_header_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_group_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__display__header_groups_to_header_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(display, table_header_group),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(display__table_accumulate_columns_3_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_str_attr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_str_attr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_str_attr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_attr_string_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_str_attr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_attr_string_0_0 = {
	"attr_str",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_attr_string_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_attr_string_0_0[] = {
	&mercury_data_display__du_functor_desc_attr_string_0_0

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_attr_string_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_attr_string_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_attr_string_0[] = {
	&mercury_data_display__du_functor_desc_attr_string_0_0
};

const MR_Integer mercury_data_display__functor_number_map_attr_string_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_attr_string_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__attr_string_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__attr_string_0_0)),
	"display",
	"attr_string",
	{ (void *)mercury_data_display__du_name_ordered_attr_string_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_attr_string_0 },
	1,
	4,
	mercury_data_display__functor_number_map_attr_string_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_query__type_ctor_info_preferences_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_attr_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_link_class_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_deep_link_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cmd_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1query__type_ctor_info_preferences_0,
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_attr_string_0,
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
	15,
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

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_display_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_display_item_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_display_item_0
}};

const MR_PseudoTypeInfo mercury_data_display__field_types_display_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_display_item_0
};

const MR_ConstString mercury_data_display__field_names_display_0_0[] = {
	"display_title",
	"display_content"
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
	NULL,
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
	15,
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

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_0 = {
	"display_heading",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_1 = {
	"display_text",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	1,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_2 = {
	"display_paragraph_break",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_deep_link_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_deep_link_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_3 = {
	"display_link",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	1,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_3,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_pseudo_link_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_pseudo_link_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_4 = {
	"display_pseudo_link",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_4,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_list_class_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_list_class_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_display_item_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_5 = {
	"display_list",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_5,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_6 = {
	"display_table",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	6,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_6,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_7 = {
	"display_verbatim",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_7,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_display_item_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_display_item_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_display_item_0_8 = {
	"display_developer",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_display_item_0_8,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_item_0_0[] = {
	&mercury_data_display__du_functor_desc_display_item_0_2

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_item_0_1[] = {
	&mercury_data_display__du_functor_desc_display_item_0_3

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_item_0_2[] = {
	&mercury_data_display__du_functor_desc_display_item_0_4

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_display_item_0_3[] = {
	&mercury_data_display__du_functor_desc_display_item_0_6,
	&mercury_data_display__du_functor_desc_display_item_0_0,
	&mercury_data_display__du_functor_desc_display_item_0_1,
	&mercury_data_display__du_functor_desc_display_item_0_5,
	&mercury_data_display__du_functor_desc_display_item_0_7,
	&mercury_data_display__du_functor_desc_display_item_0_8

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_display_item_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_display__du_stag_ordered_display_item_0_0 },
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_display__du_stag_ordered_display_item_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_display_item_0_2 },
	{ 6, MR_SECTAG_REMOTE,
	mercury_data_display__du_stag_ordered_display_item_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_display_item_0[] = {
	&mercury_data_display__du_functor_desc_display_item_0_8,
	&mercury_data_display__du_functor_desc_display_item_0_0,
	&mercury_data_display__du_functor_desc_display_item_0_3,
	&mercury_data_display__du_functor_desc_display_item_0_5,
	&mercury_data_display__du_functor_desc_display_item_0_2,
	&mercury_data_display__du_functor_desc_display_item_0_4,
	&mercury_data_display__du_functor_desc_display_item_0_6,
	&mercury_data_display__du_functor_desc_display_item_0_1,
	&mercury_data_display__du_functor_desc_display_item_0_7
};

const MR_Integer mercury_data_display__functor_number_map_display_item_0[] = {
	1,
	7,
	4,
	2,
	5,
	3,
	6,
	8,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_display_item_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__display_item_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__display_item_0_0)),
	"display",
	"display_item",
	{ (void *)mercury_data_display__du_name_ordered_display_item_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_display_item_0 },
	9,
	4,
	mercury_data_display__functor_number_map_display_item_0
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
	15,
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

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_list_class_0_3 = {
	"list_class_horizontal_except_title",
	3
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_list_class_0[] = {
	&mercury_data_display__enum_functor_desc_list_class_0_0,
	&mercury_data_display__enum_functor_desc_list_class_0_1,
	&mercury_data_display__enum_functor_desc_list_class_0_2,
	&mercury_data_display__enum_functor_desc_list_class_0_3
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_list_class_0[] = {
	&mercury_data_display__enum_functor_desc_list_class_0_2,
	&mercury_data_display__enum_functor_desc_list_class_0_3,
	&mercury_data_display__enum_functor_desc_list_class_0_1,
	&mercury_data_display__enum_functor_desc_list_class_0_0
};

const MR_Integer mercury_data_display__functor_number_map_list_class_0[] = {
	3,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_list_class_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__list_class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__list_class_0_0)),
	"display",
	"list_class",
	{ (void *)mercury_data_display__enum_name_ordered_list_class_0 },
	{ (void *)mercury_data_display__enum_value_ordered_list_class_0 },
	4,
	4,
	mercury_data_display__functor_number_map_list_class_0
};

const MR_PseudoTypeInfo mercury_data_display__field_types_pseudo_link_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_link_class_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_pseudo_link_0_0 = {
	"pseudo_link",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_pseudo_link_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_pseudo_link_0_0[] = {
	&mercury_data_display__du_functor_desc_pseudo_link_0_0

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_pseudo_link_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_pseudo_link_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_pseudo_link_0[] = {
	&mercury_data_display__du_functor_desc_pseudo_link_0_0
};

const MR_Integer mercury_data_display__functor_number_map_pseudo_link_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_pseudo_link_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__pseudo_link_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__pseudo_link_0_0)),
	"display",
	"pseudo_link",
	{ (void *)mercury_data_display__du_name_ordered_pseudo_link_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_pseudo_link_0 },
	1,
	4,
	mercury_data_display__functor_number_map_pseudo_link_0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_str_attr_0_0 = {
	"attr_bold",
	0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_str_attr_0_1 = {
	"attr_italic",
	1
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_str_attr_0_2 = {
	"attr_underline",
	2
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_str_attr_0[] = {
	&mercury_data_display__enum_functor_desc_str_attr_0_0,
	&mercury_data_display__enum_functor_desc_str_attr_0_1,
	&mercury_data_display__enum_functor_desc_str_attr_0_2
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_str_attr_0[] = {
	&mercury_data_display__enum_functor_desc_str_attr_0_0,
	&mercury_data_display__enum_functor_desc_str_attr_0_1,
	&mercury_data_display__enum_functor_desc_str_attr_0_2
};

const MR_Integer mercury_data_display__functor_number_map_str_attr_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_str_attr_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__str_attr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__str_attr_0_0)),
	"display",
	"str_attr",
	{ (void *)mercury_data_display__enum_name_ordered_str_attr_0 },
	{ (void *)mercury_data_display__enum_value_ordered_str_attr_0 },
	3,
	4,
	mercury_data_display__functor_number_map_str_attr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

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
	NULL,
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
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_data_0;

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
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_cell_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_data_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_display__field_names_table_cell_0_1[] = {
	"tcs_text",
	"tcs_span"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_cell_0_1 = {
	"table_multi_cell",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_cell_0_1,
	mercury_data_display__field_names_table_cell_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_cell_0_2 = {
	"table_empty_cell",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_cell_0_0[] = {
	&mercury_data_display__du_functor_desc_table_cell_0_2

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_cell_0_1[] = {
	&mercury_data_display__du_functor_desc_table_cell_0_0

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_cell_0_2[] = {
	&mercury_data_display__du_functor_desc_table_cell_0_1

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_cell_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_display__du_stag_ordered_table_cell_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_cell_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_cell_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_cell_0[] = {
	&mercury_data_display__du_functor_desc_table_cell_0_0,
	&mercury_data_display__du_functor_desc_table_cell_0_2,
	&mercury_data_display__du_functor_desc_table_cell_0_1
};

const MR_Integer mercury_data_display__functor_number_map_table_cell_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_cell_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_cell_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_cell_0_0)),
	"display",
	"table_cell",
	{ (void *)mercury_data_display__du_name_ordered_table_cell_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_cell_0 },
	3,
	4,
	mercury_data_display__functor_number_map_table_cell_0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_class_0_0 = {
	"table_class_do_not_box",
	0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_class_0_1 = {
	"table_class_box",
	1
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_class_0_2 = {
	"table_class_box_if_pref",
	2
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_table_class_0[] = {
	&mercury_data_display__enum_functor_desc_table_class_0_0,
	&mercury_data_display__enum_functor_desc_table_class_0_1,
	&mercury_data_display__enum_functor_desc_table_class_0_2
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_table_class_0[] = {
	&mercury_data_display__enum_functor_desc_table_class_0_1,
	&mercury_data_display__enum_functor_desc_table_class_0_2,
	&mercury_data_display__enum_functor_desc_table_class_0_0
};

const MR_Integer mercury_data_display__functor_number_map_table_class_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_class_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_class_0_0)),
	"display",
	"table_class",
	{ (void *)mercury_data_display__enum_name_ordered_table_class_0 },
	{ (void *)mercury_data_display__enum_value_ordered_table_class_0 },
	3,
	4,
	mercury_data_display__functor_number_map_table_class_0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_0 = {
	"table_column_class_allocations",
	0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_1 = {
	"table_column_class_callseqs",
	1
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_2 = {
	"table_column_class_clique",
	2
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_3 = {
	"table_column_class_field_name",
	3
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_4 = {
	"table_column_class_memory",
	4
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_5 = {
	"table_column_class_module_name",
	5
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_6 = {
	"table_column_class_no_class",
	6
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_7 = {
	"table_column_class_number",
	7
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_8 = {
	"table_column_class_ordinal_rank",
	8
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_9 = {
	"table_column_class_port_counts",
	9
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_10 = {
	"table_column_class_proc",
	10
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_11 = {
	"table_column_class_source_context",
	11
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_class_0_12 = {
	"table_column_class_ticks_and_times",
	12
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_table_column_class_0[] = {
	&mercury_data_display__enum_functor_desc_table_column_class_0_0,
	&mercury_data_display__enum_functor_desc_table_column_class_0_1,
	&mercury_data_display__enum_functor_desc_table_column_class_0_2,
	&mercury_data_display__enum_functor_desc_table_column_class_0_3,
	&mercury_data_display__enum_functor_desc_table_column_class_0_4,
	&mercury_data_display__enum_functor_desc_table_column_class_0_5,
	&mercury_data_display__enum_functor_desc_table_column_class_0_6,
	&mercury_data_display__enum_functor_desc_table_column_class_0_7,
	&mercury_data_display__enum_functor_desc_table_column_class_0_8,
	&mercury_data_display__enum_functor_desc_table_column_class_0_9,
	&mercury_data_display__enum_functor_desc_table_column_class_0_10,
	&mercury_data_display__enum_functor_desc_table_column_class_0_11,
	&mercury_data_display__enum_functor_desc_table_column_class_0_12
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_table_column_class_0[] = {
	&mercury_data_display__enum_functor_desc_table_column_class_0_0,
	&mercury_data_display__enum_functor_desc_table_column_class_0_1,
	&mercury_data_display__enum_functor_desc_table_column_class_0_2,
	&mercury_data_display__enum_functor_desc_table_column_class_0_3,
	&mercury_data_display__enum_functor_desc_table_column_class_0_4,
	&mercury_data_display__enum_functor_desc_table_column_class_0_5,
	&mercury_data_display__enum_functor_desc_table_column_class_0_6,
	&mercury_data_display__enum_functor_desc_table_column_class_0_7,
	&mercury_data_display__enum_functor_desc_table_column_class_0_8,
	&mercury_data_display__enum_functor_desc_table_column_class_0_9,
	&mercury_data_display__enum_functor_desc_table_column_class_0_10,
	&mercury_data_display__enum_functor_desc_table_column_class_0_11,
	&mercury_data_display__enum_functor_desc_table_column_class_0_12
};

const MR_Integer mercury_data_display__functor_number_map_table_column_class_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_column_class_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_column_class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_column_class_0_0)),
	"display",
	"table_column_class",
	{ (void *)mercury_data_display__enum_name_ordered_table_column_class_0 },
	{ (void *)mercury_data_display__enum_value_ordered_table_column_class_0 },
	13,
	4,
	mercury_data_display__functor_number_map_table_column_class_0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_colour_0_0 = {
	"column_do_not_colour",
	0
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_colour_0_1 = {
	"column_colour",
	1
};

static const MR_EnumFunctorDesc mercury_data_display__enum_functor_desc_table_column_colour_0_2 = {
	"column_colour_if_pref",
	2
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_value_ordered_table_column_colour_0[] = {
	&mercury_data_display__enum_functor_desc_table_column_colour_0_0,
	&mercury_data_display__enum_functor_desc_table_column_colour_0_1,
	&mercury_data_display__enum_functor_desc_table_column_colour_0_2
};

const MR_EnumFunctorDescPtr mercury_data_display__enum_name_ordered_table_column_colour_0[] = {
	&mercury_data_display__enum_functor_desc_table_column_colour_0_1,
	&mercury_data_display__enum_functor_desc_table_column_colour_0_2,
	&mercury_data_display__enum_functor_desc_table_column_colour_0_0
};

const MR_Integer mercury_data_display__functor_number_map_table_column_colour_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_column_colour_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_column_colour_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_column_colour_0_0)),
	"display",
	"table_column_colour",
	{ (void *)mercury_data_display__enum_name_ordered_table_column_colour_0 },
	{ (void *)mercury_data_display__enum_value_ordered_table_column_colour_0 },
	3,
	4,
	mercury_data_display__functor_number_map_table_column_colour_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_DuArgLocn mercury_data_display__field_locns_table_data_0_0[] = {
	{ 0, 0, -1 },
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_0 = {
	"td_f",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_0,
	NULL,
	mercury_data_display__field_locns_table_data_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_1 = {
	"td_i",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	1,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_deep_link_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_2 = {
	"td_l",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	0,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_2,
	NULL,
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
	"td_m",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_3,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_4 = {
	"td_p",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_4,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_5 = {
	"td_s",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_5,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_attr_string_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_6 = {
	"td_as",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	1,
	-1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_6,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_data_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_time_0
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_data_0_7 = {
	"td_t",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_data_0_7,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_data_0_0[] = {
	&mercury_data_display__du_functor_desc_table_data_0_2

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_data_0_1[] = {
	&mercury_data_display__du_functor_desc_table_data_0_6

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_data_0_2[] = {
	&mercury_data_display__du_functor_desc_table_data_0_0

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_data_0_3[] = {
	&mercury_data_display__du_functor_desc_table_data_0_1,
	&mercury_data_display__du_functor_desc_table_data_0_3,
	&mercury_data_display__du_functor_desc_table_data_0_4,
	&mercury_data_display__du_functor_desc_table_data_0_5,
	&mercury_data_display__du_functor_desc_table_data_0_7

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_data_0[] = {
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_display__du_stag_ordered_table_data_0_0 },
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_display__du_stag_ordered_table_data_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_data_0_2 },
	{ 5, MR_SECTAG_REMOTE,
	mercury_data_display__du_stag_ordered_table_data_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_data_0[] = {
	&mercury_data_display__du_functor_desc_table_data_0_6,
	&mercury_data_display__du_functor_desc_table_data_0_0,
	&mercury_data_display__du_functor_desc_table_data_0_1,
	&mercury_data_display__du_functor_desc_table_data_0_2,
	&mercury_data_display__du_functor_desc_table_data_0_3,
	&mercury_data_display__du_functor_desc_table_data_0_4,
	&mercury_data_display__du_functor_desc_table_data_0_5,
	&mercury_data_display__du_functor_desc_table_data_0_7
};

const MR_Integer mercury_data_display__functor_number_map_table_data_0[] = {
	1,
	2,
	3,
	4,
	5,
	6,
	0,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_data_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_data_0_0)),
	"display",
	"table_data",
	{ (void *)mercury_data_display__du_name_ordered_table_data_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_data_0 },
	8,
	4,
	mercury_data_display__functor_number_map_table_data_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_group_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_table_header_group_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_table_header_group_0
}};

static const MR_NotagFunctorDesc mercury_data_display__notag_functor_desc_table_header_0 = {
	"table_header",
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_table_header_group_0,
	"th_groups"
};

const MR_Integer mercury_data_display__functor_number_map_table_header_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_0 = {
	0,
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_group_columns_0;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_column_class_0;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_column_colour_0;

const MR_PseudoTypeInfo mercury_data_display__field_types_table_header_group_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_header_group_columns_0,
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_column_class_0,
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_column_colour_0
};

const MR_ConstString mercury_data_display__field_names_table_header_group_0_0[] = {
	"thg_titles",
	"thg_class",
	"thg_colour"
};

const MR_DuArgLocn mercury_data_display__field_locns_table_header_group_0_0[] = {
	{ 0, 0, 0 },
	{ 1, 0, 4 },
	{ 1, 4, 2 },
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_header_group_0_0 = {
	"table_header_group",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_header_group_0_0,
	mercury_data_display__field_names_table_header_group_0_0,
	mercury_data_display__field_locns_table_header_group_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_header_group_0_0[] = {
	&mercury_data_display__du_functor_desc_table_header_group_0_0

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_header_group_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_header_group_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_header_group_0[] = {
	&mercury_data_display__du_functor_desc_table_header_group_0_0
};

const MR_Integer mercury_data_display__functor_number_map_table_header_group_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_group_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_header_group_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_header_group_0_0)),
	"display",
	"table_header_group",
	{ (void *)mercury_data_display__du_name_ordered_table_header_group_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_header_group_0 },
	1,
	4,
	mercury_data_display__functor_number_map_table_header_group_0
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_header_group_columns_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_data_0
};

const MR_ConstString mercury_data_display__field_names_table_header_group_columns_0_0[] = {
	"thsc_title"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_header_group_columns_0_0 = {
	"table_header_group_single",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_header_group_columns_0_0,
	mercury_data_display__field_names_table_header_group_columns_0_0,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1display__type_ctor_info_table_data_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_display__type_ctor_info_table_data_0
}};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_header_group_columns_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1display__type_ctor_info_table_data_0
};

const MR_ConstString mercury_data_display__field_names_table_header_group_columns_0_1[] = {
	"thmc_title",
	"thmc_subtitles"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_header_group_columns_0_1 = {
	"table_header_group_multi",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_header_group_columns_0_1,
	mercury_data_display__field_names_table_header_group_columns_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_header_group_columns_0_0[] = {
	&mercury_data_display__du_functor_desc_table_header_group_columns_0_0

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_header_group_columns_0_1[] = {
	&mercury_data_display__du_functor_desc_table_header_group_columns_0_1

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_header_group_columns_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_header_group_columns_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_header_group_columns_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_header_group_columns_0[] = {
	&mercury_data_display__du_functor_desc_table_header_group_columns_0_1,
	&mercury_data_display__du_functor_desc_table_header_group_columns_0_0
};

const MR_Integer mercury_data_display__functor_number_map_table_header_group_columns_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_group_columns_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_header_group_columns_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_header_group_columns_0_0)),
	"display",
	"table_header_group_columns",
	{ (void *)mercury_data_display__du_name_ordered_table_header_group_columns_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_header_group_columns_0 },
	2,
	4,
	mercury_data_display__functor_number_map_table_header_group_columns_0
};
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
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_row_0_0,
	mercury_data_display__field_names_table_row_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_row_0_1 = {
	"table_separator_row",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_display__field_types_table_row_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_data_0
};

const MR_ConstString mercury_data_display__field_names_table_row_0_2[] = {
	"tsh_text"
};

static const MR_DuFunctorDesc mercury_data_display__du_functor_desc_table_row_0_2 = {
	"table_section_header",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_display__field_types_table_row_0_2,
	mercury_data_display__field_names_table_row_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_row_0_0[] = {
	&mercury_data_display__du_functor_desc_table_row_0_1

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_row_0_1[] = {
	&mercury_data_display__du_functor_desc_table_row_0_0

};

const MR_DuFunctorDescPtr mercury_data_display__du_stag_ordered_table_row_0_2[] = {
	&mercury_data_display__du_functor_desc_table_row_0_2

};

const MR_DuPtagLayout mercury_data_display__du_ptag_ordered_table_row_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_display__du_stag_ordered_table_row_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_row_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_display__du_stag_ordered_table_row_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_display__du_name_ordered_table_row_0[] = {
	&mercury_data_display__du_functor_desc_table_row_0_0,
	&mercury_data_display__du_functor_desc_table_row_0_2,
	&mercury_data_display__du_functor_desc_table_row_0_1
};

const MR_Integer mercury_data_display__functor_number_map_table_row_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_row_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display__table_row_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display__table_row_0_0)),
	"display",
	"table_row",
	{ (void *)mercury_data_display__du_name_ordered_table_row_0 },
	{ (void *)mercury_data_display__du_ptag_ordered_table_row_0 },
	3,
	4,
	mercury_data_display__functor_number_map_table_row_0
};


static const MR_UserClosureId
mercury_data__closure_layout__display__header_groups_to_header_3_0_1 = {
{
MR_PREDICATE,
"display",
"display",
"table_accumulate_columns",
3,
0
},
"display",
"display.m",
312,
"5"
};



MR_BEGIN_MODULE(display_module0)
	MR_init_entry1(fn__display__make_single_table_header_group_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__display__make_single_table_header_group_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_single_table_header_group'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__display__make_single_table_header_group_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = ((MR_Integer) MR_r2 | ((MR_Integer) MR_r3 << (MR_Integer) 4));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module1)
	MR_init_entry1(fn__display__make_multi_table_header_group_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__display__make_multi_table_header_group_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_multi_table_header_group'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__display__make_multi_table_header_group_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = ((MR_Integer) MR_r3 | ((MR_Integer) MR_r4 << (MR_Integer) 4));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(display_module2)
	MR_init_entry1(display__header_groups_to_header_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__display__header_groups_to_header_3_0);
	MR_init_label1(display__header_groups_to_header_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'header_groups_to_header'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__display__header_groups_to_header_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_group);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl_4_0,
		display__header_groups_to_header_3_0_i3);
MR_def_label(display__header_groups_to_header_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(display_module3)
	MR_init_entry1(display__table_accumulate_columns_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__display__table_accumulate_columns_3_0);
	MR_init_label2(display__table_accumulate_columns_3_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_accumulate_columns'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display__table_accumulate_columns_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(display__table_accumulate_columns_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_data);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		display__table_accumulate_columns_3_0_i4);
MR_def_label(display__table_accumulate_columns_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
MR_def_label(display__table_accumulate_columns_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(display_module4)
	MR_init_entry1(__Unify___display__attr_string_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__attr_string_0_0);
	MR_init_label3(__Unify___display__attr_string_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__attr_string_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__attr_string_0_0_i6);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, str_attr);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___display__attr_string_0_0_i4);
MR_def_label(__Unify___display__attr_string_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__attr_string_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___display__attr_string_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__attr_string_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(display_module5)
	MR_init_entry1(__Compare___display__attr_string_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__attr_string_0_0);
	MR_init_label4(__Compare___display__attr_string_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__attr_string_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__attr_string_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__attr_string_0_0_i2);
MR_def_label(__Compare___display__attr_string_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__attr_string_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, str_attr);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___display__attr_string_0_0_i5);
MR_def_label(__Compare___display__attr_string_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__attr_string_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___display__attr_string_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___query__cmd_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(display_module6)
	MR_init_entry1(__Unify___display__deep_link_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__deep_link_0_0);
	MR_init_label5(__Unify___display__deep_link_0_0,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__deep_link_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__deep_link_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
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
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___display__attr_string_0_0,
		__Unify___display__deep_link_0_0_i8);
MR_def_label(__Unify___display__deep_link_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__deep_link_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___display__deep_link_0_0,10)
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
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(display_module7)
	MR_init_entry1(__Compare___display__deep_link_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__deep_link_0_0);
	MR_init_label6(__Compare___display__deep_link_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
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
	MR_np_call_localret_ent(__Compare___display__attr_string_0_0,
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

MR_BEGIN_MODULE(display_module8)
	MR_init_entry1(__Unify___display__display_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__display_0_0);
	MR_init_label3(__Unify___display__display_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
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


MR_BEGIN_MODULE(display_module9)
	MR_init_entry1(__Compare___display__display_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__display_0_0);
	MR_init_label4(__Compare___display__display_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
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


MR_BEGIN_MODULE(display_module10)
	MR_init_entry1(__Unify___display__display_item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__display_item_0_0);
	MR_init_label10(__Unify___display__display_item_0_0,119,5,6,10,14,18,22,20,26,59)
	MR_init_label2(__Unify___display__display_item_0_0,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__display_item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Unify___display__display_item_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___display__display_item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__deep_link_0_0);
MR_def_label(__Unify___display__display_item_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__pseudo_link_0_0);
MR_def_label(__Unify___display__display_item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___display__display_item_0_0_i119);
MR_def_label(__Unify___display__display_item_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i18);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___display__display_item_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___display__display_item_0_0_i22);
MR_def_label(__Unify___display__display_item_0_0,22)
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
MR_def_label(__Unify___display__display_item_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i26);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__table_0_0);
MR_def_label(__Unify___display__display_item_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i30);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___display__display_item_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___display__display_item_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___display__display_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___display__display_item_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module11)
	MR_init_entry1(__Compare___display__display_item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__display_item_0_0);
	MR_init_label10(__Compare___display__display_item_0_0,515,198,7,8,9,10,11,12,13,5)
	MR_init_label10(__Compare___display__display_item_0_0,17,18,20,21,22,23,24,15,28,29)
	MR_init_label10(__Compare___display__display_item_0_0,30,32,33,34,35,26,39,40,41,42)
	MR_init_label10(__Compare___display__display_item_0_0,44,45,46,37,50,51,52,53,54,56)
	MR_init_label10(__Compare___display__display_item_0_0,57,48,61,62,63,64,65,68,72,66)
	MR_init_label10(__Compare___display__display_item_0_0,78,59,82,83,84,85,86,87,88,80)
	MR_init_label10(__Compare___display__display_item_0_0,93,94,95,96,97,98,99,270,91,103)
	MR_init_label9(__Compare___display__display_item_0_0,104,105,191,106,107,108,109,195,588)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__display_item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Compare___display__display_item_0_0,515)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i198);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i7);
	}
MR_def_label(__Compare___display__display_item_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i18);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___display__deep_link_0_0);
MR_def_label(__Compare___display__display_item_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i26);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i30);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___display__pseudo_link_0_0);
MR_def_label(__Compare___display__display_item_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i37);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i42);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___display__display_item_0_0_i515);
MR_def_label(__Compare___display__display_item_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i45);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i46);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i195);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i48);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i53);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i54);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___display__display_item_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i56);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i191);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i59);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i65);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i66);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___display__display_item_0_0_i68);
MR_def_label(__Compare___display__display_item_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i588);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___display__display_item_0_0_i72);
MR_def_label(__Compare___display__display_item_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i588);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___display__display_item_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i80);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i82);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i83);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i84);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i85);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i86);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i87);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i88);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___display__table_0_0);
MR_def_label(__Compare___display__display_item_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i91);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i93);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i94);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i96);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i97);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i98);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i99);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i191);
	}
MR_def_label(__Compare___display__display_item_0_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___display__display_item_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i103);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i104);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i105);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i106);
	}
MR_def_label(__Compare___display__display_item_0_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i107);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i108);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i109);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__display_item_0_0_i270);
	}
MR_def_label(__Compare___display__display_item_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__display_item_0_0,588)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module12)
	MR_init_entry1(__Unify___display__link_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__link_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(display_module13)
	MR_init_entry1(__Compare___display__link_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__link_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(display_module14)
	MR_init_entry1(__Unify___display__list_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__list_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(display_module15)
	MR_init_entry1(__Compare___display__list_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__list_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(display_module16)
	MR_init_entry1(__Unify___display__pseudo_link_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__pseudo_link_0_0);
	MR_init_label2(__Unify___display__pseudo_link_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__pseudo_link_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__pseudo_link_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___display__pseudo_link_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___display__pseudo_link_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__pseudo_link_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module17)
	MR_init_entry1(__Compare___display__pseudo_link_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__pseudo_link_0_0);
	MR_init_label4(__Compare___display__pseudo_link_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__pseudo_link_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__pseudo_link_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__pseudo_link_0_0_i2);
MR_def_label(__Compare___display__pseudo_link_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__pseudo_link_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___display__pseudo_link_0_0_i5);
MR_def_label(__Compare___display__pseudo_link_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__pseudo_link_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__pseudo_link_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module18)
	MR_init_entry1(__Unify___display__str_attr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__str_attr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__str_attr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module19)
	MR_init_entry1(__Compare___display__str_attr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__str_attr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__str_attr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module20)
	MR_init_entry1(__Unify___display__table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_0_0);
	MR_init_label3(__Unify___display__table_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___display__table_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___display__table_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header);
	MR_r2 = MR_tfield(0, MR_tempr3, 2);
	MR_r3 = MR_tfield(0, MR_tempr4, 2);
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


MR_BEGIN_MODULE(display_module21)
	MR_init_entry1(__Compare___display__table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_0_0);
	MR_init_label6(__Compare___display__table_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
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


MR_BEGIN_MODULE(display_module22)
	MR_init_entry1(__Unify___display__table_cell_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_cell_0_0);
	MR_init_label5(__Unify___display__table_cell_0_0,5,19,6,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_cell_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_cell_0_0_i19);
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
MR_def_label(__Unify___display__table_cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___display__table_cell_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___display__table_cell_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__table_data_0_0);
MR_def_label(__Unify___display__table_cell_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_cell_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___display__table_cell_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___display__table_data_0_0,
		__Unify___display__table_cell_0_0_i11);
MR_def_label(__Unify___display__table_cell_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__table_cell_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___display__table_cell_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module23)
	MR_init_entry1(__Compare___display__table_cell_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_cell_0_0);
	MR_init_label10(__Compare___display__table_cell_0_0,36,7,5,11,9,31,15,32,16,18)
	MR_init_label1(__Compare___display__table_cell_0_0,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_cell_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i7);
	}
MR_def_label(__Compare___display__table_cell_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_cell_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_cell_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i31);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___display__table_data_0_0);
MR_def_label(__Compare___display__table_cell_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i15);
	}
MR_def_label(__Compare___display__table_cell_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_cell_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i16);
	}
MR_def_label(__Compare___display__table_cell_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_cell_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___display__table_data_0_0,
		__Compare___display__table_cell_0_0_i18);
MR_def_label(__Compare___display__table_cell_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_cell_0_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__table_cell_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module24)
	MR_init_entry1(__Unify___display__table_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(display_module25)
	MR_init_entry1(__Compare___display__table_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(display_module26)
	MR_init_entry1(__Unify___display__table_column_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_column_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_column_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module27)
	MR_init_entry1(__Compare___display__table_column_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_column_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_column_class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module28)
	MR_init_entry1(__Unify___display__table_column_colour_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_column_colour_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_column_colour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module29)
	MR_init_entry1(__Compare___display__table_column_colour_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_column_colour_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_column_colour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurement_units__memory_0_0);
MR_decl_entry(__Unify___measurement_units__percent_0_0);
MR_decl_entry(__Unify___measurement_units__time_0_0);

MR_BEGIN_MODULE(display_module30)
	MR_init_entry1(__Unify___display__table_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_data_0_0);
	MR_init_label10(__Unify___display__table_data_0_0,5,9,11,15,19,17,21,54,25,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 1);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___display__attr_string_0_0);
	}
MR_def_label(__Unify___display__table_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempr3 = MR_sv(1);
	MR_tempf1 = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr3, 0));
	MR_tempr4 = MR_sv(2);
	MR_tempf2 = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr4, 0));
	MR_r1 = (MR_tempf1 == MR_tempf2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___display__table_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___display__deep_link_0_0);
MR_def_label(__Unify___display__table_data_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i15);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___display__table_data_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___measurement_units__memory_0_0,
		__Unify___display__table_data_0_0_i19);
MR_def_label(__Unify___display__table_data_0_0,19)
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
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___measurement_units__percent_0_0);
MR_def_label(__Unify___display__table_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___display__table_data_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_data_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___display__table_data_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___measurement_units__time_0_0);
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
MR_decl_entry(__Compare___measurement_units__memory_0_0);
MR_decl_entry(__Compare___measurement_units__percent_0_0);
MR_decl_entry(__Compare___measurement_units__time_0_0);

MR_BEGIN_MODULE(display_module31)
	MR_init_entry1(__Compare___display__table_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_data_0_0);
	MR_init_label10(__Compare___display__table_data_0_0,3,2,7,9,10,11,12,13,5,17)
	MR_init_label10(__Compare___display__table_data_0_0,18,20,21,22,23,15,27,28,29,31)
	MR_init_label10(__Compare___display__table_data_0_0,32,33,25,37,38,39,40,42,43,35)
	MR_init_label10(__Compare___display__table_data_0_0,47,48,49,50,53,57,51,63,45,67)
	MR_init_label10(__Compare___display__table_data_0_0,68,69,70,71,72,65,213,77,78,79)
	MR_init_label10(__Compare___display__table_data_0_0,80,81,82,75,86,87,88,89,90,91)
	MR_init_label2(__Compare___display__table_data_0_0,92,482)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_GOTO_LAB(__Compare___display__table_data_0_0_i2);
MR_def_label(__Compare___display__table_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__table_data_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i7);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___display__attr_string_0_0);
MR_def_label(__Compare___display__table_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i213);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr1, 0));
	MR_tempr2 = MR_sv(2);
	MR_f(2) = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr2, 0));
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
	}
MR_def_label(__Compare___display__table_data_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i213);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i25);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i29);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___display__deep_link_0_0);
MR_def_label(__Compare___display__table_data_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i213);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i35);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i40);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__table_data_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i213);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i45);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___measurement_units__memory_0_0,
		__Compare___display__table_data_0_0_i53);
MR_def_label(__Compare___display__table_data_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i482);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___display__table_data_0_0_i57);
MR_def_label(__Compare___display__table_data_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i482);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__table_data_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i63);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i213);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i65);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i67);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i68);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i69);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i70);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i71);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i72);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___measurement_units__percent_0_0);
MR_def_label(__Compare___display__table_data_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i213);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i75);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i77);
	}
MR_def_label(__Compare___display__table_data_0_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i78);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i79);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i81);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i82);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i213);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___display__table_data_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i86);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i87);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i88);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i89);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i91);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___display__table_data_0_0_i92);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___display__table_data_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___measurement_units__time_0_0);
MR_def_label(__Compare___display__table_data_0_0,482)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module32)
	MR_init_entry1(__Unify___display__table_header_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_header_0_0);
	MR_init_label1(__Unify___display__table_header_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_group);
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


MR_BEGIN_MODULE(display_module33)
	MR_init_entry1(__Compare___display__table_header_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_header_0_0);
	MR_init_label2(__Compare___display__table_header_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_group);
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


MR_BEGIN_MODULE(display_module34)
	MR_init_entry1(__Unify___display__table_header_group_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_header_group_0_0);
	MR_init_label3(__Unify___display__table_header_group_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_header_group_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_header_group_0_0_i6);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) & (MR_Integer) 15);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_tempr1, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) & (MR_Integer) 15);
	MR_sv(4) = (((MR_Integer) MR_tfield(0, MR_tempr2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___display__table_header_group_columns_0_0,
		__Unify___display__table_header_group_0_0_i4);
MR_def_label(__Unify___display__table_header_group_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display__table_header_group_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___display__table_header_group_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___display__table_header_group_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_header_group_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module35)
	MR_init_entry1(__Compare___display__table_header_group_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_header_group_0_0);
	MR_init_label5(__Compare___display__table_header_group_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_header_group_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_header_group_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__table_header_group_0_0_i2);
MR_def_label(__Compare___display__table_header_group_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__table_header_group_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = (((MR_Integer) MR_tfield(0, MR_tempr5, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr5, 1) & (MR_Integer) 15);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr6, 1) & (MR_Integer) 15);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___display__table_header_group_columns_0_0,
		__Compare___display__table_header_group_0_0_i5);
MR_def_label(__Compare___display__table_header_group_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_header_group_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___display__table_header_group_0_0_i9);
MR_def_label(__Compare___display__table_header_group_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_header_group_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___display__table_header_group_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module36)
	MR_init_entry1(__Unify___display__table_header_group_columns_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_header_group_columns_0_0);
	MR_init_label3(__Unify___display__table_header_group_columns_0_0,17,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_header_group_columns_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_header_group_columns_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___display__table_header_group_columns_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___display__table_header_group_columns_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___display__table_header_group_columns_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_data);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___display__table_header_group_columns_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_header_group_columns_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___display__table_header_group_columns_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___display__table_data_0_0);
MR_def_label(__Unify___display__table_header_group_columns_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module37)
	MR_init_entry1(__Compare___display__table_header_group_columns_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_header_group_columns_0_0);
	MR_init_label7(__Compare___display__table_header_group_columns_0_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_header_group_columns_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_header_group_columns_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display__table_header_group_columns_0_0_i2);
MR_def_label(__Compare___display__table_header_group_columns_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display__table_header_group_columns_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___display__table_header_group_columns_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_header_group_columns_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___display__table_header_group_columns_0_0_i9);
MR_def_label(__Compare___display__table_header_group_columns_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display__table_header_group_columns_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_data);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___display__table_header_group_columns_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_header_group_columns_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_header_group_columns_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_header_group_columns_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___display__table_data_0_0);
MR_def_label(__Compare___display__table_header_group_columns_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_module38)
	MR_init_entry1(__Unify___display__table_row_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___display__table_row_0_0);
	MR_init_label4(__Unify___display__table_row_0_0,5,19,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___display__table_row_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___display__table_row_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___display__table_row_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display__table_row_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___display__table_row_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
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


MR_BEGIN_MODULE(display_module39)
	MR_init_entry1(__Compare___display__table_row_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___display__table_row_0_0);
	MR_init_label8(__Compare___display__table_row_0_0,30,7,5,33,11,9,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___display__table_row_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i7);
	}
MR_def_label(__Compare___display__table_row_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_row_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_row_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i11);
	}
MR_def_label(__Compare___display__table_row_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_row_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i33);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___display__table_row_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_row_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___display__table_row_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___display__table_row_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
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
	display_module28();
	display_module29();
	display_module30();
	display_module31();
	display_module32();
	display_module33();
	display_module34();
	display_module35();
	display_module36();
	display_module37();
	display_module38();
	display_module39();
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
#ifdef MR_THREADSCOPE
void mercury__display__init_threadscope_string_table(void);
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
		mercury_data_display__type_ctor_info_attr_string_0,
		display__attr_string_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_deep_link_0,
		display__deep_link_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_display_0,
		display__display_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_display_item_0,
		display__display_item_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_link_class_0,
		display__link_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_list_class_0,
		display__list_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_pseudo_link_0,
		display__pseudo_link_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_str_attr_0,
		display__str_attr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_0,
		display__table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_cell_0,
		display__table_cell_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_class_0,
		display__table_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_column_class_0,
		display__table_column_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_column_colour_0,
		display__table_column_colour_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_data_0,
		display__table_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_header_0,
		display__table_header_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_header_group_0,
		display__table_header_group_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_header_group_columns_0,
		display__table_header_group_columns_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display__type_ctor_info_table_row_0,
		display__table_row_0_0);
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
		&mercury_data_display__type_ctor_info_attr_string_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_deep_link_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_display_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_display_item_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_link_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_list_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_pseudo_link_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_str_attr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_cell_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_column_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_column_colour_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_header_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_header_group_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_header_group_columns_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display__type_ctor_info_table_row_0);
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

#ifdef MR_THREADSCOPE

void mercury__display__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
