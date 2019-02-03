/*
** Automatically generated from `create_report.m'
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
INIT mercury__create_report__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 268 "profile.int"
#include "profile.mh"

#line 28 "create_report.c"
#line 149 "../library/array.int"
#include "array.mh"

#line 32 "create_report.c"
#line 231 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 36 "create_report.c"
#line 141 "../library/io.int2"
#include "io.mh"

#line 40 "create_report.c"
#line 149 "../library/io.int2"
#include "string.mh"

#line 44 "create_report.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "create_report.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 52 "create_report.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 56 "create_report.c"
#line 31 "../library/store.int2"
#include "store.mh"

#line 60 "create_report.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 64 "create_report.c"
#line 65 "create_report.c"
#include "create_report.mh"

#line 68 "create_report.c"
#line 69 "create_report.c"
#ifndef CREATE_REPORT_DECL_GUARD
#define CREATE_REPORT_DECL_GUARD

#line 73 "create_report.c"
#line 74 "create_report.c"

#endif
#line 77 "create_report.c"

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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_create_report__type_ctor_info_call_site_callee_perf_0,
	mercury_data_create_report__type_ctor_info_gs_field_raw_data_0,
	mercury_data_create_report__type_ctor_info_raw_gs_ds_map_0,
	mercury_data_create_report__type_ctor_info_raw_gs_field_info_0,
	mercury_data_create_report__type_ctor_info_raw_gs_field_map_0;
MR_decl_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0, 3,5,6,8,9,11,12,13,14,15)
MR_decl_label3(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0, 16,19,2)
MR_decl_label9(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0, 5,7,8,9,11,3,15,13,18)
MR_decl_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0, 22,23,24,25,28,30,31,32,33,34)
MR_decl_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0, 35,36,37,38,39,40,41,42,43,44)
MR_decl_label4(create_report__accumulate_call_site_callees_7_0, 2,4,5,6)
MR_decl_label8(create_report__accumulate_csd_prof_info_7_0, 2,3,4,5,6,8,10,7)
MR_decl_label3(create_report__add_coverage_point_to_map_5_0, 4,3,5)
MR_decl_label7(create_report__create_call_site_dynamic_dump_report_3_0, 3,5,6,7,8,10,2)
MR_decl_label3(create_report__create_call_site_static_dump_report_3_0, 3,5,2)
MR_decl_label6(create_report__create_callee_clique_perf_row_data_5_0, 3,4,5,6,8,10)
MR_decl_label10(create_report__create_child_call_site_report_3_0, 2,3,8,7,6,12,13,14,5,18)
MR_decl_label10(create_report__create_child_call_site_report_3_0, 17,16,22,23,24,15,28,27,26,32)
MR_decl_label10(create_report__create_child_call_site_report_3_0, 33,34,25,38,37,36,42,43,44,35)
MR_decl_label9(create_report__create_child_call_site_report_3_0, 45,48,47,52,54,50,56,57,59)
MR_decl_label5(create_report__create_clique_dump_report_3_0, 3,5,6,7,2)
MR_decl_label7(create_report__create_clique_proc_report_4_0, 4,5,7,9,11,13,3)
MR_decl_label10(create_report__create_clique_report_3_0, 2,3,6,8,9,10,13,15,18,19)
MR_decl_label2(create_report__create_clique_report_3_0, 12,24)
MR_decl_label7(create_report__create_module_getter_setter_report_3_0, 3,8,10,16,2,19,20)
MR_decl_label5(create_report__create_module_report_3_0, 3,7,2,10,11)
MR_decl_label10(create_report__create_proc_callers_report_7_0, 3,5,6,11,12,10,17,20,14,21)
MR_decl_label10(create_report__create_proc_callers_report_7_0, 22,23,24,8,28,7,34,39,33,44)
MR_decl_label9(create_report__create_proc_callers_report_7_0, 49,43,54,59,53,63,68,2,73)
MR_decl_label5(create_report__create_proc_dynamic_dump_report_3_0, 3,5,6,7,2)
MR_decl_label9(create_report__create_proc_report_3_0, 3,5,6,7,9,10,11,13,2)
MR_decl_label5(create_report__create_proc_static_dump_report_3_0, 3,5,6,7,2)
MR_decl_label1(create_report__create_proc_var_use_dump_report_3_0, 2)
MR_decl_label10(create_report__create_procrep_coverage_report_3_0, 68,7,8,6,11,13,16,18,21,22)
MR_decl_label8(create_report__create_procrep_coverage_report_3_0, 23,24,27,28,15,31,32,10)
MR_decl_label3(create_report__create_program_modules_report_2_0, 2,5,8)
MR_decl_label10(create_report__create_report_3_0, 4,3,7,6,10,9,13,12,16,15)
MR_decl_label10(create_report__create_report_3_0, 19,18,22,21,26,24,31,30,34,33)
MR_decl_label10(create_report__create_report_3_0, 37,36,40,39,43,42,46,45,49,50)
MR_decl_label9(create_report__create_report_3_0, 48,53,52,56,57,58,55,61,60)
MR_decl_label4(create_report__create_root_report_3_0, 2,3,8,4)
MR_decl_label6(create_report__create_top_procs_report_6_0, 3,2,4,7,6,12)
MR_decl_label4(create_report__error_2_0, 2,3,4,5)
MR_decl_label4(create_report__find_start_of_action_4_0, 32,4,9,6)
MR_decl_label3(create_report__find_start_of_action_callee_4_0, 6,4,3)
MR_decl_label1(create_report__find_start_of_action_clique_proc_4_0, 4)
MR_decl_label10(create_report__gather_getters_setters_4_0, 4,6,9,11,12,13,18,15,21,22)
MR_decl_label10(create_report__gather_getters_setters_4_0, 25,30,28,34,27,37,23,40,45,8)
MR_decl_label1(create_report__gather_getters_setters_4_0, 2)
MR_decl_label4(create_report__group_proc_dynamics_by_proc_static_4_0, 3,4,7,5)
MR_decl_label6(create_report__is_getter_or_setter_4_0, 3,4,7,10,11,1)
MR_decl_label4(create_report__is_getter_or_setter_2_4_0, 2,169,25,1)
MR_decl_label3(create_report__psi_to_perf_row_data_3_0, 2,3,4)
MR_decl_label10(fn__create_report__create_call_site_summary_2_0, 2,3,4,6,11,13,14,16,17,8)
MR_decl_label10(fn__create_report__create_call_site_summary_2_0, 22,24,25,27,28,19,33,35,36,38)
MR_decl_label10(fn__create_report__create_call_site_summary_2_0, 39,30,44,46,47,49,50,41,52,57)
MR_decl_label7(fn__create_report__create_call_site_summary_2_0, 58,56,62,63,60,55,65)
MR_decl_label1(fn__create_report__create_cs_summary_add_to_map_3_0, 2)
MR_decl_label2(fn__create_report__create_proc_caller_call_sites_3_0, 2,3)
MR_decl_label2(fn__create_report__create_proc_caller_cliques_3_0, 2,3)
MR_decl_label1(fn__create_report__create_proc_caller_modules_3_0, 2)
MR_decl_label2(fn__create_report__create_proc_caller_procedures_3_0, 2,3)
MR_decl_label9(fn__create_report__describe_call_site_2_0, 4,6,7,8,11,10,2,15,16)
MR_decl_label10(fn__create_report__describe_clique_3_0, 3,5,6,7,9,8,11,13,14,16)
MR_decl_label2(fn__create_report__describe_clique_3_0, 10,2)
MR_decl_label1(fn__create_report__describe_clique_member_2_0, 2)
MR_decl_label3(fn__create_report__describe_proc_2_0, 4,6,2)
MR_decl_label10(fn__create_report__find_clique_ancestors_2_0, 2,4,6,22,7,8,9,10,11,12)
MR_decl_label3(fn__create_report__find_clique_ancestors_2_0, 14,16,17)
MR_decl_label3(fn__create_report__generate_call_site_callee_perf_3_0, 3,4,5)
MR_decl_label3(fn__create_report__int_per_call_2_0, 15,4,5)
MR_decl_label2(fn__create_report__module_pair_to_row_data_2_0, 2,4)
MR_decl_label4(fn__create_report__percent_from_ints_2_0, 18,5,6,17)
MR_decl_label6(fn__create_report__proc_to_active_row_data_2_0, 2,3,4,6,5,7)
MR_decl_label3(__Unify___create_report__call_site_callee_perf_0_0, 4,8,1)
MR_decl_label4(__Unify___create_report__gs_field_raw_data_0_0, 4,6,10,1)
MR_decl_label5(__Compare___create_report__call_site_callee_perf_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___create_report__gs_field_raw_data_0_0, 3,2,5,9,29)
MR_def_extern_entry(create_report__create_proc_var_use_dump_report_3_0)
MR_decl_static(fn__create_report__int_per_call_2_0)
MR_decl_static(fn__create_report__percent_from_ints_2_0)
MR_decl_static(fn__create_report__describe_proc_2_0)
MR_def_extern_entry(create_report__create_proc_report_3_0)
MR_def_extern_entry(create_report__create_procrep_coverage_report_3_0)
MR_def_extern_entry(create_report__create_top_procs_report_6_0)
MR_decl_static(fn__create_report__describe_call_site_2_0)
MR_decl_static(fn__create_report__find_clique_ancestors_2_0)
MR_def_extern_entry(create_report__create_clique_report_3_0)
MR_decl_static(create_report__find_start_of_action_4_0)
MR_decl_static(create_report__create_root_report_3_0)
MR_decl_static(create_report__create_program_modules_report_2_0)
MR_decl_static(create_report__create_module_report_3_0)
MR_decl_static(create_report__create_module_getter_setter_report_3_0)
MR_decl_static(create_report__create_proc_callers_report_7_0)
MR_decl_static(create_report__create_proc_static_dump_report_3_0)
MR_decl_static(create_report__create_proc_dynamic_dump_report_3_0)
MR_decl_static(create_report__create_call_site_static_dump_report_3_0)
MR_decl_static(create_report__create_call_site_dynamic_dump_report_3_0)
MR_decl_static(fn__create_report__describe_clique_member_2_0)
MR_decl_static(create_report__error_2_0)
MR_decl_static(fn__create_report__describe_clique_3_0)
MR_decl_static(create_report__create_clique_dump_report_3_0)
MR_def_extern_entry(create_report__create_report_3_0)
MR_decl_static(create_report__find_start_of_action_clique_proc_dynamic_4_0)
MR_decl_static(create_report__find_start_of_action_clique_proc_4_0)
MR_decl_static(create_report__find_start_of_action_call_site_4_0)
MR_decl_static(create_report__find_start_of_action_callee_4_0)
MR_decl_static(create_report__group_proc_dynamics_by_proc_static_4_0)
MR_decl_static(create_report__proc_group_contains_2_0)
MR_decl_static(create_report__create_clique_proc_dynamic_report_7_0)
MR_decl_static(create_report__create_clique_proc_report_4_0)
MR_decl_static(create_report__create_callee_clique_perf_row_data_5_0)
MR_decl_static(create_report__create_child_call_site_report_3_0)
MR_decl_static(create_report__not_mercury_runtime_1_0)
MR_decl_static(fn__create_report__module_pair_to_row_data_2_0)
MR_decl_static(fn__create_report__proc_to_active_row_data_2_0)
MR_decl_static(create_report__getter_setter_raw_map_to_info_map_4_0)
MR_decl_static(create_report__getter_setter_raw_data_to_info_4_0)
MR_decl_static(create_report__is_getter_or_setter_2_4_0)
MR_decl_static(create_report__is_getter_or_setter_4_0)
MR_decl_static(create_report__gather_getters_setters_4_0)
MR_decl_static(fn__create_report__generate_call_site_callee_perf_3_0)
MR_decl_static(fn__create_report__create_call_site_summary_2_0)
MR_decl_static(create_report__accumulate_csd_prof_info_7_0)
MR_decl_static(create_report__accumulate_call_site_callees_7_0)
MR_decl_static(fn__create_report__create_proc_caller_call_sites_3_0)
MR_decl_static(fn__create_report__create_proc_caller_procedures_3_0)
MR_decl_static(fn__create_report__create_proc_caller_modules_3_0)
MR_decl_static(fn__create_report__create_proc_caller_cliques_3_0)
MR_decl_static(fn__create_report__create_cs_summary_add_to_map_3_0)
MR_decl_static(create_report__add_coverage_point_to_map_5_0)
MR_decl_static(create_report__psi_to_perf_row_data_3_0)
MR_decl_static(__Unify___create_report__call_site_callee_perf_0_0)
MR_decl_static(__Compare___create_report__call_site_callee_perf_0_0)
MR_decl_static(__Unify___create_report__gs_field_raw_data_0_0)
MR_decl_static(__Compare___create_report__gs_field_raw_data_0_0)
MR_decl_static(__Unify___create_report__raw_gs_ds_map_0_0)
MR_decl_static(__Compare___create_report__raw_gs_ds_map_0_0)
MR_decl_static(__Unify___create_report__raw_gs_field_info_0_0)
MR_decl_static(__Compare___create_report__raw_gs_field_info_0_0)
MR_decl_static(__Unify___create_report__raw_gs_field_map_0_0)
MR_decl_static(__Compare___create_report__raw_gs_field_map_0_0)
MR_decl_static(create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__400__1_2_0)
MR_decl_static(create_report__IntroducedFrom__pred__create_call_site_summary__844__1_2_0)
MR_decl_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0)
MR_decl_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_head_var_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_perf_row_data_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_active_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_active_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_active_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_active_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_perf_row_data_1;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclude_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[25] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, head_var_rep)
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
MR_CTOR0_ADDR(var_use_analysis, var_use_type)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, proc_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, proc_desc)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, module_active)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, module_active)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, proc_active)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, proc_active)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, proc_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(exclude, exclude_spec)
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
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, call_site_desc)
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
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, call_site_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, clique_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, clique_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_var_use_dump_report_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_report_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_top_procs_report_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_program_modules_report_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_module_report_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__describe_clique_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_desc_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_call_site_report_0;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_proc_var_use_dump_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_proc_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(report, call_site_perf)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_top_procs_report_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_program_modules_report_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(4,9),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_module_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(0,12)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__describe_clique_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(report, proc_desc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(4,31),
MR_CTOR0_ADDR(report, clique_call_site_report)
}
},
};

MR_decl_entry(var_use_analysis__head_vars_all_3_0);
MR_decl_entry(fn__apply_exclusion__pair_self_1_0);
static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(var_use_analysis__head_vars_all_3_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(create_report__add_coverage_point_to_map_5_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(create_report__not_mercury_runtime_1_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(fn__apply_exclusion__pair_self_1_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[7] =
{
{
MR_string_const("invalid proc_static index", 25)
},
{
MR_string_const("There is no readable procedure representation information file.", 63)
},
{
MR_string_const("Invalid proc_static index", 25)
},
{
MR_string_const("invalid proc_dynamic index", 26)
},
{
MR_string_const("invalid call_site_static index", 30)
},
{
MR_string_const("invalid call_site_dynamic index", 31)
},
{
MR_string_const("invalid clique_ptr", 18)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_coverage_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_coverage_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_gs_field_info_2;
extern const MR_TypeCtorInfo_Struct mercury_data_create_report__type_ctor_info_gs_field_raw_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_field_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_data_struct_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_gs_field_info_2;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_field_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_data_struct_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
static const struct mercury_type_4 mercury_common_4[35] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(report, call_site_perf)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(report, call_site_perf)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(profile, coverage_point)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(profile, coverage_point)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,0,6)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,0,6)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, module_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, module_data)
}
},
{
{
MR_CTOR_ADDR(report, gs_field_info, 2),
MR_CTOR0_ADDR(create_report, gs_field_raw_data),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, field_name),
MR_COMMON(4,10)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, data_struct_name),
MR_COMMON(4,11)
}
},
{
{
MR_CTOR_ADDR(report, gs_field_info, 2),
MR_CTOR0_ADDR(create_report, gs_field_raw_data),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, field_name),
MR_TAG_COMMON(0,4,13)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, data_struct_name),
MR_TAG_COMMON(0,4,14)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, field_name),
MR_COMMON(4,10)
}
},
{
{
MR_CTOR_ADDR(report, gs_field_info, 2),
MR_COMMON(0,13),
MR_COMMON(0,14)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, field_name),
MR_COMMON(4,17)
}
},
{
{
MR_CTOR_ADDR(report, gs_field_info, 2),
MR_TAG_COMMON(0,0,4),
MR_TAG_COMMON(0,0,15)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, field_name),
MR_TAG_COMMON(0,4,19)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_TAG_COMMON(0,0,17)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_COMMON(0,19)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_TAG_COMMON(0,0,17)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(0,19)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,0,17)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,19)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,0,17)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(0,19)
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
MR_CTOR_ADDR(report, gs_field_info, 2),
MR_CTOR0_ADDR(create_report, gs_field_raw_data),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(report, gs_field_info, 2),
MR_COMMON(0,13),
MR_COMMON(0,14)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_procrep_coverage_report_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_report_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_report_3_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_report_0;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_report_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_module_getter_setter_report_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_module_getter_setter_report_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_data_struct_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_dynamic_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_call_site_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_create_report__type_ctor_info_call_site_callee_perf_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_field_name_0;
static const struct mercury_type_5 mercury_common_5[21] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_procrep_coverage_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_COMMON(4,1),
MR_COMMON(4,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_clique_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(4,4),
MR_COMMON(4,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_clique_report_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(4,6),
MR_CTOR0_ADDR(report, clique_proc_report)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_clique_report_3_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(4,6),
MR_CTOR0_ADDR(report, clique_proc_report)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__find_start_of_action_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(report, clique_proc_report),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_module_getter_setter_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,12),
MR_COMMON(4,12)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_module_getter_setter_report_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(report, data_struct_name),
MR_COMMON(4,16),
MR_COMMON(4,18)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(0,16),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(4,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,24),
MR_COMMON(0,20)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,26),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,28),
MR_COMMON(0,24)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,30),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_dynamic_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(report, clique_call_site_report),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(report, clique_call_site_report),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(report, clique_proc_dynamic_report),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__find_start_of_action_call_site_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,22),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,30),
MR_CTOR0_ADDR(create_report, call_site_callee_perf)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,30),
MR_CTOR0_ADDR(create_report, call_site_callee_perf)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,30),
MR_CTOR0_ADDR(create_report, call_site_callee_perf)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_7,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(4,30),
MR_CTOR0_ADDR(create_report, call_site_callee_perf)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(report, field_name),
MR_COMMON(4,33),
MR_COMMON(4,34)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_procrep_coverage_report_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_coverage_point_0;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_4;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_procrep_coverage_report_3_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, coverage_point),
MR_COMMON(4,3),
MR_COMMON(4,3),
MR_COMMON(4,3),
MR_COMMON(4,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_COMMON(0,22)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_report_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__group_proc_dynamics_by_proc_static_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_callee_clique_perf_row_data_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_1;
static const struct mercury_type_7 mercury_common_7[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_clique_report_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(4,6)
},
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(4,22)
},
{
(MR_Word *) &mercury_data__closure_layout__create_report__group_proc_dynamics_by_proc_static_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_callee_clique_perf_row_data_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_9,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, proc_static_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, proc_static_ptr)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_program_modules_report_2_0_1;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_program_modules_report_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(4,9)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_proc_report_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__generate_call_site_callee_perf_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_8;
static const struct mercury_type_9 mercury_common_9[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_clique_proc_report_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(report, proc_desc),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(report, clique_proc_dynamic_report)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__generate_call_site_callee_perf_3_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(create_report, call_site_callee_perf),
MR_COMMON(0,3),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(create_report, call_site_callee_perf),
MR_COMMON(0,3),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_6,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(create_report, call_site_callee_perf),
MR_COMMON(0,3),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_8,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(create_report, call_site_callee_perf),
MR_COMMON(0,3),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;

const MR_PseudoTypeInfo mercury_data_create_report__field_types_call_site_callee_perf_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_own_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_inherit_prof_info_0
};

const MR_ConstString mercury_data_create_report__field_names_call_site_callee_perf_0_0[] = {
	"cscpi_callee",
	"cscpi_own_prof_info",
	"cscpi_inherit_prof_info"
};

static const MR_DuFunctorDesc mercury_data_create_report__du_functor_desc_call_site_callee_perf_0_0 = {
	"call_site_callee_perf",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_create_report__field_types_call_site_callee_perf_0_0,
	mercury_data_create_report__field_names_call_site_callee_perf_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_create_report__du_stag_ordered_call_site_callee_perf_0_0[] = {
	&mercury_data_create_report__du_functor_desc_call_site_callee_perf_0_0

};

const MR_DuPtagLayout mercury_data_create_report__du_ptag_ordered_call_site_callee_perf_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_create_report__du_stag_ordered_call_site_callee_perf_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_create_report__du_name_ordered_call_site_callee_perf_0[] = {
	&mercury_data_create_report__du_functor_desc_call_site_callee_perf_0_0
};

const MR_Integer mercury_data_create_report__functor_number_map_call_site_callee_perf_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_create_report__type_ctor_info_call_site_callee_perf_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___create_report__call_site_callee_perf_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___create_report__call_site_callee_perf_0_0)),
	"create_report",
	"call_site_callee_perf",
	{ (void *)mercury_data_create_report__du_name_ordered_call_site_callee_perf_0 },
	{ (void *)mercury_data_create_report__du_ptag_ordered_call_site_callee_perf_0 },
	1,
	4,
	mercury_data_create_report__functor_number_map_call_site_callee_perf_0
};

const MR_PseudoTypeInfo mercury_data_create_report__field_types_gs_field_raw_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_own_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_inherit_prof_info_0
};

const MR_ConstString mercury_data_create_report__field_names_gs_field_raw_data_0_0[] = {
	"gs_raw_proc",
	"gs_raw_own",
	"gs_raw_desc"
};

static const MR_DuFunctorDesc mercury_data_create_report__du_functor_desc_gs_field_raw_data_0_0 = {
	"gs_field_raw_data",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_create_report__field_types_gs_field_raw_data_0_0,
	mercury_data_create_report__field_names_gs_field_raw_data_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_create_report__du_stag_ordered_gs_field_raw_data_0_0[] = {
	&mercury_data_create_report__du_functor_desc_gs_field_raw_data_0_0

};

const MR_DuPtagLayout mercury_data_create_report__du_ptag_ordered_gs_field_raw_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_create_report__du_stag_ordered_gs_field_raw_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_create_report__du_name_ordered_gs_field_raw_data_0[] = {
	&mercury_data_create_report__du_functor_desc_gs_field_raw_data_0_0
};

const MR_Integer mercury_data_create_report__functor_number_map_gs_field_raw_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_create_report__type_ctor_info_gs_field_raw_data_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___create_report__gs_field_raw_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___create_report__gs_field_raw_data_0_0)),
	"create_report",
	"gs_field_raw_data",
	{ (void *)mercury_data_create_report__du_name_ordered_gs_field_raw_data_0 },
	{ (void *)mercury_data_create_report__du_ptag_ordered_gs_field_raw_data_0 },
	1,
	4,
	mercury_data_create_report__functor_number_map_gs_field_raw_data_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
	&mercury_data_report__type_ctor_info_gs_field_info_2,
{	(MR_TypeInfo) &mercury_data_create_report__type_ctor_info_gs_field_raw_data_0,
	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_field_name_0,
	(MR_TypeInfo) &mercury_data_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_data_struct_name_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
}};

const MR_TypeCtorInfo_Struct mercury_data_create_report__type_ctor_info_raw_gs_ds_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___create_report__raw_gs_ds_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___create_report__raw_gs_ds_map_0_0)),
	"create_report",
	"raw_gs_ds_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_create_report__type_ctor_info_raw_gs_field_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___create_report__raw_gs_field_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___create_report__raw_gs_field_info_0_0)),
	"create_report",
	"raw_gs_field_info",
	{ 0 },
	{ (void *)&mercury_data_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_create_report__type_ctor_info_raw_gs_field_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___create_report__raw_gs_field_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___create_report__raw_gs_field_map_0_0)),
	"create_report",
	"raw_gs_field_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"getter_setter_raw_data_to_info",
4,
0
},
"create_report",
"create_report.m",
624,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_2 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"create_child_call_site_report",
3,
0
},
"create_report",
"create_report.m",
421,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"lambda_create_report_m_400",
2,
0
},
"create_report",
"create_report.m",
400,
"d1;c8;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_9 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"lambda_create_report_m_844",
2,
0
},
"create_report",
"create_report.m",
844,
"d1;c10;d1;c5;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_8 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"accumulate_call_site_callees",
7,
0
},
"create_report",
"create_report.m",
873,
"d1;c10;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_7 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"generate_call_site_callee_perf",
4,
0
},
"create_report",
"create_report.m",
871,
"d1;c10;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_6 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"accumulate_call_site_callees",
7,
0
},
"create_report",
"create_report.m",
873,
"d1;c10;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_5 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"generate_call_site_callee_perf",
4,
0
},
"create_report",
"create_report.m",
871,
"d1;c10;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_4 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"accumulate_call_site_callees",
7,
0
},
"create_report",
"create_report.m",
873,
"d1;c10;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_3 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"generate_call_site_callee_perf",
4,
0
},
"create_report",
"create_report.m",
871,
"d1;c10;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_2 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"accumulate_call_site_callees",
7,
0
},
"create_report",
"create_report.m",
873,
"d1;c10;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__create_call_site_summary_2_0_1 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"generate_call_site_callee_perf",
4,
0
},
"create_report",
"create_report.m",
871,
"d1;c10;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__generate_call_site_callee_perf_3_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"accumulate_csd_prof_info",
7,
0
},
"create_report",
"create_report.m",
894,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_4 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"create_callee_clique_perf_row_data",
5,
0
},
"create_report",
"create_report.m",
473,
"d1;c8;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_3 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"create_callee_clique_perf_row_data",
5,
0
},
"create_report",
"create_report.m",
473,
"d1;c8;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_2 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"create_callee_clique_perf_row_data",
5,
0
},
"create_report",
"create_report.m",
473,
"d1;c8;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_child_call_site_report_3_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"create_callee_clique_perf_row_data",
5,
0
},
"create_report",
"create_report.m",
473,
"d1;c8;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_callee_clique_perf_row_data_5_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_call_site_dynamic_ptr",
2,
0
},
"create_report",
"create_report.m",
489,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_proc_report_4_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"create_clique_proc_dynamic_report",
7,
0
},
"create_report",
"create_report.m",
376,
"d1;c5;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__group_proc_dynamics_by_proc_static_4_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_proc_dynamic_ptr",
2,
0
},
"create_report",
"create_report.m",
346,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_call_site_4_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"find_start_of_action_callee",
4,
0
},
"create_report",
"create_report.m",
257,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_4_0_2 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"find_start_of_action_clique_proc_dynamic",
4,
0
},
"create_report",
"create_report.m",
239,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_4_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"find_start_of_action_call_site",
4,
0
},
"create_report",
"create_report.m",
249,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_clique_proc_dynamic_4_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"find_start_of_action_call_site",
4,
0
},
"create_report",
"create_report.m",
249,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__create_report__describe_clique_3_0_1 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"describe_clique_member",
3,
0
},
"create_report",
"create_report.m",
1477,
"d1;c5;t;c5;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_6 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"create_proc_caller_procedures",
4,
0
},
"create_report",
"create_report.m",
1000,
"t;c4;s2-2;c2;s4-4;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_5 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"create_proc_caller_modules",
4,
0
},
"create_report",
"create_report.m",
1008,
"t;c4;s2-2;c2;s3-4;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_4 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"create_proc_caller_cliques",
4,
0
},
"create_report",
"create_report.m",
1016,
"t;c4;s2-2;c2;s2-4;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_3 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"create_proc_caller_call_sites",
4,
0
},
"create_report",
"create_report.m",
992,
"t;c4;s2-2;c2;s1-4;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_2 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"pair_self",
2,
0
},
"create_report",
"create_report.m",
945,
"t;c3;s2-2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_callers_report_7_0_1 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"pair_contour",
4,
0
},
"create_report",
"create_report.m",
971,
"t;c3;s1-2;c3;s2-3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_module_getter_setter_report_3_0_2 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"getter_setter_raw_map_to_info_map",
4,
0
},
"create_report",
"create_report.m",
609,
"t;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_module_getter_setter_report_3_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"gather_getters_setters",
4,
0
},
"create_report",
"create_report.m",
607,
"t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_module_report_3_0_1 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"proc_to_active_row_data",
3,
0
},
"create_report",
"create_report.m",
554,
"t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_program_modules_report_2_0_2 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"module_pair_to_row_data",
3,
0
},
"create_report",
"create_report.m",
514,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_program_modules_report_2_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"not_mercury_runtime",
1,
0
},
"create_report",
"create_report.m",
513,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__find_start_of_action_4_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"find_start_of_action_clique_proc",
4,
0
},
"create_report",
"create_report.m",
219,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_report_3_0_4 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"create_clique_proc_report",
4,
0
},
"create_report",
"create_report.m",
302,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_report_3_0_3 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"create_clique_proc_report",
4,
0
},
"create_report",
"create_report.m",
302,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_report_3_0_2 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"proc_group_contains",
2,
0
},
"create_report",
"create_report.m",
296,
"d1;c11;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_clique_report_3_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"group_proc_dynamics_by_proc_static",
4,
0
},
"create_report",
"create_report.m",
289,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_top_procs_report_6_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"psi_to_perf_row_data",
3,
0
},
"create_report",
"create_report.m",
789,
"d1;c9;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_procrep_coverage_report_3_0_2 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"add_coverage_point_to_map",
5,
0
},
"create_report",
"create_report.m",
1103,
"d1;c5;d3;c3;t;c3;t;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_procrep_coverage_report_3_0_1 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"create_cs_summary_add_to_map",
4,
0
},
"create_report",
"create_report.m",
1098,
"d1;c5;d3;c3;t;c3;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_report_3_0_1 = {
{
MR_FUNCTION,
"create_report",
"create_report",
"create_call_site_summary",
3,
0
},
"create_report",
"create_report.m",
810,
"d1;c4;t;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_proc_var_use_dump_report_3_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"head_vars_all",
3,
0
},
"create_report",
"create_report.m",
1246,
"d1;c4;"
};


MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(var_use_analysis__generic_vars_first_use_5_0);

MR_BEGIN_MODULE(create_report_module0)
	MR_init_entry1(create_report__create_proc_var_use_dump_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_proc_var_use_dump_report_3_0);
	MR_init_label1(create_report__create_proc_var_use_dump_report_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_var_use_dump_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__create_report__create_proc_var_use_dump_report_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		create_report__create_proc_var_use_dump_report_3_0_i2);
MR_def_label(create_report__create_proc_var_use_dump_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(var_use_analysis__generic_vars_first_use_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(create_report_module1)
	MR_init_entry1(fn__create_report__int_per_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__int_per_call_2_0);
	MR_init_label3(fn__create_report__int_per_call_2_0,15,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_per_call'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__int_per_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__create_report__int_per_call_2_0_i15);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_proceed();
MR_def_label(fn__create_report__int_per_call_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__create_report__int_per_call_2_0_i4);
MR_def_label(fn__create_report__int_per_call_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__create_report__int_per_call_2_0_i5);
MR_def_label(fn__create_report__int_per_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurement_units__percent_1_0);

MR_BEGIN_MODULE(create_report_module2)
	MR_init_entry1(fn__create_report__percent_from_ints_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__percent_from_ints_2_0);
	MR_init_label4(fn__create_report__percent_from_ints_2_0,18,5,6,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'percent_from_ints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__percent_from_ints_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__create_report__percent_from_ints_2_0_i18);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_tailcall_ent(fn__measurement_units__percent_1_0);
MR_def_label(fn__create_report__percent_from_ints_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__create_report__percent_from_ints_2_0_i5);
MR_def_label(fn__create_report__percent_from_ints_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__create_report__percent_from_ints_2_0_i6);
MR_def_label(fn__create_report__percent_from_ints_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__create_report__percent_from_ints_2_0_i17);
MR_def_label(fn__create_report__percent_from_ints_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__measurement_units__percent_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_proc_static_ptr_2_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);

MR_BEGIN_MODULE(create_report_module3)
	MR_init_entry1(fn__create_report__describe_proc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__describe_proc_2_0);
	MR_init_label3(fn__create_report__describe_proc_2_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__describe_proc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		fn__create_report__describe_proc_2_0_i4);
MR_def_label(fn__create_report__describe_proc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__create_report__describe_proc_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__create_report__describe_proc_2_0_i6);
MR_def_label(fn__create_report__describe_proc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__create_report__describe_proc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_string_const("mercury_runtime", 15);
	MR_tfield(0, MR_r1, 5) = (MR_Word) MR_string_const("mercury_runtime", 15);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_ps_own_3_0);
MR_decl_entry(profile__deep_lookup_ps_desc_3_0);
MR_decl_entry(array__to_list_2_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(create_report_module4)
	MR_init_entry1(create_report__create_proc_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_proc_report_3_0);
	MR_init_label9(create_report__create_proc_report_3_0,3,5,6,7,9,10,11,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__create_report__create_proc_report_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		create_report__create_proc_report_3_0_i3);
MR_def_label(create_report__create_proc_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_proc_report_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		create_report__create_proc_report_3_0_i5);
MR_def_label(create_report__create_proc_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		create_report__create_proc_report_3_0_i6);
MR_def_label(create_report__create_proc_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		create_report__create_proc_report_3_0_i7);
MR_def_label(create_report__create_proc_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_proc_report_3_0_i9);
MR_def_label(create_report__create_proc_report_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		create_report__create_proc_report_3_0_i10);
MR_def_label(create_report__create_proc_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		create_report__create_proc_report_3_0_i11);
MR_def_label(create_report__create_proc_report_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__create_call_site_summary_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_proc_report_3_0_i13);
MR_def_label(create_report__create_proc_report_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(create_report__create_proc_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(program_representation_utils__progrep_search_proc_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__array__foldl_3_0);
MR_decl_entry(array__foldl2_6_0);
MR_decl_entry(coverage__procrep_annotate_with_coverage_6_0);
MR_decl_entry(fn__string__string_1_0);

MR_BEGIN_MODULE(create_report_module5)
	MR_init_entry1(create_report__create_procrep_coverage_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_procrep_coverage_report_3_0);
	MR_init_label10(create_report__create_procrep_coverage_report_3_0,68,7,8,6,11,13,16,18,21,22)
	MR_init_label8(create_report__create_procrep_coverage_report_3_0,23,24,27,28,15,31,32,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_procrep_coverage_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__create_report__create_procrep_coverage_report_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 27);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(create_report__create_procrep_coverage_report_3_0_i68);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_proceed();
MR_def_label(create_report__create_procrep_coverage_report_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(create_report__create_procrep_coverage_report_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("information file: ", 18);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_procrep_coverage_report_3_0_i7);
MR_def_label(create_report__create_procrep_coverage_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error reading procedure representation ", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_procrep_coverage_report_3_0_i8);
MR_def_label(create_report__create_procrep_coverage_report_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(create_report__create_procrep_coverage_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		create_report__create_procrep_coverage_report_3_0_i11);
MR_def_label(create_report__create_procrep_coverage_report_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_procrep_coverage_report_3_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		create_report__create_procrep_coverage_report_3_0_i13);
MR_def_label(create_report__create_procrep_coverage_report_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(program_representation_utils__progrep_search_proc_3_0,
		create_report__create_procrep_coverage_report_3_0_i16);
MR_def_label(create_report__create_procrep_coverage_report_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_procrep_coverage_report_3_0_i15);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		create_report__create_procrep_coverage_report_3_0_i18);
MR_def_label(create_report__create_procrep_coverage_report_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__create_cs_summary_add_to_map_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(3), 8);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_sv(8) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		create_report__create_procrep_coverage_report_3_0_i21);
MR_def_label(create_report__create_procrep_coverage_report_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__foldl_3_0,
		create_report__create_procrep_coverage_report_3_0_i22);
MR_def_label(create_report__create_procrep_coverage_report_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		create_report__create_procrep_coverage_report_3_0_i23);
MR_def_label(create_report__create_procrep_coverage_report_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__init_0_0,
		create_report__create_procrep_coverage_report_3_0_i24);
MR_def_label(create_report__create_procrep_coverage_report_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__foldl2_6_0,
		create_report__create_procrep_coverage_report_3_0_i27);
MR_def_label(create_report__create_procrep_coverage_report_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(coverage__procrep_annotate_with_coverage_6_0,
		create_report__create_procrep_coverage_report_3_0_i28);
MR_def_label(create_report__create_procrep_coverage_report_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_procrep_coverage_report_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__string_1_0,
		create_report__create_procrep_coverage_report_3_0_i31);
MR_def_label(create_report__create_procrep_coverage_report_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Program Representation doesn\'t contain procedure: ", 50);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_procrep_coverage_report_3_0_i32);
MR_def_label(create_report__create_procrep_coverage_report_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_procrep_coverage_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__top_procs__find_top_procs_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(create_report_module6)
	MR_init_entry1(create_report__create_top_procs_report_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_top_procs_report_6_0);
	MR_init_label6(create_report__create_top_procs_report_6_0,3,2,4,7,6,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_top_procs_report'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__create_report__create_top_procs_report_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(create_report__create_top_procs_report_6_0_i3);
	}
	MR_r5 = MR_r1;
	MR_r4 = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(create_report__create_top_procs_report_6_0_i2);
MR_def_label(create_report__create_top_procs_report_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
MR_def_label(create_report__create_top_procs_report_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(fn__top_procs__find_top_procs_5_0,
		create_report__create_top_procs_report_6_0_i4);
MR_def_label(create_report__create_top_procs_report_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(create_report__create_top_procs_report_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Internal error: ", 16);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_top_procs_report_6_0_i7);
MR_def_label(create_report__create_top_procs_report_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(create_report__create_top_procs_report_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(create_report__psi_to_perf_row_data_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		create_report__create_top_procs_report_6_0_i12);
MR_def_label(create_report__create_top_procs_report_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_call_site_static_ptr_2_0);
MR_decl_entry(profile__deep_lookup_call_site_statics_3_0);
MR_decl_entry(mdbcomp__program_representation__goal_path_from_string_det_2_0);
MR_decl_entry(fn__profile__dummy_proc_static_ptr_0_0);
MR_decl_entry(fn__mdbcomp__program_representation__empty_goal_path_0_0);

MR_BEGIN_MODULE(create_report_module7)
	MR_init_entry1(fn__create_report__describe_call_site_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__describe_call_site_2_0);
	MR_init_label9(fn__create_report__describe_call_site_2_0,4,6,7,8,11,10,2,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_call_site'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__describe_call_site_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_call_site_static_ptr_2_0,
		fn__create_report__describe_call_site_2_0_i4);
MR_def_label(fn__create_report__describe_call_site_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__create_report__describe_call_site_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__create_report__describe_call_site_2_0_i6);
MR_def_label(fn__create_report__describe_call_site_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 3);
	MR_sv(7) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__create_report__describe_call_site_2_0_i7);
MR_def_label(fn__create_report__describe_call_site_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 5);
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_sv(9) = MR_tfield(0, MR_r1, 2);
	MR_sv(10) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdbcomp__program_representation__goal_path_from_string_det_2_0,
		fn__create_report__describe_call_site_2_0_i8);
MR_def_label(fn__create_report__describe_call_site_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(fn__create_report__describe_call_site_2_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		fn__create_report__describe_call_site_2_0_i11);
MR_def_label(fn__create_report__describe_call_site_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(7);
	MR_tfield(0, MR_r1, 3) = MR_sv(6);
	MR_tfield(0, MR_r1, 4) = MR_sv(8);
	MR_tfield(0, MR_r1, 5) = MR_sv(9);
	MR_tfield(0, MR_r1, 6) = MR_sv(10);
	MR_tfield(0, MR_r1, 7) = MR_sv(4);
	MR_tfield(0, MR_r1, 8) = MR_sv(1);
	MR_tfield(0, MR_r1, 9) = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(fn__create_report__describe_call_site_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(7);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_sv(9);
	MR_tfield(0, MR_r2, 6) = MR_sv(10);
	MR_tfield(0, MR_r2, 7) = MR_sv(4);
	MR_tfield(0, MR_r2, 8) = MR_r1;
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(fn__create_report__describe_call_site_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__profile__dummy_proc_static_ptr_0_0,
		fn__create_report__describe_call_site_2_0_i15);
MR_def_label(fn__create_report__describe_call_site_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__empty_goal_path_0_0,
		fn__create_report__describe_call_site_2_0_i16);
MR_def_label(fn__create_report__describe_call_site_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_string_const("mercury_runtime", 15);
	MR_tfield(0, MR_r2, 6) = (MR_Word) MR_string_const("mercury_runtime", 15);
	MR_tfield(0, MR_r2, 7) = (MR_Integer) -1;
	MR_tfield(0, MR_r2, 8) = MR_r1;
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_clique_parents_3_0);
MR_decl_entry(profile__valid_call_site_dynamic_ptr_2_0);
MR_decl_entry(profile__deep_lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__deep_lookup_clique_index_3_0);
MR_decl_entry(profile__deep_lookup_proc_dynamics_3_0);
MR_decl_entry(profile__deep_lookup_call_site_static_map_3_0);
MR_decl_entry(profile__deep_lookup_csd_desc_3_0);

MR_BEGIN_MODULE(create_report_module8)
	MR_init_entry1(fn__create_report__find_clique_ancestors_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__find_clique_ancestors_2_0);
	MR_init_label10(fn__create_report__find_clique_ancestors_2_0,2,4,6,22,7,8,9,10,11,12)
	MR_init_label3(fn__create_report__find_clique_ancestors_2_0,14,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_clique_ancestors'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__find_clique_ancestors_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		fn__create_report__find_clique_ancestors_2_0_i2);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		fn__create_report__find_clique_ancestors_2_0_i4);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__create_report__find_clique_ancestors_2_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__create_report__find_clique_ancestors_2_0_i6);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 4);
	if ((MR_r2 != MR_tempr1)) {
		MR_GOTO_LAB(fn__create_report__find_clique_ancestors_2_0_i7);
	}
	}
MR_def_label(fn__create_report__find_clique_ancestors_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		fn__create_report__find_clique_ancestors_2_0_i8);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		fn__create_report__find_clique_ancestors_2_0_i9);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		fn__create_report__find_clique_ancestors_2_0_i10);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__create_report__find_clique_ancestors_2_0_i11);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__describe_call_site_2_0,
		fn__create_report__find_clique_ancestors_2_0_i12);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_sv(4), 2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		fn__create_report__find_clique_ancestors_2_0_i14);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		fn__create_report__find_clique_ancestors_2_0_i16);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_localcall_lab(fn__create_report__find_clique_ancestors_2_0,
		fn__create_report__find_clique_ancestors_2_0_i17);
MR_def_label(fn__create_report__find_clique_ancestors_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_clique_members_3_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_report_0;

MR_BEGIN_MODULE(create_report_module9)
	MR_init_entry1(create_report__create_clique_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_clique_report_3_0);
	MR_init_label10(create_report__create_clique_report_3_0,2,3,6,8,9,10,13,15,18,19)
	MR_init_label2(create_report__create_clique_report_3_0,12,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_clique_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__create_report__create_clique_report_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__create_report__find_clique_ancestors_2_0,
		create_report__create_clique_report_3_0_i2);
MR_def_label(create_report__create_clique_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		create_report__create_clique_report_3_0_i3);
MR_def_label(create_report__create_clique_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__group_proc_dynamics_by_proc_static_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		create_report__create_clique_report_3_0_i6);
MR_def_label(create_report__create_clique_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		create_report__create_clique_report_3_0_i8);
MR_def_label(create_report__create_clique_report_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		create_report__create_clique_report_3_0_i9);
MR_def_label(create_report__create_clique_report_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		create_report__create_clique_report_3_0_i10);
MR_def_label(create_report__create_clique_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		create_report__create_clique_report_3_0_i13);
MR_def_label(create_report__create_clique_report_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_clique_report_3_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		create_report__create_clique_report_3_0_i15);
MR_def_label(create_report__create_clique_report_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(create_report__proc_group_contains_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		create_report__create_clique_report_3_0_i18);
MR_def_label(create_report__create_clique_report_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		create_report__create_clique_report_3_0_i19);
MR_def_label(create_report__create_clique_report_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__create_clique_proc_report_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_report);
	}
	MR_np_call_localret_ent(list__map_3_0,
		create_report__create_clique_report_3_0_i24);
MR_def_label(create_report__create_clique_report_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__create_clique_proc_report_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_tfield(0, MR_r1, 2) = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_report);
	}
	MR_np_call_localret_ent(list__map_3_0,
		create_report__create_clique_report_3_0_i24);
MR_def_label(create_report__create_clique_report_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module10)
	MR_init_entry1(create_report__find_start_of_action_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__find_start_of_action_4_0);
	MR_init_label4(create_report__find_start_of_action_4_0,32,4,9,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_start_of_action'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__find_start_of_action_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(create_report__find_start_of_action_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__find_start_of_action_clique_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_report);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(3), 2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		create_report__find_start_of_action_4_0_i4);
MR_def_label(create_report__find_start_of_action_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(create_report__find_start_of_action_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(create_report__find_start_of_action_4_0_i6);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(create_report__create_clique_report_3_0,
		create_report__find_start_of_action_4_0_i9);
MR_def_label(create_report__find_start_of_action_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(create_report__find_start_of_action_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(create_report__find_start_of_action_4_0_i32);
	}
MR_def_label(create_report__find_start_of_action_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module11)
	MR_init_entry1(create_report__create_root_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_root_report_3_0);
	MR_init_label4(create_report__create_root_report_3_0,2,3,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_root_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_root_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		create_report__create_root_report_3_0_i2);
MR_def_label(create_report__create_root_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(create_report__create_clique_report_3_0,
		create_report__create_root_report_3_0_i3);
MR_def_label(create_report__create_root_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(create_report__create_root_report_3_0_i4);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(create_report__create_root_report_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(create_report__find_start_of_action_4_0,
		create_report__create_root_report_3_0_i8);
MR_def_label(create_report__create_root_report_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(create_report__create_root_report_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(create_report_module12)
	MR_init_entry1(create_report__create_program_modules_report_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_program_modules_report_2_0);
	MR_init_label3(create_report__create_program_modules_report_2_0,2,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_program_modules_report'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_program_modules_report_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_sv(1), 25);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		create_report__create_program_modules_report_2_0_i2);
MR_def_label(create_report__create_program_modules_report_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		create_report__create_program_modules_report_2_0_i5);
MR_def_label(create_report__create_program_modules_report_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__module_pair_to_row_data_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_program_modules_report_2_0_i8);
MR_def_label(create_report__create_program_modules_report_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(create_report_module13)
	MR_init_entry1(create_report__create_module_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_module_report_3_0);
	MR_init_label5(create_report__create_module_report_3_0,3,7,2,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_module_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_module_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_tfield(0, MR_sv(1), 25);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		create_report__create_module_report_3_0_i3);
MR_def_label(create_report__create_module_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_module_report_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__proc_to_active_row_data_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r4 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_module_report_3_0_i7);
MR_def_label(create_report__create_module_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(create_report__create_module_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\'.\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_module_report_3_0_i10);
MR_def_label(create_report__create_module_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no module named \140", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_module_report_3_0_i11);
MR_def_label(create_report__create_module_report_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_3_0);

MR_BEGIN_MODULE(create_report_module14)
	MR_init_entry1(create_report__create_module_getter_setter_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_module_getter_setter_report_3_0);
	MR_init_label7(create_report__create_module_getter_setter_report_3_0,3,8,10,16,2,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_module_getter_setter_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_module_getter_setter_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_tfield(0, MR_sv(1), 25);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		create_report__create_module_getter_setter_report_3_0_i3);
MR_def_label(create_report__create_module_getter_setter_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_module_getter_setter_report_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__gather_getters_setters_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_sv(6) = (MR_Word) MR_CTOR_ADDR(report, gs_field_info, 2);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		create_report__create_module_getter_setter_report_3_0_i8);
MR_def_label(create_report__create_module_getter_setter_report_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,15);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		create_report__create_module_getter_setter_report_3_0_i10);
MR_def_label(create_report__create_module_getter_setter_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__getter_setter_raw_map_to_info_map_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,20);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__map_values_3_0,
		create_report__create_module_getter_setter_report_3_0_i16);
MR_def_label(create_report__create_module_getter_setter_report_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(create_report__create_module_getter_setter_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\'.\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_module_getter_setter_report_3_0_i19);
MR_def_label(create_report__create_module_getter_setter_report_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no module named \140", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_module_getter_setter_report_3_0_i20);
MR_def_label(create_report__create_module_getter_setter_report_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_proc_callers_3_0);
MR_decl_entry(fn__apply_exclusion__pair_contour_3_0);
MR_decl_entry(fn__apply_exclusion__group_csds_by_call_site_2_0);
MR_decl_entry(fn__apply_exclusion__group_csds_by_clique_2_0);
MR_decl_entry(fn__apply_exclusion__group_csds_by_module_2_0);
MR_decl_entry(fn__apply_exclusion__group_csds_by_procedure_2_0);

MR_BEGIN_MODULE(create_report_module15)
	MR_init_entry1(create_report__create_proc_callers_report_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_proc_callers_report_7_0);
	MR_init_label10(create_report__create_proc_callers_report_7_0,3,5,6,11,12,10,17,20,14,21)
	MR_init_label10(create_report__create_proc_callers_report_7_0,22,23,24,8,28,7,34,39,33,44)
	MR_init_label9(create_report__create_proc_callers_report_7_0,49,43,54,59,53,63,68,2,73)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_callers_report'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_proc_callers_report_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		create_report__create_proc_callers_report_7_0_i3);
MR_def_label(create_report__create_proc_callers_report_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		create_report__create_proc_callers_report_7_0_i5);
MR_def_label(create_report__create_proc_callers_report_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_callers_3_0,
		create_report__create_proc_callers_report_7_0_i6);
MR_def_label(create_report__create_proc_callers_report_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 26);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i10);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("\'.", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_proc_callers_report_7_0_i11);
MR_def_label(create_report__create_proc_callers_report_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Could not read contour exclusion file \140", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_proc_callers_report_7_0_i12);
MR_def_label(create_report__create_proc_callers_report_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i7);
MR_def_label(create_report__create_proc_callers_report_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__apply_exclusion__pair_contour_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(2, MR_tempr3, 0);
	MR_sv(8) = MR_tfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,21);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_proc_callers_report_7_0_i17);
MR_def_label(create_report__create_proc_callers_report_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i20);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i7);
	}
MR_def_label(create_report__create_proc_callers_report_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i7);
MR_def_label(create_report__create_proc_callers_report_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(0, MR_r4, 0);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_proc_callers_report_7_0_i21);
MR_def_label(create_report__create_proc_callers_report_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' has an error: ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_proc_callers_report_7_0_i22);
MR_def_label(create_report__create_proc_callers_report_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_proc_callers_report_7_0_i23);
MR_def_label(create_report__create_proc_callers_report_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("The contour exclusion file \140", 28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_proc_callers_report_7_0_i24);
MR_def_label(create_report__create_proc_callers_report_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i7);
	}
MR_def_label(create_report__create_proc_callers_report_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,21);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_proc_callers_report_7_0_i28);
MR_def_label(create_report__create_proc_callers_report_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(create_report__create_proc_callers_report_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i73);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i33);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__apply_exclusion__group_csds_by_call_site_2_0,
		create_report__create_proc_callers_report_7_0_i34);
MR_def_label(create_report__create_proc_callers_report_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__create_proc_caller_call_sites_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,23);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,18);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_proc_callers_report_7_0_i39);
MR_def_label(create_report__create_proc_callers_report_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(create_report__create_proc_callers_report_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),3)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i43);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__apply_exclusion__group_csds_by_clique_2_0,
		create_report__create_proc_callers_report_7_0_i44);
MR_def_label(create_report__create_proc_callers_report_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__create_proc_caller_cliques_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,25);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_proc_callers_report_7_0_i49);
MR_def_label(create_report__create_proc_callers_report_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(create_report__create_proc_callers_report_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(create_report__create_proc_callers_report_7_0_i53);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__apply_exclusion__group_csds_by_module_2_0,
		create_report__create_proc_callers_report_7_0_i54);
MR_def_label(create_report__create_proc_callers_report_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__create_proc_caller_modules_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,27);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_proc_callers_report_7_0_i59);
MR_def_label(create_report__create_proc_callers_report_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(create_report__create_proc_callers_report_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__apply_exclusion__group_csds_by_procedure_2_0,
		create_report__create_proc_callers_report_7_0_i63);
MR_def_label(create_report__create_proc_callers_report_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__create_proc_caller_procedures_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,29);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		create_report__create_proc_callers_report_7_0_i68);
MR_def_label(create_report__create_proc_callers_report_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(create_report__create_proc_callers_report_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
MR_def_label(create_report__create_proc_callers_report_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__max_2_0);

MR_BEGIN_MODULE(create_report_module16)
	MR_init_entry1(create_report__create_proc_static_dump_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_proc_static_dump_report_3_0);
	MR_init_label5(create_report__create_proc_static_dump_report_3_0,3,5,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_static_dump_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_proc_static_dump_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		create_report__create_proc_static_dump_report_3_0_i3);
MR_def_label(create_report__create_proc_static_dump_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_proc_static_dump_report_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		create_report__create_proc_static_dump_report_3_0_i5);
MR_def_label(create_report__create_proc_static_dump_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_sv(5) = MR_tfield(0, MR_r1, 5);
	MR_sv(6) = MR_tfield(0, MR_r1, 6);
	MR_sv(7) = MR_tfield(0, MR_r1, 9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_tfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(array__max_2_0,
		create_report__create_proc_static_dump_report_3_0_i6);
MR_def_label(create_report__create_proc_static_dump_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		create_report__create_proc_static_dump_report_3_0_i7);
MR_def_label(create_report__create_proc_static_dump_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = MR_sv(7);
	MR_tfield(0, MR_r2, 7) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(create_report__create_proc_static_dump_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_proc_dynamic_ptr_2_0);

MR_BEGIN_MODULE(create_report_module17)
	MR_init_entry1(create_report__create_proc_dynamic_dump_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_proc_dynamic_dump_report_3_0);
	MR_init_label5(create_report__create_proc_dynamic_dump_report_3_0,3,5,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_dynamic_dump_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_proc_dynamic_dump_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_2_0,
		create_report__create_proc_dynamic_dump_report_3_0_i3);
MR_def_label(create_report__create_proc_dynamic_dump_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_proc_dynamic_dump_report_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		create_report__create_proc_dynamic_dump_report_3_0_i5);
MR_def_label(create_report__create_proc_dynamic_dump_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		create_report__create_proc_dynamic_dump_report_3_0_i6);
MR_def_label(create_report__create_proc_dynamic_dump_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 4);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		create_report__create_proc_dynamic_dump_report_3_0_i7);
MR_def_label(create_report__create_proc_dynamic_dump_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(create_report__create_proc_dynamic_dump_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module18)
	MR_init_entry1(create_report__create_call_site_static_dump_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_call_site_static_dump_report_3_0);
	MR_init_label3(create_report__create_call_site_static_dump_report_3_0,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_call_site_static_dump_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_call_site_static_dump_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_call_site_static_ptr_2_0,
		create_report__create_call_site_static_dump_report_3_0_i3);
MR_def_label(create_report__create_call_site_static_dump_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_call_site_static_dump_report_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		create_report__create_call_site_static_dump_report_3_0_i5);
MR_def_label(create_report__create_call_site_static_dump_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_r1, 2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(create_report__create_call_site_static_dump_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__zero_inherit_prof_info_0_0);

MR_BEGIN_MODULE(create_report_module19)
	MR_init_entry1(create_report__create_call_site_dynamic_dump_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_call_site_dynamic_dump_report_3_0);
	MR_init_label7(create_report__create_call_site_dynamic_dump_report_3_0,3,5,6,7,8,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_call_site_dynamic_dump_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_call_site_dynamic_dump_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		create_report__create_call_site_dynamic_dump_report_3_0_i3);
MR_def_label(create_report__create_call_site_dynamic_dump_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_call_site_dynamic_dump_report_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		create_report__create_call_site_dynamic_dump_report_3_0_i5);
MR_def_label(create_report__create_call_site_dynamic_dump_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		create_report__create_call_site_dynamic_dump_report_3_0_i6);
MR_def_label(create_report__create_call_site_dynamic_dump_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		create_report__create_call_site_dynamic_dump_report_3_0_i7);
MR_def_label(create_report__create_call_site_dynamic_dump_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__describe_call_site_2_0,
		create_report__create_call_site_dynamic_dump_report_3_0_i8);
MR_def_label(create_report__create_call_site_dynamic_dump_report_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_call_site_dynamic_dump_report_3_0_i10);
MR_def_label(create_report__create_call_site_dynamic_dump_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(create_report__create_call_site_dynamic_dump_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module20)
	MR_init_entry1(fn__create_report__describe_clique_member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__describe_clique_member_2_0);
	MR_init_label1(fn__create_report__describe_clique_member_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_clique_member'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__describe_clique_member_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		fn__create_report__describe_clique_member_2_0_i2);
MR_def_label(fn__create_report__describe_clique_member_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__create_report__describe_proc_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(create_report_module21)
	MR_init_entry1(create_report__error_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__error_2_0);
	MR_init_label4(create_report__error_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__error_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__error_2_0_i2);
MR_def_label(create_report__error_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__error_2_0_i3);
MR_def_label(create_report__error_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__error_2_0_i4);
MR_def_label(create_report__error_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("create_report.m", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__error_2_0_i5);
MR_def_label(create_report__error_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_clique_ptr_2_0);
MR_decl_entry(list__delete_first_3_0);

MR_BEGIN_MODULE(create_report_module22)
	MR_init_entry1(fn__create_report__describe_clique_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__describe_clique_3_0);
	MR_init_label10(fn__create_report__describe_clique_3_0,3,5,6,7,9,8,11,13,14,16)
	MR_init_label2(fn__create_report__describe_clique_3_0,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_clique'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__describe_clique_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(profile__valid_clique_ptr_2_0,
		fn__create_report__describe_clique_3_0_i3);
MR_def_label(fn__create_report__describe_clique_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__create_report__describe_clique_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		fn__create_report__describe_clique_3_0_i5);
MR_def_label(fn__create_report__describe_clique_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		fn__create_report__describe_clique_3_0_i6);
MR_def_label(fn__create_report__describe_clique_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__create_report__describe_clique_3_0_i7);
MR_def_label(fn__create_report__describe_clique_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__create_report__describe_clique_3_0_i9);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_GOTO_LAB(fn__create_report__describe_clique_3_0_i8);
MR_def_label(fn__create_report__describe_clique_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_sv(3), 0);
MR_def_label(fn__create_report__describe_clique_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(list__delete_first_3_0,
		fn__create_report__describe_clique_3_0_i11);
MR_def_label(fn__create_report__describe_clique_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__create_report__describe_clique_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		fn__create_report__describe_clique_3_0_i13);
MR_def_label(fn__create_report__describe_clique_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		fn__create_report__describe_clique_3_0_i14);
MR_def_label(fn__create_report__describe_clique_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__describe_clique_member_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__create_report__describe_clique_3_0_i16);
MR_def_label(fn__create_report__describe_clique_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__create_report__describe_clique_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("create_report.m: describe_clique: entry pdptr not a member", 58);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__create_report__describe_clique_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("create_report.m: describe_clique: invalid clique_ptr", 52);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module23)
	MR_init_entry1(create_report__create_clique_dump_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_clique_dump_report_3_0);
	MR_init_label5(create_report__create_clique_dump_report_3_0,3,5,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_clique_dump_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_clique_dump_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_clique_ptr_2_0,
		create_report__create_clique_dump_report_3_0_i3);
MR_def_label(create_report__create_clique_dump_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_clique_dump_report_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__create_report__describe_clique_3_0,
		create_report__create_clique_dump_report_3_0_i5);
MR_def_label(create_report__create_clique_dump_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		create_report__create_clique_dump_report_3_0_i6);
MR_def_label(create_report__create_clique_dump_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		create_report__create_clique_dump_report_3_0_i7);
MR_def_label(create_report__create_clique_dump_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(create_report__create_clique_dump_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,6);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__max_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(create_report_module24)
	MR_init_entry1(create_report__create_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_report_3_0);
	MR_init_label10(create_report__create_report_3_0,4,3,7,6,10,9,13,12,16,15)
	MR_init_label10(create_report__create_report_3_0,19,18,22,21,26,24,31,30,34,33)
	MR_init_label10(create_report__create_report_3_0,37,36,40,39,43,42,46,45,49,50)
	MR_init_label9(create_report__create_report_3_0,48,53,52,56,57,58,55,61,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__create_report__create_report_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_clique_report_3_0,
		create_report__create_report_3_0_i4);
MR_def_label(create_report__create_report_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(create_report__create_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i6);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_call_site_dynamic_dump_report_3_0,
		create_report__create_report_3_0_i7);
MR_def_label(create_report__create_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i9);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_call_site_static_dump_report_3_0,
		create_report__create_report_3_0_i10);
MR_def_label(create_report__create_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i12);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_clique_dump_report_3_0,
		create_report__create_report_3_0_i13);
MR_def_label(create_report__create_report_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i15);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_proc_dynamic_dump_report_3_0,
		create_report__create_report_3_0_i16);
MR_def_label(create_report__create_report_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i18);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_proc_static_dump_report_3_0,
		create_report__create_report_3_0_i19);
MR_def_label(create_report__create_report_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i21);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_proc_var_use_dump_report_3_0,
		create_report__create_report_3_0_i22);
MR_def_label(create_report__create_report_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i24);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tfield(0, MR_r2, 10);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		create_report__create_report_3_0_i26);
MR_def_label(create_report__create_report_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i30);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_module_report_3_0,
		create_report__create_report_3_0_i31);
MR_def_label(create_report__create_report_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i33);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_module_getter_setter_report_3_0,
		create_report__create_report_3_0_i34);
MR_def_label(create_report__create_report_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i36);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_proc_report_3_0,
		create_report__create_report_3_0_i37);
MR_def_label(create_report__create_report_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i39);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_r6 = MR_tfield(3, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(create_report__create_proc_callers_report_7_0,
		create_report__create_report_3_0_i40);
MR_def_label(create_report__create_report_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i42);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(create_report__create_procrep_coverage_report_3_0,
		create_report__create_report_3_0_i43);
MR_def_label(create_report__create_report_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i45);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(create_report__create_program_modules_report_2_0,
		create_report__create_report_3_0_i46);
MR_def_label(create_report__create_report_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i48);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_report_3_0_i49);
MR_def_label(create_report__create_report_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Shutting down deep profile server for ", 38);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_report_3_0_i50);
MR_def_label(create_report__create_report_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(create_report__create_report_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i52);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(create_report__create_root_report_3_0,
		create_report__create_report_3_0_i53);
MR_def_label(create_report__create_report_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i55);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		create_report__create_report_3_0_i56);
MR_def_label(create_report__create_report_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" minutes.", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_report_3_0_i57);
MR_def_label(create_report__create_report_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Timeout set to ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_report_3_0_i58);
MR_def_label(create_report__create_report_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(create_report__create_report_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i60);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(create_report__create_top_procs_report_6_0,
		create_report__create_report_3_0_i61);
MR_def_label(create_report__create_report_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(create_report__create_report_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("create_report/3", 15);
	MR_r2 = (MR_Word) MR_string_const("unexpected restart command", 26);
	MR_np_tailcall_ent(create_report__error_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_call_site_report_0;

MR_BEGIN_MODULE(create_report_module25)
	MR_init_entry1(create_report__find_start_of_action_clique_proc_dynamic_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__find_start_of_action_clique_proc_dynamic_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_start_of_action_clique_proc_dynamic'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__find_start_of_action_clique_proc_dynamic_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__find_start_of_action_call_site_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0;

MR_BEGIN_MODULE(create_report_module26)
	MR_init_entry1(create_report__find_start_of_action_clique_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__find_start_of_action_clique_proc_4_0);
	MR_init_label1(create_report__find_start_of_action_clique_proc_4_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_start_of_action_clique_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__find_start_of_action_clique_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__find_start_of_action_call_site_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_tempr2, 1), 1);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		create_report__find_start_of_action_clique_proc_4_0_i4);
MR_def_label(create_report__find_start_of_action_clique_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__find_start_of_action_clique_proc_dynamic_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_dynamic_report);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module27)
	MR_init_entry1(create_report__find_start_of_action_call_site_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__find_start_of_action_call_site_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_start_of_action_call_site'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__find_start_of_action_call_site_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__find_start_of_action_callee_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 2);
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(measurement_units__percent_at_or_above_threshold_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(create_report_module28)
	MR_init_entry1(create_report__find_start_of_action_callee_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__find_start_of_action_callee_4_0);
	MR_init_label3(create_report__find_start_of_action_callee_4_0,6,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_start_of_action_callee'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__find_start_of_action_callee_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 8);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(create_report__find_start_of_action_callee_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 5);
	}
	MR_np_call_localret_ent(measurement_units__percent_at_or_above_threshold_2_0,
		create_report__find_start_of_action_callee_4_0_i6);
MR_def_label(create_report__find_start_of_action_callee_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__find_start_of_action_callee_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_tfield(0, MR_sv(1), 0), 0);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(create_report__find_start_of_action_callee_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(create_report__find_start_of_action_callee_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("find_start_of_action_callee: no total perf", 42);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__require_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(create_report_module29)
	MR_init_entry1(create_report__group_proc_dynamics_by_proc_static_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__group_proc_dynamics_by_proc_static_4_0);
	MR_init_label4(create_report__group_proc_dynamics_by_proc_static_4_0,3,4,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_proc_dynamics_by_proc_static'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__group_proc_dynamics_by_proc_static_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_proc_dynamic_ptr_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("group_proc_dynamics_by_proc_static: invalid PDPtr", 49);
	}
	MR_np_call_localret_ent(require__require_2_0,
		create_report__group_proc_dynamics_by_proc_static_4_0_i3);
MR_def_label(create_report__group_proc_dynamics_by_proc_static_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		create_report__group_proc_dynamics_by_proc_static_4_0_i4);
MR_def_label(create_report__group_proc_dynamics_by_proc_static_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		create_report__group_proc_dynamics_by_proc_static_4_0_i7);
MR_def_label(create_report__group_proc_dynamics_by_proc_static_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__group_proc_dynamics_by_proc_static_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(create_report__group_proc_dynamics_by_proc_static_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(create_report_module30)
	MR_init_entry1(create_report__proc_group_contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__proc_group_contains_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_group_contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__proc_group_contains_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module31)
	MR_init_entry1(create_report__create_clique_proc_dynamic_report_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_clique_proc_dynamic_report_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_clique_proc_dynamic_report'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_clique_proc_dynamic_report_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map3_5_0);
MR_decl_entry(fn__measurements__sum_own_infos_1_0);
MR_decl_entry(fn__measurements__sum_inherit_infos_1_0);

MR_BEGIN_MODULE(create_report_module32)
	MR_init_entry1(create_report__create_clique_proc_report_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_clique_proc_report_4_0);
	MR_init_label7(create_report__create_clique_proc_report_4_0,4,5,7,9,11,13,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_clique_proc_report'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_clique_proc_report_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(create_report__create_clique_proc_report_4_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		create_report__create_clique_proc_report_4_0_i4);
MR_def_label(create_report__create_clique_proc_report_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,
		create_report__create_clique_proc_report_4_0_i5);
MR_def_label(create_report__create_clique_proc_report_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__create_clique_proc_dynamic_report_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_dynamic_report);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_clique_proc_report_4_0_i7);
MR_def_label(create_report__create_clique_proc_report_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__sum_own_infos_1_0,
		create_report__create_clique_proc_report_4_0_i9);
MR_def_label(create_report__create_clique_proc_report_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__sum_inherit_infos_1_0,
		create_report__create_clique_proc_report_4_0_i11);
MR_def_label(create_report__create_clique_proc_report_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_clique_proc_report_4_0_i13);
MR_def_label(create_report__create_clique_proc_report_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(create_report__create_clique_proc_report_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("create_report.m: create_clique_proc_report: PDPtrs = []", 55);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module33)
	MR_init_entry1(create_report__create_callee_clique_perf_row_data_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_callee_clique_perf_row_data_5_0);
	MR_init_label6(create_report__create_callee_clique_perf_row_data_5_0,3,4,5,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_callee_clique_perf_row_data'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_callee_clique_perf_row_data_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_call_site_dynamic_ptr_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("create_callee_clique_perf_row_data: invalid call_site_dynamic_ptr", 65);
	}
	MR_np_call_localret_ent(require__require_2_0,
		create_report__create_callee_clique_perf_row_data_5_0_i3);
MR_def_label(create_report__create_callee_clique_perf_row_data_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		create_report__create_callee_clique_perf_row_data_5_0_i4);
MR_def_label(create_report__create_callee_clique_perf_row_data_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		create_report__create_callee_clique_perf_row_data_5_0_i5);
MR_def_label(create_report__create_callee_clique_perf_row_data_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		create_report__create_callee_clique_perf_row_data_5_0_i6);
MR_def_label(create_report__create_callee_clique_perf_row_data_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__describe_clique_3_0,
		create_report__create_callee_clique_perf_row_data_5_0_i8);
MR_def_label(create_report__create_callee_clique_perf_row_data_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_callee_clique_perf_row_data_5_0_i10);
MR_def_label(create_report__create_callee_clique_perf_row_data_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__zero_own_prof_info_0_0);

MR_BEGIN_MODULE(create_report_module34)
	MR_init_entry1(create_report__create_child_call_site_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__create_child_call_site_report_3_0);
	MR_init_label10(create_report__create_child_call_site_report_3_0,2,3,8,7,6,12,13,14,5,18)
	MR_init_label10(create_report__create_child_call_site_report_3_0,17,16,22,23,24,15,28,27,26,32)
	MR_init_label10(create_report__create_child_call_site_report_3_0,33,34,25,38,37,36,42,43,44,35)
	MR_init_label9(create_report__create_child_call_site_report_3_0,45,48,47,52,54,50,56,57,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_child_call_site_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_child_call_site_report_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		create_report__create_child_call_site_report_3_0_i2);
MR_def_label(create_report__create_child_call_site_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__describe_call_site_2_0,
		create_report__create_child_call_site_report_3_0_i3);
MR_def_label(create_report__create_child_call_site_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(2), 2);
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i7);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tfield(1, MR_sv(3), 1);
	MR_np_call_localret_ent(array__to_list_2_0,
		create_report__create_child_call_site_report_3_0_i8);
MR_def_label(create_report__create_child_call_site_report_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__create_callee_clique_perf_row_data_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	}
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_child_call_site_report_3_0_i12);
MR_def_label(create_report__create_child_call_site_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("create_child_call_site_report: non-normal_call error", 52);
	MR_np_call_localret_ent(require__error_1_0,
		create_report__create_child_call_site_report_3_0_i6);
MR_def_label(create_report__create_child_call_site_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_child_call_site_report_3_0_i12);
MR_def_label(create_report__create_child_call_site_report_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__measurements__sum_own_infos_1_0,
		create_report__create_child_call_site_report_3_0_i13);
MR_def_label(create_report__create_child_call_site_report_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__sum_inherit_infos_1_0,
		create_report__create_child_call_site_report_3_0_i14);
MR_def_label(create_report__create_child_call_site_report_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_child_call_site_report_3_0_i59);
MR_def_label(create_report__create_child_call_site_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i17);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tfield(1, MR_sv(3), 1);
	MR_np_call_localret_ent(array__to_list_2_0,
		create_report__create_child_call_site_report_3_0_i18);
MR_def_label(create_report__create_child_call_site_report_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__create_callee_clique_perf_row_data_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	}
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_child_call_site_report_3_0_i22);
MR_def_label(create_report__create_child_call_site_report_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("create_child_call_site_report: non-normal_call error", 52);
	MR_np_call_localret_ent(require__error_1_0,
		create_report__create_child_call_site_report_3_0_i16);
MR_def_label(create_report__create_child_call_site_report_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_child_call_site_report_3_0_i22);
MR_def_label(create_report__create_child_call_site_report_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__measurements__sum_own_infos_1_0,
		create_report__create_child_call_site_report_3_0_i23);
MR_def_label(create_report__create_child_call_site_report_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__sum_inherit_infos_1_0,
		create_report__create_child_call_site_report_3_0_i24);
MR_def_label(create_report__create_child_call_site_report_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_child_call_site_report_3_0_i59);
MR_def_label(create_report__create_child_call_site_report_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i25);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tfield(1, MR_sv(3), 1);
	MR_np_call_localret_ent(array__to_list_2_0,
		create_report__create_child_call_site_report_3_0_i28);
MR_def_label(create_report__create_child_call_site_report_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__create_callee_clique_perf_row_data_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	}
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_child_call_site_report_3_0_i32);
MR_def_label(create_report__create_child_call_site_report_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("create_child_call_site_report: non-normal_call error", 52);
	MR_np_call_localret_ent(require__error_1_0,
		create_report__create_child_call_site_report_3_0_i26);
MR_def_label(create_report__create_child_call_site_report_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_child_call_site_report_3_0_i32);
MR_def_label(create_report__create_child_call_site_report_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__measurements__sum_own_infos_1_0,
		create_report__create_child_call_site_report_3_0_i33);
MR_def_label(create_report__create_child_call_site_report_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__sum_inherit_infos_1_0,
		create_report__create_child_call_site_report_3_0_i34);
MR_def_label(create_report__create_child_call_site_report_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_child_call_site_report_3_0_i59);
MR_def_label(create_report__create_child_call_site_report_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i35);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tfield(1, MR_sv(3), 1);
	MR_np_call_localret_ent(array__to_list_2_0,
		create_report__create_child_call_site_report_3_0_i38);
MR_def_label(create_report__create_child_call_site_report_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__create_callee_clique_perf_row_data_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	}
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_child_call_site_report_3_0_i42);
MR_def_label(create_report__create_child_call_site_report_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("create_child_call_site_report: non-normal_call error", 52);
	MR_np_call_localret_ent(require__error_1_0,
		create_report__create_child_call_site_report_3_0_i36);
MR_def_label(create_report__create_child_call_site_report_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map3_5_0,
		create_report__create_child_call_site_report_3_0_i42);
MR_def_label(create_report__create_child_call_site_report_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__measurements__sum_own_infos_1_0,
		create_report__create_child_call_site_report_3_0_i43);
MR_def_label(create_report__create_child_call_site_report_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__sum_inherit_infos_1_0,
		create_report__create_child_call_site_report_3_0_i44);
MR_def_label(create_report__create_child_call_site_report_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_child_call_site_report_3_0_i59);
MR_def_label(create_report__create_child_call_site_report_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		create_report__create_child_call_site_report_3_0_i45);
MR_def_label(create_report__create_child_call_site_report_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i47);
MR_def_label(create_report__create_child_call_site_report_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("create_child_call_site_report: normal_call error", 48);
	MR_np_call_localret_ent(require__error_1_0,
		create_report__create_child_call_site_report_3_0_i47);
MR_def_label(create_report__create_child_call_site_report_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		create_report__create_child_call_site_report_3_0_i52);
MR_def_label(create_report__create_child_call_site_report_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__create_child_call_site_report_3_0_i50);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(create_report__create_callee_clique_perf_row_data_5_0,
		create_report__create_child_call_site_report_3_0_i54);
MR_def_label(create_report__create_child_call_site_report_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_child_call_site_report_3_0_i59);
MR_def_label(create_report__create_child_call_site_report_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		create_report__create_child_call_site_report_3_0_i56);
MR_def_label(create_report__create_child_call_site_report_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		create_report__create_child_call_site_report_3_0_i57);
MR_def_label(create_report__create_child_call_site_report_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__create_child_call_site_report_3_0_i59);
MR_def_label(create_report__create_child_call_site_report_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module35)
	MR_init_entry1(create_report__not_mercury_runtime_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__not_mercury_runtime_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'not_mercury_runtime'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__not_mercury_runtime_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r2, MR_string_const("Mercury runtime", 15)) != 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__compute_is_active_1_0);

MR_BEGIN_MODULE(create_report_module36)
	MR_init_entry1(fn__create_report__module_pair_to_row_data_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__module_pair_to_row_data_2_0);
	MR_init_label2(fn__create_report__module_pair_to_row_data_2_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_pair_to_row_data'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__module_pair_to_row_data_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tfield(0, MR_r2, 1), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__compute_is_active_1_0,
		fn__create_report__module_pair_to_row_data_2_0_i2);
MR_def_label(fn__create_report__module_pair_to_row_data_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__create_report__module_pair_to_row_data_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
MR_def_label(fn__create_report__module_pair_to_row_data_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module37)
	MR_init_entry1(fn__create_report__proc_to_active_row_data_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__proc_to_active_row_data_2_0);
	MR_init_label6(fn__create_report__proc_to_active_row_data_2_0,2,3,4,6,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_to_active_row_data'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__proc_to_active_row_data_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		fn__create_report__proc_to_active_row_data_2_0_i2);
MR_def_label(fn__create_report__proc_to_active_row_data_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		fn__create_report__proc_to_active_row_data_2_0_i3);
MR_def_label(fn__create_report__proc_to_active_row_data_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__compute_is_active_1_0,
		fn__create_report__proc_to_active_row_data_2_0_i4);
MR_def_label(fn__create_report__proc_to_active_row_data_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__create_report__proc_to_active_row_data_2_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__create_report__proc_to_active_row_data_2_0_i5);
MR_def_label(fn__create_report__proc_to_active_row_data_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 1;
MR_def_label(fn__create_report__proc_to_active_row_data_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		fn__create_report__proc_to_active_row_data_2_0_i7);
MR_def_label(fn__create_report__proc_to_active_row_data_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module38)
	MR_init_entry1(create_report__getter_setter_raw_map_to_info_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__getter_setter_raw_map_to_info_map_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'getter_setter_raw_map_to_info_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__getter_setter_raw_map_to_info_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module39)
	MR_init_entry1(create_report__getter_setter_raw_data_to_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__getter_setter_raw_data_to_info_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'getter_setter_raw_data_to_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__getter_setter_raw_data_to_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module40)
	MR_init_entry1(create_report__is_getter_or_setter_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__is_getter_or_setter_2_4_0);
	MR_init_label4(create_report__is_getter_or_setter_2_4_0,2,169,25,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_getter_or_setter_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__is_getter_or_setter_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,95)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,103)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,101)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,116)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,95)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i2);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(create_report__is_getter_or_setter_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,95)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,115)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,101)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,116)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,95)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i169);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(create_report__is_getter_or_setter_2_4_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(create_report__is_getter_or_setter_2_4_0,
		create_report__is_getter_or_setter_2_4_0_i25);
MR_def_label(create_report__is_getter_or_setter_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(create_report__is_getter_or_setter_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(create_report_module41)
	MR_init_entry1(create_report__is_getter_or_setter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__is_getter_or_setter_4_0);
	MR_init_label6(create_report__is_getter_or_setter_4_0,3,4,7,10,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_getter_or_setter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__is_getter_or_setter_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_4_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if ((strcmp((char *) (MR_Word *) MR_r2, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_4_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_r1, 3);
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		create_report__is_getter_or_setter_4_0_i3);
MR_def_label(create_report__is_getter_or_setter_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(create_report__is_getter_or_setter_2_4_0,
		create_report__is_getter_or_setter_4_0_i4);
MR_def_label(create_report__is_getter_or_setter_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_4_0_i1);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_4_0_i7);
	}
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		create_report__is_getter_or_setter_4_0_i10);
MR_def_label(create_report__is_getter_or_setter_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(create_report__is_getter_or_setter_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		create_report__is_getter_or_setter_4_0_i10);
MR_def_label(create_report__is_getter_or_setter_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		create_report__is_getter_or_setter_4_0_i11);
MR_def_label(create_report__is_getter_or_setter_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(create_report__is_getter_or_setter_4_0,1)
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

MR_decl_entry(map__init_1_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(create_report_module42)
	MR_init_entry1(create_report__gather_getters_setters_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__gather_getters_setters_4_0);
	MR_init_label10(create_report__gather_getters_setters_4_0,4,6,9,11,12,13,18,15,21,22)
	MR_init_label10(create_report__gather_getters_setters_4_0,25,30,28,34,27,37,23,40,45,8)
	MR_init_label1(create_report__gather_getters_setters_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gather_getters_setters'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__gather_getters_setters_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		create_report__gather_getters_setters_4_0_i4);
MR_def_label(create_report__gather_getters_setters_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		create_report__gather_getters_setters_4_0_i6);
MR_def_label(create_report__gather_getters_setters_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(create_report__is_getter_or_setter_4_0,
		create_report__gather_getters_setters_4_0_i9);
MR_def_label(create_report__gather_getters_setters_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i8);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		create_report__gather_getters_setters_4_0_i11);
MR_def_label(create_report__gather_getters_setters_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		create_report__gather_getters_setters_4_0_i12);
MR_def_label(create_report__gather_getters_setters_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		create_report__gather_getters_setters_4_0_i13);
MR_def_label(create_report__gather_getters_setters_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		create_report__gather_getters_setters_4_0_i18);
MR_def_label(create_report__gather_getters_setters_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i15);
	}
	MR_r4 = MR_sv(5);
	MR_r3 = MR_r2;
	MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i22);
MR_def_label(create_report__gather_getters_setters_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_np_call_localret_ent(map__init_1_0,
		create_report__gather_getters_setters_4_0_i21);
MR_def_label(create_report__gather_getters_setters_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_r3 = MR_r1;
MR_def_label(create_report__gather_getters_setters_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		create_report__gather_getters_setters_4_0_i25);
MR_def_label(create_report__gather_getters_setters_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i23);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i28);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_r2, 0);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i27);
	}
MR_def_label(create_report__gather_getters_setters_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("gather_getters_setters: redundant getter", 40);
	MR_np_call_localret_ent(require__error_1_0,
		create_report__gather_getters_setters_4_0_i27);
MR_def_label(create_report__gather_getters_setters_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i27);
	}
MR_def_label(create_report__gather_getters_setters_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("gather_getters_setters: redundant setter", 40);
	MR_np_call_localret_ent(require__error_1_0,
		create_report__gather_getters_setters_4_0_i27);
MR_def_label(create_report__gather_getters_setters_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(map__det_update_4_0,
		create_report__gather_getters_setters_4_0_i37);
MR_def_label(create_report__gather_getters_setters_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svmap__set_4_0);
MR_def_label(create_report__gather_getters_setters_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(create_report__gather_getters_setters_4_0_i40);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_np_call_localret_ent(map__det_insert_4_0,
		create_report__gather_getters_setters_4_0_i45);
MR_def_label(create_report__gather_getters_setters_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r5, 0) = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_np_call_localret_ent(map__det_insert_4_0,
		create_report__gather_getters_setters_4_0_i45);
MR_def_label(create_report__gather_getters_setters_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svmap__set_4_0);
MR_def_label(create_report__gather_getters_setters_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(create_report__gather_getters_setters_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(create_report_module43)
	MR_init_entry1(fn__create_report__generate_call_site_callee_perf_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__generate_call_site_callee_perf_3_0);
	MR_init_label3(fn__create_report__generate_call_site_callee_perf_3_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_call_site_callee_perf'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__generate_call_site_callee_perf_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__accumulate_csd_prof_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__create_report__generate_call_site_callee_perf_3_0_i3);
MR_def_label(fn__create_report__generate_call_site_callee_perf_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__create_report__generate_call_site_callee_perf_3_0_i4);
MR_def_label(fn__create_report__generate_call_site_callee_perf_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__create_report__generate_call_site_callee_perf_3_0_i5);
MR_def_label(fn__create_report__generate_call_site_callee_perf_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_calls_3_0);
MR_decl_entry(list__map_foldl2_7_0);

MR_BEGIN_MODULE(create_report_module44)
	MR_init_entry1(fn__create_report__create_call_site_summary_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__create_call_site_summary_2_0);
	MR_init_label10(fn__create_report__create_call_site_summary_2_0,2,3,4,6,11,13,14,16,17,8)
	MR_init_label10(fn__create_report__create_call_site_summary_2_0,22,24,25,27,28,19,33,35,36,38)
	MR_init_label10(fn__create_report__create_call_site_summary_2_0,39,30,44,46,47,49,50,41,52,57)
	MR_init_label7(fn__create_report__create_call_site_summary_2_0,58,56,62,63,60,55,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_call_site_summary'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__create_call_site_summary_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__create_report__describe_call_site_2_0,
		fn__create_report__create_call_site_summary_2_0_i2);
MR_def_label(fn__create_report__create_call_site_summary_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__create_report__create_call_site_summary_2_0_i3);
MR_def_label(fn__create_report__create_call_site_summary_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_calls_3_0,
		fn__create_report__create_call_site_summary_2_0_i4);
MR_def_label(fn__create_report__create_call_site_summary_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,17);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__create_report__create_call_site_summary_2_0_i6);
MR_def_label(fn__create_report__create_call_site_summary_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(fn__create_report__create_call_site_summary_2_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__generate_call_site_callee_perf_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,29);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(create_report, call_site_callee_perf);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__create_report__create_call_site_summary_2_0_i11);
MR_def_label(fn__create_report__create_call_site_summary_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__accumulate_call_site_callees_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i13);
MR_def_label(fn__create_report__create_call_site_summary_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i14);
MR_def_label(fn__create_report__create_call_site_summary_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(create_report, call_site_callee_perf);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		fn__create_report__create_call_site_summary_2_0_i16);
MR_def_label(fn__create_report__create_call_site_summary_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		fn__create_report__create_call_site_summary_2_0_i17);
MR_def_label(fn__create_report__create_call_site_summary_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(fn__create_report__create_call_site_summary_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(fn__create_report__create_call_site_summary_2_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,17);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__generate_call_site_callee_perf_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,29);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(create_report, call_site_callee_perf);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__create_report__create_call_site_summary_2_0_i22);
MR_def_label(fn__create_report__create_call_site_summary_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__accumulate_call_site_callees_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i24);
MR_def_label(fn__create_report__create_call_site_summary_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i25);
MR_def_label(fn__create_report__create_call_site_summary_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(create_report, call_site_callee_perf);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		fn__create_report__create_call_site_summary_2_0_i27);
MR_def_label(fn__create_report__create_call_site_summary_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		fn__create_report__create_call_site_summary_2_0_i28);
MR_def_label(fn__create_report__create_call_site_summary_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__create_report__create_call_site_summary_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(fn__create_report__create_call_site_summary_2_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,18);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__generate_call_site_callee_perf_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,29);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(create_report, call_site_callee_perf);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__create_report__create_call_site_summary_2_0_i33);
MR_def_label(fn__create_report__create_call_site_summary_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__accumulate_call_site_callees_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i35);
MR_def_label(fn__create_report__create_call_site_summary_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i36);
MR_def_label(fn__create_report__create_call_site_summary_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(create_report, call_site_callee_perf);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		fn__create_report__create_call_site_summary_2_0_i38);
MR_def_label(fn__create_report__create_call_site_summary_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		fn__create_report__create_call_site_summary_2_0_i39);
MR_def_label(fn__create_report__create_call_site_summary_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__create_report__create_call_site_summary_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__create_report__create_call_site_summary_2_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,19);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__create_report__generate_call_site_callee_perf_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,29);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(create_report, call_site_callee_perf);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__create_report__create_call_site_summary_2_0_i44);
MR_def_label(fn__create_report__create_call_site_summary_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__accumulate_call_site_callees_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i46);
MR_def_label(fn__create_report__create_call_site_summary_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i47);
MR_def_label(fn__create_report__create_call_site_summary_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(create_report, call_site_callee_perf);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		fn__create_report__create_call_site_summary_2_0_i49);
MR_def_label(fn__create_report__create_call_site_summary_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		fn__create_report__create_call_site_summary_2_0_i50);
MR_def_label(fn__create_report__create_call_site_summary_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__create_report__create_call_site_summary_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		fn__create_report__create_call_site_summary_2_0_i52);
MR_def_label(fn__create_report__create_call_site_summary_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__create_report__create_call_site_summary_2_0_i56);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i57);
MR_def_label(fn__create_report__create_call_site_summary_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__create_report__create_call_site_summary_2_0_i58);
MR_def_label(fn__create_report__create_call_site_summary_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		fn__create_report__create_call_site_summary_2_0_i65);
MR_def_label(fn__create_report__create_call_site_summary_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__create_report__create_call_site_summary_2_0_i60);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__IntroducedFrom__pred__create_call_site_summary__844__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("create_call_site_summary: callee mismatch", 41);
	}
	MR_np_call_localret_ent(require__require_2_0,
		fn__create_report__create_call_site_summary_2_0_i62);
MR_def_label(fn__create_report__create_call_site_summary_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__create_report__generate_call_site_callee_perf_3_0,
		fn__create_report__create_call_site_summary_2_0_i63);
MR_def_label(fn__create_report__create_call_site_summary_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		fn__create_report__create_call_site_summary_2_0_i65);
MR_def_label(fn__create_report__create_call_site_summary_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("create_call_site_summary: >1 proc called at site", 48);
	MR_np_call_localret_ent(require__error_1_0,
		fn__create_report__create_call_site_summary_2_0_i55);
MR_def_label(fn__create_report__create_call_site_summary_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		fn__create_report__create_call_site_summary_2_0_i65);
MR_def_label(fn__create_report__create_call_site_summary_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_csd_own_3_0);
MR_decl_entry(fn__measurements__add_own_to_own_2_0);
MR_decl_entry(fn__measurements__add_inherit_to_inherit_2_0);
MR_decl_entry(profile__deep_lookup_csd_comp_table_3_0);
MR_decl_entry(fn__measurements__subtract_inherit_from_inherit_2_0);

MR_BEGIN_MODULE(create_report_module45)
	MR_init_entry1(create_report__accumulate_csd_prof_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__accumulate_csd_prof_info_7_0);
	MR_init_label8(create_report__accumulate_csd_prof_info_7_0,2,3,4,5,6,8,10,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_csd_prof_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__accumulate_csd_prof_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_own_3_0,
		create_report__accumulate_csd_prof_info_7_0_i2);
MR_def_label(create_report__accumulate_csd_prof_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		create_report__accumulate_csd_prof_info_7_0_i3);
MR_def_label(create_report__accumulate_csd_prof_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		create_report__accumulate_csd_prof_info_7_0_i4);
MR_def_label(create_report__accumulate_csd_prof_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		create_report__accumulate_csd_prof_info_7_0_i5);
MR_def_label(create_report__accumulate_csd_prof_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_comp_table_3_0,
		create_report__accumulate_csd_prof_info_7_0_i6);
MR_def_label(create_report__accumulate_csd_prof_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		create_report__accumulate_csd_prof_info_7_0_i8);
MR_def_label(create_report__accumulate_csd_prof_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__accumulate_csd_prof_info_7_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__subtract_inherit_from_inherit_2_0,
		create_report__accumulate_csd_prof_info_7_0_i10);
MR_def_label(create_report__accumulate_csd_prof_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(create_report__accumulate_csd_prof_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module46)
	MR_init_entry1(create_report__accumulate_call_site_callees_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__accumulate_call_site_callees_7_0);
	MR_init_label4(create_report__accumulate_call_site_callees_7_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_call_site_callees'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__accumulate_call_site_callees_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		create_report__accumulate_call_site_callees_7_0_i2);
MR_def_label(create_report__accumulate_call_site_callees_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		create_report__accumulate_call_site_callees_7_0_i4);
MR_def_label(create_report__accumulate_call_site_callees_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		create_report__accumulate_call_site_callees_7_0_i5);
MR_def_label(create_report__accumulate_call_site_callees_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		create_report__accumulate_call_site_callees_7_0_i6);
MR_def_label(create_report__accumulate_call_site_callees_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(apply_exclusion__compute_parent_csd_prof_info_5_0);

MR_BEGIN_MODULE(create_report_module47)
	MR_init_entry1(fn__create_report__create_proc_caller_call_sites_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__create_proc_caller_call_sites_3_0);
	MR_init_label2(fn__create_report__create_proc_caller_call_sites_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_caller_call_sites'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__create_proc_caller_call_sites_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__create_report__describe_call_site_2_0,
		fn__create_report__create_proc_caller_call_sites_3_0_i2);
MR_def_label(fn__create_report__create_proc_caller_call_sites_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(apply_exclusion__compute_parent_csd_prof_info_5_0,
		fn__create_report__create_proc_caller_call_sites_3_0_i3);
MR_def_label(fn__create_report__create_proc_caller_call_sites_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module48)
	MR_init_entry1(fn__create_report__create_proc_caller_procedures_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__create_proc_caller_procedures_3_0);
	MR_init_label2(fn__create_report__create_proc_caller_procedures_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_caller_procedures'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__create_proc_caller_procedures_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		fn__create_report__create_proc_caller_procedures_3_0_i2);
MR_def_label(fn__create_report__create_proc_caller_procedures_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(apply_exclusion__compute_parent_csd_prof_info_5_0,
		fn__create_report__create_proc_caller_procedures_3_0_i3);
MR_def_label(fn__create_report__create_proc_caller_procedures_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module49)
	MR_init_entry1(fn__create_report__create_proc_caller_modules_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__create_proc_caller_modules_3_0);
	MR_init_label1(fn__create_report__create_proc_caller_modules_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_caller_modules'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__create_proc_caller_modules_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_np_call_localret_ent(apply_exclusion__compute_parent_csd_prof_info_5_0,
		fn__create_report__create_proc_caller_modules_3_0_i2);
MR_def_label(fn__create_report__create_proc_caller_modules_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module50)
	MR_init_entry1(fn__create_report__create_proc_caller_cliques_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__create_proc_caller_cliques_3_0);
	MR_init_label2(fn__create_report__create_proc_caller_cliques_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proc_caller_cliques'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__create_proc_caller_cliques_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__create_report__describe_clique_3_0,
		fn__create_report__create_proc_caller_cliques_3_0_i2);
MR_def_label(fn__create_report__create_proc_caller_cliques_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(apply_exclusion__compute_parent_csd_prof_info_5_0,
		fn__create_report__create_proc_caller_cliques_3_0_i3);
MR_def_label(fn__create_report__create_proc_caller_cliques_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module51)
	MR_init_entry1(fn__create_report__create_cs_summary_add_to_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__create_report__create_cs_summary_add_to_map_3_0);
	MR_init_label1(fn__create_report__create_cs_summary_add_to_map_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_cs_summary_add_to_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__create_cs_summary_add_to_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__create_report__create_call_site_summary_2_0,
		fn__create_report__create_cs_summary_add_to_map_3_0_i2);
MR_def_label(fn__create_report__create_cs_summary_add_to_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_tempr1, 1), 0), 8);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(create_report_module52)
	MR_init_entry1(create_report__add_coverage_point_to_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__add_coverage_point_to_map_5_0);
	MR_init_label3(create_report__add_coverage_point_to_map_5_0,4,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_coverage_point_to_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__add_coverage_point_to_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (((MR_Integer) MR_tempr1 != ((MR_Integer) MR_cp_type_branch_arm))) {
		MR_GOTO_LAB(create_report__add_coverage_point_to_map_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		create_report__add_coverage_point_to_map_5_0_i4);
MR_def_label(create_report__add_coverage_point_to_map_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(create_report__add_coverage_point_to_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		create_report__add_coverage_point_to_map_5_0_i5);
MR_def_label(create_report__add_coverage_point_to_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module53)
	MR_init_entry1(create_report__psi_to_perf_row_data_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__psi_to_perf_row_data_3_0);
	MR_init_label3(create_report__psi_to_perf_row_data_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'psi_to_perf_row_data'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__psi_to_perf_row_data_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__create_report__describe_proc_2_0,
		create_report__psi_to_perf_row_data_3_0_i2);
MR_def_label(create_report__psi_to_perf_row_data_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		create_report__psi_to_perf_row_data_3_0_i3);
MR_def_label(create_report__psi_to_perf_row_data_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		create_report__psi_to_perf_row_data_3_0_i4);
MR_def_label(create_report__psi_to_perf_row_data_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurements__own_prof_info_0_0);
MR_decl_entry(__Unify___measurements__inherit_prof_info_0_0);

MR_BEGIN_MODULE(create_report_module54)
	MR_init_entry1(__Unify___create_report__call_site_callee_perf_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___create_report__call_site_callee_perf_0_0);
	MR_init_label3(__Unify___create_report__call_site_callee_perf_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___create_report__call_site_callee_perf_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___create_report__call_site_callee_perf_0_0_i8);
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
		MR_GOTO_LAB(__Unify___create_report__call_site_callee_perf_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___measurements__own_prof_info_0_0,
		__Unify___create_report__call_site_callee_perf_0_0_i4);
MR_def_label(__Unify___create_report__call_site_callee_perf_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___create_report__call_site_callee_perf_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___measurements__inherit_prof_info_0_0);
MR_def_label(__Unify___create_report__call_site_callee_perf_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___create_report__call_site_callee_perf_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___measurements__own_prof_info_0_0);
MR_decl_entry(__Compare___measurements__inherit_prof_info_0_0);

MR_BEGIN_MODULE(create_report_module55)
	MR_init_entry1(__Compare___create_report__call_site_callee_perf_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___create_report__call_site_callee_perf_0_0);
	MR_init_label5(__Compare___create_report__call_site_callee_perf_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___create_report__call_site_callee_perf_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___create_report__call_site_callee_perf_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___create_report__call_site_callee_perf_0_0_i2);
MR_def_label(__Compare___create_report__call_site_callee_perf_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___create_report__call_site_callee_perf_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___create_report__call_site_callee_perf_0_0_i5);
MR_def_label(__Compare___create_report__call_site_callee_perf_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___create_report__call_site_callee_perf_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___measurements__own_prof_info_0_0,
		__Compare___create_report__call_site_callee_perf_0_0_i9);
MR_def_label(__Compare___create_report__call_site_callee_perf_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___create_report__call_site_callee_perf_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___measurements__inherit_prof_info_0_0);
MR_def_label(__Compare___create_report__call_site_callee_perf_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___report__proc_desc_0_0);

MR_BEGIN_MODULE(create_report_module56)
	MR_init_entry1(__Unify___create_report__gs_field_raw_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___create_report__gs_field_raw_data_0_0);
	MR_init_label4(__Unify___create_report__gs_field_raw_data_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___create_report__gs_field_raw_data_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___create_report__gs_field_raw_data_0_0_i10);
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
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___report__proc_desc_0_0,
		__Unify___create_report__gs_field_raw_data_0_0_i4);
MR_def_label(__Unify___create_report__gs_field_raw_data_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___create_report__gs_field_raw_data_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___measurements__own_prof_info_0_0,
		__Unify___create_report__gs_field_raw_data_0_0_i6);
MR_def_label(__Unify___create_report__gs_field_raw_data_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___create_report__gs_field_raw_data_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___measurements__inherit_prof_info_0_0);
MR_def_label(__Unify___create_report__gs_field_raw_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___create_report__gs_field_raw_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___report__proc_desc_0_0);

MR_BEGIN_MODULE(create_report_module57)
	MR_init_entry1(__Compare___create_report__gs_field_raw_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___create_report__gs_field_raw_data_0_0);
	MR_init_label5(__Compare___create_report__gs_field_raw_data_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___create_report__gs_field_raw_data_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___create_report__gs_field_raw_data_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___create_report__gs_field_raw_data_0_0_i2);
MR_def_label(__Compare___create_report__gs_field_raw_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___create_report__gs_field_raw_data_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___report__proc_desc_0_0,
		__Compare___create_report__gs_field_raw_data_0_0_i5);
MR_def_label(__Compare___create_report__gs_field_raw_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___create_report__gs_field_raw_data_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___measurements__own_prof_info_0_0,
		__Compare___create_report__gs_field_raw_data_0_0_i9);
MR_def_label(__Compare___create_report__gs_field_raw_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___create_report__gs_field_raw_data_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___measurements__inherit_prof_info_0_0);
MR_def_label(__Compare___create_report__gs_field_raw_data_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(create_report_module58)
	MR_init_entry1(__Unify___create_report__raw_gs_ds_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___create_report__raw_gs_ds_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___create_report__raw_gs_ds_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,14);
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

MR_BEGIN_MODULE(create_report_module59)
	MR_init_entry1(__Compare___create_report__raw_gs_ds_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___create_report__raw_gs_ds_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___create_report__raw_gs_ds_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___report__gs_field_info_2_0);

MR_BEGIN_MODULE(create_report_module60)
	MR_init_entry1(__Unify___create_report__raw_gs_field_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___create_report__raw_gs_field_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___create_report__raw_gs_field_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(create_report, gs_field_raw_data);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___report__gs_field_info_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___report__gs_field_info_2_0);

MR_BEGIN_MODULE(create_report_module61)
	MR_init_entry1(__Compare___create_report__raw_gs_field_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___create_report__raw_gs_field_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___create_report__raw_gs_field_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(create_report, gs_field_raw_data);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___report__gs_field_info_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module62)
	MR_init_entry1(__Unify___create_report__raw_gs_field_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___create_report__raw_gs_field_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___create_report__raw_gs_field_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module63)
	MR_init_entry1(__Compare___create_report__raw_gs_field_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___create_report__raw_gs_field_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___create_report__raw_gs_field_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module64)
	MR_init_entry1(create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__400__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__400__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_clique_proc_dynamic_report__400__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__400__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module65)
	MR_init_entry1(create_report__IntroducedFrom__pred__create_call_site_summary__844__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__create_report__IntroducedFrom__pred__create_call_site_summary__844__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_call_site_summary__844__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__IntroducedFrom__pred__create_call_site_summary__844__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_pd_own_3_0);
MR_decl_entry(profile__deep_lookup_pd_desc_3_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(create_report_module66)
	MR_init_entry1(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0);
	MR_init_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,3,5,6,8,9,11,12,13,14,15)
	MR_init_label3(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,16,19,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__create_clique_proc_dynamic_report__[2]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i3);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_pd_own_3_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i5);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_pd_desc_3_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i6);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i8);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i9);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__400__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("create_clique_proc_dynamic_report: psptr mismatch", 49);
	}
	MR_np_call_localret_ent(require__require_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i11);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i12);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i13);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 8);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i14);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i15);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i16);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__create_child_call_site_report_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,32);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0_i19);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("invalid proc_dynamic index", 26);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module67)
	MR_init_entry1(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__getter_setter_raw_map_to_info_map__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,20);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(create_report__getter_setter_raw_data_to_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,19);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__map_values_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module68)
	MR_init_entry1(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0);
	MR_init_label9(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,5,7,8,9,11,3,15,13,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__getter_setter_raw_data_to_info__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i5);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i7);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i8);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i9);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i11);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_r4, 0) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i15);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_tfield(1, MR_r4, 0) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0_i18);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(create_report_module69)
	MR_init_entry1(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__own_and_inherit_to_perf_row_data__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__profile__root_total_info_1_0);
MR_decl_entry(fn__measurements__inherit_quanta_1_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);
MR_decl_entry(fn__measurements__inherit_allocs_1_0);
MR_decl_entry(fn__measurements__inherit_words_1_0);
MR_decl_entry(fn__measurements__calls_1_0);
MR_decl_entry(fn__measurements__exits_1_0);
MR_decl_entry(fn__measurements__fails_1_0);
MR_decl_entry(fn__measurements__redos_1_0);
MR_decl_entry(fn__measurements__excps_1_0);
MR_decl_entry(fn__measurements__quanta_1_0);
MR_decl_entry(fn__measurement_units__ticks_to_time_2_0);
MR_decl_entry(fn__measurement_units__time_percall_2_0);
MR_decl_entry(fn__measurements__callseqs_1_0);
MR_decl_entry(fn__measurements__allocs_1_0);
MR_decl_entry(fn__measurements__words_1_0);
MR_decl_entry(fn__measurement_units__memory_words_2_0);
MR_decl_entry(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0);

MR_BEGIN_MODULE(create_report_module70)
	MR_init_entry1(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0);
	MR_init_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,22,23,24,25,28,30,31,32,33,34)
	MR_init_label10(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,35,36,37,38,39,40,41,42,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__own_and_maybe_inherit_to_perf_row_data__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	MR_sv(28) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 9);
	}
	MR_np_call_localret_ent(fn__profile__root_total_info_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i2);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i3);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i4);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i5);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i6);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i7);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__exits_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i8);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__fails_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i9);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i10);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__excps_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i11);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i12);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurement_units__ticks_to_time_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i13);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i14);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__measurement_units__time_percall_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i15);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i16);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i17);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__create_report__int_per_call_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i18);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i19);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i20);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__create_report__int_per_call_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i21);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i22);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__measurement_units__memory_words_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i23);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i24);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(26);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i25);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 13);
	MR_tfield(0, MR_r2, 0) = MR_sv(15);
	MR_tfield(0, MR_r2, 1) = MR_sv(16);
	MR_tfield(0, MR_r2, 2) = MR_sv(17);
	MR_tfield(0, MR_r2, 3) = MR_sv(18);
	MR_tfield(0, MR_r2, 4) = MR_sv(19);
	MR_tfield(0, MR_r2, 5) = MR_sv(20);
	MR_tfield(0, MR_r2, 6) = MR_sv(21);
	MR_tfield(0, MR_r2, 7) = MR_sv(22);
	MR_tfield(0, MR_r2, 8) = MR_sv(23);
	MR_tfield(0, MR_r2, 9) = MR_sv(24);
	MR_tfield(0, MR_r2, 10) = MR_sv(26);
	MR_tfield(0, MR_r2, 11) = MR_sv(27);
	MR_tfield(0, MR_r2, 12) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i28);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_tfield(0, MR_r1, 2) = MR_sv(11);
	MR_tfield(0, MR_r1, 3) = MR_sv(12);
	MR_tfield(0, MR_r1, 4) = MR_sv(13);
	MR_tfield(0, MR_r1, 5) = MR_sv(14);
	MR_tfield(0, MR_r1, 6) = MR_sv(5);
	MR_tfield(0, MR_r1, 7) = MR_r2;
	MR_tfield(0, MR_r1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(28);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(16) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i30);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) MR_sv(15) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurement_units__ticks_to_time_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i31);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i32);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__measurement_units__time_percall_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i33);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i34);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i35);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = ((MR_Integer) MR_sv(17) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i36);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__create_report__int_per_call_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i37);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i38);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = ((MR_Integer) MR_sv(22) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i39);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__create_report__int_per_call_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i40);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i41);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = ((MR_Integer) MR_sv(25) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__measurement_units__memory_words_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i42);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i43);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0,
		f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0_i44);
MR_def_label(f_99_114_101_97_116_101_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 13);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_sv(15);
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_sv(17);
	MR_tfield(0, MR_r2, 6) = MR_sv(18);
	MR_tfield(0, MR_r2, 7) = MR_sv(6);
	MR_tfield(0, MR_r2, 8) = MR_sv(19);
	MR_tfield(0, MR_r2, 9) = MR_sv(16);
	MR_tfield(0, MR_r2, 10) = MR_sv(9);
	MR_tfield(0, MR_r2, 11) = MR_sv(20);
	MR_tfield(0, MR_r2, 12) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_tfield(0, MR_r1, 2) = MR_sv(11);
	MR_tfield(0, MR_r1, 3) = MR_sv(12);
	MR_tfield(0, MR_r1, 4) = MR_sv(13);
	MR_tfield(0, MR_r1, 5) = MR_sv(14);
	MR_tfield(0, MR_r1, 6) = MR_sv(5);
	MR_tfield(0, MR_r1, 7) = MR_sv(3);
	MR_tfield(0, MR_r1, 8) = MR_tempr1;
	MR_decr_sp_and_return(28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__create_report_maybe_bunch_0(void)
{
	create_report_module0();
	create_report_module1();
	create_report_module2();
	create_report_module3();
	create_report_module4();
	create_report_module5();
	create_report_module6();
	create_report_module7();
	create_report_module8();
	create_report_module9();
	create_report_module10();
	create_report_module11();
	create_report_module12();
	create_report_module13();
	create_report_module14();
	create_report_module15();
	create_report_module16();
	create_report_module17();
	create_report_module18();
	create_report_module19();
	create_report_module20();
	create_report_module21();
	create_report_module22();
	create_report_module23();
	create_report_module24();
	create_report_module25();
	create_report_module26();
	create_report_module27();
	create_report_module28();
	create_report_module29();
	create_report_module30();
	create_report_module31();
	create_report_module32();
	create_report_module33();
	create_report_module34();
	create_report_module35();
	create_report_module36();
	create_report_module37();
	create_report_module38();
	create_report_module39();
}

static void mercury__create_report_maybe_bunch_1(void)
{
	create_report_module40();
	create_report_module41();
	create_report_module42();
	create_report_module43();
	create_report_module44();
	create_report_module45();
	create_report_module46();
	create_report_module47();
	create_report_module48();
	create_report_module49();
	create_report_module50();
	create_report_module51();
	create_report_module52();
	create_report_module53();
	create_report_module54();
	create_report_module55();
	create_report_module56();
	create_report_module57();
	create_report_module58();
	create_report_module59();
	create_report_module60();
	create_report_module61();
	create_report_module62();
	create_report_module63();
	create_report_module64();
	create_report_module65();
	create_report_module66();
	create_report_module67();
	create_report_module68();
	create_report_module69();
	create_report_module70();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__create_report__init(void);
void mercury__create_report__init_type_tables(void);
void mercury__create_report__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__create_report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__create_report__init_complexity_procs(void);
#endif

void mercury__create_report__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__create_report_maybe_bunch_0();
	mercury__create_report_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_create_report__type_ctor_info_call_site_callee_perf_0,
		create_report__call_site_callee_perf_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_create_report__type_ctor_info_gs_field_raw_data_0,
		create_report__gs_field_raw_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_create_report__type_ctor_info_raw_gs_ds_map_0,
		create_report__raw_gs_ds_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_create_report__type_ctor_info_raw_gs_field_info_0,
		create_report__raw_gs_field_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_create_report__type_ctor_info_raw_gs_field_map_0,
		create_report__raw_gs_field_map_0_0);
	mercury__create_report__init_debugger();
}

void mercury__create_report__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_create_report__type_ctor_info_call_site_callee_perf_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_create_report__type_ctor_info_gs_field_raw_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_create_report__type_ctor_info_raw_gs_ds_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_create_report__type_ctor_info_raw_gs_field_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_create_report__type_ctor_info_raw_gs_field_map_0);
	}
}


void mercury__create_report__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__create_report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__create_report);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__create_report__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
