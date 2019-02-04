/*
** Automatically generated from `startup.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__startup__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "startup.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "startup.c"
#line 268 "profile.int"
#include "profile.mh"

#line 35 "startup.c"
#line 149 "../library/array.int"
#include "array.mh"

#line 39 "startup.c"
#line 9 "read_profile.int"
#include "read_profile.mh"

#line 43 "startup.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 47 "startup.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 51 "startup.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 55 "startup.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 59 "startup.c"
#line 60 "startup.c"
#include "startup.mh"

#line 63 "startup.c"
#line 64 "startup.c"
#ifndef STARTUP_DECL_GUARD
#define STARTUP_DECL_GUARD

#line 68 "startup.c"
#line 69 "startup.c"

#endif
#line 72 "startup.c"

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
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];
MR_decl_label2(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0, 4,2)
MR_decl_label2(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0, 2,3)
MR_decl_label7(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0, 3,4,7,9,8,14,2)
MR_decl_label2(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0, 2,3)
MR_decl_label10(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0, 2,7,9,5,14,15,18,19,20,21)
MR_decl_label5(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0, 17,23,24,25,27)
MR_decl_label10(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0, 2,7,9,5,14,15,18,19,20,21)
MR_decl_label5(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0, 17,23,24,25,27)
MR_decl_label3(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0, 3,4,2)
MR_decl_label4(startup__accumulate_ps_costs_6_0, 2,3,4,5)
MR_decl_label8(startup__construct_call_site_caller_2_6_0, 31,3,4,6,12,14,11,2)
MR_decl_label6(startup__construct_call_site_calls_2_7_0, 26,3,4,6,12,2)
MR_decl_label6(startup__construct_clique_parents_8_0, 3,4,8,9,10,2)
MR_decl_label6(startup__construct_clique_parents_2_8_0, 3,5,9,12,4,2)
MR_decl_label4(startup__construct_proc_callers_5_0, 3,5,6,2)
MR_decl_label4(startup__ensure_module_has_module_data_3_0, 3,2,5,6)
MR_decl_label4(startup__flat_call_sites_3_0, 2,3,7,8)
MR_decl_label5(startup__gather_call_site_csdptrs_5_0, 4,6,9,3,10)
MR_decl_label2(startup__maybe_report_msg_4_0, 4,13)
MR_decl_label10(startup__propagate_to_call_site_7_0, 2,3,4,5,6,7,8,9,10,12)
MR_decl_label4(startup__propagate_to_call_site_7_0, 11,15,14,18)
MR_decl_label10(startup__propagate_to_clique_4_0, 2,4,5,7,10,12,13,14,15,17)
MR_decl_label5(startup__propagate_to_clique_4_0, 16,20,19,23,8)
MR_decl_label10(startup__propagate_to_proc_dynamic_9_0, 2,4,6,7,8,9,10,11,12,13)
MR_decl_label8(startup__propagate_to_proc_dynamic_9_0, 16,14,17,20,22,23,24,18)
MR_decl_label9(startup__read_and_startup_10_0, 4,3,5,6,7,8,2,11,12)
MR_decl_label1(startup__read_and_startup_default_deep_options_9_0, 2)
MR_decl_label5(startup__record_csd_containers_2_4_0, 14,3,4,6,8)
MR_decl_label8(startup__record_csd_containers_zeroed_pss_6_0, 2,6,7,8,9,11,12,14)
MR_decl_label7(startup__record_css_containers_2_5_0, 18,3,4,6,8,10,2)
MR_decl_label5(startup__record_css_containers_module_procs_6_0, 2,3,6,4,12)
MR_decl_label10(startup__startup_11_0, 2,3,4,6,8,11,13,14,15,16)
MR_decl_label10(startup__startup_11_0, 18,20,22,23,24,26,28,29,30,31)
MR_decl_label10(startup__startup_11_0, 32,27,33,34,35,36,37,38,39,40)
MR_decl_label10(startup__startup_11_0, 41,42,43,44,45,46,48,49,51,55)
MR_decl_label10(startup__startup_11_0, 56,57,58,60,63,64,65,66,67,70)
MR_decl_label10(startup__startup_11_0, 71,72,73,74,76,79,80,81,82,83)
MR_decl_label10(startup__startup_11_0, 84,87,89,90,91,92,93,94,86,97)
MR_decl_label10(startup__startup_11_0, 101,103,107,108,111,85,112,113,114,115)
MR_decl_label10(startup__startup_11_0, 116,122,123,124,120,121,128,129,130,131)
MR_decl_label10(startup__startup_11_0, 132,135,136,137,138,139,140,141,142,143)
MR_decl_label10(startup__startup_11_0, 144,145,146,148,149,150,153,154,155,156)
MR_decl_label7(startup__startup_11_0, 157,158,159,160,161,162,163)
MR_decl_label10(startup__summarize_call_site_dynamic_10_0, 2,4,5,6,8,10,7,11,12,13)
MR_decl_label7(startup__summarize_call_site_dynamic_10_0, 14,15,17,18,20,21,3)
MR_decl_label3(startup__summarize_call_site_dynamics_2_0, 3,4,7)
MR_decl_label1(startup__summarize_modules_2_0, 3)
MR_decl_label10(startup__summarize_proc_dynamic_9_0, 2,3,4,6,8,5,9,10,11,12)
MR_decl_label5(startup__summarize_proc_dynamic_9_0, 13,15,16,18,19)
MR_decl_label3(startup__summarize_proc_dynamics_2_0, 3,4,7)
MR_decl_label4(fn__startup__add_comp_tables_2_0, 3,2,6,5)
MR_decl_label3(fn__startup__add_to_override_3_0, 3,5,2)
MR_decl_label3(fn__startup__contour_file_name_1_0, 3,2,6)
MR_decl_label2(fn__startup__initialize_module_data_1_0, 2,3)
MR_decl_label3(fn__startup__make_progrep_filename_1_0, 3,2,6)
MR_decl_label1(fn__startup__summarize_module_costs_2_0, 3)
MR_decl_static(fn__startup__make_progrep_filename_1_0)
MR_decl_static(fn__startup__contour_file_name_1_0)
MR_decl_static(startup__summarize_proc_dynamics_2_0)
MR_decl_static(startup__summarize_call_site_dynamics_2_0)
MR_decl_static(startup__summarize_modules_2_0)
MR_decl_static(startup__maybe_report_stats_3_0)
MR_decl_static(startup__maybe_report_msg_4_0)
MR_decl_static(startup__startup_11_0)
MR_def_extern_entry(startup__read_and_startup_10_0)
MR_def_extern_entry(startup__read_and_startup_default_deep_options_9_0)
MR_decl_static(fn__startup__initialize_module_data_1_0)
MR_decl_static(startup__ensure_module_has_module_data_3_0)
MR_decl_static(startup__record_css_containers_2_5_0)
MR_decl_static(startup__record_css_containers_module_procs_6_0)
MR_decl_static(startup__record_csd_containers_2_4_0)
MR_decl_static(startup__record_csd_containers_zeroed_pss_6_0)
MR_decl_static(startup__flat_call_sites_3_0)
MR_decl_static(startup__construct_clique_parents_8_0)
MR_decl_static(startup__construct_clique_parents_2_8_0)
MR_decl_static(startup__construct_proc_callers_5_0)
MR_decl_static(startup__construct_call_site_caller_3_6_0)
MR_decl_static(startup__construct_call_site_caller_2_6_0)
MR_decl_static(startup__construct_call_site_caller_5_0)
MR_decl_static(startup__construct_call_site_calls_3_7_0)
MR_decl_static(startup__construct_call_site_calls_2_7_0)
MR_decl_static(startup__construct_call_site_calls_5_0)
MR_decl_static(startup__sum_call_sites_in_proc_dynamic_4_0)
MR_decl_static(startup__summarize_proc_dynamic_9_0)
MR_decl_static(startup__summarize_call_site_dynamic_10_0)
MR_decl_static(fn__startup__summarize_module_costs_2_0)
MR_decl_static(startup__accumulate_ps_costs_6_0)
MR_decl_static(startup__propagate_to_clique_4_0)
MR_decl_static(fn__startup__add_comp_tables_2_0)
MR_decl_static(fn__startup__add_to_override_3_0)
MR_decl_static(startup__propagate_to_proc_dynamic_9_0)
MR_decl_static(startup__propagate_to_call_site_7_0)
MR_decl_static(fn__startup__select_override_comp_2_0)
MR_decl_static(startup__gather_call_site_csdptrs_5_0)
MR_decl_static(startup__IntroducedFrom__pred__record_css_containers_2__417__1_2_0)
MR_decl_static(startup__IntroducedFrom__pred__record_css_containers_2__419__1_2_0)
MR_decl_static(startup__IntroducedFrom__pred__record_csd_containers_2__460__1_2_0)
MR_decl_static(startup__IntroducedFrom__pred__gather_call_site_csdptrs__964__1_1_0)
MR_decl_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0)
MR_decl_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0)
MR_decl_static(fn__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_0)
MR_decl_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0)
MR_decl_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_module_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
static const struct mercury_type_0 mercury_common_0[31] =
{
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(measurements, own_prof_info)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_COMMON(1,0)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(measurements, own_prof_info)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_static)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_static)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static_ptr)
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
MR_CTOR0_ADDR(profile, proc_static)
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
MR_CTOR0_ADDR(profile, proc_static)
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
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, clique_ptr)
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
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_COMMON(0,18)
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
MR_COMMON(0,20)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_COMMON(1,3)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, module_rep),
MR_CTOR0_ADDR(unit, unit)
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
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,25)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,20)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, call_site_static_ptr)
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
MR_TAG_COMMON(0,1,5)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
static const struct mercury_type_1 mercury_common_1[8] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,0,8)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(0,20)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, module_data)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,0,25)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__summarize_proc_dynamics_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
static const MR_UserClosureId
mercury_data__closure_layout__startup__propagate_to_clique_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__startup__summarize_proc_dynamics_2_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__propagate_to_clique_4_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__summarize_call_site_dynamics_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__startup__summarize_call_site_dynamics_2_0_1,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(0,5),
MR_COMMON(0,6),
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__summarize_modules_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_8;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__startup__propagate_to_clique_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__startup__add_comp_tables_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__startup__propagate_to_call_site_7_0_1;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__startup__summarize_modules_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, module_data),
MR_CTOR0_ADDR(profile, module_data)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__propagate_to_clique_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__startup__add_comp_tables_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__propagate_to_call_site_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;
static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__startup__construct_call_site_caller_2_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__startup__summarize_module_costs_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_COMMON(0,13),
MR_COMMON(0,13),
MR_COMMON(0,14),
MR_COMMON(0,14)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__construct_call_site_caller_2_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,13),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__startup__summarize_module_costs_2_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};

MR_decl_entry(fn__measurements__add_inherit_to_inherit_2_0);
static const struct mercury_type_6 mercury_common_6[14] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(startup__record_css_containers_module_procs_6_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__startup__initialize_module_data_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(startup__record_csd_containers_zeroed_pss_6_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(startup__ensure_module_has_module_data_3_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(startup__ensure_module_has_module_data_3_0),
0
},
{
MR_COMMON(10,0),
MR_ENTRY_AP(startup__sum_call_sites_in_proc_dynamic_4_0),
0
},
{
MR_COMMON(10,1),
MR_ENTRY_AP(startup__propagate_to_clique_4_0),
0
},
{
MR_COMMON(9,3),
MR_ENTRY_AP(startup__gather_call_site_csdptrs_5_0),
0
},
{
MR_COMMON(9,4),
MR_ENTRY_AP(startup__gather_call_site_csdptrs_5_0),
0
},
{
MR_COMMON(9,5),
MR_ENTRY_AP(startup__gather_call_site_csdptrs_5_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__startup__select_override_comp_2_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(fn__measurements__add_inherit_to_inherit_2_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(fn__measurements__add_inherit_to_inherit_2_0),
0
},
{
MR_COMMON(12,0),
MR_ENTRY_AP(startup__IntroducedFrom__pred__gather_call_site_csdptrs__964__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__startup__record_css_containers_2_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__startup__record_css_containers_2_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__startup__record_csd_containers_2_4_0_1;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,10),
MR_CTOR0_ADDR(profile, module_data)
},
{
(MR_Word *) &mercury_data__closure_layout__startup__record_css_containers_2_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, proc_static_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__startup__record_css_containers_2_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__startup__record_csd_containers_2_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_initial_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__startup__construct_clique_parents_8_0_2;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_4,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_COMMON(0,16),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(0,17),
MR_COMMON(0,17),
MR_COMMON(0,19),
MR_COMMON(0,19)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__construct_clique_parents_8_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_COMMON(0,16),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(0,17),
MR_COMMON(0,17),
MR_COMMON(0,19),
MR_COMMON(0,19)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__startup__record_csd_containers_zeroed_pss_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_is_zeroed_0;
static const MR_UserClosureId
mercury_data__closure_layout__startup__flat_call_sites_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__startup__construct_clique_parents_8_0_1;
static const struct mercury_type_9 mercury_common_9[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic),
MR_COMMON(0,21),
MR_COMMON(0,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_6,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_7,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_COMMON(0,22),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__record_csd_containers_zeroed_pss_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, call_site_array_slot),
MR_COMMON(0,27),
MR_COMMON(0,27),
MR_CTOR0_ADDR(profile, is_zeroed),
MR_CTOR0_ADDR(profile, is_zeroed)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__flat_call_sites_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, call_site_array_slot),
MR_COMMON(0,27),
MR_COMMON(0,27),
MR_CTOR0_ADDR(profile, is_zeroed),
MR_CTOR0_ADDR(profile, is_zeroed)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__construct_clique_parents_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, call_site_array_slot),
MR_COMMON(0,27),
MR_COMMON(0,27),
MR_CTOR0_ADDR(profile, is_zeroed),
MR_CTOR0_ADDR(profile, is_zeroed)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_11;
static const struct mercury_type_10 mercury_common_10[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_10,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__startup_11_0_11,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,24),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, deep)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__construct_call_site_calls_2_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__startup__propagate_to_proc_dynamic_9_0_1;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__startup__construct_call_site_calls_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,13),
MR_COMMON(0,29),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(0,22),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__startup__propagate_to_proc_dynamic_9_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__gather_call_site_csdptrs_5_0_1;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__startup__gather_call_site_csdptrs_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__startup__gather_call_site_csdptrs_5_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"lambda_startup_m_964",
1,
0
},
"startup",
"startup.m",
964,
"d1;c6;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__propagate_to_call_site_7_0_1 = {
{
MR_FUNCTION,
"measurements",
"measurements",
"add_inherit_to_inherit",
3,
0
},
"startup",
"startup.m",
895,
"d1;c4;e;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__propagate_to_proc_dynamic_9_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"propagate_to_call_site",
7,
0
},
"startup",
"startup.m",
835,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__startup__add_comp_tables_2_0_1 = {
{
MR_FUNCTION,
"measurements",
"measurements",
"add_inherit_to_inherit",
3,
0
},
"startup",
"startup.m",
895,
"d1;c4;e;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__propagate_to_clique_4_0_2 = {
{
MR_FUNCTION,
"startup",
"startup",
"select_override_comp",
3,
0
},
"startup",
"startup.m",
907,
"d1;c4;e;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__propagate_to_clique_4_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"propagate_to_proc_dynamic",
9,
0
},
"startup",
"startup.m",
813,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__startup__summarize_module_costs_2_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"accumulate_ps_costs",
6,
0
},
"startup",
"startup.m",
793,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__construct_call_site_calls_2_7_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"construct_call_site_calls_3",
7,
0
},
"startup",
"startup.m",
626,
"d1;c8;t;c3;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__construct_call_site_caller_2_6_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"construct_call_site_caller_3",
6,
0
},
"startup",
"startup.m",
567,
"d1;c7;t;c3;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__construct_clique_parents_8_0_2 = {
{
MR_PREDICATE,
"startup",
"startup",
"construct_clique_parents_2",
8,
0
},
"startup",
"startup.m",
480,
"d1;c9;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__construct_clique_parents_8_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"gather_call_site_csdptrs",
5,
0
},
"startup",
"startup.m",
941,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__flat_call_sites_3_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"gather_call_site_csdptrs",
5,
0
},
"startup",
"startup.m",
941,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__record_csd_containers_zeroed_pss_6_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"gather_call_site_csdptrs",
5,
0
},
"startup",
"startup.m",
941,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__record_csd_containers_2_4_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"lambda_startup_m_460",
2,
0
},
"startup",
"startup.m",
460,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__record_css_containers_2_5_0_2 = {
{
MR_PREDICATE,
"startup",
"startup",
"lambda_startup_m_419",
2,
0
},
"startup",
"startup.m",
419,
"d1;c6;t;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__record_css_containers_2_5_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"lambda_startup_m_417",
2,
0
},
"startup",
"startup.m",
417,
"d1;c6;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_11 = {
{
MR_PREDICATE,
"startup",
"startup",
"propagate_to_clique",
4,
0
},
"startup",
"startup.m",
307,
"c176;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_10 = {
{
MR_PREDICATE,
"startup",
"startup",
"sum_call_sites_in_proc_dynamic",
4,
0
},
"startup",
"startup.m",
288,
"c157;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_9 = {
{
MR_PREDICATE,
"startup",
"startup",
"ensure_module_has_module_data",
3,
0
},
"startup",
"startup.m",
237,
"c138;s2-2;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_8 = {
{
MR_PREDICATE,
"startup",
"startup",
"ensure_module_has_module_data",
3,
0
},
"startup",
"startup.m",
237,
"c138;s2-2;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_7 = {
{
MR_PREDICATE,
"startup",
"startup",
"construct_call_site_calls",
5,
0
},
"startup",
"startup.m",
212,
"c128;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_6 = {
{
MR_PREDICATE,
"startup",
"startup",
"construct_call_site_caller",
5,
0
},
"startup",
"startup.m",
203,
"c117;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_5 = {
{
MR_PREDICATE,
"startup",
"startup",
"construct_proc_callers",
5,
0
},
"startup",
"startup.m",
194,
"c105;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_4 = {
{
MR_PREDICATE,
"startup",
"startup",
"construct_clique_parents",
8,
0
},
"startup",
"startup.m",
182,
"c93;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_3 = {
{
MR_PREDICATE,
"startup",
"startup",
"record_csd_containers_zeroed_pss",
6,
0
},
"startup",
"startup.m",
121,
"c30;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_2 = {
{
MR_FUNCTION,
"startup",
"startup",
"initialize_module_data",
2,
0
},
"startup",
"startup.m",
114,
"c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__startup_11_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"record_css_containers_module_procs",
6,
0
},
"startup",
"startup.m",
112,
"c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__summarize_modules_2_0_1 = {
{
MR_FUNCTION,
"startup",
"startup",
"summarize_module_costs",
3,
0
},
"startup",
"startup.m",
786,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__summarize_call_site_dynamics_2_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"summarize_call_site_dynamic",
10,
0
},
"startup",
"startup.m",
734,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__startup__summarize_proc_dynamics_2_0_1 = {
{
MR_PREDICATE,
"startup",
"startup",
"summarize_proc_dynamic",
9,
0
},
"startup",
"startup.m",
691,
"d1;c5;"
};


MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(startup_module0)
	MR_init_entry1(fn__startup__make_progrep_filename_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__startup__make_progrep_filename_1_0);
	MR_init_label3(fn__startup__make_progrep_filename_1_0,3,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_progrep_filename'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__startup__make_progrep_filename_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".data", 5);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		fn__startup__make_progrep_filename_1_0_i3);
MR_def_label(fn__startup__make_progrep_filename_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__startup__make_progrep_filename_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(".procrep", 8);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__startup__make_progrep_filename_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Couldn\'t remove suffix from deep file name: ", 44);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__startup__make_progrep_filename_1_0_i6);
MR_def_label(fn__startup__make_progrep_filename_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module1)
	MR_init_entry1(fn__startup__contour_file_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__startup__contour_file_name_1_0);
	MR_init_label3(fn__startup__contour_file_name_1_0,3,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contour_file_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__startup__contour_file_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".data", 5);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		fn__startup__contour_file_name_1_0_i3);
MR_def_label(fn__startup__contour_file_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__startup__contour_file_name_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(".contour", 8);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__startup__contour_file_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Couldn\'t remove suffix from deep file name: ", 44);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__startup__contour_file_name_1_0_i6);
MR_def_label(fn__startup__contour_file_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__copy_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
MR_decl_entry(array_util__array_foldl2_from_1_6_1);

MR_BEGIN_MODULE(startup_module2)
	MR_init_entry1(startup__summarize_proc_dynamics_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__summarize_proc_dynamics_2_0);
	MR_init_label3(startup__summarize_proc_dynamics_2_0,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'summarize_proc_dynamics'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__summarize_proc_dynamics_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__summarize_proc_dynamic_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 23);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 20);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(1), 19);
	}
	MR_np_call_localret_ent(fn__array__copy_1_0,
		startup__summarize_proc_dynamics_2_0_i3);
MR_def_label(startup__summarize_proc_dynamics_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__copy_1_0,
		startup__summarize_proc_dynamics_2_0_i4);
MR_def_label(startup__summarize_proc_dynamics_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(array_util__array_foldl2_from_1_6_1,
		startup__summarize_proc_dynamics_2_0_i7);
MR_def_label(startup__summarize_proc_dynamics_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 28);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
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
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_r1;
	MR_tfield(0, MR_tempr1, 20) = MR_r2;
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_tfield(0, MR_tempr1, 25) = MR_tfield(0, MR_tempr2, 25);
	MR_tfield(0, MR_tempr1, 26) = MR_tfield(0, MR_tempr2, 26);
	MR_tfield(0, MR_tempr1, 27) = MR_tfield(0, MR_tempr2, 27);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module3)
	MR_init_entry1(startup__summarize_call_site_dynamics_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__summarize_call_site_dynamics_2_0);
	MR_init_label3(startup__summarize_call_site_dynamics_2_0,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'summarize_call_site_dynamics'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__summarize_call_site_dynamics_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__summarize_call_site_dynamic_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 24);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 22);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(1), 21);
	}
	MR_np_call_localret_ent(fn__array__copy_1_0,
		startup__summarize_call_site_dynamics_2_0_i3);
MR_def_label(startup__summarize_call_site_dynamics_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__copy_1_0,
		startup__summarize_call_site_dynamics_2_0_i4);
MR_def_label(startup__summarize_call_site_dynamics_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(array_util__array_foldl2_from_1_6_1,
		startup__summarize_call_site_dynamics_2_0_i7);
MR_def_label(startup__summarize_call_site_dynamics_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 28);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
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
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_r1;
	MR_tfield(0, MR_tempr1, 22) = MR_r2;
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_tfield(0, MR_tempr1, 25) = MR_tfield(0, MR_tempr2, 25);
	MR_tfield(0, MR_tempr1, 26) = MR_tfield(0, MR_tempr2, 26);
	MR_tfield(0, MR_tempr1, 27) = MR_tfield(0, MR_tempr2, 27);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
MR_decl_entry(fn__map__map_values_only_2_0);

MR_BEGIN_MODULE(startup_module4)
	MR_init_entry1(startup__summarize_modules_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__summarize_modules_2_0);
	MR_init_label1(startup__summarize_modules_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'summarize_modules'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__summarize_modules_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__startup__summarize_module_costs_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r5 = MR_tfield(0, MR_sv(1), 25);
	}
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		startup__summarize_modules_2_0_i3);
MR_def_label(startup__summarize_modules_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 28);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
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
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_tfield(0, MR_tempr1, 25) = MR_r1;
	MR_tfield(0, MR_tempr1, 26) = MR_tfield(0, MR_tempr2, 26);
	MR_tfield(0, MR_tempr1, 27) = MR_tfield(0, MR_tempr2, 27);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module5)
	MR_init_entry1(startup__maybe_report_stats_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__maybe_report_stats_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_report_stats'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__maybe_report_stats_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__flush_output_3_0);

MR_BEGIN_MODULE(startup_module6)
	MR_init_entry1(startup__maybe_report_msg_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__maybe_report_msg_4_0);
	MR_init_label2(startup__maybe_report_msg_4_0,4,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_report_msg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__maybe_report_msg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(startup__maybe_report_msg_4_0_i13);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_4_0,
		startup__maybe_report_msg_4_0_i4);
MR_def_label(startup__maybe_report_msg_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_3_0);
MR_def_label(startup__maybe_report_msg_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__dump__default_dump_options_0_0);
MR_decl_entry(fn__array_util__u_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(canonical__canonicalize_cliques_2_0);
MR_decl_entry(array__max_2_0);
MR_decl_entry(callgraph__find_cliques_2_0);
MR_decl_entry(callgraph__make_clique_indexes_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
MR_decl_entry(array__init_3_0);
MR_decl_entry(array_util__array_foldl_from_1_4_1);
MR_decl_entry(mdbcomp__program_representation__read_prog_rep_file_4_0);
MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(io__write_4_0);
MR_decl_entry(io__nl_3_0);
MR_decl_entry(exclude__read_exclude_file_5_0);
MR_decl_entry(fn__measurements__zero_inherit_prof_info_0_0);
MR_decl_entry(fn__measurements__zero_own_prof_info_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;

MR_BEGIN_MODULE(startup_module7)
	MR_init_entry1(startup__startup_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__startup_11_0);
	MR_init_label10(startup__startup_11_0,2,3,4,6,8,11,13,14,15,16)
	MR_init_label10(startup__startup_11_0,18,20,22,23,24,26,28,29,30,31)
	MR_init_label10(startup__startup_11_0,32,27,33,34,35,36,37,38,39,40)
	MR_init_label10(startup__startup_11_0,41,42,43,44,45,46,48,49,51,55)
	MR_init_label10(startup__startup_11_0,56,57,58,60,63,64,65,66,67,70)
	MR_init_label10(startup__startup_11_0,71,72,73,74,76,79,80,81,82,83)
	MR_init_label10(startup__startup_11_0,84,87,89,90,91,92,93,94,86,97)
	MR_init_label10(startup__startup_11_0,101,103,107,108,111,85,112,113,114,115)
	MR_init_label10(startup__startup_11_0,116,122,123,124,120,121,128,129,130,131)
	MR_init_label10(startup__startup_11_0,132,135,136,137,138,139,140,141,142,143)
	MR_init_label10(startup__startup_11_0,144,145,146,148,149,150,153,154,155,156)
	MR_init_label7(startup__startup_11_0,157,158,159,160,161,162,163)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'startup'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__startup_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(36);
	MR_sv(36) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__dump__default_dump_options_0_0,
		startup__startup_11_0_i2);
MR_def_label(startup__startup_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,
		startup__startup_11_0_i3);
MR_def_label(startup__startup_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Mapping static call sites to containing procedures...\n", 56);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i4);
MR_def_label(startup__startup_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_sv(28) = (MR_Word) MR_CTOR1_ADDR(array, array);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		startup__startup_11_0_i6);
MR_def_label(startup__startup_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(32) = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_sv(26) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(fn__map__init_0_0,
		startup__startup_11_0_i8);
MR_def_label(startup__startup_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(33) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(array_util__array_foldl2_from_1_6_1,
		startup__startup_11_0_i11);
MR_def_label(startup__startup_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(29) = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r1 = MR_sv(15);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(29);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		startup__startup_11_0_i13);
MR_def_label(startup__startup_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i14);
MR_def_label(startup__startup_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i15);
MR_def_label(startup__startup_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Mapping dynamic call sites to containing procedures...\n", 57);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i16);
MR_def_label(startup__startup_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		startup__startup_11_0_i18);
MR_def_label(startup__startup_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		startup__startup_11_0_i20);
MR_def_label(startup__startup_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(array_util__array_foldl2_from_1_6_1,
		startup__startup_11_0_i22);
MR_def_label(startup__startup_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i23);
MR_def_label(startup__startup_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i24);
MR_def_label(startup__startup_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(14);
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,
		startup__startup_11_0_i26);
MR_def_label(startup__startup_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(startup__startup_11_0_i28);
	}
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(15);
	MR_r5 = (MR_Integer) 20;
	MR_GOTO_LAB(startup__startup_11_0_i27);
MR_def_label(startup__startup_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Canonicalizing cliques...\n", 28);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i29);
MR_def_label(startup__startup_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(canonical__canonicalize_cliques_2_0,
		startup__startup_11_0_i30);
MR_def_label(startup__startup_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i31);
MR_def_label(startup__startup_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i32);
MR_def_label(startup__startup_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(4);
	MR_r5 = (MR_Integer) 20;
MR_def_label(startup__startup_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,
		startup__startup_11_0_i33);
MR_def_label(startup__startup_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tfield(0, MR_sv(4), 3);
	MR_np_call_localret_ent(array__max_2_0,
		startup__startup_11_0_i34);
MR_def_label(startup__startup_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = MR_sv(30);
	MR_r2 = MR_tfield(0, MR_sv(4), 2);
	MR_np_call_localret_ent(array__max_2_0,
		startup__startup_11_0_i35);
MR_def_label(startup__startup_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_tfield(0, MR_sv(4), 5);
	MR_np_call_localret_ent(array__max_2_0,
		startup__startup_11_0_i36);
MR_def_label(startup__startup_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(4), 4);
	}
	MR_np_call_localret_ent(array__max_2_0,
		startup__startup_11_0_i37);
MR_def_label(startup__startup_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Finding cliques...\n", 21);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i38);
MR_def_label(startup__startup_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(callgraph__find_cliques_2_0,
		startup__startup_11_0_i39);
MR_def_label(startup__startup_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i40);
MR_def_label(startup__startup_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i41);
MR_def_label(startup__startup_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Constructing clique indexes...\n", 33);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i42);
MR_def_label(startup__startup_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(callgraph__make_clique_indexes_4_0,
		startup__startup_11_0_i43);
MR_def_label(startup__startup_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_sv(20) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i44);
MR_def_label(startup__startup_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i45);
MR_def_label(startup__startup_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Constructing clique parent map...\n", 36);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i46);
MR_def_label(startup__startup_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(26);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_sv(34) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(array__max_2_0,
		startup__startup_11_0_i48);
MR_def_label(startup__startup_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = (MR_Integer) -1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i49);
MR_def_label(startup__startup_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_sv(24) = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i51);
MR_def_label(startup__startup_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__construct_clique_parents_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr5 = MR_sv(20);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tempr6 = MR_sv(28);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(23);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(24);
	MR_tempr4 = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r5 = MR_tempr5;
	MR_r6 = MR_sv(21);
	MR_r7 = MR_tempr4;
	}
	MR_np_call_localret_ent(array_util__array_foldl2_from_1_6_1,
		startup__startup_11_0_i55);
MR_def_label(startup__startup_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_sv(22) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i56);
MR_def_label(startup__startup_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i57);
MR_def_label(startup__startup_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Finding procedure callers...\n", 31);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i58);
MR_def_label(startup__startup_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(26);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(23);
	MR_sv(27) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i60);
MR_def_label(startup__startup_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__construct_proc_callers_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(28);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(27);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(30);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_1,
		startup__startup_11_0_i63);
MR_def_label(startup__startup_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i64);
MR_def_label(startup__startup_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i65);
MR_def_label(startup__startup_11_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Constructing call site static map...\n", 39);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i66);
MR_def_label(startup__startup_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Integer) -1;
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i67);
MR_def_label(startup__startup_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__construct_call_site_caller_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(28);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(24);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_1,
		startup__startup_11_0_i70);
MR_def_label(startup__startup_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i71);
MR_def_label(startup__startup_11_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i72);
MR_def_label(startup__startup_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Finding call site calls...\n", 29);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i73);
MR_def_label(startup__startup_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(fn__map__init_0_0,
		startup__startup_11_0_i74);
MR_def_label(startup__startup_11_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(33);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(32);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(27);
	MR_sv(27) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i76);
MR_def_label(startup__startup_11_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__construct_call_site_calls_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(28);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(27);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_1,
		startup__startup_11_0_i79);
MR_def_label(startup__startup_11_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i80);
MR_def_label(startup__startup_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i81);
MR_def_label(startup__startup_11_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__startup__make_progrep_filename_1_0,
		startup__startup_11_0_i82);
MR_def_label(startup__startup_11_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Reading program representation...\n", 36);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i83);
MR_def_label(startup__startup_11_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(25);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_prog_rep_file_4_0,
		startup__startup_11_0_i84);
MR_def_label(startup__startup_11_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(startup__startup_11_0_i86);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(25);
	MR_sv(25) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__open_input_4_0,
		startup__startup_11_0_i87);
MR_def_label(startup__startup_11_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(startup__startup_11_0_i89);
	}
	MR_r1 = MR_sv(3);
	MR_sv(25) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(startup__startup_11_0_i85);
MR_def_label(startup__startup_11_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__close_input_3_0,
		startup__startup_11_0_i90);
MR_def_label(startup__startup_11_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(25);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		startup__startup_11_0_i91);
MR_def_label(startup__startup_11_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		startup__startup_11_0_i92);
MR_def_label(startup__startup_11_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Error: ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		startup__startup_11_0_i93);
MR_def_label(startup__startup_11_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i94);
MR_def_label(startup__startup_11_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(25);
	MR_tag_alloc_heap(MR_sv(25), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(25), 0) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(startup__startup_11_0_i85);
	}
MR_def_label(startup__startup_11_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i97);
MR_def_label(startup__startup_11_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(25);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(25) = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		startup__startup_11_0_i101);
MR_def_label(startup__startup_11_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(startup__startup_11_0_i103);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(33);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(29);
	MR_r5 = MR_sv(13);
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		startup__startup_11_0_i111);
MR_def_label(startup__startup_11_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(26);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(26) = MR_r1;
	MR_sv(27) = MR_tfield(1, MR_sv(5), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(27);
	MR_r3 = MR_sv(26);
	}
	MR_np_call_localret_ent(io__write_4_0,
		startup__startup_11_0_i107);
MR_def_label(startup__startup_11_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(27);
	MR_np_call_localret_ent(io__nl_3_0,
		startup__startup_11_0_i108);
MR_def_label(startup__startup_11_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(33);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(29);
	MR_r5 = MR_sv(13);
	MR_r4 = MR_sv(26);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		startup__startup_11_0_i111);
MR_def_label(startup__startup_11_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(startup__startup_11_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__startup__contour_file_name_1_0,
		startup__startup_11_0_i112);
MR_def_label(startup__startup_11_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		startup__startup_11_0_i113);
MR_def_label(startup__startup_11_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Trying to read contour exclusion file \140", 41);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		startup__startup_11_0_i114);
MR_def_label(startup__startup_11_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i115);
MR_def_label(startup__startup_11_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(26);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(exclude__read_exclude_file_5_0,
		startup__startup_11_0_i116);
MR_def_label(startup__startup_11_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(startup__startup_11_0_i120);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(startup__startup_11_0_i122);
	}
	MR_sv(26) = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Couldn\'t open file.\n", 22);
	}
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i121);
MR_def_label(startup__startup_11_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		startup__startup_11_0_i123);
MR_def_label(startup__startup_11_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% File had unrecoverable errors:\n% ", 35);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		startup__startup_11_0_i124);
MR_def_label(startup__startup_11_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i121);
MR_def_label(startup__startup_11_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i121);
MR_def_label(startup__startup_11_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Propagating measurements up call graph...\n", 44);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i128);
MR_def_label(startup__startup_11_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		startup__startup_11_0_i129);
MR_def_label(startup__startup_11_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(35) = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(35);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i130);
MR_def_label(startup__startup_11_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		startup__startup_11_0_i131);
MR_def_label(startup__startup_11_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i132);
MR_def_label(startup__startup_11_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(28);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(31);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(30);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,5);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_1,
		startup__startup_11_0_i135);
MR_def_label(startup__startup_11_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		startup__startup_11_0_i136);
MR_def_label(startup__startup_11_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(35);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i137);
MR_def_label(startup__startup_11_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		startup__startup_11_0_i138);
MR_def_label(startup__startup_11_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i139);
MR_def_label(startup__startup_11_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		startup__startup_11_0_i140);
MR_def_label(startup__startup_11_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(35);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i141);
MR_def_label(startup__startup_11_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		startup__startup_11_0_i142);
MR_def_label(startup__startup_11_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i143);
MR_def_label(startup__startup_11_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		startup__startup_11_0_i144);
MR_def_label(startup__startup_11_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(35);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i145);
MR_def_label(startup__startup_11_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(fn__map__init_0_0,
		startup__startup_11_0_i146);
MR_def_label(startup__startup_11_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(33);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(32);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(35);
	MR_sv(33) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i148);
MR_def_label(startup__startup_11_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(fn__map__init_0_0,
		startup__startup_11_0_i149);
MR_def_label(startup__startup_11_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		startup__startup_11_0_i150);
MR_def_label(startup__startup_11_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 28);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(20);
	MR_tempr2 = MR_sv(19);
	MR_tfield(0, MR_tempr1, 10) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 11) = MR_sv(21);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(22);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(23);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(24);
	MR_tfield(0, MR_tempr1, 15) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 16) = MR_sv(28);
	MR_tfield(0, MR_tempr1, 17) = MR_sv(29);
	MR_tfield(0, MR_tempr1, 18) = MR_sv(27);
	MR_tfield(0, MR_tempr1, 19) = MR_sv(30);
	MR_tfield(0, MR_tempr1, 20) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 21) = MR_sv(31);
	MR_tfield(0, MR_tempr1, 22) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 23) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 24) = MR_r1;
	MR_tfield(0, MR_tempr1, 25) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 26) = MR_sv(26);
	MR_tfield(0, MR_tempr1, 27) = MR_sv(25);
	MR_r1 = MR_sv(34);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, deep);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_1,
		startup__startup_11_0_i153);
MR_def_label(startup__startup_11_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i154);
MR_def_label(startup__startup_11_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i155);
MR_def_label(startup__startup_11_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 30;
	MR_np_call_localret_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,
		startup__startup_11_0_i156);
MR_def_label(startup__startup_11_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Summarizing information...\n", 29);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i157);
MR_def_label(startup__startup_11_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(startup__summarize_proc_dynamics_2_0,
		startup__startup_11_0_i158);
MR_def_label(startup__startup_11_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(startup__summarize_call_site_dynamics_2_0,
		startup__startup_11_0_i159);
MR_def_label(startup__startup_11_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(startup__summarize_modules_2_0,
		startup__startup_11_0_i160);
MR_def_label(startup__startup_11_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(startup__maybe_report_msg_4_0,
		startup__startup_11_0_i161);
MR_def_label(startup__startup_11_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(startup__maybe_report_stats_3_0,
		startup__startup_11_0_i162);
MR_def_label(startup__startup_11_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 40;
	MR_np_call_localret_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,
		startup__startup_11_0_i163);
MR_def_label(startup__startup_11_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(36);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(read_profile__read_call_graph_4_0);

MR_BEGIN_MODULE(startup_module8)
	MR_init_entry1(startup__read_and_startup_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__read_and_startup_10_0);
	MR_init_label9(startup__read_and_startup_10_0,4,3,5,6,7,8,2,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_and_startup'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__startup__read_and_startup_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(startup__read_and_startup_10_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__read_call_graph_4_0,
		startup__read_and_startup_10_0_i4);
MR_def_label(startup__read_and_startup_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_GOTO_LAB(startup__read_and_startup_10_0_i2);
MR_def_label(startup__read_and_startup_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(9) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("% Reading graph data...\n", 24);
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		startup__read_and_startup_10_0_i5);
MR_def_label(startup__read_and_startup_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(io__flush_output_3_0,
		startup__read_and_startup_10_0_i6);
MR_def_label(startup__read_and_startup_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(read_profile__read_call_graph_4_0,
		startup__read_and_startup_10_0_i7);
MR_def_label(startup__read_and_startup_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	MR_np_call_localret_ent(io__write_string_4_0,
		startup__read_and_startup_10_0_i8);
MR_def_label(startup__read_and_startup_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(io__flush_output_3_0,
		startup__read_and_startup_10_0_i2);
MR_def_label(startup__read_and_startup_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(startup__read_and_startup_10_0_i11);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(startup__read_and_startup_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tfield(0, MR_sv(8), 0);
	MR_np_call_localret_ent(startup__startup_11_0,
		startup__read_and_startup_10_0_i12);
MR_def_label(startup__read_and_startup_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module9)
	MR_init_entry1(startup__read_and_startup_default_deep_options_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__read_and_startup_default_deep_options_9_0);
	MR_init_label1(startup__read_and_startup_default_deep_options_9_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_and_startup_default_deep_options'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__startup__read_and_startup_default_deep_options_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__dump__default_dump_options_0_0,
		startup__read_and_startup_default_deep_options_9_0_i2);
MR_def_label(startup__read_and_startup_default_deep_options_9_0,2)
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
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(startup__read_and_startup_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module10)
	MR_init_entry1(fn__startup__initialize_module_data_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__startup__initialize_module_data_1_0);
	MR_init_label2(fn__startup__initialize_module_data_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialize_module_data'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__startup__initialize_module_data_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__startup__initialize_module_data_1_0_i2);
MR_def_label(fn__startup__initialize_module_data_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__startup__initialize_module_data_1_0_i3);
MR_def_label(fn__startup__initialize_module_data_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(startup_module11)
	MR_init_entry1(startup__ensure_module_has_module_data_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__ensure_module_has_module_data_3_0);
	MR_init_label4(startup__ensure_module_has_module_data_3_0,3,2,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_module_has_module_data'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__ensure_module_has_module_data_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		startup__ensure_module_has_module_data_3_0_i3);
MR_def_label(startup__ensure_module_has_module_data_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__ensure_module_has_module_data_3_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(startup__ensure_module_has_module_data_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		startup__ensure_module_has_module_data_3_0_i5);
MR_def_label(startup__ensure_module_has_module_data_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		startup__ensure_module_has_module_data_3_0_i6);
MR_def_label(startup__ensure_module_has_module_data_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);
MR_decl_entry(profile__lookup_call_site_statics_3_0);
MR_decl_entry(require__require_2_0);
MR_decl_entry(profile__update_call_site_statics_4_0);

MR_BEGIN_MODULE(startup_module12)
	MR_init_entry1(startup__record_css_containers_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__record_css_containers_2_5_0);
	MR_init_label7(startup__record_css_containers_2_5_0,18,3,4,6,8,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_css_containers_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__record_css_containers_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(startup__record_css_containers_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(startup__record_css_containers_2_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(9) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		startup__record_css_containers_2_5_0_i3);
MR_def_label(startup__record_css_containers_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__lookup_call_site_statics_3_0,
		startup__record_css_containers_2_5_0_i4);
MR_def_label(startup__record_css_containers_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__IntroducedFrom__pred__record_css_containers_2__417__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) -1;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("record_css_containers_2: real proc_static_ptr", 45);
	}
	MR_np_call_localret_ent(require__require_2_0,
		startup__record_css_containers_2_5_0_i6);
MR_def_label(startup__record_css_containers_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__IntroducedFrom__pred__record_css_containers_2__419__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) -1;
	MR_r2 = (MR_Word) MR_string_const("record_css_containers_2: real slot_num", 38);
	}
	MR_np_call_localret_ent(require__require_2_0,
		startup__record_css_containers_2_5_0_i8);
MR_def_label(startup__record_css_containers_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(profile__update_call_site_statics_4_0,
		startup__record_css_containers_2_5_0_i10);
MR_def_label(startup__record_css_containers_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(startup__record_css_containers_2_5_0_i18);
	}
MR_def_label(startup__record_css_containers_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(startup_module13)
	MR_init_entry1(startup__record_css_containers_module_procs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__record_css_containers_module_procs_6_0);
	MR_init_label5(startup__record_css_containers_module_procs_6_0,2,3,6,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_css_containers_module_procs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__record_css_containers_module_procs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__max_2_0,
		startup__record_css_containers_module_procs_6_0_i2);
MR_def_label(startup__record_css_containers_module_procs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(startup__record_css_containers_2_5_0,
		startup__record_css_containers_module_procs_6_0_i3);
MR_def_label(startup__record_css_containers_module_procs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_sv(1), 1);
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		startup__record_css_containers_module_procs_6_0_i6);
MR_def_label(startup__record_css_containers_module_procs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__record_css_containers_module_procs_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		startup__record_css_containers_module_procs_6_0_i12);
MR_def_label(startup__record_css_containers_module_procs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		startup__record_css_containers_module_procs_6_0_i12);
MR_def_label(startup__record_css_containers_module_procs_6_0,12)
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

MR_decl_entry(profile__lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__update_call_site_dynamics_4_0);

MR_BEGIN_MODULE(startup_module14)
	MR_init_entry1(startup__record_csd_containers_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__record_csd_containers_2_4_0);
	MR_init_label5(startup__record_csd_containers_2_4_0,14,3,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_csd_containers_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__record_csd_containers_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(startup__record_csd_containers_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(startup__record_csd_containers_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(startup__record_csd_containers_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		startup__record_csd_containers_2_4_0_i4);
MR_def_label(startup__record_csd_containers_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__IntroducedFrom__pred__record_csd_containers_2__460__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) -1;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("record_csd_containers_2: real proc_dynamic_ptr", 46);
	}
	MR_np_call_localret_ent(require__require_2_0,
		startup__record_csd_containers_2_4_0_i6);
MR_def_label(startup__record_csd_containers_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__update_call_site_dynamics_4_0,
		startup__record_csd_containers_2_4_0_i8);
MR_def_label(startup__record_csd_containers_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(startup__record_csd_containers_2_4_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
MR_decl_entry(array__to_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_is_zeroed_0;
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(profile__lookup_proc_statics_3_0);
MR_decl_entry(profile__update_proc_statics_4_0);

MR_BEGIN_MODULE(startup_module15)
	MR_init_entry1(startup__record_csd_containers_zeroed_pss_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__record_csd_containers_zeroed_pss_6_0);
	MR_init_label8(startup__record_csd_containers_zeroed_pss_6_0,2,6,7,8,9,11,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_csd_containers_zeroed_pss'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__record_csd_containers_zeroed_pss_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(array__to_list_2_0,
		startup__record_csd_containers_zeroed_pss_6_0_i2);
MR_def_label(startup__record_csd_containers_zeroed_pss_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,26);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(profile, is_zeroed);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,7);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		startup__record_csd_containers_zeroed_pss_6_0_i6);
MR_def_label(startup__record_csd_containers_zeroed_pss_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		startup__record_csd_containers_zeroed_pss_6_0_i7);
MR_def_label(startup__record_csd_containers_zeroed_pss_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		startup__record_csd_containers_zeroed_pss_6_0_i8);
MR_def_label(startup__record_csd_containers_zeroed_pss_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(startup__record_csd_containers_2_4_0,
		startup__record_csd_containers_zeroed_pss_6_0_i9);
MR_def_label(startup__record_csd_containers_zeroed_pss_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(startup__record_csd_containers_zeroed_pss_6_0_i11);
	}
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(startup__record_csd_containers_zeroed_pss_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_sv(1), 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		startup__record_csd_containers_zeroed_pss_6_0_i12);
MR_def_label(startup__record_csd_containers_zeroed_pss_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(profile__update_proc_statics_4_0,
		startup__record_csd_containers_zeroed_pss_6_0_i14);
MR_def_label(startup__record_csd_containers_zeroed_pss_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_proc_dynamics_3_0);

MR_BEGIN_MODULE(startup_module16)
	MR_init_entry1(startup__flat_call_sites_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__flat_call_sites_3_0);
	MR_init_label4(startup__flat_call_sites_3_0,2,3,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flat_call_sites'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__flat_call_sites_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		startup__flat_call_sites_3_0_i2);
MR_def_label(startup__flat_call_sites_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		startup__flat_call_sites_3_0_i3);
MR_def_label(startup__flat_call_sites_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,26);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(profile, is_zeroed);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,8);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		startup__flat_call_sites_3_0_i7);
MR_def_label(startup__flat_call_sites_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		startup__flat_call_sites_3_0_i8);
MR_def_label(startup__flat_call_sites_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__condense_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array_util__array_list_foldl2_6_0);

MR_BEGIN_MODULE(startup_module17)
	MR_init_entry1(startup__construct_clique_parents_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_clique_parents_8_0);
	MR_init_label6(startup__construct_clique_parents_8_0,3,4,8,9,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_clique_parents'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_clique_parents_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(startup__construct_clique_parents_8_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		startup__construct_clique_parents_8_0_i3);
MR_def_label(startup__construct_clique_parents_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		startup__construct_clique_parents_8_0_i4);
MR_def_label(startup__construct_clique_parents_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,26);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(profile, is_zeroed);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,9);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		startup__construct_clique_parents_8_0_i8);
MR_def_label(startup__construct_clique_parents_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		startup__construct_clique_parents_8_0_i9);
MR_def_label(startup__construct_clique_parents_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		startup__construct_clique_parents_8_0_i10);
MR_def_label(startup__construct_clique_parents_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__construct_clique_parents_2_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(array_util__array_list_foldl2_6_0);
	}
MR_def_label(startup__construct_clique_parents_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("construct_clique_parents: invalid pdi", 37);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svarray__set_4_0);

MR_BEGIN_MODULE(startup_module18)
	MR_init_entry1(startup__construct_clique_parents_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_clique_parents_2_8_0);
	MR_init_label6(startup__construct_clique_parents_2_8_0,3,5,9,12,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_clique_parents_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_clique_parents_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(startup__construct_clique_parents_2_8_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		startup__construct_clique_parents_2_8_0_i3);
MR_def_label(startup__construct_clique_parents_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(startup__construct_clique_parents_2_8_0_i4);
	}
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		startup__construct_clique_parents_2_8_0_i5);
MR_def_label(startup__construct_clique_parents_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_sv(2))) {
		MR_GOTO_LAB(startup__construct_clique_parents_2_8_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(svarray__set_4_0,
		startup__construct_clique_parents_2_8_0_i9);
MR_def_label(startup__construct_clique_parents_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(svarray__set_4_0,
		startup__construct_clique_parents_2_8_0_i12);
MR_def_label(startup__construct_clique_parents_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(startup__construct_clique_parents_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(startup__construct_clique_parents_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_proc_dynamic_ptr_raw_2_0);
MR_decl_entry(profile__lookup_proc_callers_3_0);
MR_decl_entry(profile__update_proc_callers_4_0);

MR_BEGIN_MODULE(startup_module19)
	MR_init_entry1(startup__construct_proc_callers_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_proc_callers_5_0);
	MR_init_label4(startup__construct_proc_callers_5_0,3,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_proc_callers'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_proc_callers_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r3, 1);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_raw_2_0,
		startup__construct_proc_callers_5_0_i3);
MR_def_label(startup__construct_proc_callers_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__construct_proc_callers_5_0_i2);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		startup__construct_proc_callers_5_0_i5);
MR_def_label(startup__construct_proc_callers_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__lookup_proc_callers_3_0,
		startup__construct_proc_callers_5_0_i6);
MR_def_label(startup__construct_proc_callers_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(profile__update_proc_callers_4_0);
	}
MR_def_label(startup__construct_proc_callers_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module20)
	MR_init_entry1(startup__construct_call_site_caller_3_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_call_site_caller_3_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_call_site_caller_3'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_call_site_caller_3_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array_util__array_foldl_from_0_4_1);
MR_decl_entry(profile__valid_call_site_dynamic_ptr_raw_2_0);
MR_decl_entry(profile__update_call_site_static_map_4_0);

MR_BEGIN_MODULE(startup_module21)
	MR_init_entry1(startup__construct_call_site_caller_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_call_site_caller_2_6_0);
	MR_init_label8(startup__construct_call_site_caller_2_6_0,31,3,4,6,12,14,11,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_call_site_caller_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_call_site_caller_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(startup__construct_call_site_caller_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(startup__construct_call_site_caller_2_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		startup__construct_call_site_caller_2_6_0_i3);
MR_def_label(startup__construct_call_site_caller_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		startup__construct_call_site_caller_2_6_0_i4);
MR_def_label(startup__construct_call_site_caller_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(startup__construct_call_site_caller_2_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__construct_call_site_caller_3_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,28);
	MR_r4 = MR_tfield(1, MR_sv(5), 1);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_0_4_1,
		startup__construct_call_site_caller_2_6_0_i14);
MR_def_label(startup__construct_call_site_caller_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_raw_2_0,
		startup__construct_call_site_caller_2_6_0_i12);
MR_def_label(startup__construct_call_site_caller_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__construct_call_site_caller_2_6_0_i11);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(profile__update_call_site_static_map_4_0,
		startup__construct_call_site_caller_2_6_0_i14);
MR_def_label(startup__construct_call_site_caller_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(startup__construct_call_site_caller_2_6_0_i31);
MR_def_label(startup__construct_call_site_caller_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(startup__construct_call_site_caller_2_6_0_i31);
MR_def_label(startup__construct_call_site_caller_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module22)
	MR_init_entry1(startup__construct_call_site_caller_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_call_site_caller_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_call_site_caller'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_call_site_caller_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module23)
	MR_init_entry1(startup__construct_call_site_calls_3_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_call_site_calls_3_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_call_site_calls_3'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_call_site_calls_3_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module24)
	MR_init_entry1(startup__construct_call_site_calls_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_call_site_calls_2_7_0);
	MR_init_label6(startup__construct_call_site_calls_2_7_0,26,3,4,6,12,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_call_site_calls_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_call_site_calls_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(startup__construct_call_site_calls_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r3,0)) {
		MR_GOTO_LAB(startup__construct_call_site_calls_2_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		startup__construct_call_site_calls_2_7_0_i3);
MR_def_label(startup__construct_call_site_calls_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(array__lookup_3_0,
		startup__construct_call_site_calls_2_7_0_i4);
MR_def_label(startup__construct_call_site_calls_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(startup__construct_call_site_calls_2_7_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__construct_call_site_calls_3_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,30);
	MR_r4 = MR_tfield(1, MR_sv(6), 1);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_0_4_1,
		startup__construct_call_site_calls_2_7_0_i12);
MR_def_label(startup__construct_call_site_calls_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(6), 0);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,
		startup__construct_call_site_calls_2_7_0_i12);
MR_def_label(startup__construct_call_site_calls_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(startup__construct_call_site_calls_2_7_0_i26);
	}
MR_def_label(startup__construct_call_site_calls_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module25)
	MR_init_entry1(startup__construct_call_site_calls_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__construct_call_site_calls_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_call_site_calls'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__construct_call_site_calls_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module26)
	MR_init_entry1(startup__sum_call_sites_in_proc_dynamic_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__sum_call_sites_in_proc_dynamic_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_call_sites_in_proc_dynamic'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__sum_call_sites_in_proc_dynamic_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_pd_own_3_0);
MR_decl_entry(profile__lookup_pd_desc_3_0);
MR_decl_entry(profile__lookup_pd_comp_table_3_0);
MR_decl_entry(fn__measurements__subtract_inherit_from_inherit_2_0);
MR_decl_entry(profile__lookup_ps_own_3_0);
MR_decl_entry(profile__lookup_ps_desc_3_0);
MR_decl_entry(fn__measurements__add_own_to_own_2_0);
MR_decl_entry(profile__update_ps_own_4_0);
MR_decl_entry(profile__update_ps_desc_4_0);

MR_BEGIN_MODULE(startup_module27)
	MR_init_entry1(startup__summarize_proc_dynamic_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__summarize_proc_dynamic_9_0);
	MR_init_label10(startup__summarize_proc_dynamic_9_0,2,3,4,6,8,5,9,10,11,12)
	MR_init_label5(startup__summarize_proc_dynamic_9_0,13,15,16,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'summarize_proc_dynamic'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__summarize_proc_dynamic_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_tfield(0, MR_r5, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__lookup_pd_own_3_0,
		startup__summarize_proc_dynamic_9_0_i2);
MR_def_label(startup__summarize_proc_dynamic_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(profile__lookup_pd_desc_3_0,
		startup__summarize_proc_dynamic_9_0_i3);
MR_def_label(startup__summarize_proc_dynamic_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(profile__lookup_pd_comp_table_3_0,
		startup__summarize_proc_dynamic_9_0_i4);
MR_def_label(startup__summarize_proc_dynamic_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		startup__summarize_proc_dynamic_9_0_i6);
MR_def_label(startup__summarize_proc_dynamic_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__summarize_proc_dynamic_9_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__subtract_inherit_from_inherit_2_0,
		startup__summarize_proc_dynamic_9_0_i8);
MR_def_label(startup__summarize_proc_dynamic_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(startup__summarize_proc_dynamic_9_0_i9);
MR_def_label(startup__summarize_proc_dynamic_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
MR_def_label(startup__summarize_proc_dynamic_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(profile__lookup_ps_own_3_0,
		startup__summarize_proc_dynamic_9_0_i10);
MR_def_label(startup__summarize_proc_dynamic_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__lookup_ps_desc_3_0,
		startup__summarize_proc_dynamic_9_0_i11);
MR_def_label(startup__summarize_proc_dynamic_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		startup__summarize_proc_dynamic_9_0_i12);
MR_def_label(startup__summarize_proc_dynamic_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		startup__summarize_proc_dynamic_9_0_i13);
MR_def_label(startup__summarize_proc_dynamic_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		startup__summarize_proc_dynamic_9_0_i15);
MR_def_label(startup__summarize_proc_dynamic_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__update_ps_own_4_0,
		startup__summarize_proc_dynamic_9_0_i16);
MR_def_label(startup__summarize_proc_dynamic_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		startup__summarize_proc_dynamic_9_0_i18);
MR_def_label(startup__summarize_proc_dynamic_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__update_ps_desc_4_0,
		startup__summarize_proc_dynamic_9_0_i19);
MR_def_label(startup__summarize_proc_dynamic_9_0,19)
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

MR_decl_entry(profile__lookup_call_site_static_map_3_0);
MR_decl_entry(profile__lookup_csd_desc_3_0);
MR_decl_entry(profile__lookup_csd_comp_table_3_0);
MR_decl_entry(profile__lookup_css_own_3_0);
MR_decl_entry(profile__lookup_css_desc_3_0);
MR_decl_entry(profile__update_css_own_4_0);
MR_decl_entry(profile__update_css_desc_4_0);

MR_BEGIN_MODULE(startup_module28)
	MR_init_entry1(startup__summarize_call_site_dynamic_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__summarize_call_site_dynamic_10_0);
	MR_init_label10(startup__summarize_call_site_dynamic_10_0,2,4,5,6,8,10,7,11,12,13)
	MR_init_label7(startup__summarize_call_site_dynamic_10_0,14,15,17,18,20,21,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'summarize_call_site_dynamic'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__summarize_call_site_dynamic_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__lookup_call_site_static_map_3_0,
		startup__summarize_call_site_dynamic_10_0_i2);
MR_def_label(startup__summarize_call_site_dynamic_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(startup__summarize_call_site_dynamic_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_sv(4), 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(profile__lookup_csd_desc_3_0,
		startup__summarize_call_site_dynamic_10_0_i4);
MR_def_label(startup__summarize_call_site_dynamic_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(profile__lookup_csd_comp_table_3_0,
		startup__summarize_call_site_dynamic_10_0_i5);
MR_def_label(startup__summarize_call_site_dynamic_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__lookup_call_site_statics_3_0,
		startup__summarize_call_site_dynamic_10_0_i6);
MR_def_label(startup__summarize_call_site_dynamic_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		startup__summarize_call_site_dynamic_10_0_i8);
MR_def_label(startup__summarize_call_site_dynamic_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__summarize_call_site_dynamic_10_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__subtract_inherit_from_inherit_2_0,
		startup__summarize_call_site_dynamic_10_0_i10);
MR_def_label(startup__summarize_call_site_dynamic_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(startup__summarize_call_site_dynamic_10_0_i11);
MR_def_label(startup__summarize_call_site_dynamic_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_sv(3);
MR_def_label(startup__summarize_call_site_dynamic_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__lookup_css_own_3_0,
		startup__summarize_call_site_dynamic_10_0_i12);
MR_def_label(startup__summarize_call_site_dynamic_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__lookup_css_desc_3_0,
		startup__summarize_call_site_dynamic_10_0_i13);
MR_def_label(startup__summarize_call_site_dynamic_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		startup__summarize_call_site_dynamic_10_0_i14);
MR_def_label(startup__summarize_call_site_dynamic_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		startup__summarize_call_site_dynamic_10_0_i15);
MR_def_label(startup__summarize_call_site_dynamic_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		startup__summarize_call_site_dynamic_10_0_i17);
MR_def_label(startup__summarize_call_site_dynamic_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__update_css_own_4_0,
		startup__summarize_call_site_dynamic_10_0_i18);
MR_def_label(startup__summarize_call_site_dynamic_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		startup__summarize_call_site_dynamic_10_0_i20);
MR_def_label(startup__summarize_call_site_dynamic_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__update_css_desc_4_0,
		startup__summarize_call_site_dynamic_10_0_i21);
MR_def_label(startup__summarize_call_site_dynamic_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(startup__summarize_call_site_dynamic_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("summarize_call_site_dynamic: invalid css ptr", 44);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module29)
	MR_init_entry1(fn__startup__summarize_module_costs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__startup__summarize_module_costs_2_0);
	MR_init_label1(fn__startup__summarize_module_costs_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'summarize_module_costs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__startup__summarize_module_costs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__accumulate_ps_costs_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tfield(0, MR_tempr2, 0);
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__startup__summarize_module_costs_2_0_i3);
MR_def_label(fn__startup__summarize_module_costs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_ps_own_3_0);
MR_decl_entry(profile__deep_lookup_ps_desc_3_0);

MR_BEGIN_MODULE(startup_module30)
	MR_init_entry1(startup__accumulate_ps_costs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__accumulate_ps_costs_6_0);
	MR_init_label4(startup__accumulate_ps_costs_6_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_ps_costs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__accumulate_ps_costs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		startup__accumulate_ps_costs_6_0_i2);
MR_def_label(startup__accumulate_ps_costs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		startup__accumulate_ps_costs_6_0_i3);
MR_def_label(startup__accumulate_ps_costs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		startup__accumulate_ps_costs_6_0_i4);
MR_def_label(startup__accumulate_ps_costs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		startup__accumulate_ps_costs_6_0_i5);
MR_def_label(startup__accumulate_ps_costs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_0);
MR_decl_entry(profile__valid_call_site_dynamic_ptr_2_0);
MR_decl_entry(profile__deep_lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__deep_lookup_csd_desc_3_0);
MR_decl_entry(fn__measurements__subtract_own_from_inherit_2_0);
MR_decl_entry(profile__deep_update_csd_desc_4_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(profile__deep_update_csd_comp_table_4_0);
MR_decl_entry(fn__map__union_3_0);

MR_BEGIN_MODULE(startup_module31)
	MR_init_entry1(startup__propagate_to_clique_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__propagate_to_clique_4_0);
	MR_init_label10(startup__propagate_to_clique_4_0,2,4,5,7,10,12,13,14,15,17)
	MR_init_label5(startup__propagate_to_clique_4_0,16,20,19,23,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_to_clique'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__propagate_to_clique_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tfield(0, MR_tempr1, 11);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		startup__propagate_to_clique_4_0_i2);
MR_def_label(startup__propagate_to_clique_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__propagate_to_proc_dynamic_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		startup__propagate_to_clique_4_0_i4);
MR_def_label(startup__propagate_to_clique_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__map__init_0_0,
		startup__propagate_to_clique_4_0_i5);
MR_def_label(startup__propagate_to_clique_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, deep);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r4 = MR_r3;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		startup__propagate_to_clique_4_0_i7);
MR_def_label(startup__propagate_to_clique_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		startup__propagate_to_clique_4_0_i10);
MR_def_label(startup__propagate_to_clique_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__propagate_to_clique_4_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		startup__propagate_to_clique_4_0_i12);
MR_def_label(startup__propagate_to_clique_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		startup__propagate_to_clique_4_0_i13);
MR_def_label(startup__propagate_to_clique_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__subtract_own_from_inherit_2_0,
		startup__propagate_to_clique_4_0_i14);
MR_def_label(startup__propagate_to_clique_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(profile__deep_update_csd_desc_4_0,
		startup__propagate_to_clique_4_0_i15);
MR_def_label(startup__propagate_to_clique_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__is_empty_1_0,
		startup__propagate_to_clique_4_0_i17);
MR_def_label(startup__propagate_to_clique_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__propagate_to_clique_4_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(profile__deep_update_csd_comp_table_4_0);
MR_def_label(startup__propagate_to_clique_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		startup__propagate_to_clique_4_0_i20);
MR_def_label(startup__propagate_to_clique_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__propagate_to_clique_4_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(profile__deep_update_csd_comp_table_4_0);
MR_def_label(startup__propagate_to_clique_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,10);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__union_3_0,
		startup__propagate_to_clique_4_0_i23);
MR_def_label(startup__propagate_to_clique_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(profile__deep_update_csd_comp_table_4_0);
	}
MR_def_label(startup__propagate_to_clique_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module32)
	MR_init_entry1(fn__startup__add_comp_tables_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__startup__add_comp_tables_2_0);
	MR_init_label4(fn__startup__add_comp_tables_2_0,3,2,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_comp_tables'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__startup__add_comp_tables_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		fn__startup__add_comp_tables_2_0_i3);
MR_def_label(fn__startup__add_comp_tables_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__startup__add_comp_tables_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__startup__add_comp_tables_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		fn__startup__add_comp_tables_2_0_i6);
MR_def_label(fn__startup__add_comp_tables_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__startup__add_comp_tables_2_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__startup__add_comp_tables_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,11);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__map__union_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(startup_module33)
	MR_init_entry1(fn__startup__add_to_override_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__startup__add_to_override_3_0);
	MR_init_label3(fn__startup__add_to_override_3_0,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_to_override'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__startup__add_to_override_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		fn__startup__add_to_override_3_0_i3);
MR_def_label(fn__startup__add_to_override_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__startup__add_to_override_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		fn__startup__add_to_override_3_0_i5);
MR_def_label(fn__startup__add_to_override_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(fn__startup__add_to_override_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_update_pd_comp_table_4_0);
MR_decl_entry(profile__deep_lookup_pd_desc_3_0);
MR_decl_entry(profile__deep_lookup_pd_own_3_0);
MR_decl_entry(fn__measurements__add_own_to_inherit_2_0);
MR_decl_entry(profile__deep_lookup_proc_dynamics_3_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);

MR_BEGIN_MODULE(startup_module34)
	MR_init_entry1(startup__propagate_to_proc_dynamic_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__propagate_to_proc_dynamic_9_0);
	MR_init_label10(startup__propagate_to_proc_dynamic_9_0,2,4,6,7,8,9,10,11,12,13)
	MR_init_label8(startup__propagate_to_proc_dynamic_9_0,16,14,17,20,22,23,24,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_to_proc_dynamic'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__propagate_to_proc_dynamic_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tfield(0, MR_tempr2, 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(startup__flat_call_sites_3_0,
		startup__propagate_to_proc_dynamic_9_0_i2);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(startup__propagate_to_call_site_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		startup__propagate_to_proc_dynamic_9_0_i4);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, deep);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		startup__propagate_to_proc_dynamic_9_0_i6);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_update_pd_comp_table_4_0,
		startup__propagate_to_proc_dynamic_9_0_i7);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_pd_desc_3_0,
		startup__propagate_to_proc_dynamic_9_0_i8);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_pd_own_3_0,
		startup__propagate_to_proc_dynamic_9_0_i9);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__add_own_to_inherit_2_0,
		startup__propagate_to_proc_dynamic_9_0_i10);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__startup__add_comp_tables_2_0,
		startup__propagate_to_proc_dynamic_9_0_i11);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		startup__propagate_to_proc_dynamic_9_0_i12);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		startup__propagate_to_proc_dynamic_9_0_i13);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 10);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(startup__propagate_to_proc_dynamic_9_0_i14);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__startup__add_to_override_3_0,
		startup__propagate_to_proc_dynamic_9_0_i16);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(startup__propagate_to_proc_dynamic_9_0_i17);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_sv(6);
	MR_r1 = MR_sv(7);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		startup__propagate_to_proc_dynamic_9_0_i20);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__propagate_to_proc_dynamic_9_0_i18);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		startup__propagate_to_proc_dynamic_9_0_i22);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		startup__propagate_to_proc_dynamic_9_0_i23);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(profile__deep_update_csd_desc_4_0,
		startup__propagate_to_proc_dynamic_9_0_i24);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(startup__propagate_to_proc_dynamic_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_clique_index_3_0);
MR_decl_entry(profile__deep_update_pd_desc_4_0);
MR_decl_entry(profile__deep_lookup_csd_comp_table_3_0);

MR_BEGIN_MODULE(startup_module35)
	MR_init_entry1(startup__propagate_to_call_site_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__propagate_to_call_site_7_0);
	MR_init_label10(startup__propagate_to_call_site_7_0,2,3,4,5,6,7,8,9,10,12)
	MR_init_label4(startup__propagate_to_call_site_7_0,11,15,14,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_to_call_site'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__propagate_to_call_site_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		startup__propagate_to_call_site_7_0_i2);
MR_def_label(startup__propagate_to_call_site_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		startup__propagate_to_call_site_7_0_i3);
MR_def_label(startup__propagate_to_call_site_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(startup__propagate_to_call_site_7_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(startup__propagate_to_call_site_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_pd_desc_3_0,
		startup__propagate_to_call_site_7_0_i5);
MR_def_label(startup__propagate_to_call_site_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		startup__propagate_to_call_site_7_0_i6);
MR_def_label(startup__propagate_to_call_site_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_inherit_2_0,
		startup__propagate_to_call_site_7_0_i7);
MR_def_label(startup__propagate_to_call_site_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		startup__propagate_to_call_site_7_0_i8);
MR_def_label(startup__propagate_to_call_site_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(profile__deep_update_pd_desc_4_0,
		startup__propagate_to_call_site_7_0_i9);
MR_def_label(startup__propagate_to_call_site_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_csd_comp_table_3_0,
		startup__propagate_to_call_site_7_0_i10);
MR_def_label(startup__propagate_to_call_site_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(map__is_empty_1_0,
		startup__propagate_to_call_site_7_0_i12);
MR_def_label(startup__propagate_to_call_site_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__propagate_to_call_site_7_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(startup__propagate_to_call_site_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		startup__propagate_to_call_site_7_0_i15);
MR_def_label(startup__propagate_to_call_site_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(startup__propagate_to_call_site_7_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(startup__propagate_to_call_site_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__union_3_0,
		startup__propagate_to_call_site_7_0_i18);
MR_def_label(startup__propagate_to_call_site_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module36)
	MR_init_entry1(fn__startup__select_override_comp_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__startup__select_override_comp_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_override_comp'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__startup__select_override_comp_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(startup_module37)
	MR_init_entry1(startup__gather_call_site_csdptrs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__gather_call_site_csdptrs_5_0);
	MR_init_label5(startup__gather_call_site_csdptrs_5_0,4,6,9,3,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gather_call_site_csdptrs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__gather_call_site_csdptrs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(startup__gather_call_site_csdptrs_5_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		startup__gather_call_site_csdptrs_5_0_i4);
MR_def_label(startup__gather_call_site_csdptrs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		startup__gather_call_site_csdptrs_5_0_i6);
MR_def_label(startup__gather_call_site_csdptrs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(startup__gather_call_site_csdptrs_5_0_i9);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(startup__gather_call_site_csdptrs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(startup__gather_call_site_csdptrs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_INT_LE(MR_tempr1,0)) {
		MR_GOTO_LAB(startup__gather_call_site_csdptrs_5_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
	}
MR_def_label(startup__gather_call_site_csdptrs_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module38)
	MR_init_entry1(startup__IntroducedFrom__pred__record_css_containers_2__417__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__IntroducedFrom__pred__record_css_containers_2__417__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__record_css_containers_2__417__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__IntroducedFrom__pred__record_css_containers_2__417__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module39)
	MR_init_entry1(startup__IntroducedFrom__pred__record_css_containers_2__419__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__IntroducedFrom__pred__record_css_containers_2__419__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__record_css_containers_2__419__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__IntroducedFrom__pred__record_css_containers_2__419__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module40)
	MR_init_entry1(startup__IntroducedFrom__pred__record_csd_containers_2__460__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__IntroducedFrom__pred__record_csd_containers_2__460__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__record_csd_containers_2__460__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__IntroducedFrom__pred__record_csd_containers_2__460__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module41)
	MR_init_entry1(startup__IntroducedFrom__pred__gather_call_site_csdptrs__964__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__startup__IntroducedFrom__pred__gather_call_site_csdptrs__964__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__gather_call_site_csdptrs__964__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(startup__IntroducedFrom__pred__gather_call_site_csdptrs__964__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module42)
	MR_init_entry1(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0);
	MR_init_label2(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__construct_call_site_caller__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0_i2);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__max_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0_i3);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(startup__construct_call_site_caller_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module43)
	MR_init_entry1(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0);
	MR_init_label2(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__construct_call_site_caller_3__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_raw_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0_i4);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(profile__update_call_site_static_map_4_0);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module44)
	MR_init_entry1(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0);
	MR_init_label2(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__construct_call_site_calls__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(array__max_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0_i2);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_tfield(0, MR_sv(1), 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0_i3);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_tempr1, 8);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(startup__construct_call_site_calls_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module45)
	MR_init_entry1(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0);
	MR_init_label7(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,3,4,7,9,8,14,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__construct_call_site_calls_3__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0_i3);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0_i7);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0_i9);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0_i14);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0_i14);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svarray__set_4_0);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module46)
	MR_init_entry1(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sum_call_sites_in_proc_dynamic__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0_i3);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svarray__set_4_0);
	}
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("sum_call_sites_in_proc_dynamic: invalid pdptr", 45);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(startup_module47)
	MR_init_entry1(fn__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__select_override_comp__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(dump__dump_deep_4_0);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(startup_module48)
	MR_init_entry1(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0);
	MR_init_label10(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,2,7,9,5,14,15,18,19,20,21)
	MR_init_label5(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,17,23,24,25,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__maybe_dump__ho1__[6]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i2);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("all", 3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i7);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i9);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i27);
	}
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".deepdump.", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i14);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i15);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i17);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i18);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i19);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i20);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i21);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i23);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(dump__dump_deep_4_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i24);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0_i25);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__set_output_stream_4_0);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(dump__dump_initial_deep_4_0);

MR_BEGIN_MODULE(startup_module49)
	MR_init_entry1(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0);
	MR_init_label10(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,2,7,9,5,14,15,18,19,20,21)
	MR_init_label5(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,17,23,24,25,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__maybe_dump__ho2__[6]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i2);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("all", 3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i7);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i9);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i27);
	}
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".deepdump.", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i14);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i15);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i17);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i18);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i19);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i20);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i21);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i23);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(dump__dump_initial_deep_4_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i24);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0_i25);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__set_output_stream_4_0);
MR_def_label(f_115_116_97_114_116_117_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__startup_maybe_bunch_0(void)
{
	startup_module0();
	startup_module1();
	startup_module2();
	startup_module3();
	startup_module4();
	startup_module5();
	startup_module6();
	startup_module7();
	startup_module8();
	startup_module9();
	startup_module10();
	startup_module11();
	startup_module12();
	startup_module13();
	startup_module14();
	startup_module15();
	startup_module16();
	startup_module17();
	startup_module18();
	startup_module19();
	startup_module20();
	startup_module21();
	startup_module22();
	startup_module23();
	startup_module24();
	startup_module25();
	startup_module26();
	startup_module27();
	startup_module28();
	startup_module29();
	startup_module30();
	startup_module31();
	startup_module32();
	startup_module33();
	startup_module34();
	startup_module35();
	startup_module36();
	startup_module37();
	startup_module38();
	startup_module39();
}

static void mercury__startup_maybe_bunch_1(void)
{
	startup_module40();
	startup_module41();
	startup_module42();
	startup_module43();
	startup_module44();
	startup_module45();
	startup_module46();
	startup_module47();
	startup_module48();
	startup_module49();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__startup__init(void);
void mercury__startup__init_type_tables(void);
void mercury__startup__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__startup__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__startup__init_complexity_procs(void);
#endif

void mercury__startup__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__startup_maybe_bunch_0();
	mercury__startup_maybe_bunch_1();
	mercury__startup__init_debugger();
}

void mercury__startup__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__startup__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__startup__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__startup);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__startup__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
