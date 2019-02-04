/*
** Automatically generated from `term_constr_build.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_constr_build__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.term_constr_build.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.term_constr_build.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.term_constr_build.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.term_constr_build.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.term_constr_build.c"
#line 44 "transform_hlds.term_constr_build.c"
#include "transform_hlds.term_constr_build.mh"

#line 47 "transform_hlds.term_constr_build.c"
#line 48 "transform_hlds.term_constr_build.c"
#ifndef TRANSFORM_HLDS__TERM_CONSTR_BUILD_DECL_GUARD
#define TRANSFORM_HLDS__TERM_CONSTR_BUILD_DECL_GUARD

#line 52 "transform_hlds.term_constr_build.c"
#line 53 "transform_hlds.term_constr_build.c"

#endif
#line 56 "transform_hlds.term_constr_build.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
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
	mercury_data_transform_hlds__term_constr_build__type_ctor_info_traversal_info_0,
	mercury_data_transform_hlds__term_constr_build__type_ctor_info_scc_info_0,
	mercury_data_transform_hlds__term_constr_build__type_ctor_info_disj_info_0,
	mercury_data_transform_hlds__term_constr_build__type_ctor_info_build_options_0;
MR_decl_label1(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1132__1_1_0, 1)
MR_decl_label8(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0, 12,14,15,16,17,10,19,20)
MR_decl_label3(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0, 21,22,23)
MR_decl_label3(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0, 2,4,3)
MR_decl_label6(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0, 6,8,4,11,12,13)
MR_decl_label4(transform_hlds__term_constr_build__allocate_sizevars_5_0, 2,3,4,5)
MR_decl_label8(transform_hlds__term_constr_build__bounds_on_var_6_0, 2,3,4,11,12,13,8,14)
MR_decl_label8(transform_hlds__term_constr_build__bounds_on_var_6_0, 18,19,20,15,22,23,24,28)
MR_decl_label3(transform_hlds__term_constr_build__build_abstract_call_6_0, 2,4,3)
MR_decl_label2(transform_hlds__term_constr_build__build_abstract_conj_4_0, 2,3)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0, 2,7,9,11,12,13,15,14)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0, 17,19,20,21,24,26,22,28)
MR_decl_label4(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0, 29,30,31,4)
MR_decl_label6(transform_hlds__term_constr_build__build_abstract_disj_4_0, 3,5,8,7,10,11)
MR_decl_label4(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0, 12,4,5,3)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_goal_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(transform_hlds__term_constr_build__build_abstract_goal_4_0, 10)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 4,76,7,77,10,11,12,13)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 79,15,16,17,18,23,22,25)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 27,21,19,29,30,32,33,35)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 37,80,40,41,42,81,45,46)
MR_decl_label3(transform_hlds__term_constr_build__build_abstract_goal_2_5_0, 47,82,49)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_proc_11_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_proc_11_0, 10,11,12,13,14,15,17,16)
MR_decl_label1(transform_hlds__term_constr_build__build_abstract_proc_11_0, 20)
MR_decl_label6(transform_hlds__term_constr_build__build_abstract_scc_8_0, 2,3,4,5,6,7)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0, 2,3,5,7,4,13,15,11)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0, 10,18,19,20,21,22,23,24)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0, 56,4,7,5,9,10,13,15)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0, 11,16,18,22,24,25,28,20)
MR_decl_label3(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0, 31,33,3)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_unification_4_0, 70,5,6,9,71,14,15,18)
MR_decl_label8(transform_hlds__term_constr_build__build_abstract_unification_4_0, 72,23,24,27,31,33,34,37)
MR_decl_label2(transform_hlds__term_constr_build__build_abstract_unification_4_0, 36,32)
MR_decl_label8(transform_hlds__term_constr_build__build_non_recursive_call_6_0, 2,3,6,9,8,12,13,5)
MR_decl_label8(transform_hlds__term_constr_build__build_non_recursive_call_6_0, 4,14,17,16,19,21,22,23)
MR_decl_label3(transform_hlds__term_constr_build__build_non_recursive_call_6_0, 24,15,26)
MR_decl_label8(transform_hlds__term_constr_build__build_recursive_call_6_0, 4,6,2,7,8,9,10,11)
MR_decl_label6(transform_hlds__term_constr_build__detect_switch_var_3_0, 7,9,5,3,2,1)
MR_decl_label8(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0, 5,6,8,10,12,14,15,16)
MR_decl_label2(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0, 17,1)
MR_decl_label8(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0, 4,3,7,8,9,10,11,13)
MR_decl_label7(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0, 14,16,17,18,12,20,1)
MR_decl_label1(transform_hlds__term_constr_build__info_update_recursion_3_0, 2)
MR_decl_label6(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0, 21,5,4,8,9,3)
MR_decl_label2(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0, 3,2)
MR_decl_label8(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0, 37,6,8,11,10,13,14,38)
MR_decl_label1(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0, 1)
MR_decl_label6(transform_hlds__term_constr_build__upper_bound_constraints_6_0, 3,5,8,9,10,2)
MR_decl_label5(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0, 2,4,3,6,7)
MR_decl_label4(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0, 2,6,8,3)
MR_decl_label8(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0, 5,2,3,7,8,9,10,11)
MR_decl_label1(fn__transform_hlds__term_constr_build__lower_bound_4_0, 2)
MR_decl_label3(__Unify___transform_hlds__term_constr_build__build_options_0_0, 4,6,1)
MR_decl_label4(__Unify___transform_hlds__term_constr_build__disj_info_0_0, 7,19,5,1)
MR_decl_label6(__Unify___transform_hlds__term_constr_build__scc_info_0_0, 4,6,8,10,14,1)
MR_decl_label8(__Unify___transform_hlds__term_constr_build__traversal_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label4(__Unify___transform_hlds__term_constr_build__traversal_info_0_0, 20,22,24,1)
MR_decl_label5(__Compare___transform_hlds__term_constr_build__build_options_0_0, 3,2,5,9,29)
MR_decl_label7(__Compare___transform_hlds__term_constr_build__disj_info_0_0, 3,2,9,7,5,15,45)
MR_decl_label8(__Compare___transform_hlds__term_constr_build__scc_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label8(__Compare___transform_hlds__term_constr_build__traversal_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label8(__Compare___transform_hlds__term_constr_build__traversal_info_0_0, 29,33,37,41,45,49,53,57)
MR_decl_label1(__Compare___transform_hlds__term_constr_build__traversal_info_0_0, 125)
MR_def_extern_entry(fn__transform_hlds__term_constr_build__build_options_init_3_0)
MR_def_extern_entry(transform_hlds__term_constr_build__build_abstract_scc_8_0)
MR_decl_static(fn__transform_hlds__term_constr_build__init_traversal_info_10_0)
MR_decl_static(transform_hlds__term_constr_build__info_update_errors_3_0)
MR_decl_static(transform_hlds__term_constr_build__info_update_ho_info_3_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_conj_4_0)
MR_decl_static(transform_hlds__term_constr_build__info_increment_maxcalls_2_0)
MR_decl_static(transform_hlds__term_constr_build__info_update_recursion_3_0)
MR_decl_static(transform_hlds__term_constr_build__build_recursive_call_6_0)
MR_decl_static(fn__transform_hlds__term_constr_build__this_file_0_0)
MR_decl_static(transform_hlds__term_constr_build__build_non_recursive_call_6_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_call_6_0)
MR_decl_static(transform_hlds__term_constr_build__detect_switch_var_3_0)
MR_decl_static(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0)
MR_decl_static(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_unification_4_0)
MR_decl_static(transform_hlds__term_constr_build__upper_bound_constraints_6_0)
MR_decl_static(transform_hlds__term_constr_build__bounds_on_var_6_0)
MR_decl_static(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0)
MR_decl_static(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0)
MR_decl_static(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_goal_4_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_goal_2_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_disj_4_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0)
MR_decl_static(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0)
MR_decl_static(transform_hlds__term_constr_build__allocate_sizevars_5_0)
MR_decl_static(transform_hlds__term_constr_build__build_abstract_proc_11_0)
MR_decl_static(fn__transform_hlds__term_constr_build__lower_bound_4_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_build__build_options_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_build__build_options_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_build__disj_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_build__disj_info_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_build__scc_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_build__scc_info_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_build__traversal_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_build__traversal_info_0_0)
MR_decl_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_scc__166__1_1_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0)
MR_decl_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0)
MR_decl_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__467__1_1_0)
MR_decl_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__844__1_2_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1054__1_2_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1132__1_1_0)
MR_decl_static(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_scc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[16] =
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
MR_CTOR0_ADDR(transform_hlds__term_constr_build, scc_info)
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
MR_CTOR0_ADDR(transform_hlds__term_constr_build, scc_info)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(0,9)
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
MR_COMMON(2,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,2,5)
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
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_scc_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_build_options_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_scc_8_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, build_options),
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
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[8] =
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
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,9),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,8),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,15),
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
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_scc_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_scc_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__upper_bound_constraints_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_scc_8_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, scc_info),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(2,1),
MR_COMMON(2,1)
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
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_traversal_info_0;
static const struct mercury_type_4 mercury_common_4[1] =
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
MR_CTOR0_ADDR(transform_hlds__term_constr_build, traversal_info),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, traversal_info)
}
},
};

MR_decl_entry(fn__libs__lp_rational__make_nonneg_constr_1_0);
MR_decl_entry(fn__int__min_2_0);
static const struct mercury_type_5 mercury_common_5[7] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__term_constr_build__build_abstract_goal_4_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(fn__libs__lp_rational__make_nonneg_constr_1_0),
0
},
{
MR_COMMON(7,3),
MR_ENTRY_AP(fn__libs__lp_rational__make_nonneg_constr_1_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1132__1_1_0),
0
},
{
MR_COMMON(10,0),
MR_ENTRY_AP(fn__int__min_2_0),
0
},
{
MR_COMMON(7,6),
MR_ENTRY_AP(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__467__1_1_0),
0
},
{
MR_COMMON(7,7),
MR_ENTRY_AP(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_scc__166__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_proc_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,10),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, traversal_info),
MR_COMMON(0,11),
MR_COMMON(0,12),
MR_COMMON(0,12)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,10),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, traversal_info),
MR_COMMON(0,11),
MR_COMMON(0,12),
MR_COMMON(0,12)
}
},
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
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_proc_11_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,6),
MR_COMMON(0,11),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_goal_2_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;
static const struct mercury_type_7 mercury_common_7[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,10),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(8,0),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_5,
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
MR_COMMON(0,10),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(8,0),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_goal_2_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,11)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ho_call),
MR_COMMON(2,7)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_COMMON(0,9)
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
mercury_data__closure_layout__transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_1;
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
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_1,
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
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_recursion_type_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_recursion_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_build__field_types_traversal_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_recursion_type_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_build__field_names_traversal_info_0_0[] = {
	"recursion",
	"intermod_status",
	"errors",
	"module_info",
	"norm",
	"ppid",
	"context",
	"types",
	"zeros",
	"var_map",
	"scc",
	"maxcalls",
	"find_fail_constrs",
	"ho_info",
	"arg_analysis_only"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_build__du_functor_desc_traversal_info_0_0 = {
	"traversal_info",
	15,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_build__field_types_traversal_info_0_0,
	mercury_data_transform_hlds__term_constr_build__field_names_traversal_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_stag_ordered_traversal_info_0_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_traversal_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_traversal_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_build__du_stag_ordered_traversal_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_name_ordered_traversal_info_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_traversal_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_build__functor_number_map_traversal_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_traversal_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_build__traversal_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_build__traversal_info_0_0)),
	"transform_hlds.term_constr_build",
	"traversal_info",
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_name_ordered_traversal_info_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_traversal_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_build__functor_number_map_traversal_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_build__field_types_scc_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_build__field_names_scc_info_0_0[] = {
	"scc_ppid",
	"proc",
	"size_var_map",
	"intermod",
	"accum_errors",
	"non_zero_heads"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_build__du_functor_desc_scc_info_0_0 = {
	"scc_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_build__field_types_scc_info_0_0,
	mercury_data_transform_hlds__term_constr_build__field_names_scc_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_stag_ordered_scc_info_0_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_scc_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_scc_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_build__du_stag_ordered_scc_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_name_ordered_scc_info_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_scc_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_build__functor_number_map_scc_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_scc_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_build__scc_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_build__scc_info_0_0)),
	"transform_hlds.term_constr_build",
	"scc_info",
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_name_ordered_scc_info_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_scc_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_build__functor_number_map_scc_info_0
};
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
	13,
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

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_build__field_types_build_options_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_build__field_names_build_options_0_0[] = {
	"functor_info",
	"failure_constrs",
	"arg_size_only"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_build__du_functor_desc_build_options_0_0 = {
	"build_options",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_build__field_types_build_options_0_0,
	mercury_data_transform_hlds__term_constr_build__field_names_build_options_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_stag_ordered_build_options_0_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_build_options_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_build_options_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_build__du_stag_ordered_build_options_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_build__du_name_ordered_build_options_0[] = {
	&mercury_data_transform_hlds__term_constr_build__du_functor_desc_build_options_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_build__functor_number_map_build_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_build_options_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_build__build_options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_build__build_options_0_0)),
	"transform_hlds.term_constr_build",
	"build_options",
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_name_ordered_build_options_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_build__du_ptag_ordered_build_options_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_build__functor_number_map_build_options_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_scc_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"build_abstract_proc",
11,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
135,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_scc_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_138",
6,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
138,
"d1;c15;"
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
515,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_828",
5,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
828,
"d1;c10;t;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_2 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_828",
5,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
828,
"d1;c10;t;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_3 = {
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
844,
"d1;c10;t;c14;e;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_4 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_844",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
844,
"d1;c10;t;c14;e;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_5 = {
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
847,
"d1;c10;t;c16;"
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
908,
"d1;c10;e;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__upper_bound_constraints_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1183",
6,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1183,
"d1;c7;"
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
1126,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__bounds_on_var_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1132",
1,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1132,
"d1;c9;"
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
1148,
"d1;c11;e;e;c2;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1105",
3,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1105,
"d1;c12;"
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
1054,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_1054",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
1054,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_goal_2_5_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_467",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
467,
"d9;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__build_abstract_proc_11_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_229",
5,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
229,
"d1;c29;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_build",
"transform_hlds.term_constr_build",
"lambda_term_constr_build_m_166",
2,
0
},
"transform_hlds.term_constr_build",
"term_constr_build.m",
166,
"d1;c15;q;c10;q;c8;t;c5;"
};


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module0)
	MR_init_entry1(fn__transform_hlds__term_constr_build__build_options_init_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_build__build_options_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
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
MR_decl_entry(list__foldl3_8_4);
MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module1)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_scc_8_0);
	MR_init_label6(transform_hlds__term_constr_build__build_abstract_scc_8_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_build__build_abstract_scc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__get_scc_entry_points_4_0,
		transform_hlds__term_constr_build__build_abstract_scc_8_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_scc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__build_abstract_proc_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(fn__varset__init_0_0,
		transform_hlds__term_constr_build__build_abstract_scc_8_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_scc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__foldl3_8_4,
		transform_hlds__term_constr_build__build_abstract_scc_8_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_scc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__term_constr_build__build_abstract_scc_8_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_scc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_build, scc_info);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__term_constr_build__build_abstract_scc_8_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_abstract_scc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__term_constr_build__build_abstract_scc_8_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_scc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module2)
	MR_init_entry1(fn__transform_hlds__term_constr_build__init_traversal_info_10_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__init_traversal_info_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_tfield(0, MR_tempr1, 8) = MR_r6;
	MR_tfield(0, MR_tempr1, 9) = MR_r7;
	MR_tfield(0, MR_tempr1, 10) = MR_r8;
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = MR_r9;
	MR_tfield(0, MR_tempr1, 13) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 14) = MR_r10;
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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__info_update_errors_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_r1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_r1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_r1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_r1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module4)
	MR_init_entry1(transform_hlds__term_constr_build__info_update_ho_info_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__info_update_ho_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 13);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_r1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_r1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_r1, 13) = MR_tempr1;
	MR_tfield(0, MR_r1, 14) = MR_ctfield(0, MR_tempr2, 14);
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
	MR_init_label2(transform_hlds__term_constr_build__build_abstract_conj_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_build, traversal_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__term_constr_build__build_abstract_conj_4_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_conj_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__simplify_conjuncts_1_0,
		transform_hlds__term_constr_build__build_abstract_conj_4_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_conj_4_0,3)
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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__info_increment_maxcalls_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr1, 11) = ((MR_Integer) MR_ctfield(0, MR_r1, 11) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_r1, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_r1, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_r1, 14);
	MR_r1 = MR_tempr1;
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
	MR_init_label1(transform_hlds__term_constr_build__info_update_recursion_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__info_update_recursion_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__combine_recursion_types_2_0,
		transform_hlds__term_constr_build__info_update_recursion_3_0_i2);
MR_def_label(transform_hlds__term_constr_build__info_update_recursion_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
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
	MR_init_label8(transform_hlds__term_constr_build__build_recursive_call_6_0,4,6,2,7,8,9,10,11)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 5);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_recursive_call_6_0_i2);
	}
	MR_r1 = MR_ctfield(0, MR_sv(5), 0);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__combine_recursion_types_2_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_recursive_call_6_0_i8);
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
		transform_hlds__term_constr_build__build_recursive_call_6_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i10);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_increment_maxcalls_2_0,
		transform_hlds__term_constr_build__build_recursive_call_6_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_recursive_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module9)
	MR_init_entry1(fn__transform_hlds__term_constr_build__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_termination2_info_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__term_status_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__success_constrs_1_0);
MR_decl_entry(fn__libs__polyhedron__non_false_constraints_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__head_vars_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__create_var_substitution_2_0);
MR_decl_entry(fn__libs__lp_rational__substitute_vars_2_0);
MR_decl_entry(fn__libs__lp_rational__set_vars_to_zero_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module10)
	MR_init_entry1(transform_hlds__term_constr_build__build_non_recursive_call_6_0);
	MR_init_label8(transform_hlds__term_constr_build__build_non_recursive_call_6_0,2,3,6,9,8,12,13,5)
	MR_init_label8(transform_hlds__term_constr_build__build_non_recursive_call_6_0,4,14,17,16,19,21,22,23)
	MR_init_label3(transform_hlds__term_constr_build__build_non_recursive_call_6_0,24,15,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_non_recursive_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_sv(1);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(7), 14);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i5);
	}
	MR_sv(6) = MR_r1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__term_status_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i8);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__this_file_0_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Callee procedure has no termination status.", 43);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_sv(3) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_update_errors_3_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_sv(7);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__success_constrs_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i14);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i16);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__this_file_0_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i17);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("No argument size info for callee proc.", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i19);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_non_recursive_call_6_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i26);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__head_vars_1_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i22);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__create_var_substitution_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i23);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__libs__lp_rational__substitute_vars_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__libs__lp_rational__set_vars_to_zero_2_0,
		transform_hlds__term_constr_build__build_non_recursive_call_6_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_non_recursive_call_6_0,15)
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
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module11)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_call_6_0);
	MR_init_label3(transform_hlds__term_constr_build__build_abstract_call_6_0,2,4,3)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__term_constr_build__build_abstract_call_6_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_sv(4), 10);
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

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module12)
	MR_init_entry1(transform_hlds__term_constr_build__detect_switch_var_3_0);
	MR_init_label6(transform_hlds__term_constr_build__detect_switch_var_3_0,7,9,5,3,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__detect_switch_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i5);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__term_constr_build__detect_switch_var_3_0_i7);
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		transform_hlds__term_constr_build__detect_switch_var_3_0_i9);
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i2);
	}
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("complicated_unify/3 goal during termination analysis.", 53);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_build__detect_switch_var_3_0_i2);
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__detect_switch_var_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("shorthand/1 goal during termination analysis", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_build__detect_switch_var_3_0_i2);
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__detect_switch_var_3_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(parse_tree__prog_type__is_introduced_type_info_type_1_0);
MR_decl_entry(list__cons_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module13)
	MR_init_entry1(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0);
	MR_init_label8(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,37,6,8,11,10,13,14,38)
	MR_init_label1(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i37);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i38);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i6);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i1);
	}
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i8);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i11);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i13);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0_i14);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_0,38)
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
	MR_init_label2(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0,3,2)
MR_BEGIN_CODE

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
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("unequal length lists in strip_type_infso_and_modes/5", 52);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(transform_hlds__term_norm__functor_norm_9_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(fn__libs__rat__one_0_0);
MR_decl_entry(fn__libs__rat__rat_1_0);
MR_decl_entry(fn__libs__lp_rational__constraint_3_0);
MR_decl_entry(libs__lp_rational__is_false_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0);
MR_decl_entry(transform_hlds__term_constr_util__is_zero_size_var_2_0);
MR_decl_entry(fn__list__filter_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module15)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0);
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,2,7,9,11,12,13,15,14)
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,17,19,20,21,24,26,22,28)
	MR_init_label4(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,29,30,31,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i4);
	}
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 8);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_norm__functor_norm_9_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(8), 9);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i13);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_sv(2) = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i19);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i17);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr3, 4) = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,8);
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i19);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i20);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i21);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__lp_rational__is_false_1_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i22);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__this_file_0_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i26);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("false constraint from unification.", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i30);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_sv(8), 9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i28);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__is_zero_size_var_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_sv(8), 8);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__844__1_2_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i29);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0_i31);
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0);
MR_decl_entry(fn__libs__rat__zero_0_0);
MR_decl_entry(fn__libs__lp_rational__simplify_constraints_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module16)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0);
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,2,3,5,7,4,13,15,11)
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,10,18,19,20,21,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i13);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i10);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("zero unified with non-zero.", 27);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i19);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i20);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i21);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i22);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i23);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__simplify_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__polyhedron__is_empty_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module17)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_unification_4_0);
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_unification_4_0,70,5,6,9,71,14,15,18)
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_unification_4_0,72,23,24,27,31,33,34,37)
	MR_init_label2(transform_hlds__term_constr_build__build_abstract_unification_4_0,36,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_unification_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_unification_4_0_i70) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_unification_4_0_i71) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_unification_4_0_i72) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_unification_4_0_i31));
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r5 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,6)
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
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("empty polyhedron from unification.", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_r4 = MR_ctfield(1, MR_tempr1, 3);
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
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("empty polyhedron from unification.", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i23);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,24)
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
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i27);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("empty polyhedron from unification.", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i32);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i33);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i34);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,34)
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
		transform_hlds__term_constr_build__build_abstract_unification_4_0_i37);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_unification_4_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("empty polyhedron from unification.", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_unification_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("complicated_unify/3 in termination analysis.", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module18)
	MR_init_entry1(transform_hlds__term_constr_build__upper_bound_constraints_6_0);
	MR_init_label6(transform_hlds__term_constr_build__upper_bound_constraints_6_0,3,5,8,9,10,2)
MR_BEGIN_CODE

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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		transform_hlds__term_constr_build__upper_bound_constraints_6_0_i3);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__upper_bound_constraints_6_0_i2);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__upper_bound_constraints_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("zero upper bound.", 17);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__upper_bound_constraints_6_0_i8);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__upper_bound_constraints_6_0_i9);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		transform_hlds__term_constr_build__upper_bound_constraints_6_0_i10);
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__term_constr_build__upper_bound_constraints_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module19)
	MR_init_entry1(transform_hlds__term_constr_build__bounds_on_var_6_0);
	MR_init_label8(transform_hlds__term_constr_build__bounds_on_var_6_0,2,3,4,11,12,13,8,14)
	MR_init_label8(transform_hlds__term_constr_build__bounds_on_var_6_0,18,19,20,15,22,23,24,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__bounds_on_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_build__lower_bound_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r4;
	MR_tempr4 = MR_r5;
	MR_sv(5) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i2);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_np_call_localret_ent(list__filter_4_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i3);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("term_constr_build.m", 19);
	MR_r2 = (MR_Word) MR_string_const("bounds_on_var/6: no other constructors for type.", 48);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i28);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i8);
	}
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i11);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i12);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,13)
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
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__upper_bound_constraints_6_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i14);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i15);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__bounds_on_var_6_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i18);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i19);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i20);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i24);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i22);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i23);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__libs__lp_rational__constraint_3_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i24);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_constr_build__bounds_on_var_6_0_i28);
MR_def_label(transform_hlds__term_constr_build__bounds_on_var_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__libs__polyhedron__from_constraints_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__type_constructors_3_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module20)
	MR_init_entry1(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0);
	MR_init_label8(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,5,6,8,10,12,14,15,16)
	MR_init_label2(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,17,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_ctfield(0, MR_sv(1), 7);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i5);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i6);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_sv(1), 3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__type_util__type_constructors_3_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i8);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i15);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__this_file_0_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i12);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("find_deconstruct_fail_bound/3: non cons cons_id.", 48);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i14);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i15);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 9);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i16);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_constr_build__bounds_on_var_6_0,
		transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0_i17);
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,1)
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

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__failure_constrs_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__substitute_size_vars_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module21)
	MR_init_entry1(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0);
	MR_init_label8(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,4,3,7,8,9,10,11,13)
	MR_init_label7(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,14,16,17,18,12,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i3);
	}
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__find_deconstruct_fail_bound_3_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i4);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 9);
	MR_r2 = MR_ctfield(1, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i7);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__is_zero_size_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_sv(1), 8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1054__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i8);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_sv(2);
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
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__failure_constrs_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i11);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i20);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i14);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i20);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__head_vars_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i17);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__create_var_substitution_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i18);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__substitute_size_vars_2_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i12);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0_i20);
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_0,1)
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

MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module22)
	MR_init_entry1(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0);
	MR_init_label8(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,5,2,3,7,8,9,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 12);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
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
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i7);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i8);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 9);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i9);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(2), 8);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i10);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0_i11);
MR_def_label(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__quantification__free_goal_vars_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module23)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_goal_4_0);
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_goal_4_0,2,3,4,5,6,7,8,9)
	MR_init_label1(transform_hlds__term_constr_build__build_abstract_goal_4_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__quantification__free_goal_vars_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_sv(4), 9);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_0,
		transform_hlds__term_constr_build__build_abstract_goal_4_0_i10);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__polyhedron__universe_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__parse_tree__prog_data__get_terminates_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module24)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_goal_2_5_0);
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,4,76,7,77,10,11,12,13)
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,79,15,16,17,18,23,22,25)
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,27,21,19,29,30,32,33,35)
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,37,80,40,41,42,81,45,46)
	MR_init_label3(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,47,82,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_goal_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i76) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i77) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i13));
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_unification_4_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr2, 9);
	MR_r2 = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_call_6_0);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i10);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_update_ho_info_3_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i79) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i35) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i37) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i80) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i42) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i81) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i82));
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_sv(5) = MR_ctfield(3, MR_r1, 3);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_ctfield(3, MR_tempr1, 4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i16);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 9);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i17);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(2), 8);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i23);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i22);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i21);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i25);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i19);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i27);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i19);
	}
	MR_r1 = MR_sv(6);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(2);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i32);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i29);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__info_update_errors_3_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i30);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i32);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_conj_4_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_disj_4_0);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_disj_4_0);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i40);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i41);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_conj_4_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i45);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i46);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i47);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__this_file_0_0,
		transform_hlds__term_constr_build__build_abstract_goal_2_5_0_i49);
MR_def_label(transform_hlds__term_constr_build__build_abstract_goal_2_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand/1 goal during termination analysis.", 45);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module25)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_disj_4_0);
	MR_init_label6(transform_hlds__term_constr_build__build_abstract_disj_4_0,3,5,8,7,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_disj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,
		transform_hlds__term_constr_build__build_abstract_disj_4_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,
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
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_4_0_i10);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__term_constr_build__build_abstract_disj_4_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module26)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0);
	MR_init_label4(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_disj_acc_5_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__build_abstract_disj_acc_5_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_abstract_disj_acc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__term_norm__functor_lower_bound_4_0);
MR_decl_entry(fn__libs__lp_rational__make_var_const_eq_constraint_2_0);
MR_decl_entry(fn__libs__lp_rational__make_var_const_gte_constraint_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module27)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0);
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,56,4,7,5,9,10,13,15)
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,11,16,18,22,24,25,28,20)
	MR_init_label3(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,31,33,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__detect_switch_var_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i5);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i33);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_ctfield(0, MR_sv(7), 7);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i10);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i13);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_norm__functor_lower_bound_4_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__this_file_0_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i16);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("variable type in detect_switch_var.", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i18);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r4 = MR_ctfield(0, MR_sv(7), 8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i22);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i20);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__libs__rat__rat_1_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i24);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i25);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__libs__lp_rational__make_var_const_eq_constraint_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i28);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__libs__lp_rational__make_var_const_gte_constraint_2_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i28);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i31);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i31);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
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
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr4, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i33);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0_i56);
MR_def_label(transform_hlds__term_constr_build__build_abstract_switch_acc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(svvarset__new_var_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module28)
	MR_init_entry1(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0);
	MR_init_label6(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,21,5,4,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i3);
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r5 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i5);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i21);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i8);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i9);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0_i21);
MR_def_label(transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_constr_util__make_size_var_map_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module29)
	MR_init_entry1(transform_hlds__term_constr_build__allocate_sizevars_5_0);
	MR_init_label4(transform_hlds__term_constr_build__allocate_sizevars_5_0,2,3,4,5)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__term_constr_build__allocate_sizevars_5_0_i3);
MR_def_label(transform_hlds__term_constr_build__allocate_sizevars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__make_size_var_map_4_0,
		transform_hlds__term_constr_build__allocate_sizevars_5_0_i4);
MR_def_label(transform_hlds__term_constr_build__allocate_sizevars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
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

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module30)
	MR_init_entry1(transform_hlds__term_constr_build__build_abstract_proc_11_0);
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_proc_11_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__term_constr_build__build_abstract_proc_11_0,10,11,12,13,14,15,17,16)
	MR_init_label1(transform_hlds__term_constr_build__build_abstract_proc_11_0,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__build_abstract_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(10) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i2);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i3);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i4);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i5);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i6);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i7);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i8);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__term_constr_build__allocate_sizevars_5_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i9);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i10);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_ctfield(0, MR_tempr1, 1);
	MR_r10 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__init_traversal_info_10_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i11);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__term_constr_build__build_abstract_goal_4_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i12);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i13);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__simplify_abstract_rep_1_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i14);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i15);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i17);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__build_abstract_proc_11_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tempr4 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr5 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr5;
	MR_tempr6 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr4, 11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr4, 13);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr6;
	MR_r3 = MR_sv(14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_build, scc_info);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i20);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tempr4 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr5 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr5;
	MR_tempr6 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr4, 11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr4, 13);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr6;
	MR_r3 = MR_sv(14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_build, scc_info);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_build__build_abstract_proc_11_0_i20);
MR_def_label(transform_hlds__term_constr_build__build_abstract_proc_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module31)
	MR_init_entry1(fn__transform_hlds__term_constr_build__lower_bound_4_0);
	MR_init_label1(fn__transform_hlds__term_constr_build__lower_bound_4_0,2)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__transform_hlds__term_constr_build__lower_bound_4_0_i2);
MR_def_label(fn__transform_hlds__term_constr_build__lower_bound_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__transform_hlds__term_norm__functor_lower_bound_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__term_norm__functor_info_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module32)
	MR_init_entry1(__Unify___transform_hlds__term_constr_build__build_options_0_0);
	MR_init_label3(__Unify___transform_hlds__term_constr_build__build_options_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_build__build_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__build_options_0_0_i6);
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
	MR_np_call_localret_ent(__Unify___transform_hlds__term_norm__functor_info_0_0,
		__Unify___transform_hlds__term_constr_build__build_options_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_build__build_options_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__build_options_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__build_options_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___transform_hlds__term_constr_build__build_options_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_build__build_options_0_0,1)
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

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module33)
	MR_init_entry1(__Compare___transform_hlds__term_constr_build__build_options_0_0);
	MR_init_label5(__Compare___transform_hlds__term_constr_build__build_options_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_build__build_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__build_options_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__build_options_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_build__build_options_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_build__build_options_0_0,2)
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
	MR_np_call_localret_ent(__Compare___transform_hlds__term_norm__functor_info_0_0,
		__Compare___transform_hlds__term_constr_build__build_options_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_build__build_options_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__build_options_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__build_options_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_build__build_options_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__build_options_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_constr_build__build_options_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module34)
	MR_init_entry1(__Unify___transform_hlds__term_constr_build__disj_info_0_0);
	MR_init_label4(__Unify___transform_hlds__term_constr_build__disj_info_0_0,7,19,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_build__disj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i19);
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
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__term_constr_build__disj_info_0_0_i7);
MR_def_label(__Unify___transform_hlds__term_constr_build__disj_info_0_0,7)
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
MR_def_label(__Unify___transform_hlds__term_constr_build__disj_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_build__disj_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
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

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module35)
	MR_init_entry1(__Compare___transform_hlds__term_constr_build__disj_info_0_0);
	MR_init_label7(__Compare___transform_hlds__term_constr_build__disj_info_0_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

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
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i7);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__term_constr_build__disj_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,9)
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
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__disj_info_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_constr_build__disj_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
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

MR_decl_entry(__Unify___transform_hlds__term_constr_data__abstract_proc_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module36)
	MR_init_entry1(__Unify___transform_hlds__term_constr_build__scc_info_0_0);
	MR_init_label6(__Unify___transform_hlds__term_constr_build__scc_info_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_build__scc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__scc_info_0_0_i14);
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_constr_build__scc_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_build__scc_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__scc_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_proc_0_0,
		__Unify___transform_hlds__term_constr_build__scc_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_constr_build__scc_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__scc_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_constr_build__scc_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__term_constr_build__scc_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__scc_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__scc_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__scc_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__term_constr_build__scc_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__scc_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_constr_build__scc_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_build__scc_info_0_0,1)
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

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module37)
	MR_init_entry1(__Compare___transform_hlds__term_constr_build__scc_info_0_0);
	MR_init_label8(__Compare___transform_hlds__term_constr_build__scc_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_build__scc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__scc_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__scc_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_build__scc_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_build__scc_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_constr_build__scc_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_build__scc_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__scc_info_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___transform_hlds__term_constr_data__abstract_proc_0_0,
		__Compare___transform_hlds__term_constr_build__scc_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_build__scc_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__scc_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_constr_build__scc_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__term_constr_build__scc_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__scc_info_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__scc_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__term_constr_build__scc_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__scc_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__scc_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__term_constr_build__scc_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__scc_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_constr_build__scc_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module38)
	MR_init_entry1(__Unify___transform_hlds__term_constr_build__traversal_info_0_0);
	MR_init_label8(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label4(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,20,22,24,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_build__traversal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i24);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr3, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(14) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(15) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(16) = MR_ctfield(0, MR_tempr4, 6);
	MR_sv(17) = MR_ctfield(0, MR_tempr4, 7);
	MR_sv(18) = MR_ctfield(0, MR_tempr4, 8);
	MR_sv(19) = MR_ctfield(0, MR_tempr4, 9);
	MR_sv(20) = MR_ctfield(0, MR_tempr4, 10);
	MR_sv(21) = MR_ctfield(0, MR_tempr4, 11);
	MR_sv(22) = MR_ctfield(0, MR_tempr4, 12);
	MR_sv(23) = MR_ctfield(0, MR_tempr4, 13);
	MR_sv(24) = MR_ctfield(0, MR_tempr4, 14);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = MR_ctfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___transform_hlds__term_norm__functor_info_0_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i14);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i16);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i18);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i20);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(21))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(22))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ho_call);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i22);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_build__traversal_info_0_0_i1);
	}
	MR_r1 = (MR_sv(12) == MR_sv(24));
	MR_decr_sp_and_return(25);
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_build__traversal_info_0_0,1)
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

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module39)
	MR_init_entry1(__Compare___transform_hlds__term_constr_build__traversal_info_0_0);
	MR_init_label8(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label8(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,29,33,37,41,45,49,53,57)
	MR_init_label1(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,125)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_build__traversal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i3);
	}
	MR_incr_sp(29);
	MR_sv(29) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(28) = MR_ctfield(0, MR_tempr5, 14);
	MR_sv(27) = MR_ctfield(0, MR_tempr5, 13);
	MR_sv(26) = MR_ctfield(0, MR_tempr5, 12);
	MR_sv(25) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(24) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(23) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(21) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(14) = MR_ctfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___transform_hlds__term_norm__functor_info_0_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i29);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i33);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i37);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i41);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i45);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i49);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i53);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ho_call);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i57);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_build__traversal_info_0_0_i125);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(28);
	MR_succip_word = MR_sv(29);
	MR_decr_sp(29);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_constr_build__traversal_info_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module40)
	MR_init_entry1(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_scc__166__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_scc__166__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__det_elem_2_0);
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
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module41)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0);
	MR_init_label8(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,12,14,15,16,17,10,19,20)
	MR_init_label3(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,21,22,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_sv(7) = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i2);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i3);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i4);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i5);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i7);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i8);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i9);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__term_constr_data__analysis_depends_on_ho_1_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i12);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i10);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i14);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i15);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ho_call);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r4 = MR_ctfield(0, MR_sv(7), 10);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i16);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i17);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i19);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_sv(3) = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i19);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i20);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i21);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i22);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0_i23);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_scc__138__1_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_norm__zero_size_type_2_0);
MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module42)
	MR_init_entry1(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0);
	MR_init_label4(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0,2,6,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0_i2);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_norm__zero_size_type_2_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0_i6);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0_i8);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_proc__229__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module43)
	MR_init_entry1(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__467__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__467__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module44)
	MR_init_entry1(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0);
	MR_init_label5(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0,2,4,3,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r2, 9);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0_i2);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0_i4);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0_i6);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0,
		fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0_i7);
MR_def_label(fn__transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_decon_or_con_unify__828__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module45)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__844__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__844__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_np_tailcall_ent(std_util__isnt_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module46)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1054__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1054__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_np_tailcall_ent(std_util__isnt_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module47)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0);
	MR_init_label3(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0,2,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0_i2);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0_i4);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0_i3);
	}
	MR_r1 = (MR_sv(1) != MR_sv(2));
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__find_deconstruct_fail_bound__1105__1_3_0,3)
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


MR_BEGIN_MODULE(transform_hlds__term_constr_build_module48)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1132__1_1_0);
	MR_init_label1(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1132__1_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1132__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1132__1_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1132__1_1_0,1)
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

MR_BEGIN_MODULE(transform_hlds__term_constr_build_module49)
	MR_init_entry1(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0);
	MR_init_label6(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0,6,8,4,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0_i4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0_i6);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__zero_size_type_2_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0_i8);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0,8)
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
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0,4)
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
		transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0_i11);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_norm__functor_lower_bound_4_0,
		transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0_i12);
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0_i13);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1183__1_6_0,13)
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_constr_build__init(void);
void mercury__transform_hlds__term_constr_build__init_type_tables(void);
void mercury__transform_hlds__term_constr_build__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_constr_build__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_constr_build__init_complexity_procs(void);
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
		mercury_data_transform_hlds__term_constr_build__type_ctor_info_traversal_info_0,
		transform_hlds__term_constr_build__traversal_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_build__type_ctor_info_scc_info_0,
		transform_hlds__term_constr_build__scc_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_build__type_ctor_info_disj_info_0,
		transform_hlds__term_constr_build__disj_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_build__type_ctor_info_build_options_0,
		transform_hlds__term_constr_build__build_options_0_0);
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
		&mercury_data_transform_hlds__term_constr_build__type_ctor_info_traversal_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_build__type_ctor_info_scc_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_build__type_ctor_info_disj_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_build__type_ctor_info_build_options_0);
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

void mercury__transform_hlds__term_constr_build__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_constr_build__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
