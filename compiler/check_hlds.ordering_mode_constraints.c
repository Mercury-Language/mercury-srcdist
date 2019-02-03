/*
** Automatically generated from `ordering_mode_constraints.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__ordering_mode_constraints__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 539 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.ordering_mode_constraints.c"
#line 547 "../library/io.int"
#include "string.mh"

#line 32 "check_hlds.ordering_mode_constraints.c"
#line 231 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 36 "check_hlds.ordering_mode_constraints.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "check_hlds.ordering_mode_constraints.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "check_hlds.ordering_mode_constraints.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "check_hlds.ordering_mode_constraints.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "check_hlds.ordering_mode_constraints.c"
#line 53 "check_hlds.ordering_mode_constraints.c"
#include "check_hlds.ordering_mode_constraints.mh"

#line 56 "check_hlds.ordering_mode_constraints.c"
#line 57 "check_hlds.ordering_mode_constraints.c"
#ifndef CHECK_HLDS__ORDERING_MODE_CONSTRAINTS_DECL_GUARD
#define CHECK_HLDS__ORDERING_MODE_CONSTRAINTS_DECL_GUARD

#line 61 "check_hlds.ordering_mode_constraints.c"
#line 62 "check_hlds.ordering_mode_constraints.c"

#endif
#line 65 "check_hlds.ordering_mode_constraints.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_conjunct_id_0,
	mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0,
	mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failures_0,
	mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0,
	mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraints_0,
	mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0,
	mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_prog_var_at_conjuncts_map_0;
MR_decl_label1(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0, 2)
MR_decl_label5(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0, 3,5,7,11,1)
MR_decl_label10(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0, 3,2,6,8,9,11,12,14,16,17)
MR_decl_label2(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0, 19,1)
MR_decl_label10(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0, 115,2,3,7,10,13,17,23,26,30)
MR_decl_label6(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0, 35,34,37,28,40,125)
MR_decl_label1(check_hlds__ordering_mode_constraints__dump_goal_paths_4_0, 3)
MR_decl_label10(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0, 2,3,4,5,8,11,15,16,17,20)
MR_decl_label4(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0, 21,22,24,19)
MR_decl_label5(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0, 2,3,10,11,12)
MR_decl_label2(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0, 2,1)
MR_decl_label10(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0, 172,8,6,13,16,17,18,19,21,24)
MR_decl_label10(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0, 26,4,31,29,35,37,39,34,43,42)
MR_decl_label5(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0, 47,46,50,2,1)
MR_decl_label2(check_hlds__ordering_mode_constraints__goal_reordering_5_0, 2,1)
MR_decl_label2(check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0, 2,3)
MR_decl_label2(check_hlds__ordering_mode_constraints__minimum_reordering_2_0, 2,3)
MR_decl_label10(check_hlds__ordering_mode_constraints__pred_reordering_5_0, 2,5,4,9,10,11,12,15,17,19)
MR_decl_label1(check_hlds__ordering_mode_constraints__pred_reordering_5_0, 20)
MR_decl_label10(check_hlds__ordering_mode_constraints__proc_reordering_8_0, 2,3,4,5,6,7,12,13,10,16)
MR_decl_label8(check_hlds__ordering_mode_constraints__proc_reordering_8_0, 9,21,20,22,18,28,31,32)
MR_decl_label2(check_hlds__ordering_mode_constraints__produced_at_path_3_0, 3,4)
MR_decl_label4(check_hlds__ordering_mode_constraints__scc_reordering_5_0, 3,5,7,6)
MR_decl_label9(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0, 3,4,7,9,12,13,6,16,1)
MR_decl_label1(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0, 1)
MR_decl_label1(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0, 1)
MR_decl_label1(fn__check_hlds__ordering_mode_constraints__ordering_init_1_0, 2)
MR_decl_label4(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0, 5,24,9,1)
MR_decl_label2(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0, 4,1)
MR_decl_label2(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0, 6,1)
MR_decl_label10(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0, 3,2,37,38,5,12,15,10,21,86)
MR_decl_label4(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0, 3,2,5,21)
MR_decl_label4(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0, 3,2,5,21)
MR_def_extern_entry(check_hlds__ordering_mode_constraints__mode_reordering_5_0)
MR_def_extern_entry(check_hlds__ordering_mode_constraints__dump_goal_paths_4_0)
MR_def_extern_entry(fn__check_hlds__ordering_mode_constraints__ordering_init_1_0)
MR_def_extern_entry(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0)
MR_def_extern_entry(check_hlds__ordering_mode_constraints__add_lt_constraint_4_0)
MR_decl_static(fn__check_hlds__ordering_mode_constraints__this_file_0_0)
MR_decl_static(check_hlds__ordering_mode_constraints__scc_reordering_5_0)
MR_decl_static(check_hlds__ordering_mode_constraints__pred_reordering_5_0)
MR_decl_static(check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_0)
MR_decl_static(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0)
MR_decl_static(check_hlds__ordering_mode_constraints__minimum_reordering_2_0)
MR_decl_static(check_hlds__ordering_mode_constraints__goal_reordering_5_0)
MR_decl_static(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0)
MR_decl_static(check_hlds__ordering_mode_constraints__proc_reordering_8_0)
MR_decl_static(check_hlds__ordering_mode_constraints__insert_lt_constraints_4_0)
MR_decl_static(check_hlds__ordering_mode_constraints__insert_lt_constraint_4_0)
MR_decl_static(check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0)
MR_decl_static(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0)
MR_decl_static(check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_0)
MR_decl_static(check_hlds__ordering_mode_constraints__produced_at_path_3_0)
MR_decl_static(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0)
MR_decl_static(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0)
MR_decl_static(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0)
MR_def_extern_entry(__Unify___check_hlds__ordering_mode_constraints__conjunct_id_0_0)
MR_def_extern_entry(__Compare___check_hlds__ordering_mode_constraints__conjunct_id_0_0)
MR_decl_static(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0)
MR_decl_static(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0)
MR_decl_static(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0)
MR_decl_static(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0)
MR_def_extern_entry(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0)
MR_def_extern_entry(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0)
MR_def_extern_entry(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0)
MR_def_extern_entry(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0)
MR_def_extern_entry(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0)
MR_decl_static(__Unify___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0)
MR_decl_static(__Compare___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0)
MR_decl_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__435__1_1_0)
MR_decl_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0)
MR_decl_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_expr_reordering__369__1_3_0)
MR_decl_static(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0)
MR_decl_static(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0)
MR_decl_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__516__1_5_0)
MR_decl_static(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__677__1_1_0)
MR_decl_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__683__1_2_0)
MR_decl_static(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__dump_pred_goal_paths__733__1_1_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
MR_CTOR_ADDR(bimap, bimap, 2),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var),
MR_COMMON(1,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,0),
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,12),
MR_COMMON(1,13)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,1,10),
MR_TAG_COMMON(0,1,11)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
static const struct mercury_type_1 mercury_common_1[21] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_analysis_failure)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_analysis_failure)
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
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var)
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
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var)
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
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
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
MR_TAG_COMMON(1,10,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,11,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,11,1),
MR_TAG_COMMON(1,1,18)
}
},
{
{
MR_TAG_COMMON(3,11,3),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__mode_reordering_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_4;
static const struct mercury_type_2 mercury_common_2[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__mode_reordering_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_COMMON(1,8),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_COMMON(0,5),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_paths_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;
static const struct mercury_type_3 mercury_common_3[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_paths_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var),
MR_INT_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_paths_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__insert_lt_constraints_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0;
static const struct mercury_type_4 mercury_common_4[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_paths_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,3),
MR_INT_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__insert_lt_constraints_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, ordering_constraints_info),
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, ordering_constraints_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_1;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,14),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_4;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_4,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint)
},
};

static const struct mercury_type_7 mercury_common_7[4] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__435__1_1_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__677__1_1_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__dump_pred_goal_paths__733__1_1_0),
0
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__pred_reordering_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__pred_reordering_5_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_COMMON(0,1),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_0_1;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_COMMON(1,8),
MR_COMMON(1,9),
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, ordering_constraints_info),
MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, ordering_constraints_info)
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_string_const("", 0)
},
};

static const struct mercury_type_11 mercury_common_11[4] =
{
{
4,
MR_string_const("Goal paths for", 14)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("mode", 4)
},
{
3,
MR_string_const(":", 1)
},
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_conjunct_id_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__ordering_mode_constraints__conjunct_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__ordering_mode_constraints__conjunct_id_0_0)),
	"check_hlds.ordering_mode_constraints",
	"conjunct_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

const MR_ConstString mercury_data_check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_0[] = {
	"failing_predicate"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0 = {
	"no_producer_consumer_sols",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_0,
	mercury_data_check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_1[] = {
	"caller",
	"scc"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1 = {
	"mode_inference_failed",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_1,
	mercury_data_check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2 = {
	"conjunct_ordering_failed",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_0[] = {
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_1[] = {
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_2[] = {
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2

};

const MR_DuPtagLayout mercury_data_check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_analysis_failure_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__ordering_mode_constraints__du_name_ordered_mode_analysis_failure_0[] = {
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2,
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1,
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0
};

const MR_Integer mercury_data_check_hlds__ordering_mode_constraints__functor_number_map_mode_analysis_failure_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0)),
	"check_hlds.ordering_mode_constraints",
	"mode_analysis_failure",
	{ (void *)mercury_data_check_hlds__ordering_mode_constraints__du_name_ordered_mode_analysis_failure_0 },
	{ (void *)mercury_data_check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_analysis_failure_0 },
	3,
	4,
	mercury_data_check_hlds__ordering_mode_constraints__functor_number_map_mode_analysis_failure_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failures_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0)),
	"check_hlds.ordering_mode_constraints",
	"mode_analysis_failures",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__ordering_mode_constraints__field_types_mode_ordering_constraint_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_check_hlds__ordering_mode_constraints__field_names_mode_ordering_constraint_0_0[] = {
	"first",
	"second"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0 = {
	"lt",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__ordering_mode_constraints__field_types_mode_ordering_constraint_0_0,
	mercury_data_check_hlds__ordering_mode_constraints__field_names_mode_ordering_constraint_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_mode_ordering_constraint_0_0[] = {
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_ordering_constraint_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_mode_ordering_constraint_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__ordering_mode_constraints__du_name_ordered_mode_ordering_constraint_0[] = {
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0
};

const MR_Integer mercury_data_check_hlds__ordering_mode_constraints__functor_number_map_mode_ordering_constraint_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0)),
	"check_hlds.ordering_mode_constraints",
	"mode_ordering_constraint",
	{ (void *)mercury_data_check_hlds__ordering_mode_constraints__du_name_ordered_mode_ordering_constraint_0 },
	{ (void *)mercury_data_check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_ordering_constraint_0 },
	1,
	4,
	mercury_data_check_hlds__ordering_mode_constraints__functor_number_map_mode_ordering_constraint_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraints_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0)),
	"check_hlds.ordering_mode_constraints",
	"mode_ordering_constraints",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__ordering_mode_constraints__field_types_ordering_constraints_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0
};

const MR_ConstString mercury_data_check_hlds__ordering_mode_constraints__field_names_ordering_constraints_info_0_0[] = {
	"num_conjuncts",
	"constraints"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0 = {
	"ordering_constraints_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__ordering_mode_constraints__field_types_ordering_constraints_info_0_0,
	mercury_data_check_hlds__ordering_mode_constraints__field_names_ordering_constraints_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_ordering_constraints_info_0_0[] = {
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__ordering_mode_constraints__du_ptag_ordered_ordering_constraints_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__ordering_mode_constraints__du_stag_ordered_ordering_constraints_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__ordering_mode_constraints__du_name_ordered_ordering_constraints_info_0[] = {
	&mercury_data_check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0
};

const MR_Integer mercury_data_check_hlds__ordering_mode_constraints__functor_number_map_ordering_constraints_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0)),
	"check_hlds.ordering_mode_constraints",
	"ordering_constraints_info",
	{ (void *)mercury_data_check_hlds__ordering_mode_constraints__du_name_ordered_ordering_constraints_info_0 },
	{ (void *)mercury_data_check_hlds__ordering_mode_constraints__du_ptag_ordered_ordering_constraints_info_0 },
	1,
	4,
	mercury_data_check_hlds__ordering_mode_constraints__functor_number_map_ordering_constraints_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_prog_var_at_conjuncts_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0)),
	"check_hlds.ordering_mode_constraints",
	"prog_var_at_conjuncts_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_3 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"add_lt_constraint",
4,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
570,
"d1;c9;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_2 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"get_position_in_conj",
2,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
568,
"d1;c9;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"produced_at_path",
3,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
560,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_4 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"dump_goal_goal_paths",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
810,
"d1;c18;d11;c2;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_3 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"dump_goal_goal_paths",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
798,
"d1;c18;d8;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_2 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"dump_goal_goal_paths",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
791,
"d1;c18;d6;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"dump_goal_goal_paths",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
788,
"d1;c18;d5;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_3 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"dump_proc_goal_paths",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
738,
"d1;c29;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"dump_goal_goal_paths",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
735,
"d1;c29;d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_733",
2,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
733,
"d1;c29;d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_516",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
516,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__insert_lt_constraints_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"insert_lt_constraint",
4,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
473,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_5 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"goal_reordering",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
380,
"d1;c6;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_4 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"goal_reordering",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
372,
"d1;c6;d2;c2;d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_3 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_369",
3,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
369,
"d1;c6;d2;c2;d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_2 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"make_conjunct_nonlocal_repvars",
4,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
503,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"goal_reordering",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
375,
"d1;c6;d2;c2;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_2 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_683",
2,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
683,
"d1;c7;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_677",
2,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
677,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"prog_var_ordering_constraints",
6,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
544,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__pred_reordering_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"proc_reordering",
8,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
235,
"d1;c7;e;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_3 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"pred_reordering",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
208,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_2 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_194",
2,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
194,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__scc_reordering_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"module_info_pred_status_is_imported",
2,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
191,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_4 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_435",
1,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
435,
"d1;c4;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_3 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"insert_lt_constraints",
4,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
461,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_2 = {
{
MR_FUNCTION,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_455",
3,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
455,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"lambda_ordering_mode_constraints_m_453",
3,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
453,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_paths_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"dump_pred_goal_paths",
4,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
703,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__dump_goal_paths_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"module_info_pred_status_is_imported",
2,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
701,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__ordering_mode_constraints__mode_reordering_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.ordering_mode_constraints",
"check_hlds.ordering_mode_constraints",
"scc_reordering",
5,
0
},
"check_hlds.ordering_mode_constraints",
"ordering_mode_constraints.m",
178,
"d1;c6;"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module0)
	MR_init_entry1(check_hlds__ordering_mode_constraints__mode_reordering_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__mode_reordering_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_reordering'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__ordering_mode_constraints__mode_reordering_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__scc_reordering_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0);
MR_decl_entry(list__filter_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module1)
	MR_init_entry1(check_hlds__ordering_mode_constraints__dump_goal_paths_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__dump_goal_paths_4_0);
	MR_init_label1(check_hlds__ordering_mode_constraints__dump_goal_paths_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_goal_paths'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__ordering_mode_constraints__dump_goal_paths_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__ordering_mode_constraints__dump_goal_paths_4_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_paths_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module2)
	MR_init_entry1(fn__check_hlds__ordering_mode_constraints__ordering_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__ordering_mode_constraints__ordering_init_1_0);
	MR_init_label1(fn__check_hlds__ordering_mode_constraints__ordering_init_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ordering_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__ordering_mode_constraints__ordering_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__check_hlds__ordering_mode_constraints__ordering_init_1_0_i2);
MR_def_label(fn__check_hlds__ordering_mode_constraints__ordering_init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__set__filter_map_2_0);
MR_decl_entry(fn__set__insert_2_0);
MR_decl_entry(set__fold_4_0);
MR_decl_entry(fn__set__filter_2_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(fn__set__union_2_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module3)
	MR_init_entry1(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0);
	MR_init_label10(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,3,2,6,8,9,11,12,14,16,17)
	MR_init_label2(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_ordering_constraint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(set__member_2_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i2);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tfield(0, MR_sv(2), 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__set__filter_map_2_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i6);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__filter_map_2_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i8);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i9);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__insert_lt_constraints_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i11);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i12);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i14);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__filter_2_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i16);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i17);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__set__union_2_0,
		check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0_i19);
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0,1)
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


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module4)
	MR_init_entry1(check_hlds__ordering_mode_constraints__add_lt_constraint_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__add_lt_constraint_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_lt_constraint'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__ordering_mode_constraints__add_lt_constraint_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(check_hlds__ordering_mode_constraints__add_ordering_constraint_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module5)
	MR_init_entry1(fn__check_hlds__ordering_mode_constraints__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__ordering_mode_constraints__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__ordering_mode_constraints__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ordering_mode_constraints.m", 27);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module6)
	MR_init_entry1(check_hlds__ordering_mode_constraints__scc_reordering_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__scc_reordering_5_0);
	MR_init_label4(check_hlds__ordering_mode_constraints__scc_reordering_5_0,3,5,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'scc_reordering'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__scc_reordering_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__ordering_mode_constraints__scc_reordering_5_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__scc_reordering_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__ordering_mode_constraints__scc_reordering_5_0_i5);
MR_def_label(check_hlds__ordering_mode_constraints__scc_reordering_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__scc_reordering_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__pred_reordering_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(check_hlds__ordering_mode_constraints__scc_reordering_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ordering_mode_constraints.m", 27);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("mode inference", 14);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		check_hlds__ordering_mode_constraints__scc_reordering_5_0_i6);
MR_def_label(check_hlds__ordering_mode_constraints__scc_reordering_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_infer_modes_1_0);
MR_decl_entry(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
MR_decl_entry(fn__map__lookup_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_all_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module7)
	MR_init_entry1(check_hlds__ordering_mode_constraints__pred_reordering_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__pred_reordering_5_0);
	MR_init_label10(check_hlds__ordering_mode_constraints__pred_reordering_5_0,2,5,4,9,10,11,12,15,17,19)
	MR_init_label1(check_hlds__ordering_mode_constraints__pred_reordering_5_0,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_reordering'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__pred_reordering_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_infer_modes_1_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i5);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__pred_reordering_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("ordering_mode_constraints.m", 27);
	MR_r2 = (MR_Word) MR_string_const("mode inference constraints", 26);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i9);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i10);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i11);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i12);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__proc_reordering_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r5 = MR_tempr3;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i15);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__pred_reordering_5_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i19);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mode checking failure: ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__ordering_mode_constraints__pred_reordering_5_0_i20);
MR_def_label(check_hlds__ordering_mode_constraints__pred_reordering_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ordering_mode_constraints.m", 27);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_3);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module8)
	MR_init_entry1(check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conjunct_ordering_constraints'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, ordering_constraints_info);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(map__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__map_2_0);
MR_decl_entry(fn__set__difference_2_0);
MR_decl_entry(set__remove_least_3_0);
MR_decl_entry(set__remove_3_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module9)
	MR_init_entry1(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0);
	MR_init_label9(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,3,4,7,9,12,13,6,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'topological_sort_min_reordering'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__map_2_0,
		check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i4);
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__remove_least_3_0,
		check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i7);
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__remove_3_0,
		check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i9);
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__683__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i12);
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,
		check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i13);
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i16);
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0,1)
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

MR_decl_entry(fn__f_108_105_115_116_95_95_46_46_2_0);
MR_decl_entry(fn__set__from_sorted_list_1_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module10)
	MR_init_entry1(check_hlds__ordering_mode_constraints__minimum_reordering_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__minimum_reordering_2_0);
	MR_init_label2(check_hlds__ordering_mode_constraints__minimum_reordering_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'minimum_reordering'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__minimum_reordering_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		check_hlds__ordering_mode_constraints__minimum_reordering_2_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__minimum_reordering_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_sorted_list_1_0,
		check_hlds__ordering_mode_constraints__minimum_reordering_2_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__minimum_reordering_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module11)
	MR_init_entry1(check_hlds__ordering_mode_constraints__goal_reordering_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__goal_reordering_5_0);
	MR_init_label2(check_hlds__ordering_mode_constraints__goal_reordering_5_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_reordering'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__goal_reordering_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_r4 = MR_tfield(0, MR_r4, 0);
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,
		check_hlds__ordering_mode_constraints__goal_reordering_5_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__goal_reordering_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__ordering_mode_constraints__goal_reordering_5_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_3_2);
MR_decl_entry(fn__multi_map__init_0_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module12)
	MR_init_entry1(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0);
	MR_init_label10(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,172,8,6,13,16,17,18,19,21,24)
	MR_init_label10(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,26,4,31,29,35,37,39,34,43,42)
	MR_init_label5(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,47,46,50,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_reordering'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_r4) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r4, 0) == (MR_Integer) 0)) || (MR_tag(MR_r4) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_r4) == MR_mktag((MR_Integer) 1))) || (MR_tag(MR_r4) == MR_mktag((MR_Integer) 0))))) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i172);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__goal_reordering_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_r2;
	MR_tfield(0, MR_tempr2, 5) = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_r4, 2);
	}
	MR_np_call_localret_ent(list__map_3_2,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i8);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(3, MR_r4, 2);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	}
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i13);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i16);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i17);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__ordering_mode_constraints__ordering_init_1_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i18);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i19);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__minimum_reordering_2_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i21);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_expr_reordering__369__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i24);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__goal_reordering_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_2,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i26);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__goal_reordering_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_r4, 1);
	}
	MR_np_call_localret_ent(list__map_3_2,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i31);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_r4 = MR_tfield(3, MR_r4, 2);
	}
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__goal_reordering_5_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i35);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__goal_reordering_5_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i37);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__goal_reordering_5_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i39);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i42);
	}
	MR_r4 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__goal_reordering_5_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i43);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i46);
	}
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_r4 = MR_tfield(3, MR_r4, 2);
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__goal_reordering_5_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i47);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i50);
	}
	MR_r1 = (MR_Word) MR_string_const("ordering_mode_constraints.m", 27);
	MR_r2 = (MR_Word) MR_string_const("goal_expr_reordering: NYI: shorthand", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ordering_mode_constraints.m", 27);
	MR_r2 = (MR_Word) MR_string_const("goal_expr_reordering: switch", 28);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_proc_info_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_0);
MR_decl_entry(fn__check_hlds__mcsolver__new_prep_cstrts_0_0);
MR_decl_entry(check_hlds__mcsolver__prepare_abstract_constraints_3_0);
MR_decl_entry(fn__check_hlds__mcsolver__make_solver_cstrts_1_0);
MR_decl_entry(check_hlds__mcsolver__solve_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(list__cons_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module13)
	MR_init_entry1(check_hlds__ordering_mode_constraints__proc_reordering_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__proc_reordering_8_0);
	MR_init_label10(check_hlds__ordering_mode_constraints__proc_reordering_8_0,2,3,4,5,6,7,12,13,10,16)
	MR_init_label8(check_hlds__ordering_mode_constraints__proc_reordering_8_0,9,21,20,22,18,28,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_reordering'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__proc_reordering_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_proc_info_3_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i4);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__mcsolver__new_prep_cstrts_0_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i5);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mcsolver__prepare_abstract_constraints_3_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i6);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__mcsolver__make_solver_cstrts_1_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i7);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__ordering_mode_constraints__proc_reordering_8_0_i10);
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mcsolver__solve_2_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i12);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__ordering_mode_constraints__goal_expr_reordering_5_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i13);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(9);
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(check_hlds__ordering_mode_constraints__proc_reordering_8_0_i16);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(check_hlds__ordering_mode_constraints__proc_reordering_8_0_i9);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i31);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__ordering_mode_constraints__proc_reordering_8_0_i20);
	MR_np_call_localret_ent(check_hlds__mcsolver__solve_2_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i21);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(check_hlds__ordering_mode_constraints__proc_reordering_8_0_i22);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(check_hlds__ordering_mode_constraints__proc_reordering_8_0_i18);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_analysis_failure);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i28);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_analysis_failure);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i28);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i31);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		check_hlds__ordering_mode_constraints__proc_reordering_8_0_i32);
MR_def_label(check_hlds__ordering_mode_constraints__proc_reordering_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module14)
	MR_init_entry1(check_hlds__ordering_mode_constraints__insert_lt_constraints_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__insert_lt_constraints_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_lt_constraints'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__insert_lt_constraints_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__insert_lt_constraint_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(set__fold_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svset__insert_3_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module15)
	MR_init_entry1(check_hlds__ordering_mode_constraints__insert_lt_constraint_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__insert_lt_constraint_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_lt_constraint'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__insert_lt_constraint_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(svset__insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module16)
	MR_init_entry1(check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0);
	MR_init_label2(check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_conjunct_nonlocal_repvars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__516__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__fold_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_get_last_1_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module17)
	MR_init_entry1(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__get_position_in_conj_2_0);
	MR_init_label2(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_position_in_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_get_last_1_0,
		check_hlds__ordering_mode_constraints__get_position_in_conj_2_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__ordering_mode_constraints__get_position_in_conj_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module18)
	MR_init_entry1(check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prog_var_ordering_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bimap__lookup_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module19)
	MR_init_entry1(check_hlds__ordering_mode_constraints__produced_at_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__produced_at_path_3_0);
	MR_init_label2(check_hlds__ordering_mode_constraints__produced_at_path_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'produced_at_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__produced_at_path_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,15);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__bimap__lookup_2_0,
		check_hlds__ordering_mode_constraints__produced_at_path_3_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__produced_at_path_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__ordering_mode_constraints__produced_at_path_3_0_i4);
MR_def_label(check_hlds__ordering_mode_constraints__produced_at_path_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(fn__map__keys_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(parse_tree__error_util__write_error_pieces_plain_4_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module20)
	MR_init_entry1(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0);
	MR_init_label10(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,2,3,4,5,8,11,15,16,17,20)
	MR_init_label4(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,21,22,24,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_pred_goal_paths'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__keys_1_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i4);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i5);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,16);
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_4_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i8);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,17);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i11);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,19);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i15);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i16);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_4_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i17);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i20);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i21);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i22);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0_i24);
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
MR_decl_entry(parse_tree__error_util__write_error_pieces_maybe_with_context_6_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module21)
	MR_init_entry1(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0);
	MR_init_label10(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,115,2,3,7,10,13,17,23,26,30)
	MR_init_label6(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,35,34,37,28,40,125)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_goal_goal_paths'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,18);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_maybe_with_context_6_0,
		check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i7);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_sv(3),3,0)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i125);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tfield(3, MR_sv(3), 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,2)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tfield(3, MR_sv(3), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),2)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i125);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,6)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr5, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr5, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(3, MR_tempr5, 2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(2,10);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr4, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr4, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,4)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_tfield(3, MR_sv(3), 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i115);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i125);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,5)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_tfield(3, MR_sv(3), 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i115);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,7)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_sv(3), 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i30);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 4);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_tempr1, 5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(2,11);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i34);
	}
	MR_np_call_localret_ent(fn__check_hlds__ordering_mode_constraints__this_file_0_0,
		check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i35);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__ordering_mode_constraints__this_file_0_0,
		check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i37);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("try_goal", 8);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i125);
	}
	MR_np_call_localret_ent(fn__check_hlds__ordering_mode_constraints__this_file_0_0,
		check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0_i40);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(fn__string__from_int_1_0);
MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module22)
	MR_init_entry1(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0);
	MR_init_label5(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0,2,3,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_proc_goal_paths'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0_i3);
MR_def_label(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,20);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,11,2);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_4_0,
		check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0_i10);
MR_def_label(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0_i11);
MR_def_label(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0_i12);
MR_def_label(check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module23)
	MR_init_entry1(__Unify___check_hlds__ordering_mode_constraints__conjunct_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__ordering_mode_constraints__conjunct_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__ordering_mode_constraints__conjunct_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module24)
	MR_init_entry1(__Compare___check_hlds__ordering_mode_constraints__conjunct_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__ordering_mode_constraints__conjunct_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__ordering_mode_constraints__conjunct_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module25)
	MR_init_entry1(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0);
	MR_init_label4(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,5,24,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
	}
MR_def_label(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	MR_r3 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module26)
	MR_init_entry1(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0);
	MR_init_label10(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,3,2,37,38,5,12,15,10,21,86)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i2);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i38);
	}
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i38);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i15);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i86);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module27)
	MR_init_entry1(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_analysis_failure);
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


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module28)
	MR_init_entry1(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_analysis_failure);
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


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module29)
	MR_init_entry1(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0);
	MR_init_label2(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module30)
	MR_init_entry1(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0);
	MR_init_label4(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0_i2);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0_i5);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module31)
	MR_init_entry1(__Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
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


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module32)
	MR_init_entry1(__Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
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

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module33)
	MR_init_entry1(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0);
	MR_init_label2(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0_i6);
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
		MR_GOTO_LAB(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
	}
MR_def_label(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module34)
	MR_init_entry1(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0);
	MR_init_label4(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0_i2);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0_i5);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, mode_ordering_constraint);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module35)
	MR_init_entry1(__Unify___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
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

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module36)
	MR_init_entry1(__Compare___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module37)
	MR_init_entry1(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__435__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__435__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__add_ordering_constraint__435__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__435__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_r2 == MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module38)
	MR_init_entry1(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0);
	MR_init_label1(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__scc_reordering__194__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0_i2);
MR_def_label(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__194__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_infer_modes_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index1_det_3_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module39)
	MR_init_entry1(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_expr_reordering__369__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_expr_reordering__369__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__goal_expr_reordering__369__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_expr_reordering__369__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__index1_det_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module40)
	MR_init_entry1(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0);
	MR_init_label1(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__constraint_transitive_closure__453__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if ((MR_tempr1 != MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__453__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module41)
	MR_init_entry1(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0);
	MR_init_label1(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__constraint_transitive_closure__455__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((MR_tempr1 != MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__455__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(multi_map__set_4_0);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module42)
	MR_init_entry1(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__516__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__516__1_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__make_conjunct_nonlocal_repvars__516__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__516__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(multi_map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module43)
	MR_init_entry1(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__677__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__677__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__topological_sort_min_reordering__677__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__677__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module44)
	MR_init_entry1(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__683__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__683__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__topological_sort_min_reordering__683__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__683__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_tempr1 != MR_r1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module45)
	MR_init_entry1(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__dump_pred_goal_paths__733__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__dump_pred_goal_paths__733__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__dump_pred_goal_paths__733__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__ordering_mode_constraints__IntroducedFrom__func__dump_pred_goal_paths__733__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(check_hlds__ordering_mode_constraints_module46)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0);
	MR_init_label5(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0,3,5,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__prog_var_ordering_constraints__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__produced_at_path_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_i5);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_get_last_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_i7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_2,
		f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__ordering_mode_constraints__add_lt_constraint_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__ordering_mode_constraints, ordering_constraints_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_111_114_100_101_114_105_110_103_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0,1)
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

static void mercury__check_hlds__ordering_mode_constraints_maybe_bunch_0(void)
{
	check_hlds__ordering_mode_constraints_module0();
	check_hlds__ordering_mode_constraints_module1();
	check_hlds__ordering_mode_constraints_module2();
	check_hlds__ordering_mode_constraints_module3();
	check_hlds__ordering_mode_constraints_module4();
	check_hlds__ordering_mode_constraints_module5();
	check_hlds__ordering_mode_constraints_module6();
	check_hlds__ordering_mode_constraints_module7();
	check_hlds__ordering_mode_constraints_module8();
	check_hlds__ordering_mode_constraints_module9();
	check_hlds__ordering_mode_constraints_module10();
	check_hlds__ordering_mode_constraints_module11();
	check_hlds__ordering_mode_constraints_module12();
	check_hlds__ordering_mode_constraints_module13();
	check_hlds__ordering_mode_constraints_module14();
	check_hlds__ordering_mode_constraints_module15();
	check_hlds__ordering_mode_constraints_module16();
	check_hlds__ordering_mode_constraints_module17();
	check_hlds__ordering_mode_constraints_module18();
	check_hlds__ordering_mode_constraints_module19();
	check_hlds__ordering_mode_constraints_module20();
	check_hlds__ordering_mode_constraints_module21();
	check_hlds__ordering_mode_constraints_module22();
	check_hlds__ordering_mode_constraints_module23();
	check_hlds__ordering_mode_constraints_module24();
	check_hlds__ordering_mode_constraints_module25();
	check_hlds__ordering_mode_constraints_module26();
	check_hlds__ordering_mode_constraints_module27();
	check_hlds__ordering_mode_constraints_module28();
	check_hlds__ordering_mode_constraints_module29();
	check_hlds__ordering_mode_constraints_module30();
	check_hlds__ordering_mode_constraints_module31();
	check_hlds__ordering_mode_constraints_module32();
	check_hlds__ordering_mode_constraints_module33();
	check_hlds__ordering_mode_constraints_module34();
	check_hlds__ordering_mode_constraints_module35();
	check_hlds__ordering_mode_constraints_module36();
	check_hlds__ordering_mode_constraints_module37();
	check_hlds__ordering_mode_constraints_module38();
	check_hlds__ordering_mode_constraints_module39();
}

static void mercury__check_hlds__ordering_mode_constraints_maybe_bunch_1(void)
{
	check_hlds__ordering_mode_constraints_module40();
	check_hlds__ordering_mode_constraints_module41();
	check_hlds__ordering_mode_constraints_module42();
	check_hlds__ordering_mode_constraints_module43();
	check_hlds__ordering_mode_constraints_module44();
	check_hlds__ordering_mode_constraints_module45();
	check_hlds__ordering_mode_constraints_module46();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__ordering_mode_constraints__init(void);
void mercury__check_hlds__ordering_mode_constraints__init_type_tables(void);
void mercury__check_hlds__ordering_mode_constraints__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__ordering_mode_constraints__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__ordering_mode_constraints__init_complexity_procs(void);
#endif

void mercury__check_hlds__ordering_mode_constraints__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__ordering_mode_constraints_maybe_bunch_0();
	mercury__check_hlds__ordering_mode_constraints_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_conjunct_id_0,
		check_hlds__ordering_mode_constraints__conjunct_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0,
		check_hlds__ordering_mode_constraints__mode_analysis_failure_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failures_0,
		check_hlds__ordering_mode_constraints__mode_analysis_failures_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0,
		check_hlds__ordering_mode_constraints__mode_ordering_constraint_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraints_0,
		check_hlds__ordering_mode_constraints__mode_ordering_constraints_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0,
		check_hlds__ordering_mode_constraints__ordering_constraints_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_prog_var_at_conjuncts_map_0,
		check_hlds__ordering_mode_constraints__prog_var_at_conjuncts_map_0_0);
	mercury__check_hlds__ordering_mode_constraints__init_debugger();
}

void mercury__check_hlds__ordering_mode_constraints__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_conjunct_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failures_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraints_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__ordering_mode_constraints__type_ctor_info_prog_var_at_conjuncts_map_0);
	}
}


void mercury__check_hlds__ordering_mode_constraints__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__ordering_mode_constraints__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__ordering_mode_constraints);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__ordering_mode_constraints__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
