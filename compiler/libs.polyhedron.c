/*
** Automatically generated from `polyhedron.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__libs__polyhedron__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "libs.polyhedron.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "libs.polyhedron.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "libs.polyhedron.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "libs.polyhedron.c"
#line 40 "libs.polyhedron.c"
#include "libs.polyhedron.mh"

#line 43 "libs.polyhedron.c"
#line 44 "libs.polyhedron.c"
#ifndef LIBS__POLYHEDRON_DECL_GUARD
#define LIBS__POLYHEDRON_DECL_GUARD

#line 48 "libs.polyhedron.c"
#line 49 "libs.polyhedron.c"

#endif
#line 52 "libs.polyhedron.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__polyhedron__type_ctor_info_var_maps_0,
	mercury_data_libs__polyhedron__type_ctor_info_var_map_0,
	mercury_data_libs__polyhedron__type_ctor_info_sigma_vars_0,
	mercury_data_libs__polyhedron__type_ctor_info_sigma_var_0,
	mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0,
	mercury_data_libs__polyhedron__type_ctor_info_polyhedra_info_0,
	mercury_data_libs__polyhedron__type_ctor_info_polyhedra_0,
	mercury_data_libs__polyhedron__type_ctor_info_convex_hull_result_0,
	mercury_data_libs__polyhedron__type_ctor_info_constr_info_0;
MR_decl_label5(libs__polyhedron__add_sigma_constraints_3_0, 2,3,4,5,6)
MR_decl_label4(libs__polyhedron__change_var_6_0, 3,2,5,6)
MR_decl_label8(libs__polyhedron__convex_hull_4_0, 48,6,7,8,9,10,11,27)
MR_decl_label7(libs__polyhedron__convex_hull_4_0, 15,16,14,17,18,20,3)
MR_decl_label3(libs__polyhedron__convex_union_5_0, 5,3,7)
MR_decl_label1(libs__polyhedron__is_empty_1_0, 1)
MR_decl_label1(libs__polyhedron__is_universe_1_0, 1)
MR_decl_label5(libs__polyhedron__make_last_terms_4_0, 2,4,5,6,1)
MR_decl_label4(libs__polyhedron__optimize_3_0, 21,4,7,5)
MR_decl_label5(libs__polyhedron__project_4_0, 29,4,8,7,10)
MR_decl_label6(libs__polyhedron__transform_constraint_7_0, 2,3,4,5,6,7)
MR_decl_label4(libs__polyhedron__transform_polyhedron_5_0, 2,3,4,5)
MR_decl_label2(libs__polyhedron__write_polyhedron_4_0, 3,6)
MR_decl_label1(fn__libs__polyhedron__IntroducedFrom__func__convex_hull__367__1_2_0, 2)
MR_decl_label5(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0, 29,4,8,7,10)
MR_decl_label4(fn__libs__polyhedron__add_last_constraints_2_0, 2,3,4,5)
MR_decl_label2(fn__libs__polyhedron__bounding_box_2_0, 12,4)
MR_decl_label2(fn__libs__polyhedron__constraints_1_0, 4,3)
MR_decl_label8(fn__libs__polyhedron__from_constraints_1_0, 30,6,4,8,10,11,12,13)
MR_decl_label1(fn__libs__polyhedron__get_keys_from_map_2_0, 2)
MR_decl_label5(fn__libs__polyhedron__intersection_2_0, 3,21,6,7,8)
MR_decl_label5(fn__libs__polyhedron__make_last_constraint_2_0, 2,4,5,6,1)
MR_decl_label1(fn__libs__polyhedron__non_false_constraints_1_0, 3)
MR_decl_label2(fn__libs__polyhedron__substitute_vars_2_0, 2,3)
MR_decl_label2(fn__libs__polyhedron__substitute_vars_3_0, 2,3)
MR_decl_label3(fn__libs__polyhedron__widen_3_0, 3,9,8)
MR_decl_label2(fn__libs__polyhedron__zero_vars_2_0, 12,4)
MR_decl_label3(__Unify___libs__polyhedron__constr_info_0_0, 4,8,1)
MR_decl_label3(__Unify___libs__polyhedron__convex_hull_result_0_0, 12,5,1)
MR_decl_label4(__Unify___libs__polyhedron__polyhedra_info_0_0, 4,6,10,1)
MR_decl_label3(__Unify___libs__polyhedron__polyhedron_0_0, 12,5,1)
MR_decl_label4(__Compare___libs__polyhedron__constr_info_0_0, 3,2,5,21)
MR_decl_label4(__Compare___libs__polyhedron__convex_hull_result_0_0, 18,7,5,9)
MR_decl_label5(__Compare___libs__polyhedron__polyhedra_info_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___libs__polyhedron__polyhedron_0_0, 18,7,5,9)
MR_def_extern_entry(fn__libs__polyhedron__empty_0_0)
MR_def_extern_entry(fn__libs__polyhedron__universe_0_0)
MR_def_extern_entry(fn__libs__polyhedron__intersection_2_0)
MR_def_extern_entry(fn__libs__polyhedron__from_constraints_1_0)
MR_def_extern_entry(fn__libs__polyhedron__constraints_1_0)
MR_def_extern_entry(fn__libs__polyhedron__non_false_constraints_1_0)
MR_def_extern_entry(libs__polyhedron__is_empty_1_0)
MR_def_extern_entry(libs__polyhedron__is_universe_1_0)
MR_def_extern_entry(libs__polyhedron__optimize_3_0)
MR_def_extern_entry(libs__polyhedron__intersection_3_0)
MR_decl_static(libs__polyhedron__transform_polyhedra_4_0)
MR_decl_static(libs__polyhedron__add_sigma_constraints_3_0)
MR_decl_static(fn__libs__polyhedron__add_last_constraints_2_0)
MR_decl_static(libs__polyhedron__convex_hull_4_0)
MR_def_extern_entry(libs__polyhedron__convex_union_5_0)
MR_def_extern_entry(fn__libs__polyhedron__convex_union_3_0)
MR_def_extern_entry(libs__polyhedron__convex_union_4_0)
MR_def_extern_entry(fn__libs__polyhedron__convex_union_4_0)
MR_def_extern_entry(fn__libs__polyhedron__bounding_box_2_0)
MR_def_extern_entry(fn__libs__polyhedron__widen_3_0)
MR_def_extern_entry(fn__libs__polyhedron__project_all_3_0)
MR_def_extern_entry(libs__polyhedron__project_4_0)
MR_def_extern_entry(fn__libs__polyhedron__project_3_0)
MR_def_extern_entry(fn__libs__polyhedron__substitute_vars_3_0)
MR_def_extern_entry(fn__libs__polyhedron__substitute_vars_2_0)
MR_def_extern_entry(fn__libs__polyhedron__zero_vars_2_0)
MR_def_extern_entry(libs__polyhedron__write_polyhedron_4_0)
MR_decl_static(libs__polyhedron__transform_polyhedron_5_0)
MR_decl_static(libs__polyhedron__transform_constraint_7_0)
MR_decl_static(libs__polyhedron__change_var_6_0)
MR_decl_static(fn__libs__polyhedron__get_keys_from_map_2_0)
MR_decl_static(fn__libs__polyhedron__make_last_constraint_2_0)
MR_decl_static(libs__polyhedron__make_last_terms_4_0)
MR_decl_static(__Unify___libs__polyhedron__constr_info_0_0)
MR_decl_static(__Compare___libs__polyhedron__constr_info_0_0)
MR_decl_static(__Unify___libs__polyhedron__convex_hull_result_0_0)
MR_decl_static(__Compare___libs__polyhedron__convex_hull_result_0_0)
MR_def_extern_entry(__Unify___libs__polyhedron__polyhedra_0_0)
MR_def_extern_entry(__Compare___libs__polyhedron__polyhedra_0_0)
MR_decl_static(__Unify___libs__polyhedron__polyhedra_info_0_0)
MR_decl_static(__Compare___libs__polyhedron__polyhedra_info_0_0)
MR_def_extern_entry(__Unify___libs__polyhedron__polyhedron_0_0)
MR_def_extern_entry(__Compare___libs__polyhedron__polyhedron_0_0)
MR_decl_static(__Unify___libs__polyhedron__sigma_var_0_0)
MR_decl_static(__Compare___libs__polyhedron__sigma_var_0_0)
MR_decl_static(__Unify___libs__polyhedron__sigma_vars_0_0)
MR_decl_static(__Compare___libs__polyhedron__sigma_vars_0_0)
MR_decl_static(__Unify___libs__polyhedron__var_map_0_0)
MR_decl_static(__Compare___libs__polyhedron__var_map_0_0)
MR_decl_static(__Unify___libs__polyhedron__var_maps_0_0)
MR_decl_static(__Compare___libs__polyhedron__var_maps_0_0)
MR_decl_static(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0)
MR_decl_static(fn__libs__polyhedron__IntroducedFrom__func__convex_hull__367__1_2_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_1 mercury_common_1[14] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(libs__lp_rational, constraint)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(libs__lp_rational, constraint)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(1,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(6,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,4)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(6,5)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,6,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__is_universe_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__polyhedron__is_universe_1_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
};

MR_decl_entry(libs__lp_rational__nonneg_constr_1_0);
MR_decl_entry(fn__libs__lp_rational__make_nonneg_constr_1_0);
MR_decl_entry(fn__libs__lp_rational__lp_term_1_0);
static const struct mercury_type_3 mercury_common_3[7] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(libs__lp_rational__nonneg_constr_1_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(libs__polyhedron__transform_polyhedron_5_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__libs__lp_rational__make_nonneg_constr_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__libs__lp_rational__lp_term_1_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__libs__polyhedron__get_keys_from_map_2_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(fn__libs__polyhedron__IntroducedFrom__func__convex_hull__367__1_2_0),
0
},
{
MR_COMMON(10,0),
MR_ENTRY_AP(libs__polyhedron__change_var_6_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__transform_polyhedra_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedra_info_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__polyhedron__transform_polyhedra_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(libs__polyhedron, polyhedra_info),
MR_CTOR0_ADDR(libs__polyhedron, polyhedra_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__add_sigma_constraints_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__add_sigma_constraints_3_0_2;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__polyhedron__add_sigma_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,3),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__polyhedron__add_sigma_constraints_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,3),
MR_COMMON(6,1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_6 mercury_common_6[6] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,2),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,4),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,1,2),
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,4),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__add_last_constraints_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__add_last_constraints_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__convex_hull_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__widen_3_0_1;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__polyhedron__add_last_constraints_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,3),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__polyhedron__add_last_constraints_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,7),
MR_COMMON(1,3),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__polyhedron__convex_hull_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,3),
MR_COMMON(1,9),
MR_COMMON(1,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__polyhedron__widen_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,10),
MR_COMMON(1,1),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__project_all_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__make_last_constraint_2_0_1;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__polyhedron__project_all_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,10),
MR_COMMON(1,9),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__polyhedron__make_last_constraint_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,3),
MR_COMMON(6,3),
MR_COMMON(1,12),
MR_COMMON(1,12)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__transform_polyhedron_5_0_1;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__polyhedron__transform_polyhedron_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(libs__lp_rational, constraint),
MR_CTOR0_ADDR(libs__lp_rational, constraint),
MR_COMMON(6,3),
MR_COMMON(6,3),
MR_COMMON(1,10),
MR_COMMON(1,10)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__transform_constraint_7_0_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__polyhedron__transform_constraint_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(6,1),
MR_COMMON(6,1),
MR_COMMON(6,3),
MR_COMMON(6,3),
MR_COMMON(1,10),
MR_COMMON(1,10)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_var_maps_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__var_maps_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__var_maps_0_0)),
	"libs.polyhedron",
	"var_maps",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_var_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__var_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__var_map_0_0)),
	"libs.polyhedron",
	"var_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_sigma_vars_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__sigma_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__sigma_vars_0_0)),
	"libs.polyhedron",
	"sigma_vars",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_sigma_var_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__sigma_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__sigma_var_0_0)),
	"libs.polyhedron",
	"sigma_var",
	{ 0 },
	{ (void *)&mercury_data_term__ti_var_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_libs__lp_rational__type_ctor_info_constraint_0
}};

const MR_PseudoTypeInfo mercury_data_libs__polyhedron__field_types_polyhedron_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0
};

static const MR_DuFunctorDesc mercury_data_libs__polyhedron__du_functor_desc_polyhedron_0_0 = {
	"eqns",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__polyhedron__field_types_polyhedron_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__polyhedron__du_functor_desc_polyhedron_0_1 = {
	"empty_poly",
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

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_stag_ordered_polyhedron_0_0[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_polyhedron_0_1

};

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_stag_ordered_polyhedron_0_1[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_polyhedron_0_0

};

const MR_DuPtagLayout mercury_data_libs__polyhedron__du_ptag_ordered_polyhedron_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_libs__polyhedron__du_stag_ordered_polyhedron_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__polyhedron__du_stag_ordered_polyhedron_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_name_ordered_polyhedron_0[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_polyhedron_0_1,
	&mercury_data_libs__polyhedron__du_functor_desc_polyhedron_0_0
};

const MR_Integer mercury_data_libs__polyhedron__functor_number_map_polyhedron_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__polyhedron_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__polyhedron_0_0)),
	"libs.polyhedron",
	"polyhedron",
	{ (void *)mercury_data_libs__polyhedron__du_name_ordered_polyhedron_0 },
	{ (void *)mercury_data_libs__polyhedron__du_ptag_ordered_polyhedron_0 },
	2,
	4,
	mercury_data_libs__polyhedron__functor_number_map_polyhedron_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_PseudoTypeInfo mercury_data_libs__polyhedron__field_types_polyhedra_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0
};

const MR_ConstString mercury_data_libs__polyhedron__field_names_polyhedra_info_0_0[] = {
	"var_maps",
	"sigmas",
	"poly_varset"
};

static const MR_DuFunctorDesc mercury_data_libs__polyhedron__du_functor_desc_polyhedra_info_0_0 = {
	"polyhedra_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__polyhedron__field_types_polyhedra_info_0_0,
	mercury_data_libs__polyhedron__field_names_polyhedra_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_stag_ordered_polyhedra_info_0_0[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_polyhedra_info_0_0

};

const MR_DuPtagLayout mercury_data_libs__polyhedron__du_ptag_ordered_polyhedra_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__polyhedron__du_stag_ordered_polyhedra_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_name_ordered_polyhedra_info_0[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_polyhedra_info_0_0
};

const MR_Integer mercury_data_libs__polyhedron__functor_number_map_polyhedra_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedra_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__polyhedra_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__polyhedra_info_0_0)),
	"libs.polyhedron",
	"polyhedra_info",
	{ (void *)mercury_data_libs__polyhedron__du_name_ordered_polyhedra_info_0 },
	{ (void *)mercury_data_libs__polyhedron__du_ptag_ordered_polyhedra_info_0 },
	1,
	4,
	mercury_data_libs__polyhedron__functor_number_map_polyhedra_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedra_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__polyhedra_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__polyhedra_0_0)),
	"libs.polyhedron",
	"polyhedra",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_libs__polyhedron__field_types_convex_hull_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0
};

static const MR_DuFunctorDesc mercury_data_libs__polyhedron__du_functor_desc_convex_hull_result_0_0 = {
	"ok",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__polyhedron__field_types_convex_hull_result_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__polyhedron__du_functor_desc_convex_hull_result_0_1 = {
	"aborted",
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

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_stag_ordered_convex_hull_result_0_0[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_convex_hull_result_0_1

};

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_stag_ordered_convex_hull_result_0_1[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_convex_hull_result_0_0

};

const MR_DuPtagLayout mercury_data_libs__polyhedron__du_ptag_ordered_convex_hull_result_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_libs__polyhedron__du_stag_ordered_convex_hull_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__polyhedron__du_stag_ordered_convex_hull_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_name_ordered_convex_hull_result_0[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_convex_hull_result_0_1,
	&mercury_data_libs__polyhedron__du_functor_desc_convex_hull_result_0_0
};

const MR_Integer mercury_data_libs__polyhedron__functor_number_map_convex_hull_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_convex_hull_result_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__convex_hull_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__convex_hull_result_0_0)),
	"libs.polyhedron",
	"convex_hull_result",
	{ (void *)mercury_data_libs__polyhedron__du_name_ordered_convex_hull_result_0 },
	{ (void *)mercury_data_libs__polyhedron__du_ptag_ordered_convex_hull_result_0 },
	2,
	4,
	mercury_data_libs__polyhedron__functor_number_map_convex_hull_result_0
};

const MR_PseudoTypeInfo mercury_data_libs__polyhedron__field_types_constr_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0
};

const MR_ConstString mercury_data_libs__polyhedron__field_names_constr_info_0_0[] = {
	"var_map",
	"constr_varset"
};

static const MR_DuFunctorDesc mercury_data_libs__polyhedron__du_functor_desc_constr_info_0_0 = {
	"constr_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__polyhedron__field_types_constr_info_0_0,
	mercury_data_libs__polyhedron__field_names_constr_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_stag_ordered_constr_info_0_0[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_constr_info_0_0

};

const MR_DuPtagLayout mercury_data_libs__polyhedron__du_ptag_ordered_constr_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__polyhedron__du_stag_ordered_constr_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__polyhedron__du_name_ordered_constr_info_0[] = {
	&mercury_data_libs__polyhedron__du_functor_desc_constr_info_0_0
};

const MR_Integer mercury_data_libs__polyhedron__functor_number_map_constr_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_constr_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__polyhedron__constr_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__polyhedron__constr_info_0_0)),
	"libs.polyhedron",
	"constr_info",
	{ (void *)mercury_data_libs__polyhedron__du_name_ordered_constr_info_0 },
	{ (void *)mercury_data_libs__polyhedron__du_ptag_ordered_constr_info_0 },
	1,
	4,
	mercury_data_libs__polyhedron__functor_number_map_constr_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__is_universe_1_0_1 = {
{
MR_PREDICATE,
"libs.lp_rational",
"libs.lp_rational",
"nonneg_constr",
1,
0
},
"libs.polyhedron",
"polyhedron.m",
237,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__transform_polyhedra_4_0_1 = {
{
MR_PREDICATE,
"libs.polyhedron",
"libs.polyhedron",
"transform_polyhedron",
5,
0
},
"libs.polyhedron",
"polyhedron.m",
406,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__add_sigma_constraints_3_0_1 = {
{
MR_FUNCTION,
"libs.lp_rational",
"libs.lp_rational",
"make_nonneg_constr",
2,
0
},
"libs.polyhedron",
"polyhedron.m",
468,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__add_sigma_constraints_3_0_2 = {
{
MR_FUNCTION,
"libs.lp_rational",
"libs.lp_rational",
"lp_term",
2,
0
},
"libs.polyhedron",
"polyhedron.m",
473,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__add_last_constraints_2_0_1 = {
{
MR_FUNCTION,
"libs.polyhedron",
"libs.polyhedron",
"get_keys_from_map",
3,
0
},
"libs.polyhedron",
"polyhedron.m",
490,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__add_last_constraints_2_0_2 = {
{
MR_FUNCTION,
"libs.polyhedron",
"libs.polyhedron",
"make_last_constraint",
3,
0
},
"libs.polyhedron",
"polyhedron.m",
483,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__convex_hull_4_0_1 = {
{
MR_FUNCTION,
"libs.polyhedron",
"libs.polyhedron",
"lambda_polyhedron_m_367",
3,
0
},
"libs.polyhedron",
"polyhedron.m",
367,
"d3;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__widen_3_0_1 = {
{
MR_PREDICATE,
"libs.lp_rational",
"libs.lp_rational",
"entailed",
3,
0
},
"libs.polyhedron",
"polyhedron.m",
529,
"d4;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__project_all_3_0_1 = {
{
MR_FUNCTION,
"libs.polyhedron",
"libs.polyhedron",
"lambda_polyhedron_m_553",
4,
0
},
"libs.polyhedron",
"polyhedron.m",
537,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__transform_polyhedron_5_0_1 = {
{
MR_PREDICATE,
"libs.polyhedron",
"libs.polyhedron",
"transform_constraint",
7,
0
},
"libs.polyhedron",
"polyhedron.m",
415,
"d1;c6;q;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__polyhedron__transform_constraint_7_0_1 = {
{
MR_PREDICATE,
"libs.polyhedron",
"libs.polyhedron",
"change_var",
6,
0
},
"libs.polyhedron",
"polyhedron.m",
433,
"d1;c8;q;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__polyhedron__make_last_constraint_2_0_1 = {
{
MR_PREDICATE,
"libs.polyhedron",
"libs.polyhedron",
"make_last_terms",
4,
0
},
"libs.polyhedron",
"polyhedron.m",
499,
"d1;c4;"
};


MR_BEGIN_MODULE(libs__polyhedron_module0)
	MR_init_entry1(fn__libs__polyhedron__empty_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__empty_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module1)
	MR_init_entry1(fn__libs__polyhedron__universe_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__universe_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(libs__lp_rational__restore_equalities_2_0);
MR_decl_entry(fn__libs__lp_rational__simplify_constraints_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module2)
	MR_init_entry1(fn__libs__polyhedron__intersection_2_0);
	MR_init_label5(fn__libs__polyhedron__intersection_2_0,3,21,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__intersection_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__intersection_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__libs__polyhedron__intersection_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__intersection_2_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__libs__polyhedron__intersection_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__libs__polyhedron__intersection_2_0_i6);
MR_def_label(fn__libs__polyhedron__intersection_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__lp_rational__restore_equalities_2_0,
		fn__libs__polyhedron__intersection_2_0_i7);
MR_def_label(fn__libs__polyhedron__intersection_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__lp_rational__simplify_constraints_1_0,
		fn__libs__polyhedron__intersection_2_0_i8);
MR_def_label(fn__libs__polyhedron__intersection_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__lp_rational__is_false_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module3)
	MR_init_entry1(fn__libs__polyhedron__from_constraints_1_0);
	MR_init_label8(fn__libs__polyhedron__from_constraints_1_0,30,6,4,8,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__from_constraints_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__from_constraints_1_0_i30);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
MR_def_label(fn__libs__polyhedron__from_constraints_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp_rational__is_false_1_0,
		fn__libs__polyhedron__from_constraints_1_0_i6);
MR_def_label(fn__libs__polyhedron__from_constraints_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__polyhedron__from_constraints_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__libs__polyhedron__from_constraints_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__libs__polyhedron__from_constraints_1_0,
		fn__libs__polyhedron__from_constraints_1_0_i8);
MR_def_label(fn__libs__polyhedron__from_constraints_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__from_constraints_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__libs__polyhedron__from_constraints_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__libs__polyhedron__from_constraints_1_0_i11);
MR_def_label(fn__libs__polyhedron__from_constraints_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__lp_rational__restore_equalities_2_0,
		fn__libs__polyhedron__from_constraints_1_0_i12);
MR_def_label(fn__libs__polyhedron__from_constraints_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__lp_rational__simplify_constraints_1_0,
		fn__libs__polyhedron__from_constraints_1_0_i13);
MR_def_label(fn__libs__polyhedron__from_constraints_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__lp_rational__false_constraint_0_0);

MR_BEGIN_MODULE(libs__polyhedron_module4)
	MR_init_entry1(fn__libs__polyhedron__constraints_1_0);
	MR_init_label2(fn__libs__polyhedron__constraints_1_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__constraints_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__constraints_1_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__libs__lp_rational__false_constraint_0_0,
		fn__libs__polyhedron__constraints_1_0_i4);
MR_def_label(fn__libs__polyhedron__constraints_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__libs__polyhedron__constraints_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module5)
	MR_init_entry1(fn__libs__polyhedron__non_false_constraints_1_0);
	MR_init_label1(fn__libs__polyhedron__non_false_constraints_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__non_false_constraints_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__non_false_constraints_1_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__libs__polyhedron__non_false_constraints_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_string_const("polyhedron.m", 12);
	MR_r3 = (MR_Word) MR_string_const("non_false_constraints/1: empty polyhedron.", 42);
	MR_np_tailcall_ent(fn__libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module6)
	MR_init_entry1(libs__polyhedron__is_empty_1_0);
	MR_init_label1(libs__polyhedron__is_empty_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__polyhedron__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__is_empty_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__polyhedron__is_empty_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__all_true_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module7)
	MR_init_entry1(libs__polyhedron__is_universe_1_0);
	MR_init_label1(libs__polyhedron__is_universe_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__polyhedron__is_universe_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__is_universe_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(list__all_true_2_0);
	}
MR_def_label(libs__polyhedron__is_universe_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__lp_rational__inconsistent_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module8)
	MR_init_entry1(libs__polyhedron__optimize_3_0);
	MR_init_label4(libs__polyhedron__optimize_3_0,21,4,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__polyhedron__optimize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__optimize_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(libs__polyhedron__optimize_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__libs__lp_rational__simplify_constraints_1_0,
		libs__polyhedron__optimize_3_0_i4);
MR_def_label(libs__polyhedron__optimize_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(libs__lp_rational__inconsistent_2_0,
		libs__polyhedron__optimize_3_0_i7);
MR_def_label(libs__polyhedron__optimize_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__polyhedron__optimize_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(libs__polyhedron__optimize_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module9)
	MR_init_entry1(libs__polyhedron__intersection_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__polyhedron__intersection_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__libs__polyhedron__intersection_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(libs__polyhedron_module10)
	MR_init_entry1(libs__polyhedron__transform_polyhedra_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__polyhedron__transform_polyhedra_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r7 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedra_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__libs__rat__one_0_0);
MR_decl_entry(fn__libs__lp_rational__constraint_3_0);
MR_decl_entry(list__cons_3_0);

MR_BEGIN_MODULE(libs__polyhedron_module11)
	MR_init_entry1(libs__polyhedron__add_sigma_constraints_3_0);
	MR_init_label5(libs__polyhedron__add_sigma_constraints_3_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__polyhedron__add_sigma_constraints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__polyhedron__add_sigma_constraints_3_0_i2);
MR_def_label(libs__polyhedron__add_sigma_constraints_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		libs__polyhedron__add_sigma_constraints_3_0_i3);
MR_def_label(libs__polyhedron__add_sigma_constraints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__polyhedron__add_sigma_constraints_3_0_i4);
MR_def_label(libs__polyhedron__add_sigma_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		libs__polyhedron__add_sigma_constraints_3_0_i5);
MR_def_label(libs__polyhedron__add_sigma_constraints_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		libs__polyhedron__add_sigma_constraints_3_0_i6);
MR_def_label(libs__polyhedron__add_sigma_constraints_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__cons_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(fn__set__filter_map_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module12)
	MR_init_entry1(fn__libs__polyhedron__add_last_constraints_2_0);
	MR_init_label4(fn__libs__polyhedron__add_last_constraints_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__polyhedron__add_last_constraints_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__libs__polyhedron__add_last_constraints_2_0_i2);
MR_def_label(fn__libs__polyhedron__add_last_constraints_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__libs__polyhedron__add_last_constraints_2_0_i3);
MR_def_label(fn__libs__polyhedron__add_last_constraints_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__polyhedron__make_last_constraint_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	}
	MR_np_call_localret_ent(fn__set__filter_map_2_0,
		fn__libs__polyhedron__add_last_constraints_2_0_i4);
MR_def_label(fn__libs__polyhedron__add_last_constraints_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__libs__polyhedron__add_last_constraints_2_0_i5);
MR_def_label(fn__libs__polyhedron__add_last_constraints_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__lp_rational__project_5_0);
MR_decl_entry(fn__libs__lp_rational__nonneg_box_2_0);
MR_decl_entry(libs__lp_rational__remove_some_entailed_constraints_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module13)
	MR_init_entry1(libs__polyhedron__convex_hull_4_0);
	MR_init_label8(libs__polyhedron__convex_hull_4_0,48,6,7,8,9,10,11,27)
	MR_init_label7(libs__polyhedron__convex_hull_4_0,15,16,14,17,18,20,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__polyhedron__convex_hull_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__convex_hull_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__convex_hull_4_0_i48);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(libs__polyhedron__convex_hull_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__polyhedron__transform_polyhedra_4_0,
		libs__polyhedron__convex_hull_4_0_i6);
MR_def_label(libs__polyhedron__convex_hull_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(libs__polyhedron__add_sigma_constraints_3_0,
		libs__polyhedron__convex_hull_4_0_i7);
MR_def_label(libs__polyhedron__convex_hull_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__libs__polyhedron__add_last_constraints_2_0,
		libs__polyhedron__convex_hull_4_0_i8);
MR_def_label(libs__polyhedron__convex_hull_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		libs__polyhedron__convex_hull_4_0_i9);
MR_def_label(libs__polyhedron__convex_hull_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__polyhedron__convex_hull_4_0_i10);
MR_def_label(libs__polyhedron__convex_hull_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(libs__lp_rational__project_5_0,
		libs__polyhedron__convex_hull_4_0_i11);
MR_def_label(libs__polyhedron__convex_hull_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(libs__polyhedron__convex_hull_4_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(libs__polyhedron__convex_hull_4_0_i15);
	}
	}
MR_def_label(libs__polyhedron__convex_hull_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(libs__polyhedron__convex_hull_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__libs__lp_rational__nonneg_box_2_0,
		libs__polyhedron__convex_hull_4_0_i16);
MR_def_label(libs__polyhedron__convex_hull_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(libs__polyhedron__convex_hull_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(libs__lp_rational__restore_equalities_2_0,
		libs__polyhedron__convex_hull_4_0_i17);
MR_def_label(libs__polyhedron__convex_hull_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__lp_rational__simplify_constraints_1_0,
		libs__polyhedron__convex_hull_4_0_i18);
MR_def_label(libs__polyhedron__convex_hull_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__lp_rational__remove_some_entailed_constraints_3_0,
		libs__polyhedron__convex_hull_4_0_i20);
MR_def_label(libs__polyhedron__convex_hull_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__polyhedron__convex_hull_4_0_i27);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(libs__polyhedron__convex_hull_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("polyhedron.m", 12);
	MR_r2 = (MR_Word) MR_string_const("convex_hull/4: empty list", 25);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module14)
	MR_init_entry1(libs__polyhedron__convex_union_5_0);
	MR_init_label3(libs__polyhedron__convex_union_5_0,5,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__polyhedron__convex_union_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__convex_union_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__convex_union_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(libs__polyhedron__convex_union_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(libs__polyhedron__convex_union_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__convex_union_5_0_i7);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(libs__polyhedron__convex_union_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r4, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(libs__polyhedron__convex_hull_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module15)
	MR_init_entry1(fn__libs__polyhedron__convex_union_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__convex_union_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(libs__polyhedron__convex_union_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module16)
	MR_init_entry1(libs__polyhedron__convex_union_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__polyhedron__convex_union_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(libs__polyhedron__convex_union_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module17)
	MR_init_entry1(fn__libs__polyhedron__convex_union_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__convex_union_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(libs__polyhedron__convex_union_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__lp_rational__bounding_box_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module18)
	MR_init_entry1(fn__libs__polyhedron__bounding_box_2_0);
	MR_init_label2(fn__libs__polyhedron__bounding_box_2_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__bounding_box_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__bounding_box_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__libs__polyhedron__bounding_box_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__bounding_box_2_0,
		fn__libs__polyhedron__bounding_box_2_0_i4);
MR_def_label(fn__libs__polyhedron__bounding_box_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__lp_rational__entailed_3_0);
MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module19)
	MR_init_entry1(fn__libs__polyhedron__widen_3_0);
	MR_init_label3(fn__libs__polyhedron__widen_3_0,3,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__widen_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__widen_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__widen_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__libs__polyhedron__widen_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__widen_3_0_i8);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp_rational__entailed_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r2, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		fn__libs__polyhedron__widen_3_0_i9);
MR_def_label(fn__libs__polyhedron__widen_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__libs__polyhedron__widen_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r2 = (MR_Word) MR_string_const("polyhedron.m", 12);
	MR_r3 = (MR_Word) MR_string_const("widen/2: empty polyhedron", 25);
	MR_np_tailcall_ent(fn__libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module20)
	MR_init_entry1(fn__libs__polyhedron__project_all_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__project_all_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__lp_rational__project_4_0);

MR_BEGIN_MODULE(libs__polyhedron_module21)
	MR_init_entry1(libs__polyhedron__project_4_0);
	MR_init_label5(libs__polyhedron__project_4_0,29,4,8,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__polyhedron__project_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__project_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(libs__polyhedron__project_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(libs__lp_rational__project_4_0,
		libs__polyhedron__project_4_0_i4);
MR_def_label(libs__polyhedron__project_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(libs__polyhedron__project_4_0_i7);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(libs__polyhedron__project_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
MR_def_label(libs__polyhedron__project_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("polyhedron.m", 12);
	MR_r2 = (MR_Word) MR_string_const("project/4: abort from project", 29);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(libs__polyhedron__project_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(libs__lp_rational__restore_equalities_2_0,
		libs__polyhedron__project_4_0_i10);
MR_def_label(libs__polyhedron__project_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module22)
	MR_init_entry1(fn__libs__polyhedron__project_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__project_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(libs__polyhedron__project_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__lp_rational__substitute_vars_3_0);

MR_BEGIN_MODULE(libs__polyhedron_module23)
	MR_init_entry1(fn__libs__polyhedron__substitute_vars_3_0);
	MR_init_label2(fn__libs__polyhedron__substitute_vars_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__substitute_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		fn__libs__polyhedron__substitute_vars_3_0_i2);
MR_def_label(fn__libs__polyhedron__substitute_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__libs__lp_rational__substitute_vars_3_0,
		fn__libs__polyhedron__substitute_vars_3_0_i3);
MR_def_label(fn__libs__polyhedron__substitute_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__libs__polyhedron__from_constraints_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__lp_rational__substitute_vars_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module24)
	MR_init_entry1(fn__libs__polyhedron__substitute_vars_2_0);
	MR_init_label2(fn__libs__polyhedron__substitute_vars_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__substitute_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		fn__libs__polyhedron__substitute_vars_2_0_i2);
MR_def_label(fn__libs__polyhedron__substitute_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__libs__lp_rational__substitute_vars_2_0,
		fn__libs__polyhedron__substitute_vars_2_0_i3);
MR_def_label(fn__libs__polyhedron__substitute_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__libs__polyhedron__from_constraints_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__lp_rational__set_vars_to_zero_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module25)
	MR_init_entry1(fn__libs__polyhedron__zero_vars_2_0);
	MR_init_label2(fn__libs__polyhedron__zero_vars_2_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__polyhedron__zero_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__zero_vars_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__libs__polyhedron__zero_vars_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__libs__lp_rational__set_vars_to_zero_2_0,
		fn__libs__polyhedron__zero_vars_2_0_i4);
MR_def_label(fn__libs__polyhedron__zero_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(libs__lp_rational__write_constraints_4_0);

MR_BEGIN_MODULE(libs__polyhedron_module26)
	MR_init_entry1(libs__polyhedron__write_polyhedron_4_0);
	MR_init_label2(libs__polyhedron__write_polyhedron_4_0,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__polyhedron__write_polyhedron_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__write_polyhedron_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("\tEmpty\n", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(libs__polyhedron__write_polyhedron_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(libs__polyhedron__write_polyhedron_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("\tUniverse\n", 10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(libs__polyhedron__write_polyhedron_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_tailcall_ent(libs__lp_rational__write_constraints_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svvarset__new_var_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__map_foldl2_7_1);

MR_BEGIN_MODULE(libs__polyhedron_module27)
	MR_init_entry1(libs__polyhedron__transform_polyhedron_5_0);
	MR_init_label4(libs__polyhedron__transform_polyhedron_5_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__polyhedron__transform_polyhedron_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		libs__polyhedron__transform_polyhedron_5_0_i2);
MR_def_label(libs__polyhedron__transform_polyhedron_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__polyhedron__transform_constraint_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		libs__polyhedron__transform_polyhedron_5_0_i3);
MR_def_label(libs__polyhedron__transform_polyhedron_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(1);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(list__map_foldl2_7_1,
		libs__polyhedron__transform_polyhedron_5_0_i4);
MR_def_label(libs__polyhedron__transform_polyhedron_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__polyhedron__transform_polyhedron_5_0_i5);
MR_def_label(libs__polyhedron__transform_polyhedron_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__lp_rational__constraint_4_0);
MR_decl_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0);
MR_decl_entry(fn__libs__rat__zero_0_0);

MR_BEGIN_MODULE(libs__polyhedron_module28)
	MR_init_entry1(libs__polyhedron__transform_constraint_7_0);
	MR_init_label6(libs__polyhedron__transform_constraint_7_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__polyhedron__transform_constraint_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__lp_rational__constraint_4_0,
		libs__polyhedron__transform_constraint_7_0_i2);
MR_def_label(libs__polyhedron__transform_constraint_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r8 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_np_call_localret_ent(list__map_foldl2_7_1,
		libs__polyhedron__transform_constraint_7_0_i3);
MR_def_label(libs__polyhedron__transform_constraint_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0,
		libs__polyhedron__transform_constraint_7_0_i4);
MR_def_label(libs__polyhedron__transform_constraint_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		libs__polyhedron__transform_constraint_7_0_i5);
MR_def_label(libs__polyhedron__transform_constraint_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		libs__polyhedron__transform_constraint_7_0_i6);
MR_def_label(libs__polyhedron__transform_constraint_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		libs__polyhedron__transform_constraint_7_0_i7);
MR_def_label(libs__polyhedron__transform_constraint_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(libs__polyhedron_module29)
	MR_init_entry1(libs__polyhedron__change_var_6_0);
	MR_init_label4(libs__polyhedron__change_var_6_0,3,2,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__polyhedron__change_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_r2;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		libs__polyhedron__change_var_6_0_i3);
MR_def_label(libs__polyhedron__change_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__polyhedron__change_var_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(libs__polyhedron__change_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		libs__polyhedron__change_var_6_0_i5);
MR_def_label(libs__polyhedron__change_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		libs__polyhedron__change_var_6_0_i6);
MR_def_label(libs__polyhedron__change_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__keys_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(libs__polyhedron_module30)
	MR_init_entry1(fn__libs__polyhedron__get_keys_from_map_2_0);
	MR_init_label1(fn__libs__polyhedron__get_keys_from_map_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__polyhedron__get_keys_from_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__keys_1_0,
		fn__libs__polyhedron__get_keys_from_map_2_0_i2);
MR_def_label(fn__libs__polyhedron__get_keys_from_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(libs__polyhedron_module31)
	MR_init_entry1(fn__libs__polyhedron__make_last_constraint_2_0);
	MR_init_label5(fn__libs__polyhedron__make_last_constraint_2_0,2,4,5,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__polyhedron__make_last_constraint_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__polyhedron__make_last_terms_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		fn__libs__polyhedron__make_last_constraint_2_0_i2);
MR_def_label(fn__libs__polyhedron__make_last_constraint_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__polyhedron__make_last_constraint_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		fn__libs__polyhedron__make_last_constraint_2_0_i4);
MR_def_label(fn__libs__polyhedron__make_last_constraint_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		fn__libs__polyhedron__make_last_constraint_2_0_i5);
MR_def_label(fn__libs__polyhedron__make_last_constraint_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		fn__libs__polyhedron__make_last_constraint_2_0_i6);
MR_def_label(fn__libs__polyhedron__make_last_constraint_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__libs__polyhedron__make_last_constraint_2_0,1)
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


MR_BEGIN_MODULE(libs__polyhedron_module32)
	MR_init_entry1(libs__polyhedron__make_last_terms_4_0);
	MR_init_label5(libs__polyhedron__make_last_terms_4_0,2,4,5,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__polyhedron__make_last_terms_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		libs__polyhedron__make_last_terms_4_0_i2);
MR_def_label(libs__polyhedron__make_last_terms_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__polyhedron__make_last_terms_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		libs__polyhedron__make_last_terms_4_0_i4);
MR_def_label(libs__polyhedron__make_last_terms_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0,
		libs__polyhedron__make_last_terms_4_0_i5);
MR_def_label(libs__polyhedron__make_last_terms_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		libs__polyhedron__make_last_terms_4_0_i6);
MR_def_label(libs__polyhedron__make_last_terms_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__polyhedron__make_last_terms_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module33)
	MR_init_entry1(__Unify___libs__polyhedron__constr_info_0_0);
	MR_init_label3(__Unify___libs__polyhedron__constr_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__polyhedron__constr_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__constr_info_0_0_i8);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_r1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___libs__polyhedron__constr_info_0_0_i4);
MR_def_label(__Unify___libs__polyhedron__constr_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__constr_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
MR_def_label(__Unify___libs__polyhedron__constr_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__polyhedron__constr_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module34)
	MR_init_entry1(__Compare___libs__polyhedron__constr_info_0_0);
	MR_init_label4(__Compare___libs__polyhedron__constr_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__polyhedron__constr_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__constr_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__polyhedron__constr_info_0_0_i2);
MR_def_label(__Compare___libs__polyhedron__constr_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__polyhedron__constr_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_r1;
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___libs__polyhedron__constr_info_0_0_i5);
MR_def_label(__Compare___libs__polyhedron__constr_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__constr_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
MR_def_label(__Compare___libs__polyhedron__constr_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module35)
	MR_init_entry1(__Unify___libs__polyhedron__convex_hull_result_0_0);
	MR_init_label3(__Unify___libs__polyhedron__convex_hull_result_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__polyhedron__convex_hull_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__convex_hull_result_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__convex_hull_result_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___libs__polyhedron__convex_hull_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__polyhedron__convex_hull_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__convex_hull_result_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___libs__polyhedron__polyhedron_0_0);
MR_def_label(__Unify___libs__polyhedron__convex_hull_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module36)
	MR_init_entry1(__Compare___libs__polyhedron__convex_hull_result_0_0);
	MR_init_label4(__Compare___libs__polyhedron__convex_hull_result_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__polyhedron__convex_hull_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__convex_hull_result_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__convex_hull_result_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__convex_hull_result_0_0_i7);
	}
MR_def_label(__Compare___libs__polyhedron__convex_hull_result_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__polyhedron__convex_hull_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__polyhedron__convex_hull_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__convex_hull_result_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__polyhedron__convex_hull_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___libs__polyhedron__polyhedron_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module37)
	MR_init_entry1(__Unify___libs__polyhedron__polyhedra_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__polyhedron__polyhedra_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module38)
	MR_init_entry1(__Compare___libs__polyhedron__polyhedra_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__polyhedron__polyhedra_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module39)
	MR_init_entry1(__Unify___libs__polyhedron__polyhedra_info_0_0);
	MR_init_label4(__Unify___libs__polyhedron__polyhedra_info_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__polyhedron__polyhedra_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__polyhedra_info_0_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___libs__polyhedron__polyhedra_info_0_0_i4);
MR_def_label(__Unify___libs__polyhedron__polyhedra_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__polyhedra_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___libs__polyhedron__polyhedra_info_0_0_i6);
MR_def_label(__Unify___libs__polyhedron__polyhedra_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__polyhedra_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
MR_def_label(__Unify___libs__polyhedron__polyhedra_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__polyhedron__polyhedra_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module40)
	MR_init_entry1(__Compare___libs__polyhedron__polyhedra_info_0_0);
	MR_init_label5(__Compare___libs__polyhedron__polyhedra_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__polyhedron__polyhedra_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__polyhedra_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__polyhedron__polyhedra_info_0_0_i2);
MR_def_label(__Compare___libs__polyhedron__polyhedra_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__polyhedron__polyhedra_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___libs__polyhedron__polyhedra_info_0_0_i5);
MR_def_label(__Compare___libs__polyhedron__polyhedra_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__polyhedra_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___libs__polyhedron__polyhedra_info_0_0_i9);
MR_def_label(__Compare___libs__polyhedron__polyhedra_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__polyhedra_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
MR_def_label(__Compare___libs__polyhedron__polyhedra_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module41)
	MR_init_entry1(__Unify___libs__polyhedron__polyhedron_0_0);
	MR_init_label3(__Unify___libs__polyhedron__polyhedron_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__polyhedron__polyhedron_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__polyhedron_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__polyhedron_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___libs__polyhedron__polyhedron_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__polyhedron__polyhedron_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___libs__polyhedron__polyhedron_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___libs__polyhedron__polyhedron_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module42)
	MR_init_entry1(__Compare___libs__polyhedron__polyhedron_0_0);
	MR_init_label4(__Compare___libs__polyhedron__polyhedron_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__polyhedron__polyhedron_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__polyhedron_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__polyhedron_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__polyhedron_0_0_i7);
	}
MR_def_label(__Compare___libs__polyhedron__polyhedron_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__polyhedron__polyhedron_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__polyhedron__polyhedron_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__polyhedron__polyhedron_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__polyhedron__polyhedron_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module43)
	MR_init_entry1(__Unify___libs__polyhedron__sigma_var_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__polyhedron__sigma_var_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module44)
	MR_init_entry1(__Compare___libs__polyhedron__sigma_var_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__polyhedron__sigma_var_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module45)
	MR_init_entry1(__Unify___libs__polyhedron__sigma_vars_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__polyhedron__sigma_vars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module46)
	MR_init_entry1(__Compare___libs__polyhedron__sigma_vars_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__polyhedron__sigma_vars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module47)
	MR_init_entry1(__Unify___libs__polyhedron__var_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__polyhedron__var_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module48)
	MR_init_entry1(__Compare___libs__polyhedron__var_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__polyhedron__var_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module49)
	MR_init_entry1(__Unify___libs__polyhedron__var_maps_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__polyhedron__var_maps_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module50)
	MR_init_entry1(__Compare___libs__polyhedron__var_maps_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__polyhedron__var_maps_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__polyhedron_module51)
	MR_init_entry1(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0);
	MR_init_label5(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0,29,4,8,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(libs__lp_rational__project_4_0,
		fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0_i4);
MR_def_label(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0_i7);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("polyhedron.m", 12);
	MR_r2 = (MR_Word) MR_string_const("project_all/4: abort from project.", 34);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(libs__lp_rational__restore_equalities_2_0,
		fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0_i10);
MR_def_label(fn__libs__polyhedron__IntroducedFrom__func__project_all__553__1_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__values_1_0);

MR_BEGIN_MODULE(libs__polyhedron_module52)
	MR_init_entry1(fn__libs__polyhedron__IntroducedFrom__func__convex_hull__367__1_2_0);
	MR_init_label1(fn__libs__polyhedron__IntroducedFrom__func__convex_hull__367__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__polyhedron__IntroducedFrom__func__convex_hull__367__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__values_1_0,
		fn__libs__polyhedron__IntroducedFrom__func__convex_hull__367__1_2_0_i2);
MR_def_label(fn__libs__polyhedron__IntroducedFrom__func__convex_hull__367__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__polyhedron_maybe_bunch_0(void)
{
	libs__polyhedron_module0();
	libs__polyhedron_module1();
	libs__polyhedron_module2();
	libs__polyhedron_module3();
	libs__polyhedron_module4();
	libs__polyhedron_module5();
	libs__polyhedron_module6();
	libs__polyhedron_module7();
	libs__polyhedron_module8();
	libs__polyhedron_module9();
	libs__polyhedron_module10();
	libs__polyhedron_module11();
	libs__polyhedron_module12();
	libs__polyhedron_module13();
	libs__polyhedron_module14();
	libs__polyhedron_module15();
	libs__polyhedron_module16();
	libs__polyhedron_module17();
	libs__polyhedron_module18();
	libs__polyhedron_module19();
	libs__polyhedron_module20();
	libs__polyhedron_module21();
	libs__polyhedron_module22();
	libs__polyhedron_module23();
	libs__polyhedron_module24();
	libs__polyhedron_module25();
	libs__polyhedron_module26();
	libs__polyhedron_module27();
	libs__polyhedron_module28();
	libs__polyhedron_module29();
	libs__polyhedron_module30();
	libs__polyhedron_module31();
	libs__polyhedron_module32();
	libs__polyhedron_module33();
	libs__polyhedron_module34();
	libs__polyhedron_module35();
	libs__polyhedron_module36();
	libs__polyhedron_module37();
	libs__polyhedron_module38();
	libs__polyhedron_module39();
}

static void mercury__libs__polyhedron_maybe_bunch_1(void)
{
	libs__polyhedron_module40();
	libs__polyhedron_module41();
	libs__polyhedron_module42();
	libs__polyhedron_module43();
	libs__polyhedron_module44();
	libs__polyhedron_module45();
	libs__polyhedron_module46();
	libs__polyhedron_module47();
	libs__polyhedron_module48();
	libs__polyhedron_module49();
	libs__polyhedron_module50();
	libs__polyhedron_module51();
	libs__polyhedron_module52();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__polyhedron__init(void);
void mercury__libs__polyhedron__init_type_tables(void);
void mercury__libs__polyhedron__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__polyhedron__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__polyhedron__init_complexity_procs(void);
#endif

void mercury__libs__polyhedron__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__polyhedron_maybe_bunch_0();
	mercury__libs__polyhedron_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_var_maps_0,
		libs__polyhedron__var_maps_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_var_map_0,
		libs__polyhedron__var_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_sigma_vars_0,
		libs__polyhedron__sigma_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_sigma_var_0,
		libs__polyhedron__sigma_var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0,
		libs__polyhedron__polyhedron_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_polyhedra_info_0,
		libs__polyhedron__polyhedra_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_polyhedra_0,
		libs__polyhedron__polyhedra_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_convex_hull_result_0,
		libs__polyhedron__convex_hull_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__polyhedron__type_ctor_info_constr_info_0,
		libs__polyhedron__constr_info_0_0);
	mercury__libs__polyhedron__init_debugger();
}

void mercury__libs__polyhedron__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_var_maps_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_var_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_sigma_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_sigma_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_polyhedra_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_polyhedra_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_convex_hull_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__polyhedron__type_ctor_info_constr_info_0);
	}
}


void mercury__libs__polyhedron__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__polyhedron__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__polyhedron);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__polyhedron__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
