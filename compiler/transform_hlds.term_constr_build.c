/*
** Automatically generated from `term_constr_build.m'
** by the Mercury compiler,
** version rotd-2011-12-05, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__term_constr_build__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.term_constr_build.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.term_constr_build.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.term_constr_build.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.term_constr_build.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.term_constr_build.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.term_constr_build.c"
#line 49 "transform_hlds.term_constr_build.c"
#include "transform_hlds.term_constr_build.mh"

#line 52 "transform_hlds.term_constr_build.c"
#line 53 "transform_hlds.term_constr_build.c"
#ifndef TRANSFORM_HLDS__TERM_CONSTR_BUILD_DECL_GUARD
#define TRANSFORM_HLDS__TERM_CONSTR_BUILD_DECL_GUARD

#line 57 "transform_hlds.term_constr_build.c"
#line 58 "transform_hlds.term_constr_build.c"

#endif
#line 61 "transform_hlds.term_constr_build.c"

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
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_constr_build__type_ctor_info_disj_info_0,
	mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_build_options_0,
	mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0,
	mercury_data_transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0;
MR_decl_label1(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0, 1)
MR_decl_label3(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0, 2,4,3)
MR_decl_label10(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0, 3,4,5,6,8,10,11,12,15,17)
MR_decl_label9(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0, 19,22,23,13,25,26,27,28,30)
MR_decl_label6(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0, 6,8,4,11,13,14)
MR_decl_label10(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0, 50,3,9,7,13,14,15,16,19,20)
MR_decl_label3(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0, 21,4,53)
MR_decl_label3(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0, 2,5,3)
MR_decl_label2(transform_hlds__term_constr_build__accumulate_sum_3_0, 4,2)
MR_decl_label4(transform_hlds__term_constr_build__allocate_sizevars_5_0, 2,3,4,5)
MR_decl_label10(transform_hlds__term_constr_build__bounds_on_var_6_0, 3,5,10,13,14,9,7,17,21,22)
MR_decl_label6(transform_hlds__term_constr_build__bounds_on_var_6_0, 25,19,28,31,32,6)
MR_decl_label3(transform_hlds__term_constr_build__build_abstract_call_6_0, 2,4,3)
MR_decl_label2(transform_hlds__term_constr_build__build_abstract_conj_4_0, 3,4)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0, 3,6,4,8,9,10,11,14,12,16)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0, 20,21,26,27,28,31,29,34,38,40)
MR_decl_label1(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0, 41)
MR_decl_label6(transform_hlds__term_constr_build__build_abstract_disj_4_0, 3,5,8,7,11,12)
MR_decl_label4(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0, 11,3,4,5)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0, 5,8,6,11,12,13,14,17,18,21)
MR_decl_label1(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0, 2)
MR_decl_label9(transform_hlds__term_constr_build__build_abstract_goal_4_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 5,7,8,9,14,13,16,18,12,10)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 20,24,26,3,28,30,34,35,37,33)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 41,42,43,38,51,52,50,54,53,58)
MR_decl_label3(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 57,64,67)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0, 2,3,6,8,4,15,18,12,11,25)
MR_decl_label6(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0, 26,28,29,33,34,36)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0, 67,3,4,8,5,6,11,12,13,14)
MR_decl_label7(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0, 17,15,19,20,24,28,34)
MR_decl_label10(transform_hlds__term_constr_build__build_abstract_unification_4_0, 4,5,9,3,14,15,19,13,24,25)
MR_decl_label7(transform_hlds__term_constr_build__build_abstract_unification_4_0, 29,23,34,35,39,38,33)
MR_decl_label10(transform_hlds__term_constr_build__build_non_recursive_call_6_0, 2,3,6,13,10,8,5,4,15,18)
MR_decl_label7(transform_hlds__term_constr_build__build_non_recursive_call_6_0, 20,21,22,23,17,16,26)
MR_decl_label8(transform_hlds__term_constr_build__build_recursive_call_6_0, 4,6,2,8,9,10,11,12)
MR_decl_label5(transform_hlds__term_constr_build__detect_switch_var_3_0, 6,23,5,3,1)
MR_decl_label10(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0, 4,8,9,10,11,13,14,16,17,18)
MR_decl_label10(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0, 12,3,26,27,28,33,35,30,37,38)
MR_decl_label2(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0, 39,1)
MR_decl_label1(transform_hlds__term_constr_build__info_update_recursion_3_0, 2)
MR_decl_label6(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0, 29,3,7,4,10,13)
MR_decl_label2(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0, 3,2)
MR_decl_label9(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0, 53,6,9,12,11,14,15,54,1)
MR_decl_label10(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label7(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0, 12,13,14,17,19,18,26)
MR_decl_label6(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0, 2,4,7,8,13,14)
MR_decl_label6(transform_hlds__term_constr_build__upper_bound_constraints_6_0, 4,6,9,12,13,3)
MR_decl_label4(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0, 3,7,9,4)
MR_decl_label3(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0, 2,6,5)
MR_decl_label8(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0, 5,2,3,7,8,9,10,11)
MR_decl_label1(fn__transform_hlds__term_constr_build__lower_bound_4_0, 2)
MR_decl_label4(__Unify___transform_hlds__term_constr_build__disj_info_0_0, 18,5,10,1)
MR_decl_label3(__Unify___transform_hlds__term_constr_build__term_build_options_0_0, 4,6,1)
MR_decl_label6(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0, 4,6,10,13,17,1)
MR_decl_label10(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0, 5,7,9,11,13,16,19,21,23,25)
MR_decl_label2(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0, 27,1)
MR_decl_label7(__Compare___transform_hlds__term_constr_build__disj_info_0_0, 3,2,7,5,10,12,45)
MR_decl_label5(__Compare___transform_hlds__term_constr_build__term_build_options_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0, 3,2,5,9,15,19,24,75)
MR_decl_label10(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0, 3,2,5,9,14,18,22,26,30,35)
MR_decl_label7(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0, 40,46,50,54,58,62,175)
MR_def_extern_entry(fn__transform_hlds__term_constr_build__term_build_options_init_3_0)
MR_def_extern_entry(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0)
MR_decl_static(fn__transform_hlds__term_constr_build__init_traversal_info_10_0)
MR_decl_static(transform_hlds__term_constr_build__info_update_errors_3_0)
MR_decl_static(transform_hlds__term_constr_build__info_update_ho_info_3_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_conj_4_0)
MR_decl_static(transform_hlds__term_constr_build__info_increment_maxcalls_2_0)
MR_decl_static(transform_hlds__term_constr_build__info_update_recursion_3_0)
MR_decl_static(transform_hlds__term_constr_build__build_recursive_call_6_0)
MR_decl_static(transform_hlds__term_constr_build__build_non_recursive_call_6_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_call_6_0)
MR_decl_static(transform_hlds__term_constr_build__detect_switch_var_3_0)
MR_decl_static(transform_hlds__term_constr_build__accumulate_sum_3_0)
MR_decl_static(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0)
MR_decl_static(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0)
MR_decl_static(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0)
MR_decl_static(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_unification_4_0)
MR_decl_static(transform_hlds__term_constr_build__upper_bound_constraints_6_0)
MR_decl_static(transform_hlds__term_constr_build__bounds_on_var_6_0)
MR_decl_static(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0)
MR_decl_static(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_goal_4_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_goal_2_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_disj_4_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0)
MR_decl_static(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0)
MR_decl_static(transform_hlds__term_constr_build__allocate_sizevars_5_0)
MR_decl_static(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0)
MR_decl_static(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0)
MR_decl_static(fn__transform_hlds__term_constr_build__lower_bound_4_0)
MR_decl_static(__Unify___transform_hlds__term_constr_build__disj_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_build__disj_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_build__term_build_options_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_build__term_build_options_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0)
MR_decl_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__167__1_1_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0)
MR_decl_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0)
MR_decl_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__460__1_1_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1_4_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__924__1_2_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1143__1_2_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1181__1_2_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_0 mercury_common_0[15] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
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
MR_CTOR0_ADDR(transform_hlds__term_constr_build, term_scc_info)
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
MR_CTOR0_ADDR(transform_hlds__term_constr_build, term_scc_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(2,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,2,2)
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
MR_COMMON(0,11)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(2,6)
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
mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_build_options_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, term_build_options),
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[9] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_constr_errors, termination2_error)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_constr_errors, termination2_error)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,9),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,9),
MR_COMMON(0,11)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,11),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,9),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_constr_errors, termination2_error)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__upper_bound_constraints_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, term_scc_info),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(2,1),
MR_COMMON(2,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(2,5),
MR_COMMON(0,12),
MR_CTOR0_ADDR(libs__rat, rat),
MR_COMMON(0,8),
MR_COMMON(0,13),
MR_COMMON(0,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__upper_bound_constraints_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__term_norm, functor_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_conj_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_conj_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, tti_traversal_info),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, tti_traversal_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_INT_CTOR_ADDR,
MR_COMMON(2,4),
MR_COMMON(2,4)
}
},
};

MR_decl_entry(fn__libs__lp_rational__make_nonneg_constr_1_0);
MR_decl_entry(fn__int__min_2_0);
static const struct mercury_type_5 mercury_common_5[8] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__term_constr_build__build_abstract_goal_4_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1_4_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(fn__libs__lp_rational__make_nonneg_constr_1_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(fn__libs__lp_rational__make_nonneg_constr_1_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0),
0
},
{
MR_COMMON(10,0),
MR_ENTRY_AP(fn__int__min_2_0),
0
},
{
MR_COMMON(6,7),
MR_ENTRY_AP(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__460__1_1_0),
0
},
{
MR_COMMON(6,8),
MR_ENTRY_AP(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__167__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_goal_2_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;
static const struct mercury_type_6 mercury_common_6[9] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,12),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(7,0),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,14),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,14),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,12),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(7,0),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_goal_2_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,8)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ho_call),
MR_COMMON(2,8)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_COMMON(0,11)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__term_norm, functor_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,7),
MR_COMMON(0,8),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_2;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_INT_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const struct mercury_type_10 mercury_common_10[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_case_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_build__field_types_disj_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0 = {
	"switch",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_build__field_types_disj_info_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_build__field_types_disj_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1 = {
	"non_switch",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_build__field_types_disj_info_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_name_ordered_disj_info_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1,
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_build__functor_number_map_disj_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_disj_info_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_build__disj_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_build__disj_info_0_0)),
	"transform_hlds.term_constr_build",
	"disj_info",
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_name_ordered_disj_info_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0 },
	2,
	4,
	mercury_data_transform_hlds__term_constr_build__functor_number_map_disj_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_build__field_types_term_build_options_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_build__field_names_term_build_options_0_0[] = {
	"tbo_functor_info",
	"tbo_failure_constrs",
	"tbo_arg_size_only"
};

const MR_DuArgLocn mercury_data_transform_hlds__term_constr_build__field_locns_term_build_options_0_0[] = {
	{ 0, 0, 0 },
	{ 1, 0, 1 },
	{ 1, 1, 1 },
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0 = {
	"term_build_options",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_build__field_types_term_build_options_0_0,
	mercury_data_transform_hlds__term_constr_build__field_names_term_build_options_0_0,
	mercury_data_transform_hlds__term_constr_build__field_locns_term_build_options_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_build__functor_number_map_term_build_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_build_options_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_build__term_build_options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_build__term_build_options_0_0)),
	"transform_hlds.term_constr_build",
	"term_build_options",
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_name_ordered_term_build_options_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_build__functor_number_map_term_build_options_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_build__field_types_term_scc_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_build__field_names_term_scc_info_0_0[] = {
	"tsi_scc_ppid",
	"tsi_proc",
	"tsi_size_var_map",
	"tsi_intermod",
	"tsi_accum_errors",
	"tsi_non_zero_heads"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0 = {
	"term_scc_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_build__field_types_term_scc_info_0_0,
	mercury_data_transform_hlds__term_constr_build__field_names_term_scc_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0)),
	"transform_hlds.term_constr_build",
	"term_scc_info",
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_build__functor_number_map_term_scc_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_recursion_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_recursion_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_recursion_type_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[] = {
	"tti_recursion",
	"tti_intermod_status",
	"tti_errors",
	"tti_module_info",
	"tti_norm",
	"tti_ppid",
	"tti_context",
	"tti_vartypes",
	"tti_zeros",
	"tti_size_var_map",
	"tti_scc",
	"tti_maxcalls",
	"tti_find_fail_constrs",
	"tti_ho_info",
	"tti_arg_analysis_only"
};

const MR_DuArgLocn mercury_data_transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[] = {
	{ 0, 0, 2 },
	{ 0, 2, 1 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, 0 },
	{ 4, 0, 0 },
	{ 5, 0, 0 },
	{ 6, 0, 0 },
	{ 7, 0, 0 },
	{ 8, 0, 0 },
	{ 9, 0, 0 },
	{ 10, 0, 0 },
	{ 11, 0, 0 },
	{ 12, 0, 0 },
	{ 13, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0 = {
	"tti_traversal_info",
	15,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0,
	mercury_data_transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0,
	mercury_data_transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0)),
	"transform_hlds.term_constr_build",
	"tti_traversal_info",
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_167",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
167,
"44"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_226",
5,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
226,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_goal_2_5_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_460",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
460,
"63"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_4 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1183",
3,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1183,
"56"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1181",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1181,
"51"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1143",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1143,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"is_zero_size_var",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1143,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_3 = {
{
MR_FUNCTION,
"int",
"int",
"min",
3,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1233,
"44"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1216",
1,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1216,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lower_bound",
5,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1211,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__upper_bound_constraints_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1270",
6,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1270,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_1 = {
{
MR_FUNCTION,
"libs.lp_rational",
"libs.lp_rational",
"make_nonneg_constr",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
993,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_4 = {
{
MR_FUNCTION,
"libs.lp_rational",
"libs.lp_rational",
"make_nonneg_constr",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
926,
"52"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_924",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
924,
"49"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"is_zero_size_var",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
924,
"50"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"accumulate_nonzero_arg_coeffs",
6,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
916,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_822",
4,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
822,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_conj_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"build_abstract_goal",
4,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
506,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_141",
6,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
141,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"term_constr_build_abstract_proc",
11,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
136,
"11"
};



MR_BEGIN_MODULE(transform_hlds__term_constr_build_module0)
	MR_init_entry1(fn__transform_hlds__term_constr_build__term_build_options_init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_build__term_build_options_init_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_build_options_init'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_build__term_build_options_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_r2 | ((MR_Integer) MR_r3 << (MR_Integer) 1));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__dependency_graph__get_scc_entry_points_4_0);
MR_decl_entry(fn__varset__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl3_8_2);
MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module1)
	MR_init_entry1(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0);
	MR_init_label6(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0,2,4,7,8,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_constr_build_abstract_scc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__get_scc_entry_points_4_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_i2);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	MR_tfield(0, MR_r2, 6) = MR_sv(2);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_i4);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_build, term_scc_info);
	MR_sv(5) = (MR_Word) MR_LIST_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl3_8_2,
		transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_i7);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_i8);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_i13);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0_i14);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module2)
	MR_init_entry1(fn__transform_hlds__term_constr_build__init_traversal_info_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_build__init_traversal_info_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_traversal_info'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__init_traversal_info_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 14);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 | ((MR_Integer) 0 << (MR_Integer) 2));
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_tfield(0, MR_tempr1, 6) = MR_r5;
	MR_tfield(0, MR_tempr1, 7) = MR_r6;
	MR_tfield(0, MR_tempr1, 8) = MR_r7;
	MR_tfield(0, MR_tempr1, 9) = MR_r8;
	MR_tfield(0, MR_tempr1, 10) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 11) = MR_r9;
	MR_tfield(0, MR_tempr1, 12) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 13) = MR_r10;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module3)
	MR_init_entry1(transform_hlds__term_constr_build__info_update_errors_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__info_update_errors_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'info_update_errors'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__info_update_errors_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 14);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 2));
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_r1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_r1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_r1, 12) = MR_tfield(0, MR_r2, 12);
	MR_tfield(0, MR_r1, 13) = MR_tfield(0, MR_r2, 13);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module4)
	MR_init_entry1(transform_hlds__term_constr_build__info_update_ho_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__info_update_ho_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'info_update_ho_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__info_update_ho_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 12);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 14);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 2));
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_r1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_r1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_r1, 12) = MR_tempr1;
	MR_tfield(0, MR_r1, 13) = MR_tfield(0, MR_r2, 13);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(fn__transform_hlds__term_constr_data__simplify_conjuncts_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module5)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_conj_4_0);
	MR_init_label2(transform_hlds__term_constr_build__build_abstract_conj_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_build, tti_traversal_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__term_constr_build__build_abstract_conj_4_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__simplify_conjuncts_1_0,
		transform_hlds__term_constr_build__build_abstract_conj_4_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module6)
	MR_init_entry1(transform_hlds__term_constr_build__info_increment_maxcalls_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__info_increment_maxcalls_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'info_increment_maxcalls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__info_increment_maxcalls_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_r1, 0) & (MR_Integer) 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 14);
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_tempr1 | ((MR_Integer) MR_r2 << (MR_Integer) 2));
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr2, 9) = MR_tfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr2, 10) = ((MR_Integer) MR_tfield(0, MR_r1, 10) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 11) = MR_tfield(0, MR_r1, 11);
	MR_tfield(0, MR_tempr2, 12) = MR_tfield(0, MR_r1, 12);
	MR_tfield(0, MR_tempr2, 13) = MR_tfield(0, MR_r1, 13);
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__term_constr_data__combine_recursion_types_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module7)
	MR_init_entry1(transform_hlds__term_constr_build__info_update_recursion_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__info_update_recursion_3_0);
	MR_init_label1(transform_hlds__term_constr_build__info_update_recursion_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'info_update_recursion'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__info_update_recursion_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__combine_recursion_types_2_0,
		transform_hlds__term_constr_build__info_update_recursion_3_0_i2);
MR_def_label(transform_hlds__term_constr_build__info_update_recursion_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 14);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r1 | ((MR_Integer) MR_r2 << (MR_Integer) 2));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0);
MR_decl_entry(fn__libs__polyhedron__from_constraints_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module8)
	MR_init_entry1(transform_hlds__term_constr_build__build_recursive_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_recursive_call_6_0);
	MR_init_label8(transform_hlds__term_constr_build__build_recursive_call_6_0,4,6,2,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_recursive_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_recursive_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_recursive_call_6_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_sv(5), 0) & (MR_Integer) 3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__combine_recursion_types_2_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_r3 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 14);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r1 | ((MR_Integer) MR_r3 << (MR_Integer) 2));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_recursive_call_6_0_i9);
	}
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(5);
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_update_recursion_3_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i10);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_increment_maxcalls_2_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_termination2_info_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__term_status_1_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__success_constrs_1_0);
MR_decl_entry(fn__libs__polyhedron__non_false_constraints_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__head_vars_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__create_var_substitution_2_0);
MR_decl_entry(fn__libs__lp_rational__substitute_vars_2_0);
MR_decl_entry(fn__libs__lp_rational__set_vars_to_zero_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module9)
	MR_init_entry1(transform_hlds__term_constr_build__build_non_recursive_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_non_recursive_call_6_0);
	MR_init_label10(transform_hlds__term_constr_build__build_non_recursive_call_6_0,2,3,6,13,10,8,5,4,15,18)
	MR_init_label7(transform_hlds__term_constr_build__build_non_recursive_call_6_0,20,21,22,23,17,16,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_non_recursive_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_non_recursive_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(6), 13);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i5);
	}
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__term_status_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(7);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_update_errors_3_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(7) = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", 71);
	MR_r3 = (MR_Word) MR_string_const("callee procedure has no termination status.", 43);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(6);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__success_constrs_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i17);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i26);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__head_vars_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i21);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__create_var_substitution_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i22);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__libs__lp_rational__substitute_vars_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i23);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__set_vars_to_zero_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i16);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", 71);
	MR_r3 = (MR_Word) MR_string_const("no argument size info for callee proc", 37);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i16);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i26);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module10)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_call_6_0);
	MR_init_label3(transform_hlds__term_constr_build__build_abstract_call_6_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__term_constr_build__build_abstract_call_6_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_sv(4), 9);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__term_constr_build__build_abstract_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_call_6_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_recursive_call_6_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_non_recursive_call_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module11)
	MR_init_entry1(transform_hlds__term_constr_build__detect_switch_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__detect_switch_var_3_0);
	MR_init_label5(transform_hlds__term_constr_build__detect_switch_var_3_0,6,23,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switch_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__detect_switch_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 3);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i5);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__term_constr_build__detect_switch_var_3_0_i6);
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", 64);
	MR_r3 = (MR_Word) MR_string_const("complicated_unify", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__detect_switch_var_3_0_i23);
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", 64);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__detect_switch_var_3_0_i23);
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,1)
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


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module12)
	MR_init_entry1(transform_hlds__term_constr_build__accumulate_sum_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__accumulate_sum_3_0);
	MR_init_label2(transform_hlds__term_constr_build__accumulate_sum_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_sum'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__accumulate_sum_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__accumulate_sum_3_0_i2);
	}
MR_def_label(transform_hlds__term_constr_build__accumulate_sum_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) MR_tfield(1, MR_tempr1, 0));
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(transform_hlds__term_constr_build__accumulate_sum_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__is_introduced_type_info_type_1_0);
MR_decl_entry(list__cons_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module13)
	MR_init_entry1(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0);
	MR_init_label9(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,53,6,9,12,11,14,15,54,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'strip_typeinfos_from_args_and_modes_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i53);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i54);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i6);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i9);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i12);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i11);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i14);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i15);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module14)
	MR_init_entry1(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0);
	MR_init_label2(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'strip_typeinfos_from_args_and_modes'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0_i3);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", 82);
	MR_r3 = (MR_Word) MR_string_const("unequal length lists", 20);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(transform_hlds__term_norm__functor_norm_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module15)
	MR_init_entry1(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0);
	MR_init_label10(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,50,3,9,7,13,14,15,16,19,20)
	MR_init_label3(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,21,4,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstract_from_ground_term_conjuncts'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i4);
	}
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_tempr4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i9);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i7);
	}
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_GOTO_LAB(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", 82);
	MR_r3 = (MR_Word) MR_string_const("unequal length lists", 20);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i14);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i15);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__functor_norm_9_0,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i16);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(7) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i19);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__term_constr_build__accumulate_sum_3_0,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i20);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = ((MR_Integer) MR_sv(9) + (MR_Integer) MR_tempr1);
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i21);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i50);
	}
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.abstract_from_ground_term_conjunct\'/6", 81);
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("malformed conjunct", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i53);
MR_def_label(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0_i50);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__polyhedron__is_empty_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module16)
	MR_init_entry1(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0);
	MR_init_label3(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0,2,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_goal_from_unify'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0_i2);
MR_def_label(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0_i6);
MR_def_label(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", 67);
	MR_r3 = (MR_Word) MR_string_const("empty polyhedron from unification", 33);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__libs__rat__one_0_0);
MR_decl_entry(fn__libs__rat__rat_1_0);
MR_decl_entry(fn__libs__lp_rational__construct_constraint_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module17)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0);
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,5,8,6,11,12,13,14,17,18,21)
	MR_init_label1(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_from_ground_term_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i2);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr3, 8);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i21);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_sv(10) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i13);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i14);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i17);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__build_goal_from_unify_1_0,
		transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0_i21);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.build_abstract_from_ground_term_goal\'/5", 83);
	MR_r3 = (MR_Word) MR_string_const("not conj", 8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);
MR_decl_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(libs__lp_rational__is_false_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0);
MR_decl_entry(transform_hlds__term_constr_util__is_zero_size_var_2_0);
MR_decl_entry(fn__list__filter_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module18)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0);
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,3,6,4,8,9,10,11,14,12,16)
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,20,21,26,27,28,31,29,34,38,40)
	MR_init_label1(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_decon_or_con_unify'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(8);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__functor_norm_9_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i10);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_sv(8);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i14);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i12);
	}
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i20);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i16);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i20);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i21);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_CTOR0_ADDR(libs__rat, rat);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(10);
	MR_r4 = MR_tempr4;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i26);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i27);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i28);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__lp_rational__is_false_1_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i31);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.build_abstract_decon_or_con_unify\'/7", 80);
	MR_r3 = (MR_Word) MR_string_const("false constraint from unification", 33);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i40);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i34);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__is_zero_size_var_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__924__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i38);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i41);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__rat__zero_0_0);
MR_decl_entry(fn__libs__lp_rational__simplify_constraints_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module19)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0);
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,2,3,6,8,4,15,18,12,11,25)
	MR_init_label6(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,26,28,29,33,34,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_simple_or_assign_unify'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i11);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.build_abstract_simple_or_assign_unify\'/5", 84);
	MR_r3 = (MR_Word) MR_string_const("zero unified with non-zero", 26);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i25);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i26);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i28);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i29);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i33);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i34);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__lp_rational__simplify_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i36);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module20)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_unification_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_unification_4_0);
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_unification_4_0,4,5,9,3,14,15,19,13,24,25)
	MR_init_label7(transform_hlds__term_constr_build__build_abstract_unification_4_0,29,23,34,35,39,38,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_unification'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_unification_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", 67);
	MR_r3 = (MR_Word) MR_string_const("empty polyhedron from unification", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i14);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i19);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", 67);
	MR_r3 = (MR_Word) MR_string_const("empty polyhedron from unification", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i23);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r4 = MR_tfield(1, MR_tempr1, 3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i25);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i29);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", 67);
	MR_r3 = (MR_Word) MR_string_const("empty polyhedron from unification", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i33);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i34);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i35);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(libs__polyhedron__is_empty_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i39);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", 67);
	MR_r3 = (MR_Word) MR_string_const("empty polyhedron from unification", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.build_abstract_unification\'/4", 73);
	MR_r3 = (MR_Word) MR_string_const("complicated_unify", 17);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module21)
	MR_init_entry1(transform_hlds__term_constr_build__upper_bound_constraints_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__upper_bound_constraints_6_0);
	MR_init_label6(transform_hlds__term_constr_build__upper_bound_constraints_6_0,4,6,9,12,13,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'upper_bound_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__upper_bound_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl_4_3,
		transform_hlds__term_constr_build__upper_bound_constraints_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__upper_bound_constraints_6_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__upper_bound_constraints_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.upper_bound_constraints\'/6", 70);
	MR_r3 = (MR_Word) MR_string_const("zero upper bound", 16);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__upper_bound_constraints_6_0_i9);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__upper_bound_constraints_6_0_i12);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		transform_hlds__term_constr_build__upper_bound_constraints_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module22)
	MR_init_entry1(transform_hlds__term_constr_build__bounds_on_var_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__bounds_on_var_6_0);
	MR_init_label10(transform_hlds__term_constr_build__bounds_on_var_6_0,3,5,10,13,14,9,7,17,21,22)
	MR_init_label6(transform_hlds__term_constr_build__bounds_on_var_6_0,25,19,28,31,32,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bounds_on_var'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__bounds_on_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_build__lower_bound_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(1) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i3);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i5);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i7);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i9);
	}
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i10);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i14);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__libs__polyhedron__from_constraints_1_0);
	}
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.bounds_on_var\'/6", 60);
	MR_r3 = (MR_Word) MR_string_const("no other constructors for type", 30);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__upper_bound_constraints_6_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i17);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i19);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i21);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i22);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i25);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i32);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i28);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i31);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i32);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__libs__polyhedron__from_constraints_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__failure_constrs_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__substitute_size_vars_2_0);
MR_decl_entry(check_hlds__type_util__type_constructors_3_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module23)
	MR_init_entry1(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0);
	MR_init_label10(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,4,8,9,10,11,13,14,16,17,18)
	MR_init_label10(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,12,3,26,27,28,33,35,30,37,38)
	MR_init_label2(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,39,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_failure_constraint_for_goal_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i4);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__is_zero_size_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 7);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1143__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i8);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i9);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i10);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__failure_constrs_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i11);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i39);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i14);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i39);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__head_vars_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i17);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__create_var_substitution_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i18);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__substitute_size_vars_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i12);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i39);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r3, 3);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_sv(1), 6);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i26);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i27);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_sv(1), 2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_constructors_3_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i28);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1181__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r3 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", 81);
	MR_r4 = (MR_Word) MR_string_const("mismatched type_ctors", 21);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i33);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i35);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 8);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i38);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", 81);
	MR_r3 = (MR_Word) MR_string_const("non cons cons_id.", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i37);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i38);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__bounds_on_var_6_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i39);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module24)
	MR_init_entry1(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0);
	MR_init_label8(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,5,2,3,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_failure_constraint_for_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 11);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i5);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i7);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i8);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i9);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 7);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i10);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i11);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__quantification__free_goal_vars_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__difference_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module25)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_goal_4_0);
	MR_init_label9(transform_hlds__term_constr_build__build_abstract_goal_4_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(3), 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__quantification__free_goal_vars_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__difference_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_sv(2), 8);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i10);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__parse_tree__prog_data__get_terminates_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);
MR_decl_entry(fn__libs__polyhedron__universe_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module26)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_goal_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_goal_2_5_0);
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,5,7,8,9,14,13,16,18,12,10)
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,20,24,26,3,28,30,34,35,37,33)
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,41,42,43,38,51,52,50,54,53,58)
	MR_init_label3(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,57,64,67)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_goal_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_goal_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_tfield(3, MR_tempr1, 4);
	MR_r3 = MR_tfield(3, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(5), 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(5), 7);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i14);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i16);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i10);
	}
	MR_r1 = MR_sv(4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(5);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i26);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i20);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_update_errors_3_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i26);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i28);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_conj_4_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_disj_4_0);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i33);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i34);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i35);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_update_ho_info_3_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i37);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i38);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_conj_4_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i41);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i42);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i43);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i50);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i51);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i52);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i53);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 8);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i54);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_call_6_0);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i57);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i58);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i58);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_0);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i64);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_disj_4_0);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i67);
	}
	MR_r1 = MR_tfield(1, MR_r1, 3);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_unification_4_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_build", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_build.build_abstract_goal_2\'/5", 68);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module27)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_disj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_disj_4_0);
	MR_init_label6(transform_hlds__term_constr_build__build_abstract_disj_4_0,3,5,8,7,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_disj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_disj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_4_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,
		transform_hlds__term_constr_build__build_abstract_disj_4_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,
		transform_hlds__term_constr_build__build_abstract_disj_4_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_4_0_i7);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_build__build_abstract_disj_4_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_4_0_i11);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__term_constr_build__build_abstract_disj_4_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module28)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_disj_acc_5_0);
	MR_init_label4(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_disj_acc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_disj_acc_5_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__build_abstract_disj_acc_5_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_det_3_0);
MR_decl_entry(fn__transform_hlds__term_norm__functor_lower_bound_4_0);
MR_decl_entry(fn__libs__lp_rational__make_var_const_eq_constraint_2_0);
MR_decl_entry(fn__libs__lp_rational__make_var_const_gte_constraint_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module29)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__build_abstract_switch_acc_6_0);
	MR_init_label10(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,67,3,4,8,5,6,11,12,13,14)
	MR_init_label7(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,17,15,19,20,24,28,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_abstract_switch_acc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_constr_build__detect_switch_var_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i5);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i34);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r2, 8);
	MR_sv(7) = MR_r2;
	MR_sv(8) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_sv(7), 6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_det_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(6);
	MR_tempr3 = MR_sv(7);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 7);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr3, 3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_norm__functor_lower_bound_4_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i14);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i17);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i28);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i19);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__make_var_const_eq_constraint_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__make_var_const_gte_constraint_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i28);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i34);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i67);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module30)
	MR_init_entry1(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0);
	MR_init_label6(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,29,3,7,4,10,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'possibly_fix_sizevar_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i7);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i29);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i10);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i13);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_constr_util__make_size_var_map_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module31)
	MR_init_entry1(transform_hlds__term_constr_build__allocate_sizevars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__allocate_sizevars_5_0);
	MR_init_label4(transform_hlds__term_constr_build__allocate_sizevars_5_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocate_sizevars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__allocate_sizevars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__quantification__free_goal_vars_1_0,
		transform_hlds__term_constr_build__allocate_sizevars_5_0_i2);
MR_def_label(transform_hlds__term_constr_build__allocate_sizevars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		transform_hlds__term_constr_build__allocate_sizevars_5_0_i3);
MR_def_label(transform_hlds__term_constr_build__allocate_sizevars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__make_size_var_map_4_0,
		transform_hlds__term_constr_build__allocate_sizevars_5_0_i4);
MR_def_label(transform_hlds__term_constr_build__allocate_sizevars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,
		transform_hlds__term_constr_build__allocate_sizevars_5_0_i5);
MR_def_label(transform_hlds__term_constr_build__allocate_sizevars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0);
MR_decl_entry(fn__transform_hlds__term_constr_data__simplify_abstract_rep_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(fn__list__map_corresponding_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module32)
	MR_init_entry1(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0);
	MR_init_label10(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label7(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,12,13,14,17,19,18,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_constr_build_abstract_proc'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(12) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i2);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i3);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i4);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i5);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i6);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i7);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i8);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__allocate_sizevars_5_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i9);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i10);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(9);
	MR_r9 = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) & (MR_Integer) 1);
	MR_r10 = (((MR_Integer) MR_tfield(0, MR_tempr1, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__init_traversal_info_10_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i11);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i12);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i13);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__simplify_abstract_rep_1_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i14);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i17);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i19);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tempr5 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 9) = ((MR_Integer) MR_tfield(0, MR_tempr5, 0) & (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr5, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr5, 12);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_tempr4;
	MR_tfield(0, MR_r2, 3) = MR_sv(8);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r2, 5) = MR_tempr3;
	MR_r3 = MR_sv(14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_build, term_scc_info);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i26);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tempr5 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 9) = ((MR_Integer) MR_tfield(0, MR_tempr5, 0) & (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr5, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr5, 12);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_tempr4;
	MR_tfield(0, MR_r2, 3) = MR_sv(8);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r2, 5) = MR_tempr3;
	MR_r3 = MR_sv(14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_build, term_scc_info);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0_i26);
MR_def_label(transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module33)
	MR_init_entry1(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0);
	MR_init_label3(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_nonzero_arg_coeffs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0_i2);
MR_def_label(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0_i5);
MR_def_label(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module34)
	MR_init_entry1(fn__transform_hlds__term_constr_build__lower_bound_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_build__lower_bound_4_0);
	MR_init_label1(fn__transform_hlds__term_constr_build__lower_bound_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lower_bound'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__lower_bound_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__transform_hlds__term_constr_build__lower_bound_4_0_i2);
MR_def_label(fn__transform_hlds__term_constr_build__lower_bound_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__transform_hlds__term_norm__functor_lower_bound_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module35)
	MR_init_entry1(__Unify___transform_hlds__term_constr_build__disj_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_build__disj_info_0_0);
	MR_init_label4(__Unify___transform_hlds__term_constr_build__disj_info_0_0,18,5,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_build__disj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___transform_hlds__term_constr_build__disj_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_build__disj_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__term_constr_build__disj_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__term_constr_build__disj_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_constr_build__disj_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module36)
	MR_init_entry1(__Compare___transform_hlds__term_constr_build__disj_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_build__disj_info_0_0);
	MR_init_label7(__Compare___transform_hlds__term_constr_build__disj_info_0_0,3,2,7,5,10,12,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_build__disj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__term_constr_build__disj_info_0_0_i12);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__term_norm__functor_info_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module37)
	MR_init_entry1(__Unify___transform_hlds__term_constr_build__term_build_options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_build__term_build_options_0_0);
	MR_init_label3(__Unify___transform_hlds__term_constr_build__term_build_options_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_build__term_build_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_build_options_0_0_i6);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) & (MR_Integer) 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_tempr1, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) & (MR_Integer) 1);
	MR_sv(4) = (((MR_Integer) MR_tfield(0, MR_tempr2, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__term_norm__functor_info_0_0,
		__Unify___transform_hlds__term_constr_build__term_build_options_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_build__term_build_options_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_build_options_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_build_options_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___transform_hlds__term_constr_build__term_build_options_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_build__term_build_options_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___transform_hlds__term_norm__functor_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module38)
	MR_init_entry1(__Compare___transform_hlds__term_constr_build__term_build_options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_build__term_build_options_0_0);
	MR_init_label5(__Compare___transform_hlds__term_constr_build__term_build_options_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_build__term_build_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_build_options_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_build_options_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_build_options_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_build__term_build_options_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = (((MR_Integer) MR_tfield(0, MR_tempr5, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr5, 1) & (MR_Integer) 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr6, 1) & (MR_Integer) 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___transform_hlds__term_norm__functor_info_0_0,
		__Compare___transform_hlds__term_constr_build__term_build_options_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_build_options_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_build_options_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__term_build_options_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_build_options_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_build_options_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_build_options_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__term_constr_data__abstract_proc_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module39)
	MR_init_entry1(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_build__term_scc_info_0_0);
	MR_init_label6(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0,4,6,10,13,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i17);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_proc_0_0,
		__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i1);
	}
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i13);
MR_def_label(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_build__term_scc_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___transform_hlds__term_constr_data__abstract_proc_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module40)
	MR_init_entry1(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_build__term_scc_info_0_0);
	MR_init_label8(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,3,2,5,9,15,19,24,75)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i75);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___transform_hlds__term_constr_data__abstract_proc_0_0,
		__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i75);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i15);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i75);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i19);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i75);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i24);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0_i75);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_constr_build__term_scc_info_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module41)
	MR_init_entry1(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0);
	MR_init_label10(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,5,7,9,11,13,16,19,21,23,25)
	MR_init_label2(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i27);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(23) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(24) = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 3);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) & (MR_Integer) 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(23) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(24) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(1) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 8);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 9);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 10);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 11);
	MR_sv(9) = MR_tfield(0, MR_tempr3, 12);
	MR_sv(10) = MR_tfield(0, MR_tempr3, 13);
	MR_sv(11) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr4, 8);
	MR_sv(18) = MR_tfield(0, MR_tempr4, 9);
	MR_sv(19) = MR_tfield(0, MR_tempr4, 10);
	MR_sv(20) = MR_tfield(0, MR_tempr4, 11);
	MR_sv(21) = MR_tfield(0, MR_tempr4, 12);
	MR_sv(22) = MR_tfield(0, MR_tempr4, 13);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i5);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i7);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___transform_hlds__term_norm__functor_info_0_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i9);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i11);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i13);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_sv(23) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = MR_sv(23);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i16);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_sv(24) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i19);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i21);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i23);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(19))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(20))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ho_call);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i25);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0_i1);
	}
	MR_r1 = (MR_sv(10) == MR_sv(22));
	MR_decr_sp_and_return(25);
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_build__tti_traversal_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___term__context_0_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module42)
	MR_init_entry1(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0);
	MR_init_label10(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,3,2,5,9,14,18,22,26,30,35)
	MR_init_label7(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,40,46,50,54,58,62,175)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i3);
	}
	MR_incr_sp(29);
	MR_sv(29) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr3, 0) & (MR_Integer) 3);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) & (MR_Integer) 3);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i14);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i18);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___transform_hlds__term_norm__functor_info_0_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i22);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i26);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i30);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i35);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i40);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i46);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i50);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i54);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i58);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ho_call);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i62);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0_i175);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(28);
	MR_succip_word = MR_sv(29);
	MR_decr_sp(29);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_constr_build__tti_traversal_info_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module43)
	MR_init_entry1(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__167__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__167__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__term_constr_build_abstract_scc__167__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__167__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0);
MR_decl_entry(transform_hlds__term_constr_data__analysis_depends_on_ho_1_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_pred__proc_info_set_termination2_info_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module44)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0);
	MR_init_label10(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,3,4,5,6,8,10,11,12,15,17)
	MR_init_label9(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,19,22,23,13,25,26,27,28,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__term_constr_build_abstract_scc__141__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = MR_tfield(0, MR_r2, 4);
	MR_sv(5) = MR_tfield(0, MR_r2, 5);
	MR_sv(10) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(11) = MR_tempr3;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i3);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i5);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i8);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i10);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i11);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i12);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_constr_data__analysis_depends_on_ho_1_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i15);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i13);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i17);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i19);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ho_call);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_r4 = MR_tfield(0, MR_sv(6), 11);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i22);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i23);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i25);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_sv(1) = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i25);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i26);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i27);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i28);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0_i30);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_norm__zero_size_type_2_0);
MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module45)
	MR_init_entry1(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0);
	MR_init_label4(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0,3,7,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__term_constr_build_abstract_proc__226__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0_i3);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__zero_size_type_2_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0_i7);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0_i9);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module46)
	MR_init_entry1(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__460__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__460__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__build_abstract_goal_2__460__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__460__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module47)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__det_remove_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module48)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__924__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__924__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__build_abstract_decon_or_con_unify__924__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__924__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(std_util__isnt_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module49)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1143__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1143__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_failure_constraint_for_goal_2__1143__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1143__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(std_util__isnt_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module50)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1181__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1181__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_failure_constraint_for_goal_2__1181__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1181__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module51)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0);
	MR_init_label3(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0_i2);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0_i4);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0_i3);
	}
	MR_r1 = (MR_sv(3) != MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1183__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module52)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0);
	MR_init_label1(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__bounds_on_var__1216__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1216__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module53)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0);
	MR_init_label6(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0,6,8,4,11,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__upper_bound_constraints__1270__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0_i4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__zero_size_type_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0_i8);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0_i11);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_norm__functor_lower_bound_4_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0_i14);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1270__1_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_constr_build_maybe_bunch_0(void)
{
	transform_hlds__term_constr_build_module0();
	transform_hlds__term_constr_build_module1();
	transform_hlds__term_constr_build_module2();
	transform_hlds__term_constr_build_module3();
	transform_hlds__term_constr_build_module4();
	transform_hlds__term_constr_build_module5();
	transform_hlds__term_constr_build_module6();
	transform_hlds__term_constr_build_module7();
	transform_hlds__term_constr_build_module8();
	transform_hlds__term_constr_build_module9();
	transform_hlds__term_constr_build_module10();
	transform_hlds__term_constr_build_module11();
	transform_hlds__term_constr_build_module12();
	transform_hlds__term_constr_build_module13();
	transform_hlds__term_constr_build_module14();
	transform_hlds__term_constr_build_module15();
	transform_hlds__term_constr_build_module16();
	transform_hlds__term_constr_build_module17();
	transform_hlds__term_constr_build_module18();
	transform_hlds__term_constr_build_module19();
	transform_hlds__term_constr_build_module20();
	transform_hlds__term_constr_build_module21();
	transform_hlds__term_constr_build_module22();
	transform_hlds__term_constr_build_module23();
	transform_hlds__term_constr_build_module24();
	transform_hlds__term_constr_build_module25();
	transform_hlds__term_constr_build_module26();
	transform_hlds__term_constr_build_module27();
	transform_hlds__term_constr_build_module28();
	transform_hlds__term_constr_build_module29();
	transform_hlds__term_constr_build_module30();
	transform_hlds__term_constr_build_module31();
	transform_hlds__term_constr_build_module32();
	transform_hlds__term_constr_build_module33();
	transform_hlds__term_constr_build_module34();
	transform_hlds__term_constr_build_module35();
	transform_hlds__term_constr_build_module36();
	transform_hlds__term_constr_build_module37();
	transform_hlds__term_constr_build_module38();
	transform_hlds__term_constr_build_module39();
}

static void mercury__transform_hlds__term_constr_build_maybe_bunch_1(void)
{
	transform_hlds__term_constr_build_module40();
	transform_hlds__term_constr_build_module41();
	transform_hlds__term_constr_build_module42();
	transform_hlds__term_constr_build_module43();
	transform_hlds__term_constr_build_module44();
	transform_hlds__term_constr_build_module45();
	transform_hlds__term_constr_build_module46();
	transform_hlds__term_constr_build_module47();
	transform_hlds__term_constr_build_module48();
	transform_hlds__term_constr_build_module49();
	transform_hlds__term_constr_build_module50();
	transform_hlds__term_constr_build_module51();
	transform_hlds__term_constr_build_module52();
	transform_hlds__term_constr_build_module53();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_constr_build__init(void);
void mercury__transform_hlds__term_constr_build__init_type_tables(void);
void mercury__transform_hlds__term_constr_build__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_constr_build__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_constr_build__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__term_constr_build__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__term_constr_build__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_constr_build_maybe_bunch_0();
	mercury__transform_hlds__term_constr_build_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_build__type_ctor_info_disj_info_0,
		transform_hlds__term_constr_build__disj_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_build_options_0,
		transform_hlds__term_constr_build__term_build_options_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0,
		transform_hlds__term_constr_build__term_scc_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0,
		transform_hlds__term_constr_build__tti_traversal_info_0_0);
	mercury__transform_hlds__term_constr_build__init_debugger();
}

void mercury__transform_hlds__term_constr_build__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_build__type_ctor_info_disj_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_build_options_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0);
	}
}


void mercury__transform_hlds__term_constr_build__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_constr_build__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__term_constr_build);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_constr_build__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__term_constr_build__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
