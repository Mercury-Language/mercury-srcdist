/*
** Automatically generated from `term_constr_pass2.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__transform_hlds__term_constr_pass2__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.term_constr_pass2.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.term_constr_pass2.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.term_constr_pass2.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.term_constr_pass2.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.term_constr_pass2.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.term_constr_pass2.c"
#line 49 "transform_hlds.term_constr_pass2.c"
#include "transform_hlds.term_constr_pass2.mh"

#line 52 "transform_hlds.term_constr_pass2.c"
#line 53 "transform_hlds.term_constr_pass2.c"
#ifndef TRANSFORM_HLDS__TERM_CONSTR_PASS2_DECL_GUARD
#define TRANSFORM_HLDS__TERM_CONSTR_PASS2_DECL_GUARD

#line 57 "transform_hlds.term_constr_pass2.c"
#line 58 "transform_hlds.term_constr_pass2.c"

#endif
#line 61 "transform_hlds.term_constr_pass2.c"

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
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[13];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0,
	mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0,
	mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycles_0,
	mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edge_0,
	mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edges_0,
	mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0,
	mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_scc_0;
MR_decl_label2(transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0, 2,3)
MR_decl_label2(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0, 3,1)
MR_decl_label10(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0, 24,3,4,5,6,7,9,10,11,13)
MR_decl_label2(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0, 14,15)
MR_decl_label2(transform_hlds__term_constr_pass2__direct_call_2_0, 2,1)
MR_decl_label5(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0, 16,3,4,5,7)
MR_decl_label10(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0, 137,5,6,8,9,10,11,16,14,18)
MR_decl_label10(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0, 20,19,22,23,24,25,26,13,3,149)
MR_decl_label10(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0, 35,31,151,42,43,45,46,48,49,52)
MR_decl_label6(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0, 53,54,39,153,57,147)
MR_decl_label4(transform_hlds__term_constr_pass2__order_nodes_2_4_0, 4,2,6,7)
MR_decl_label3(transform_hlds__term_constr_pass2__prove_termination_4_0, 3,2,6)
MR_decl_label10(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0, 26,3,5,7,10,12,14,16,17,18)
MR_decl_label2(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0, 19,20)
MR_decl_label5(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0, 3,2,10,13,9)
MR_decl_label10(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0, 8,11,4,2,14,15,17,19,20,21)
MR_decl_label8(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0, 23,24,25,26,27,28,29,30)
MR_decl_label6(transform_hlds__term_constr_pass2__total_sum_decrease_3_0, 31,5,10,13,8,2)
MR_decl_label1(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0, 1)
MR_decl_label2(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0, 15,5)
MR_decl_label7(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0, 26,6,7,8,9,10,3)
MR_decl_label1(fn__transform_hlds__term_constr_pass2__fix_edges_2_0, 2)
MR_decl_label4(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0, 19,5,4,3)
MR_decl_label5(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0, 30,5,6,8,10)
MR_decl_label3(fn__transform_hlds__term_constr_pass2__partition_edges_2_0, 19,5,7)
MR_decl_label5(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0, 20,4,6,7,8)
MR_decl_label2(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0, 3,2)
MR_decl_label2(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0, 3,2)
MR_decl_label2(fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0, 2,4)
MR_decl_label3(__Unify___transform_hlds__term_constr_pass2__cycle_0_0, 4,8,1)
MR_decl_label3(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0, 4,8,1)
MR_decl_label7(__Unify___transform_hlds__term_constr_pass2__edge_0_0, 4,6,8,10,12,16,1)
MR_decl_label1(__Unify___transform_hlds__term_constr_pass2__pass2_options_0_0, 4)
MR_decl_label4(__Compare___transform_hlds__term_constr_pass2__cycle_0_0, 3,2,5,27)
MR_decl_label4(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0, 3,2,5,27)
MR_decl_label8(__Compare___transform_hlds__term_constr_pass2__edge_0_0, 3,2,5,9,13,17,21,71)
MR_decl_label2(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0, 3,2)
MR_def_extern_entry(fn__transform_hlds__term_constr_pass2__pass2_options_init_1_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__partition_edges_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__make_coeffs_2_0)
MR_decl_static(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0)
MR_decl_static(transform_hlds__term_constr_pass2__total_sum_decrease_3_0)
MR_decl_static(transform_hlds__term_constr_pass2__prove_termination_4_0)
MR_def_extern_entry(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0)
MR_decl_static(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0)
MR_decl_static(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__fix_edges_2_0)
MR_decl_static(transform_hlds__term_constr_pass2__direct_call_2_0)
MR_decl_static(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0)
MR_decl_static(transform_hlds__term_constr_pass2__cycle_contains_proc_2_0)
MR_decl_static(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0)
MR_decl_static(transform_hlds__term_constr_pass2__order_nodes_2_4_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0)
MR_decl_static(__Unify___transform_hlds__term_constr_pass2__cycle_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_pass2__cycle_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_pass2__cycles_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_pass2__cycles_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_pass2__edge_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_pass2__edge_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_pass2__edges_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_pass2__edges_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_pass2__pass2_options_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0)
MR_decl_static(__Unify___transform_hlds__term_constr_pass2__scc_0_0)
MR_decl_static(__Compare___transform_hlds__term_constr_pass2__scc_0_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__149__1_1_0)
MR_decl_static(transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0)
MR_decl_static(transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__381__1_2_0)
MR_decl_static(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0)
MR_decl_static(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[15] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge)
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
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle)
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
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc)
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
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,1),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid),
MR_COMMON(0,7)
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
MR_CTOR_ADDR(bimap, bimap, 2),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_edges_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_1;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_edges_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,8),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid),
MR_COMMON(0,6),
MR_COMMON(1,1),
MR_COMMON(0,8),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid),
MR_COMMON(0,6),
MR_COMMON(1,1),
MR_COMMON(0,8),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__make_coeffs_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0_1;
static const struct mercury_type_4 mercury_common_4[9] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__make_coeffs_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__rat, rat),
MR_COMMON(0,10),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,10),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,10),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__rat, rat),
MR_COMMON(0,10),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(libs__lp_rational, constraint),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
};

static const struct mercury_type_5 mercury_common_5[4] =
{
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__149__1_1_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(transform_hlds__term_constr_pass2__direct_call_2_0),
0
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
4
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,12),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_1,
(MR_Word *) (MR_Integer) 0
},
13,
{
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc),
MR_COMMON(0,12),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_3;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,13),
MR_COMMON(0,14),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron),
MR_CTOR0_ADDR(libs__polyhedron, polyhedron)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edge_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_pass2__field_types_cycle_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_pass2__field_names_cycle_0_0[] = {
	"tcgc_nodes",
	"tcgc_edges"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0 = {
	"term_cg_cycle",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_pass2__field_types_cycle_0_0,
	mercury_data_transform_hlds__term_constr_pass2__field_names_cycle_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[] = {
	&mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[] = {
	&mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_pass2__functor_number_map_cycle_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_pass2__cycle_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_pass2__cycle_0_0)),
	"transform_hlds.term_constr_pass2",
	"cycle",
	{ (void *)mercury_data_transform_hlds__term_constr_pass2__du_name_ordered_cycle_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_pass2__functor_number_map_cycle_0
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[] = {
	"tcgcs_start",
	"tcgcs_cycles"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0 = {
	"term_cg_cycle_set",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_pass2__field_types_cycle_set_0_0,
	mercury_data_transform_hlds__term_constr_pass2__field_names_cycle_set_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[] = {
	&mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[] = {
	&mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0)),
	"transform_hlds.term_constr_pass2",
	"cycle_set",
	{ (void *)mercury_data_transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycles_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_pass2__cycles_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_pass2__cycles_0_0)),
	"transform_hlds.term_constr_pass2",
	"cycles",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_pass2__field_types_edge_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_pass2__field_names_edge_0_0[] = {
	"tcge_caller",
	"tcge_callee",
	"tcge_head_args",
	"tcge_call_args",
	"tcge_zeros",
	"tcge_label"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0 = {
	"term_cg_edge",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_pass2__field_types_edge_0_0,
	mercury_data_transform_hlds__term_constr_pass2__field_names_edge_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[] = {
	&mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_pass2__du_name_ordered_edge_0[] = {
	&mercury_data_transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_pass2__functor_number_map_edge_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_pass2__edge_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_pass2__edge_0_0)),
	"transform_hlds.term_constr_pass2",
	"edge",
	{ (void *)mercury_data_transform_hlds__term_constr_pass2__du_name_ordered_edge_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_pass2__functor_number_map_edge_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edges_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_pass2__edges_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_pass2__edges_0_0)),
	"transform_hlds.term_constr_pass2",
	"edges",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 = {
	"pass2_options",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	"max_matrix_size"
};

const MR_Integer mercury_data_transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_pass2__pass2_options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0)),
	"transform_hlds.term_constr_pass2",
	"pass2_options",
	{ (void *)&mercury_data_transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 },
	{ (void *)&mercury_data_transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_scc_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_pass2__scc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_pass2__scc_0_0)),
	"transform_hlds.term_constr_pass2",
	"scc",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"subst_size_var_coeff",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
637,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_2 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"subst_size_var_eqn",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
602,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"subst_size_var",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
597,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"search_for_cycles_3",
7,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
417,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"lambda_term_constr_pass2_m_414",
2,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
413,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_3 = {
{
MR_FUNCTION,
"libs.polyhedron",
"libs.polyhedron",
"convex_union",
5,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
215,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_2 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"fix_edges",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
208,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"find_edges_in_goal",
13,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
229,
"52"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"direct_call",
2,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
351,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"lambda_term_constr_pass2_m_176",
6,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
176,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"lambda_term_constr_pass2_m_149",
2,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
149,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_3 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"lambda_term_constr_pass2_m_541",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
541,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_2 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"lambda_term_constr_pass2_m_515",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
515,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"lambda_term_constr_pass2_m_515",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
515,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__make_coeffs_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"lambda_term_constr_pass2_m_541",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
541,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_2 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"collapse_cycle",
3,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
437,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"cycle_contains_proc",
2,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
435,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"search_for_cycles_3",
7,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
400,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_pass2__partition_edges_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_pass2",
"transform_hlds.term_constr_pass2",
"lambda_term_constr_pass2_m_381",
2,
0
},
"transform_hlds.term_constr_pass2",
"term_constr_pass2.m",
381,
"11"
};



MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module0)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__pass2_options_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__pass2_options_init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pass2_options_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_pass2__pass2_options_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__map__det_insert_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module1)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__partition_edges_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__partition_edges_2_0);
	MR_init_label3(fn__transform_hlds__term_constr_pass2__partition_edges_2_0,19,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_edges'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__partition_edges_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__partition_edges_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__map__init_0_0);
MR_def_label(fn__transform_hlds__term_constr_pass2__partition_edges_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__transform_hlds__term_constr_pass2__partition_edges_2_0,
		fn__transform_hlds__term_constr_pass2__partition_edges_2_0_i5);
MR_def_label(fn__transform_hlds__term_constr_pass2__partition_edges_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__381__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		fn__transform_hlds__term_constr_pass2__partition_edges_2_0_i7);
MR_def_label(fn__transform_hlds__term_constr_pass2__partition_edges_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__map__det_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__det_elem_2_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(fn__map__delete_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module2)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0);
	MR_init_label5(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0,20,4,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_for_cycles'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0_i4);
MR_def_label(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0_i6);
MR_def_label(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__delete_2_0,
		fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0_i7);
MR_def_label(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0,
		fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0_i8);
MR_def_label(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module3)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__partition_cycles_2_0);
	MR_init_label5(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0,30,5,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_cycles'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_pass2__cycle_contains_proc_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle);
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_i5);
MR_def_label(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0,
		fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_i6);
MR_def_label(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_i8);
MR_def_label(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module4)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0);
	MR_init_label4(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0,19,5,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_proc_from_abstract_scc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0_i3);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0_i5);
MR_def_label(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0_i19);
MR_def_label(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_pass2", 32);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.term_constr_pass2.get_proc_from_abstract_scc\'/2", 72);
	MR_r3 = (MR_Word) MR_string_const("cannot find proc", 16);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module5)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__make_coeffs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__make_coeffs_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_coeffs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__make_coeffs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(fn__list__filter_map_corresponding_3_0);
MR_decl_entry(fn__libs__rat__one_0_0);
MR_decl_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0);
MR_decl_entry(fn__libs__lp_rational__construct_constraint_3_0);
MR_decl_entry(fn__libs__polyhedron__non_false_constraints_1_0);
MR_decl_entry(libs__lp_rational__entailed_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module6)
	MR_init_entry1(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0);
	MR_init_label10(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,8,11,4,2,14,15,17,19,20,21)
	MR_init_label8(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,23,24,25,26,27,28,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'strict_decrease_around_loop'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i8);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i11);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i2);
	}
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_pass2", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_pass2.strict_decrease_around_loop\'/4", 74);
	MR_r3 = (MR_Word) MR_string_const("badly formed loop", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i14);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i15);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_tfield(0, MR_sv(2), 2);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__filter_map_corresponding_3_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i17);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r5 = MR_tfield(0, MR_sv(2), 3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_map_corresponding_3_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i19);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i20);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i21);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i23);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i24);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_pass2__make_coeffs_2_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i25);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i26);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i27);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i28);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i29);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 5);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0_i30);
MR_def_label(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__lp_rational__entailed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module7)
	MR_init_entry1(transform_hlds__term_constr_pass2__total_sum_decrease_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__total_sum_decrease_3_0);
	MR_init_label6(transform_hlds__term_constr_pass2__total_sum_decrease_3_0,31,5,10,13,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'total_sum_decrease'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__total_sum_decrease_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_pass2__total_sum_decrease_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__total_sum_decrease_3_0_i2);
	}
	MR_r5 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(0, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__total_sum_decrease_3_0_i5);
	}
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_succip_word = MR_sv(8);
	/* continue */
	} /* end while */
MR_def_label(transform_hlds__term_constr_pass2__total_sum_decrease_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__term_constr_pass2__total_sum_decrease_3_0_i8);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_r5, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__term_constr_pass2__total_sum_decrease_3_0_i10);
MR_def_label(transform_hlds__term_constr_pass2__total_sum_decrease_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_0,
		transform_hlds__term_constr_pass2__total_sum_decrease_3_0_i13);
MR_def_label(transform_hlds__term_constr_pass2__total_sum_decrease_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_constr_pass2__total_sum_decrease_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_constr_pass2__total_sum_decrease_3_0_i31);
MR_def_label(transform_hlds__term_constr_pass2__total_sum_decrease_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module8)
	MR_init_entry1(transform_hlds__term_constr_pass2__prove_termination_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__prove_termination_4_0);
	MR_init_label3(transform_hlds__term_constr_pass2__prove_termination_4_0,3,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prove_termination'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__prove_termination_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_pass2__total_sum_decrease_3_0,
		transform_hlds__term_constr_pass2__prove_termination_4_0_i3);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__prove_termination_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__term_constr_pass2__prove_termination_4_0_i6);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__term_constr_util__get_abstract_scc_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(transform_hlds__term_constr_data__scc_contains_recursion_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
MR_decl_entry(list__filter_map_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module9)
	MR_init_entry1(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0);
	MR_init_label10(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,26,3,5,7,10,12,14,16,17,18)
	MR_init_label2(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prove_termination_in_scc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i3);
	}
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__get_abstract_scc_2_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i5);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i7);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_constr_data__scc_contains_recursion_1_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i10);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i26);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i12);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i14);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_map_4_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i16);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_pass2__partition_edges_2_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i17);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_pass2__search_for_cycles_2_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i18);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i19);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_pass2__partition_cycles_2_0,
		transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0_i20);
MR_def_label(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_constr_pass2__prove_termination_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__cons_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_termination2_info_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__success_constrs_1_0);
MR_decl_entry(libs__polyhedron__is_universe_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__abstract_rep_1_0);
MR_decl_entry(fn__map__from_corresponding_lists_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__substitute_size_vars_2_0);
MR_decl_entry(fn__libs__lp_rational__set_vars_to_zero_2_0);
MR_decl_entry(fn__libs__polyhedron__from_constraints_1_0);
MR_decl_entry(libs__polyhedron__intersection_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl4_10_0);
MR_decl_entry(libs__polyhedron__project_4_0);
MR_decl_entry(fn__libs__polyhedron__universe_0_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__libs__polyhedron__project_all_3_0);
MR_decl_entry(fn__libs__polyhedron__convex_union_4_0);
MR_decl_entry(fn__libs__polyhedron__empty_0_0);
MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module10)
	MR_init_entry1(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__find_edges_in_goal_13_0);
	MR_init_label10(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,137,5,6,8,9,10,11,16,14,18)
	MR_init_label10(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,20,19,22,23,24,25,26,13,3,149)
	MR_init_label10(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,35,31,151,42,43,45,46,48,49,52)
	MR_init_label6(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,53,54,39,153,57,147)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_edges_in_goal'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_tfield(0, MR_r2, 1) = MR_tfield(2, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 3) = MR_tfield(2, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_r1, 8);
	MR_tempr2 = MR_r7;
	MR_tfield(0, MR_r2, 5) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 3);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_tempr2;
	MR_sv(10) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i5);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_sv(5), 10);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i6);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_sv(10);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i9);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i10);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__success_constrs_1_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i11);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i13);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__polyhedron__is_universe_1_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i16);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__abstract_rep_1_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i18);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i20);
	}
	MR_r4 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i19);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_pass2", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", 66);
	MR_r3 = (MR_Word) MR_string_const("no abstract representation for proc", 35);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i19);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__from_corresponding_lists_2_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i22);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i23);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__substitute_size_vars_2_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i24);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__set_vars_to_zero_2_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i25);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i26);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__polyhedron__intersection_3_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i54);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_pass2", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", 66);
	MR_r3 = (MR_Word) MR_string_const("proc with no arg size info in pass 2", 36);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i31);
	}
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i149);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i137);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_tempr6 = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_goal);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_tempr6;
	MR_r5 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr2 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr5;
	}
	MR_np_call_localret_ent(list__foldl4_10_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i35);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i147);
	}
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(5), 7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__polyhedron__project_4_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i54);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i39);
	}
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i151);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i42);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i43);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__fix_edges_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i45);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i46);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_sv(5), 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__project_all_3_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i49);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__polyhedron__convex_union_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__empty_0_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i52);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i53);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__polyhedron__intersection_3_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i54);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i153);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r6;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_r1 = MR_tfield(3, MR_r5, 0);
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(libs__polyhedron__intersection_3_0,
		transform_hlds__term_constr_pass2__find_edges_in_goal_13_0_i57);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	}
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module11)
	MR_init_entry1(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__find_edges_in_disj_14_0);
	MR_init_label5(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0,16,3,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_edges_in_disj'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_r7;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,
		transform_hlds__term_constr_pass2__find_edges_in_disj_14_0_i4);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_constr_pass2__find_edges_in_disj_14_0_i5);
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__term_constr_pass2__find_edges_in_disj_14_0_i16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__polyhedron__intersection_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module12)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__fix_edges_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__fix_edges_2_0);
	MR_init_label1(fn__transform_hlds__term_constr_pass2__fix_edges_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_edges'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__fix_edges_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 5);
	MR_np_call_localret_ent(fn__libs__polyhedron__intersection_2_0,
		fn__transform_hlds__term_constr_pass2__fix_edges_2_0_i2);
MR_def_label(fn__transform_hlds__term_constr_pass2__fix_edges_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module13)
	MR_init_entry1(transform_hlds__term_constr_pass2__direct_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__direct_call_2_0);
	MR_init_label2(transform_hlds__term_constr_pass2__direct_call_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'direct_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__direct_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		transform_hlds__term_constr_pass2__direct_call_2_0_i2);
MR_def_label(transform_hlds__term_constr_pass2__direct_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__direct_call_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__term_constr_pass2__direct_call_2_0,1)
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

MR_decl_entry(fn__map__elem_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module14)
	MR_init_entry1(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__search_for_cycles_3_7_0);
	MR_init_label5(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0,3,2,10,13,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_for_cycles_3'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_i3);
MR_def_label(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, cycle);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__cons_3_0);
	}
MR_def_label(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_sv(6), 1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_i10);
MR_def_label(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_pass2__search_for_cycles_3_7_0_i13);
MR_def_label(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr3, 6) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__term_constr_pass2__search_for_cycles_3_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module15)
	MR_init_entry1(transform_hlds__term_constr_pass2__cycle_contains_proc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__cycle_contains_proc_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cycle_contains_proc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__cycle_contains_proc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__union_3_0);
MR_decl_entry(fn__assoc_list__from_corresponding_lists_2_0);
MR_decl_entry(fn__bimap__init_0_0);
MR_decl_entry(bimap__set_from_assoc_list_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module16)
	MR_init_entry1(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__collapse_cycle_2_7_0);
	MR_init_label10(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,24,3,4,5,6,7,9,10,11,13)
	MR_init_label2(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'collapse_cycle_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i4);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__assoc_list__from_corresponding_lists_2_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i5);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__bimap__init_0_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i6);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__set_from_assoc_list_3_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i7);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_sv(1), 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i9);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i10);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 5);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i11);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i13);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i14);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i15);
MR_def_label(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0_i24);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module17)
	MR_init_entry1(transform_hlds__term_constr_pass2__order_nodes_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__order_nodes_2_4_0);
	MR_init_label4(transform_hlds__term_constr_pass2__order_nodes_2_4_0,4,2,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'order_nodes_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__order_nodes_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		transform_hlds__term_constr_pass2__order_nodes_2_4_0_i4);
MR_def_label(transform_hlds__term_constr_pass2__order_nodes_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__order_nodes_2_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_constr_pass2__order_nodes_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_constr_pass2__order_nodes_2_4_0_i6);
MR_def_label(transform_hlds__term_constr_pass2__order_nodes_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(3), 1);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__term_constr_pass2__order_nodes_2_4_0,
		transform_hlds__term_constr_pass2__order_nodes_2_4_0_i7);
MR_def_label(transform_hlds__term_constr_pass2__order_nodes_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module18)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__build_edge_map_1_0);
	MR_init_label2(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0,15,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_edge_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_np_tailcall_ent(fn__map__init_0_0);
MR_def_label(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0,
		fn__transform_hlds__term_constr_pass2__build_edge_map_1_0_i5);
MR_def_label(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__map__det_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module19)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0);
	MR_init_label7(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0,26,6,7,8,9,10,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'collapse_cycle'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0_i3);
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0_i26);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_pass2__build_edge_map_1_0,
		fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0_i6);
MR_def_label(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0_i7);
MR_def_label(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0_i8);
MR_def_label(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_pass2__order_nodes_2_4_0,
		fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0_i9);
MR_def_label(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_pass2__collapse_cycle_2_7_0,
		fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0_i10);
MR_def_label(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__transform_hlds__term_constr_pass2__collapse_cycle_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_constr_pass2", 32);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.term_constr_pass2.collapse_cycle\'/2", 60);
	MR_r3 = (MR_Word) MR_string_const("trying to collapse a cycle with no edges", 40);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__lp_rational__deconstruct_constraint_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module20)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0);
	MR_init_label2(fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subst_size_var_eqn'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__lp_rational__deconstruct_constraint_4_0,
		fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0_i2);
MR_def_label(fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0_i4);
MR_def_label(fn__transform_hlds__term_constr_pass2__subst_size_var_eqn_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__libs__lp_rational__construct_constraint_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__search_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module21)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__subst_size_var_2_0);
	MR_init_label2(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subst_size_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(bimap__search_3_0,
		fn__transform_hlds__term_constr_pass2__subst_size_var_2_0_i3);
MR_def_label(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__transform_hlds__term_constr_pass2__subst_size_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module22)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0);
	MR_init_label2(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subst_size_var_coeff'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(bimap__search_3_0,
		fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0_i3);
MR_def_label(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__transform_hlds__term_constr_pass2__subst_size_var_coeff_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module23)
	MR_init_entry1(__Unify___transform_hlds__term_constr_pass2__cycle_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_pass2__cycle_0_0);
	MR_init_label3(__Unify___transform_hlds__term_constr_pass2__cycle_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_pass2__cycle_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__cycle_0_0_i8);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__term_constr_pass2__cycle_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__cycle_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__cycle_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__cycle_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_pass2__cycle_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module24)
	MR_init_entry1(__Compare___transform_hlds__term_constr_pass2__cycle_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_pass2__cycle_0_0);
	MR_init_label4(__Compare___transform_hlds__term_constr_pass2__cycle_0_0,3,2,5,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_pass2__cycle_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__cycle_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__cycle_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__cycle_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_pass2__cycle_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__term_constr_pass2__cycle_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__cycle_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__cycle_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__cycle_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module25)
	MR_init_entry1(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_pass2__cycle_set_0_0);
	MR_init_label3(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_pass2__cycle_set_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___transform_hlds__term_constr_data__abstract_ppid_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module26)
	MR_init_entry1(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_pass2__cycle_set_0_0);
	MR_init_label4(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0,3,2,5,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0,2)
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
	MR_np_call_localret_ent(__Compare___transform_hlds__term_constr_data__abstract_ppid_0_0,
		__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__cycle_set_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module27)
	MR_init_entry1(__Unify___transform_hlds__term_constr_pass2__cycles_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_pass2__cycles_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_pass2__cycles_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
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


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module28)
	MR_init_entry1(__Compare___transform_hlds__term_constr_pass2__cycles_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_pass2__cycles_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_pass2__cycles_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
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

MR_decl_entry(__Unify___libs__polyhedron__polyhedron_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module29)
	MR_init_entry1(__Unify___transform_hlds__term_constr_pass2__edge_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_pass2__edge_0_0);
	MR_init_label7(__Unify___transform_hlds__term_constr_pass2__edge_0_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_pass2__edge_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__edge_0_0_i16);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		__Unify___transform_hlds__term_constr_pass2__edge_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__edge_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__edge_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0,
		__Unify___transform_hlds__term_constr_pass2__edge_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__edge_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__edge_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__term_constr_pass2__edge_0_0_i8);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__edge_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__edge_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__term_constr_pass2__edge_0_0_i10);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__edge_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__edge_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__term_constr_pass2__edge_0_0_i12);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__edge_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__edge_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___libs__polyhedron__polyhedron_0_0);
MR_def_label(__Unify___transform_hlds__term_constr_pass2__edge_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_pass2__edge_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__polyhedron__polyhedron_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module30)
	MR_init_entry1(__Compare___transform_hlds__term_constr_pass2__edge_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_pass2__edge_0_0);
	MR_init_label8(__Compare___transform_hlds__term_constr_pass2__edge_0_0,3,2,5,9,13,17,21,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_pass2__edge_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__edge_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__edge_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__edge_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_pass2__edge_0_0,2)
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
	MR_np_call_localret_ent(__Compare___transform_hlds__term_constr_data__abstract_ppid_0_0,
		__Compare___transform_hlds__term_constr_pass2__edge_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__edge_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__edge_0_0_i71);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___transform_hlds__term_constr_data__abstract_ppid_0_0,
		__Compare___transform_hlds__term_constr_pass2__edge_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__edge_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__edge_0_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__term_constr_pass2__edge_0_0_i13);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__edge_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__edge_0_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__term_constr_pass2__edge_0_0_i17);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__edge_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__edge_0_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__term_constr_pass2__edge_0_0_i21);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__edge_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__edge_0_0_i71);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___libs__polyhedron__polyhedron_0_0);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__edge_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module31)
	MR_init_entry1(__Unify___transform_hlds__term_constr_pass2__edges_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_pass2__edges_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_pass2__edges_0_0)
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


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module32)
	MR_init_entry1(__Compare___transform_hlds__term_constr_pass2__edges_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_pass2__edges_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_pass2__edges_0_0)
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


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module33)
	MR_init_entry1(__Unify___transform_hlds__term_constr_pass2__pass2_options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_pass2__pass2_options_0_0);
	MR_init_label1(__Unify___transform_hlds__term_constr_pass2__pass2_options_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_pass2__pass2_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_pass2__pass2_options_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_pass2__pass2_options_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module34)
	MR_init_entry1(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_pass2__pass2_options_0_0);
	MR_init_label2(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_pass2__pass2_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_pass2__pass2_options_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module35)
	MR_init_entry1(__Unify___transform_hlds__term_constr_pass2__scc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_pass2__scc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_constr_pass2__scc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
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


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module36)
	MR_init_entry1(__Compare___transform_hlds__term_constr_pass2__scc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_pass2__scc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_constr_pass2__scc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
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


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module37)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__149__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__149__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__prove_termination_in_scc__149__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__149__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module38)
	MR_init_entry1(transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0);
	MR_init_label2(transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__label_edges_in_scc__176__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0_i2);
MR_def_label(transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_pass2__find_edges_in_goal_13_0,
		transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0_i3);
MR_def_label(transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, edge);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module39)
	MR_init_entry1(transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__381__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__381__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__partition_edges__381__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__381__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(__Unify___transform_hlds__term_constr_data__abstract_ppid_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module40)
	MR_init_entry1(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0);
	MR_init_label2(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__search_for_cycles_3__414__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_ppid);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0_i3);
MR_def_label(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module41)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0);
	MR_init_label1(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__strict_decrease_around_loop__515__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0_i1);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_pass2_module42)
	MR_init_entry1(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_coeffs__541__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_constr_pass2_maybe_bunch_0(void)
{
	transform_hlds__term_constr_pass2_module0();
	transform_hlds__term_constr_pass2_module1();
	transform_hlds__term_constr_pass2_module2();
	transform_hlds__term_constr_pass2_module3();
	transform_hlds__term_constr_pass2_module4();
	transform_hlds__term_constr_pass2_module5();
	transform_hlds__term_constr_pass2_module6();
	transform_hlds__term_constr_pass2_module7();
	transform_hlds__term_constr_pass2_module8();
	transform_hlds__term_constr_pass2_module9();
	transform_hlds__term_constr_pass2_module10();
	transform_hlds__term_constr_pass2_module11();
	transform_hlds__term_constr_pass2_module12();
	transform_hlds__term_constr_pass2_module13();
	transform_hlds__term_constr_pass2_module14();
	transform_hlds__term_constr_pass2_module15();
	transform_hlds__term_constr_pass2_module16();
	transform_hlds__term_constr_pass2_module17();
	transform_hlds__term_constr_pass2_module18();
	transform_hlds__term_constr_pass2_module19();
	transform_hlds__term_constr_pass2_module20();
	transform_hlds__term_constr_pass2_module21();
	transform_hlds__term_constr_pass2_module22();
	transform_hlds__term_constr_pass2_module23();
	transform_hlds__term_constr_pass2_module24();
	transform_hlds__term_constr_pass2_module25();
	transform_hlds__term_constr_pass2_module26();
	transform_hlds__term_constr_pass2_module27();
	transform_hlds__term_constr_pass2_module28();
	transform_hlds__term_constr_pass2_module29();
	transform_hlds__term_constr_pass2_module30();
	transform_hlds__term_constr_pass2_module31();
	transform_hlds__term_constr_pass2_module32();
	transform_hlds__term_constr_pass2_module33();
	transform_hlds__term_constr_pass2_module34();
	transform_hlds__term_constr_pass2_module35();
	transform_hlds__term_constr_pass2_module36();
	transform_hlds__term_constr_pass2_module37();
	transform_hlds__term_constr_pass2_module38();
	transform_hlds__term_constr_pass2_module39();
}

static void mercury__transform_hlds__term_constr_pass2_maybe_bunch_1(void)
{
	transform_hlds__term_constr_pass2_module40();
	transform_hlds__term_constr_pass2_module41();
	transform_hlds__term_constr_pass2_module42();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_constr_pass2__init(void);
void mercury__transform_hlds__term_constr_pass2__init_type_tables(void);
void mercury__transform_hlds__term_constr_pass2__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_constr_pass2__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_constr_pass2__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__term_constr_pass2__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__term_constr_pass2__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_constr_pass2_maybe_bunch_0();
	mercury__transform_hlds__term_constr_pass2_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0,
		transform_hlds__term_constr_pass2__cycle_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0,
		transform_hlds__term_constr_pass2__cycle_set_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycles_0,
		transform_hlds__term_constr_pass2__cycles_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edge_0,
		transform_hlds__term_constr_pass2__edge_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edges_0,
		transform_hlds__term_constr_pass2__edges_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0,
		transform_hlds__term_constr_pass2__pass2_options_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_scc_0,
		transform_hlds__term_constr_pass2__scc_0_0);
	mercury__transform_hlds__term_constr_pass2__init_debugger();
}

void mercury__transform_hlds__term_constr_pass2__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_cycles_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edge_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_edges_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_scc_0);
	}
}


void mercury__transform_hlds__term_constr_pass2__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_constr_pass2__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__transform_hlds__term_constr_pass2);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_constr_pass2__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__term_constr_pass2__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
