/*
** Automatically generated from `term_constr_fixpoint.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_constr_fixpoint__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.term_constr_fixpoint.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.term_constr_fixpoint.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.term_constr_fixpoint.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.term_constr_fixpoint.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.term_constr_fixpoint.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "transform_hlds.term_constr_fixpoint.c"
#line 48 "transform_hlds.term_constr_fixpoint.c"
#include "transform_hlds.term_constr_fixpoint.mh"

#line 51 "transform_hlds.term_constr_fixpoint.c"
#line 52 "transform_hlds.term_constr_fixpoint.c"
#ifndef TRANSFORM_HLDS__TERM_CONSTR_FIXPOINT_DECL_GUARD
#define TRANSFORM_HLDS__TERM_CONSTR_FIXPOINT_DECL_GUARD

#line 56 "transform_hlds.term_constr_fixpoint.c"
#line 57 "transform_hlds.term_constr_fixpoint.c"

#endif
#line 60 "transform_hlds.term_constr_fixpoint.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_String f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0,
	mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0,
	mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0,
	mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_infos_0;
MR_decl_label8(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0, 2,5,6,13,14,12,16,18)
MR_decl_label5(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0, 10,22,8,25,26)
MR_decl_label3(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0, 4,2,7)
MR_decl_label8(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0, 3,2,5,6,11,14,10,16)
MR_decl_label1(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0, 8)
MR_decl_label2(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0, 3,4)
MR_decl_label3(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0, 2,3,4)
MR_decl_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0, 82,89,47,48,90,36,37,40)
MR_decl_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0, 38,91,4,5,6,8,12,10)
MR_decl_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0, 17,15,19,20,21,22,23,26)
MR_decl_label3(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0, 24,29,50)
MR_decl_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0, 3,5,7,9,11,15,16,17)
MR_decl_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0, 18,19,20,21,23,24,25,26)
MR_decl_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0, 27,29,31,32,35,34,33,38)
MR_decl_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0, 42,41,45,36,48,53,51,56)
MR_decl_label1(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0, 60)
MR_decl_label1(fn__transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__132__1_1_0, 2)
MR_decl_label2(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0, 13,4)
MR_decl_label6(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0, 4,6,8,11,15,1)
MR_decl_label2(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0, 4,1)
MR_decl_label4(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0, 4,6,8,1)
MR_decl_label8(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0, 3,2,5,9,13,17,22,55)
MR_decl_label4(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0, 3,2,5,21)
MR_decl_label5(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0, 3,2,5,9,29)
MR_decl_static(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0)
MR_def_extern_entry(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_0)
MR_decl_static(transform_hlds__term_constr_fixpoint__update_size_info_3_0)
MR_decl_static(fn__transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_0)
MR_decl_static(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0)
MR_decl_static(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0)
MR_decl_static(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0)
MR_decl_static(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0)
MR_decl_static(fn__transform_hlds__term_constr_fixpoint__this_file_0_0)
MR_decl_static(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0)
MR_decl_static(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0)
MR_decl_static(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_fixpoint__iteration_infos_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_fixpoint__iteration_infos_0_0)
MR_decl_static(fn__transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__132__1_1_0)
MR_decl_static(transform_hlds__term_constr_fixpoint__IntroducedFrom__pred__traverse_abstract_proc__172__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_string__type_ctor_info_poly_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
static const struct mercury_type_0 mercury_common_0[7] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(0,2)
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
MR_CTOR0_ADDR(string, poly_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, fixpoint_options),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_8;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info),
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
},
};

MR_decl_entry(io__nl_2_0);
static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__132__1_1_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__term_constr_fixpoint__update_size_info_3_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(transform_hlds__term_constr_fixpoint__update_size_info_3_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(transform_hlds__term_constr_fixpoint__update_size_info_3_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(io__nl_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_4;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, fixpoint_info),
MR_COMMON(0,3),
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_7;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, fixpoint_info),
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,4),
MR_COMMON(0,3),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(0,5),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_7,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_COMMON(0,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(io__write_string_3_0);
static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_COMMON(4,4),
MR_ENTRY_AP(io__write_string_3_0),
1,
MR_string_const(": ", 2)
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(io__write_string_3_0),
1,
MR_string_const(" ", 1)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0[] = {
	"module_info",
	"varset",
	"ppid",
	"max_matrix_size",
	"curr_head_vars",
	"zeros"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0 = {
	"fixpoint_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0,
	mercury_data_transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0[] = {
	&mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0[] = {
	&mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0)),
	"transform_hlds.term_constr_fixpoint",
	"fixpoint_info",
	{ (void *)mercury_data_transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_widening_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_widening_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_widening_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0[] = {
	"fo_widening",
	"fo_max_size"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0 = {
	"fixpoint_options",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0,
	mercury_data_transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0[] = {
	&mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0[] = {
	&mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0)),
	"transform_hlds.term_constr_fixpoint",
	"fixpoint_options",
	{ (void *)mercury_data_transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0[] = {
	"ii_ppid",
	"ii_arg_size_poly",
	"ii_change_flag"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0 = {
	"iteration_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0,
	mercury_data_transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0[] = {
	&mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0[] = {
	&mercury_data_transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0)),
	"transform_hlds.term_constr_fixpoint",
	"iteration_info",
	{ (void *)mercury_data_transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_infos_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_fixpoint__iteration_infos_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_fixpoint__iteration_infos_0_0)),
	"transform_hlds.term_constr_fixpoint",
	"iteration_infos",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_fixpoint",
"transform_hlds.term_constr_fixpoint",
"traverse_abstract_proc",
8,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
112,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_2 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_fixpoint",
"transform_hlds.term_constr_fixpoint",
"lambda_term_constr_fixpoint_m_132",
2,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
132,
"d1;c14;d2;c2;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_fixpoint",
"transform_hlds.term_constr_fixpoint",
"update_size_info",
3,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
136,
"d1;c14;d2;c2;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_4 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_fixpoint",
"transform_hlds.term_constr_fixpoint",
"update_size_info",
3,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
139,
"d1;c14;d2;c2;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_5 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_fixpoint",
"transform_hlds.term_constr_fixpoint",
"update_size_info",
3,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
117,
"d1;c14;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_fixpoint",
"transform_hlds.term_constr_fixpoint",
"traverse_abstract_disj_linearly_2",
5,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
365,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_fixpoint",
"transform_hlds.term_constr_fixpoint",
"traverse_abstract_goal",
4,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
293,
"d1;c5;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_fixpoint",
"transform_hlds.term_constr_fixpoint",
"lambda_term_constr_fixpoint_m_172",
3,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
172,
"c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_2 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
173,
"c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_pred_proc_id",
4,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
174,
"c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_4 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
175,
"c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_5 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"write_size_vars",
4,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
176,
"c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_6 = {
{
MR_PREDICATE,
"io",
"io",
"format",
4,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
177,
"c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_7 = {
{
MR_PREDICATE,
"libs.polyhedron",
"libs.polyhedron",
"write_polyhedron",
4,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
203,
"c27;q;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_8 = {
{
MR_PREDICATE,
"io",
"io",
"nl",
2,
0
},
"transform_hlds.term_constr_fixpoint",
"term_constr_fixpoint.m",
205,
"c27;q;c17;"
};

MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module0)
	MR_init_entry1(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0);
	MR_init_label2(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0,13,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'or_flags'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 2);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0,
		fn__transform_hlds__term_constr_fixpoint__or_flags_1_0_i4);
MR_def_label(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__term_constr_util__get_abstract_scc_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_2);
MR_decl_entry(list__member_2_1);
MR_decl_entry(libs__polyhedron__is_empty_1_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module1)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0);
	MR_init_label8(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,2,5,6,13,14,12,16,18)
	MR_init_label5(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,10,22,8,25,26)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'do_fixpoint_calculation'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__get_abstract_scc_2_0,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i2);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i5);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_fixpoint__or_flags_1_0,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i6);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i8);
	}
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i12);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i13);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i14);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i16);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i10);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i18);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i22);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i22);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i25);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,
		transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0_i26);
MR_def_label(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module2)
	MR_init_entry1(fn__transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fixpoint_options_init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_0);
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

MR_decl_entry(transform_hlds__term_constr_util__update_arg_size_info_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module3)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__update_size_info_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'update_size_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_fixpoint__update_size_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(transform_hlds__term_constr_util__update_arg_size_info_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module4)
	MR_init_entry1(fn__transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'init_fixpoint_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__polyhedron__empty_0_0);
MR_decl_entry(fn__libs__polyhedron__project_3_0);
MR_decl_entry(libs__polyhedron__intersection_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module5)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0);
	MR_init_label3(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0,4,2,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'post_process_abstract_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0_i4);
MR_def_label(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0_i2);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__empty_0_0,
		transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0_i7);
MR_def_label(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__project_3_0,
		transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0_i7);
MR_def_label(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__polyhedron__intersection_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module6)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0);
	MR_init_label2(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'traverse_abstract_disj_linearly'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__empty_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0_i3);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0_i4);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__polyhedron__intersection_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__polyhedron__universe_0_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_termination2_info_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__success_constrs_1_0);
MR_decl_entry(libs__polyhedron__is_universe_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__head_vars_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__create_var_substitution_2_0);
MR_decl_entry(fn__libs__polyhedron__substitute_vars_2_0);
MR_decl_entry(fn__libs__polyhedron__intersection_2_0);
MR_decl_entry(fn__libs__polyhedron__zero_vars_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module7)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0);
	MR_init_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,82,89,47,48,90,36,37,40)
	MR_init_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,38,91,4,5,6,8,12,10)
	MR_init_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,17,15,19,20,21,22,23,26)
	MR_init_label3(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,24,29,50)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'traverse_abstract_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i89) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i90) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i91) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i50));
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_r3;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i47);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_5_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i48);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0);
	}
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i82);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(7) = MR_r3;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i36);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i37);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i40);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i38);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__empty_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i29);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__project_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i29);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 6);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_ctfield(2, MR_tempr1, 4);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i4);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i5);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__success_constrs_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i6);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i8);
	}
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__libs__polyhedron__empty_0_0);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i12);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i10);
	}
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__libs__polyhedron__empty_0_0);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__polyhedron__is_universe_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i17);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i15);
	}
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__head_vars_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i19);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__create_var_substitution_2_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i20);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__libs__polyhedron__substitute_vars_2_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i21);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__polyhedron__intersection_2_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i22);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__zero_vars_2_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i23);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i26);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i24);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__empty_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i29);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__project_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0_i29);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__polyhedron__intersection_3_0);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_tempr4 = MR_r2;
	MR_r1 = MR_ctfield(3, MR_tempr4, 1);
	MR_tempr2 = MR_tempr4;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr2, 0);
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__polyhedron__widen_3_0);
MR_decl_entry(fn__libs__polyhedron__non_false_constraints_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
MR_decl_entry(libs__lp_rational__entailed_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module8)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0);
	MR_init_label8(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,3,2,5,6,11,14,10,16)
	MR_init_label1(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'test_fixpoint_and_perhaps_widen'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i2);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__widen_3_0,
		transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i3);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i5);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r5;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i5);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i6);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i11);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp_rational__entailed_3_0,
		transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i14);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i16);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0_i8);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module9)
	MR_init_entry1(fn__transform_hlds__term_constr_fixpoint__this_file_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_fixpoint__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_fixpoint.m", 22);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_constr_util__maybe_write_trace_3_0);
MR_decl_entry(hlds__hlds_out__write_pred_proc_id_4_0);
MR_decl_entry(transform_hlds__term_constr_util__write_size_vars_4_0);
MR_decl_entry(io__format_4_0);
MR_decl_entry(libs__polyhedron__optimize_3_0);
MR_decl_entry(fn__libs__polyhedron__constraints_1_0);
MR_decl_entry(fn__libs__lp_rational__get_vars_from_constraints_1_0);
MR_decl_entry(fn__set__from_list_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(libs__polyhedron__write_polyhedron_4_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0);
MR_decl_entry(list__cons_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module10)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0);
	MR_init_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,3,5,7,9,11,15,16,17)
	MR_init_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,18,19,20,21,23,24,25,26)
	MR_init_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,27,29,31,32,35,34,33,38)
	MR_init_label8(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,42,41,45,36,48,53,51,56)
	MR_init_label1(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,60)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'traverse_abstract_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_fixpoint__IntroducedFrom__pred__traverse_abstract_proc__172__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__maybe_write_trace_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i3);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__maybe_write_trace_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i5);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_pred_proc_id_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__maybe_write_trace_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i7);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__maybe_write_trace_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i9);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__write_size_vars_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__maybe_write_trace_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i11);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(io__format_4_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr3, 3) = (MR_Word) MR_string_const("\nIteration %d:\n", 15);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr2;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__maybe_write_trace_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i15);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i16);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_ctfield(0, MR_sv(3), 5);
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i17);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i18);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__polyhedron__optimize_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i19);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__libs__polyhedron__constraints_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i20);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__lp_rational__get_vars_from_constraints_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i21);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i23);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i24);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i25);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__libs__polyhedron__project_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i26);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__polyhedron__optimize_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i27);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__polyhedron__write_polyhedron_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__maybe_write_trace_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i29);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__maybe_write_trace_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i31);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i32);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i34);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__empty_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i35);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i33);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(5);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i38);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i36);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i42);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__cons_3_0);
	}
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_fixpoint__this_file_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i45);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("old polyhedron is empty.", 24);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i60);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 9);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i48);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 0;
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__cons_3_0);
	}
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i53);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i51);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__cons_3_0);
	}
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0_i56);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info);
	}
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_proc_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__cons_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__polyhedron__convex_union_5_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module11)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0);
	MR_init_label3(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0,2,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'traverse_abstract_disj_linearly_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0_i2);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_fixpoint__traverse_abstract_goal_4_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0_i3);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__project_3_0,
		transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0_i4);
MR_def_label(transform_hlds__term_constr_fixpoint__traverse_abstract_disj_linearly_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_ctfield(0, MR_sv(1), 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__polyhedron__convex_union_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module12)
	MR_init_entry1(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0);
	MR_init_label6(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,4,6,8,11,15,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i15);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i11);
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module13)
	MR_init_entry1(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0);
	MR_init_label8(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,3,2,5,9,13,17,22,55)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i55);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i55);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i22);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_info_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module14)
	MR_init_entry1(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0);
	MR_init_label2(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0,4,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0_i4);
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
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module15)
	MR_init_entry1(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0);
	MR_init_label4(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0,3,2,5,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0,2)
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
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__fixpoint_options_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___libs__polyhedron__polyhedron_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module16)
	MR_init_entry1(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0);
	MR_init_label4(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0,4,6,8,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
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
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___libs__polyhedron__polyhedron_0_0,
		__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_fixpoint__iteration_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__polyhedron__polyhedron_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module17)
	MR_init_entry1(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0);
	MR_init_label5(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0,2)
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
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___libs__polyhedron__polyhedron_0_0,
		__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_constr_fixpoint__iteration_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module18)
	MR_init_entry1(__Unify___transform_hlds__term_constr_fixpoint__iteration_infos_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_fixpoint__iteration_infos_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info);
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


MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module19)
	MR_init_entry1(__Compare___transform_hlds__term_constr_fixpoint__iteration_infos_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_fixpoint__iteration_infos_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, iteration_info);
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


MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module20)
	MR_init_entry1(fn__transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__132__1_1_0);
	MR_init_label1(fn__transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__132__1_1_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__do_fixpoint_calculation__132__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__132__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		fn__transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__132__1_1_0_i2);
MR_def_label(fn__transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__132__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_fixpoint_module21)
	MR_init_entry1(transform_hlds__term_constr_fixpoint__IntroducedFrom__pred__traverse_abstract_proc__172__1_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__traverse_abstract_proc__172__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_fixpoint__IntroducedFrom__pred__traverse_abstract_proc__172__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_constr_fixpoint_maybe_bunch_0(void)
{
	transform_hlds__term_constr_fixpoint_module0();
	transform_hlds__term_constr_fixpoint_module1();
	transform_hlds__term_constr_fixpoint_module2();
	transform_hlds__term_constr_fixpoint_module3();
	transform_hlds__term_constr_fixpoint_module4();
	transform_hlds__term_constr_fixpoint_module5();
	transform_hlds__term_constr_fixpoint_module6();
	transform_hlds__term_constr_fixpoint_module7();
	transform_hlds__term_constr_fixpoint_module8();
	transform_hlds__term_constr_fixpoint_module9();
	transform_hlds__term_constr_fixpoint_module10();
	transform_hlds__term_constr_fixpoint_module11();
	transform_hlds__term_constr_fixpoint_module12();
	transform_hlds__term_constr_fixpoint_module13();
	transform_hlds__term_constr_fixpoint_module14();
	transform_hlds__term_constr_fixpoint_module15();
	transform_hlds__term_constr_fixpoint_module16();
	transform_hlds__term_constr_fixpoint_module17();
	transform_hlds__term_constr_fixpoint_module18();
	transform_hlds__term_constr_fixpoint_module19();
	transform_hlds__term_constr_fixpoint_module20();
	transform_hlds__term_constr_fixpoint_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_constr_fixpoint__init(void);
void mercury__transform_hlds__term_constr_fixpoint__init_type_tables(void);
void mercury__transform_hlds__term_constr_fixpoint__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_constr_fixpoint__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_constr_fixpoint__init_complexity_procs(void);
#endif

void mercury__transform_hlds__term_constr_fixpoint__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_constr_fixpoint_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0,
		transform_hlds__term_constr_fixpoint__fixpoint_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0,
		transform_hlds__term_constr_fixpoint__fixpoint_options_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0,
		transform_hlds__term_constr_fixpoint__iteration_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_infos_0,
		transform_hlds__term_constr_fixpoint__iteration_infos_0_0);
	mercury__transform_hlds__term_constr_fixpoint__init_debugger();
}

void mercury__transform_hlds__term_constr_fixpoint__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_infos_0);
	}
}


void mercury__transform_hlds__term_constr_fixpoint__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_constr_fixpoint__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__term_constr_fixpoint);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_constr_fixpoint__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
