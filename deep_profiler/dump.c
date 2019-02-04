/*
** Automatically generated from `dump.m'
** by the Mercury compiler,
** version rotd-2009-09-15, configured for i686-pc-linux-gnu.
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
INIT mercury__dump__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "dump.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "dump.c"
#line 268 "profile.int"
#include "profile.mh"

#line 35 "dump.c"
#line 149 "../library/array.int"
#include "array.mh"

#line 39 "dump.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 43 "dump.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "dump.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "dump.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 55 "dump.c"
#line 56 "dump.c"
#include "dump.mh"

#line 59 "dump.c"
#line 60 "dump.c"
#ifndef DUMP_DECL_GUARD
#define DUMP_DECL_GUARD

#line 64 "dump.c"
#line 65 "dump.c"

#endif
#line 68 "dump.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
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
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_String f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_dump__type_ctor_info_dump_cliques_0,
	mercury_data_dump__type_ctor_info_dump_options_0,
	mercury_data_dump__type_ctor_info_dump_prop_measurements_0,
	mercury_data_dump__type_ctor_info_dump_rev_links_0,
	mercury_data_dump__type_ctor_info_dumpable_array_0,
	mercury_data_dump__type_ctor_info_restriction_0,
	mercury_data_dump__type_ctor_info_show_restricted_dump_0,
	mercury_data_dump__type_ctor_info_show_stats_0;
MR_decl_label4(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0, 2,3,4,5)
MR_decl_label3(dump__det_dump_array_options_2_0, 5,3,19)
MR_decl_label5(dump__det_string_to_dumpable_array_2_0, 4,5,6,37,33)
MR_decl_label5(dump__dump_array_options_2_0, 5,3,19,21,1)
MR_decl_label2(dump__dump_array_options_to_dump_options_2_0, 2,3)
MR_decl_label8(dump__dump_call_site_array_slot_4_0, 3,4,5,6,7,8,9,10)
MR_decl_label1(dump__dump_call_site_array_slot_4_0, 11)
MR_decl_label8(dump__dump_call_site_calls_4_0, 3,8,9,10,11,7,13,14)
MR_decl_label3(dump__dump_call_site_calls_4_0, 15,16,4)
MR_decl_label6(dump__dump_call_site_calls_to_proc_4_0, 2,3,4,5,6,8)
MR_decl_label8(dump__dump_call_site_dynamic_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(dump__dump_call_site_dynamic_4_0, 10,11,12,13,14)
MR_decl_label6(dump__dump_call_site_dynamic_to_static_4_0, 2,3,4,5,6,7)
MR_decl_label8(dump__dump_call_site_kind_and_callee_3_0, 42,10,11,12,13,38,5,7)
MR_decl_label1(dump__dump_call_site_kind_and_callee_3_0, 16)
MR_decl_label8(dump__dump_call_site_static_5_0, 5,6,4,8,9,10,11,12)
MR_decl_label8(dump__dump_call_site_static_5_0, 13,14,15,16,17,18,19,20)
MR_decl_label8(dump__dump_call_site_static_5_0, 21,22,23,24,25,26,27,28)
MR_decl_label2(dump__dump_call_site_static_5_0, 29,31)
MR_decl_label6(dump__dump_clique_index_entry_4_0, 2,3,4,5,6,7)
MR_decl_label7(dump__dump_clique_maybe_child_4_0, 4,5,6,7,8,16,18)
MR_decl_label5(dump__dump_clique_members_4_0, 2,3,4,5,7)
MR_decl_label6(dump__dump_clique_parent_4_0, 2,3,4,5,6,7)
MR_decl_label8(dump__dump_coverage_point_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(dump__dump_coverage_point_4_0, 10,11,12,13)
MR_decl_label5(dump__dump_csd_measurements_6_0, 13,3,4,5,15)
MR_decl_label5(dump__dump_css_measurements_6_0, 13,3,4,5,15)
MR_decl_label4(dump__dump_deep_4_0, 3,2,5,8)
MR_decl_label8(dump__dump_deep_cliques_3_0, 2,4,5,6,9,10,11,13)
MR_decl_label3(dump__dump_deep_cliques_3_0, 14,15,18)
MR_decl_label8(dump__dump_deep_prop_measurements_3_0, 2,3,5,6,7,8,9,11)
MR_decl_label8(dump__dump_deep_prop_measurements_3_0, 12,13,14,15,17,18,19,20)
MR_decl_label3(dump__dump_deep_prop_measurements_3_0, 21,23,24)
MR_decl_label8(dump__dump_deep_rev_links_3_0, 2,5,6,7,9,10,11,14)
MR_decl_label1(dump__dump_init_call_site_dynamics_3_0, 2)
MR_decl_label1(dump__dump_init_call_site_statics_4_0, 2)
MR_decl_label1(dump__dump_init_proc_dynamics_4_0, 2)
MR_decl_label2(dump__dump_init_proc_statics_4_0, 2,4)
MR_decl_label8(dump__dump_init_profile_stats_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(dump__dump_init_profile_stats_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(dump__dump_init_profile_stats_3_0, 18,19,20,21,22,23,24,25)
MR_decl_label8(dump__dump_init_profile_stats_3_0, 26,27,28,29,30,31,32,33)
MR_decl_label8(dump__dump_init_profile_stats_3_0, 34,35,36,37,38,39,40,41)
MR_decl_label3(dump__dump_init_profile_stats_3_0, 42,44,43)
MR_decl_label8(dump__dump_initial_deep_4_0, 3,5,6,9,2,12,13,14)
MR_decl_label8(dump__dump_initial_deep_4_0, 15,16,17,18,11,21,20,26)
MR_decl_label5(dump__dump_initial_deep_4_0, 25,31,30,36,39)
MR_decl_label8(dump__dump_own_and_desc_6_0, 4,2,6,7,8,9,10,11)
MR_decl_label8(dump__dump_own_and_desc_6_0, 14,12,16,17,18,19,20,21)
MR_decl_label8(dump__dump_own_and_desc_6_0, 22,23,24,26,27,28,30,33)
MR_decl_label8(dump__dump_own_and_desc_6_0, 34,35,37,40,41,42,44,66)
MR_decl_label7(dump__dump_own_and_desc_6_0, 45,47,48,49,52,55,60)
MR_decl_label8(dump__dump_own_prof_info_3_0, 2,3,5,6,7,9,12,13)
MR_decl_label8(dump__dump_own_prof_info_3_0, 14,16,19,20,21,23,26,27)
MR_decl_label8(dump__dump_own_prof_info_3_0, 28,30,33,34,35,37,40,41)
MR_decl_label8(dump__dump_own_prof_info_3_0, 42,44,47,48,49,51,54,55)
MR_decl_label6(dump__dump_own_prof_info_3_0, 56,58,61,62,63,65)
MR_decl_label1(dump__dump_pd_in_clique_3_0, 2)
MR_decl_label5(dump__dump_pd_measurements_6_0, 13,3,4,5,15)
MR_decl_label8(dump__dump_proc_dynamic_5_0, 2,3,6,7,8,9,10,11)
MR_decl_label5(dump__dump_proc_dynamic_5_0, 12,13,14,15,17)
MR_decl_label8(dump__dump_proc_static_5_0, 5,6,4,8,9,10,11,12)
MR_decl_label8(dump__dump_proc_static_5_0, 13,14,15,16,17,18,20,21)
MR_decl_label8(dump__dump_proc_static_5_0, 52,19,22,23,25,27,28,29)
MR_decl_label8(dump__dump_proc_static_5_0, 30,31,32,33,34,35,36,37)
MR_decl_label7(dump__dump_proc_static_5_0, 41,42,43,44,46,48,50)
MR_decl_label6(dump__dump_proc_static_call_sites_4_0, 2,3,4,5,6,7)
MR_decl_label6(dump__dump_proc_static_caller_csds_4_0, 4,5,6,7,16,18)
MR_decl_label5(dump__dump_ps_measurements_6_0, 13,3,4,5,15)
MR_decl_label1(dump__dump_space_csdptr_3_0, 2)
MR_decl_label4(dump__string_to_dumpable_array_2_0, 3,4,5,1)
MR_decl_label1(fn__dump__default_dump_options_0_0, 6)
MR_decl_label8(fn__dump__dump_proc_id_1_0, 5,6,7,8,9,10,3,13)
MR_decl_label1(fn__dump__dump_proc_id_1_0, 14)
MR_decl_label3(__Unify___dump__dump_options_0_0, 4,6,1)
MR_decl_label4(__Unify___dump__restriction_0_0, 14,5,7,1)
MR_decl_label8(__Compare___dump__dump_options_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label6(__Compare___dump__restriction_0_0, 24,7,5,9,11,16)
MR_def_extern_entry(fn__dump__default_dump_options_0_0)
MR_def_extern_entry(dump__dump_array_options_2_0)
MR_def_extern_entry(dump__det_dump_array_options_2_0)
MR_def_extern_entry(dump__dump_array_options_to_dump_options_2_0)
MR_decl_static(dump__dump_init_profile_stats_3_0)
MR_decl_static(dump__dump_init_call_site_dynamics_3_0)
MR_decl_static(dump__dump_init_proc_dynamics_4_0)
MR_decl_static(dump__dump_init_call_site_statics_4_0)
MR_decl_static(dump__dump_init_proc_statics_4_0)
MR_decl_static(dump__should_dump_2_0)
MR_def_extern_entry(dump__dump_initial_deep_4_0)
MR_decl_static(dump__dump_deep_cliques_3_0)
MR_decl_static(dump__dump_deep_rev_links_3_0)
MR_decl_static(dump__dump_own_prof_info_3_0)
MR_decl_static(dump__dump_own_and_desc_6_0)
MR_decl_static(dump__dump_pd_measurements_6_0)
MR_decl_static(dump__dump_csd_measurements_6_0)
MR_decl_static(dump__dump_ps_measurements_6_0)
MR_decl_static(dump__dump_css_measurements_6_0)
MR_decl_static(dump__dump_deep_prop_measurements_3_0)
MR_def_extern_entry(dump__dump_deep_4_0)
MR_decl_static(dump__string_to_dumpable_array_2_0)
MR_decl_static(dump__det_string_to_dumpable_array_2_0)
MR_decl_static(dump__get_static_ptrs_from_dynamic_proc_7_0)
MR_decl_static(dump__dump_call_site_dynamic_4_0)
MR_decl_static(dump__dump_proc_dynamic_5_0)
MR_decl_static(dump__dump_call_site_array_slot_4_0)
MR_decl_static(dump__dump_call_site_kind_and_callee_3_0)
MR_decl_static(dump__dump_call_site_static_5_0)
MR_decl_static(fn__dump__dump_proc_id_1_0)
MR_decl_static(dump__dump_proc_static_5_0)
MR_decl_static(dump__dump_proc_static_call_sites_4_0)
MR_decl_static(dump__dump_coverage_point_4_0)
MR_decl_static(dump__dump_clique_index_entry_4_0)
MR_decl_static(dump__dump_clique_members_4_0)
MR_decl_static(dump__dump_pd_in_clique_3_0)
MR_decl_static(dump__dump_clique_parent_4_0)
MR_decl_static(dump__dump_clique_maybe_child_4_0)
MR_decl_static(dump__dump_proc_static_caller_csds_4_0)
MR_decl_static(dump__dump_space_csdptr_3_0)
MR_decl_static(dump__dump_call_site_dynamic_to_static_4_0)
MR_decl_static(dump__dump_call_site_calls_to_proc_4_0)
MR_decl_static(dump__dump_call_site_calls_4_0)
MR_def_extern_entry(__Unify___dump__dump_cliques_0_0)
MR_def_extern_entry(__Compare___dump__dump_cliques_0_0)
MR_def_extern_entry(__Unify___dump__dump_options_0_0)
MR_def_extern_entry(__Compare___dump__dump_options_0_0)
MR_def_extern_entry(__Unify___dump__dump_prop_measurements_0_0)
MR_def_extern_entry(__Compare___dump__dump_prop_measurements_0_0)
MR_def_extern_entry(__Unify___dump__dump_rev_links_0_0)
MR_def_extern_entry(__Compare___dump__dump_rev_links_0_0)
MR_def_extern_entry(__Unify___dump__dumpable_array_0_0)
MR_def_extern_entry(__Compare___dump__dumpable_array_0_0)
MR_decl_static(__Unify___dump__restriction_0_0)
MR_decl_static(__Compare___dump__restriction_0_0)
MR_def_extern_entry(__Unify___dump__show_restricted_dump_0_0)
MR_def_extern_entry(__Compare___dump__show_restricted_dump_0_0)
MR_def_extern_entry(__Unify___dump__show_stats_0_0)
MR_def_extern_entry(__Compare___dump__show_stats_0_0)
MR_decl_static(dump__IntroducedFrom__pred__dump_deep_prop_measurements__799__1_2_0)
MR_decl_static(dump__IntroducedFrom__pred__dump_deep_prop_measurements__808__1_2_0)
MR_decl_static(dump__IntroducedFrom__pred__dump_deep_prop_measurements__817__1_2_0)
MR_decl_static(dump__IntroducedFrom__pred__dump_deep_prop_measurements__826__1_2_0)
MR_decl_static(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
3,
MR_tbmkword(0, 0)
},
{
2,
MR_TAG_COMMON(1,0,0)
},
{
1,
MR_TAG_COMMON(1,0,1)
},
{
0,
MR_TAG_COMMON(1,0,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_array_options_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dumpable_array_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__det_dump_array_options_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_4;
static const struct mercury_type_1 mercury_common_1[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_array_options_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(dump, dumpable_array)
},
{
(MR_Word *) &mercury_data__closure_layout__dump__det_dump_array_options_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(dump, dumpable_array)
},
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_2 mercury_common_2[16] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(dump__string_to_dumpable_array_2_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(dump__det_string_to_dumpable_array_2_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(dump__dump_call_site_dynamic_4_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(dump__dump_clique_index_entry_4_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(dump__dump_clique_members_4_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(dump__dump_clique_parent_4_0),
0
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(dump__dump_clique_maybe_child_4_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(dump__dump_proc_static_caller_csds_4_0),
0
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(dump__dump_call_site_dynamic_to_static_4_0),
0
},
{
MR_COMMON(3,7),
MR_ENTRY_AP(dump__dump_call_site_calls_4_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(dump__dump_call_site_array_slot_4_0),
0
},
{
MR_COMMON(3,9),
MR_ENTRY_AP(dump__dump_proc_static_call_sites_4_0),
0
},
{
MR_COMMON(3,10),
MR_ENTRY_AP(dump__dump_coverage_point_4_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(dump__dump_pd_in_clique_3_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(dump__dump_space_csdptr_3_0),
0
},
{
MR_COMMON(8,2),
MR_ENTRY_AP(dump__dump_space_csdptr_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_init_call_site_dynamics_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_cliques_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_cliques_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_cliques_3_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_cliques_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_proc_dynamic_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_proc_static_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_proc_static_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_coverage_point_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_call_site_calls_4_0_1;
static const struct mercury_type_3 mercury_common_3[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_init_call_site_dynamics_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_cliques_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, clique_ptr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_cliques_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(4,6),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_cliques_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_cliques_3_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(4,8),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(4,10),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(7,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_proc_dynamic_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_array_slot),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_proc_static_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_proc_static_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, coverage_point),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_call_site_calls_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(7,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_4 mercury_common_4[12] =
{
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, proc_static)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(profile, call_site_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(profile, call_site_static_ptr)
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
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(profile, clique_ptr)
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
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_init_proc_dynamics_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_init_call_site_statics_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_restriction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_init_proc_statics_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_init_proc_dynamics_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_init_call_site_statics_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(dump, restriction),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_static),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_init_proc_statics_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(dump, restriction),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_initial_deep_4_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_initial_deep_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(4,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_COMMON(4,1),
MR_COMMON(4,1),
MR_COMMON(4,2),
MR_COMMON(4,2)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,4,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,11)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,11)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,4,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_clique_members_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_proc_static_caller_csds_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_call_site_calls_to_proc_4_0_1;
static const struct mercury_type_8 mercury_common_8[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_clique_members_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_proc_static_caller_csds_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__dump__dump_call_site_calls_to_proc_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_COMMON(3,11),
MR_ENTRY_AP(dump__dump_call_site_calls_to_proc_4_0),
1,
MR_string_const("\t", 1)
},
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dump_cliques_0_0 = {
	"dump_cliques",
	0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dump_cliques_0_1 = {
	"do_not_dump_cliques",
	1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_value_ordered_dump_cliques_0[] = {
	&mercury_data_dump__enum_functor_desc_dump_cliques_0_0,
	&mercury_data_dump__enum_functor_desc_dump_cliques_0_1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_name_ordered_dump_cliques_0[] = {
	&mercury_data_dump__enum_functor_desc_dump_cliques_0_1,
	&mercury_data_dump__enum_functor_desc_dump_cliques_0_0
};

const MR_Integer mercury_data_dump__functor_number_map_dump_cliques_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dump_cliques_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dump__dump_cliques_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dump__dump_cliques_0_0)),
	"dump",
	"dump_cliques",
	{ (void *)mercury_data_dump__enum_name_ordered_dump_cliques_0 },
	{ (void *)mercury_data_dump__enum_value_ordered_dump_cliques_0 },
	2,
	4,
	mercury_data_dump__functor_number_map_dump_cliques_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dumpable_array_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_dump__type_ctor_info_dumpable_array_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_show_restricted_dump_0;
extern const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_show_stats_0;
extern const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dump_cliques_0;
extern const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dump_rev_links_0;
extern const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dump_prop_measurements_0;

const MR_PseudoTypeInfo mercury_data_dump__field_types_dump_options_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_dump__type_ctor_info_show_restricted_dump_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0,
	(MR_PseudoTypeInfo) &mercury_data_dump__type_ctor_info_show_stats_0,
	(MR_PseudoTypeInfo) &mercury_data_dump__type_ctor_info_dump_cliques_0,
	(MR_PseudoTypeInfo) &mercury_data_dump__type_ctor_info_dump_rev_links_0,
	(MR_PseudoTypeInfo) &mercury_data_dump__type_ctor_info_dump_prop_measurements_0
};

const MR_ConstString mercury_data_dump__field_names_dump_options_0_0[] = {
	"do_restricted",
	"do_arrays",
	"do_stats",
	"do_dump_cliques",
	"do_dump_rev_links",
	"do_dump_prop_measurements"
};

static const MR_DuFunctorDesc mercury_data_dump__du_functor_desc_dump_options_0_0 = {
	"dump_options",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_dump__field_types_dump_options_0_0,
	mercury_data_dump__field_names_dump_options_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_dump__du_stag_ordered_dump_options_0_0[] = {
	&mercury_data_dump__du_functor_desc_dump_options_0_0

};

const MR_DuPtagLayout mercury_data_dump__du_ptag_ordered_dump_options_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_dump__du_stag_ordered_dump_options_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_dump__du_name_ordered_dump_options_0[] = {
	&mercury_data_dump__du_functor_desc_dump_options_0_0
};

const MR_Integer mercury_data_dump__functor_number_map_dump_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dump_options_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dump__dump_options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dump__dump_options_0_0)),
	"dump",
	"dump_options",
	{ (void *)mercury_data_dump__du_name_ordered_dump_options_0 },
	{ (void *)mercury_data_dump__du_ptag_ordered_dump_options_0 },
	1,
	4,
	mercury_data_dump__functor_number_map_dump_options_0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dump_prop_measurements_0_0 = {
	"dump_prop_measurements",
	0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dump_prop_measurements_0_1 = {
	"do_not_dump_prop_measurements",
	1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_value_ordered_dump_prop_measurements_0[] = {
	&mercury_data_dump__enum_functor_desc_dump_prop_measurements_0_0,
	&mercury_data_dump__enum_functor_desc_dump_prop_measurements_0_1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_name_ordered_dump_prop_measurements_0[] = {
	&mercury_data_dump__enum_functor_desc_dump_prop_measurements_0_1,
	&mercury_data_dump__enum_functor_desc_dump_prop_measurements_0_0
};

const MR_Integer mercury_data_dump__functor_number_map_dump_prop_measurements_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dump_prop_measurements_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dump__dump_prop_measurements_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dump__dump_prop_measurements_0_0)),
	"dump",
	"dump_prop_measurements",
	{ (void *)mercury_data_dump__enum_name_ordered_dump_prop_measurements_0 },
	{ (void *)mercury_data_dump__enum_value_ordered_dump_prop_measurements_0 },
	2,
	4,
	mercury_data_dump__functor_number_map_dump_prop_measurements_0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dump_rev_links_0_0 = {
	"dump_rev_links",
	0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dump_rev_links_0_1 = {
	"do_not_dump_rev_links",
	1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_value_ordered_dump_rev_links_0[] = {
	&mercury_data_dump__enum_functor_desc_dump_rev_links_0_0,
	&mercury_data_dump__enum_functor_desc_dump_rev_links_0_1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_name_ordered_dump_rev_links_0[] = {
	&mercury_data_dump__enum_functor_desc_dump_rev_links_0_1,
	&mercury_data_dump__enum_functor_desc_dump_rev_links_0_0
};

const MR_Integer mercury_data_dump__functor_number_map_dump_rev_links_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dump_rev_links_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dump__dump_rev_links_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dump__dump_rev_links_0_0)),
	"dump",
	"dump_rev_links",
	{ (void *)mercury_data_dump__enum_name_ordered_dump_rev_links_0 },
	{ (void *)mercury_data_dump__enum_value_ordered_dump_rev_links_0 },
	2,
	4,
	mercury_data_dump__functor_number_map_dump_rev_links_0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dumpable_array_0_0 = {
	"csd",
	0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dumpable_array_0_1 = {
	"css",
	1
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dumpable_array_0_2 = {
	"pd",
	2
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_dumpable_array_0_3 = {
	"ps",
	3
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_value_ordered_dumpable_array_0[] = {
	&mercury_data_dump__enum_functor_desc_dumpable_array_0_0,
	&mercury_data_dump__enum_functor_desc_dumpable_array_0_1,
	&mercury_data_dump__enum_functor_desc_dumpable_array_0_2,
	&mercury_data_dump__enum_functor_desc_dumpable_array_0_3
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_name_ordered_dumpable_array_0[] = {
	&mercury_data_dump__enum_functor_desc_dumpable_array_0_0,
	&mercury_data_dump__enum_functor_desc_dumpable_array_0_1,
	&mercury_data_dump__enum_functor_desc_dumpable_array_0_2,
	&mercury_data_dump__enum_functor_desc_dumpable_array_0_3
};

const MR_Integer mercury_data_dump__functor_number_map_dumpable_array_0[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_dumpable_array_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dump__dumpable_array_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dump__dumpable_array_0_0)),
	"dump",
	"dumpable_array",
	{ (void *)mercury_data_dump__enum_name_ordered_dumpable_array_0 },
	{ (void *)mercury_data_dump__enum_value_ordered_dumpable_array_0 },
	4,
	4,
	mercury_data_dump__functor_number_map_dumpable_array_0
};

static const MR_DuFunctorDesc mercury_data_dump__du_functor_desc_restriction_0_0 = {
	"none",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_static_ptr_0
}};

const MR_PseudoTypeInfo mercury_data_dump__field_types_restriction_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0
};

static const MR_DuFunctorDesc mercury_data_dump__du_functor_desc_restriction_0_1 = {
	"these",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_dump__field_types_restriction_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_dump__du_stag_ordered_restriction_0_0[] = {
	&mercury_data_dump__du_functor_desc_restriction_0_0

};

const MR_DuFunctorDescPtr mercury_data_dump__du_stag_ordered_restriction_0_1[] = {
	&mercury_data_dump__du_functor_desc_restriction_0_1

};

const MR_DuPtagLayout mercury_data_dump__du_ptag_ordered_restriction_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_dump__du_stag_ordered_restriction_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_dump__du_stag_ordered_restriction_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_dump__du_name_ordered_restriction_0[] = {
	&mercury_data_dump__du_functor_desc_restriction_0_0,
	&mercury_data_dump__du_functor_desc_restriction_0_1
};

const MR_Integer mercury_data_dump__functor_number_map_restriction_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_restriction_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dump__restriction_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dump__restriction_0_0)),
	"dump",
	"restriction",
	{ (void *)mercury_data_dump__du_name_ordered_restriction_0 },
	{ (void *)mercury_data_dump__du_ptag_ordered_restriction_0 },
	2,
	4,
	mercury_data_dump__functor_number_map_restriction_0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_show_restricted_dump_0_0 = {
	"show_restricted_dump",
	0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_show_restricted_dump_0_1 = {
	"show_complete_dump",
	1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_value_ordered_show_restricted_dump_0[] = {
	&mercury_data_dump__enum_functor_desc_show_restricted_dump_0_0,
	&mercury_data_dump__enum_functor_desc_show_restricted_dump_0_1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_name_ordered_show_restricted_dump_0[] = {
	&mercury_data_dump__enum_functor_desc_show_restricted_dump_0_1,
	&mercury_data_dump__enum_functor_desc_show_restricted_dump_0_0
};

const MR_Integer mercury_data_dump__functor_number_map_show_restricted_dump_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_show_restricted_dump_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dump__show_restricted_dump_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dump__show_restricted_dump_0_0)),
	"dump",
	"show_restricted_dump",
	{ (void *)mercury_data_dump__enum_name_ordered_show_restricted_dump_0 },
	{ (void *)mercury_data_dump__enum_value_ordered_show_restricted_dump_0 },
	2,
	4,
	mercury_data_dump__functor_number_map_show_restricted_dump_0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_show_stats_0_0 = {
	"show_stats",
	0
};

static const MR_EnumFunctorDesc mercury_data_dump__enum_functor_desc_show_stats_0_1 = {
	"do_not_show_stats",
	1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_value_ordered_show_stats_0[] = {
	&mercury_data_dump__enum_functor_desc_show_stats_0_0,
	&mercury_data_dump__enum_functor_desc_show_stats_0_1
};

const MR_EnumFunctorDescPtr mercury_data_dump__enum_name_ordered_show_stats_0[] = {
	&mercury_data_dump__enum_functor_desc_show_stats_0_1,
	&mercury_data_dump__enum_functor_desc_show_stats_0_0
};

const MR_Integer mercury_data_dump__functor_number_map_show_stats_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_dump__type_ctor_info_show_stats_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dump__show_stats_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dump__show_stats_0_0)),
	"dump",
	"show_stats",
	{ (void *)mercury_data_dump__enum_name_ordered_show_stats_0 },
	{ (void *)mercury_data_dump__enum_value_ordered_show_stats_0 },
	2,
	4,
	mercury_data_dump__functor_number_map_show_stats_0
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_array_options_2_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"string_to_dumpable_array",
2,
0
},
"dump",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__det_dump_array_options_2_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"det_string_to_dumpable_array",
2,
0
},
"dump",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_init_call_site_dynamics_3_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_call_site_dynamic",
4,
0
},
"dump",
"dump.m",
331,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_init_proc_dynamics_4_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_proc_dynamic",
5,
0
},
"dump",
"dump.m",
432,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_init_call_site_statics_4_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_call_site_static",
5,
0
},
"dump",
"dump.m",
472,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_init_proc_statics_4_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_proc_static",
5,
0
},
"dump",
"dump.m",
509,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_initial_deep_4_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"get_static_ptrs_from_dynamic_proc",
7,
0
},
"dump",
"dump.m",
268,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_cliques_3_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_clique_index_entry",
4,
0
},
"dump",
"dump.m",
654,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_cliques_3_0_2 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_clique_members",
4,
0
},
"dump",
"dump.m",
659,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_cliques_3_0_3 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_clique_parent",
4,
0
},
"dump",
"dump.m",
664,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_cliques_3_0_4 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_clique_maybe_child",
4,
0
},
"dump",
"dump.m",
670,
"d1;c25;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_proc_static_caller_csds",
4,
0
},
"dump",
"dump.m",
721,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_2 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_call_site_dynamic_to_static",
4,
0
},
"dump",
"dump.m",
726,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_rev_links_3_0_3 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_call_site_calls",
4,
0
},
"dump",
"dump.m",
732,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"lambda_dump_m_799",
2,
0
},
"dump",
"dump.m",
799,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_2 = {
{
MR_PREDICATE,
"dump",
"dump",
"lambda_dump_m_808",
2,
0
},
"dump",
"dump.m",
808,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_3 = {
{
MR_PREDICATE,
"dump",
"dump",
"lambda_dump_m_817",
2,
0
},
"dump",
"dump.m",
817,
"d1;c30;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_deep_prop_measurements_3_0_4 = {
{
MR_PREDICATE,
"dump",
"dump",
"lambda_dump_m_826",
2,
0
},
"dump",
"dump.m",
826,
"d1;c41;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_proc_dynamic_5_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_call_site_array_slot",
4,
0
},
"dump",
"dump.m",
449,
"c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_proc_static_5_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_proc_static_call_sites",
4,
0
},
"dump",
"dump.m",
561,
"c1;t;c35;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_proc_static_5_0_2 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_coverage_point",
4,
0
},
"dump",
"dump.m",
562,
"c1;t;c39;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_clique_members_4_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_pd_in_clique",
3,
0
},
"dump",
"dump.m",
685,
"c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_proc_static_caller_csds_4_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_space_csdptr",
3,
0
},
"dump",
"dump.m",
744,
"c1;s2-2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_call_site_calls_to_proc_4_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_space_csdptr",
3,
0
},
"dump",
"dump.m",
787,
"c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dump__dump_call_site_calls_4_0_1 = {
{
MR_PREDICATE,
"dump",
"dump",
"dump_call_site_calls_to_proc",
4,
0
},
"dump",
"dump.m",
777,
"c6;s2-2;c2;s2-2;c9;"
};

MR_decl_entry(fn__set__list_to_set_1_0);

MR_BEGIN_MODULE(dump_module0)
	MR_init_entry1(fn__dump__default_dump_options_0_0);
	MR_init_label1(fn__dump__default_dump_options_0_0,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'default_dump_options'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dump__default_dump_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		fn__dump__default_dump_options_0_0_i6);
MR_def_label(fn__dump__default_dump_options_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_2);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(dump_module1)
	MR_init_entry1(dump__dump_array_options_2_0);
	MR_init_label5(dump__dump_array_options_2_0,5,3,19,21,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_array_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dump__dump_array_options_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dump__dump_array_options_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		dump__dump_array_options_2_0_i21);
MR_def_label(dump__dump_array_options_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("all", 3)) != 0)) {
		MR_GOTO_LAB(dump__dump_array_options_2_0_i3);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dump__dump_array_options_2_0_i3);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		dump__dump_array_options_2_0_i21);
MR_def_label(dump__dump_array_options_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_2,
		dump__dump_array_options_2_0_i19);
MR_def_label(dump__dump_array_options_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_array_options_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		dump__dump_array_options_2_0_i21);
MR_def_label(dump__dump_array_options_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dump__dump_array_options_2_0,1)
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

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(dump_module2)
	MR_init_entry1(dump__det_dump_array_options_2_0);
	MR_init_label3(dump__det_dump_array_options_2_0,5,3,19)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_dump_array_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dump__det_dump_array_options_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dump__det_dump_array_options_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set__list_to_set_1_0);
MR_def_label(dump__det_dump_array_options_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("all", 3)) != 0)) {
		MR_GOTO_LAB(dump__det_dump_array_options_2_0_i3);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dump__det_dump_array_options_2_0_i3);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set__list_to_set_1_0);
	}
MR_def_label(dump__det_dump_array_options_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		dump__det_dump_array_options_2_0_i19);
MR_def_label(dump__det_dump_array_options_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__list_to_set_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module3)
	MR_init_entry1(dump__dump_array_options_to_dump_options_2_0);
	MR_init_label2(dump__dump_array_options_to_dump_options_2_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_array_options_to_dump_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dump__dump_array_options_to_dump_options_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(dump__det_dump_array_options_2_0,
		dump__dump_array_options_to_dump_options_2_0_i2);
MR_def_label(dump__dump_array_options_to_dump_options_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dump__default_dump_options_0_0,
		dump__dump_array_options_to_dump_options_2_0_i3);
MR_def_label(dump__dump_array_options_to_dump_options_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(dump_module4)
	MR_init_entry1(dump__dump_init_profile_stats_3_0);
	MR_init_label8(dump__dump_init_profile_stats_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(dump__dump_init_profile_stats_3_0,10,11,12,13,14,15,16,17)
	MR_init_label8(dump__dump_init_profile_stats_3_0,18,19,20,21,22,23,24,25)
	MR_init_label8(dump__dump_init_profile_stats_3_0,26,27,28,29,30,31,32,33)
	MR_init_label8(dump__dump_init_profile_stats_3_0,34,35,36,37,38,39,40,41)
	MR_init_label3(dump__dump_init_profile_stats_3_0,42,44,43)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_init_profile_stats'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_init_profile_stats_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 10);
	MR_r1 = (MR_Word) MR_string_const("SECTION PROFILING STATS:\n\n", 26);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i2);
MR_def_label(dump__dump_init_profile_stats_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i3);
MR_def_label(dump__dump_init_profile_stats_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tprogram_name = ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i4);
MR_def_label(dump__dump_init_profile_stats_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i5);
MR_def_label(dump__dump_init_profile_stats_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i6);
MR_def_label(dump__dump_init_profile_stats_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i7);
MR_def_label(dump__dump_init_profile_stats_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tmax_csd = ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i8);
MR_def_label(dump__dump_init_profile_stats_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i9);
MR_def_label(dump__dump_init_profile_stats_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i10);
MR_def_label(dump__dump_init_profile_stats_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i11);
MR_def_label(dump__dump_init_profile_stats_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tmax_css = ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i12);
MR_def_label(dump__dump_init_profile_stats_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i13);
MR_def_label(dump__dump_init_profile_stats_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i14);
MR_def_label(dump__dump_init_profile_stats_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i15);
MR_def_label(dump__dump_init_profile_stats_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tmax_pd  = ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i16);
MR_def_label(dump__dump_init_profile_stats_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i17);
MR_def_label(dump__dump_init_profile_stats_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i18);
MR_def_label(dump__dump_init_profile_stats_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i19);
MR_def_label(dump__dump_init_profile_stats_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tmax_ps  = ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i20);
MR_def_label(dump__dump_init_profile_stats_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i21);
MR_def_label(dump__dump_init_profile_stats_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i22);
MR_def_label(dump__dump_init_profile_stats_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i23);
MR_def_label(dump__dump_init_profile_stats_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tticks_per_sec = ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i24);
MR_def_label(dump__dump_init_profile_stats_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i25);
MR_def_label(dump__dump_init_profile_stats_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i26);
MR_def_label(dump__dump_init_profile_stats_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i27);
MR_def_label(dump__dump_init_profile_stats_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tinstrument_quanta = ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i28);
MR_def_label(dump__dump_init_profile_stats_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i29);
MR_def_label(dump__dump_init_profile_stats_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i30);
MR_def_label(dump__dump_init_profile_stats_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i31);
MR_def_label(dump__dump_init_profile_stats_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tuser_quanta = ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i32);
MR_def_label(dump__dump_init_profile_stats_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i33);
MR_def_label(dump__dump_init_profile_stats_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i34);
MR_def_label(dump__dump_init_profile_stats_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i35);
MR_def_label(dump__dump_init_profile_stats_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tnum_callseqs = ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i36);
MR_def_label(dump__dump_init_profile_stats_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i37);
MR_def_label(dump__dump_init_profile_stats_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_init_profile_stats_3_0_i38);
MR_def_label(dump__dump_init_profile_stats_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i39);
MR_def_label(dump__dump_init_profile_stats_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tword_size   = ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_init_profile_stats_3_0_i40);
MR_def_label(dump__dump_init_profile_stats_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i41);
MR_def_label(dump__dump_init_profile_stats_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tcanonical = ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i42);
MR_def_label(dump__dump_init_profile_stats_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(dump__dump_init_profile_stats_3_0_i44);
	}
	MR_r1 = (MR_Word) MR_string_const("no\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i43);
MR_def_label(dump__dump_init_profile_stats_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("yes\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_profile_stats_3_0_i43);
MR_def_label(dump__dump_init_profile_stats_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(array_util__array_foldl_from_1_4_0);

MR_BEGIN_MODULE(dump_module5)
	MR_init_entry1(dump__dump_init_call_site_dynamics_3_0);
	MR_init_label1(dump__dump_init_call_site_dynamics_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_init_call_site_dynamics'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_init_call_site_dynamics_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SECTION CALL SITE DYNAMICS:\n\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_call_site_dynamics_3_0_i2);
MR_def_label(dump__dump_init_call_site_dynamics_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(array_util__array_foldl_from_1_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;

MR_BEGIN_MODULE(dump_module6)
	MR_init_entry1(dump__dump_init_proc_dynamics_4_0);
	MR_init_label1(dump__dump_init_proc_dynamics_4_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_init_proc_dynamics'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_init_proc_dynamics_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("SECTION PROC DYNAMICS:\n\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_proc_dynamics_4_0_i2);
MR_def_label(dump__dump_init_proc_dynamics_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dump__dump_proc_dynamic_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array_util__array_foldl_from_1_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;

MR_BEGIN_MODULE(dump_module7)
	MR_init_entry1(dump__dump_init_call_site_statics_4_0);
	MR_init_label1(dump__dump_init_call_site_statics_4_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_init_call_site_statics'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_init_call_site_statics_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("SECTION CALL SITE STATICS:\n\n", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_call_site_statics_4_0_i2);
MR_def_label(dump__dump_init_call_site_statics_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dump__dump_call_site_static_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array_util__array_foldl_from_1_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;

MR_BEGIN_MODULE(dump_module8)
	MR_init_entry1(dump__dump_init_proc_statics_4_0);
	MR_init_label2(dump__dump_init_proc_statics_4_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_init_proc_statics'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_init_proc_statics_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("SECTION PROC STATICS:\n\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_init_proc_statics_4_0_i2);
MR_def_label(dump__dump_init_proc_statics_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dump__dump_proc_static_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_0,
		dump__dump_init_proc_statics_4_0_i4);
MR_def_label(dump__dump_init_proc_statics_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(dump_module9)
	MR_init_entry1(dump__should_dump_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'should_dump'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__should_dump_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(set__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(array_util__array_foldl2_from_1_6_1);

MR_BEGIN_MODULE(dump_module10)
	MR_init_entry1(dump__dump_initial_deep_4_0);
	MR_init_label8(dump__dump_initial_deep_4_0,3,5,6,9,2,12,13,14)
	MR_init_label8(dump__dump_initial_deep_4_0,15,16,17,18,11,21,20,26)
	MR_init_label5(dump__dump_initial_deep_4_0,25,31,30,36,39)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_initial_deep'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dump__dump_initial_deep_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(dump__dump_initial_deep_4_0_i3);
	}
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(dump__dump_initial_deep_4_0_i2);
	}
MR_def_label(dump__dump_initial_deep_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dump__get_static_ptrs_from_dynamic_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 5);
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		dump__dump_initial_deep_4_0_i5);
MR_def_label(dump__dump_initial_deep_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		dump__dump_initial_deep_4_0_i6);
MR_def_label(dump__dump_initial_deep_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(array_util__array_foldl2_from_1_6_1,
		dump__dump_initial_deep_4_0_i9);
MR_def_label(dump__dump_initial_deep_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(dump__dump_initial_deep_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(dump__dump_initial_deep_4_0_i12);
	}
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(dump__dump_initial_deep_4_0_i11);
MR_def_label(dump__dump_initial_deep_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dump__dump_init_profile_stats_3_0,
		dump__dump_initial_deep_4_0_i13);
MR_def_label(dump__dump_initial_deep_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("INITIAL ROOT:\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_initial_deep_4_0_i14);
MR_def_label(dump__dump_initial_deep_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_initial_deep_4_0_i15);
MR_def_label(dump__dump_initial_deep_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_initial_deep_4_0_i16);
MR_def_label(dump__dump_initial_deep_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tinitial root = ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_initial_deep_4_0_i17);
MR_def_label(dump__dump_initial_deep_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_initial_deep_4_0_i18);
MR_def_label(dump__dump_initial_deep_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		dump__dump_initial_deep_4_0_i11);
MR_def_label(dump__dump_initial_deep_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(set__member_2_0,
		dump__dump_initial_deep_4_0_i21);
MR_def_label(dump__dump_initial_deep_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_initial_deep_4_0_i20);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(dump__dump_init_call_site_dynamics_3_0,
		dump__dump_initial_deep_4_0_i20);
MR_def_label(dump__dump_initial_deep_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(dump__should_dump_2_0,
		dump__dump_initial_deep_4_0_i26);
MR_def_label(dump__dump_initial_deep_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_initial_deep_4_0_i25);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(dump__dump_init_proc_dynamics_4_0,
		dump__dump_initial_deep_4_0_i25);
MR_def_label(dump__dump_initial_deep_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(dump__should_dump_2_0,
		dump__dump_initial_deep_4_0_i31);
MR_def_label(dump__dump_initial_deep_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_initial_deep_4_0_i30);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(dump__dump_init_call_site_statics_4_0,
		dump__dump_initial_deep_4_0_i30);
MR_def_label(dump__dump_initial_deep_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(dump__should_dump_2_0,
		dump__dump_initial_deep_4_0_i36);
MR_def_label(dump__dump_initial_deep_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_initial_deep_4_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(dump__dump_init_proc_statics_4_0);
MR_def_label(dump__dump_initial_deep_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module11)
	MR_init_entry1(dump__dump_deep_cliques_3_0);
	MR_init_label8(dump__dump_deep_cliques_3_0,2,4,5,6,9,10,11,13)
	MR_init_label3(dump__dump_deep_cliques_3_0,14,15,18)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_deep_cliques'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_deep_cliques_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 9);
	MR_r1 = (MR_Word) MR_string_const("SECTION MAP FROM PROC DYNAMIC TO CLIQUE:\n\n", 42);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_cliques_3_0_i2);
MR_def_label(dump__dump_deep_cliques_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_sv(4) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_0,
		dump__dump_deep_cliques_3_0_i4);
MR_def_label(dump__dump_deep_cliques_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		dump__dump_deep_cliques_3_0_i5);
MR_def_label(dump__dump_deep_cliques_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_sv(1), 10);
	MR_r1 = (MR_Word) MR_string_const("SECTION MAP FROM CLIQUE TO PROC DYNAMICS:\n\n", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_cliques_3_0_i6);
MR_def_label(dump__dump_deep_cliques_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_0,
		dump__dump_deep_cliques_3_0_i9);
MR_def_label(dump__dump_deep_cliques_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		dump__dump_deep_cliques_3_0_i10);
MR_def_label(dump__dump_deep_cliques_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_sv(1), 11);
	MR_r1 = (MR_Word) MR_string_const("SECTION MAP FROM CLIQUE TO PARENT CSD:\n\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_cliques_3_0_i11);
MR_def_label(dump__dump_deep_cliques_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_0,
		dump__dump_deep_cliques_3_0_i13);
MR_def_label(dump__dump_deep_cliques_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		dump__dump_deep_cliques_3_0_i14);
MR_def_label(dump__dump_deep_cliques_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 12);
	MR_r1 = (MR_Word) MR_string_const("SECTION MAP FROM CSD TO MAYBE CHILD CLIQUE:\n\n", 45);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_cliques_3_0_i15);
MR_def_label(dump__dump_deep_cliques_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_0,
		dump__dump_deep_cliques_3_0_i18);
MR_def_label(dump__dump_deep_cliques_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module12)
	MR_init_entry1(dump__dump_deep_rev_links_3_0);
	MR_init_label8(dump__dump_deep_rev_links_3_0,2,5,6,7,9,10,11,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_deep_rev_links'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_deep_rev_links_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 13);
	MR_r1 = (MR_Word) MR_string_const("SECTION MAP FROM PROC STATIC TO CALLER CSDs:\n\n", 46);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_rev_links_3_0_i2);
MR_def_label(dump__dump_deep_rev_links_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_sv(4) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_0,
		dump__dump_deep_rev_links_3_0_i5);
MR_def_label(dump__dump_deep_rev_links_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		dump__dump_deep_rev_links_3_0_i6);
MR_def_label(dump__dump_deep_rev_links_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_sv(1), 14);
	MR_r1 = (MR_Word) MR_string_const("SECTION MAP FROM CALL SITE DYNAMICS TO STATICS:\n\n", 49);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_rev_links_3_0_i7);
MR_def_label(dump__dump_deep_rev_links_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_0,
		dump__dump_deep_rev_links_3_0_i9);
MR_def_label(dump__dump_deep_rev_links_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		dump__dump_deep_rev_links_3_0_i10);
MR_def_label(dump__dump_deep_rev_links_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 15);
	MR_r1 = (MR_Word) MR_string_const("SECTION MAP FROM CALL SITE STATICS TO CALLS:\n\n", 46);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_rev_links_3_0_i11);
MR_def_label(dump__dump_deep_rev_links_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_0,
		dump__dump_deep_rev_links_3_0_i14);
MR_def_label(dump__dump_deep_rev_links_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(measurements__decompress_profile_10_0);

MR_BEGIN_MODULE(dump_module13)
	MR_init_entry1(dump__dump_own_prof_info_3_0);
	MR_init_label8(dump__dump_own_prof_info_3_0,2,3,5,6,7,9,12,13)
	MR_init_label8(dump__dump_own_prof_info_3_0,14,16,19,20,21,23,26,27)
	MR_init_label8(dump__dump_own_prof_info_3_0,28,30,33,34,35,37,40,41)
	MR_init_label8(dump__dump_own_prof_info_3_0,42,44,47,48,49,51,54,55)
	MR_init_label6(dump__dump_own_prof_info_3_0,56,58,61,62,63,65)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_own_prof_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_own_prof_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(measurements__decompress_profile_10_0,
		dump__dump_own_prof_info_3_0_i2);
MR_def_label(dump__dump_own_prof_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i9);
MR_def_label(dump__dump_own_prof_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i5);
MR_def_label(dump__dump_own_prof_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i6);
MR_def_label(dump__dump_own_prof_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcalls:\t\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i7);
MR_def_label(dump__dump_own_prof_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_prof_info_3_0_i9);
MR_def_label(dump__dump_own_prof_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i12);
MR_def_label(dump__dump_own_prof_info_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i13);
MR_def_label(dump__dump_own_prof_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\texits:\t\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i14);
MR_def_label(dump__dump_own_prof_info_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_prof_info_3_0_i16);
MR_def_label(dump__dump_own_prof_info_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i19);
MR_def_label(dump__dump_own_prof_info_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i20);
MR_def_label(dump__dump_own_prof_info_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tfails:\t\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i21);
MR_def_label(dump__dump_own_prof_info_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_prof_info_3_0_i23);
MR_def_label(dump__dump_own_prof_info_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i30);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i26);
MR_def_label(dump__dump_own_prof_info_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i27);
MR_def_label(dump__dump_own_prof_info_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tredos:\t\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i28);
MR_def_label(dump__dump_own_prof_info_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_prof_info_3_0_i30);
MR_def_label(dump__dump_own_prof_info_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i37);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i33);
MR_def_label(dump__dump_own_prof_info_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i34);
MR_def_label(dump__dump_own_prof_info_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\texcps:\t\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i35);
MR_def_label(dump__dump_own_prof_info_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_prof_info_3_0_i37);
MR_def_label(dump__dump_own_prof_info_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(5),0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i44);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i40);
MR_def_label(dump__dump_own_prof_info_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i41);
MR_def_label(dump__dump_own_prof_info_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tquanta:\t\t", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i42);
MR_def_label(dump__dump_own_prof_info_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_prof_info_3_0_i44);
MR_def_label(dump__dump_own_prof_info_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(6),0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i51);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i47);
MR_def_label(dump__dump_own_prof_info_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i48);
MR_def_label(dump__dump_own_prof_info_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcallseqs:\t", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i49);
MR_def_label(dump__dump_own_prof_info_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_prof_info_3_0_i51);
MR_def_label(dump__dump_own_prof_info_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i58);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i54);
MR_def_label(dump__dump_own_prof_info_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i55);
MR_def_label(dump__dump_own_prof_info_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tallocs:\t\t", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i56);
MR_def_label(dump__dump_own_prof_info_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_prof_info_3_0_i58);
MR_def_label(dump__dump_own_prof_info_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(8),0)) {
		MR_GOTO_LAB(dump__dump_own_prof_info_3_0_i65);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_prof_info_3_0_i61);
MR_def_label(dump__dump_own_prof_info_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i62);
MR_def_label(dump__dump_own_prof_info_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\twords:\t\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_prof_info_3_0_i63);
MR_def_label(dump__dump_own_prof_info_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(dump__dump_own_prof_info_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(measurements__is_zero_own_prof_info_1_0);
MR_decl_entry(measurements__is_zero_inherit_prof_info_1_0);
MR_decl_entry(fn__measurements__inherit_quanta_1_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);
MR_decl_entry(fn__measurements__inherit_allocs_1_0);
MR_decl_entry(fn__measurements__inherit_words_1_0);

MR_BEGIN_MODULE(dump_module14)
	MR_init_entry1(dump__dump_own_and_desc_6_0);
	MR_init_label8(dump__dump_own_and_desc_6_0,4,2,6,7,8,9,10,11)
	MR_init_label8(dump__dump_own_and_desc_6_0,14,12,16,17,18,19,20,21)
	MR_init_label8(dump__dump_own_and_desc_6_0,22,23,24,26,27,28,30,33)
	MR_init_label8(dump__dump_own_and_desc_6_0,34,35,37,40,41,42,44,66)
	MR_init_label7(dump__dump_own_and_desc_6_0,45,47,48,49,52,55,60)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_own_and_desc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_own_and_desc_6_0)
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
	MR_np_call_localret_ent(measurements__is_zero_own_prof_info_1_0,
		dump__dump_own_and_desc_6_0_i4);
MR_def_label(dump__dump_own_and_desc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_sv(3) = (MR_Integer) 0;
	MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i11);
MR_def_label(dump__dump_own_and_desc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_and_desc_6_0_i6);
MR_def_label(dump__dump_own_and_desc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" own:\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i7);
MR_def_label(dump__dump_own_and_desc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i8);
MR_def_label(dump__dump_own_and_desc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_and_desc_6_0_i9);
MR_def_label(dump__dump_own_and_desc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(dump__dump_own_prof_info_3_0,
		dump__dump_own_and_desc_6_0_i10);
MR_def_label(dump__dump_own_and_desc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(3) = (MR_Integer) 1;
MR_def_label(dump__dump_own_and_desc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(measurements__is_zero_inherit_prof_info_1_0,
		dump__dump_own_and_desc_6_0_i14);
MR_def_label(dump__dump_own_and_desc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i12);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i52);
MR_def_label(dump__dump_own_and_desc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_and_desc_6_0_i16);
MR_def_label(dump__dump_own_and_desc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" inherit:\n", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i17);
MR_def_label(dump__dump_own_and_desc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i18);
MR_def_label(dump__dump_own_and_desc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_and_desc_6_0_i19);
MR_def_label(dump__dump_own_and_desc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		dump__dump_own_and_desc_6_0_i20);
MR_def_label(dump__dump_own_and_desc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		dump__dump_own_and_desc_6_0_i21);
MR_def_label(dump__dump_own_and_desc_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		dump__dump_own_and_desc_6_0_i22);
MR_def_label(dump__dump_own_and_desc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		dump__dump_own_and_desc_6_0_i23);
MR_def_label(dump__dump_own_and_desc_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i30);
MR_def_label(dump__dump_own_and_desc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_and_desc_6_0_i26);
MR_def_label(dump__dump_own_and_desc_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i27);
MR_def_label(dump__dump_own_and_desc_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tquanta:\t\t", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i28);
MR_def_label(dump__dump_own_and_desc_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_and_desc_6_0_i30);
MR_def_label(dump__dump_own_and_desc_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_and_desc_6_0_i33);
MR_def_label(dump__dump_own_and_desc_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i34);
MR_def_label(dump__dump_own_and_desc_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcallseqs:\t", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i35);
MR_def_label(dump__dump_own_and_desc_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_and_desc_6_0_i37);
MR_def_label(dump__dump_own_and_desc_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i44);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_and_desc_6_0_i40);
MR_def_label(dump__dump_own_and_desc_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i41);
MR_def_label(dump__dump_own_and_desc_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tallocs:\t\t", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i42);
MR_def_label(dump__dump_own_and_desc_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_and_desc_6_0_i44);
MR_def_label(dump__dump_own_and_desc_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i45);
	}
MR_def_label(dump__dump_own_and_desc_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i52);
MR_def_label(dump__dump_own_and_desc_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_own_and_desc_6_0_i47);
MR_def_label(dump__dump_own_and_desc_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i48);
MR_def_label(dump__dump_own_and_desc_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\twords:\t\t", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_own_and_desc_6_0_i49);
MR_def_label(dump__dump_own_and_desc_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_own_and_desc_6_0_i66);
MR_def_label(dump__dump_own_and_desc_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),1)) {
		MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i55);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(dump__dump_own_and_desc_6_0_i60);
	}
MR_def_label(dump__dump_own_and_desc_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(dump__dump_own_and_desc_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
MR_decl_entry(array__lookup_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;

MR_BEGIN_MODULE(dump_module15)
	MR_init_entry1(dump__dump_pd_measurements_6_0);
	MR_init_label5(dump__dump_pd_measurements_6_0,13,3,4,5,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_pd_measurements'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_pd_measurements_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(dump__dump_pd_measurements_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(dump__dump_pd_measurements_6_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		dump__dump_pd_measurements_6_0_i3);
MR_def_label(dump__dump_pd_measurements_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		dump__dump_pd_measurements_6_0_i4);
MR_def_label(dump__dump_pd_measurements_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pd", 2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(dump__dump_own_and_desc_6_0,
		dump__dump_pd_measurements_6_0_i5);
MR_def_label(dump__dump_pd_measurements_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(dump__dump_pd_measurements_6_0_i13);
MR_def_label(dump__dump_pd_measurements_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module16)
	MR_init_entry1(dump__dump_csd_measurements_6_0);
	MR_init_label5(dump__dump_csd_measurements_6_0,13,3,4,5,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_csd_measurements'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_csd_measurements_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(dump__dump_csd_measurements_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(dump__dump_csd_measurements_6_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		dump__dump_csd_measurements_6_0_i3);
MR_def_label(dump__dump_csd_measurements_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		dump__dump_csd_measurements_6_0_i4);
MR_def_label(dump__dump_csd_measurements_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("csd", 3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(dump__dump_own_and_desc_6_0,
		dump__dump_csd_measurements_6_0_i5);
MR_def_label(dump__dump_csd_measurements_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(dump__dump_csd_measurements_6_0_i13);
MR_def_label(dump__dump_csd_measurements_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module17)
	MR_init_entry1(dump__dump_ps_measurements_6_0);
	MR_init_label5(dump__dump_ps_measurements_6_0,13,3,4,5,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_ps_measurements'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_ps_measurements_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(dump__dump_ps_measurements_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(dump__dump_ps_measurements_6_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		dump__dump_ps_measurements_6_0_i3);
MR_def_label(dump__dump_ps_measurements_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		dump__dump_ps_measurements_6_0_i4);
MR_def_label(dump__dump_ps_measurements_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ps", 2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(dump__dump_own_and_desc_6_0,
		dump__dump_ps_measurements_6_0_i5);
MR_def_label(dump__dump_ps_measurements_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(dump__dump_ps_measurements_6_0_i13);
MR_def_label(dump__dump_ps_measurements_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module18)
	MR_init_entry1(dump__dump_css_measurements_6_0);
	MR_init_label5(dump__dump_css_measurements_6_0,13,3,4,5,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_css_measurements'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_css_measurements_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(dump__dump_css_measurements_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(dump__dump_css_measurements_6_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		dump__dump_css_measurements_6_0_i3);
MR_def_label(dump__dump_css_measurements_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		dump__dump_css_measurements_6_0_i4);
MR_def_label(dump__dump_css_measurements_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("css", 3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(dump__dump_own_and_desc_6_0,
		dump__dump_css_measurements_6_0_i5);
MR_def_label(dump__dump_css_measurements_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(dump__dump_css_measurements_6_0_i13);
MR_def_label(dump__dump_css_measurements_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__max_1_0);
MR_decl_entry(require__require_2_0);

MR_BEGIN_MODULE(dump_module19)
	MR_init_entry1(dump__dump_deep_prop_measurements_3_0);
	MR_init_label8(dump__dump_deep_prop_measurements_3_0,2,3,5,6,7,8,9,11)
	MR_init_label8(dump__dump_deep_prop_measurements_3_0,12,13,14,15,17,18,19,20)
	MR_init_label3(dump__dump_deep_prop_measurements_3_0,21,23,24)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_deep_prop_measurements'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_deep_prop_measurements_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 16);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 17);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		dump__dump_deep_prop_measurements_3_0_i2);
MR_def_label(dump__dump_deep_prop_measurements_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__array__max_1_0,
		dump__dump_deep_prop_measurements_3_0_i3);
MR_def_label(dump__dump_deep_prop_measurements_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dump__IntroducedFrom__pred__dump_deep_prop_measurements__799__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("dump_deep: PDOwnMax != PDDescMax", 32);
	}
	MR_np_call_localret_ent(require__require_2_0,
		dump__dump_deep_prop_measurements_3_0_i5);
MR_def_label(dump__dump_deep_prop_measurements_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("SECTION PROC DYNAMIC MEASUREMENTS:\n\n", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_prop_measurements_3_0_i6);
MR_def_label(dump__dump_deep_prop_measurements_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(dump__dump_pd_measurements_6_0,
		dump__dump_deep_prop_measurements_3_0_i7);
MR_def_label(dump__dump_deep_prop_measurements_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		dump__dump_deep_prop_measurements_3_0_i8);
MR_def_label(dump__dump_deep_prop_measurements_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__array__max_1_0,
		dump__dump_deep_prop_measurements_3_0_i9);
MR_def_label(dump__dump_deep_prop_measurements_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dump__IntroducedFrom__pred__dump_deep_prop_measurements__808__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("dump_deep: CSDMax != CSDDescMax", 31);
	}
	MR_np_call_localret_ent(require__require_2_0,
		dump__dump_deep_prop_measurements_3_0_i11);
MR_def_label(dump__dump_deep_prop_measurements_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("SECTION CALL SITE DYNAMIC MEASUREMENTS:\n\n", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_prop_measurements_3_0_i12);
MR_def_label(dump__dump_deep_prop_measurements_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(dump__dump_csd_measurements_6_0,
		dump__dump_deep_prop_measurements_3_0_i13);
MR_def_label(dump__dump_deep_prop_measurements_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 19);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 20);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		dump__dump_deep_prop_measurements_3_0_i14);
MR_def_label(dump__dump_deep_prop_measurements_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__array__max_1_0,
		dump__dump_deep_prop_measurements_3_0_i15);
MR_def_label(dump__dump_deep_prop_measurements_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dump__IntroducedFrom__pred__dump_deep_prop_measurements__817__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("dump_deep: PSOwnMax != PSDescMax", 32);
	}
	MR_np_call_localret_ent(require__require_2_0,
		dump__dump_deep_prop_measurements_3_0_i17);
MR_def_label(dump__dump_deep_prop_measurements_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("SECTION PROC STATIC MEASUREMENTS:\n\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_prop_measurements_3_0_i18);
MR_def_label(dump__dump_deep_prop_measurements_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(dump__dump_ps_measurements_6_0,
		dump__dump_deep_prop_measurements_3_0_i19);
MR_def_label(dump__dump_deep_prop_measurements_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 21);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 22);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		dump__dump_deep_prop_measurements_3_0_i20);
MR_def_label(dump__dump_deep_prop_measurements_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__array__max_1_0,
		dump__dump_deep_prop_measurements_3_0_i21);
MR_def_label(dump__dump_deep_prop_measurements_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dump__IntroducedFrom__pred__dump_deep_prop_measurements__826__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("dump_deep: CSSOwnMax != CSSDescMax", 34);
	}
	MR_np_call_localret_ent(require__require_2_0,
		dump__dump_deep_prop_measurements_3_0_i23);
MR_def_label(dump__dump_deep_prop_measurements_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("SECTION CALL SITE STATIC MEASUREMENTS:\n\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_deep_prop_measurements_3_0_i24);
MR_def_label(dump__dump_deep_prop_measurements_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(dump__dump_css_measurements_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module20)
	MR_init_entry1(dump__dump_deep_4_0);
	MR_init_label4(dump__dump_deep_4_0,3,2,5,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_deep'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dump__dump_deep_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(dump__dump_deep_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 5);
	MR_GOTO_LAB(dump__dump_deep_4_0_i2);
	}
MR_def_label(dump__dump_deep_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(dump__dump_deep_cliques_3_0,
		dump__dump_deep_4_0_i2);
MR_def_label(dump__dump_deep_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),1)) {
		MR_GOTO_LAB(dump__dump_deep_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(dump__dump_deep_rev_links_3_0,
		dump__dump_deep_4_0_i5);
MR_def_label(dump__dump_deep_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),1)) {
		MR_GOTO_LAB(dump__dump_deep_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(dump__dump_deep_prop_measurements_3_0);
MR_def_label(dump__dump_deep_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module21)
	MR_init_entry1(dump__string_to_dumpable_array_2_0);
	MR_init_label4(dump__string_to_dumpable_array_2_0,3,4,5,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'string_to_dumpable_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__string_to_dumpable_array_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pd", 2)) != 0)) {
		MR_GOTO_LAB(dump__string_to_dumpable_array_2_0_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dump__string_to_dumpable_array_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ps", 2)) != 0)) {
		MR_GOTO_LAB(dump__string_to_dumpable_array_2_0_i4);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dump__string_to_dumpable_array_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csd", 3)) != 0)) {
		MR_GOTO_LAB(dump__string_to_dumpable_array_2_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dump__string_to_dumpable_array_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("css", 3)) != 0)) {
		MR_GOTO_LAB(dump__string_to_dumpable_array_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dump__string_to_dumpable_array_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(dump_module22)
	MR_init_entry1(dump__det_string_to_dumpable_array_2_0);
	MR_init_label5(dump__det_string_to_dumpable_array_2_0,4,5,6,37,33)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_string_to_dumpable_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__det_string_to_dumpable_array_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pd", 2)) != 0)) {
		MR_GOTO_LAB(dump__det_string_to_dumpable_array_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
	}
MR_def_label(dump__det_string_to_dumpable_array_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ps", 2)) != 0)) {
		MR_GOTO_LAB(dump__det_string_to_dumpable_array_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
	}
MR_def_label(dump__det_string_to_dumpable_array_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csd", 3)) != 0)) {
		MR_GOTO_LAB(dump__det_string_to_dumpable_array_2_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(dump__det_string_to_dumpable_array_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("css", 3)) != 0)) {
		MR_GOTO_LAB(dump__det_string_to_dumpable_array_2_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(dump__det_string_to_dumpable_array_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Invalid array name in dump options: ", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__det_string_to_dumpable_array_2_0_i33);
MR_def_label(dump__det_string_to_dumpable_array_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module23)
	MR_init_entry1(dump__get_static_ptrs_from_dynamic_proc_7_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_static_ptrs_from_dynamic_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__get_static_ptrs_from_dynamic_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module24)
	MR_init_entry1(dump__dump_call_site_dynamic_4_0);
	MR_init_label8(dump__dump_call_site_dynamic_4_0,2,3,4,5,6,7,8,9)
	MR_init_label5(dump__dump_call_site_dynamic_4_0,10,11,12,13,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_call_site_dynamic'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_call_site_dynamic_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_dynamic_4_0_i2);
MR_def_label(dump__dump_call_site_dynamic_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_4_0_i3);
MR_def_label(dump__dump_call_site_dynamic_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("csd", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_4_0_i4);
MR_def_label(dump__dump_call_site_dynamic_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_dynamic_4_0_i5);
MR_def_label(dump__dump_call_site_dynamic_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_dynamic_4_0_i6);
MR_def_label(dump__dump_call_site_dynamic_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_4_0_i7);
MR_def_label(dump__dump_call_site_dynamic_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcsd_caller = pd", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_4_0_i8);
MR_def_label(dump__dump_call_site_dynamic_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_dynamic_4_0_i9);
MR_def_label(dump__dump_call_site_dynamic_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_dynamic_4_0_i10);
MR_def_label(dump__dump_call_site_dynamic_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_4_0_i11);
MR_def_label(dump__dump_call_site_dynamic_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcsd_callee = pd", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_4_0_i12);
MR_def_label(dump__dump_call_site_dynamic_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_dynamic_4_0_i13);
MR_def_label(dump__dump_call_site_dynamic_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(dump__dump_own_prof_info_3_0,
		dump__dump_call_site_dynamic_4_0_i14);
MR_def_label(dump__dump_call_site_dynamic_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_proc_statics_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
MR_decl_entry(array_util__array_foldl_from_0_4_0);

MR_BEGIN_MODULE(dump_module25)
	MR_init_entry1(dump__dump_proc_dynamic_5_0);
	MR_init_label8(dump__dump_proc_dynamic_5_0,2,3,6,7,8,9,10,11)
	MR_init_label5(dump__dump_proc_dynamic_5_0,12,13,14,15,17)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_proc_dynamic'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_proc_dynamic_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		dump__dump_proc_dynamic_5_0_i2);
MR_def_label(dump__dump_proc_dynamic_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(dump__dump_proc_dynamic_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("UNKNOWN_PS", 10);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_proc_dynamic_5_0_i6);
MR_def_label(dump__dump_proc_dynamic_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_proc_dynamic_5_0_i6);
MR_def_label(dump__dump_proc_dynamic_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_dynamic_5_0_i7);
MR_def_label(dump__dump_proc_dynamic_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pd", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_dynamic_5_0_i8);
MR_def_label(dump__dump_proc_dynamic_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_dynamic_5_0_i9);
MR_def_label(dump__dump_proc_dynamic_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_dynamic_5_0_i10);
MR_def_label(dump__dump_proc_dynamic_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_dynamic_5_0_i11);
MR_def_label(dump__dump_proc_dynamic_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_proc_dynamic_5_0_i12);
MR_def_label(dump__dump_proc_dynamic_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_dynamic_5_0_i13);
MR_def_label(dump__dump_proc_dynamic_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tpd_proc_static = ", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_dynamic_5_0_i14);
MR_def_label(dump__dump_proc_dynamic_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_dynamic_5_0_i15);
MR_def_label(dump__dump_proc_dynamic_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(array_util__array_foldl_from_0_4_0,
		dump__dump_proc_dynamic_5_0_i17);
MR_def_label(dump__dump_proc_dynamic_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module26)
	MR_init_entry1(dump__dump_call_site_array_slot_4_0);
	MR_init_label8(dump__dump_call_site_array_slot_4_0,3,4,5,6,7,8,9,10)
	MR_init_label1(dump__dump_call_site_array_slot_4_0,11)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_call_site_array_slot'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_call_site_array_slot_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(dump__dump_call_site_array_slot_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("multi", 5);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_array_slot_4_0_i7);
MR_def_label(dump__dump_call_site_array_slot_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_array_slot_4_0_i4);
MR_def_label(dump__dump_call_site_array_slot_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_array_slot_4_0_i5);
MR_def_label(dump__dump_call_site_array_slot_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("normal(csd", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_array_slot_4_0_i6);
MR_def_label(dump__dump_call_site_array_slot_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_array_slot_4_0_i7);
MR_def_label(dump__dump_call_site_array_slot_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("] = ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_array_slot_4_0_i8);
MR_def_label(dump__dump_call_site_array_slot_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_array_slot_4_0_i9);
MR_def_label(dump__dump_call_site_array_slot_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_array_slot_4_0_i10);
MR_def_label(dump__dump_call_site_array_slot_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tpd_site[", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_array_slot_4_0_i11);
MR_def_label(dump__dump_call_site_array_slot_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module27)
	MR_init_entry1(dump__dump_call_site_kind_and_callee_3_0);
	MR_init_label8(dump__dump_call_site_kind_and_callee_3_0,42,10,11,12,13,38,5,7)
	MR_init_label1(dump__dump_call_site_kind_and_callee_3_0,16)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_call_site_kind_and_callee'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_call_site_kind_and_callee_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(dump__dump_call_site_kind_and_callee_3_0_i42);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr3);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(dump__dump_call_site_kind_and_callee_3_0_i16);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(dump__dump_call_site_kind_and_callee_3_0_i5);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(dump__dump_call_site_kind_and_callee_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("callback", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("\")", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_kind_and_callee_3_0_i10);
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", \"", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_kind_and_callee_3_0_i11);
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_kind_and_callee_3_0_i12);
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_kind_and_callee_3_0_i13);
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("normal_call(", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_kind_and_callee_3_0_i38);
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("method_call", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(dump__dump_call_site_kind_and_callee_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("special_call", 12);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module28)
	MR_init_entry1(dump__dump_call_site_static_5_0);
	MR_init_label8(dump__dump_call_site_static_5_0,5,6,4,8,9,10,11,12)
	MR_init_label8(dump__dump_call_site_static_5_0,13,14,15,16,17,18,19,20)
	MR_init_label8(dump__dump_call_site_static_5_0,21,22,23,24,25,26,27,28)
	MR_init_label2(dump__dump_call_site_static_5_0,29,31)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_call_site_static'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_call_site_static_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dump__dump_call_site_static_5_0_i5);
	}
	MR_r1 = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(dump__dump_call_site_static_5_0_i4);
MR_def_label(dump__dump_call_site_static_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		dump__dump_call_site_static_5_0_i6);
MR_def_label(dump__dump_call_site_static_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_call_site_static_5_0_i31);
	}
	MR_r1 = MR_sv(1);
MR_def_label(dump__dump_call_site_static_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_static_5_0_i8);
MR_def_label(dump__dump_call_site_static_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i9);
MR_def_label(dump__dump_call_site_static_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("css", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i10);
MR_def_label(dump__dump_call_site_static_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_static_5_0_i11);
MR_def_label(dump__dump_call_site_static_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_static_5_0_i12);
MR_def_label(dump__dump_call_site_static_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i13);
MR_def_label(dump__dump_call_site_static_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcss_container\t= ps", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i14);
MR_def_label(dump__dump_call_site_static_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_static_5_0_i15);
MR_def_label(dump__dump_call_site_static_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_static_5_0_i16);
MR_def_label(dump__dump_call_site_static_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i17);
MR_def_label(dump__dump_call_site_static_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcss_slot_num\t= <", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i18);
MR_def_label(dump__dump_call_site_static_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_static_5_0_i19);
MR_def_label(dump__dump_call_site_static_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_static_5_0_i20);
MR_def_label(dump__dump_call_site_static_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i21);
MR_def_label(dump__dump_call_site_static_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcss_line_num\t= <", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i22);
MR_def_label(dump__dump_call_site_static_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_static_5_0_i23);
MR_def_label(dump__dump_call_site_static_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i24);
MR_def_label(dump__dump_call_site_static_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcss_goal_path\t= <", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_static_5_0_i25);
MR_def_label(dump__dump_call_site_static_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_static_5_0_i26);
MR_def_label(dump__dump_call_site_static_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tcss_kind\t= ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_static_5_0_i27);
MR_def_label(dump__dump_call_site_static_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(dump__dump_call_site_kind_and_callee_3_0,
		dump__dump_call_site_static_5_0_i28);
MR_def_label(dump__dump_call_site_static_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		dump__dump_call_site_static_5_0_i29);
MR_def_label(dump__dump_call_site_static_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(dump__dump_call_site_static_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module29)
	MR_init_entry1(fn__dump__dump_proc_id_1_0);
	MR_init_label8(fn__dump__dump_proc_id_1_0,5,6,7,8,9,10,3,13)
	MR_init_label1(fn__dump__dump_proc_id_1_0,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_proc_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dump__dump_proc_id_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__dump__dump_proc_id_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__dump__dump_proc_id_1_0_i5);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_sv(3) = (MR_Word) MR_string_const("+1", 2);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__dump__dump_proc_id_1_0_i6);
MR_def_label(fn__dump__dump_proc_id_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__dump__dump_proc_id_1_0_i6);
MR_def_label(fn__dump__dump_proc_id_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__dump__dump_proc_id_1_0_i7);
MR_def_label(fn__dump__dump_proc_id_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__dump__dump_proc_id_1_0_i8);
MR_def_label(fn__dump__dump_proc_id_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__dump__dump_proc_id_1_0_i9);
MR_def_label(fn__dump__dump_proc_id_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__dump__dump_proc_id_1_0_i10);
MR_def_label(fn__dump__dump_proc_id_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__dump__dump_proc_id_1_0_i14);
MR_def_label(fn__dump__dump_proc_id_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 3);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__dump__dump_proc_id_1_0_i13);
MR_def_label(fn__dump__dump_proc_id_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" predicate for type \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__dump__dump_proc_id_1_0_i14);
MR_def_label(fn__dump__dump_proc_id_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_coverage_point_0;

MR_BEGIN_MODULE(dump_module30)
	MR_init_entry1(dump__dump_proc_static_5_0);
	MR_init_label8(dump__dump_proc_static_5_0,5,6,4,8,9,10,11,12)
	MR_init_label8(dump__dump_proc_static_5_0,13,14,15,16,17,18,20,21)
	MR_init_label8(dump__dump_proc_static_5_0,52,19,22,23,25,27,28,29)
	MR_init_label8(dump__dump_proc_static_5_0,30,31,32,33,34,35,36,37)
	MR_init_label7(dump__dump_proc_static_5_0,41,42,43,44,46,48,50)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_proc_static'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_proc_static_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dump__dump_proc_static_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(dump__dump_proc_static_5_0_i4);
MR_def_label(dump__dump_proc_static_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__member_2_0,
		dump__dump_proc_static_5_0_i6);
MR_def_label(dump__dump_proc_static_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dump__dump_proc_static_5_0_i50);
	}
MR_def_label(dump__dump_proc_static_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__dump__dump_proc_id_1_0,
		dump__dump_proc_static_5_0_i8);
MR_def_label(dump__dump_proc_static_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_proc_static_5_0_i9);
MR_def_label(dump__dump_proc_static_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i10);
MR_def_label(dump__dump_proc_static_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ps", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i11);
MR_def_label(dump__dump_proc_static_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_5_0_i12);
MR_def_label(dump__dump_proc_static_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tps_id\t\t= ", 10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i13);
MR_def_label(dump__dump_proc_static_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_5_0_i14);
MR_def_label(dump__dump_proc_static_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		dump__dump_proc_static_5_0_i15);
MR_def_label(dump__dump_proc_static_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i16);
MR_def_label(dump__dump_proc_static_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tps_decl_module\t= ", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i17);
MR_def_label(dump__dump_proc_static_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_5_0_i18);
MR_def_label(dump__dump_proc_static_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i20);
MR_def_label(dump__dump_proc_static_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i21);
MR_def_label(dump__dump_proc_static_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(dump__dump_proc_static_5_0_i19);
	}
MR_def_label(dump__dump_proc_static_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(dump__dump_proc_static_5_0_i25);
MR_def_label(dump__dump_proc_static_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i22);
MR_def_label(dump__dump_proc_static_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tps_q_refined_id\t= ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i23);
MR_def_label(dump__dump_proc_static_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_5_0_i52);
MR_def_label(dump__dump_proc_static_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_sv(4)) != 0)) {
		MR_GOTO_LAB(dump__dump_proc_static_5_0_i30);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i27);
MR_def_label(dump__dump_proc_static_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tps_raw_id\t= ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i28);
MR_def_label(dump__dump_proc_static_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_5_0_i29);
MR_def_label(dump__dump_proc_static_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(dump__dump_proc_static_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_proc_static_5_0_i31);
MR_def_label(dump__dump_proc_static_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i32);
MR_def_label(dump__dump_proc_static_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i33);
MR_def_label(dump__dump_proc_static_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i34);
MR_def_label(dump__dump_proc_static_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tlocation\t= ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i35);
MR_def_label(dump__dump_proc_static_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_5_0_i36);
MR_def_label(dump__dump_proc_static_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(dump__dump_proc_static_5_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("\tin_interface\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_5_0_i37);
MR_def_label(dump__dump_proc_static_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(dump__dump_proc_static_5_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("not_zeroed", 10);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i42);
MR_def_label(dump__dump_proc_static_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("zeroed", 6);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i42);
MR_def_label(dump__dump_proc_static_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_5_0_i43);
MR_def_label(dump__dump_proc_static_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_5_0_i44);
MR_def_label(dump__dump_proc_static_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(array_util__array_foldl_from_0_4_0,
		dump__dump_proc_static_5_0_i46);
MR_def_label(dump__dump_proc_static_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(array_util__array_foldl_from_0_4_0,
		dump__dump_proc_static_5_0_i48);
MR_def_label(dump__dump_proc_static_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(dump__dump_proc_static_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module31)
	MR_init_entry1(dump__dump_proc_static_call_sites_4_0);
	MR_init_label6(dump__dump_proc_static_call_sites_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_proc_static_call_sites'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_proc_static_call_sites_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_proc_static_call_sites_4_0_i2);
MR_def_label(dump__dump_proc_static_call_sites_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_call_sites_4_0_i3);
MR_def_label(dump__dump_proc_static_call_sites_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("]: css", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_call_sites_4_0_i4);
MR_def_label(dump__dump_proc_static_call_sites_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_proc_static_call_sites_4_0_i5);
MR_def_label(dump__dump_proc_static_call_sites_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_call_sites_4_0_i6);
MR_def_label(dump__dump_proc_static_call_sites_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tps_site[", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_call_sites_4_0_i7);
MR_def_label(dump__dump_proc_static_call_sites_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0;
MR_decl_entry(fn__string__string_1_0);

MR_BEGIN_MODULE(dump_module32)
	MR_init_entry1(dump__dump_coverage_point_4_0);
	MR_init_label8(dump__dump_coverage_point_4_0,2,3,4,5,6,7,8,9)
	MR_init_label4(dump__dump_coverage_point_4_0,10,11,12,13)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_coverage_point'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_coverage_point_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		dump__dump_coverage_point_4_0_i2);
MR_def_label(dump__dump_coverage_point_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, cp_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		dump__dump_coverage_point_4_0_i3);
MR_def_label(dump__dump_coverage_point_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_coverage_point_4_0_i4);
MR_def_label(dump__dump_coverage_point_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_coverage_point_4_0_i5);
MR_def_label(dump__dump_coverage_point_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_coverage_point_4_0_i6);
MR_def_label(dump__dump_coverage_point_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_coverage_point_4_0_i7);
MR_def_label(dump__dump_coverage_point_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_coverage_point_4_0_i8);
MR_def_label(dump__dump_coverage_point_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_coverage_point_4_0_i9);
MR_def_label(dump__dump_coverage_point_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("]: ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_coverage_point_4_0_i10);
MR_def_label(dump__dump_coverage_point_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_coverage_point_4_0_i11);
MR_def_label(dump__dump_coverage_point_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_coverage_point_4_0_i12);
MR_def_label(dump__dump_coverage_point_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcoverage_point[", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_coverage_point_4_0_i13);
MR_def_label(dump__dump_coverage_point_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module33)
	MR_init_entry1(dump__dump_clique_index_entry_4_0);
	MR_init_label6(dump__dump_clique_index_entry_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_clique_index_entry'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_clique_index_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_clique_index_entry_4_0_i2);
MR_def_label(dump__dump_clique_index_entry_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_index_entry_4_0_i3);
MR_def_label(dump__dump_clique_index_entry_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" is in clique", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_index_entry_4_0_i4);
MR_def_label(dump__dump_clique_index_entry_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_clique_index_entry_4_0_i5);
MR_def_label(dump__dump_clique_index_entry_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_index_entry_4_0_i6);
MR_def_label(dump__dump_clique_index_entry_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pd", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_index_entry_4_0_i7);
MR_def_label(dump__dump_clique_index_entry_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(dump_module34)
	MR_init_entry1(dump__dump_clique_members_4_0);
	MR_init_label5(dump__dump_clique_members_4_0,2,3,4,5,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_clique_members'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_clique_members_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_clique_members_4_0_i2);
MR_def_label(dump__dump_clique_members_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" members:", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_members_4_0_i3);
MR_def_label(dump__dump_clique_members_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("clique", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_members_4_0_i4);
MR_def_label(dump__dump_clique_members_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_clique_members_4_0_i5);
MR_def_label(dump__dump_clique_members_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_2,
		dump__dump_clique_members_4_0_i7);
MR_def_label(dump__dump_clique_members_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(dump_module35)
	MR_init_entry1(dump__dump_pd_in_clique_3_0);
	MR_init_label1(dump__dump_pd_in_clique_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_pd_in_clique'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_pd_in_clique_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" pd", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_pd_in_clique_3_0_i2);
MR_def_label(dump__dump_pd_in_clique_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module36)
	MR_init_entry1(dump__dump_clique_parent_4_0);
	MR_init_label6(dump__dump_clique_parent_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_clique_parent'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_clique_parent_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_clique_parent_4_0_i2);
MR_def_label(dump__dump_clique_parent_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_parent_4_0_i3);
MR_def_label(dump__dump_clique_parent_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" parent: csd", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_parent_4_0_i4);
MR_def_label(dump__dump_clique_parent_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_clique_parent_4_0_i5);
MR_def_label(dump__dump_clique_parent_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_parent_4_0_i6);
MR_def_label(dump__dump_clique_parent_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("clique", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_parent_4_0_i7);
MR_def_label(dump__dump_clique_parent_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module37)
	MR_init_entry1(dump__dump_clique_maybe_child_4_0);
	MR_init_label7(dump__dump_clique_maybe_child_4_0,4,5,6,7,8,16,18)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_clique_maybe_child'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_clique_maybe_child_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dump__dump_clique_maybe_child_4_0_i18);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_clique_maybe_child_4_0_i4);
MR_def_label(dump__dump_clique_maybe_child_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_maybe_child_4_0_i5);
MR_def_label(dump__dump_clique_maybe_child_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" child: clique", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_maybe_child_4_0_i6);
MR_def_label(dump__dump_clique_maybe_child_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_clique_maybe_child_4_0_i7);
MR_def_label(dump__dump_clique_maybe_child_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_maybe_child_4_0_i8);
MR_def_label(dump__dump_clique_maybe_child_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("csd", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_clique_maybe_child_4_0_i16);
MR_def_label(dump__dump_clique_maybe_child_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(dump__dump_clique_maybe_child_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module38)
	MR_init_entry1(dump__dump_proc_static_caller_csds_4_0);
	MR_init_label6(dump__dump_proc_static_caller_csds_4_0,4,5,6,7,16,18)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_proc_static_caller_csds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_proc_static_caller_csds_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dump__dump_proc_static_caller_csds_4_0_i18);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_proc_static_caller_csds_4_0_i4);
MR_def_label(dump__dump_proc_static_caller_csds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" callers:", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_caller_csds_4_0_i5);
MR_def_label(dump__dump_proc_static_caller_csds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ps", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_proc_static_caller_csds_4_0_i6);
MR_def_label(dump__dump_proc_static_caller_csds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_proc_static_caller_csds_4_0_i7);
MR_def_label(dump__dump_proc_static_caller_csds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,14);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_2,
		dump__dump_proc_static_caller_csds_4_0_i16);
MR_def_label(dump__dump_proc_static_caller_csds_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(dump__dump_proc_static_caller_csds_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module39)
	MR_init_entry1(dump__dump_space_csdptr_3_0);
	MR_init_label1(dump__dump_space_csdptr_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_space_csdptr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_space_csdptr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" csd", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_space_csdptr_3_0_i2);
MR_def_label(dump__dump_space_csdptr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module40)
	MR_init_entry1(dump__dump_call_site_dynamic_to_static_4_0);
	MR_init_label6(dump__dump_call_site_dynamic_to_static_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_call_site_dynamic_to_static'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_call_site_dynamic_to_static_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_dynamic_to_static_4_0_i2);
MR_def_label(dump__dump_call_site_dynamic_to_static_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_to_static_4_0_i3);
MR_def_label(dump__dump_call_site_dynamic_to_static_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" is at css", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_to_static_4_0_i4);
MR_def_label(dump__dump_call_site_dynamic_to_static_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_dynamic_to_static_4_0_i5);
MR_def_label(dump__dump_call_site_dynamic_to_static_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_to_static_4_0_i6);
MR_def_label(dump__dump_call_site_dynamic_to_static_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("csd", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_dynamic_to_static_4_0_i7);
MR_def_label(dump__dump_call_site_dynamic_to_static_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module41)
	MR_init_entry1(dump__dump_call_site_calls_to_proc_4_0);
	MR_init_label6(dump__dump_call_site_calls_to_proc_4_0,2,3,4,5,6,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_call_site_calls_to_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_call_site_calls_to_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_calls_to_proc_4_0_i2);
MR_def_label(dump__dump_call_site_calls_to_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_calls_to_proc_4_0_i3);
MR_def_label(dump__dump_call_site_calls_to_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ps", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_calls_to_proc_4_0_i4);
MR_def_label(dump__dump_call_site_calls_to_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_calls_to_proc_4_0_i5);
MR_def_label(dump__dump_call_site_calls_to_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_calls_to_proc_4_0_i6);
MR_def_label(dump__dump_call_site_calls_to_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,15);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_2,
		dump__dump_call_site_calls_to_proc_4_0_i8);
MR_def_label(dump__dump_call_site_calls_to_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__to_assoc_list_1_0);

MR_BEGIN_MODULE(dump_module42)
	MR_init_entry1(dump__dump_call_site_calls_4_0);
	MR_init_label8(dump__dump_call_site_calls_4_0,3,8,9,10,11,7,13,14)
	MR_init_label3(dump__dump_call_site_calls_4_0,15,16,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dump_call_site_calls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__dump_call_site_calls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		dump__dump_call_site_calls_4_0_i3);
MR_def_label(dump__dump_call_site_calls_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dump__dump_call_site_calls_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dump__dump_call_site_calls_4_0_i7);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_calls_4_0_i8);
MR_def_label(dump__dump_call_site_calls_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" calls one procedure: ", 22);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_calls_4_0_i9);
MR_def_label(dump__dump_call_site_calls_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("css", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_calls_4_0_i10);
MR_def_label(dump__dump_call_site_calls_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_calls_4_0_i11);
MR_def_label(dump__dump_call_site_calls_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(dump__dump_call_site_calls_to_proc_4_0);
MR_def_label(dump__dump_call_site_calls_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		dump__dump_call_site_calls_4_0_i13);
MR_def_label(dump__dump_call_site_calls_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" calls several procedures:\n", 27);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_calls_4_0_i14);
MR_def_label(dump__dump_call_site_calls_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("css", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		dump__dump_call_site_calls_4_0_i15);
MR_def_label(dump__dump_call_site_calls_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		dump__dump_call_site_calls_4_0_i16);
MR_def_label(dump__dump_call_site_calls_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
MR_def_label(dump__dump_call_site_calls_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module43)
	MR_init_entry1(__Unify___dump__dump_cliques_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dump__dump_cliques_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(dump_module44)
	MR_init_entry1(__Compare___dump__dump_cliques_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dump__dump_cliques_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(dump_module45)
	MR_init_entry1(__Unify___dump__dump_options_0_0);
	MR_init_label3(__Unify___dump__dump_options_0_0,4,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dump__dump_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___dump__dump_options_0_0_i6);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___dump__dump_options_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr4, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r2 = MR_ctfield(0, MR_tempr3, 1);
	MR_r3 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___dump__dump_options_0_0_i4);
MR_def_label(__Unify___dump__dump_options_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___dump__dump_options_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___dump__dump_options_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___dump__dump_options_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___dump__dump_options_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___dump__dump_options_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___dump__dump_options_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(dump_module46)
	MR_init_entry1(__Compare___dump__dump_options_0_0);
	MR_init_label8(__Compare___dump__dump_options_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dump__dump_options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___dump__dump_options_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___dump__dump_options_0_0_i2);
MR_def_label(__Compare___dump__dump_options_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___dump__dump_options_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___dump__dump_options_0_0_i5);
MR_def_label(__Compare___dump__dump_options_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___dump__dump_options_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(dump, dumpable_array);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___dump__dump_options_0_0_i9);
MR_def_label(__Compare___dump__dump_options_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___dump__dump_options_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___dump__dump_options_0_0_i13);
MR_def_label(__Compare___dump__dump_options_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___dump__dump_options_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___dump__dump_options_0_0_i17);
MR_def_label(__Compare___dump__dump_options_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___dump__dump_options_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___dump__dump_options_0_0_i21);
MR_def_label(__Compare___dump__dump_options_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___dump__dump_options_0_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___dump__dump_options_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module47)
	MR_init_entry1(__Unify___dump__dump_prop_measurements_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dump__dump_prop_measurements_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module48)
	MR_init_entry1(__Compare___dump__dump_prop_measurements_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dump__dump_prop_measurements_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module49)
	MR_init_entry1(__Unify___dump__dump_rev_links_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dump__dump_rev_links_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module50)
	MR_init_entry1(__Compare___dump__dump_rev_links_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dump__dump_rev_links_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module51)
	MR_init_entry1(__Unify___dump__dumpable_array_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dump__dumpable_array_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module52)
	MR_init_entry1(__Compare___dump__dumpable_array_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dump__dumpable_array_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module53)
	MR_init_entry1(__Unify___dump__restriction_0_0);
	MR_init_label4(__Unify___dump__restriction_0_0,14,5,7,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___dump__restriction_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___dump__restriction_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___dump__restriction_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___dump__restriction_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___dump__restriction_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___dump__restriction_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___dump__restriction_0_0_i7);
MR_def_label(__Unify___dump__restriction_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___dump__restriction_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___dump__restriction_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module54)
	MR_init_entry1(__Compare___dump__restriction_0_0);
	MR_init_label6(__Compare___dump__restriction_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___dump__restriction_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___dump__restriction_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___dump__restriction_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___dump__restriction_0_0_i7);
	}
MR_def_label(__Compare___dump__restriction_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___dump__restriction_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___dump__restriction_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___dump__restriction_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___dump__restriction_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___dump__restriction_0_0_i11);
MR_def_label(__Compare___dump__restriction_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___dump__restriction_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___dump__restriction_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module55)
	MR_init_entry1(__Unify___dump__show_restricted_dump_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dump__show_restricted_dump_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module56)
	MR_init_entry1(__Compare___dump__show_restricted_dump_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dump__show_restricted_dump_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module57)
	MR_init_entry1(__Unify___dump__show_stats_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dump__show_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module58)
	MR_init_entry1(__Compare___dump__show_stats_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dump__show_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module59)
	MR_init_entry1(dump__IntroducedFrom__pred__dump_deep_prop_measurements__799__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_deep_prop_measurements__799__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__IntroducedFrom__pred__dump_deep_prop_measurements__799__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module60)
	MR_init_entry1(dump__IntroducedFrom__pred__dump_deep_prop_measurements__808__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_deep_prop_measurements__808__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__IntroducedFrom__pred__dump_deep_prop_measurements__808__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module61)
	MR_init_entry1(dump__IntroducedFrom__pred__dump_deep_prop_measurements__817__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_deep_prop_measurements__817__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__IntroducedFrom__pred__dump_deep_prop_measurements__817__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dump_module62)
	MR_init_entry1(dump__IntroducedFrom__pred__dump_deep_prop_measurements__826__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_deep_prop_measurements__826__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dump__IntroducedFrom__pred__dump_deep_prop_measurements__826__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svset__insert_3_0);
MR_decl_entry(fn__array__to_list_1_0);
MR_decl_entry(svset__insert_list_3_0);

MR_BEGIN_MODULE(dump_module63)
	MR_init_entry1(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0);
	MR_init_label4(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0,2,3,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__get_static_ptrs_from_dynamic_proc__[2]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 0);
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(svset__insert_3_0,
		f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i2);
MR_def_label(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i3);
MR_def_label(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(fn__array__to_list_1_0,
		f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i4);
MR_def_label(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(svset__insert_list_3_0,
		f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i5);
MR_def_label(f_100_117_109_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_0,5)
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

static void mercury__dump_maybe_bunch_0(void)
{
	dump_module0();
	dump_module1();
	dump_module2();
	dump_module3();
	dump_module4();
	dump_module5();
	dump_module6();
	dump_module7();
	dump_module8();
	dump_module9();
	dump_module10();
	dump_module11();
	dump_module12();
	dump_module13();
	dump_module14();
	dump_module15();
	dump_module16();
	dump_module17();
	dump_module18();
	dump_module19();
	dump_module20();
	dump_module21();
	dump_module22();
	dump_module23();
	dump_module24();
	dump_module25();
	dump_module26();
	dump_module27();
	dump_module28();
	dump_module29();
	dump_module30();
	dump_module31();
	dump_module32();
	dump_module33();
	dump_module34();
	dump_module35();
	dump_module36();
	dump_module37();
	dump_module38();
	dump_module39();
}

static void mercury__dump_maybe_bunch_1(void)
{
	dump_module40();
	dump_module41();
	dump_module42();
	dump_module43();
	dump_module44();
	dump_module45();
	dump_module46();
	dump_module47();
	dump_module48();
	dump_module49();
	dump_module50();
	dump_module51();
	dump_module52();
	dump_module53();
	dump_module54();
	dump_module55();
	dump_module56();
	dump_module57();
	dump_module58();
	dump_module59();
	dump_module60();
	dump_module61();
	dump_module62();
	dump_module63();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__dump__init(void);
void mercury__dump__init_type_tables(void);
void mercury__dump__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__dump__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__dump__init_complexity_procs(void);
#endif

void mercury__dump__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__dump_maybe_bunch_0();
	mercury__dump_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dump__type_ctor_info_dump_cliques_0,
		dump__dump_cliques_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dump__type_ctor_info_dump_options_0,
		dump__dump_options_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dump__type_ctor_info_dump_prop_measurements_0,
		dump__dump_prop_measurements_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dump__type_ctor_info_dump_rev_links_0,
		dump__dump_rev_links_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dump__type_ctor_info_dumpable_array_0,
		dump__dumpable_array_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dump__type_ctor_info_restriction_0,
		dump__restriction_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dump__type_ctor_info_show_restricted_dump_0,
		dump__show_restricted_dump_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dump__type_ctor_info_show_stats_0,
		dump__show_stats_0_0);
	mercury__dump__init_debugger();
}

void mercury__dump__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_dump__type_ctor_info_dump_cliques_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dump__type_ctor_info_dump_options_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dump__type_ctor_info_dump_prop_measurements_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dump__type_ctor_info_dump_rev_links_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dump__type_ctor_info_dumpable_array_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dump__type_ctor_info_restriction_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dump__type_ctor_info_show_restricted_dump_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dump__type_ctor_info_show_stats_0);
	}
}


void mercury__dump__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__dump__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__dump);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__dump__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
