/*
** Automatically generated from `mcsolver.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__mcsolver__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.mcsolver.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.mcsolver.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 35 "check_hlds.mcsolver.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "check_hlds.mcsolver.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "check_hlds.mcsolver.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "check_hlds.mcsolver.c"
#line 48 "check_hlds.mcsolver.c"
#include "check_hlds.mcsolver.mh"

#line 51 "check_hlds.mcsolver.c"
#line 52 "check_hlds.mcsolver.c"
#ifndef CHECK_HLDS__MCSOLVER_DECL_GUARD
#define CHECK_HLDS__MCSOLVER_DECL_GUARD

#line 56 "check_hlds.mcsolver.c"
#line 57 "check_hlds.mcsolver.c"

#endif
#line 60 "check_hlds.mcsolver.c"

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
	MR_Word * f3[3];
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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
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
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_assgts_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrts_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_eqv_vars_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_impl_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_impls_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_mcvar_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_mcvars_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mcsolver__type_ctor_info_prep_cstrts_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_prop_graph_0,
	mercury_data_check_hlds__mcsolver__type_ctor_info_solver_cstrts_0;
MR_decl_label3(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0, 3,4,5)
MR_decl_label1(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0, 1)
MR_decl_label1(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0, 1)
MR_decl_label2(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0, 4,2)
MR_decl_label1(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0, 2)
MR_decl_label4(check_hlds__mcsolver__all_no_2_0, 23,5,2,1)
MR_decl_label3(check_hlds__mcsolver__at_most_one_3_0, 3,5,7)
MR_decl_label1(check_hlds__mcsolver__disjunction_of_assignments_3_0, 8)
MR_decl_label1(check_hlds__mcsolver__equivalent_3_0, 3)
MR_decl_label1(check_hlds__mcsolver__equivalent_4_0, 3)
MR_decl_label2(check_hlds__mcsolver__equivalent_to_disjunction_4_0, 3,8)
MR_decl_label2(check_hlds__mcsolver__exactly_one_3_0, 5,3)
MR_decl_label4(check_hlds__mcsolver__prepare_abstract_constraint_3_0, 3,39,14,9)
MR_decl_label6(check_hlds__mcsolver__prepare_var_constraint_3_0, 5,11,15,28,29,13)
MR_decl_label5(check_hlds__mcsolver__solve_2_0, 2,5,8,10,11)
MR_decl_label10(check_hlds__mcsolver__solve_assgt_4_0, 4,2,7,12,10,9,21,19,28,32)
MR_decl_label2(check_hlds__mcsolver__solve_assgt_4_0, 30,1)
MR_decl_label10(check_hlds__mcsolver__solve_complex_cstrt_6_0, 169,24,27,35,78,23,41,38,3,172)
MR_decl_label9(check_hlds__mcsolver__solve_complex_cstrt_6_0, 7,170,56,53,65,68,171,16,1)
MR_decl_label4(check_hlds__mcsolver__solve_var_4_0, 3,1,6,9)
MR_decl_label1(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0, 3)
MR_decl_label1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0, 2)
MR_decl_label2(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0, 2,4)
MR_decl_label3(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0, 5,2,8)
MR_decl_label1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0, 6)
MR_decl_label1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0, 3)
MR_decl_label3(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0, 11,13,4)
MR_decl_label9(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0, 14,16,18,3,6,20,23,8,12)
MR_decl_label10(fn__check_hlds__mcsolver__make_solver_cstrts_1_0, 3,5,7,9,10,13,16,18,21,23)
MR_decl_label2(fn__check_hlds__mcsolver__make_solver_cstrts_1_0, 25,26)
MR_decl_label1(fn__check_hlds__mcsolver__new_prep_cstrts_0_0, 3)
MR_decl_label3(__Unify___check_hlds__mcsolver__assgt_0_0, 4,6,1)
MR_decl_label7(__Unify___check_hlds__mcsolver__complex_cstrt_0_0, 15,18,5,22,10,31,1)
MR_decl_label3(__Unify___check_hlds__mcsolver__impl_0_0, 4,8,1)
MR_decl_label5(__Unify___check_hlds__mcsolver__prep_cstrts_0_0, 5,7,9,13,1)
MR_decl_label3(__Unify___check_hlds__mcsolver__prop_graph_0_0, 6,10,1)
MR_decl_label6(__Unify___check_hlds__mcsolver__solver_cstrts_0_0, 5,7,9,11,16,1)
MR_decl_label4(__Compare___check_hlds__mcsolver__assgt_0_0, 3,2,5,21)
MR_decl_label10(__Compare___check_hlds__mcsolver__complex_cstrt_0_0, 3,29,35,5,46,51,49,17,24,20)
MR_decl_label1(__Compare___check_hlds__mcsolver__complex_cstrt_0_0, 88)
MR_decl_label4(__Compare___check_hlds__mcsolver__impl_0_0, 3,2,5,21)
MR_decl_label6(__Compare___check_hlds__mcsolver__prep_cstrts_0_0, 3,2,6,10,14,38)
MR_decl_label4(__Compare___check_hlds__mcsolver__prop_graph_0_0, 3,2,7,25)
MR_decl_label7(__Compare___check_hlds__mcsolver__solver_cstrts_0_0, 3,2,6,11,15,19,49)
MR_def_extern_entry(fn__check_hlds__mcsolver__new_prep_cstrts_0_0)
MR_def_extern_entry(check_hlds__mcsolver__prepare_abstract_constraints_3_0)
MR_def_extern_entry(check_hlds__mcsolver__equivalent_4_0)
MR_def_extern_entry(check_hlds__mcsolver__equivalent_3_0)
MR_def_extern_entry(check_hlds__mcsolver__implies_4_0)
MR_def_extern_entry(check_hlds__mcsolver__not_both_4_0)
MR_def_extern_entry(check_hlds__mcsolver__different_4_0)
MR_def_extern_entry(check_hlds__mcsolver__assign_4_0)
MR_def_extern_entry(check_hlds__mcsolver__equivalent_to_disjunction_4_0)
MR_def_extern_entry(check_hlds__mcsolver__at_most_one_3_0)
MR_def_extern_entry(check_hlds__mcsolver__exactly_one_3_0)
MR_def_extern_entry(check_hlds__mcsolver__disjunction_of_assignments_3_0)
MR_def_extern_entry(fn__check_hlds__mcsolver__make_solver_cstrts_1_0)
MR_decl_static(check_hlds__mcsolver__solve_assgts_4_0)
MR_def_extern_entry(check_hlds__mcsolver__solve_2_0)
MR_decl_static(check_hlds__mcsolver__prepare_var_constraint_3_0)
MR_decl_static(check_hlds__mcsolver__prepare_abstract_constraint_3_0)
MR_decl_static(fn__check_hlds__mcsolver__eqv_var_2_0)
MR_decl_static(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0)
MR_decl_static(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0)
MR_decl_static(check_hlds__mcsolver__solve_complex_cstrts_6_0)
MR_decl_static(check_hlds__mcsolver__solve_assgt_4_0)
MR_decl_static(check_hlds__mcsolver__all_no_2_0)
MR_decl_static(check_hlds__mcsolver__solve_complex_cstrt_6_0)
MR_decl_static(check_hlds__mcsolver__solve_var_4_0)
MR_decl_static(__Unify___check_hlds__mcsolver__assgt_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__assgt_0_0)
MR_decl_static(__Unify___check_hlds__mcsolver__assgts_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__assgts_0_0)
MR_decl_static(__Unify___check_hlds__mcsolver__complex_cstrt_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__complex_cstrt_0_0)
MR_decl_static(__Unify___check_hlds__mcsolver__complex_cstrt_map_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__complex_cstrt_map_0_0)
MR_decl_static(__Unify___check_hlds__mcsolver__complex_cstrts_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__complex_cstrts_0_0)
MR_decl_static(__Unify___check_hlds__mcsolver__eqv_vars_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__eqv_vars_0_0)
MR_decl_static(__Unify___check_hlds__mcsolver__impl_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__impl_0_0)
MR_decl_static(__Unify___check_hlds__mcsolver__impls_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__impls_0_0)
MR_def_extern_entry(__Unify___check_hlds__mcsolver__mcvar_0_0)
MR_def_extern_entry(__Compare___check_hlds__mcsolver__mcvar_0_0)
MR_def_extern_entry(__Unify___check_hlds__mcsolver__mcvars_0_0)
MR_def_extern_entry(__Compare___check_hlds__mcsolver__mcvars_0_0)
MR_def_extern_entry(__Unify___check_hlds__mcsolver__prep_cstrts_0_0)
MR_def_extern_entry(__Compare___check_hlds__mcsolver__prep_cstrts_0_0)
MR_decl_static(__Unify___check_hlds__mcsolver__prop_graph_0_0)
MR_decl_static(__Compare___check_hlds__mcsolver__prop_graph_0_0)
MR_def_extern_entry(__Unify___check_hlds__mcsolver__solver_cstrts_0_0)
MR_def_extern_entry(__Compare___check_hlds__mcsolver__solver_cstrts_0_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__1_1_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__2_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__428__1_3_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__439__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__446__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0)
MR_decl_static(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0)
MR_decl_static(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__2_3_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__504__1_2_0)
MR_decl_static(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0)
MR_decl_static(check_hlds__mcsolver__IntroducedFrom__pred__bind_all__554__1_4_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__668__1_1_0)
MR_decl_static(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__638__1_1_0)
MR_decl_static(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0)
MR_decl_static(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__688__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0;
extern const MR_TypeCtorInfo_Struct mercury_data_eqvclass__type_ctor_info_eqvclass_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;
static const struct mercury_type_0 mercury_common_0[13] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,4,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(4,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
}
},
{
{
MR_CTOR1_ADDR(eqvclass, eqvclass),
MR_COMMON(0,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraints_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_prep_cstrts_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__disjunction_of_assignments_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_impl_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_prop_graph_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraint_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_1 mercury_common_1[18] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint),
MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__disjunction_of_assignments_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,0),
MR_COMMON(0,5),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(check_hlds__mcsolver, impl),
MR_CTOR0_ADDR(check_hlds__mcsolver, impl)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt),
MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, impl),
MR_CTOR0_ADDR(check_hlds__mcsolver, prop_graph),
MR_CTOR0_ADDR(check_hlds__mcsolver, prop_graph)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt),
MR_COMMON(4,4),
MR_COMMON(4,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, impl),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraint_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint),
MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,6)
}
},
};

static const struct mercury_type_2 mercury_common_2[14] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(check_hlds__mcsolver__prepare_abstract_constraint_3_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__1_1_0),
0
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0),
0
},
{
MR_COMMON(1,6),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0),
0
},
{
MR_COMMON(1,7),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__439__1_2_0),
0
},
{
MR_COMMON(1,8),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__446__1_2_0),
0
},
{
MR_COMMON(1,9),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0),
0
},
{
MR_COMMON(1,10),
MR_ENTRY_AP(check_hlds__mcsolver__prepare_abstract_constraint_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0),
0
},
{
MR_COMMON(1,11),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__1_2_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__668__1_1_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__638__1_1_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__688__1_1_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__equivalent_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgts_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_solver_cstrts_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0_1;
static const struct mercury_type_3 mercury_common_3[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__equivalent_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_assgts_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, solver_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, solver_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, solver_cstrts),
MR_COMMON(0,1),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,7),
MR_COMMON(0,1),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(8,0),
MR_COMMON(0,6),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, solver_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, solver_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, solver_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, solver_cstrts),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt),
MR_COMMON(0,1),
MR_COMMON(4,4),
MR_COMMON(4,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_4 mercury_common_4[7] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,4),
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,4),
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,0,8)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_COMMON(0,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__disjunction_of_assignments_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraint_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0_1;
static const struct mercury_type_5 mercury_common_5[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__disjunction_of_assignments_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,1),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraint_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint),
MR_COMMON(0,5)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,5),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint),
MR_COMMON(4,1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_COMMON(4,2),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
},
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__2_2_0),
1,
MR_TAG_COMMON(0,2,1)
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__2_3_0),
1,
MR_TAG_COMMON(0,2,9)
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
3,
MR_CTOR0_ADDR(check_hlds__mcsolver, assgt),
MR_COMMON(0,12),
MR_COMMON(0,12)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrts_6_0_1;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrts_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(check_hlds__mcsolver, solver_cstrts),
MR_COMMON(0,1),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt),
MR_COMMON(4,5),
MR_COMMON(4,5)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_assgt_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_assgt_0_0 = {
	"==",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_assgt_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_assgt_0_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_assgt_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mcsolver__du_ptag_ordered_assgt_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_assgt_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_name_ordered_assgt_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_assgt_0_0
};

const MR_Integer mercury_data_check_hlds__mcsolver__functor_number_map_assgt_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__assgt_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__assgt_0_0)),
	"check_hlds.mcsolver",
	"assgt",
	{ (void *)mercury_data_check_hlds__mcsolver__du_name_ordered_assgt_0 },
	{ (void *)mercury_data_check_hlds__mcsolver__du_ptag_ordered_assgt_0 },
	1,
	4,
	mercury_data_check_hlds__mcsolver__functor_number_map_assgt_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_assgts_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__assgts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__assgts_0_0)),
	"check_hlds.mcsolver",
	"assgts",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_complex_cstrt_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0 = {
	"eqv_disj",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_complex_cstrt_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_complex_cstrt_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1 = {
	"at_most_one",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_complex_cstrt_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_complex_cstrt_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2 = {
	"exactly_one",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_complex_cstrt_0_2,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_complex_cstrt_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3 = {
	"disj_of_assgts",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_complex_cstrt_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3

};

const MR_DuPtagLayout mercury_data_check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_name_ordered_complex_cstrt_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1,
	&mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3,
	&mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0,
	&mercury_data_check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2
};

const MR_Integer mercury_data_check_hlds__mcsolver__functor_number_map_complex_cstrt_0[] = {
	2,
	0,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__complex_cstrt_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0)),
	"check_hlds.mcsolver",
	"complex_cstrt",
	{ (void *)mercury_data_check_hlds__mcsolver__du_name_ordered_complex_cstrt_0 },
	{ (void *)mercury_data_check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0 },
	4,
	4,
	mercury_data_check_hlds__mcsolver__functor_number_map_complex_cstrt_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__complex_cstrt_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__complex_cstrt_map_0_0)),
	"check_hlds.mcsolver",
	"complex_cstrt_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrts_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__complex_cstrts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__complex_cstrts_0_0)),
	"check_hlds.mcsolver",
	"complex_cstrts",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_eqvclass__type_ctor_info_eqvclass_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_eqv_vars_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__eqv_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__eqv_vars_0_0)),
	"check_hlds.mcsolver",
	"eqv_vars",
	{ 0 },
	{ (void *)&mercury_data_eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_impl_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_impl_0_0 = {
	"implies",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_impl_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_impl_0_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_impl_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mcsolver__du_ptag_ordered_impl_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_impl_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_name_ordered_impl_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_impl_0_0
};

const MR_Integer mercury_data_check_hlds__mcsolver__functor_number_map_impl_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_impl_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__impl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__impl_0_0)),
	"check_hlds.mcsolver",
	"impl",
	{ (void *)mercury_data_check_hlds__mcsolver__du_name_ordered_impl_0 },
	{ (void *)mercury_data_check_hlds__mcsolver__du_ptag_ordered_impl_0 },
	1,
	4,
	mercury_data_check_hlds__mcsolver__functor_number_map_impl_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_impl_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mcsolver__type_ctor_info_impl_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_impls_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__impls_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__impls_0_0)),
	"check_hlds.mcsolver",
	"impls",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_mcvar_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__mcvar_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__mcvar_0_0)),
	"check_hlds.mcsolver",
	"mcvar",
	{ 0 },
	{ (void *)&mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_mcvars_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__mcvars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__mcvars_0_0)),
	"check_hlds.mcsolver",
	"mcvars",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_prep_cstrts_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
};

const MR_ConstString mercury_data_check_hlds__mcsolver__field_names_prep_cstrts_0_0[] = {
	"prep_eqv_vars",
	"prep_assgts",
	"prep_impls",
	"prep_complex_cstrts"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0 = {
	"prep_cstrts",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_prep_cstrts_0_0,
	mercury_data_check_hlds__mcsolver__field_names_prep_cstrts_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_name_ordered_prep_cstrts_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0
};

const MR_Integer mercury_data_check_hlds__mcsolver__functor_number_map_prep_cstrts_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_prep_cstrts_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__prep_cstrts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__prep_cstrts_0_0)),
	"check_hlds.mcsolver",
	"prep_cstrts",
	{ (void *)mercury_data_check_hlds__mcsolver__du_name_ordered_prep_cstrts_0 },
	{ (void *)mercury_data_check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0 },
	1,
	4,
	mercury_data_check_hlds__mcsolver__functor_number_map_prep_cstrts_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_prop_graph_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
};

const MR_ConstString mercury_data_check_hlds__mcsolver__field_names_prop_graph_0_0[] = {
	"prop_graph_yes",
	"prop_graph_no"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_prop_graph_0_0 = {
	"prop_graph",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_prop_graph_0_0,
	mercury_data_check_hlds__mcsolver__field_names_prop_graph_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_prop_graph_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mcsolver__du_ptag_ordered_prop_graph_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_name_ordered_prop_graph_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_prop_graph_0_0
};

const MR_Integer mercury_data_check_hlds__mcsolver__functor_number_map_prop_graph_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_prop_graph_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__prop_graph_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__prop_graph_0_0)),
	"check_hlds.mcsolver",
	"prop_graph",
	{ (void *)mercury_data_check_hlds__mcsolver__du_name_ordered_prop_graph_0 },
	{ (void *)mercury_data_check_hlds__mcsolver__du_ptag_ordered_prop_graph_0 },
	1,
	4,
	mercury_data_check_hlds__mcsolver__functor_number_map_prop_graph_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_prop_graph_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mcsolver__field_types_solver_cstrts_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mcsolver__type_ctor_info_prop_graph_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
};

const MR_ConstString mercury_data_check_hlds__mcsolver__field_names_solver_cstrts_0_0[] = {
	"vars",
	"eqv_vars",
	"assgts",
	"prop_graph",
	"complex_cstrt_map"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0 = {
	"solver_cstrts",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mcsolver__field_types_solver_cstrts_0_0,
	mercury_data_check_hlds__mcsolver__field_names_solver_cstrts_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mcsolver__du_name_ordered_solver_cstrts_0[] = {
	&mercury_data_check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0
};

const MR_Integer mercury_data_check_hlds__mcsolver__functor_number_map_solver_cstrts_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mcsolver__type_ctor_info_solver_cstrts_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mcsolver__solver_cstrts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mcsolver__solver_cstrts_0_0)),
	"check_hlds.mcsolver",
	"solver_cstrts",
	{ (void *)mercury_data_check_hlds__mcsolver__du_name_ordered_solver_cstrts_0 },
	{ (void *)mercury_data_check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0 },
	1,
	4,
	mercury_data_check_hlds__mcsolver__functor_number_map_solver_cstrts_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_554",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
554,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_260",
2,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
260,
"d1;c4;d3;c2;?;c1;q;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0_1 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_428",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
428,
"d1;c19;q;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_5 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_688",
2,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
688,
"d3;c7;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_4 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_677",
2,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
676,
"d3;c7;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_3 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_638",
2,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
638,
"d1;c7;t;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_2 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_693",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
693,
"d4;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrt_6_0_1 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_668",
2,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
668,
"d2;c7;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_4 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"solve_assgt",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
569,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_3 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"solve_assgt",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
569,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"solve_assgt",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
569,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgt_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"solve_assgt",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
569,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_complex_cstrts_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"solve_complex_cstrt",
6,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
614,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_5 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"eqv_var",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
476,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_4 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"eqv_var",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
476,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_3 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_504",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
504,
"d4;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_2 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_505",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
505,
"d4;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_1 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"eqv_var",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
476,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_2 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda2_mcsolver_m_486",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
486,
"d4;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_1 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_486",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
486,
"d4;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraint_3_0_2 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_258",
2,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
258,
"d1;c4;d3;c2;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraint_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"prepare_abstract_constraint",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
238,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_3 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_538",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
538,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_2 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"solve_var",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
754,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"solve_assgt",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
569,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__solve_assgts_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"solve_assgt",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
569,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_8 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_453",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
453,
"d1;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_7 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_446",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
446,
"d1;c25;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_6 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_439",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
439,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_5 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_426",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
426,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_4 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_413",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
413,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_3 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"eqv_complex_cstrt",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
409,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_2 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_402",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
402,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mcsolver__make_solver_cstrts_1_0_1 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_396",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
396,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__disjunction_of_assignments_3_0_2 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda2_mcsolver_m_385",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
385,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__disjunction_of_assignments_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"lambda_mcsolver_m_385",
2,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
385,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__equivalent_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"equivalent",
4,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
305,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mcsolver__prepare_abstract_constraints_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.mcsolver",
"check_hlds.mcsolver",
"prepare_abstract_constraint",
3,
0
},
"check_hlds.mcsolver",
"mcsolver.m",
238,
"d1;c4;"
};


MR_decl_entry(fn__eqvclass__init_0_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module0)
	MR_init_entry1(fn__check_hlds__mcsolver__new_prep_cstrts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__new_prep_cstrts_0_0);
	MR_init_label1(fn__check_hlds__mcsolver__new_prep_cstrts_0_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_prep_cstrts'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mcsolver__new_prep_cstrts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__eqvclass__init_0_0,
		fn__check_hlds__mcsolver__new_prep_cstrts_0_0_i3);
MR_def_label(fn__check_hlds__mcsolver__new_prep_cstrts_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module1)
	MR_init_entry1(check_hlds__mcsolver__prepare_abstract_constraints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__prepare_abstract_constraints_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_abstract_constraints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__prepare_abstract_constraints_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__eqvclass__ensure_equivalence_3_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module2)
	MR_init_entry1(check_hlds__mcsolver__equivalent_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__equivalent_4_0);
	MR_init_label1(check_hlds__mcsolver__equivalent_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equivalent'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__equivalent_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__eqvclass__ensure_equivalence_3_0,
		check_hlds__mcsolver__equivalent_4_0_i3);
MR_def_label(check_hlds__mcsolver__equivalent_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module3)
	MR_init_entry1(check_hlds__mcsolver__equivalent_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__equivalent_3_0);
	MR_init_label1(check_hlds__mcsolver__equivalent_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equivalent'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__equivalent_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__equivalent_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__mcsolver__equivalent_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__equivalent_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tempr4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module4)
	MR_init_entry1(check_hlds__mcsolver__implies_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__implies_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'implies'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__implies_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr7 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr8 = MR_r2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr5, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tempr9 = MR_r3;
	MR_tfield(1, MR_tempr5, 1) = MR_tfield(0, MR_tempr9, 2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr9, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr9, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_tempr9, 3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module5)
	MR_init_entry1(check_hlds__mcsolver__not_both_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__not_both_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'not_both'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__not_both_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr7 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr8 = MR_r2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr5, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tempr9 = MR_r3;
	MR_tfield(1, MR_tempr5, 1) = MR_tfield(0, MR_tempr9, 2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr9, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr9, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_tempr9, 3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module6)
	MR_init_entry1(check_hlds__mcsolver__different_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__different_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'different'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__different_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr9 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr10 = MR_r2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr10;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr10;
	MR_tfield(0, MR_tempr5, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tempr11 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr11, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_tempr11, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_tempr11, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tempr6;
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_tempr11, 3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module7)
	MR_init_entry1(check_hlds__mcsolver__assign_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__assign_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__assign_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module8)
	MR_init_entry1(check_hlds__mcsolver__equivalent_to_disjunction_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__equivalent_to_disjunction_4_0);
	MR_init_label2(check_hlds__mcsolver__equivalent_to_disjunction_4_0,3,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equivalent_to_disjunction'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__equivalent_to_disjunction_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__equivalent_to_disjunction_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_proceed();
	}
MR_def_label(check_hlds__mcsolver__equivalent_to_disjunction_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__equivalent_to_disjunction_4_0_i8);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(check_hlds__mcsolver__equivalent_4_0);
	}
MR_def_label(check_hlds__mcsolver__equivalent_to_disjunction_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module9)
	MR_init_entry1(check_hlds__mcsolver__at_most_one_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__at_most_one_3_0);
	MR_init_label3(check_hlds__mcsolver__at_most_one_3_0,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'at_most_one'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__at_most_one_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__at_most_one_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__mcsolver__at_most_one_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__at_most_one_3_0_i5);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__mcsolver__at_most_one_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__at_most_one_3_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr7 = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr7, 2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_proceed();
	}
MR_def_label(check_hlds__mcsolver__at_most_one_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module10)
	MR_init_entry1(check_hlds__mcsolver__exactly_one_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__exactly_one_3_0);
	MR_init_label2(check_hlds__mcsolver__exactly_one_3_0,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exactly_one'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__exactly_one_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__exactly_one_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__exactly_one_3_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_proceed();
	}
MR_def_label(check_hlds__mcsolver__exactly_one_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(check_hlds__mcsolver__exactly_one_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mcsolver.m", 10);
	MR_r2 = (MR_Word) MR_string_const("exactly_one of zero variables", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module11)
	MR_init_entry1(check_hlds__mcsolver__disjunction_of_assignments_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__disjunction_of_assignments_3_0);
	MR_init_label1(check_hlds__mcsolver__disjunction_of_assignments_3_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disjunction_of_assignments'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__disjunction_of_assignments_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__mcsolver__disjunction_of_assignments_3_0_i8);
MR_def_label(check_hlds__mcsolver__disjunction_of_assignments_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__multi_map__init_0_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module12)
	MR_init_entry1(fn__check_hlds__mcsolver__make_solver_cstrts_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__make_solver_cstrts_1_0);
	MR_init_label10(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,3,5,7,9,10,13,16,18,21,23)
	MR_init_label2(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_solver_cstrts'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mcsolver__make_solver_cstrts_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i3);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, impl);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i5);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i7);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i9);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i10);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, impl);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, prop_graph);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i13);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i16);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i18);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i21);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, impl);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i23);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i25);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		fn__check_hlds__mcsolver__make_solver_cstrts_1_0_i26);
MR_def_label(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(check_hlds__mcsolver_module13)
	MR_init_entry1(check_hlds__mcsolver__solve_assgts_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__solve_assgts_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solve_assgts'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__solve_assgts_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__solve_assgt_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_7);
MR_decl_entry(fn__map__keys_1_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module14)
	MR_init_entry1(check_hlds__mcsolver__solve_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__solve_2_0);
	MR_init_label5(check_hlds__mcsolver__solve_2_0,2,5,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solve'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mcsolver__solve_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.mcsolver.solve/2-0", 5,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_fv(4);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__mcsolver__solve_2_0_i2);
MR_def_label(check_hlds__mcsolver__solve_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__solve_assgt_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_fv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_fv(5) = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r2 = MR_fv(5);
	MR_r4 = MR_tfield(0, MR_tempr3, 2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_3,
		check_hlds__mcsolver__solve_2_0_i5);
MR_def_label(check_hlds__mcsolver__solve_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__solve_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_fv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_r1 = MR_fv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_r4 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_7,
		check_hlds__mcsolver__solve_2_0_i8);
MR_def_label(check_hlds__mcsolver__solve_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_fv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_fv(1), 1);
	MR_fv(2) = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_fv(2);
	}
	MR_np_call_localret_ent(fn__map__keys_1_0,
		check_hlds__mcsolver__solve_2_0_i10);
MR_def_label(check_hlds__mcsolver__solve_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_fv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__mcsolver__solve_2_0_i11);
MR_def_label(check_hlds__mcsolver__solve_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module15)
	MR_init_entry1(check_hlds__mcsolver__prepare_var_constraint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__prepare_var_constraint_3_0);
	MR_init_label6(check_hlds__mcsolver__prepare_var_constraint_3_0,5,11,15,28,29,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_var_constraint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__prepare_var_constraint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__mcsolver__prepare_var_constraint_3_0_i5) MR_AND
		MR_LABEL_AP(check_hlds__mcsolver__prepare_var_constraint_3_0_i11) MR_AND
		MR_LABEL_AP(check_hlds__mcsolver__prepare_var_constraint_3_0_i15) MR_AND
		MR_LABEL_AP(check_hlds__mcsolver__prepare_var_constraint_3_0_i28));
MR_def_label(check_hlds__mcsolver__prepare_var_constraint_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_proceed();
	}
MR_def_label(check_hlds__mcsolver__prepare_var_constraint_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(check_hlds__mcsolver__equivalent_3_0);
MR_def_label(check_hlds__mcsolver__prepare_var_constraint_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr6 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr6, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(2, MR_tempr6, 1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr7 = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr7, 2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_proceed();
	}
MR_def_label(check_hlds__mcsolver__prepare_var_constraint_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_r4 = MR_tfield(3, MR_tempr3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__prepare_var_constraint_3_0_i29);
	}
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(check_hlds__mcsolver__equivalent_to_disjunction_4_0);
	}
MR_def_label(check_hlds__mcsolver__prepare_var_constraint_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__prepare_var_constraint_3_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(check_hlds__mcsolver__at_most_one_3_0);
MR_def_label(check_hlds__mcsolver__prepare_var_constraint_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(check_hlds__mcsolver__exactly_one_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_2);
MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module16)
	MR_init_entry1(check_hlds__mcsolver__prepare_abstract_constraint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__prepare_abstract_constraint_3_0);
	MR_init_label4(check_hlds__mcsolver__prepare_abstract_constraint_3_0,3,39,14,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_abstract_constraint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__prepare_abstract_constraint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr4);
	MR_r3 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__mcsolver__prepare_abstract_constraint_3_0_i39);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__mcsolver__prepare_abstract_constraint_3_0_i3);
	}
	MR_tempr2 = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, prep_cstrts);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_tfield(2, MR_tempr2, 0);
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(check_hlds__mcsolver__prepare_abstract_constraint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(check_hlds__mcsolver__prepare_var_constraint_3_0);
MR_def_label(check_hlds__mcsolver__prepare_abstract_constraint_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__map_3_2,
		check_hlds__mcsolver__prepare_abstract_constraint_3_0_i14);
MR_def_label(check_hlds__mcsolver__prepare_abstract_constraint_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__prepare_abstract_constraint_3_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__mcsolver__disjunction_of_assignments_3_0);
MR_def_label(check_hlds__mcsolver__prepare_abstract_constraint_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mcsolver.m", 10);
	MR_r2 = (MR_Word) MR_string_const("Disjuction of constraints - general case.", 41);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__eqvclass__get_minimum_element_2_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module17)
	MR_init_entry1(fn__check_hlds__mcsolver__eqv_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__eqv_var_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eqv_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__eqv_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__eqvclass__get_minimum_element_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module18)
	MR_init_entry1(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__complex_cstrt_vars_1_0);
	MR_init_label3(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0,11,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complex_cstrt_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_i11) MR_AND
		MR_LABEL_AP(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_i13) MR_AND
		MR_LABEL_AP(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_i13) MR_AND
		MR_LABEL_AP(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0_i4));
MR_def_label(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r4 = MR_tfield(3, MR_tempr1, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module19)
	MR_init_entry1(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0);
	MR_init_label9(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,14,16,18,3,6,20,23,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eqv_complex_cstrt'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i14) MR_AND
		MR_LABEL_AP(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i3) MR_AND
		MR_LABEL_AP(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i20) MR_AND
		MR_LABEL_AP(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i8));
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__eqvclass__get_minimum_element_2_0,
		fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i16);
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__eqv_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i18);
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__eqv_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i6);
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__eqv_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i23);
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,14);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__504__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0_i12);
MR_def_label(fn__check_hlds__mcsolver__eqv_complex_cstrt_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module20)
	MR_init_entry1(check_hlds__mcsolver__solve_complex_cstrts_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__solve_complex_cstrts_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solve_complex_cstrts'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__solve_complex_cstrts_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__solve_complex_cstrt_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module21)
	MR_init_entry1(check_hlds__mcsolver__solve_assgt_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__solve_assgt_4_0);
	MR_init_label10(check_hlds__mcsolver__solve_assgt_4_0,4,2,7,12,10,9,21,19,28,32)
	MR_init_label2(check_hlds__mcsolver__solve_assgt_4_0,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solve_assgt'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__solve_assgt_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mcsolver__solve_assgt_4_0_i4);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_assgt_4_0_i2);
	}
	if ((MR_sv(3) != MR_r2)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_assgt_4_0_i1);
	}
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__mcsolver__solve_assgt_4_0_i7);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_assgt_4_0_i9);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tfield(0, MR_tfield(0, MR_sv(1), 3), 1);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mcsolver__solve_assgt_4_0_i12);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_assgt_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__solve_assgt_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	}
	MR_np_call_localret_ent(list__foldl_4_3,
		check_hlds__mcsolver__solve_assgt_4_0_i28);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__solve_assgt_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	}
	MR_np_call_localret_ent(list__foldl_4_3,
		check_hlds__mcsolver__solve_assgt_4_0_i28);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tfield(0, MR_tfield(0, MR_sv(1), 3), 0);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mcsolver__solve_assgt_4_0_i21);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_assgt_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__solve_assgt_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	}
	MR_np_call_localret_ent(list__foldl_4_3,
		check_hlds__mcsolver__solve_assgt_4_0_i28);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__solve_assgt_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	}
	MR_np_call_localret_ent(list__foldl_4_3,
		check_hlds__mcsolver__solve_assgt_4_0_i28);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_assgt_4_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tfield(0, MR_sv(1), 4);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mcsolver__solve_assgt_4_0_i32);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_assgt_4_0_i30);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__mcsolver__solve_complex_cstrts_6_0);
	}
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__mcsolver__solve_complex_cstrts_6_0);
MR_def_label(check_hlds__mcsolver__solve_assgt_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module22)
	MR_init_entry1(check_hlds__mcsolver__all_no_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__all_no_2_0);
	MR_init_label4(check_hlds__mcsolver__all_no_2_0,23,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_no'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__all_no_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__mcsolver__all_no_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__all_no_2_0_i2);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mcsolver__all_no_2_0_i5);
MR_def_label(check_hlds__mcsolver__all_no_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__all_no_2_0_i1);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__all_no_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__mcsolver__all_no_2_0_i23);
MR_def_label(check_hlds__mcsolver__all_no_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mcsolver__all_no_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(list__delete_first_3_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module23)
	MR_init_entry1(check_hlds__mcsolver__solve_complex_cstrt_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__solve_complex_cstrt_6_0);
	MR_init_label10(check_hlds__mcsolver__solve_complex_cstrt_6_0,169,24,27,35,78,23,41,38,3,172)
	MR_init_label9(check_hlds__mcsolver__solve_complex_cstrt_6_0,7,170,56,53,65,68,171,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solve_complex_cstrt'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__solve_complex_cstrt_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(check_hlds__mcsolver__solve_complex_cstrt_6_0_i169) MR_AND
		MR_LABEL_AP(check_hlds__mcsolver__solve_complex_cstrt_6_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__mcsolver__solve_complex_cstrt_6_0_i170) MR_AND
		MR_LABEL_AP(check_hlds__mcsolver__solve_complex_cstrt_6_0_i171));
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i24);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i23);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i68);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mcsolver__all_no_2_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i35);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i1);
	}
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i38);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mcsolver__all_no_2_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i41);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i78);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__mcsolver__solve_assgt_4_0);
	}
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__mcsolver__solve_assgt_4_0);
	}
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i172);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r5;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r4, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__delete_first_3_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i7);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i68);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i53);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(2, MR_r4, 0);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i56);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i78);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__mcsolver__solve_assgts_4_0);
	}
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r5;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_r4, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__delete_first_3_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i65);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i68);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__mcsolver__solve_assgts_4_0);
	}
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,17);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(3, MR_r4, 0);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__mcsolver__solve_complex_cstrt_6_0_i16);
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_complex_cstrt_6_0_i78);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__mcsolver__solve_assgts_4_0);
	}
MR_def_label(check_hlds__mcsolver__solve_complex_cstrt_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__contains_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(check_hlds__mcsolver_module24)
	MR_init_entry1(check_hlds__mcsolver__solve_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__solve_var_4_0);
	MR_init_label4(check_hlds__mcsolver__solve_var_4_0,3,1,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solve_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__solve_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.mcsolver.solve_var/4-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(map__contains_2_0,
		check_hlds__mcsolver__solve_var_4_0_i3);
MR_def_label(check_hlds__mcsolver__solve_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__solve_var_4_0_i1);
	}
	MR_r1 = MR_fv(3);
	MR_succeed();
MR_def_label(check_hlds__mcsolver__solve_var_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__mcsolver__solve_var_4_0_i6);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_fv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_r1 = MR_fv(1);
	MR_r3 = MR_fv(3);
	}
	MR_np_call_localret_ent(check_hlds__mcsolver__solve_assgt_4_0,
		check_hlds__mcsolver__solve_var_4_0_i9);
MR_def_label(check_hlds__mcsolver__solve_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_fv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = MR_fv(1);
	MR_r3 = MR_fv(3);
	}
	MR_np_call_localret_ent(check_hlds__mcsolver__solve_assgt_4_0,
		check_hlds__mcsolver__solve_var_4_0_i9);
MR_def_label(check_hlds__mcsolver__solve_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module25)
	MR_init_entry1(__Unify___check_hlds__mcsolver__assgt_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__assgt_0_0);
	MR_init_label3(__Unify___check_hlds__mcsolver__assgt_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__assgt_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__assgt_0_0_i6);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mcsolver__assgt_0_0_i4);
MR_def_label(__Unify___check_hlds__mcsolver__assgt_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__assgt_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__mcsolver__assgt_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mcsolver__assgt_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module26)
	MR_init_entry1(__Compare___check_hlds__mcsolver__assgt_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__assgt_0_0);
	MR_init_label4(__Compare___check_hlds__mcsolver__assgt_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__assgt_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__assgt_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mcsolver__assgt_0_0_i2);
MR_def_label(__Compare___check_hlds__mcsolver__assgt_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mcsolver__assgt_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mcsolver__assgt_0_0_i5);
MR_def_label(__Compare___check_hlds__mcsolver__assgt_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__assgt_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__mcsolver__assgt_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module27)
	MR_init_entry1(__Unify___check_hlds__mcsolver__assgts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__assgts_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__assgts_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
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

MR_BEGIN_MODULE(check_hlds__mcsolver_module28)
	MR_init_entry1(__Compare___check_hlds__mcsolver__assgts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__assgts_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__assgts_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
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


MR_BEGIN_MODULE(check_hlds__mcsolver_module29)
	MR_init_entry1(__Unify___check_hlds__mcsolver__complex_cstrt_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__complex_cstrt_0_0);
	MR_init_label7(__Unify___check_hlds__mcsolver__complex_cstrt_0_0,15,18,5,22,10,31,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__complex_cstrt_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i31);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i22) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i10));
MR_def_label(__Unify___check_hlds__mcsolver__complex_cstrt_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i18);
MR_def_label(__Unify___check_hlds__mcsolver__complex_cstrt_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mcsolver__complex_cstrt_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mcsolver__complex_cstrt_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mcsolver__complex_cstrt_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__complex_cstrt_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(3, MR_sv(1), 0);
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mcsolver__complex_cstrt_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mcsolver__complex_cstrt_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module30)
	MR_init_entry1(__Compare___check_hlds__mcsolver__complex_cstrt_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__complex_cstrt_0_0);
	MR_init_label10(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,3,29,35,5,46,51,49,17,24,20)
	MR_init_label1(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,88)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__complex_cstrt_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i29) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i17));
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i49);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i35);
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i88);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i51) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i49));
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i51) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i49));
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_mask_field(MR_sv(1), 0);
	MR_r3 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__complex_cstrt_0_0_i20);
	}
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(3, MR_sv(1), 0);
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mcsolver__complex_cstrt_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module31)
	MR_init_entry1(__Unify___check_hlds__mcsolver__complex_cstrt_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__complex_cstrt_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__complex_cstrt_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module32)
	MR_init_entry1(__Compare___check_hlds__mcsolver__complex_cstrt_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__complex_cstrt_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__complex_cstrt_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module33)
	MR_init_entry1(__Unify___check_hlds__mcsolver__complex_cstrts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__complex_cstrts_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__complex_cstrts_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
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


MR_BEGIN_MODULE(check_hlds__mcsolver_module34)
	MR_init_entry1(__Compare___check_hlds__mcsolver__complex_cstrts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__complex_cstrts_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__complex_cstrts_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
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

MR_decl_entry(__Unify___eqvclass__eqvclass_1_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module35)
	MR_init_entry1(__Unify___check_hlds__mcsolver__eqv_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__eqv_vars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__eqv_vars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___eqvclass__eqvclass_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___eqvclass__eqvclass_1_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module36)
	MR_init_entry1(__Compare___check_hlds__mcsolver__eqv_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__eqv_vars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__eqv_vars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___eqvclass__eqvclass_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module37)
	MR_init_entry1(__Unify___check_hlds__mcsolver__impl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__impl_0_0);
	MR_init_label3(__Unify___check_hlds__mcsolver__impl_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__impl_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__impl_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___check_hlds__mcsolver__assgt_0_0,
		__Unify___check_hlds__mcsolver__impl_0_0_i4);
MR_def_label(__Unify___check_hlds__mcsolver__impl_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__impl_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___check_hlds__mcsolver__assgt_0_0);
MR_def_label(__Unify___check_hlds__mcsolver__impl_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mcsolver__impl_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module38)
	MR_init_entry1(__Compare___check_hlds__mcsolver__impl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__impl_0_0);
	MR_init_label4(__Compare___check_hlds__mcsolver__impl_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__impl_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__impl_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mcsolver__impl_0_0_i2);
MR_def_label(__Compare___check_hlds__mcsolver__impl_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mcsolver__impl_0_0,2)
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
	MR_np_call_localret_ent(__Compare___check_hlds__mcsolver__assgt_0_0,
		__Compare___check_hlds__mcsolver__impl_0_0_i5);
MR_def_label(__Compare___check_hlds__mcsolver__impl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__impl_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___check_hlds__mcsolver__assgt_0_0);
MR_def_label(__Compare___check_hlds__mcsolver__impl_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module39)
	MR_init_entry1(__Unify___check_hlds__mcsolver__impls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__impls_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__impls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, impl);
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


MR_BEGIN_MODULE(check_hlds__mcsolver_module40)
	MR_init_entry1(__Compare___check_hlds__mcsolver__impls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__impls_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__impls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, impl);
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


MR_BEGIN_MODULE(check_hlds__mcsolver_module41)
	MR_init_entry1(__Unify___check_hlds__mcsolver__mcvar_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__mcvar_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mcsolver__mcvar_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
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


MR_BEGIN_MODULE(check_hlds__mcsolver_module42)
	MR_init_entry1(__Compare___check_hlds__mcsolver__mcvar_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__mcvar_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mcsolver__mcvar_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
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


MR_BEGIN_MODULE(check_hlds__mcsolver_module43)
	MR_init_entry1(__Unify___check_hlds__mcsolver__mcvars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__mcvars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mcsolver__mcvars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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


MR_BEGIN_MODULE(check_hlds__mcsolver_module44)
	MR_init_entry1(__Compare___check_hlds__mcsolver__mcvars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__mcvars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mcsolver__mcvars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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


MR_BEGIN_MODULE(check_hlds__mcsolver_module45)
	MR_init_entry1(__Unify___check_hlds__mcsolver__prep_cstrts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__prep_cstrts_0_0);
	MR_init_label5(__Unify___check_hlds__mcsolver__prep_cstrts_0_0,5,7,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mcsolver__prep_cstrts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__prep_cstrts_0_0_i13);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___eqvclass__eqvclass_1_0,
		__Unify___check_hlds__mcsolver__prep_cstrts_0_0_i5);
MR_def_label(__Unify___check_hlds__mcsolver__prep_cstrts_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__prep_cstrts_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mcsolver__prep_cstrts_0_0_i7);
MR_def_label(__Unify___check_hlds__mcsolver__prep_cstrts_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__prep_cstrts_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, impl);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mcsolver__prep_cstrts_0_0_i9);
MR_def_label(__Unify___check_hlds__mcsolver__prep_cstrts_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__prep_cstrts_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mcsolver__prep_cstrts_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mcsolver__prep_cstrts_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module46)
	MR_init_entry1(__Compare___check_hlds__mcsolver__prep_cstrts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__prep_cstrts_0_0);
	MR_init_label6(__Compare___check_hlds__mcsolver__prep_cstrts_0_0,3,2,6,10,14,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mcsolver__prep_cstrts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__prep_cstrts_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mcsolver__prep_cstrts_0_0_i2);
MR_def_label(__Compare___check_hlds__mcsolver__prep_cstrts_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mcsolver__prep_cstrts_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___eqvclass__eqvclass_1_0,
		__Compare___check_hlds__mcsolver__prep_cstrts_0_0_i6);
MR_def_label(__Compare___check_hlds__mcsolver__prep_cstrts_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__prep_cstrts_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mcsolver__prep_cstrts_0_0_i10);
MR_def_label(__Compare___check_hlds__mcsolver__prep_cstrts_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__prep_cstrts_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, impl);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mcsolver__prep_cstrts_0_0_i14);
MR_def_label(__Compare___check_hlds__mcsolver__prep_cstrts_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__prep_cstrts_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mcsolver__prep_cstrts_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module47)
	MR_init_entry1(__Unify___check_hlds__mcsolver__prop_graph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__prop_graph_0_0);
	MR_init_label3(__Unify___check_hlds__mcsolver__prop_graph_0_0,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mcsolver__prop_graph_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__prop_graph_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__mcsolver__prop_graph_0_0_i6);
MR_def_label(__Unify___check_hlds__mcsolver__prop_graph_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__prop_graph_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___check_hlds__mcsolver__prop_graph_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mcsolver__prop_graph_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module48)
	MR_init_entry1(__Compare___check_hlds__mcsolver__prop_graph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__prop_graph_0_0);
	MR_init_label4(__Compare___check_hlds__mcsolver__prop_graph_0_0,3,2,7,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mcsolver__prop_graph_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__prop_graph_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mcsolver__prop_graph_0_0_i2);
MR_def_label(__Compare___check_hlds__mcsolver__prop_graph_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mcsolver__prop_graph_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__mcsolver__prop_graph_0_0_i7);
MR_def_label(__Compare___check_hlds__mcsolver__prop_graph_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__prop_graph_0_0_i25);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___check_hlds__mcsolver__prop_graph_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module49)
	MR_init_entry1(__Unify___check_hlds__mcsolver__solver_cstrts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mcsolver__solver_cstrts_0_0);
	MR_init_label6(__Unify___check_hlds__mcsolver__solver_cstrts_0_0,5,7,9,11,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mcsolver__solver_cstrts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i16);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i5);
MR_def_label(__Unify___check_hlds__mcsolver__solver_cstrts_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___eqvclass__eqvclass_1_0,
		__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i7);
MR_def_label(__Unify___check_hlds__mcsolver__solver_cstrts_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i9);
MR_def_label(__Unify___check_hlds__mcsolver__solver_cstrts_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___check_hlds__mcsolver__prop_graph_0_0,
		__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i11);
MR_def_label(__Unify___check_hlds__mcsolver__solver_cstrts_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mcsolver__solver_cstrts_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___check_hlds__mcsolver__solver_cstrts_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mcsolver__solver_cstrts_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module50)
	MR_init_entry1(__Compare___check_hlds__mcsolver__solver_cstrts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mcsolver__solver_cstrts_0_0);
	MR_init_label7(__Compare___check_hlds__mcsolver__solver_cstrts_0_0,3,2,6,11,15,19,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mcsolver__solver_cstrts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i2);
MR_def_label(__Compare___check_hlds__mcsolver__solver_cstrts_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mcsolver__solver_cstrts_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i6);
MR_def_label(__Compare___check_hlds__mcsolver__solver_cstrts_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i49);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___eqvclass__eqvclass_1_0,
		__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i11);
MR_def_label(__Compare___check_hlds__mcsolver__solver_cstrts_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i49);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i15);
MR_def_label(__Compare___check_hlds__mcsolver__solver_cstrts_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i49);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___check_hlds__mcsolver__prop_graph_0_0,
		__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i19);
MR_def_label(__Compare___check_hlds__mcsolver__solver_cstrts_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mcsolver__solver_cstrts_0_0_i49);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___check_hlds__mcsolver__solver_cstrts_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module51)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__disjunction_of_assignments__385__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module52)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__disjunction_of_assignments__385__2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__385__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module53)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0);
	MR_init_label1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_solver_cstrts__396__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__check_hlds__mcsolver__eqv_var_2_0,
		fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0_i2);
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module54)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0);
	MR_init_label2(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_solver_cstrts__402__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__mcsolver__eqv_var_2_0,
		fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0_i2);
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__mcsolver__eqv_var_2_0,
		fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0_i4);
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__402__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__multi_map__set_3_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module55)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0);
	MR_init_label3(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0,5,2,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_solver_cstrts__413__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	}
	MR_np_call_localret_ent(fn__multi_map__set_3_0,
		fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0_i5);
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__multi_map__set_3_0,
		fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0_i8);
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__413__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module56)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__428__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__428__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_solver_cstrts__428__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__428__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, complex_cstrt);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__multi_map__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module57)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0);
	MR_init_label1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_solver_cstrts__426__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__428__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,3);
	}
	MR_np_call_localret_ent(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0,
		fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0_i6);
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__426__1_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module58)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__439__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__439__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_solver_cstrts__439__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__439__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module59)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__446__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__446__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_solver_cstrts__446__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__446__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tfield(0, MR_tempr3, 1), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_tfield(0, MR_tempr3, 0), 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module60)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0);
	MR_init_label1(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_solver_cstrts__453__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__check_hlds__mcsolver__complex_cstrt_vars_1_0,
		fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0_i3);
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__453__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module61)
	MR_init_entry1(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0);
	MR_init_label1(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__prepare_abstract_constraint__260__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__260__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module62)
	MR_init_entry1(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0);
	MR_init_label1(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__prepare_abstract_constraint__258__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_np_tailcall_ent(list__map_3_2);
	}
MR_def_label(check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module63)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__complex_cstrt_vars__486__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module64)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__2_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__complex_cstrt_vars__486__2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__486__2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module65)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0);
	MR_init_label1(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__eqv_complex_cstrt__505__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__eqvclass__get_minimum_element_2_0,
		fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0_i3);
MR_def_label(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__505__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module66)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__504__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__504__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__eqv_complex_cstrt__504__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__504__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__eqvclass__get_equivalent_elements_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module67)
	MR_init_entry1(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0);
	MR_init_label3(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__bind_equivalent_vars__538__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__eqvclass__get_equivalent_elements_2_0,
		check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0_i3);
MR_def_label(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0_i4);
MR_def_label(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0_i5);
MR_def_label(check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__538__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mcsolver__IntroducedFrom__pred__bind_all__554__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module68)
	MR_init_entry1(check_hlds__mcsolver__IntroducedFrom__pred__bind_all__554__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__IntroducedFrom__pred__bind_all__554__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__bind_all__554__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__IntroducedFrom__pred__bind_all__554__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module69)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__668__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__668__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__solve_complex_cstrt__668__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__668__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__not_1_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module70)
	MR_init_entry1(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0);
	MR_init_label1(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__solve_complex_cstrt__693__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__bool__not_1_0,
		check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0_i2);
MR_def_label(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__693__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mcsolver, assgt);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module71)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__638__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__638__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__solve_complex_cstrt__638__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__638__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__mcsolver_module72)
	MR_init_entry1(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0);
	MR_init_label2(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__solve_complex_cstrt__677__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0_i4);
MR_def_label(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0_i2);
	}
	MR_r1 = ((MR_Integer) 0 != (MR_Integer) MR_r2);
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__677__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mcsolver_module73)
	MR_init_entry1(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__688__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__688__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__solve_complex_cstrt__688__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__688__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__mcsolver_maybe_bunch_0(void)
{
	check_hlds__mcsolver_module0();
	check_hlds__mcsolver_module1();
	check_hlds__mcsolver_module2();
	check_hlds__mcsolver_module3();
	check_hlds__mcsolver_module4();
	check_hlds__mcsolver_module5();
	check_hlds__mcsolver_module6();
	check_hlds__mcsolver_module7();
	check_hlds__mcsolver_module8();
	check_hlds__mcsolver_module9();
	check_hlds__mcsolver_module10();
	check_hlds__mcsolver_module11();
	check_hlds__mcsolver_module12();
	check_hlds__mcsolver_module13();
	check_hlds__mcsolver_module14();
	check_hlds__mcsolver_module15();
	check_hlds__mcsolver_module16();
	check_hlds__mcsolver_module17();
	check_hlds__mcsolver_module18();
	check_hlds__mcsolver_module19();
	check_hlds__mcsolver_module20();
	check_hlds__mcsolver_module21();
	check_hlds__mcsolver_module22();
	check_hlds__mcsolver_module23();
	check_hlds__mcsolver_module24();
	check_hlds__mcsolver_module25();
	check_hlds__mcsolver_module26();
	check_hlds__mcsolver_module27();
	check_hlds__mcsolver_module28();
	check_hlds__mcsolver_module29();
	check_hlds__mcsolver_module30();
	check_hlds__mcsolver_module31();
	check_hlds__mcsolver_module32();
	check_hlds__mcsolver_module33();
	check_hlds__mcsolver_module34();
	check_hlds__mcsolver_module35();
	check_hlds__mcsolver_module36();
	check_hlds__mcsolver_module37();
	check_hlds__mcsolver_module38();
	check_hlds__mcsolver_module39();
}

static void mercury__check_hlds__mcsolver_maybe_bunch_1(void)
{
	check_hlds__mcsolver_module40();
	check_hlds__mcsolver_module41();
	check_hlds__mcsolver_module42();
	check_hlds__mcsolver_module43();
	check_hlds__mcsolver_module44();
	check_hlds__mcsolver_module45();
	check_hlds__mcsolver_module46();
	check_hlds__mcsolver_module47();
	check_hlds__mcsolver_module48();
	check_hlds__mcsolver_module49();
	check_hlds__mcsolver_module50();
	check_hlds__mcsolver_module51();
	check_hlds__mcsolver_module52();
	check_hlds__mcsolver_module53();
	check_hlds__mcsolver_module54();
	check_hlds__mcsolver_module55();
	check_hlds__mcsolver_module56();
	check_hlds__mcsolver_module57();
	check_hlds__mcsolver_module58();
	check_hlds__mcsolver_module59();
	check_hlds__mcsolver_module60();
	check_hlds__mcsolver_module61();
	check_hlds__mcsolver_module62();
	check_hlds__mcsolver_module63();
	check_hlds__mcsolver_module64();
	check_hlds__mcsolver_module65();
	check_hlds__mcsolver_module66();
	check_hlds__mcsolver_module67();
	check_hlds__mcsolver_module68();
	check_hlds__mcsolver_module69();
	check_hlds__mcsolver_module70();
	check_hlds__mcsolver_module71();
	check_hlds__mcsolver_module72();
	check_hlds__mcsolver_module73();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__mcsolver__init(void);
void mercury__check_hlds__mcsolver__init_type_tables(void);
void mercury__check_hlds__mcsolver__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__mcsolver__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__mcsolver__init_complexity_procs(void);
#endif

void mercury__check_hlds__mcsolver__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__mcsolver_maybe_bunch_0();
	mercury__check_hlds__mcsolver_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0,
		check_hlds__mcsolver__assgt_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_assgts_0,
		check_hlds__mcsolver__assgts_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_0,
		check_hlds__mcsolver__complex_cstrt_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0,
		check_hlds__mcsolver__complex_cstrt_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrts_0,
		check_hlds__mcsolver__complex_cstrts_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_eqv_vars_0,
		check_hlds__mcsolver__eqv_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_impl_0,
		check_hlds__mcsolver__impl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_impls_0,
		check_hlds__mcsolver__impls_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_mcvar_0,
		check_hlds__mcsolver__mcvar_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_mcvars_0,
		check_hlds__mcsolver__mcvars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_prep_cstrts_0,
		check_hlds__mcsolver__prep_cstrts_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_prop_graph_0,
		check_hlds__mcsolver__prop_graph_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mcsolver__type_ctor_info_solver_cstrts_0,
		check_hlds__mcsolver__solver_cstrts_0_0);
	mercury__check_hlds__mcsolver__init_debugger();
}

void mercury__check_hlds__mcsolver__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_assgt_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_assgts_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_complex_cstrts_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_eqv_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_impl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_impls_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_mcvar_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_mcvars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_prep_cstrts_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_prop_graph_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mcsolver__type_ctor_info_solver_cstrts_0);
	}
}


void mercury__check_hlds__mcsolver__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__mcsolver__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__mcsolver);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__mcsolver__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
