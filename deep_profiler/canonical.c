/*
** Automatically generated from `canonical.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__canonical__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 128 "../library/array.int"
#include "array.mh"

#line 27 "canonical.c"
#line 530 "../library/io.int"
#include "io.mh"

#line 31 "canonical.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 35 "canonical.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "canonical.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "canonical.c"
#line 44 "canonical.c"
#include "canonical.mh"

#line 47 "canonical.c"
#line 48 "canonical.c"
#ifndef CANONICAL_DECL_GUARD
#define CANONICAL_DECL_GUARD

#line 52 "canonical.c"
#line 53 "canonical.c"

#endif
#line 56 "canonical.c"

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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_canonical__type_ctor_info_redirect_0,
	mercury_data_canonical__type_ctor_info_merge_info_0;
MR_decl_label7(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0, 15,2,3,4,5,6,8)
MR_decl_label1(canonical__callee_in_clique_3_0, 2)
MR_decl_label7(canonical__canonicalize_cliques_2_0, 2,3,4,5,6,7,8)
MR_decl_label8(canonical__cluster_csds_by_ps_4_0, 4,6,9,11,8,12,14,13)
MR_decl_label1(canonical__cluster_csds_by_ps_4_0, 2)
MR_decl_label5(canonical__cluster_pds_by_ps_4_0, 4,6,8,7,2)
MR_decl_label5(canonical__compact_csd_redirect_6_0, 20,2,3,6,4)
MR_decl_label8(canonical__compact_dynamics_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(canonical__compact_dynamics_5_0, 10,11,12)
MR_decl_label5(canonical__compact_pd_redirect_6_0, 20,2,3,6,4)
MR_decl_label4(canonical__complete_clique_ps_7_0, 5,6,7,2)
MR_decl_label8(canonical__complete_clique_slots_9_0, 45,3,4,7,5,8,9,11)
MR_decl_label8(canonical__complete_clique_slots_9_0, 12,13,14,16,15,18,20,19)
MR_decl_label3(canonical__complete_clique_slots_9_0, 22,23,2)
MR_decl_label6(canonical__lookup_multi_sites_3_0, 4,6,8,5,9,3)
MR_decl_label5(canonical__lookup_normal_sites_3_0, 4,6,5,8,3)
MR_decl_label1(canonical__lookup_pd_site_3_0, 2)
MR_decl_label7(canonical__merge_call_site_dynamics_9_0, 2,4,5,6,7,9,10)
MR_decl_label8(canonical__merge_call_site_dynamics_2_8_0, 2,3,6,8,9,10,11,12)
MR_decl_label8(canonical__merge_call_site_dynamics_2_8_0, 13,4,14,15,16,17,18,19)
MR_decl_label4(canonical__merge_call_site_dynamics_2_8_0, 20,21,22,23)
MR_decl_label6(canonical__merge_call_site_dynamics_descendants_8_0, 2,3,4,5,6,7)
MR_decl_label8(canonical__merge_clique_6_0, 5,6,7,8,11,12,13,9)
MR_decl_label1(canonical__merge_clique_6_0, 2)
MR_decl_label3(canonical__merge_cliques_6_0, 11,4,3)
MR_decl_label1(canonical__merge_multi_slot_cluster_10_0, 2)
MR_decl_label5(canonical__merge_proc_dynamic_multi_slot_11_0, 2,3,4,5,6)
MR_decl_label1(canonical__merge_proc_dynamic_normal_slot_11_0, 2)
MR_decl_label8(canonical__merge_proc_dynamic_slots_11_0, 25,3,6,5,8,9,10,11)
MR_decl_label1(canonical__merge_proc_dynamic_slots_11_0, 2)
MR_decl_label8(canonical__merge_proc_dynamics_8_0, 2,3,6,7,8,9,10,11)
MR_decl_label4(canonical__merge_proc_dynamics_8_0, 12,13,14,4)
MR_decl_label1(canonical__merge_proc_dynamics_ignore_chosen_7_0, 2)
MR_decl_label2(canonical__record_csd_redirect_4_0, 2,3)
MR_decl_label7(canonical__record_csd_redirect_2_4_0, 21,4,7,8,5,10,3)
MR_decl_label2(canonical__record_pd_redirect_4_0, 2,3)
MR_decl_label7(canonical__record_pd_redirect_2_4_0, 21,4,7,8,5,10,3)
MR_decl_label2(canonical__subst_in_call_site_dynamic_3_0, 2,3)
MR_decl_label2(canonical__subst_in_proc_dynamic_3_0, 2,3)
MR_decl_label4(canonical__subst_in_slot_3_0, 4,3,5,6)
MR_decl_label1(canonical__two_or_more_1_0, 1)
MR_decl_label3(canonical__union_cliques_4_0, 15,4,5)
MR_decl_label3(__Unify___canonical__merge_info_0_0, 4,8,1)
MR_decl_label3(__Unify___canonical__redirect_0_0, 4,8,1)
MR_decl_label4(__Compare___canonical__merge_info_0_0, 3,2,5,21)
MR_decl_label4(__Compare___canonical__redirect_0_0, 3,2,5,21)
MR_decl_static(canonical__merge_clique_6_0)
MR_decl_static(canonical__merge_cliques_6_0)
MR_decl_static(canonical__compact_csd_redirect_6_0)
MR_decl_static(canonical__compact_pd_redirect_6_0)
MR_decl_static(canonical__compact_dynamics_5_0)
MR_def_extern_entry(canonical__canonicalize_cliques_2_0)
MR_decl_static(canonical__lookup_normal_sites_3_0)
MR_decl_static(canonical__lookup_multi_sites_3_0)
MR_decl_static(canonical__complete_clique_slots_9_0)
MR_decl_static(canonical__complete_clique_ps_7_0)
MR_decl_static(canonical__lookup_pd_site_3_0)
MR_decl_static(canonical__callee_in_clique_3_0)
MR_decl_static(canonical__lookup_csd_redirect_3_0)
MR_decl_static(canonical__record_csd_redirect_2_4_0)
MR_decl_static(canonical__record_csd_redirect_4_0)
MR_decl_static(canonical__merge_proc_dynamic_multi_slot_11_0)
MR_decl_static(canonical__record_pd_redirect_2_4_0)
MR_decl_static(canonical__record_pd_redirect_4_0)
MR_decl_static(canonical__merge_proc_dynamics_8_0)
MR_decl_static(canonical__merge_proc_dynamic_slots_11_0)
MR_decl_static(canonical__merge_proc_dynamic_normal_slot_11_0)
MR_decl_static(canonical__merge_call_site_dynamics_9_0)
MR_decl_static(canonical__merge_call_site_dynamics_2_8_0)
MR_decl_static(canonical__merge_call_site_dynamics_descendants_8_0)
MR_decl_static(canonical__merge_proc_dynamics_ignore_chosen_7_0)
MR_decl_static(canonical__accumulate_csd_owns_3_0)
MR_decl_static(canonical__merge_multi_slot_cluster_10_0)
MR_decl_static(canonical__union_cliques_4_0)
MR_decl_static(canonical__two_or_more_1_0)
MR_decl_static(canonical__cluster_pds_by_ps_4_0)
MR_decl_static(canonical__cluster_csds_by_ps_4_0)
MR_decl_static(canonical__subst_in_call_site_dynamic_3_0)
MR_decl_static(canonical__subst_in_proc_dynamic_3_0)
MR_decl_static(canonical__subst_in_slot_3_0)
MR_decl_static(__Unify___canonical__merge_info_0_0)
MR_decl_static(__Compare___canonical__merge_info_0_0)
MR_decl_static(__Unify___canonical__redirect_0_0)
MR_decl_static(__Compare___canonical__redirect_0_0)
MR_decl_static(canonical__IntroducedFrom__pred__complete_clique__128__1_3_0)
MR_decl_static(canonical__IntroducedFrom__pred__merge_proc_dynamics__237__1_2_0)
MR_decl_static(canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__410__1_2_0)
MR_decl_static(canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__415__1_2_0)
MR_decl_static(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
static const struct mercury_type_0 mercury_common_0[15] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_dynamic)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, proc_dynamic)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_dynamic)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, proc_dynamic)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_1 mercury_common_1[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(0,11)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,0,10)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_clique_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_initial_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_slots_9_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamic_multi_slot_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_canonical__type_ctor_info_merge_info_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_clique_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__complete_clique_slots_9_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_proc_dynamic_multi_slot_11_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(canonical, merge_info),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_clique_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_clique_6_0_3;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_clique_6_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_clique_6_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(0,2)
},
};

MR_decl_entry(profile__extract_pd_sites_2_0);
MR_decl_entry(profile__extract_csd_callee_2_0);
static const struct mercury_type_4 mercury_common_4[7] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(canonical__two_or_more_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(canonical__two_or_more_1_0),
0
},
{
MR_COMMON(7,4),
MR_ENTRY_AP(profile__extract_pd_sites_2_0),
0
},
{
MR_COMMON(6,7),
MR_ENTRY_AP(canonical__accumulate_csd_owns_3_0),
0
},
{
MR_COMMON(6,9),
MR_ENTRY_AP(canonical__accumulate_csd_owns_3_0),
0
},
{
MR_COMMON(7,8),
MR_ENTRY_AP(profile__extract_csd_callee_2_0),
0
},
{
MR_COMMON(6,13),
MR_ENTRY_AP(canonical__IntroducedFrom__pred__complete_clique__128__1_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_clique_6_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_canonical__type_ctor_info_redirect_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_clique_6_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(canonical, merge_info),
MR_COMMON(0,2),
MR_COMMON(0,2),
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(canonical, redirect),
MR_CTOR0_ADDR(canonical, redirect)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_COMMON(0,2),
MR_COMMON(1,4),
MR_COMMON(1,0),
MR_COMMON(1,0),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__compact_dynamics_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__compact_dynamics_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_slots_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_ps_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__subst_in_proc_dynamic_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__subst_in_slot_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_1;
static const struct mercury_type_6 mercury_common_6[14] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__compact_dynamics_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(canonical, redirect),
MR_CTOR0_ADDR(profile, call_site_dynamic),
MR_CTOR0_ADDR(profile, call_site_dynamic)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__compact_dynamics_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(canonical, redirect),
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_CTOR0_ADDR(profile, proc_dynamic)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__complete_clique_slots_9_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__complete_clique_ps_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(0,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,13),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_COMMON(0,2),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, call_site_dynamic),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, call_site_dynamic),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__subst_in_proc_dynamic_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(canonical, redirect),
MR_CTOR0_ADDR(profile, call_site_array_slot),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__subst_in_slot_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,14),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_slots_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_slots_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_2;
static const struct mercury_type_7 mercury_common_7[9] =
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__complete_clique_slots_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,7),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__complete_clique_slots_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,7),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,13),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,2),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_COMMON(0,8)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,7),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,12),
MR_COMMON(0,12)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,12),
MR_COMMON(0,12)
},
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, call_site_dynamic),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamic_multi_slot_11_0_2;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__canonical__merge_proc_dynamic_multi_slot_11_0_2,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_CTOR0_ADDR(canonical, merge_info),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(0,2),
MR_COMMON(0,12),
MR_COMMON(0,12),
MR_COMMON(0,12),
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(profile, initial_deep),
MR_CTOR0_ADDR(canonical, redirect),
MR_CTOR0_ADDR(canonical, redirect)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0
}};

const MR_PseudoTypeInfo mercury_data_canonical__field_types_redirect_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0
};

const MR_ConstString mercury_data_canonical__field_names_redirect_0_0[] = {
	"csd_redirect",
	"pd_redirect"
};

static const MR_DuFunctorDesc mercury_data_canonical__du_functor_desc_redirect_0_0 = {
	"redirect",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_canonical__field_types_redirect_0_0,
	mercury_data_canonical__field_names_redirect_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_canonical__du_stag_ordered_redirect_0_0[] = {
	&mercury_data_canonical__du_functor_desc_redirect_0_0

};

const MR_DuPtagLayout mercury_data_canonical__du_ptag_ordered_redirect_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_canonical__du_stag_ordered_redirect_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_canonical__du_name_ordered_redirect_0[] = {
	&mercury_data_canonical__du_functor_desc_redirect_0_0
};

const MR_Integer mercury_data_canonical__functor_number_map_redirect_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_canonical__type_ctor_info_redirect_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___canonical__redirect_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___canonical__redirect_0_0)),
	"canonical",
	"redirect",
	{ (void *)mercury_data_canonical__du_name_ordered_redirect_0 },
	{ (void *)mercury_data_canonical__du_ptag_ordered_redirect_0 },
	1,
	4,
	mercury_data_canonical__functor_number_map_redirect_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0
}};

const MR_PseudoTypeInfo mercury_data_canonical__field_types_merge_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_clique_ptr_0
};

const MR_ConstString mercury_data_canonical__field_names_merge_info_0_0[] = {
	"merge_clique_members",
	"merge_clique_index"
};

static const MR_DuFunctorDesc mercury_data_canonical__du_functor_desc_merge_info_0_0 = {
	"merge_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_canonical__field_types_merge_info_0_0,
	mercury_data_canonical__field_names_merge_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_canonical__du_stag_ordered_merge_info_0_0[] = {
	&mercury_data_canonical__du_functor_desc_merge_info_0_0

};

const MR_DuPtagLayout mercury_data_canonical__du_ptag_ordered_merge_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_canonical__du_stag_ordered_merge_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_canonical__du_name_ordered_merge_info_0[] = {
	&mercury_data_canonical__du_functor_desc_merge_info_0_0
};

const MR_Integer mercury_data_canonical__functor_number_map_merge_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_canonical__type_ctor_info_merge_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___canonical__merge_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___canonical__merge_info_0_0)),
	"canonical",
	"merge_info",
	{ (void *)mercury_data_canonical__du_name_ordered_merge_info_0 },
	{ (void *)mercury_data_canonical__du_ptag_ordered_merge_info_0 },
	1,
	4,
	mercury_data_canonical__functor_number_map_merge_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_clique_6_0_1 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"cluster_pds_by_ps",
4,
0
},
"canonical",
"canonical.m",
95,
"d1;c7;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_clique_6_0_2 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"two_or_more",
1,
0
},
"canonical",
"canonical.m",
98,
"d1;c7;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_clique_6_0_3 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"two_or_more",
1,
0
},
"canonical",
"canonical.m",
102,
"d1;c7;t;c7;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_clique_6_0_4 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"merge_proc_dynamics_ignore_chosen",
7,
0
},
"canonical",
"canonical.m",
103,
"d1;c7;t;c7;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__compact_dynamics_5_0_1 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"subst_in_call_site_dynamic",
3,
0
},
"canonical",
"canonical.m",
694,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__compact_dynamics_5_0_2 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"subst_in_proc_dynamic",
3,
0
},
"canonical",
"canonical.m",
696,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_slots_9_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_call_site_dynamic_ptr_raw",
2,
0
},
"canonical",
"canonical.m",
192,
"d1;c10;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_slots_9_0_2 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_call_site_dynamic_ptr_raw",
2,
0
},
"canonical",
"canonical.m",
192,
"d1;c10;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_slots_9_0_3 = {
{
MR_PREDICATE,
"profile",
"profile",
"extract_csdptr_callee",
3,
0
},
"canonical",
"canonical.m",
195,
"d1;c10;t;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_slots_9_0_4 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"cluster_pds_by_ps",
4,
0
},
"canonical",
"canonical.m",
206,
"d1;c10;t;c12;e;c2;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__complete_clique_ps_7_0_1 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"lookup_pd_site",
3,
0
},
"canonical",
"canonical.m",
159,
"d1;c8;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamic_multi_slot_11_0_1 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"cluster_csds_by_ps",
4,
0
},
"canonical",
"canonical.m",
343,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamic_multi_slot_11_0_2 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"merge_multi_slot_cluster",
10,
0
},
"canonical",
"canonical.m",
346,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_proc_dynamic_ptr_raw",
2,
0
},
"canonical",
"canonical.m",
235,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_2 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"lambda_canonical_m_237",
2,
0
},
"canonical",
"canonical.m",
237,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_3 = {
{
MR_PREDICATE,
"profile",
"profile",
"lookup_proc_dynamics",
3,
0
},
"canonical",
"canonical.m",
241,
"d1;c16;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_proc_dynamics_8_0_4 = {
{
MR_PREDICATE,
"profile",
"profile",
"extract_pd_sites",
2,
0
},
"canonical",
"canonical.m",
242,
"d1;c16;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_9_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_call_site_dynamic_ptr_raw",
2,
0
},
"canonical",
"canonical.m",
371,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_1 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"callee_in_clique",
3,
0
},
"canonical",
"canonical.m",
404,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_2 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"lambda_canonical_m_410",
2,
0
},
"canonical",
"canonical.m",
410,
"d1;c11;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_3 = {
{
MR_PREDICATE,
"profile",
"profile",
"lookup_call_site_dynamics",
3,
0
},
"canonical",
"canonical.m",
423,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_4 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"accumulate_csd_owns",
3,
0
},
"canonical",
"canonical.m",
426,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_5 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"lambda_canonical_m_415",
2,
0
},
"canonical",
"canonical.m",
415,
"d1;c11;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_6 = {
{
MR_PREDICATE,
"profile",
"profile",
"lookup_call_site_dynamics",
3,
0
},
"canonical",
"canonical.m",
423,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_2_8_0_7 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"accumulate_csd_owns",
3,
0
},
"canonical",
"canonical.m",
426,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"lookup_call_site_dynamics",
3,
0
},
"canonical",
"canonical.m",
460,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_2 = {
{
MR_PREDICATE,
"profile",
"profile",
"extract_csd_callee",
2,
0
},
"canonical",
"canonical.m",
462,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__merge_call_site_dynamics_descendants_8_0_3 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"union_cliques",
4,
0
},
"canonical",
"canonical.m",
464,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__subst_in_proc_dynamic_3_0_1 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"subst_in_slot",
3,
0
},
"canonical",
"canonical.m",
759,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__canonical__subst_in_slot_3_0_1 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"lookup_csd_redirect",
3,
0
},
"canonical",
"canonical.m",
769,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_1 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"lambda_canonical_m_128",
3,
0
},
"canonical",
"canonical.m",
128,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_2 = {
{
MR_PREDICATE,
"canonical",
"canonical",
"complete_clique_ps",
7,
0
},
"canonical",
"canonical.m",
146,
"d1;c9;"
};

MR_decl_entry(map__init_1_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(map__values_2_0);
MR_decl_entry(list__filter_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_initial_deep_0;
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(canonical_module0)
	MR_init_entry1(canonical__merge_clique_6_0);
	MR_init_label8(canonical__merge_clique_6_0,5,6,7,8,11,12,13,9)
	MR_init_label1(canonical__merge_clique_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_clique_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__merge_clique_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(canonical__merge_clique_6_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__init_1_0,
		canonical__merge_clique_6_0_i5);
MR_def_label(canonical__merge_clique_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__cluster_pds_by_ps_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		canonical__merge_clique_6_0_i6);
MR_def_label(canonical__merge_clique_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__values_2_0,
		canonical__merge_clique_6_0_i7);
MR_def_label(canonical__merge_clique_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(list__filter_3_0,
		canonical__merge_clique_6_0_i8);
MR_def_label(canonical__merge_clique_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__merge_clique_6_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,
		canonical__merge_clique_6_0_i11);
MR_def_label(canonical__merge_clique_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(map__values_2_0,
		canonical__merge_clique_6_0_i12);
MR_def_label(canonical__merge_clique_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_np_call_localret_ent(list__filter_3_0,
		canonical__merge_clique_6_0_i13);
MR_def_label(canonical__merge_clique_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__merge_proc_dynamics_ignore_chosen_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, initial_deep);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(canonical, redirect);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(canonical__merge_clique_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(canonical__merge_clique_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module1)
	MR_init_entry1(canonical__merge_cliques_6_0);
	MR_init_label3(canonical__merge_cliques_6_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_cliques_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(canonical__merge_cliques_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__merge_cliques_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(canonical__merge_clique_6_0,
		canonical__merge_cliques_6_0_i4);
MR_def_label(canonical__merge_cliques_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(canonical__merge_cliques_6_0_i11);
MR_def_label(canonical__merge_cliques_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);
MR_decl_entry(svarray__set_4_0);

MR_BEGIN_MODULE(canonical_module2)
	MR_init_entry1(canonical__compact_csd_redirect_6_0);
	MR_init_label5(canonical__compact_csd_redirect_6_0,20,2,3,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__compact_csd_redirect_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(canonical__compact_csd_redirect_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(canonical__compact_csd_redirect_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(canonical__compact_csd_redirect_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__compact_csd_redirect_6_0_i3);
MR_def_label(canonical__compact_csd_redirect_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(canonical__compact_csd_redirect_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(svarray__set_4_0,
		canonical__compact_csd_redirect_6_0_i6);
MR_def_label(canonical__compact_csd_redirect_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(canonical__compact_csd_redirect_6_0_i20);
MR_def_label(canonical__compact_csd_redirect_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(canonical__compact_csd_redirect_6_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module3)
	MR_init_entry1(canonical__compact_pd_redirect_6_0);
	MR_init_label5(canonical__compact_pd_redirect_6_0,20,2,3,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__compact_pd_redirect_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(canonical__compact_pd_redirect_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(canonical__compact_pd_redirect_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(canonical__compact_pd_redirect_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__compact_pd_redirect_6_0_i3);
MR_def_label(canonical__compact_pd_redirect_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(canonical__compact_pd_redirect_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(svarray__set_4_0,
		canonical__compact_pd_redirect_6_0_i6);
MR_def_label(canonical__compact_pd_redirect_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(canonical__compact_pd_redirect_6_0_i20);
MR_def_label(canonical__compact_pd_redirect_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(canonical__compact_pd_redirect_6_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array_util__u_1_0);
MR_decl_entry(array_util__array_map_from_1_3_0);
MR_decl_entry(array__shrink_3_0);

MR_BEGIN_MODULE(canonical_module4)
	MR_init_entry1(canonical__compact_dynamics_5_0);
	MR_init_label8(canonical__compact_dynamics_5_0,2,3,4,5,6,7,8,9)
	MR_init_label3(canonical__compact_dynamics_5_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__compact_dynamics_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 5);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__compact_dynamics_5_0_i2);
MR_def_label(canonical__compact_dynamics_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(canonical__compact_csd_redirect_6_0,
		canonical__compact_dynamics_5_0_i3);
MR_def_label(canonical__compact_dynamics_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__compact_dynamics_5_0_i4);
MR_def_label(canonical__compact_dynamics_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(canonical__compact_pd_redirect_6_0,
		canonical__compact_dynamics_5_0_i5);
MR_def_label(canonical__compact_dynamics_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(canonical__subst_in_call_site_dynamic_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr3;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__compact_dynamics_5_0_i6);
MR_def_label(canonical__compact_dynamics_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(array_util__array_map_from_1_3_0,
		canonical__compact_dynamics_5_0_i7);
MR_def_label(canonical__compact_dynamics_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__subst_in_proc_dynamic_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__compact_dynamics_5_0_i8);
MR_def_label(canonical__compact_dynamics_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(array_util__array_map_from_1_3_0,
		canonical__compact_dynamics_5_0_i9);
MR_def_label(canonical__compact_dynamics_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(array__shrink_3_0,
		canonical__compact_dynamics_5_0_i10);
MR_def_label(canonical__compact_dynamics_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__shrink_3_0,
		canonical__compact_dynamics_5_0_i11);
MR_def_label(canonical__compact_dynamics_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__compact_dynamics_5_0_i12);
MR_def_label(canonical__compact_dynamics_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__max_1_0);
MR_decl_entry(callgraph__find_cliques_2_0);
MR_decl_entry(callgraph__make_clique_indexes_4_0);
MR_decl_entry(fn__array__init_2_0);

MR_BEGIN_MODULE(canonical_module5)
	MR_init_entry1(canonical__canonicalize_cliques_2_0);
	MR_init_label7(canonical__canonicalize_cliques_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__canonical__canonicalize_cliques_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_ctfield(0, MR_sv(6), 2);
	MR_np_call_localret_ent(fn__array__max_1_0,
		canonical__canonicalize_cliques_2_0_i2);
MR_def_label(canonical__canonicalize_cliques_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_ctfield(0, MR_sv(6), 3);
	MR_np_call_localret_ent(fn__array__max_1_0,
		canonical__canonicalize_cliques_2_0_i3);
MR_def_label(canonical__canonicalize_cliques_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_sv(2) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(callgraph__find_cliques_2_0,
		canonical__canonicalize_cliques_2_0_i4);
MR_def_label(canonical__canonicalize_cliques_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(callgraph__make_clique_indexes_4_0,
		canonical__canonicalize_cliques_2_0_i5);
MR_def_label(canonical__canonicalize_cliques_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__array__init_2_0,
		canonical__canonicalize_cliques_2_0_i6);
MR_def_label(canonical__canonicalize_cliques_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__array__init_2_0,
		canonical__canonicalize_cliques_2_0_i7);
MR_def_label(canonical__canonicalize_cliques_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(canonical__merge_cliques_6_0,
		canonical__canonicalize_cliques_2_0_i8);
MR_def_label(canonical__canonicalize_cliques_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(canonical__compact_dynamics_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(canonical_module6)
	MR_init_entry1(canonical__lookup_normal_sites_3_0);
	MR_init_label5(canonical__lookup_normal_sites_3_0,4,6,5,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__lookup_normal_sites_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__lookup_normal_sites_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__lookup_normal_sites_3_0_i4);
MR_def_label(canonical__lookup_normal_sites_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(canonical__lookup_normal_sites_3_0_i6);
	}
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(canonical__lookup_normal_sites_3_0,
		canonical__lookup_normal_sites_3_0_i8);
MR_def_label(canonical__lookup_normal_sites_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_normal_sites: found slot_multi", 37);
	MR_np_call_localret_ent(require__error_1_0,
		canonical__lookup_normal_sites_3_0_i5);
MR_def_label(canonical__lookup_normal_sites_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(canonical__lookup_normal_sites_3_0,
		canonical__lookup_normal_sites_3_0_i8);
MR_def_label(canonical__lookup_normal_sites_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(canonical__lookup_normal_sites_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__to_list_2_0);

MR_BEGIN_MODULE(canonical_module7)
	MR_init_entry1(canonical__lookup_multi_sites_3_0);
	MR_init_label6(canonical__lookup_multi_sites_3_0,4,6,8,5,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__lookup_multi_sites_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__lookup_multi_sites_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__lookup_multi_sites_3_0_i4);
MR_def_label(canonical__lookup_multi_sites_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(canonical__lookup_multi_sites_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("lookup_multi_sites: found normal", 32);
	MR_np_call_localret_ent(require__error_1_0,
		canonical__lookup_multi_sites_3_0_i5);
MR_def_label(canonical__lookup_multi_sites_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		canonical__lookup_multi_sites_3_0_i8);
MR_def_label(canonical__lookup_multi_sites_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
MR_def_label(canonical__lookup_multi_sites_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(canonical__lookup_multi_sites_3_0,
		canonical__lookup_multi_sites_3_0_i9);
MR_def_label(canonical__lookup_multi_sites_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(canonical__lookup_multi_sites_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
MR_decl_entry(profile__lookup_call_site_statics_3_0);
MR_decl_entry(profile__valid_call_site_dynamic_ptr_raw_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(profile__extract_csdptr_callee_3_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(set__intersect_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(set__difference_3_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(canonical_module8)
	MR_init_entry1(canonical__complete_clique_slots_9_0);
	MR_init_label8(canonical__complete_clique_slots_9_0,45,3,4,7,5,8,9,11)
	MR_init_label8(canonical__complete_clique_slots_9_0,12,13,14,16,15,18,20,19)
	MR_init_label3(canonical__complete_clique_slots_9_0,22,23,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__complete_clique_slots_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(canonical__complete_clique_slots_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(canonical__complete_clique_slots_9_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__complete_clique_slots_9_0_i3);
MR_def_label(canonical__complete_clique_slots_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(profile__lookup_call_site_statics_3_0,
		canonical__complete_clique_slots_9_0_i4);
MR_def_label(canonical__complete_clique_slots_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(canonical__complete_clique_slots_9_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(canonical__lookup_normal_sites_3_0,
		canonical__complete_clique_slots_9_0_i7);
MR_def_label(canonical__complete_clique_slots_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_call_site_dynamic_ptr_raw_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_sv(2), 2);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		canonical__complete_clique_slots_9_0_i11);
MR_def_label(canonical__complete_clique_slots_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(canonical__lookup_multi_sites_3_0,
		canonical__complete_clique_slots_9_0_i8);
MR_def_label(canonical__complete_clique_slots_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_np_call_localret_ent(list__condense_2_0,
		canonical__complete_clique_slots_9_0_i9);
MR_def_label(canonical__complete_clique_slots_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_call_site_dynamic_ptr_raw_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_sv(2), 2);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		canonical__complete_clique_slots_9_0_i11);
MR_def_label(canonical__complete_clique_slots_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__extract_csdptr_callee_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	}
	MR_np_call_localret_ent(list__map_3_0,
		canonical__complete_clique_slots_9_0_i12);
MR_def_label(canonical__complete_clique_slots_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		canonical__complete_clique_slots_9_0_i13);
MR_def_label(canonical__complete_clique_slots_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__intersect_3_0,
		canonical__complete_clique_slots_9_0_i14);
MR_def_label(canonical__complete_clique_slots_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(set__empty_1_0,
		canonical__complete_clique_slots_9_0_i16);
MR_def_label(canonical__complete_clique_slots_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(canonical__complete_clique_slots_9_0_i15);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(canonical__complete_clique_slots_9_0_i45);
MR_def_label(canonical__complete_clique_slots_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__difference_3_0,
		canonical__complete_clique_slots_9_0_i18);
MR_def_label(canonical__complete_clique_slots_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__empty_1_0,
		canonical__complete_clique_slots_9_0_i20);
MR_def_label(canonical__complete_clique_slots_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(canonical__complete_clique_slots_9_0_i19);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_r7 = (MR_Integer) 0;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(canonical__complete_clique_slots_9_0_i45);
MR_def_label(canonical__complete_clique_slots_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		canonical__complete_clique_slots_9_0_i22);
MR_def_label(canonical__complete_clique_slots_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__cluster_pds_by_ps_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		canonical__complete_clique_slots_9_0_i23);
MR_def_label(canonical__complete_clique_slots_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_r1;
	MR_r7 = (MR_Integer) 1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(canonical__complete_clique_slots_9_0_i45);
MR_def_label(canonical__complete_clique_slots_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_proc_statics_3_0);

MR_BEGIN_MODULE(canonical_module9)
	MR_init_entry1(canonical__complete_clique_ps_7_0);
	MR_init_label4(canonical__complete_clique_ps_7_0,5,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__complete_clique_ps_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(canonical__complete_clique_ps_7_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(canonical__complete_clique_ps_7_0_i2);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		canonical__complete_clique_ps_7_0_i5);
MR_def_label(canonical__complete_clique_ps_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__lookup_pd_site_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	}
	MR_np_call_localret_ent(list__map_3_0,
		canonical__complete_clique_ps_7_0_i6);
MR_def_label(canonical__complete_clique_ps_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_ctfield(0, MR_sv(3), 7);
	MR_np_call_localret_ent(fn__array__max_1_0,
		canonical__complete_clique_ps_7_0_i7);
MR_def_label(canonical__complete_clique_ps_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(0, MR_sv(3), 7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(canonical__complete_clique_slots_9_0);
MR_def_label(canonical__complete_clique_ps_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_proc_dynamics_3_0);

MR_BEGIN_MODULE(canonical_module10)
	MR_init_entry1(canonical__lookup_pd_site_3_0);
	MR_init_label1(canonical__lookup_pd_site_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__lookup_pd_site_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		canonical__lookup_pd_site_3_0_i2);
MR_def_label(canonical__lookup_pd_site_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_call_site_dynamics_3_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(canonical_module11)
	MR_init_entry1(canonical__callee_in_clique_3_0);
	MR_init_label1(canonical__callee_in_clique_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__callee_in_clique_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		canonical__callee_in_clique_3_0_i2);
MR_def_label(canonical__callee_in_clique_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module12)
	MR_init_entry1(canonical__lookup_csd_redirect_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__lookup_csd_redirect_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_np_tailcall_ent(array__lookup_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(canonical_module13)
	MR_init_entry1(canonical__record_csd_redirect_2_4_0);
	MR_init_label7(canonical__record_csd_redirect_2_4_0,21,4,7,8,5,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__record_csd_redirect_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(canonical__record_csd_redirect_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__record_csd_redirect_2_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__record_csd_redirect_2_4_0_i4);
MR_def_label(canonical__record_csd_redirect_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(canonical__record_csd_redirect_2_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__record_csd_redirect_2_4_0_i7);
MR_def_label(canonical__record_csd_redirect_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array__set_4_0,
		canonical__record_csd_redirect_2_4_0_i8);
MR_def_label(canonical__record_csd_redirect_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(canonical__record_csd_redirect_2_4_0_i10);
MR_def_label(canonical__record_csd_redirect_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("record_csd_redirect_2: already redirected", 41);
	MR_np_call_localret_ent(require__error_1_0,
		canonical__record_csd_redirect_2_4_0_i10);
MR_def_label(canonical__record_csd_redirect_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(canonical__record_csd_redirect_2_4_0_i21);
	}
MR_def_label(canonical__record_csd_redirect_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module14)
	MR_init_entry1(canonical__record_csd_redirect_4_0);
	MR_init_label2(canonical__record_csd_redirect_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__record_csd_redirect_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__record_csd_redirect_4_0_i2);
MR_def_label(canonical__record_csd_redirect_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(canonical__record_csd_redirect_4_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(canonical__record_csd_redirect_2_4_0);
MR_def_label(canonical__record_csd_redirect_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("record_pd_redirect: prime is redirected", 39);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(canonical_module15)
	MR_init_entry1(canonical__merge_proc_dynamic_multi_slot_11_0);
	MR_init_label5(canonical__merge_proc_dynamic_multi_slot_11_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_proc_dynamic_multi_slot_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(canonical__lookup_multi_sites_3_0,
		canonical__merge_proc_dynamic_multi_slot_11_0_i2);
MR_def_label(canonical__merge_proc_dynamic_multi_slot_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		canonical__merge_proc_dynamic_multi_slot_11_0_i3);
MR_def_label(canonical__merge_proc_dynamic_multi_slot_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		canonical__merge_proc_dynamic_multi_slot_11_0_i4);
MR_def_label(canonical__merge_proc_dynamic_multi_slot_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__cluster_csds_by_ps_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		canonical__merge_proc_dynamic_multi_slot_11_0_i5);
MR_def_label(canonical__merge_proc_dynamic_multi_slot_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__values_2_0,
		canonical__merge_proc_dynamic_multi_slot_11_0_i6);
MR_def_label(canonical__merge_proc_dynamic_multi_slot_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__merge_multi_slot_cluster_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(profile, initial_deep);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(canonical, redirect);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module16)
	MR_init_entry1(canonical__record_pd_redirect_2_4_0);
	MR_init_label7(canonical__record_pd_redirect_2_4_0,21,4,7,8,5,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__record_pd_redirect_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(canonical__record_pd_redirect_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__record_pd_redirect_2_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__record_pd_redirect_2_4_0_i4);
MR_def_label(canonical__record_pd_redirect_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(canonical__record_pd_redirect_2_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__record_pd_redirect_2_4_0_i7);
MR_def_label(canonical__record_pd_redirect_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array__set_4_0,
		canonical__record_pd_redirect_2_4_0_i8);
MR_def_label(canonical__record_pd_redirect_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(canonical__record_pd_redirect_2_4_0_i10);
MR_def_label(canonical__record_pd_redirect_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("record_pd_redirect_2: already redirected", 40);
	MR_np_call_localret_ent(require__error_1_0,
		canonical__record_pd_redirect_2_4_0_i10);
MR_def_label(canonical__record_pd_redirect_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(canonical__record_pd_redirect_2_4_0_i21);
	}
MR_def_label(canonical__record_pd_redirect_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module17)
	MR_init_entry1(canonical__record_pd_redirect_4_0);
	MR_init_label2(canonical__record_pd_redirect_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__record_pd_redirect_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__record_pd_redirect_4_0_i2);
MR_def_label(canonical__record_pd_redirect_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(canonical__record_pd_redirect_4_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(canonical__record_pd_redirect_2_4_0);
MR_def_label(canonical__record_pd_redirect_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("record_pd_redirect: prime is redirected", 39);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_proc_dynamic_ptr_raw_2_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(require__require_2_0);
MR_decl_entry(array__max_2_0);
MR_decl_entry(profile__update_proc_dynamics_4_0);

MR_BEGIN_MODULE(canonical_module18)
	MR_init_entry1(canonical__merge_proc_dynamics_8_0);
	MR_init_label8(canonical__merge_proc_dynamics_8_0,2,3,6,7,8,9,10,11)
	MR_init_label4(canonical__merge_proc_dynamics_8_0,12,13,14,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_proc_dynamics_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_proc_dynamic_ptr_raw_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		canonical__merge_proc_dynamics_8_0_i2);
MR_def_label(canonical__merge_proc_dynamics_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__IntroducedFrom__pred__merge_proc_dynamics__237__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("merge_proc_dynamics: invalid pdptrs", 35);
	}
	MR_np_call_localret_ent(require__require_2_0,
		canonical__merge_proc_dynamics_8_0_i3);
MR_def_label(canonical__merge_proc_dynamics_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(canonical__merge_proc_dynamics_8_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(canonical__record_pd_redirect_4_0,
		canonical__merge_proc_dynamics_8_0_i6);
MR_def_label(canonical__merge_proc_dynamics_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		canonical__merge_proc_dynamics_8_0_i7);
MR_def_label(canonical__merge_proc_dynamics_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__lookup_proc_dynamics_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		canonical__merge_proc_dynamics_8_0_i8);
MR_def_label(canonical__merge_proc_dynamics_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(list__map_3_0,
		canonical__merge_proc_dynamics_8_0_i9);
MR_def_label(canonical__merge_proc_dynamics_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_sv(3), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(array__max_2_0,
		canonical__merge_proc_dynamics_8_0_i10);
MR_def_label(canonical__merge_proc_dynamics_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__merge_proc_dynamics_8_0_i11);
MR_def_label(canonical__merge_proc_dynamics_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_np_call_localret_ent(canonical__merge_proc_dynamic_slots_11_0,
		canonical__merge_proc_dynamics_8_0_i12);
MR_def_label(canonical__merge_proc_dynamics_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(3), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_ctfield(0, MR_r2, 3);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__merge_proc_dynamics_8_0_i13);
MR_def_label(canonical__merge_proc_dynamics_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__update_proc_dynamics_4_0,
		canonical__merge_proc_dynamics_8_0_i14);
MR_def_label(canonical__merge_proc_dynamics_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
MR_def_label(canonical__merge_proc_dynamics_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("merge_proc_dynamics: no valid pdptrs", 36);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__array_1_0);

MR_BEGIN_MODULE(canonical_module19)
	MR_init_entry1(canonical__merge_proc_dynamic_slots_11_0);
	MR_init_label8(canonical__merge_proc_dynamic_slots_11_0,25,3,6,5,8,9,10,11)
	MR_init_label1(canonical__merge_proc_dynamic_slots_11_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_proc_dynamic_slots_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(canonical__merge_proc_dynamic_slots_11_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__merge_proc_dynamic_slots_11_0_i3);
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(canonical__merge_proc_dynamic_slots_11_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	}
	MR_np_call_localret_ent(canonical__merge_proc_dynamic_normal_slot_11_0,
		canonical__merge_proc_dynamic_slots_11_0_i6);
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__set_4_0,
		canonical__merge_proc_dynamic_slots_11_0_i11);
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		canonical__merge_proc_dynamic_slots_11_0_i8);
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_np_call_localret_ent(canonical__merge_proc_dynamic_multi_slot_11_0,
		canonical__merge_proc_dynamic_slots_11_0_i9);
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_np_call_localret_ent(fn__array__array_1_0,
		canonical__merge_proc_dynamic_slots_11_0_i10);
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__set_4_0,
		canonical__merge_proc_dynamic_slots_11_0_i11);
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(canonical__merge_proc_dynamic_slots_11_0_i25);
MR_def_label(canonical__merge_proc_dynamic_slots_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module20)
	MR_init_entry1(canonical__merge_proc_dynamic_normal_slot_11_0);
	MR_init_label1(canonical__merge_proc_dynamic_normal_slot_11_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_proc_dynamic_normal_slot_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(canonical__lookup_normal_sites_3_0,
		canonical__merge_proc_dynamic_normal_slot_11_0_i2);
MR_def_label(canonical__merge_proc_dynamic_normal_slot_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(canonical__merge_call_site_dynamics_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__update_call_site_dynamics_4_0);

MR_BEGIN_MODULE(canonical_module21)
	MR_init_entry1(canonical__merge_call_site_dynamics_9_0);
	MR_init_label7(canonical__merge_call_site_dynamics_9_0,2,4,5,6,7,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_call_site_dynamics_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_call_site_dynamic_ptr_raw_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		canonical__merge_call_site_dynamics_9_0_i2);
MR_def_label(canonical__merge_call_site_dynamics_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__merge_call_site_dynamics_9_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(canonical__merge_call_site_dynamics_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		canonical__merge_call_site_dynamics_9_0_i5);
MR_def_label(canonical__merge_call_site_dynamics_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__merge_call_site_dynamics_9_0_i6);
MR_def_label(canonical__merge_call_site_dynamics_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__update_call_site_dynamics_4_0,
		canonical__merge_call_site_dynamics_9_0_i7);
MR_def_label(canonical__merge_call_site_dynamics_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(canonical__merge_call_site_dynamics_9_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(canonical__merge_call_site_dynamics_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(canonical__merge_call_site_dynamics_2_8_0,
		canonical__merge_call_site_dynamics_9_0_i10);
MR_def_label(canonical__merge_call_site_dynamics_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;

MR_BEGIN_MODULE(canonical_module22)
	MR_init_entry1(canonical__merge_call_site_dynamics_2_8_0);
	MR_init_label8(canonical__merge_call_site_dynamics_2_8_0,2,3,6,8,9,10,11,12)
	MR_init_label8(canonical__merge_call_site_dynamics_2_8_0,13,4,14,15,16,17,18,19)
	MR_init_label4(canonical__merge_call_site_dynamics_2_8_0,20,21,22,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_call_site_dynamics_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__callee_in_clique_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_r4;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		canonical__merge_call_site_dynamics_2_8_0_i2);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(canonical__record_csd_redirect_4_0,
		canonical__merge_call_site_dynamics_2_8_0_i3);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(canonical__callee_in_clique_3_0,
		canonical__merge_call_site_dynamics_2_8_0_i6);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(canonical__merge_call_site_dynamics_2_8_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(7,6);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__410__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(7);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("merge_proc_dynamic_normal_slot: prime in clique, others not in clique", 69);
	MR_np_call_localret_ent(require__require_2_0,
		canonical__merge_call_site_dynamics_2_8_0_i8);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		canonical__merge_call_site_dynamics_2_8_0_i9);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__lookup_call_site_dynamics_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	}
	MR_np_call_localret_ent(list__map_3_0,
		canonical__merge_call_site_dynamics_2_8_0_i10);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		canonical__merge_call_site_dynamics_2_8_0_i11);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__merge_call_site_dynamics_2_8_0_i12);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__update_call_site_dynamics_4_0,
		canonical__merge_call_site_dynamics_2_8_0_i13);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(14);
	}
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__415__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("merge_proc_dynamic_normal_slot: prime not in clique, others in clique", 69);
	}
	MR_np_call_localret_ent(require__require_2_0,
		canonical__merge_call_site_dynamics_2_8_0_i14);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		canonical__merge_call_site_dynamics_2_8_0_i15);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__lookup_call_site_dynamics_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		canonical__merge_call_site_dynamics_2_8_0_i16);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		canonical__merge_call_site_dynamics_2_8_0_i17);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__merge_call_site_dynamics_2_8_0_i18);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__update_call_site_dynamics_4_0,
		canonical__merge_call_site_dynamics_2_8_0_i19);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(canonical__merge_call_site_dynamics_descendants_8_0,
		canonical__merge_call_site_dynamics_2_8_0_i20);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		canonical__merge_call_site_dynamics_2_8_0_i21);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__merge_call_site_dynamics_2_8_0_i22);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__update_call_site_dynamics_4_0,
		canonical__merge_call_site_dynamics_2_8_0_i23);
MR_def_label(canonical__merge_call_site_dynamics_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(canonical_module23)
	MR_init_entry1(canonical__merge_call_site_dynamics_descendants_8_0);
	MR_init_label6(canonical__merge_call_site_dynamics_descendants_8_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_call_site_dynamics_descendants_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		canonical__merge_call_site_dynamics_descendants_8_0_i2);
MR_def_label(canonical__merge_call_site_dynamics_descendants_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(profile__extract_csd_callee_2_0,
		canonical__merge_call_site_dynamics_descendants_8_0_i3);
MR_def_label(canonical__merge_call_site_dynamics_descendants_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__lookup_call_site_dynamics_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	}
	MR_np_call_localret_ent(list__map_3_0,
		canonical__merge_call_site_dynamics_descendants_8_0_i4);
MR_def_label(canonical__merge_call_site_dynamics_descendants_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_np_call_localret_ent(list__map_3_0,
		canonical__merge_call_site_dynamics_descendants_8_0_i5);
MR_def_label(canonical__merge_call_site_dynamics_descendants_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(canonical__union_cliques_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		canonical__merge_call_site_dynamics_descendants_8_0_i6);
MR_def_label(canonical__merge_call_site_dynamics_descendants_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_1,
		canonical__merge_call_site_dynamics_descendants_8_0_i7);
MR_def_label(canonical__merge_call_site_dynamics_descendants_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(canonical__merge_proc_dynamics_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module24)
	MR_init_entry1(canonical__merge_proc_dynamics_ignore_chosen_7_0);
	MR_init_label1(canonical__merge_proc_dynamics_ignore_chosen_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_proc_dynamics_ignore_chosen_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(canonical__merge_proc_dynamics_8_0,
		canonical__merge_proc_dynamics_ignore_chosen_7_0_i2);
MR_def_label(canonical__merge_proc_dynamics_ignore_chosen_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__add_own_to_own_2_0);

MR_BEGIN_MODULE(canonical_module25)
	MR_init_entry1(canonical__accumulate_csd_owns_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__accumulate_csd_owns_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__measurements__add_own_to_own_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module26)
	MR_init_entry1(canonical__merge_multi_slot_cluster_10_0);
	MR_init_label1(canonical__merge_multi_slot_cluster_10_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__merge_multi_slot_cluster_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(canonical__merge_call_site_dynamics_9_0,
		canonical__merge_multi_slot_cluster_10_0_i2);
MR_def_label(canonical__merge_multi_slot_cluster_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_clique_index_3_0);
MR_decl_entry(profile__lookup_clique_members_3_0);
MR_decl_entry(set__insert_list_3_0);

MR_BEGIN_MODULE(canonical_module27)
	MR_init_entry1(canonical__union_cliques_4_0);
	MR_init_label3(canonical__union_cliques_4_0,15,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__union_cliques_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(canonical__union_cliques_4_0_i15);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(canonical__union_cliques_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(profile__lookup_clique_index_3_0,
		canonical__union_cliques_4_0_i4);
MR_def_label(canonical__union_cliques_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(profile__lookup_clique_members_3_0,
		canonical__union_cliques_4_0_i5);
MR_def_label(canonical__union_cliques_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__insert_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module28)
	MR_init_entry1(canonical__two_or_more_1_0);
	MR_init_label1(canonical__two_or_more_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__two_or_more_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(canonical__two_or_more_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 != (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
	}
MR_def_label(canonical__two_or_more_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(canonical_module29)
	MR_init_entry1(canonical__cluster_pds_by_ps_4_0);
	MR_init_label5(canonical__cluster_pds_by_ps_4_0,4,6,8,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__cluster_pds_by_ps_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_raw_2_0,
		canonical__cluster_pds_by_ps_4_0_i4);
MR_def_label(canonical__cluster_pds_by_ps_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(canonical__cluster_pds_by_ps_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		canonical__cluster_pds_by_ps_4_0_i6);
MR_def_label(canonical__cluster_pds_by_ps_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		canonical__cluster_pds_by_ps_4_0_i8);
MR_def_label(canonical__cluster_pds_by_ps_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(canonical__cluster_pds_by_ps_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_update_4_0);
	}
MR_def_label(canonical__cluster_pds_by_ps_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(canonical__cluster_pds_by_ps_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module30)
	MR_init_entry1(canonical__cluster_csds_by_ps_4_0);
	MR_init_label8(canonical__cluster_csds_by_ps_4_0,4,6,9,11,8,12,14,13)
	MR_init_label1(canonical__cluster_csds_by_ps_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__cluster_csds_by_ps_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_raw_2_0,
		canonical__cluster_csds_by_ps_4_0_i4);
MR_def_label(canonical__cluster_csds_by_ps_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(canonical__cluster_csds_by_ps_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		canonical__cluster_csds_by_ps_4_0_i6);
MR_def_label(canonical__cluster_csds_by_ps_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_raw_2_0,
		canonical__cluster_csds_by_ps_4_0_i9);
MR_def_label(canonical__cluster_csds_by_ps_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(canonical__cluster_csds_by_ps_4_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		canonical__cluster_csds_by_ps_4_0_i11);
MR_def_label(canonical__cluster_csds_by_ps_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(canonical__cluster_csds_by_ps_4_0_i12);
MR_def_label(canonical__cluster_csds_by_ps_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
MR_def_label(canonical__cluster_csds_by_ps_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		canonical__cluster_csds_by_ps_4_0_i14);
MR_def_label(canonical__cluster_csds_by_ps_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(canonical__cluster_csds_by_ps_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_update_4_0);
	}
MR_def_label(canonical__cluster_csds_by_ps_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(canonical__cluster_csds_by_ps_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module31)
	MR_init_entry1(canonical__subst_in_call_site_dynamic_3_0);
	MR_init_label2(canonical__subst_in_call_site_dynamic_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__subst_in_call_site_dynamic_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__subst_in_call_site_dynamic_3_0_i2);
MR_def_label(canonical__subst_in_call_site_dynamic_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__subst_in_call_site_dynamic_3_0_i3);
MR_def_label(canonical__subst_in_call_site_dynamic_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__map_3_0);

MR_BEGIN_MODULE(canonical_module32)
	MR_init_entry1(canonical__subst_in_proc_dynamic_3_0);
	MR_init_label2(canonical__subst_in_proc_dynamic_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__subst_in_proc_dynamic_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__subst_in_slot_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__subst_in_proc_dynamic_3_0_i2);
MR_def_label(canonical__subst_in_proc_dynamic_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__map_3_0,
		canonical__subst_in_proc_dynamic_3_0_i3);
MR_def_label(canonical__subst_in_proc_dynamic_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module33)
	MR_init_entry1(canonical__subst_in_slot_3_0);
	MR_init_label4(canonical__subst_in_slot_3_0,4,3,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__subst_in_slot_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(canonical__subst_in_slot_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		canonical__subst_in_slot_3_0_i4);
MR_def_label(canonical__subst_in_slot_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(canonical__subst_in_slot_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__lookup_csd_redirect_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		canonical__subst_in_slot_3_0_i5);
MR_def_label(canonical__subst_in_slot_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__map_3_0,
		canonical__subst_in_slot_3_0_i6);
MR_def_label(canonical__subst_in_slot_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(canonical_module34)
	MR_init_entry1(__Unify___canonical__merge_info_0_0);
	MR_init_label3(__Unify___canonical__merge_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___canonical__merge_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___canonical__merge_info_0_0_i8);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___canonical__merge_info_0_0_i4);
MR_def_label(__Unify___canonical__merge_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___canonical__merge_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
MR_def_label(__Unify___canonical__merge_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___canonical__merge_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___array__array_1_0);

MR_BEGIN_MODULE(canonical_module35)
	MR_init_entry1(__Compare___canonical__merge_info_0_0);
	MR_init_label4(__Compare___canonical__merge_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___canonical__merge_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___canonical__merge_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___canonical__merge_info_0_0_i2);
MR_def_label(__Compare___canonical__merge_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___canonical__merge_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___canonical__merge_info_0_0_i5);
MR_def_label(__Compare___canonical__merge_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___canonical__merge_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
MR_def_label(__Compare___canonical__merge_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module36)
	MR_init_entry1(__Unify___canonical__redirect_0_0);
	MR_init_label3(__Unify___canonical__redirect_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___canonical__redirect_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___canonical__redirect_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___canonical__redirect_0_0_i4);
MR_def_label(__Unify___canonical__redirect_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___canonical__redirect_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
MR_def_label(__Unify___canonical__redirect_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___canonical__redirect_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module37)
	MR_init_entry1(__Compare___canonical__redirect_0_0);
	MR_init_label4(__Compare___canonical__redirect_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___canonical__redirect_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___canonical__redirect_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___canonical__redirect_0_0_i2);
MR_def_label(__Compare___canonical__redirect_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___canonical__redirect_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___canonical__redirect_0_0_i5);
MR_def_label(__Compare___canonical__redirect_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___canonical__redirect_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
MR_def_label(__Compare___canonical__redirect_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module38)
	MR_init_entry1(canonical__IntroducedFrom__pred__complete_clique__128__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__IntroducedFrom__pred__complete_clique__128__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_tailcall_ent(set__insert_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(canonical_module39)
	MR_init_entry1(canonical__IntroducedFrom__pred__merge_proc_dynamics__237__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__IntroducedFrom__pred__merge_proc_dynamics__237__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module40)
	MR_init_entry1(canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__410__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__410__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(canonical_module41)
	MR_init_entry1(canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__415__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__415__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

MR_BEGIN_MODULE(canonical_module42)
	MR_init_entry1(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0);
	MR_init_label7(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,15,2,3,4,5,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__values_2_0,
		f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_i2);
MR_def_label(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_i3);
MR_def_label(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_1,
		f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_i5);
MR_def_label(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(canonical__complete_clique_ps_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r6 = MR_sv(3);
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_i6);
MR_def_label(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_i8);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0_i15);
MR_def_label(f_99_97_110_111_110_105_99_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__canonical_maybe_bunch_0(void)
{
	canonical_module0();
	canonical_module1();
	canonical_module2();
	canonical_module3();
	canonical_module4();
	canonical_module5();
	canonical_module6();
	canonical_module7();
	canonical_module8();
	canonical_module9();
	canonical_module10();
	canonical_module11();
	canonical_module12();
	canonical_module13();
	canonical_module14();
	canonical_module15();
	canonical_module16();
	canonical_module17();
	canonical_module18();
	canonical_module19();
	canonical_module20();
	canonical_module21();
	canonical_module22();
	canonical_module23();
	canonical_module24();
	canonical_module25();
	canonical_module26();
	canonical_module27();
	canonical_module28();
	canonical_module29();
	canonical_module30();
	canonical_module31();
	canonical_module32();
	canonical_module33();
	canonical_module34();
	canonical_module35();
	canonical_module36();
	canonical_module37();
	canonical_module38();
	canonical_module39();
}

static void mercury__canonical_maybe_bunch_1(void)
{
	canonical_module40();
	canonical_module41();
	canonical_module42();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__canonical__init(void);
void mercury__canonical__init_type_tables(void);
void mercury__canonical__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__canonical__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__canonical__init_complexity_procs(void);
#endif

void mercury__canonical__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__canonical_maybe_bunch_0();
	mercury__canonical_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_canonical__type_ctor_info_redirect_0,
		canonical__redirect_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_canonical__type_ctor_info_merge_info_0,
		canonical__merge_info_0_0);
	mercury__canonical__init_debugger();
}

void mercury__canonical__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_canonical__type_ctor_info_redirect_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_canonical__type_ctor_info_merge_info_0);
	}
}


void mercury__canonical__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__canonical__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__canonical__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
