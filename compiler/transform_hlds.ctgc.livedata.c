/*
** Automatically generated from `ctgc.livedata.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__livedata__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.ctgc.livedata.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "transform_hlds.ctgc.livedata.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "transform_hlds.ctgc.livedata.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "transform_hlds.ctgc.livedata.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.ctgc.livedata.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "transform_hlds.ctgc.livedata.c"
#line 49 "transform_hlds.ctgc.livedata.c"
#include "transform_hlds.ctgc.livedata.mh"

#line 52 "transform_hlds.ctgc.livedata.c"
#line 53 "transform_hlds.ctgc.livedata.c"
#ifndef TRANSFORM_HLDS__CTGC__LIVEDATA_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__LIVEDATA_DECL_GUARD

#line 57 "transform_hlds.ctgc.livedata.c"
#line 58 "transform_hlds.ctgc.livedata.c"

#endif
#line 61 "transform_hlds.ctgc.livedata.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_livedata_0,
	mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_nodes_are_not_live_result_0;
MR_decl_label1(transform_hlds__ctgc__livedata__livedata_is_bottom_1_0, 1)
MR_decl_label4(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0, 4,27,2,1)
MR_decl_label3(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0, 2,10,1)
MR_decl_label3(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0, 3,26,6)
MR_decl_label10(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0, 3,6,4,12,14,16,17,20,18,25)
MR_decl_label1(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0, 27)
MR_decl_label9(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0, 4,2,8,6,12,15,16,17,18)
MR_decl_label2(fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0, 3,4)
MR_decl_label10(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0, 2,3,5,6,7,11,9,15,18,13)
MR_decl_label6(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0, 20,24,28,29,30,22)
MR_decl_label1(fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0, 4)
MR_decl_label5(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0, 3,4,6,44,8)
MR_decl_label4(fn__transform_hlds__ctgc__livedata__livedata_project_2_0, 3,35,6,8)
MR_decl_label4(__Unify___transform_hlds__ctgc__livedata__livedata_0_0, 5,15,6,1)
MR_decl_label3(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0, 12,5,1)
MR_decl_label7(__Compare___transform_hlds__ctgc__livedata__livedata_0_0, 30,5,11,33,9,14,15)
MR_decl_label4(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0, 18,7,5,9)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_init_0_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_init_from_datastructs_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_init_as_top_0_0)
MR_def_extern_entry(transform_hlds__ctgc__livedata__livedata_is_bottom_1_0)
MR_def_extern_entry(transform_hlds__ctgc__livedata__livedata_is_top_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_0)
MR_def_extern_entry(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0)
MR_def_extern_entry(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_project_2_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0)
MR_def_extern_entry(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0)
MR_decl_static(transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_0)
MR_decl_static(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__livedata__livedata_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__livedata__livedata_0_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0)
MR_decl_static(transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__343__1_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_project_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_6;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_project_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
};

MR_decl_entry(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0);
static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_livedata_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_9;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__livedata, livedata),
MR_CTOR0_ADDR(transform_hlds__ctgc__livedata, livedata),
MR_CTOR0_ADDR(transform_hlds__ctgc__livedata, livedata)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(0,5),
MR_COMMON(4,0),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_COMMON(0,6),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_8,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_9,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_COMMON(0,6),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_7;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_7,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0 = {
	"livedata_bottom",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1 = {
	"livedata_top",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__livedata__field_types_livedata_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2 = {
	"livedata_live",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__livedata__field_types_livedata_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0[] = {
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1[] = {
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__livedata__du_name_ordered_livedata_0[] = {
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2,
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1
};

const MR_Integer mercury_data_transform_hlds__ctgc__livedata__functor_number_map_livedata_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_livedata_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__livedata__livedata_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__livedata__livedata_0_0)),
	"transform_hlds.ctgc.livedata",
	"livedata",
	{ (void *)mercury_data_transform_hlds__ctgc__livedata__du_name_ordered_livedata_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0 },
	3,
	4,
	mercury_data_transform_hlds__ctgc__livedata__functor_number_map_livedata_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0 = {
	"nodes_all_live",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1 = {
	"nodes_are_live",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0[] = {
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1[] = {
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0[] = {
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0,
	&mercury_data_transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1
};

const MR_Integer mercury_data_transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_nodes_are_not_live_result_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0)),
	"transform_hlds.ctgc.livedata",
	"nodes_are_not_live_result",
	{ (void *)mercury_data_transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0 },
	2,
	4,
	mercury_data_transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_9 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.livedata",
"transform_hlds.ctgc.livedata",
"lambda_ctgc_livedata_m_343",
5,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
341,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_8 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_subsumed_by_return_selector",
5,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
337,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_7 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_subsumed_by",
4,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
325,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_6 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_same_vars",
2,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
320,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_5 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.livedata",
"transform_hlds.ctgc.livedata",
"lambda_ctgc_livedata_m_343",
5,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
341,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_4 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_subsumed_by_return_selector",
5,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
337,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_same_vars",
2,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
320,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_subsumed_by",
4,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
325,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_same_vars",
2,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
320,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.livedata",
"transform_hlds.ctgc.livedata",
"one_of_vars_is_live",
5,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
287,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_2 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_init",
2,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
265,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_init",
2,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
110,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_project_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.livedata",
"transform_hlds.ctgc.livedata",
"list_contains_datastruct_var",
2,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
195,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.livedata",
"transform_hlds.ctgc.livedata",
"livedata_least_upper_bound",
5,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
148,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_init",
2,
0
},
"transform_hlds.ctgc.livedata",
"ctgc.livedata.m",
110,
"5"
};



MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module0)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module1)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0);
	MR_init_label1(fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_init_from_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0_i4);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_from_vars_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module2)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_init_from_datastructs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_from_datastructs_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_init_from_datastructs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_from_datastructs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module3)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_init_as_top_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_as_top_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_init_as_top'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_as_top_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module4)
	MR_init_entry1(transform_hlds__ctgc__livedata__livedata_is_bottom_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__livedata__livedata_is_bottom_1_0);
	MR_init_label1(transform_hlds__ctgc__livedata__livedata_is_bottom_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_is_bottom'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__livedata__livedata_is_bottom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__livedata_is_bottom_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__livedata__livedata_is_bottom_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module5)
	MR_init_entry1(transform_hlds__ctgc__livedata__livedata_is_top_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__livedata__livedata_is_top_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_is_top'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__livedata__livedata_is_top_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module6)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0);
	MR_init_label2(fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_get_datastructs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_get_datastructs_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.ctgc.livedata", 28);
	MR_r3 = (MR_Word) MR_string_const("function \140transform_hlds.ctgc.livedata.livedata_get_datastructs\'/1", 66);
	MR_r4 = (MR_Word) MR_string_const("livedata_get_datastructs: livedata is top.", 42);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module7)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0);
	MR_init_label5(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0,3,4,6,44,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_least_upper_bound'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0_i6);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0_i44);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0,
		fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0_i8);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module8)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_least_upper_bound_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__livedata, livedata);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module9)
	MR_init_entry1(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0);
	MR_init_label3(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0,2,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_subsumes_prog_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0,
		transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0_i2);
MR_def_label(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__member_2_0);
	}
MR_def_label(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_0);
MR_decl_entry(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module10)
	MR_init_entry1(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0);
	MR_init_label4(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0,4,27,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_subsumes_datastruct'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_0,
		transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0_i4);
MR_def_label(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0_i2);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0_i27);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_sv(3), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__member_2_0);
MR_def_label(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	if (MR_LTAGS_TEST(MR_tempr1,0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0_i27);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0_i1);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_sv(3), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0);
	}
MR_def_label(transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module11)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_project_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_project_2_0);
	MR_init_label4(fn__transform_hlds__ctgc__livedata__livedata_project_2_0,3,35,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_project'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_project_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_project_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_project_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_project_2_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_project_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		fn__transform_hlds__ctgc__livedata__livedata_project_2_0_i6);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_project_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_project_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_project_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lfu_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lbu_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module12)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0);
	MR_init_label10(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,2,3,5,6,7,11,9,15,18,13)
	MR_init_label6(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,20,24,28,29,30,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_init_at_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i2);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lbu_1_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i3);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i5);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i6);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i11);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(6);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i15);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i13);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i18);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i20);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i24);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i28);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i29);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0_i30);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.livedata", 28);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.ctgc.livedata.livedata_init_at_goal\'/4", 63);
	MR_r3 = (MR_Word) MR_string_const("unexpected SharingDomain", 24);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module13)
	MR_init_entry1(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0);
	MR_init_label9(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,4,2,8,6,12,15,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livedata_add_liveness'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0,
		fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i4);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(6);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_0,
		fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i8);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i6);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_0);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_0,
		fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i12);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i15);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(6);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_0,
		fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i17);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0,
		fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0_i18);
MR_def_label(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module14)
	MR_init_entry1(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__livedata__nodes_are_not_live_5_0);
	MR_init_label3(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0,3,26,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nodes_are_not_live'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__livedata__nodes_are_not_live_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0,
		transform_hlds__ctgc__livedata__nodes_are_not_live_5_0_i6);
MR_def_label(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module15)
	MR_init_entry1(transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_contains_datastruct_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__datastruct__datastruct_same_vars_2_0);
MR_decl_entry(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_0);
MR_decl_entry(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0);
MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module16)
	MR_init_entry1(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0);
	MR_init_label10(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,3,6,4,12,14,16,17,20,18,25)
	MR_init_label1(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one_of_vars_is_live'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastruct_same_vars_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i3);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i6);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastruct_same_vars_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_sv(6), 0);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_sv(6), 1);
	MR_sv(7) = MR_tfield(0, MR_r2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_GOTO_LAB(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i16);
	}
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i12);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__343__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i14);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastruct_same_vars_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_sv(6), 0);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_sv(6), 1);
	MR_sv(7) = MR_tfield(0, MR_r2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i17);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i20);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i25);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__343__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0_i27);
MR_def_label(transform_hlds__ctgc__livedata__one_of_vars_is_live_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module17)
	MR_init_entry1(__Unify___transform_hlds__ctgc__livedata__livedata_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__livedata__livedata_0_0);
	MR_init_label4(__Unify___transform_hlds__ctgc__livedata__livedata_0_0,5,15,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__livedata__livedata_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__livedata__livedata_0_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__livedata__livedata_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__ctgc__livedata__livedata_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__livedata__livedata_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___transform_hlds__ctgc__livedata__livedata_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__livedata__livedata_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__livedata__livedata_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__ctgc__livedata__livedata_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module18)
	MR_init_entry1(__Compare___transform_hlds__ctgc__livedata__livedata_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__livedata__livedata_0_0);
	MR_init_label7(__Compare___transform_hlds__ctgc__livedata__livedata_0_0,30,5,11,33,9,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__livedata__livedata_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__livedata_0_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__livedata_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__livedata_0_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___transform_hlds__ctgc__livedata__livedata_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__livedata__livedata_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__livedata_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__livedata_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__livedata__livedata_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__livedata_0_0_i30);
	}
MR_def_label(__Compare___transform_hlds__ctgc__livedata__livedata_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__livedata__livedata_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__livedata_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__livedata__livedata_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__livedata_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__livedata__livedata_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module19)
	MR_init_entry1(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0);
	MR_init_label3(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module20)
	MR_init_entry1(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0);
	MR_init_label4(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0_i7);
	}
MR_def_label(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__livedata_module21)
	MR_init_entry1(transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__343__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__343__1_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__one_of_vars_is_live_ordered__343__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__343__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__livedata_maybe_bunch_0(void)
{
	transform_hlds__ctgc__livedata_module0();
	transform_hlds__ctgc__livedata_module1();
	transform_hlds__ctgc__livedata_module2();
	transform_hlds__ctgc__livedata_module3();
	transform_hlds__ctgc__livedata_module4();
	transform_hlds__ctgc__livedata_module5();
	transform_hlds__ctgc__livedata_module6();
	transform_hlds__ctgc__livedata_module7();
	transform_hlds__ctgc__livedata_module8();
	transform_hlds__ctgc__livedata_module9();
	transform_hlds__ctgc__livedata_module10();
	transform_hlds__ctgc__livedata_module11();
	transform_hlds__ctgc__livedata_module12();
	transform_hlds__ctgc__livedata_module13();
	transform_hlds__ctgc__livedata_module14();
	transform_hlds__ctgc__livedata_module15();
	transform_hlds__ctgc__livedata_module16();
	transform_hlds__ctgc__livedata_module17();
	transform_hlds__ctgc__livedata_module18();
	transform_hlds__ctgc__livedata_module19();
	transform_hlds__ctgc__livedata_module20();
	transform_hlds__ctgc__livedata_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__livedata__init(void);
void mercury__transform_hlds__ctgc__livedata__init_type_tables(void);
void mercury__transform_hlds__ctgc__livedata__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__livedata__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__livedata__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__ctgc__livedata__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__ctgc__livedata__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__livedata_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_livedata_0,
		transform_hlds__ctgc__livedata__livedata_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_nodes_are_not_live_result_0,
		transform_hlds__ctgc__livedata__nodes_are_not_live_result_0_0);
	mercury__transform_hlds__ctgc__livedata__init_debugger();
}

void mercury__transform_hlds__ctgc__livedata__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_livedata_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_nodes_are_not_live_result_0);
	}
}


void mercury__transform_hlds__ctgc__livedata__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__livedata__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__livedata);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__livedata__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__ctgc__livedata__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
