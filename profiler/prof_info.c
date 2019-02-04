/*
** Automatically generated from `prof_info.m'
** by the Mercury compiler,
** version rotd-2012-08-08, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__prof_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "prof_info.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "prof_info.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "prof_info.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "prof_info.c"
#line 41 "prof_info.c"
#include "prof_info.mh"

#line 44 "prof_info.c"
#line 45 "prof_info.c"
#ifndef PROF_INFO_DECL_GUARD
#define PROF_INFO_DECL_GUARD

#line 49 "prof_info.c"
#line 50 "prof_info.c"

#endif
#line 53 "prof_info.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_prof_info__type_ctor_info_addrdecl_0,
	mercury_data_prof_info__type_ctor_info_cycle_map_0,
	mercury_data_prof_info__type_ctor_info_pred_info_0,
	mercury_data_prof_info__type_ctor_info_prof_0,
	mercury_data_prof_info__type_ctor_info_prof_node_0,
	mercury_data_prof_info__type_ctor_info_prof_node_map_0,
	mercury_data_prof_info__type_ctor_info_prof_node_type_0;
MR_decl_label1(prof_info__get_prof_node_4_0, 2)
MR_decl_label1(prof_info__prof_node_concat_to_child_4_0, 3)
MR_decl_label1(prof_info__prof_node_concat_to_member_4_0, 3)
MR_decl_label1(prof_info__prof_node_concat_to_name_list_3_0, 3)
MR_decl_label1(prof_info__prof_node_concat_to_parent_4_0, 3)
MR_decl_label1(prof_info__prof_node_get_child_list_2_0, 3)
MR_decl_label1(prof_info__prof_node_get_entire_cycle_8_0, 3)
MR_decl_label1(prof_info__prof_node_get_entire_pred_10_0, 3)
MR_decl_label1(prof_info__prof_node_get_parent_list_2_0, 3)
MR_decl_label1(prof_info__prof_node_get_self_calls_2_0, 3)
MR_decl_label1(prof_info__prof_node_get_total_calls_2_0, 3)
MR_decl_label1(prof_info__prof_node_set_cycle_num_3_0, 3)
MR_decl_label1(prof_info__prof_node_set_initial_counts_3_0, 3)
MR_decl_label1(prof_info__prof_node_set_propagated_counts_3_0, 3)
MR_decl_label1(prof_info__prof_node_set_self_calls_3_0, 3)
MR_decl_label1(prof_info__prof_node_set_total_calls_3_0, 3)
MR_decl_label1(prof_info__prof_node_type_2_0, 3)
MR_decl_label1(prof_info__update_prof_node_5_0, 2)
MR_decl_label2(__Unify___prof_info__pred_info_0_0, 4,1)
MR_decl_label4(__Unify___prof_info__prof_0_0, 4,6,10,1)
MR_decl_label6(__Unify___prof_info__prof_node_0_0, 7,26,5,10,12,1)
MR_decl_label4(__Compare___prof_info__pred_info_0_0, 3,2,5,21)
MR_decl_label8(__Compare___prof_info__prof_0_0, 3,2,5,9,13,17,21,71)
MR_decl_label10(__Compare___prof_info__prof_node_0_0, 3,2,9,13,17,21,25,29,7,5)
MR_decl_label10(__Compare___prof_info__prof_node_0_0, 40,42,46,50,54,58,62,66,70,198)
MR_def_extern_entry(prof_info__get_prof_node_4_0)
MR_def_extern_entry(prof_info__update_prof_node_5_0)
MR_def_extern_entry(fn__prof_info__prof_node_init_1_0)
MR_def_extern_entry(fn__prof_info__prof_node_init_cycle_7_0)
MR_def_extern_entry(prof_info__prof_get_entire_7_0)
MR_def_extern_entry(prof_info__prof_get_addrdeclmap_2_0)
MR_def_extern_entry(prof_info__prof_get_profnodemap_2_0)
MR_def_extern_entry(prof_info__prof_set_entire_7_0)
MR_def_extern_entry(prof_info__prof_set_profnodemap_3_0)
MR_def_extern_entry(prof_info__prof_set_cyclemap_3_0)
MR_def_extern_entry(prof_info__prof_node_type_2_0)
MR_def_extern_entry(prof_info__prof_node_get_entire_pred_10_0)
MR_def_extern_entry(prof_info__prof_node_get_entire_cycle_8_0)
MR_def_extern_entry(prof_info__prof_node_get_pred_name_2_0)
MR_def_extern_entry(prof_info__prof_node_get_cycle_number_2_0)
MR_def_extern_entry(prof_info__prof_node_get_initial_counts_2_0)
MR_def_extern_entry(prof_info__prof_node_get_propagated_counts_2_0)
MR_def_extern_entry(prof_info__prof_node_get_parent_list_2_0)
MR_def_extern_entry(prof_info__prof_node_get_child_list_2_0)
MR_def_extern_entry(prof_info__prof_node_get_total_calls_2_0)
MR_def_extern_entry(prof_info__prof_node_get_self_calls_2_0)
MR_def_extern_entry(prof_info__prof_node_set_cycle_num_3_0)
MR_def_extern_entry(prof_info__prof_node_set_initial_counts_3_0)
MR_def_extern_entry(prof_info__prof_node_set_propagated_counts_3_0)
MR_def_extern_entry(prof_info__prof_node_concat_to_parent_4_0)
MR_def_extern_entry(prof_info__prof_node_concat_to_child_4_0)
MR_def_extern_entry(prof_info__prof_node_set_total_calls_3_0)
MR_def_extern_entry(prof_info__prof_node_set_self_calls_3_0)
MR_def_extern_entry(prof_info__prof_node_concat_to_name_list_3_0)
MR_def_extern_entry(prof_info__prof_node_concat_to_member_4_0)
MR_def_extern_entry(prof_info__pred_info_init_3_0)
MR_def_extern_entry(prof_info__pred_info_get_entire_3_0)
MR_def_extern_entry(prof_info__pred_info_get_pred_name_2_0)
MR_def_extern_entry(prof_info__pred_info_get_counts_2_0)
MR_def_extern_entry(__Unify___prof_info__addrdecl_0_0)
MR_def_extern_entry(__Compare___prof_info__addrdecl_0_0)
MR_def_extern_entry(__Unify___prof_info__cycle_map_0_0)
MR_def_extern_entry(__Compare___prof_info__cycle_map_0_0)
MR_def_extern_entry(__Unify___prof_info__pred_info_0_0)
MR_def_extern_entry(__Compare___prof_info__pred_info_0_0)
MR_def_extern_entry(__Unify___prof_info__prof_0_0)
MR_def_extern_entry(__Compare___prof_info__prof_0_0)
MR_def_extern_entry(__Unify___prof_info__prof_node_0_0)
MR_def_extern_entry(__Compare___prof_info__prof_node_0_0)
MR_def_extern_entry(__Unify___prof_info__prof_node_map_0_0)
MR_def_extern_entry(__Compare___prof_info__prof_node_map_0_0)
MR_def_extern_entry(__Unify___prof_info__prof_node_type_0_0)
MR_def_extern_entry(__Compare___prof_info__prof_node_type_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(prof_info, prof_node)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(prof_info, pred_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_addrdecl_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___prof_info__addrdecl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___prof_info__addrdecl_0_0)),
	"prof_info",
	"addrdecl",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_cycle_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___prof_info__cycle_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___prof_info__cycle_map_0_0)),
	"prof_info",
	"cycle_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_prof_info__field_types_pred_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_prof_info__field_names_pred_info_0_0[] = {
	"pred_info_name",
	"pred_info_count"
};

static const MR_DuFunctorDesc mercury_data_prof_info__du_functor_desc_pred_info_0_0 = {
	"pred_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_prof_info__field_types_pred_info_0_0,
	mercury_data_prof_info__field_names_pred_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_prof_info__du_stag_ordered_pred_info_0_0[] = {
	&mercury_data_prof_info__du_functor_desc_pred_info_0_0

};

const MR_DuPtagLayout mercury_data_prof_info__du_ptag_ordered_pred_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_prof_info__du_stag_ordered_pred_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_prof_info__du_name_ordered_pred_info_0[] = {
	&mercury_data_prof_info__du_functor_desc_pred_info_0_0
};

const MR_Integer mercury_data_prof_info__functor_number_map_pred_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_pred_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___prof_info__pred_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___prof_info__pred_info_0_0)),
	"prof_info",
	"pred_info",
	{ (void *)mercury_data_prof_info__du_name_ordered_pred_info_0 },
	{ (void *)mercury_data_prof_info__du_ptag_ordered_pred_info_0 },
	1,
	4,
	mercury_data_prof_info__functor_number_map_pred_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_node_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_prof_info__type_ctor_info_prof_node_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_prof_info__field_types_prof_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_prof_info__field_names_prof_0_0[] = {
	"scaling_factor",
	"units",
	"total_count",
	"addr_decl_map",
	"prof_node_map",
	"cycle_map"
};

const MR_DuArgLocn mercury_data_prof_info__field_locns_prof_0_0[] = {
	{ 0, 0, -1 },
	{ 2, 0, 0 },
	{ 3, 0, 0 },
	{ 4, 0, 0 },
	{ 5, 0, 0 },
	{ 6, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_prof_info__du_functor_desc_prof_0_0 = {
	"prof",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_prof_info__field_types_prof_0_0,
	mercury_data_prof_info__field_names_prof_0_0,
	mercury_data_prof_info__field_locns_prof_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_prof_info__du_stag_ordered_prof_0_0[] = {
	&mercury_data_prof_info__du_functor_desc_prof_0_0

};

const MR_DuPtagLayout mercury_data_prof_info__du_ptag_ordered_prof_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_prof_info__du_stag_ordered_prof_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_prof_info__du_name_ordered_prof_0[] = {
	&mercury_data_prof_info__du_functor_desc_prof_0_0
};

const MR_Integer mercury_data_prof_info__functor_number_map_prof_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___prof_info__prof_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___prof_info__prof_0_0)),
	"prof_info",
	"prof",
	{ (void *)mercury_data_prof_info__du_name_ordered_prof_0 },
	{ (void *)mercury_data_prof_info__du_ptag_ordered_prof_0 },
	1,
	4,
	mercury_data_prof_info__functor_number_map_prof_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1prof_info__type_ctor_info_pred_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_prof_info__type_ctor_info_pred_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_prof_info__field_types_prof_node_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1prof_info__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1prof_info__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_prof_info__field_names_prof_node_0_0[] = {
	"pred_name",
	"pred_cycle_number",
	"pred_self_counts",
	"pred_propagated_counts",
	"pred_parent_list",
	"pred_child_list",
	"pred_total_calls",
	"pred_self_calls",
	"prd_name_list"
};

const MR_DuArgLocn mercury_data_prof_info__field_locns_prof_node_0_0[] = {
	{ 0, 0, 0 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, -1 },
	{ 5, 0, 0 },
	{ 6, 0, 0 },
	{ 7, 0, 0 },
	{ 8, 0, 0 },
	{ 9, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_prof_info__du_functor_desc_prof_node_0_0 = {
	"pred_node",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_prof_info__field_types_prof_node_0_0,
	mercury_data_prof_info__field_names_prof_node_0_0,
	mercury_data_prof_info__field_locns_prof_node_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_prof_info__field_types_prof_node_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1prof_info__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_prof_info__field_names_prof_node_0_1[] = {
	"cycle_name",
	"cycle_cycle_number",
	"cycle_self_counts",
	"cycle_propagated_counts",
	"cycle_members",
	"cycle_total_calls",
	"cycle_self_calls"
};

const MR_DuArgLocn mercury_data_prof_info__field_locns_prof_node_0_1[] = {
	{ 0, 0, 0 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, -1 },
	{ 5, 0, 0 },
	{ 6, 0, 0 },
	{ 7, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_prof_info__du_functor_desc_prof_node_0_1 = {
	"cycle_node",
	7,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_prof_info__field_types_prof_node_0_1,
	mercury_data_prof_info__field_names_prof_node_0_1,
	mercury_data_prof_info__field_locns_prof_node_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_prof_info__du_stag_ordered_prof_node_0_0[] = {
	&mercury_data_prof_info__du_functor_desc_prof_node_0_0

};

const MR_DuFunctorDescPtr mercury_data_prof_info__du_stag_ordered_prof_node_0_1[] = {
	&mercury_data_prof_info__du_functor_desc_prof_node_0_1

};

const MR_DuPtagLayout mercury_data_prof_info__du_ptag_ordered_prof_node_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_prof_info__du_stag_ordered_prof_node_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_prof_info__du_stag_ordered_prof_node_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_prof_info__du_name_ordered_prof_node_0[] = {
	&mercury_data_prof_info__du_functor_desc_prof_node_0_1,
	&mercury_data_prof_info__du_functor_desc_prof_node_0_0
};

const MR_Integer mercury_data_prof_info__functor_number_map_prof_node_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_node_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___prof_info__prof_node_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___prof_info__prof_node_0_0)),
	"prof_info",
	"prof_node",
	{ (void *)mercury_data_prof_info__du_name_ordered_prof_node_0 },
	{ (void *)mercury_data_prof_info__du_ptag_ordered_prof_node_0 },
	2,
	4,
	mercury_data_prof_info__functor_number_map_prof_node_0
};

const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_node_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___prof_info__prof_node_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___prof_info__prof_node_map_0_0)),
	"prof_info",
	"prof_node_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_prof_info__enum_functor_desc_prof_node_type_0_0 = {
	"predicate",
	0
};

static const MR_EnumFunctorDesc mercury_data_prof_info__enum_functor_desc_prof_node_type_0_1 = {
	"cycle",
	1
};

const MR_EnumFunctorDescPtr mercury_data_prof_info__enum_value_ordered_prof_node_type_0[] = {
	&mercury_data_prof_info__enum_functor_desc_prof_node_type_0_0,
	&mercury_data_prof_info__enum_functor_desc_prof_node_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_prof_info__enum_name_ordered_prof_node_type_0[] = {
	&mercury_data_prof_info__enum_functor_desc_prof_node_type_0_1,
	&mercury_data_prof_info__enum_functor_desc_prof_node_type_0_0
};

const MR_Integer mercury_data_prof_info__functor_number_map_prof_node_type_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_node_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___prof_info__prof_node_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___prof_info__prof_node_type_0_0)),
	"prof_info",
	"prof_node_type",
	{ (void *)mercury_data_prof_info__enum_name_ordered_prof_node_type_0 },
	{ (void *)mercury_data_prof_info__enum_value_ordered_prof_node_type_0 },
	2,
	4,
	mercury_data_prof_info__functor_number_map_prof_node_type_0
};



MR_decl_entry(map__lookup_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(prof_info_module0)
	MR_init_entry1(prof_info__get_prof_node_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__get_prof_node_4_0);
	MR_init_label1(prof_info__get_prof_node_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_prof_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__get_prof_node_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		prof_info__get_prof_node_4_0_i2);
MR_def_label(prof_info__get_prof_node_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(prof_info_module1)
	MR_init_entry1(prof_info__update_prof_node_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__update_prof_node_5_0);
	MR_init_label1(prof_info__update_prof_node_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_prof_node'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__update_prof_node_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		prof_info__update_prof_node_5_0_i2);
MR_def_label(prof_info__update_prof_node_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;

MR_BEGIN_MODULE(prof_info_module2)
	MR_init_entry1(fn__prof_info__prof_node_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__prof_info__prof_node_init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__prof_info__prof_node_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 0;
	* (MR_Float *) &(MR_tfield(0, MR_r2, 3)) = (MR_Float) 0.0000000000000000;
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 7) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module3)
	MR_init_entry1(fn__prof_info__prof_node_init_cycle_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__prof_info__prof_node_init_cycle_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_init_cycle'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__prof_info__prof_node_init_cycle_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 8);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tempf2 = MR_f(1);
	* (MR_Float *) &(MR_tfield(1, MR_tempr1, 3)) = MR_tempf2;
	MR_tfield(1, MR_tempr1, 5) = MR_r4;
	MR_tfield(1, MR_tempr1, 6) = MR_r5;
	MR_tfield(1, MR_tempr1, 7) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module4)
	MR_init_entry1(prof_info__prof_get_entire_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_get_entire_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_get_entire'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_get_entire_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = MR_float_from_dword_ptr(&MR_tfield(0, MR_r1, 0));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tfield(0, MR_tempr1, 5);
	MR_r5 = MR_tfield(0, MR_tempr1, 6);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module5)
	MR_init_entry1(prof_info__prof_get_addrdeclmap_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_get_addrdeclmap_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_get_addrdeclmap'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_get_addrdeclmap_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module6)
	MR_init_entry1(prof_info__prof_get_profnodemap_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_get_profnodemap_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_get_profnodemap'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_get_profnodemap_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module7)
	MR_init_entry1(prof_info__prof_set_entire_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_set_entire_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_set_entire'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_set_entire_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempf2 = MR_f(1);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_tempf2;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_tfield(0, MR_tempr1, 6) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module8)
	MR_init_entry1(prof_info__prof_set_profnodemap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_set_profnodemap_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_set_profnodemap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_set_profnodemap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module9)
	MR_init_entry1(prof_info__prof_set_cyclemap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_set_cyclemap_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_set_cyclemap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_set_cyclemap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module10)
	MR_init_entry1(prof_info__prof_node_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_type_2_0);
	MR_init_label1(prof_info__prof_node_type_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(prof_info__prof_node_type_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(prof_info__prof_node_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(prof_info_module11)
	MR_init_entry1(prof_info__prof_node_get_entire_pred_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_entire_pred_10_0);
	MR_init_label1(prof_info__prof_node_get_entire_pred_10_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_entire_pred'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_entire_pred_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(prof_info__prof_node_get_entire_pred_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_f(1) = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr1, 3));
	MR_r4 = MR_tfield(0, MR_tempr1, 5);
	MR_r5 = MR_tfield(0, MR_tempr1, 6);
	MR_r6 = MR_tfield(0, MR_tempr1, 7);
	MR_r7 = MR_tfield(0, MR_tempr1, 8);
	MR_r8 = MR_tfield(0, MR_tempr1, 9);
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_get_entire_pred_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prof_node_get_entire_pred: not a pred\n", 38);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module12)
	MR_init_entry1(prof_info__prof_node_get_entire_cycle_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_entire_cycle_8_0);
	MR_init_label1(prof_info__prof_node_get_entire_cycle_8_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_entire_cycle'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_entire_cycle_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(prof_info__prof_node_get_entire_cycle_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_f(1) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr1, 3));
	MR_r4 = MR_tfield(1, MR_tempr1, 5);
	MR_r5 = MR_tfield(1, MR_tempr1, 6);
	MR_r6 = MR_tfield(1, MR_tempr1, 7);
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_get_entire_cycle_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prof_node_get_entire_cycle: not a cycle\n", 40);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module13)
	MR_init_entry1(prof_info__prof_node_get_pred_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_pred_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_pred_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_pred_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module14)
	MR_init_entry1(prof_info__prof_node_get_cycle_number_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_cycle_number_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_cycle_number'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_cycle_number_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module15)
	MR_init_entry1(prof_info__prof_node_get_initial_counts_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_initial_counts_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_initial_counts'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_initial_counts_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module16)
	MR_init_entry1(prof_info__prof_node_get_propagated_counts_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_propagated_counts_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_propagated_counts'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_propagated_counts_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = MR_float_from_dword_ptr(&MR_mask_field(MR_r1, 3));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module17)
	MR_init_entry1(prof_info__prof_node_get_parent_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_parent_list_2_0);
	MR_init_label1(prof_info__prof_node_get_parent_list_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_parent_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_parent_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(prof_info__prof_node_get_parent_list_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
MR_def_label(prof_info__prof_node_get_parent_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prof_node_get_parent_list: cycle_node has no parent list\n", 57);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module18)
	MR_init_entry1(prof_info__prof_node_get_child_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_child_list_2_0);
	MR_init_label1(prof_info__prof_node_get_child_list_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_child_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_child_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(prof_info__prof_node_get_child_list_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
MR_def_label(prof_info__prof_node_get_child_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prof_node_get_child_list: cycle_node has no child list\n", 55);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module19)
	MR_init_entry1(prof_info__prof_node_get_total_calls_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_total_calls_2_0);
	MR_init_label1(prof_info__prof_node_get_total_calls_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_total_calls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_total_calls_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(prof_info__prof_node_get_total_calls_2_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 6);
	MR_proceed();
MR_def_label(prof_info__prof_node_get_total_calls_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module20)
	MR_init_entry1(prof_info__prof_node_get_self_calls_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_get_self_calls_2_0);
	MR_init_label1(prof_info__prof_node_get_self_calls_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_get_self_calls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_get_self_calls_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(prof_info__prof_node_get_self_calls_2_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 7);
	MR_proceed();
MR_def_label(prof_info__prof_node_get_self_calls_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module21)
	MR_init_entry1(prof_info__prof_node_set_cycle_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_set_cycle_num_3_0);
	MR_init_label1(prof_info__prof_node_set_cycle_num_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_set_cycle_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_set_cycle_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(prof_info__prof_node_set_cycle_num_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 8);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(1, MR_r2, 2);
	* (MR_Float *) &(MR_tfield(1, MR_tempr1, 3)) = MR_float_from_dword_ptr(&MR_tfield(1, MR_r2, 3));
	MR_tfield(1, MR_tempr1, 5) = MR_tfield(1, MR_r2, 5);
	MR_tfield(1, MR_tempr1, 6) = MR_tfield(1, MR_r2, 6);
	MR_tfield(1, MR_tempr1, 7) = MR_tfield(1, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_set_cycle_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 3)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_r2, 3));
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module22)
	MR_init_entry1(prof_info__prof_node_set_initial_counts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_set_initial_counts_3_0);
	MR_init_label1(prof_info__prof_node_set_initial_counts_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_set_initial_counts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_set_initial_counts_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(prof_info__prof_node_set_initial_counts_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 8);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	* (MR_Float *) &(MR_tfield(1, MR_tempr1, 3)) = MR_float_from_dword_ptr(&MR_tfield(1, MR_r2, 3));
	MR_tfield(1, MR_tempr1, 5) = MR_tfield(1, MR_r2, 5);
	MR_tfield(1, MR_tempr1, 6) = MR_tfield(1, MR_r2, 6);
	MR_tfield(1, MR_tempr1, 7) = MR_tfield(1, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_set_initial_counts_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 3)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_r2, 3));
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module23)
	MR_init_entry1(prof_info__prof_node_set_propagated_counts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_set_propagated_counts_3_0);
	MR_init_label1(prof_info__prof_node_set_propagated_counts_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_set_propagated_counts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_set_propagated_counts_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(prof_info__prof_node_set_propagated_counts_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 8);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = MR_tfield(1, MR_r1, 1);
	MR_tfield(1, MR_r2, 2) = MR_tfield(1, MR_r1, 2);
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(1);
	* (MR_Float *) &(MR_tfield(1, MR_r2, 3)) = MR_tempf1;
	MR_tfield(1, MR_r2, 5) = MR_tfield(1, MR_r1, 5);
	MR_tfield(1, MR_r2, 6) = MR_tfield(1, MR_r1, 6);
	MR_tfield(1, MR_r2, 7) = MR_tfield(1, MR_r1, 7);
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_set_propagated_counts_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(1);
	* (MR_Float *) &(MR_tfield(0, MR_r2, 3)) = MR_tempf1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_r1, 9);
	MR_r1 = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module24)
	MR_init_entry1(prof_info__prof_node_concat_to_parent_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_concat_to_parent_4_0);
	MR_init_label1(prof_info__prof_node_concat_to_parent_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_concat_to_parent'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_concat_to_parent_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(prof_info__prof_node_concat_to_parent_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r2, 1) = MR_tfield(0, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr2, 2);
	* (MR_Float *) &(MR_tfield(0, MR_r1, 3)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr2, 3));
	MR_tfield(0, MR_r1, 5) = MR_r2;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_concat_to_parent_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prof_node_concat_to_parent: cycle_node has no parents\n", 54);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module25)
	MR_init_entry1(prof_info__prof_node_concat_to_child_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_concat_to_child_4_0);
	MR_init_label1(prof_info__prof_node_concat_to_child_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_concat_to_child'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_concat_to_child_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(prof_info__prof_node_concat_to_child_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r2, 1) = MR_tfield(0, MR_tempr2, 6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr2, 2);
	* (MR_Float *) &(MR_tfield(0, MR_r1, 3)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr2, 3));
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_r2;
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_concat_to_child_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prof_node_concat_to_child: cycle_node has no child\n", 51);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module26)
	MR_init_entry1(prof_info__prof_node_set_total_calls_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_set_total_calls_3_0);
	MR_init_label1(prof_info__prof_node_set_total_calls_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_set_total_calls'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_set_total_calls_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(prof_info__prof_node_set_total_calls_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 8);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(1, MR_r2, 2);
	* (MR_Float *) &(MR_tfield(1, MR_tempr1, 3)) = MR_float_from_dword_ptr(&MR_tfield(1, MR_r2, 3));
	MR_tfield(1, MR_tempr1, 5) = MR_tfield(1, MR_r2, 5);
	MR_tfield(1, MR_tempr1, 6) = MR_r1;
	MR_tfield(1, MR_tempr1, 7) = MR_tfield(1, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_set_total_calls_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 3)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_r2, 3));
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module27)
	MR_init_entry1(prof_info__prof_node_set_self_calls_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_set_self_calls_3_0);
	MR_init_label1(prof_info__prof_node_set_self_calls_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_set_self_calls'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_set_self_calls_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(prof_info__prof_node_set_self_calls_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 8);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(1, MR_r2, 2);
	* (MR_Float *) &(MR_tfield(1, MR_tempr1, 3)) = MR_float_from_dword_ptr(&MR_tfield(1, MR_r2, 3));
	MR_tfield(1, MR_tempr1, 5) = MR_tfield(1, MR_r2, 5);
	MR_tfield(1, MR_tempr1, 6) = MR_tfield(1, MR_r2, 6);
	MR_tfield(1, MR_tempr1, 7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_set_self_calls_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 3)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_r2, 3));
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module28)
	MR_init_entry1(prof_info__prof_node_concat_to_name_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_concat_to_name_list_3_0);
	MR_init_label1(prof_info__prof_node_concat_to_name_list_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_concat_to_name_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_concat_to_name_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(prof_info__prof_node_concat_to_name_list_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 9);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	* (MR_Float *) &(MR_tfield(0, MR_r1, 3)) = MR_float_from_dword_ptr(&MR_tfield(0, MR_r2, 3));
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_concat_to_name_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prof_node_concat_to_name_list: cycle_node has no namelist\n", 58);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module29)
	MR_init_entry1(prof_info__prof_node_concat_to_member_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__prof_node_concat_to_member_4_0);
	MR_init_label1(prof_info__prof_node_concat_to_member_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prof_node_concat_to_member'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__prof_node_concat_to_member_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(prof_info__prof_node_concat_to_member_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_r2, 1) = MR_tfield(1, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 8);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_r1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(1, MR_r1, 2) = MR_tfield(1, MR_tempr2, 2);
	* (MR_Float *) &(MR_tfield(1, MR_r1, 3)) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr2, 3));
	MR_tfield(1, MR_r1, 5) = MR_r2;
	MR_tfield(1, MR_r1, 6) = MR_tfield(1, MR_tempr2, 6);
	MR_tfield(1, MR_r1, 7) = MR_tfield(1, MR_tempr2, 7);
	MR_proceed();
	}
MR_def_label(prof_info__prof_node_concat_to_member_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prof_node_concat_to_member: pred_node has no members\n", 53);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module30)
	MR_init_entry1(prof_info__pred_info_init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__pred_info_init_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_info_init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__pred_info_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module31)
	MR_init_entry1(prof_info__pred_info_get_entire_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__pred_info_get_entire_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_info_get_entire'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__pred_info_get_entire_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module32)
	MR_init_entry1(prof_info__pred_info_get_pred_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__pred_info_get_pred_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_info_get_pred_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__pred_info_get_pred_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module33)
	MR_init_entry1(prof_info__pred_info_get_counts_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__prof_info__pred_info_get_counts_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_info_get_counts'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__prof_info__pred_info_get_counts_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(prof_info_module34)
	MR_init_entry1(__Unify___prof_info__addrdecl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___prof_info__addrdecl_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___prof_info__addrdecl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(prof_info_module35)
	MR_init_entry1(__Compare___prof_info__addrdecl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___prof_info__addrdecl_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___prof_info__addrdecl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module36)
	MR_init_entry1(__Unify___prof_info__cycle_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___prof_info__cycle_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___prof_info__cycle_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module37)
	MR_init_entry1(__Compare___prof_info__cycle_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___prof_info__cycle_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___prof_info__cycle_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module38)
	MR_init_entry1(__Unify___prof_info__pred_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___prof_info__pred_info_0_0);
	MR_init_label2(__Unify___prof_info__pred_info_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___prof_info__pred_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___prof_info__pred_info_0_0_i4);
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
		MR_GOTO_LAB(__Unify___prof_info__pred_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___prof_info__pred_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___prof_info__pred_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(prof_info_module39)
	MR_init_entry1(__Compare___prof_info__pred_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___prof_info__pred_info_0_0);
	MR_init_label4(__Compare___prof_info__pred_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___prof_info__pred_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___prof_info__pred_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___prof_info__pred_info_0_0_i2);
MR_def_label(__Compare___prof_info__pred_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___prof_info__pred_info_0_0,2)
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
		__Compare___prof_info__pred_info_0_0_i5);
MR_def_label(__Compare___prof_info__pred_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__pred_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___prof_info__pred_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module40)
	MR_init_entry1(__Unify___prof_info__prof_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___prof_info__prof_0_0);
	MR_init_label4(__Unify___prof_info__prof_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___prof_info__prof_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempf3 = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr1, 0));
	MR_tempf4 = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr2, 0));
	if ((MR_tempf3 != MR_tempf4)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_0_0_i1);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr6 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr5, (char *) (MR_Word *) MR_tempr6) != 0)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_0_0_i1);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr6 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_tempr5 != MR_tempr6)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_0_0_i1);
	}
	MR_tempr5 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr5, 5);
	MR_tempr6 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr5, 4);
	MR_r3 = MR_tfield(0, MR_tempr6, 4);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___prof_info__prof_0_0_i4);
MR_def_label(__Unify___prof_info__prof_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___prof_info__prof_0_0_i6);
MR_def_label(__Unify___prof_info__prof_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___prof_info__prof_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___prof_info__prof_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(prof_info_module41)
	MR_init_entry1(__Compare___prof_info__prof_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___prof_info__prof_0_0);
	MR_init_label8(__Compare___prof_info__prof_0_0,3,2,5,9,13,17,21,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___prof_info__prof_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___prof_info__prof_0_0_i2);
MR_def_label(__Compare___prof_info__prof_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___prof_info__prof_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(9) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr4, 3);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	MR_tempr1 = MR_tempr4;
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_f(1) = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr1, 0));
	MR_f(2) = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr2, 0));
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___prof_info__prof_0_0_i5);
MR_def_label(__Compare___prof_info__prof_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_0_0_i71);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___prof_info__prof_0_0_i9);
MR_def_label(__Compare___prof_info__prof_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_0_0_i71);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___prof_info__prof_0_0_i13);
MR_def_label(__Compare___prof_info__prof_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_0_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___prof_info__prof_0_0_i17);
MR_def_label(__Compare___prof_info__prof_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_0_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___prof_info__prof_0_0_i21);
MR_def_label(__Compare___prof_info__prof_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_0_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___prof_info__prof_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module42)
	MR_init_entry1(__Unify___prof_info__prof_node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___prof_info__prof_node_0_0);
	MR_init_label6(__Unify___prof_info__prof_node_0_0,7,26,5,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___prof_info__prof_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i26);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4, MR_tempf5, MR_tempf6;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempf5 = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr1, 3));
	MR_tempf6 = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr2, 3));
	if ((MR_tempf5 != MR_tempf6)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_tempr3, 6);
	MR_tempr4 = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_tempr3, 7);
	MR_sv(7) = MR_tfield(1, MR_tempr4, 6);
	MR_sv(8) = MR_tfield(1, MR_tempr4, 7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(1, MR_tempr3, 5);
	MR_r3 = MR_tfield(1, MR_tempr4, 5);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___prof_info__prof_node_0_0_i7);
MR_def_label(__Unify___prof_info__prof_node_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___prof_info__prof_node_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___prof_info__prof_node_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tempr5 = MR_sv(5);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 0);
	MR_tempr6 = MR_sv(6);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempf3 = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr5, 3));
	MR_tempf4 = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr6, 3));
	if ((MR_tempf3 != MR_tempf4)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_tempr1 = MR_tempr5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 6);
	MR_tempr2 = MR_tempr6;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 9);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 5);
	MR_r3 = MR_tfield(0, MR_tempr2, 5);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___prof_info__prof_node_0_0_i10);
MR_def_label(__Unify___prof_info__prof_node_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___prof_info__prof_node_0_0_i12);
MR_def_label(__Unify___prof_info__prof_node_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(2))) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___prof_info__prof_node_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___prof_info__prof_node_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module43)
	MR_init_entry1(__Compare___prof_info__prof_node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___prof_info__prof_node_0_0);
	MR_init_label10(__Compare___prof_info__prof_node_0_0,3,2,9,13,17,21,25,29,7,5)
	MR_init_label10(__Compare___prof_info__prof_node_0_0,40,42,46,50,54,58,62,66,70,198)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___prof_info__prof_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i2);
MR_def_label(__Compare___prof_info__prof_node_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___prof_info__prof_node_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(15) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(14) = MR_tfield(1, MR_tempr5, 2);
	* (MR_Float *) &MR_sv(13) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr5, 3));
	MR_sv(10) = MR_tfield(1, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 6);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 7);
	MR_tempr6 = MR_sv(2);
	MR_sv(7) = MR_tfield(1, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(1, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(1, MR_tempr6, 5);
	* (MR_Float *) &MR_sv(4) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr6, 3));
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___prof_info__prof_node_0_0_i9);
MR_def_label(__Compare___prof_info__prof_node_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___prof_info__prof_node_0_0_i13);
MR_def_label(__Compare___prof_info__prof_node_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___prof_info__prof_node_0_0_i17);
MR_def_label(__Compare___prof_info__prof_node_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(13));
	MR_f(2) = MR_float_from_dword_ptr(&MR_sv(4));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___prof_info__prof_node_0_0_i21);
MR_def_label(__Compare___prof_info__prof_node_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___prof_info__prof_node_0_0_i25);
MR_def_label(__Compare___prof_info__prof_node_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___prof_info__prof_node_0_0_i29);
MR_def_label(__Compare___prof_info__prof_node_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___prof_info__prof_node_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(21);
MR_def_label(__Compare___prof_info__prof_node_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(21);
MR_def_label(__Compare___prof_info__prof_node_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 2);
	* (MR_Float *) &MR_sv(18) = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr5, 3));
	MR_sv(16) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 9);
	MR_tempr6 = MR_sv(2);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	* (MR_Float *) &MR_sv(4) = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr6, 3));
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___prof_info__prof_node_0_0_i42);
MR_def_label(__Compare___prof_info__prof_node_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___prof_info__prof_node_0_0_i46);
MR_def_label(__Compare___prof_info__prof_node_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___prof_info__prof_node_0_0_i50);
MR_def_label(__Compare___prof_info__prof_node_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(18));
	MR_f(2) = MR_float_from_dword_ptr(&MR_sv(4));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___prof_info__prof_node_0_0_i54);
MR_def_label(__Compare___prof_info__prof_node_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___prof_info__prof_node_0_0_i58);
MR_def_label(__Compare___prof_info__prof_node_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___prof_info__prof_node_0_0_i62);
MR_def_label(__Compare___prof_info__prof_node_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___prof_info__prof_node_0_0_i66);
MR_def_label(__Compare___prof_info__prof_node_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___prof_info__prof_node_0_0_i70);
MR_def_label(__Compare___prof_info__prof_node_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___prof_info__prof_node_0_0_i198);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___prof_info__prof_node_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module44)
	MR_init_entry1(__Unify___prof_info__prof_node_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___prof_info__prof_node_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___prof_info__prof_node_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module45)
	MR_init_entry1(__Compare___prof_info__prof_node_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___prof_info__prof_node_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___prof_info__prof_node_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module46)
	MR_init_entry1(__Unify___prof_info__prof_node_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___prof_info__prof_node_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___prof_info__prof_node_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(prof_info_module47)
	MR_init_entry1(__Compare___prof_info__prof_node_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___prof_info__prof_node_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___prof_info__prof_node_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__prof_info_maybe_bunch_0(void)
{
	prof_info_module0();
	prof_info_module1();
	prof_info_module2();
	prof_info_module3();
	prof_info_module4();
	prof_info_module5();
	prof_info_module6();
	prof_info_module7();
	prof_info_module8();
	prof_info_module9();
	prof_info_module10();
	prof_info_module11();
	prof_info_module12();
	prof_info_module13();
	prof_info_module14();
	prof_info_module15();
	prof_info_module16();
	prof_info_module17();
	prof_info_module18();
	prof_info_module19();
	prof_info_module20();
	prof_info_module21();
	prof_info_module22();
	prof_info_module23();
	prof_info_module24();
	prof_info_module25();
	prof_info_module26();
	prof_info_module27();
	prof_info_module28();
	prof_info_module29();
	prof_info_module30();
	prof_info_module31();
	prof_info_module32();
	prof_info_module33();
	prof_info_module34();
	prof_info_module35();
	prof_info_module36();
	prof_info_module37();
	prof_info_module38();
	prof_info_module39();
}

static void mercury__prof_info_maybe_bunch_1(void)
{
	prof_info_module40();
	prof_info_module41();
	prof_info_module42();
	prof_info_module43();
	prof_info_module44();
	prof_info_module45();
	prof_info_module46();
	prof_info_module47();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__prof_info__init(void);
void mercury__prof_info__init_type_tables(void);
void mercury__prof_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__prof_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__prof_info__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__prof_info__init_threadscope_string_table(void);
#endif

void mercury__prof_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__prof_info_maybe_bunch_0();
	mercury__prof_info_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_prof_info__type_ctor_info_addrdecl_0,
		prof_info__addrdecl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_prof_info__type_ctor_info_cycle_map_0,
		prof_info__cycle_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_prof_info__type_ctor_info_pred_info_0,
		prof_info__pred_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_prof_info__type_ctor_info_prof_0,
		prof_info__prof_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_prof_info__type_ctor_info_prof_node_0,
		prof_info__prof_node_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_prof_info__type_ctor_info_prof_node_map_0,
		prof_info__prof_node_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_prof_info__type_ctor_info_prof_node_type_0,
		prof_info__prof_node_type_0_0);
	mercury__prof_info__init_debugger();
}

void mercury__prof_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_prof_info__type_ctor_info_addrdecl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_prof_info__type_ctor_info_cycle_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_prof_info__type_ctor_info_pred_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_prof_info__type_ctor_info_prof_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_prof_info__type_ctor_info_prof_node_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_prof_info__type_ctor_info_prof_node_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_prof_info__type_ctor_info_prof_node_type_0);
	}
}


void mercury__prof_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__prof_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__prof_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__prof_info__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__prof_info__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
