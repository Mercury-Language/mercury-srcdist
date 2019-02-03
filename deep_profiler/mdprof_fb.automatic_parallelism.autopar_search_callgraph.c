/*
** Automatically generated from `autopar_search_callgraph.m'
** by the Mercury compiler,
** version 11.07-beta-2011-12-16, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 284 "profile.int"
#include "profile.mh"

#line 28 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 248 "../library/array.int"
#include "array.mh"

#line 32 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 40 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 44 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 48 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 56 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 57 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#include "mdprof_fb.automatic_parallelism.autopar_search_callgraph.mh"

#line 60 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 61 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#ifndef MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_SEARCH_CALLGRAPH_DECL_GUARD
#define MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_SEARCH_CALLGRAPH_DECL_GUARD

#line 65 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"
#line 66 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"

#endif
#line 69 "mdprof_fb.automatic_parallelism.autopar_search_callgraph.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0;
MR_decl_label3(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0, 4,6,2)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0, 3,5,23,7,9,10,11,12,13,14)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0, 15)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0, 2,3,4,7,12,14)
MR_decl_label7(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0, 5,6,7,10,2,25,26)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0, 2,5,6,7,8,9,4,3,13,15)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0, 14,28,29,30,31,34,37,38,40,41)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0, 44,45,47,48)
MR_decl_label8(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0, 2,3,4,9,10,6,11,12)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0, 2,3,4,8,13,7,14,15,20,17)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0, 23,24,27,30,31,36,33,39,40,41)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0, 44,45,46,47,48,49,51,52,55,56)
MR_decl_label8(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0, 57,61,64,67,59,69,71,73)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0, 2)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0, 5,8,7,2,12)
MR_decl_label9(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0, 3,4,6,9,12,15,5,17,16)
MR_decl_label3(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0, 23,6,9)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0, 2,3,4,9,11,5)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0, 4,3)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0, 2,6,8,4)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0, 2,3,4,8)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0, 5,2)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0, 2,3,6,11,13,15,18,19,20,21)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0, 8)
MR_decl_label1(fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0, 2)
MR_decl_label5(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0, 4,6,8,12,1)
MR_decl_label7(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0, 3,2,5,9,13,17,45)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions__107__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__236__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__2_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__2_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__update_parallelism_available__382__1_3_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_lazy__type_ctor_info_lazy_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_lazy__type_ctor_info_lazy_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;
static const struct mercury_type_0 mercury_common_0[29] =
{
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_proc),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(message, message)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_proc),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(message, message)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_proc),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_proc),
MR_COMMON(0,12)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_proc),
MR_TAG_COMMON(0,0,14)
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
MR_CTOR1_ADDR(lazy, lazy),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,4)
}
},
{
{
MR_CTOR1_ADDR(lazy, lazy),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal)
}
},
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_point_0;
static const struct mercury_type_1 mercury_common_1[13] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_TAG_COMMON(0,0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,17)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,5,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(5,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_COMMON(0,27)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_TAG_COMMON(0,0,28)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(coverage, coverage_point)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(coverage, coverage_point)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_recursion_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_params),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(report, recursion_type),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(1,0),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_params),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(report, recursion_type),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(1,0),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_6,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_params),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(1,0),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique),
MR_COMMON(1,0),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_1;
static const struct mercury_type_3 mercury_common_3[10] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(5,1),
MR_COMMON(0,6),
MR_COMMON(0,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,16),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,16),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,8),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
};

MR_decl_entry(coverage__add_coverage_point_to_map_5_0);
static const struct mercury_type_4 mercury_common_4[10] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__1_3_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__1_3_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__236__1_3_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0),
0
},
{
MR_COMMON(3,7),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__update_parallelism_available__382__1_3_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0),
0
},
{
MR_COMMON(6,6),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(coverage__add_coverage_point_to_map_5_0),
0
},
{
MR_COMMON(3,9),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0),
0
},
{
MR_COMMON(6,8),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
},
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_COMMON(0,11),
MR_COMMON(0,0),
MR_COMMON(0,12)
},
{
MR_CTOR0_ADDR(builtin, tuple),
3,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,0,23)
},
{
MR_CTOR0_ADDR(builtin, tuple),
3,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,24)
},
{
MR_CTOR0_ADDR(builtin, tuple),
3,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,24)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_parallelism_amount_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_2;
static const struct mercury_type_6 mercury_common_6[9] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,0),
MR_COMMON(1,0),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(measurements, parallelism_amount),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_8,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,0),
MR_COMMON(1,0),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,18),
MR_COMMON(0,18)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,18),
MR_COMMON(0,18)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_1,
MR_COMMON(11,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(5,4),
MR_COMMON(0,26),
MR_COMMON(0,26)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(1,5),
MR_COMMON(1,9),
MR_COMMON(1,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(5,4),
MR_COMMON(0,26),
MR_COMMON(0,26)
}
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__2_4_0),
1,
MR_TAG_COMMON(0,4,0)
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__2_4_0),
1,
MR_TAG_COMMON(0,4,1)
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions__107__1_3_0),
1,
MR_TAG_COMMON(0,4,3)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_point_0;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(measurements, parallelism_amount),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_COMMON(1,5),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(coverage, coverage_point),
MR_COMMON(1,12),
MR_COMMON(1,12),
MR_COMMON(1,12),
MR_COMMON(1,12)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(measurements, parallelism_amount),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(0,7)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj),
1
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
1,
17
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_parallelism_amount_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_parallelism_amount_0;

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_types_candidate_child_clique_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_cs_cost_csq_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_parallelism_amount_0
};

const MR_ConstString mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_names_candidate_child_clique_0_0[] = {
	"ccc_clique",
	"ccc_cs_cost",
	"ccc_proc",
	"ccc_goal_path",
	"ccc_parallelism"
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_functor_desc_candidate_child_clique_0_0 = {
	"candidate_child_clique",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_types_candidate_child_clique_0_0,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_names_candidate_child_clique_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_stag_ordered_candidate_child_clique_0_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_functor_desc_candidate_child_clique_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_ptag_ordered_candidate_child_clique_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_stag_ordered_candidate_child_clique_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_name_ordered_candidate_child_clique_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_functor_desc_candidate_child_clique_0_0
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__functor_number_map_candidate_child_clique_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0)),
	"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
	"candidate_child_clique",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_name_ordered_candidate_child_clique_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_ptag_ordered_candidate_child_clique_0 },
	1,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__functor_number_map_candidate_child_clique_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"extract_from_push_map",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
490,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"insert_into_push_map",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
489,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_2 = {
{
MR_PREDICATE,
"coverage",
"coverage",
"add_coverage_point_to_map",
5,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
592,
"46"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_1 = {
{
MR_PREDICATE,
"analysis_utils",
"analysis_utils",
"build_dynamic_call_site_cost_and_callee_map",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
578,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"extract_from_push_map",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
490,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"insert_into_push_map",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
489,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_1 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"lambda_autopar_search_callgraph_m_397",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
397,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"lambda_autopar_search_callgraph_m_382",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
382,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"call_site_dynamic_callees",
6,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
281,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"pd_slot_callees",
5,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
263,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"build_var_use_list",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
139,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"build_var_use_list",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
137,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"pard_goal_detail_annon_to_pard_goal_annon",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
123,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"pard_goal_detail_annon_to_pard_goal_annon",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
123,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"lambda_autopar_search_callgraph_m_107",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
107,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"pard_goal_detail_to_pard_goal",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
108,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_9 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"lambda_autopar_search_callgraph_m_236",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
236,
"62"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_8 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"lambda2_autopar_search_callgraph_m_232",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
232,
"90"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_7 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"lambda_autopar_search_callgraph_m_232",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
232,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_6 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"candidate_parallel_conjunctions_callee",
7,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
227,
"86"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_5 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"proc_dynamic_callees",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
224,
"80"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_4 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"lambda2_autopar_search_callgraph_m_218",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
218,
"68"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"lambda_autopar_search_callgraph_m_218",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
218,
"47"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"candidate_parallel_conjunctions_clique_proc",
7,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
214,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"candidate_parallel_conjunctions_clique_proc",
7,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_callgraph",
"autopar_search_callgraph.m",
214,
"32"
};


MR_decl_entry(analysis_utils__find_clique_first_and_other_procs_4_0);
MR_decl_entry(profile__deep_lookup_clique_index_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(recursion_patterns__create_clique_recursion_costs_report_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
MR_decl_entry(list__map2_4_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(map__union_4_1);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module0)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,2,5,6,7,8,9,4,3,13,15)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,14,28,29,30,31,34,37,38,40,41)
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,44,45,47,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_clique'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis_utils__find_clique_first_and_other_procs_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i4);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" has no entry proc", 18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Clique ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_callgraph", 56);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_callgraph.candidate_parallel_conjunctions_clique\'/6", 109);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(recursion_patterns__create_clique_recursion_costs_report_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 5) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 6) = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_sv(12) = (MR_Word) MR_CTOR1_ADDR(cord, cord);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i14);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tfield(0, MR_r1, 0), 1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_sv(12) = (MR_Word) MR_CTOR1_ADDR(cord, cord);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r5;
	MR_sv(10) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(list__map2_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i31);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i34);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(12);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i37);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i38);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i40);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i41);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i44);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i45);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__union_4_1,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i47);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0_i48);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__no_parallelism_0_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(assoc_list__map_values_only_3_0);
MR_decl_entry(mdbcomp__feedback__put_feedback_data_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module1)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0,2,3,4,7,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__no_parallelism_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__map_values_only_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__put_feedback_data_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(mdbcomp__program_representation__transform_goal_rep_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module2)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pard_goal_detail_to_pard_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r1, 3);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdbcomp__program_representation__transform_goal_rep_3_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_to_pard_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_r5, 0);
	MR_r4 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation);
	MR_np_tailcall_ent(mdbcomp__program_representation__transform_goal_rep_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__goal_cost_get_percall_1_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(coverage__get_coverage_before_det_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module3)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0,2,3,4,9,11,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pard_goal_detail_annon_to_pard_goal_annon'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_sv(2), 5);
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(2), 6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,19);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(2), 7);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pard_goal_detail_annon_to_pard_goal_annon_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(lazy__read_if_val_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module4)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_var_use_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,20);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(lazy__read_if_val_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__build_var_use_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_proc_dynamics_3_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);
MR_decl_entry(analysis_utils__proc_dynamic_paired_call_site_slots_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module5)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0,2,3,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_dynamic_callees'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__cord__cord_list_to_cord_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_call_site_dynamic_ptr_2_0);
MR_decl_entry(profile__deep_lookup_clique_maybe_child_3_0);
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(profile__deep_lookup_csd_own_3_0);
MR_decl_entry(profile__deep_lookup_csd_desc_3_0);
MR_decl_entry(fn__measurements__calls_1_0);
MR_decl_entry(fn__measurements__callseqs_1_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__measurements__build_cs_cost_csq_2_0);
MR_decl_entry(fn__cord__singleton_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module6)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,3,5,23,7,9,10,11,12,13,14)
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_dynamic_callees'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_clique_maybe_child_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i7);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_csd_own_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_r1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__build_cs_cost_csq_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_statics_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
MR_decl_entry(fn__array__to_list_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module7)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0,2,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_slot_callees'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 4);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(fn__array__to_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__cord__cord_list_to_cord_1_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	MR_r5 = MR_tfield(0, MR_sv(4), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module8)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_parallelism_available'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,22);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_search_callgraph, candidate_child_clique);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__cs_cost_get_percall_1_0);
MR_decl_entry(measurements__exceeded_desired_parallelism_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module9)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0);
	MR_init_label7(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0,5,6,7,10,2,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_callee'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r3 == MR_tempr1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tfield(0, MR_r1, 8);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(5)) < MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_sv(3), 4);
	MR_np_call_localret_ent(measurements__exceeded_desired_parallelism_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0_i26);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0);
MR_decl_entry(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
MR_decl_entry(list__last_2_0);
MR_decl_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);
MR_decl_entry(fn__measurement_units__probable_1_0);
MR_decl_entry(measurements__sub_computation_parallelism_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module10)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,2,3,6,11,13,15,18,19,20,21)
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_parallelism_available_conj'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_sv(4) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_sv(1), 6);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step);
	MR_np_call_localret_ent(list__last_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i8);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i8);
	}
	MR_r2 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(5));
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i8);
	}
	MR_sv(1) = MR_tfield(0, MR_sv(1), 9);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_r1) + (MR_word_to_float(MR_tfield(0, MR_tempr1, 7)) + MR_word_to_float(MR_tfield(0, MR_tempr1, 8)))));
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_sv(6), 4);
	MR_np_call_localret_ent(fn__measurement_units__probable_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(measurements__sub_computation_parallelism_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module11)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0,23,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_pushes_for_proc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(analysis_utils__deep_get_maybe_procrep_3_0);
MR_decl_entry(message__append_message_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(program_representation_utils__label_goals_4_0);
MR_decl_entry(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0);
MR_decl_entry(profile__deep_lookup_pd_own_3_0);
MR_decl_entry(coverage__coverage_point_arrays_to_list_3_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(coverage__goal_annotate_with_coverage_9_0);
MR_decl_entry(fn__program_representation_utils__initial_inst_map_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0;
MR_decl_entry(fn__mdbcomp__goal_path__create_goal_id_array_1_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0);
MR_decl_entry(profile__deep_get_progrep_det_2_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0);
MR_decl_entry(fn__map__singleton_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module12)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,2,3,4,8,13,7,14,15,20,17)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,23,24,27,30,31,36,33,39,40,41)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,44,45,46,47,48,49,51,52,55,56)
	MR_init_label8(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,57,61,64,67,59,69,71,73)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_mask_field(MR_tempr1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("exception", 9)) == 0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i8);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("Mercury runtime", 15)) != 0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i7);
	}
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_decr_sp_and_return(22);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(analysis_utils__deep_get_maybe_procrep_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i17);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_sv(16);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i73);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 1);
	MR_sv(10) = MR_tempr1;
	MR_sv(11) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(program_representation_utils__label_goals_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(17) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(15) = MR_r1;
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,0,28);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = MR_sv(21);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(15);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_pd_own_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i31);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(6), 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i33);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i36);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_r3 = MR_sv(16);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i73);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(7), 9);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(coverage__coverage_point_arrays_to_list_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i39);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_point);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i40);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i41);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i44);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(12);
	}
	MR_np_call_localret_ent(coverage__goal_annotate_with_coverage_9_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i45);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__program_representation_utils__initial_inst_map_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i46);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__create_goal_id_array_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i47);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i48);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_r5;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_get_progrep_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i49);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(8);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(16);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i51);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i52);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,22);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i55);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i56);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i57);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i59);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i61);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i67);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i64);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i67);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(22);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i69);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(3), 0) = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i71);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0_i73);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1);
MR_decl_entry(analysis_utils__build_recursive_call_site_cost_map_6_1);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module13)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0);
	MR_init_label8(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,2,3,4,9,10,6,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_parallel_conjunctions_clique_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis_utils__build_recursive_call_site_cost_map_6_1,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_sv(6);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_table_0;
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module14)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0);
	MR_init_label9(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,3,4,6,9,12,15,5,17,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_candidate_par_conjs_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_r3 = MR_tfield(0, MR_r3, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, var_table);
	MR_np_call_localret_ent(builtin__unify_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0_i16);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_callgraph", 56);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_callgraph.merge_candidate_par_conjs_proc\'/3", 101);
	MR_r3 = (MR_Word) MR_string_const("var tables do not match", 23);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_list_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module15)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0,5,8,7,2,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_into_push_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0_i7);
	}
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	if ((MR_sv(3) != MR_tempr2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0_i7);
	}
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_tempr4 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(set__insert_list_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module16)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_from_push_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurements__cs_cost_csq_0_0);
MR_decl_entry(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
MR_decl_entry(__Unify___measurements__parallelism_amount_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module17)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0);
	MR_init_label5(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___measurements__cs_cost_csq_0_0,
		__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i4);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__string_proc_label_0_0,
		__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i6);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,
		__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i8);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___measurements__parallelism_amount_0_0);
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___measurements__cs_cost_csq_0_0);
MR_decl_entry(__Compare___mdbcomp__program_representation__string_proc_label_0_0);
MR_decl_entry(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0);
MR_decl_entry(__Compare___measurements__parallelism_amount_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module18)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0);
	MR_init_label7(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i2);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i5);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___measurements__cs_cost_csq_0_0,
		__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i9);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0,
		__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i13);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,
		__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i17);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___measurements__parallelism_amount_0_0);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module19)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions__107__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions__107__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions__107__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions__107__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module20)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module21)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module22)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__236__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__236__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions_clique__236__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__236__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module23)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__218__2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(map__union_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module24)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__232__2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(map__union_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module25)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__update_parallelism_available__382__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__update_parallelism_available__382__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update_parallelism_available__382__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__update_parallelism_available__382__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_callgraph_module26)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0);
	MR_init_label1(fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__update_parallelism_available_conj__397__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0_i2);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__397__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph_maybe_bunch_0(void)
{
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module0();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module1();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module2();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module3();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module4();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module5();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module6();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module7();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module8();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module9();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module10();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module11();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module12();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module13();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module14();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module15();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module16();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module17();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module18();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module19();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module20();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module21();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module22();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module23();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module24();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module25();
	mdprof_fb__automatic_parallelism__autopar_search_callgraph_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_type_tables(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_threadscope_string_table(void);
#endif

void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0,
		mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_child_clique_0_0);
	mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_debugger();
}

void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0);
	}
}


void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_fb__automatic_parallelism__autopar_search_callgraph);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
