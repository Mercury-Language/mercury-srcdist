/*
** Automatically generated from `top_procs.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__top_procs__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 126 "../library/array.int"
#include "array.mh"

#line 27 "top_procs.c"
#line 134 "../library/io.int2"
#include "io.mh"

#line 31 "top_procs.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 35 "top_procs.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "top_procs.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "top_procs.c"
#line 44 "top_procs.c"
#include "top_procs.mh"

#line 47 "top_procs.c"
#line 48 "top_procs.c"
#ifndef TOP_PROCS_DECL_GUARD
#define TOP_PROCS_DECL_GUARD

#line 52 "top_procs.c"
#line 53 "top_procs.c"

#endif
#line 56 "top_procs.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_top_procs__type_ctor_info_line_group_2,
	mercury_data_top_procs__type_ctor_info_compare_proc_statics_0,
	mercury_data_top_procs__type_ctor_info_compare_line_groups_func_2;
MR_decl_label2(top_procs__accumulate_line_group_measurements_5_0, 2,3)
MR_decl_label4(top_procs__filter_ps_allocs_both_2_0, 2,3,4,5)
MR_decl_label2(top_procs__filter_ps_allocs_self_2_0, 2,3)
MR_decl_label2(top_procs__filter_ps_calls_self_2_0, 2,3)
MR_decl_label4(top_procs__filter_ps_callseqs_both_2_0, 2,3,4,5)
MR_decl_label2(top_procs__filter_ps_callseqs_self_2_0, 2,3)
MR_decl_label2(top_procs__filter_ps_redos_self_2_0, 2,3)
MR_decl_label4(top_procs__filter_ps_time_both_2_0, 2,3,4,5)
MR_decl_label2(top_procs__filter_ps_time_self_2_0, 2,3)
MR_decl_label4(top_procs__filter_ps_words_both_2_0, 2,3,4,5)
MR_decl_label2(top_procs__filter_ps_words_self_2_0, 2,3)
MR_decl_label1(top_procs__filter_top_procs_4_0, 1)
MR_decl_label8(top_procs__find_threshold_predicate_4_0, 3,5,6,8,9,11,12,14)
MR_decl_label4(top_procs__find_threshold_predicate_4_0, 15,17,18,20)
MR_decl_label8(top_procs__find_top_sort_predicate_6_0, 3,7,5,9,10,14,12,16)
MR_decl_label8(top_procs__find_top_sort_predicate_6_0, 17,21,19,23,24,28,26,30)
MR_decl_label8(top_procs__find_top_sort_predicate_6_0, 31,35,33,37,38,42,40,44)
MR_decl_label2(top_procs__sum_line_group_measurements_3_0, 2,3)
MR_decl_label8(top_procs__threshold_ps_allocs_both_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(top_procs__threshold_ps_allocs_both_3_0, 10,11)
MR_decl_label8(top_procs__threshold_ps_allocs_self_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(top_procs__threshold_ps_callseqs_both_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(top_procs__threshold_ps_callseqs_both_3_0, 10,11)
MR_decl_label8(top_procs__threshold_ps_callseqs_self_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(top_procs__threshold_ps_time_both_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(top_procs__threshold_ps_time_both_3_0, 10,11)
MR_decl_label8(top_procs__threshold_ps_time_self_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(top_procs__threshold_ps_words_both_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(top_procs__threshold_ps_words_both_3_0, 10,11)
MR_decl_label8(top_procs__threshold_ps_words_self_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(fn__top_procs__compare_groups_fallback_3_0, 2,6,12)
MR_decl_label2(fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0, 2,3)
MR_decl_label8(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0, 2,3,4,5,6,8,9,10)
MR_decl_label5(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0, 11,12,14,15,16)
MR_decl_label4(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0, 2,3,4,5,6,7,8,10)
MR_decl_label7(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0, 11,12,13,14,16,17,18)
MR_decl_label2(fn__top_procs__compare_line_groups_by_calls_2_0, 2,3)
MR_decl_label2(fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0, 2,3)
MR_decl_label8(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0, 2,3,4,5,6,8,9,10)
MR_decl_label5(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0, 11,12,14,15,16)
MR_decl_label4(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0, 2,3,4,5,6,7,8,10)
MR_decl_label7(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0, 11,12,13,14,16,17,18)
MR_decl_label2(fn__top_procs__compare_line_groups_by_context_2_0, 2,6)
MR_decl_label2(fn__top_procs__compare_line_groups_by_redos_2_0, 2,3)
MR_decl_label2(fn__top_procs__compare_line_groups_by_time_self_overall_2_0, 2,3)
MR_decl_label8(fn__top_procs__compare_line_groups_by_time_self_percall_2_0, 2,3,4,5,6,8,9,10)
MR_decl_label5(fn__top_procs__compare_line_groups_by_time_self_percall_2_0, 11,12,14,15,16)
MR_decl_label4(fn__top_procs__compare_line_groups_by_time_total_overall_2_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_line_groups_by_time_total_percall_2_0, 2,3,4,5,6,7,8,10)
MR_decl_label7(fn__top_procs__compare_line_groups_by_time_total_percall_2_0, 11,12,13,14,16,17,18)
MR_decl_label2(fn__top_procs__compare_line_groups_by_words_self_overall_2_0, 2,3)
MR_decl_label8(fn__top_procs__compare_line_groups_by_words_self_percall_2_0, 2,3,4,5,6,8,9,10)
MR_decl_label5(fn__top_procs__compare_line_groups_by_words_self_percall_2_0, 11,12,14,15,16)
MR_decl_label4(fn__top_procs__compare_line_groups_by_words_total_overall_2_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_line_groups_by_words_total_percall_2_0, 2,3,4,5,6,7,8,10)
MR_decl_label7(fn__top_procs__compare_line_groups_by_words_total_percall_2_0, 11,12,13,14,16,17,18)
MR_decl_label3(fn__top_procs__compare_procs_fallback_4_0, 2,6,12)
MR_decl_label8(fn__top_procs__compare_ps_allocs_both_overall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__top_procs__compare_ps_allocs_both_percall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__top_procs__compare_ps_allocs_both_percall_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label4(fn__top_procs__compare_ps_allocs_self_overall_3_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_ps_allocs_self_percall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(fn__top_procs__compare_ps_allocs_self_percall_3_0, 10,11,12,13)
MR_decl_label4(fn__top_procs__compare_ps_calls_self_overall_3_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_ps_callseqs_both_overall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__top_procs__compare_ps_callseqs_both_percall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__top_procs__compare_ps_callseqs_both_percall_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label4(fn__top_procs__compare_ps_callseqs_self_overall_3_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_ps_callseqs_self_percall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(fn__top_procs__compare_ps_callseqs_self_percall_3_0, 10,11,12,13)
MR_decl_label4(fn__top_procs__compare_ps_redos_self_overall_3_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_ps_time_both_overall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__top_procs__compare_ps_time_both_percall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__top_procs__compare_ps_time_both_percall_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label4(fn__top_procs__compare_ps_time_self_overall_3_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_ps_time_self_percall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(fn__top_procs__compare_ps_time_self_percall_3_0, 10,11,12,13)
MR_decl_label8(fn__top_procs__compare_ps_words_both_overall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__top_procs__compare_ps_words_both_percall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__top_procs__compare_ps_words_both_percall_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label4(fn__top_procs__compare_ps_words_self_overall_3_0, 2,3,4,5)
MR_decl_label8(fn__top_procs__compare_ps_words_self_percall_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(fn__top_procs__compare_ps_words_self_percall_3_0, 10,11,12,13)
MR_decl_label8(fn__top_procs__find_top_procs_5_0, 2,4,5,6,7,8,9,13)
MR_decl_label6(fn__top_procs__find_top_procs_5_0, 15,12,11,17,19,20)
MR_decl_label8(fn__top_procs__sort_line_groups_2_0, 5,4,7,8,9,13,11,15)
MR_decl_label8(fn__top_procs__sort_line_groups_2_0, 16,20,18,22,23,27,25,29)
MR_decl_label4(fn__top_procs__sort_line_groups_2_0, 30,34,32,36)
MR_decl_label4(__Unify___top_procs__line_group_2_0, 4,6,10,1)
MR_decl_label8(__Compare___top_procs__line_group_2_0, 3,2,5,9,13,17,21,25)
MR_decl_label1(__Compare___top_procs__line_group_2_0, 61)
MR_decl_static(top_procs__find_top_sort_predicate_6_0)
MR_decl_static(top_procs__find_threshold_predicate_4_0)
MR_def_extern_entry(fn__top_procs__find_top_procs_5_0)
MR_def_extern_entry(fn__top_procs__sort_line_groups_2_0)
MR_def_extern_entry(top_procs__sum_line_group_measurements_3_0)
MR_decl_static(fn__top_procs__compare_ps_time_both_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_words_both_overall_3_0)
MR_decl_static(fn__top_procs__compare_procs_fallback_4_0)
MR_decl_static(top_procs__filter_top_procs_4_0)
MR_decl_static(fn__top_procs__compare_ps_calls_self_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_redos_self_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_time_self_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_time_self_percall_3_0)
MR_decl_static(fn__top_procs__compare_ps_time_both_percall_3_0)
MR_decl_static(fn__top_procs__compare_ps_callseqs_self_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_callseqs_self_percall_3_0)
MR_decl_static(fn__top_procs__compare_ps_callseqs_both_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_callseqs_both_percall_3_0)
MR_decl_static(fn__top_procs__compare_ps_allocs_self_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_allocs_self_percall_3_0)
MR_decl_static(fn__top_procs__compare_ps_allocs_both_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_allocs_both_percall_3_0)
MR_decl_static(fn__top_procs__compare_ps_words_self_overall_3_0)
MR_decl_static(fn__top_procs__compare_ps_words_self_percall_3_0)
MR_decl_static(fn__top_procs__compare_ps_words_both_percall_3_0)
MR_decl_static(top_procs__filter_ps_calls_self_2_0)
MR_decl_static(top_procs__filter_ps_redos_self_2_0)
MR_decl_static(top_procs__filter_ps_time_self_2_0)
MR_decl_static(top_procs__filter_ps_time_both_2_0)
MR_decl_static(top_procs__filter_ps_callseqs_self_2_0)
MR_decl_static(top_procs__filter_ps_callseqs_both_2_0)
MR_decl_static(top_procs__filter_ps_allocs_self_2_0)
MR_decl_static(top_procs__filter_ps_allocs_both_2_0)
MR_decl_static(top_procs__filter_ps_words_self_2_0)
MR_decl_static(top_procs__filter_ps_words_both_2_0)
MR_decl_static(top_procs__threshold_ps_time_self_3_0)
MR_decl_static(top_procs__threshold_ps_time_both_3_0)
MR_decl_static(top_procs__threshold_ps_callseqs_self_3_0)
MR_decl_static(top_procs__threshold_ps_callseqs_both_3_0)
MR_decl_static(top_procs__threshold_ps_allocs_self_3_0)
MR_decl_static(top_procs__threshold_ps_allocs_both_3_0)
MR_decl_static(top_procs__threshold_ps_words_self_3_0)
MR_decl_static(top_procs__threshold_ps_words_both_3_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_context_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_name_2_0)
MR_decl_static(fn__top_procs__compare_groups_fallback_3_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_calls_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_redos_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_time_self_overall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_time_self_percall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_time_total_overall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_time_total_percall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_words_self_overall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_words_self_percall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_words_total_overall_2_0)
MR_decl_static(fn__top_procs__compare_line_groups_by_words_total_percall_2_0)
MR_decl_static(top_procs__accumulate_line_group_measurements_5_0)
MR_decl_static(__Unify___top_procs__compare_line_groups_func_2_0)
MR_decl_static(__Compare___top_procs__compare_line_groups_func_2_0)
MR_decl_static(__Unify___top_procs__compare_proc_statics_0_0)
MR_decl_static(__Compare___top_procs__compare_proc_statics_0_0)
MR_def_extern_entry(__Unify___top_procs__line_group_2_0)
MR_def_extern_entry(__Compare___top_procs__line_group_2_0)
MR_decl_static(top_procs__IntroducedFrom__pred__find_top_procs__105__1_4_0)
MR_decl_static(f_116_111_112_95_112_114_111_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_111_112_95_112_114_111_99_115_95_95_99_111_109_112_97_114_101_95_108_105_110_101_95_103_114_111_117_112_115_95_102_117_110_99_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(f_116_111_112_95_112_114_111_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_111_112_95_112_114_111_99_115_95_95_99_111_109_112_97_114_101_95_108_105_110_101_95_103_114_111_117_112_115_95_102_117_110_99_95_50_95_95_91_49_44_32_50_93_95_48_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_13;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_15;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_17;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_19;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_21;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_23;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_25;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_27;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_29;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_31;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_33;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_35;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_37;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_39;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_41;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_43;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_45;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_47;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_0 mercury_common_0[26] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_7,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_9,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_11,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_13,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_15,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_17,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_19,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_21,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_23,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_25,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_27,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_29,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_31,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_33,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_35,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_37,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_39,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_41,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_43,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_45,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_47,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_COMMON(5,0),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_COMMON(9,0),
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[60] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__top_procs__compare_ps_calls_self_overall_3_0),
0
},
{
MR_COMMON(2,0),
MR_ENTRY_AP(top_procs__filter_ps_calls_self_2_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__top_procs__compare_ps_calls_self_overall_3_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(top_procs__filter_ps_calls_self_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(fn__top_procs__compare_ps_calls_self_overall_3_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(top_procs__filter_ps_calls_self_2_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(fn__top_procs__compare_ps_calls_self_overall_3_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(top_procs__filter_ps_calls_self_2_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(fn__top_procs__compare_ps_redos_self_overall_3_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(top_procs__filter_ps_redos_self_2_0),
0
},
{
MR_COMMON(0,5),
MR_ENTRY_AP(fn__top_procs__compare_ps_redos_self_overall_3_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(top_procs__filter_ps_redos_self_2_0),
0
},
{
MR_COMMON(0,6),
MR_ENTRY_AP(fn__top_procs__compare_ps_redos_self_overall_3_0),
0
},
{
MR_COMMON(2,6),
MR_ENTRY_AP(top_procs__filter_ps_redos_self_2_0),
0
},
{
MR_COMMON(0,7),
MR_ENTRY_AP(fn__top_procs__compare_ps_redos_self_overall_3_0),
0
},
{
MR_COMMON(2,7),
MR_ENTRY_AP(top_procs__filter_ps_redos_self_2_0),
0
},
{
MR_COMMON(0,8),
MR_ENTRY_AP(fn__top_procs__compare_ps_time_self_percall_3_0),
0
},
{
MR_COMMON(2,8),
MR_ENTRY_AP(top_procs__filter_ps_time_self_2_0),
0
},
{
MR_COMMON(0,9),
MR_ENTRY_AP(fn__top_procs__compare_ps_time_self_overall_3_0),
0
},
{
MR_COMMON(2,9),
MR_ENTRY_AP(top_procs__filter_ps_time_self_2_0),
0
},
{
MR_COMMON(0,10),
MR_ENTRY_AP(fn__top_procs__compare_ps_time_both_percall_3_0),
0
},
{
MR_COMMON(2,10),
MR_ENTRY_AP(top_procs__filter_ps_time_both_2_0),
0
},
{
MR_COMMON(0,11),
MR_ENTRY_AP(fn__top_procs__compare_ps_time_both_overall_3_0),
0
},
{
MR_COMMON(2,11),
MR_ENTRY_AP(top_procs__filter_ps_time_both_2_0),
0
},
{
MR_COMMON(0,12),
MR_ENTRY_AP(fn__top_procs__compare_ps_callseqs_self_percall_3_0),
0
},
{
MR_COMMON(2,12),
MR_ENTRY_AP(top_procs__filter_ps_callseqs_self_2_0),
0
},
{
MR_COMMON(0,13),
MR_ENTRY_AP(fn__top_procs__compare_ps_callseqs_self_overall_3_0),
0
},
{
MR_COMMON(2,13),
MR_ENTRY_AP(top_procs__filter_ps_callseqs_self_2_0),
0
},
{
MR_COMMON(0,14),
MR_ENTRY_AP(fn__top_procs__compare_ps_callseqs_both_percall_3_0),
0
},
{
MR_COMMON(2,14),
MR_ENTRY_AP(top_procs__filter_ps_callseqs_both_2_0),
0
},
{
MR_COMMON(0,15),
MR_ENTRY_AP(fn__top_procs__compare_ps_callseqs_both_overall_3_0),
0
},
{
MR_COMMON(2,15),
MR_ENTRY_AP(top_procs__filter_ps_callseqs_both_2_0),
0
},
{
MR_COMMON(0,16),
MR_ENTRY_AP(fn__top_procs__compare_ps_allocs_self_percall_3_0),
0
},
{
MR_COMMON(2,16),
MR_ENTRY_AP(top_procs__filter_ps_allocs_self_2_0),
0
},
{
MR_COMMON(0,17),
MR_ENTRY_AP(fn__top_procs__compare_ps_allocs_self_overall_3_0),
0
},
{
MR_COMMON(2,17),
MR_ENTRY_AP(top_procs__filter_ps_allocs_self_2_0),
0
},
{
MR_COMMON(0,18),
MR_ENTRY_AP(fn__top_procs__compare_ps_allocs_both_percall_3_0),
0
},
{
MR_COMMON(2,18),
MR_ENTRY_AP(top_procs__filter_ps_allocs_both_2_0),
0
},
{
MR_COMMON(0,19),
MR_ENTRY_AP(fn__top_procs__compare_ps_allocs_both_overall_3_0),
0
},
{
MR_COMMON(2,19),
MR_ENTRY_AP(top_procs__filter_ps_allocs_both_2_0),
0
},
{
MR_COMMON(0,20),
MR_ENTRY_AP(fn__top_procs__compare_ps_words_self_percall_3_0),
0
},
{
MR_COMMON(2,20),
MR_ENTRY_AP(top_procs__filter_ps_words_self_2_0),
0
},
{
MR_COMMON(0,21),
MR_ENTRY_AP(fn__top_procs__compare_ps_words_self_overall_3_0),
0
},
{
MR_COMMON(2,21),
MR_ENTRY_AP(top_procs__filter_ps_words_self_2_0),
0
},
{
MR_COMMON(0,22),
MR_ENTRY_AP(fn__top_procs__compare_ps_words_both_percall_3_0),
0
},
{
MR_COMMON(2,22),
MR_ENTRY_AP(top_procs__filter_ps_words_both_2_0),
0
},
{
MR_COMMON(0,23),
MR_ENTRY_AP(fn__top_procs__compare_ps_words_both_overall_3_0),
0
},
{
MR_COMMON(2,23),
MR_ENTRY_AP(top_procs__filter_ps_words_both_2_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(top_procs__threshold_ps_time_self_3_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(top_procs__threshold_ps_time_self_3_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(top_procs__threshold_ps_time_self_3_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(top_procs__threshold_ps_time_self_3_0),
0
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(top_procs__threshold_ps_time_self_3_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(top_procs__threshold_ps_time_both_3_0),
0
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(top_procs__threshold_ps_callseqs_self_3_0),
0
},
{
MR_COMMON(3,7),
MR_ENTRY_AP(top_procs__threshold_ps_callseqs_both_3_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(top_procs__threshold_ps_allocs_self_3_0),
0
},
{
MR_COMMON(3,9),
MR_ENTRY_AP(top_procs__threshold_ps_allocs_both_3_0),
0
},
{
MR_COMMON(3,10),
MR_ENTRY_AP(top_procs__threshold_ps_words_self_3_0),
0
},
{
MR_COMMON(3,11),
MR_ENTRY_AP(top_procs__threshold_ps_words_both_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_14;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_16;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_18;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_20;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_22;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_24;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_26;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_28;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_30;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_32;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_34;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_36;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_38;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_40;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_42;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_44;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_46;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_48;
static const struct mercury_type_2 mercury_common_2[24] =
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_10,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_12,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_14,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_16,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_18,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_20,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_22,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_24,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_26,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_28,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_30,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_32,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_34,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_36,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_38,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_40,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_42,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_44,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_46,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_48,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_12;
static const struct mercury_type_3 mercury_common_3[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_10,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_11,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_12,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_string_const("bad sort specification", 22)
},
{
MR_string_const("bad threshold specification", 27)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_13;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_15;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_17;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_19;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_21;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_23;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_25;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_27;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_29;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_31;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_33;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_35;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_37;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_39;
static const struct mercury_type_7 mercury_common_7[21] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(6,0),
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_1,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_3,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_5,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_7,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_9,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_11,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_13,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_15,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_17,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_19,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_21,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_23,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_25,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_27,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_29,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_31,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_33,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_35,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_37,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_39,
MR_COMMON(11,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_CTOR0_ADDR(profile, deep),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
MR_CTOR0_ADDR(builtin, func),
3,
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
1,
2
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
2,
17,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_14;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_16;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_18;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_20;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_22;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_24;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_26;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_28;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_30;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_32;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_34;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_36;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_38;
static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_40;
static const struct mercury_type_12 mercury_common_12[20] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_2,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_4,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_6,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_8,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_10,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_12,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_14,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_16,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_18,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_20,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_22,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_24,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_26,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_28,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_30,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_32,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_34,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_36,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_38,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_40,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(9,1),
MR_COMMON(10,0),
MR_COMMON(10,0),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__sum_line_group_measurements_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_procs__sum_line_group_measurements_3_0_1,
MR_COMMON(11,0)
},
7,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,0),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;

const MR_PseudoTypeInfo mercury_data_top_procs__field_types_line_group_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_own_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_inherit_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) 2
};

const MR_ConstString mercury_data_top_procs__field_names_line_group_2_0[] = {
	"group_filename",
	"group_linenumber",
	"group_name",
	"group_own",
	"group_desc",
	"group_first_line_id",
	"group_later_lines"
};

static const MR_DuFunctorDesc mercury_data_top_procs__du_functor_desc_line_group_2_0 = {
	"line_group",
	7,
	64,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_top_procs__field_types_line_group_2_0,
	mercury_data_top_procs__field_names_line_group_2_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_top_procs__du_stag_ordered_line_group_2_0[] = {
	&mercury_data_top_procs__du_functor_desc_line_group_2_0

};

const MR_DuPtagLayout mercury_data_top_procs__du_ptag_ordered_line_group_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_top_procs__du_stag_ordered_line_group_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_top_procs__du_name_ordered_line_group_2[] = {
	&mercury_data_top_procs__du_functor_desc_line_group_2_0
};

const MR_Integer mercury_data_top_procs__functor_number_map_line_group_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_top_procs__type_ctor_info_line_group_2 = {
	2,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___top_procs__line_group_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___top_procs__line_group_2_0)),
	"top_procs",
	"line_group",
	{ (void *)mercury_data_top_procs__du_name_ordered_line_group_2 },
	{ (void *)mercury_data_top_procs__du_ptag_ordered_line_group_2 },
	1,
	4,
	mercury_data_top_procs__functor_number_map_line_group_2
};

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_func_4profile__type_ctor_info_deep_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_comparison_result_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	4,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_deep_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_comparison_result_0
}};

const MR_TypeCtorInfo_Struct mercury_data_top_procs__type_ctor_info_compare_proc_statics_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___top_procs__compare_proc_statics_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___top_procs__compare_proc_statics_0_0)),
	"top_procs",
	"compare_proc_statics",
	{ 0 },
	{ (void *)&mercury_data___vti_func_4profile__type_ctor_info_deep_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_comparison_result_0 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_top_procs__pti_line_group_2__pseudo_1__pseudo_2 = {
	&mercury_data_top_procs__type_ctor_info_line_group_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_VA_PseudoTypeInfo_Struct3 mercury_data___vpti_func_3__pseudo_top_procs__pti_line_group_2__pseudo_1__pseudo_2__pseudo_top_procs__pti_line_group_2__pseudo_1__pseudo_2__plain_builtin__type_ctor_info_comparison_result_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	3,
{	(MR_PseudoTypeInfo) &mercury_data_top_procs__pti_line_group_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_top_procs__pti_line_group_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_comparison_result_0
}};

const MR_TypeCtorInfo_Struct mercury_data_top_procs__type_ctor_info_compare_line_groups_func_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___top_procs__compare_line_groups_func_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___top_procs__compare_line_groups_func_2_0)),
	"top_procs",
	"compare_line_groups_func",
	{ 0 },
	{ (void *)&mercury_data___vpti_func_3__pseudo_top_procs__pti_line_group_2__pseudo_1__pseudo_2__pseudo_top_procs__pti_line_group_2__pseudo_1__pseudo_2__plain_builtin__type_ctor_info_comparison_result_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_1 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_calls_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
149,
"d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_2 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_calls_self",
2,
0
},
"top_procs",
"top_procs.m",
149,
"d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_3 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_calls_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
147,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_4 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_calls_self",
2,
0
},
"top_procs",
"top_procs.m",
147,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_5 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_calls_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
153,
"d4;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_6 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_calls_self",
2,
0
},
"top_procs",
"top_procs.m",
153,
"d4;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_7 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_calls_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
151,
"d3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_8 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_calls_self",
2,
0
},
"top_procs",
"top_procs.m",
151,
"d3;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_9 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_redos_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
158,
"d6;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_10 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_redos_self",
2,
0
},
"top_procs",
"top_procs.m",
158,
"d6;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_11 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_redos_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
156,
"d5;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_12 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_redos_self",
2,
0
},
"top_procs",
"top_procs.m",
156,
"d5;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_13 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_redos_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
162,
"d8;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_14 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_redos_self",
2,
0
},
"top_procs",
"top_procs.m",
162,
"d8;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_15 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_redos_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
160,
"d7;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_16 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_redos_self",
2,
0
},
"top_procs",
"top_procs.m",
160,
"d7;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_17 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_time_self_percall",
4,
0
},
"top_procs",
"top_procs.m",
167,
"d10;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_18 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_time_self",
2,
0
},
"top_procs",
"top_procs.m",
167,
"d10;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_19 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_time_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
165,
"d9;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_20 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_time_self",
2,
0
},
"top_procs",
"top_procs.m",
165,
"d9;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_21 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_time_both_percall",
4,
0
},
"top_procs",
"top_procs.m",
171,
"d12;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_22 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_time_both",
2,
0
},
"top_procs",
"top_procs.m",
171,
"d12;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_23 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_time_both_overall",
4,
0
},
"top_procs",
"top_procs.m",
169,
"d11;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_24 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_time_both",
2,
0
},
"top_procs",
"top_procs.m",
169,
"d11;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_25 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_callseqs_self_percall",
4,
0
},
"top_procs",
"top_procs.m",
176,
"d14;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_26 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_callseqs_self",
2,
0
},
"top_procs",
"top_procs.m",
176,
"d14;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_27 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_callseqs_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
174,
"d13;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_28 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_callseqs_self",
2,
0
},
"top_procs",
"top_procs.m",
174,
"d13;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_29 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_callseqs_both_percall",
4,
0
},
"top_procs",
"top_procs.m",
180,
"d16;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_30 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_callseqs_both",
2,
0
},
"top_procs",
"top_procs.m",
180,
"d16;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_31 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_callseqs_both_overall",
4,
0
},
"top_procs",
"top_procs.m",
178,
"d15;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_32 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_callseqs_both",
2,
0
},
"top_procs",
"top_procs.m",
178,
"d15;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_33 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_allocs_self_percall",
4,
0
},
"top_procs",
"top_procs.m",
185,
"d18;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_34 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_allocs_self",
2,
0
},
"top_procs",
"top_procs.m",
185,
"d18;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_35 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_allocs_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
183,
"d17;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_36 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_allocs_self",
2,
0
},
"top_procs",
"top_procs.m",
183,
"d17;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_37 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_allocs_both_percall",
4,
0
},
"top_procs",
"top_procs.m",
189,
"d20;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_38 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_allocs_both",
2,
0
},
"top_procs",
"top_procs.m",
189,
"d20;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_39 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_allocs_both_overall",
4,
0
},
"top_procs",
"top_procs.m",
187,
"d19;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_40 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_allocs_both",
2,
0
},
"top_procs",
"top_procs.m",
187,
"d19;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_41 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_words_self_percall",
4,
0
},
"top_procs",
"top_procs.m",
194,
"d22;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_42 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_words_self",
2,
0
},
"top_procs",
"top_procs.m",
194,
"d22;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_43 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_words_self_overall",
4,
0
},
"top_procs",
"top_procs.m",
192,
"d21;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_44 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_words_self",
2,
0
},
"top_procs",
"top_procs.m",
192,
"d21;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_45 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_words_both_percall",
4,
0
},
"top_procs",
"top_procs.m",
198,
"d24;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_46 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_words_both",
2,
0
},
"top_procs",
"top_procs.m",
198,
"d24;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_47 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_ps_words_both_overall",
4,
0
},
"top_procs",
"top_procs.m",
196,
"d23;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_top_sort_predicate_6_0_48 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_ps_words_both",
2,
0
},
"top_procs",
"top_procs.m",
196,
"d23;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_1 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_time_self",
3,
0
},
"top_procs",
"top_procs.m",
205,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_2 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_time_self",
3,
0
},
"top_procs",
"top_procs.m",
207,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_3 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_time_self",
3,
0
},
"top_procs",
"top_procs.m",
210,
"d3;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_4 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_time_self",
3,
0
},
"top_procs",
"top_procs.m",
212,
"d4;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_5 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_time_self",
3,
0
},
"top_procs",
"top_procs.m",
215,
"d5;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_6 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_time_both",
3,
0
},
"top_procs",
"top_procs.m",
217,
"d6;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_7 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_callseqs_self",
3,
0
},
"top_procs",
"top_procs.m",
220,
"d7;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_8 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_callseqs_both",
3,
0
},
"top_procs",
"top_procs.m",
222,
"d8;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_9 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_allocs_self",
3,
0
},
"top_procs",
"top_procs.m",
225,
"d9;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_10 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_allocs_both",
3,
0
},
"top_procs",
"top_procs.m",
227,
"d10;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_11 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_words_self",
3,
0
},
"top_procs",
"top_procs.m",
230,
"d11;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__find_threshold_predicate_4_0_12 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"threshold_ps_words_both",
3,
0
},
"top_procs",
"top_procs.m",
232,
"d12;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_1 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"filter_top_procs",
4,
0
},
"top_procs",
"top_procs.m",
81,
"d1;c8;d2;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_2 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_procs_fallback",
5,
0
},
"top_procs",
"top_procs.m",
82,
"d1;c8;d2;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__find_top_procs_5_0_3 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"lambda_top_procs_m_105",
4,
0
},
"top_procs",
"top_procs.m",
104,
"d1;c8;d2;c14;d2;c3;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_1 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_context",
3,
0
},
"top_procs",
"top_procs.m",
730,
"d1;c4;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_2 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_3 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_name",
3,
0
},
"top_procs",
"top_procs.m",
733,
"d1;c4;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_4 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_5 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_calls",
3,
0
},
"top_procs",
"top_procs.m",
741,
"d1;c4;d3;c2;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_6 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_7 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_redos",
3,
0
},
"top_procs",
"top_procs.m",
744,
"d1;c4;d3;c2;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_8 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_9 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_time_self_percall",
3,
0
},
"top_procs",
"top_procs.m",
754,
"d1;c4;d3;c2;d4;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_10 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_11 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_time_self_overall",
3,
0
},
"top_procs",
"top_procs.m",
749,
"d1;c4;d3;c2;d3;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_12 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_13 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_time_total_percall",
3,
0
},
"top_procs",
"top_procs.m",
764,
"d1;c4;d3;c2;d6;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_14 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_15 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_time_total_overall",
3,
0
},
"top_procs",
"top_procs.m",
759,
"d1;c4;d3;c2;d5;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_16 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_17 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_callseqs_self_percall",
3,
0
},
"top_procs",
"top_procs.m",
774,
"d1;c4;d3;c2;d8;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_18 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_19 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_callseqs_self_overall",
3,
0
},
"top_procs",
"top_procs.m",
769,
"d1;c4;d3;c2;d7;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_20 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_21 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_callseqs_total_percall",
3,
0
},
"top_procs",
"top_procs.m",
784,
"d1;c4;d3;c2;d10;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_22 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_23 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_callseqs_total_overall",
3,
0
},
"top_procs",
"top_procs.m",
779,
"d1;c4;d3;c2;d9;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_24 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_25 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_allocs_self_percall",
3,
0
},
"top_procs",
"top_procs.m",
794,
"d1;c4;d3;c2;d12;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_26 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_27 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_allocs_self_overall",
3,
0
},
"top_procs",
"top_procs.m",
789,
"d1;c4;d3;c2;d11;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_28 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_29 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_allocs_total_percall",
3,
0
},
"top_procs",
"top_procs.m",
804,
"d1;c4;d3;c2;d14;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_30 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_31 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_allocs_total_overall",
3,
0
},
"top_procs",
"top_procs.m",
799,
"d1;c4;d3;c2;d13;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_32 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_33 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_words_self_percall",
3,
0
},
"top_procs",
"top_procs.m",
814,
"d1;c4;d3;c2;d16;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_34 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_35 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_words_self_overall",
3,
0
},
"top_procs",
"top_procs.m",
809,
"d1;c4;d3;c2;d15;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_36 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_37 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_words_total_percall",
3,
0
},
"top_procs",
"top_procs.m",
824,
"d1;c4;d3;c2;d18;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_38 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_39 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_line_groups_by_words_total_overall",
3,
0
},
"top_procs",
"top_procs.m",
819,
"d1;c4;d3;c2;d17;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__top_procs__sort_line_groups_2_0_40 = {
{
MR_FUNCTION,
"top_procs",
"top_procs",
"compare_groups_fallback",
4,
0
},
"top_procs",
"top_procs.m",
827,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_procs__sum_line_group_measurements_3_0_1 = {
{
MR_PREDICATE,
"top_procs",
"top_procs",
"accumulate_line_group_measurements",
5,
0
},
"top_procs",
"top_procs.m",
1116,
"d1;c4;"
};


MR_BEGIN_MODULE(top_procs_module0)
	MR_init_entry1(top_procs__find_top_sort_predicate_6_0);
	MR_init_label8(top_procs__find_top_sort_predicate_6_0,3,7,5,9,10,14,12,16)
	MR_init_label8(top_procs__find_top_sort_predicate_6_0,17,21,19,23,24,28,26,30)
	MR_init_label8(top_procs__find_top_sort_predicate_6_0,31,35,33,37,38,42,40,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__find_top_sort_predicate_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(top_procs__find_top_sort_predicate_6_0_i3) MR_AND
		MR_LABEL_AP(top_procs__find_top_sort_predicate_6_0_i10) MR_AND
		MR_LABEL_AP(top_procs__find_top_sort_predicate_6_0_i17) MR_AND
		MR_LABEL_AP(top_procs__find_top_sort_predicate_6_0_i24) MR_AND
		MR_LABEL_AP(top_procs__find_top_sort_predicate_6_0_i31) MR_AND
		MR_LABEL_AP(top_procs__find_top_sort_predicate_6_0_i38));
MR_def_label(top_procs__find_top_sort_predicate_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i5);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i12);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i19);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,16);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,20);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,22);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,23);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i26);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,24);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,25);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,26);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,27);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,28);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,29);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,30);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,31);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i33);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,32);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,33);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,34);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,35);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,36);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,37);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,38);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,39);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i40);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,40);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,41);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,42);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,43);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(top_procs__find_top_sort_predicate_6_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,44);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,45);
	MR_proceed();
MR_def_label(top_procs__find_top_sort_predicate_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,46);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,47);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module1)
	MR_init_entry1(top_procs__find_threshold_predicate_4_0);
	MR_init_label8(top_procs__find_threshold_predicate_4_0,3,5,6,8,9,11,12,14)
	MR_init_label4(top_procs__find_threshold_predicate_4_0,15,17,18,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__find_threshold_predicate_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(top_procs__find_threshold_predicate_4_0_i3) MR_AND
		MR_LABEL_AP(top_procs__find_threshold_predicate_4_0_i6) MR_AND
		MR_LABEL_AP(top_procs__find_threshold_predicate_4_0_i9) MR_AND
		MR_LABEL_AP(top_procs__find_threshold_predicate_4_0_i12) MR_AND
		MR_LABEL_AP(top_procs__find_threshold_predicate_4_0_i15) MR_AND
		MR_LABEL_AP(top_procs__find_threshold_predicate_4_0_i18));
MR_def_label(top_procs__find_threshold_predicate_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_threshold_predicate_4_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,48);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,49);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_threshold_predicate_4_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,50);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,51);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_threshold_predicate_4_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,52);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,53);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_threshold_predicate_4_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,54);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,55);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_threshold_predicate_4_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,56);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,57);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_procs__find_threshold_predicate_4_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,58);
	MR_proceed();
MR_def_label(top_procs__find_threshold_predicate_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,59);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;
MR_decl_entry(array__max_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_46_46_2_0);
MR_decl_entry(profile__deep_lookup_proc_dynamics_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__sort_3_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(list__take_upto_3_0);
MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(top_procs_module2)
	MR_init_entry1(fn__top_procs__find_top_procs_5_0);
	MR_init_label8(fn__top_procs__find_top_procs_5_0,2,4,5,6,7,8,9,13)
	MR_init_label6(fn__top_procs__find_top_procs_5_0,15,12,11,17,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__top_procs__find_top_procs_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(top_procs__find_top_sort_predicate_6_0,
		fn__top_procs__find_top_procs_5_0_i2);
MR_def_label(fn__top_procs__find_top_procs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__top_procs__find_top_procs_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_decr_sp_and_return(8);
MR_def_label(fn__top_procs__find_top_procs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_ctfield(0, MR_sv(4), 8);
	MR_np_call_localret_ent(array__max_2_0,
		fn__top_procs__find_top_procs_5_0_i5);
MR_def_label(fn__top_procs__find_top_procs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		fn__top_procs__find_top_procs_5_0_i6);
MR_def_label(fn__top_procs__find_top_procs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		fn__top_procs__find_top_procs_5_0_i7);
MR_def_label(fn__top_procs__find_top_procs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,24);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(top_procs__filter_top_procs_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		fn__top_procs__find_top_procs_5_0_i8);
MR_def_label(fn__top_procs__find_top_procs_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_procs_fallback_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__sort_3_0,
		fn__top_procs__find_top_procs_5_0_i9);
MR_def_label(fn__top_procs__find_top_procs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__find_top_procs_5_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		fn__top_procs__find_top_procs_5_0_i13);
MR_def_label(fn__top_procs__find_top_procs_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__top_procs__find_top_procs_5_0_i12);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = (((MR_Integer) MR_sv(2) - (MR_Integer) MR_sv(1)) + (MR_Integer) 1);
	MR_np_call_localret_ent(list__take_upto_3_0,
		fn__top_procs__find_top_procs_5_0_i15);
MR_def_label(fn__top_procs__find_top_procs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__top_procs__find_top_procs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_decr_sp_and_return(8);
MR_def_label(fn__top_procs__find_top_procs_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(top_procs__find_threshold_predicate_4_0,
		fn__top_procs__find_top_procs_5_0_i17);
MR_def_label(fn__top_procs__find_top_procs_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__top_procs__find_top_procs_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_decr_sp_and_return(8);
MR_def_label(fn__top_procs__find_top_procs_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,25);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(top_procs__IntroducedFrom__pred__find_top_procs__105__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		fn__top_procs__find_top_procs_5_0_i20);
MR_def_label(fn__top_procs__find_top_procs_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__sort_2_0);

MR_BEGIN_MODULE(top_procs_module3)
	MR_init_entry1(fn__top_procs__sort_line_groups_2_0);
	MR_init_label8(fn__top_procs__sort_line_groups_2_0,5,4,7,8,9,13,11,15)
	MR_init_label8(fn__top_procs__sort_line_groups_2_0,16,20,18,22,23,27,25,29)
	MR_init_label4(fn__top_procs__sort_line_groups_2_0,30,34,32,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__top_procs__sort_line_groups_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_context_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_name_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(fn__top_procs__sort_line_groups_2_0_i7) MR_AND
		MR_LABEL_AP(fn__top_procs__sort_line_groups_2_0_i8) MR_AND
		MR_LABEL_AP(fn__top_procs__sort_line_groups_2_0_i9) MR_AND
		MR_LABEL_AP(fn__top_procs__sort_line_groups_2_0_i16) MR_AND
		MR_LABEL_AP(fn__top_procs__sort_line_groups_2_0_i23) MR_AND
		MR_LABEL_AP(fn__top_procs__sort_line_groups_2_0_i30));
MR_def_label(fn__top_procs__sort_line_groups_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_calls_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_redos_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i11);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_time_self_percall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,4);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_time_self_overall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,5);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r3, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_time_total_percall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,6);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_time_total_overall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,7);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i18);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,8);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,9);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r3, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i22);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,10);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,11);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i25);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i27);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,12);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,13);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r3, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i29);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,14);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,15);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i32);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i34);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,17);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_words_self_percall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,16);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,18);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_words_self_overall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,17);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r3, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__top_procs__sort_line_groups_2_0_i36);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,19);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_words_total_percall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,18);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
MR_def_label(fn__top_procs__sort_line_groups_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,20);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_line_groups_by_words_total_overall_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,19);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__sort_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__zero_own_prof_info_0_0);
MR_decl_entry(fn__measurements__zero_inherit_prof_info_0_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(top_procs_module4)
	MR_init_entry1(top_procs__sum_line_group_measurements_3_0);
	MR_init_label2(top_procs__sum_line_group_measurements_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_procs__sum_line_group_measurements_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(top_procs__accumulate_line_group_measurements_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		top_procs__sum_line_group_measurements_3_0_i2);
MR_def_label(top_procs__sum_line_group_measurements_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		top_procs__sum_line_group_measurements_3_0_i3);
MR_def_label(top_procs__sum_line_group_measurements_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_r7 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);
MR_decl_entry(fn__measurements__quanta_1_0);
MR_decl_entry(fn__measurements__inherit_quanta_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(top_procs_module5)
	MR_init_entry1(fn__top_procs__compare_ps_time_both_overall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_time_both_overall_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_time_both_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 19);
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_both_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_time_both_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_both_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_time_both_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_both_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_time_both_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_both_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_time_both_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_ps_time_both_overall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_time_both_overall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_ps_time_both_overall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_time_both_overall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		fn__top_procs__compare_ps_time_both_overall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_time_both_overall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		fn__top_procs__compare_ps_time_both_overall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_time_both_overall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(3));
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__words_1_0);
MR_decl_entry(fn__measurements__inherit_words_1_0);

MR_BEGIN_MODULE(top_procs_module6)
	MR_init_entry1(fn__top_procs__compare_ps_words_both_overall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_words_both_overall_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_words_both_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 19);
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_both_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_words_both_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_both_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_words_both_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_both_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_words_both_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_both_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_words_both_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_ps_words_both_overall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_words_both_overall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_ps_words_both_overall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_words_both_overall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		fn__top_procs__compare_ps_words_both_overall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_words_both_overall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		fn__top_procs__compare_ps_words_both_overall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_words_both_overall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(3));
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(top_procs_module7)
	MR_init_entry1(fn__top_procs__compare_procs_fallback_4_0);
	MR_init_label3(fn__top_procs__compare_procs_fallback_4_0,2,6,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_procs_fallback_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__top_procs__compare_procs_fallback_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__fn__top_procs__compare_procs_fallback_4_0_i2);
MR_def_label(fn__top_procs__compare_procs_fallback_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__top_procs__compare_procs_fallback_4_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__top_procs__compare_ps_time_both_overall_3_0,
		fn__top_procs__compare_procs_fallback_4_0_i6);
MR_def_label(fn__top_procs__compare_procs_fallback_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__top_procs__compare_procs_fallback_4_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__top_procs__compare_ps_words_both_overall_3_0);
MR_def_label(fn__top_procs__compare_procs_fallback_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(top_procs_module8)
	MR_init_entry1(top_procs__filter_top_procs_4_0);
	MR_init_label1(top_procs__filter_top_procs_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_top_procs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 == MR_r2)) {
		MR_GOTO_LAB(top_procs__filter_top_procs_4_0_i1);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_r3;
	MR_r3 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(top_procs__filter_top_procs_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(top_procs__filter_top_procs_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__calls_1_0);

MR_BEGIN_MODULE(top_procs_module9)
	MR_init_entry1(fn__top_procs__compare_ps_calls_self_overall_3_0);
	MR_init_label4(fn__top_procs__compare_ps_calls_self_overall_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_calls_self_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_calls_self_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_calls_self_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_calls_self_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_calls_self_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_calls_self_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_calls_self_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_calls_self_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_calls_self_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__redos_1_0);

MR_BEGIN_MODULE(top_procs_module10)
	MR_init_entry1(fn__top_procs__compare_ps_redos_self_overall_3_0);
	MR_init_label4(fn__top_procs__compare_ps_redos_self_overall_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_redos_self_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_redos_self_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_redos_self_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_redos_self_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_redos_self_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__top_procs__compare_ps_redos_self_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_redos_self_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__top_procs__compare_ps_redos_self_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_redos_self_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module11)
	MR_init_entry1(fn__top_procs__compare_ps_time_self_overall_3_0);
	MR_init_label4(fn__top_procs__compare_ps_time_self_overall_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_time_self_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_self_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_time_self_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_self_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_time_self_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_ps_time_self_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_time_self_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_ps_time_self_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_time_self_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);
MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(top_procs_module12)
	MR_init_entry1(fn__top_procs__compare_ps_time_self_percall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_time_self_percall_3_0,2,3,4,5,6,7,8,9)
	MR_init_label4(fn__top_procs__compare_ps_time_self_percall_3_0,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_time_self_percall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i10);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i11);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i12);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_time_self_percall_3_0_i13);
MR_def_label(fn__top_procs__compare_ps_time_self_percall_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module13)
	MR_init_entry1(fn__top_procs__compare_ps_time_both_percall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_time_both_percall_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__top_procs__compare_ps_time_both_percall_3_0,10,11,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_time_both_percall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 19);
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i10);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i11);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(4));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i12);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i13);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i14);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i15);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i16);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_time_both_percall_3_0_i17);
MR_def_label(fn__top_procs__compare_ps_time_both_percall_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__callseqs_1_0);

MR_BEGIN_MODULE(top_procs_module14)
	MR_init_entry1(fn__top_procs__compare_ps_callseqs_self_overall_3_0);
	MR_init_label4(fn__top_procs__compare_ps_callseqs_self_overall_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_callseqs_self_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_self_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_self_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_self_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_self_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module15)
	MR_init_entry1(fn__top_procs__compare_ps_callseqs_self_percall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_callseqs_self_percall_3_0,2,3,4,5,6,7,8,9)
	MR_init_label4(fn__top_procs__compare_ps_callseqs_self_percall_3_0,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_callseqs_self_percall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i10);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i11);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i12);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_callseqs_self_percall_3_0_i13);
MR_def_label(fn__top_procs__compare_ps_callseqs_self_percall_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__inherit_callseqs_1_0);

MR_BEGIN_MODULE(top_procs_module16)
	MR_init_entry1(fn__top_procs__compare_ps_callseqs_both_overall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_callseqs_both_overall_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_callseqs_both_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 19);
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_both_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_both_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_both_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_both_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_both_overall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_overall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_both_overall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_overall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_both_overall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_overall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_both_overall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_overall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(3));
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module17)
	MR_init_entry1(fn__top_procs__compare_ps_callseqs_both_percall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_callseqs_both_percall_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__top_procs__compare_ps_callseqs_both_percall_3_0,10,11,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_callseqs_both_percall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 19);
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i10);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i11);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(4));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i12);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i13);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i14);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i15);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i16);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_callseqs_both_percall_3_0_i17);
MR_def_label(fn__top_procs__compare_ps_callseqs_both_percall_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__allocs_1_0);

MR_BEGIN_MODULE(top_procs_module18)
	MR_init_entry1(fn__top_procs__compare_ps_allocs_self_overall_3_0);
	MR_init_label4(fn__top_procs__compare_ps_allocs_self_overall_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_allocs_self_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_self_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_allocs_self_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_self_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_allocs_self_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_ps_allocs_self_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_allocs_self_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_ps_allocs_self_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_allocs_self_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module19)
	MR_init_entry1(fn__top_procs__compare_ps_allocs_self_percall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_allocs_self_percall_3_0,2,3,4,5,6,7,8,9)
	MR_init_label4(fn__top_procs__compare_ps_allocs_self_percall_3_0,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_allocs_self_percall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i10);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i11);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i12);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_allocs_self_percall_3_0_i13);
MR_def_label(fn__top_procs__compare_ps_allocs_self_percall_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__inherit_allocs_1_0);

MR_BEGIN_MODULE(top_procs_module20)
	MR_init_entry1(fn__top_procs__compare_ps_allocs_both_overall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_allocs_both_overall_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_allocs_both_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 19);
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_both_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_allocs_both_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_both_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_allocs_both_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_both_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_allocs_both_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_both_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_allocs_both_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_ps_allocs_both_overall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_allocs_both_overall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_ps_allocs_both_overall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_allocs_both_overall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		fn__top_procs__compare_ps_allocs_both_overall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_allocs_both_overall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		fn__top_procs__compare_ps_allocs_both_overall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_allocs_both_overall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(3));
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module21)
	MR_init_entry1(fn__top_procs__compare_ps_allocs_both_percall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_allocs_both_percall_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__top_procs__compare_ps_allocs_both_percall_3_0,10,11,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_allocs_both_percall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 19);
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i10);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i11);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(4));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i12);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i13);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i14);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i15);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i16);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_allocs_both_percall_3_0_i17);
MR_def_label(fn__top_procs__compare_ps_allocs_both_percall_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module22)
	MR_init_entry1(fn__top_procs__compare_ps_words_self_overall_3_0);
	MR_init_label4(fn__top_procs__compare_ps_words_self_overall_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_words_self_overall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_self_overall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_words_self_overall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_self_overall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_words_self_overall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_ps_words_self_overall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_words_self_overall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_ps_words_self_overall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_words_self_overall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module23)
	MR_init_entry1(fn__top_procs__compare_ps_words_self_percall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_words_self_percall_3_0,2,3,4,5,6,7,8,9)
	MR_init_label4(fn__top_procs__compare_ps_words_self_percall_3_0,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_words_self_percall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i10);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i11);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i12);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_words_self_percall_3_0_i13);
MR_def_label(fn__top_procs__compare_ps_words_self_percall_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module24)
	MR_init_entry1(fn__top_procs__compare_ps_words_both_percall_3_0);
	MR_init_label8(fn__top_procs__compare_ps_words_both_percall_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__top_procs__compare_ps_words_both_percall_3_0,10,11,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_ps_words_both_percall_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 19);
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i2);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i3);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i4);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i5);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i6);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i7);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i8);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i9);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i10);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i11);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(4));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i12);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i13);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i14);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i15);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i16);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_ps_words_both_percall_3_0_i17);
MR_def_label(fn__top_procs__compare_ps_words_both_percall_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module25)
	MR_init_entry1(top_procs__filter_ps_calls_self_2_0);
	MR_init_label2(top_procs__filter_ps_calls_self_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_calls_self_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_calls_self_2_0_i2);
MR_def_label(top_procs__filter_ps_calls_self_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		top_procs__filter_ps_calls_self_2_0_i3);
MR_def_label(top_procs__filter_ps_calls_self_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module26)
	MR_init_entry1(top_procs__filter_ps_redos_self_2_0);
	MR_init_label2(top_procs__filter_ps_redos_self_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_redos_self_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_redos_self_2_0_i2);
MR_def_label(top_procs__filter_ps_redos_self_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		top_procs__filter_ps_redos_self_2_0_i3);
MR_def_label(top_procs__filter_ps_redos_self_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module27)
	MR_init_entry1(top_procs__filter_ps_time_self_2_0);
	MR_init_label2(top_procs__filter_ps_time_self_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_time_self_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_time_self_2_0_i2);
MR_def_label(top_procs__filter_ps_time_self_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		top_procs__filter_ps_time_self_2_0_i3);
MR_def_label(top_procs__filter_ps_time_self_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module28)
	MR_init_entry1(top_procs__filter_ps_time_both_2_0);
	MR_init_label4(top_procs__filter_ps_time_both_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_time_both_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 20);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_time_both_2_0_i2);
MR_def_label(top_procs__filter_ps_time_both_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_time_both_2_0_i3);
MR_def_label(top_procs__filter_ps_time_both_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		top_procs__filter_ps_time_both_2_0_i4);
MR_def_label(top_procs__filter_ps_time_both_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		top_procs__filter_ps_time_both_2_0_i5);
MR_def_label(top_procs__filter_ps_time_both_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 > (MR_Integer) 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module29)
	MR_init_entry1(top_procs__filter_ps_callseqs_self_2_0);
	MR_init_label2(top_procs__filter_ps_callseqs_self_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_callseqs_self_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_callseqs_self_2_0_i2);
MR_def_label(top_procs__filter_ps_callseqs_self_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		top_procs__filter_ps_callseqs_self_2_0_i3);
MR_def_label(top_procs__filter_ps_callseqs_self_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module30)
	MR_init_entry1(top_procs__filter_ps_callseqs_both_2_0);
	MR_init_label4(top_procs__filter_ps_callseqs_both_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_callseqs_both_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 20);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_callseqs_both_2_0_i2);
MR_def_label(top_procs__filter_ps_callseqs_both_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_callseqs_both_2_0_i3);
MR_def_label(top_procs__filter_ps_callseqs_both_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		top_procs__filter_ps_callseqs_both_2_0_i4);
MR_def_label(top_procs__filter_ps_callseqs_both_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		top_procs__filter_ps_callseqs_both_2_0_i5);
MR_def_label(top_procs__filter_ps_callseqs_both_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 > (MR_Integer) 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module31)
	MR_init_entry1(top_procs__filter_ps_allocs_self_2_0);
	MR_init_label2(top_procs__filter_ps_allocs_self_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_allocs_self_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_allocs_self_2_0_i2);
MR_def_label(top_procs__filter_ps_allocs_self_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		top_procs__filter_ps_allocs_self_2_0_i3);
MR_def_label(top_procs__filter_ps_allocs_self_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module32)
	MR_init_entry1(top_procs__filter_ps_allocs_both_2_0);
	MR_init_label4(top_procs__filter_ps_allocs_both_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_allocs_both_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 20);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_allocs_both_2_0_i2);
MR_def_label(top_procs__filter_ps_allocs_both_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_allocs_both_2_0_i3);
MR_def_label(top_procs__filter_ps_allocs_both_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		top_procs__filter_ps_allocs_both_2_0_i4);
MR_def_label(top_procs__filter_ps_allocs_both_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		top_procs__filter_ps_allocs_both_2_0_i5);
MR_def_label(top_procs__filter_ps_allocs_both_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 > (MR_Integer) 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module33)
	MR_init_entry1(top_procs__filter_ps_words_self_2_0);
	MR_init_label2(top_procs__filter_ps_words_self_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_words_self_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_words_self_2_0_i2);
MR_def_label(top_procs__filter_ps_words_self_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		top_procs__filter_ps_words_self_2_0_i3);
MR_def_label(top_procs__filter_ps_words_self_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module34)
	MR_init_entry1(top_procs__filter_ps_words_both_2_0);
	MR_init_label4(top_procs__filter_ps_words_both_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__filter_ps_words_both_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 20);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_words_both_2_0_i2);
MR_def_label(top_procs__filter_ps_words_both_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__filter_ps_words_both_2_0_i3);
MR_def_label(top_procs__filter_ps_words_both_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		top_procs__filter_ps_words_both_2_0_i4);
MR_def_label(top_procs__filter_ps_words_both_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		top_procs__filter_ps_words_both_2_0_i5);
MR_def_label(top_procs__filter_ps_words_both_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 > (MR_Integer) 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__profile__root_own_info_1_0);
MR_decl_entry(fn__profile__root_desc_info_1_0);
static const MR_Float mercury_float_const_100pt00000000000000 = 100.00000000000000;

MR_BEGIN_MODULE(top_procs_module35)
	MR_init_entry1(top_procs__threshold_ps_time_self_3_0);
	MR_init_label8(top_procs__threshold_ps_time_self_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__threshold_ps_time_self_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_sv(1), 19);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_time_self_3_0_i2);
MR_def_label(top_procs__threshold_ps_time_self_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__profile__root_own_info_1_0,
		top_procs__threshold_ps_time_self_3_0_i3);
MR_def_label(top_procs__threshold_ps_time_self_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_desc_info_1_0,
		top_procs__threshold_ps_time_self_3_0_i4);
MR_def_label(top_procs__threshold_ps_time_self_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		top_procs__threshold_ps_time_self_3_0_i5);
MR_def_label(top_procs__threshold_ps_time_self_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		top_procs__threshold_ps_time_self_3_0_i6);
MR_def_label(top_procs__threshold_ps_time_self_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		top_procs__threshold_ps_time_self_3_0_i7);
MR_def_label(top_procs__threshold_ps_time_self_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_time_self_3_0_i8);
MR_def_label(top_procs__threshold_ps_time_self_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word(((MR_Float) 100.00000000000000 * MR_word_to_float(MR_tempr1)));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_time_self_3_0_i9);
MR_def_label(top_procs__threshold_ps_time_self_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module36)
	MR_init_entry1(top_procs__threshold_ps_time_both_3_0);
	MR_init_label8(top_procs__threshold_ps_time_both_3_0,2,3,4,5,6,7,8,9)
	MR_init_label2(top_procs__threshold_ps_time_both_3_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__threshold_ps_time_both_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_sv(1), 19);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_time_both_3_0_i2);
MR_def_label(top_procs__threshold_ps_time_both_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_time_both_3_0_i3);
MR_def_label(top_procs__threshold_ps_time_both_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__profile__root_own_info_1_0,
		top_procs__threshold_ps_time_both_3_0_i4);
MR_def_label(top_procs__threshold_ps_time_both_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_desc_info_1_0,
		top_procs__threshold_ps_time_both_3_0_i5);
MR_def_label(top_procs__threshold_ps_time_both_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		top_procs__threshold_ps_time_both_3_0_i6);
MR_def_label(top_procs__threshold_ps_time_both_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		top_procs__threshold_ps_time_both_3_0_i7);
MR_def_label(top_procs__threshold_ps_time_both_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		top_procs__threshold_ps_time_both_3_0_i8);
MR_def_label(top_procs__threshold_ps_time_both_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		top_procs__threshold_ps_time_both_3_0_i9);
MR_def_label(top_procs__threshold_ps_time_both_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(3));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_time_both_3_0_i10);
MR_def_label(top_procs__threshold_ps_time_both_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word(((MR_Float) 100.00000000000000 * MR_word_to_float(MR_tempr1)));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_time_both_3_0_i11);
MR_def_label(top_procs__threshold_ps_time_both_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module37)
	MR_init_entry1(top_procs__threshold_ps_callseqs_self_3_0);
	MR_init_label8(top_procs__threshold_ps_callseqs_self_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__threshold_ps_callseqs_self_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_sv(1), 19);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_callseqs_self_3_0_i2);
MR_def_label(top_procs__threshold_ps_callseqs_self_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__profile__root_own_info_1_0,
		top_procs__threshold_ps_callseqs_self_3_0_i3);
MR_def_label(top_procs__threshold_ps_callseqs_self_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_desc_info_1_0,
		top_procs__threshold_ps_callseqs_self_3_0_i4);
MR_def_label(top_procs__threshold_ps_callseqs_self_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		top_procs__threshold_ps_callseqs_self_3_0_i5);
MR_def_label(top_procs__threshold_ps_callseqs_self_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		top_procs__threshold_ps_callseqs_self_3_0_i6);
MR_def_label(top_procs__threshold_ps_callseqs_self_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		top_procs__threshold_ps_callseqs_self_3_0_i7);
MR_def_label(top_procs__threshold_ps_callseqs_self_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_callseqs_self_3_0_i8);
MR_def_label(top_procs__threshold_ps_callseqs_self_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word(((MR_Float) 100.00000000000000 * MR_word_to_float(MR_tempr1)));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_callseqs_self_3_0_i9);
MR_def_label(top_procs__threshold_ps_callseqs_self_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module38)
	MR_init_entry1(top_procs__threshold_ps_callseqs_both_3_0);
	MR_init_label8(top_procs__threshold_ps_callseqs_both_3_0,2,3,4,5,6,7,8,9)
	MR_init_label2(top_procs__threshold_ps_callseqs_both_3_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__threshold_ps_callseqs_both_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_sv(1), 19);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_callseqs_both_3_0_i2);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_callseqs_both_3_0_i3);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__profile__root_own_info_1_0,
		top_procs__threshold_ps_callseqs_both_3_0_i4);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_desc_info_1_0,
		top_procs__threshold_ps_callseqs_both_3_0_i5);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		top_procs__threshold_ps_callseqs_both_3_0_i6);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		top_procs__threshold_ps_callseqs_both_3_0_i7);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		top_procs__threshold_ps_callseqs_both_3_0_i8);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		top_procs__threshold_ps_callseqs_both_3_0_i9);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(3));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_callseqs_both_3_0_i10);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word(((MR_Float) 100.00000000000000 * MR_word_to_float(MR_tempr1)));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_callseqs_both_3_0_i11);
MR_def_label(top_procs__threshold_ps_callseqs_both_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module39)
	MR_init_entry1(top_procs__threshold_ps_allocs_self_3_0);
	MR_init_label8(top_procs__threshold_ps_allocs_self_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__threshold_ps_allocs_self_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_sv(1), 19);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_allocs_self_3_0_i2);
MR_def_label(top_procs__threshold_ps_allocs_self_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__profile__root_own_info_1_0,
		top_procs__threshold_ps_allocs_self_3_0_i3);
MR_def_label(top_procs__threshold_ps_allocs_self_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_desc_info_1_0,
		top_procs__threshold_ps_allocs_self_3_0_i4);
MR_def_label(top_procs__threshold_ps_allocs_self_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		top_procs__threshold_ps_allocs_self_3_0_i5);
MR_def_label(top_procs__threshold_ps_allocs_self_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		top_procs__threshold_ps_allocs_self_3_0_i6);
MR_def_label(top_procs__threshold_ps_allocs_self_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		top_procs__threshold_ps_allocs_self_3_0_i7);
MR_def_label(top_procs__threshold_ps_allocs_self_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_allocs_self_3_0_i8);
MR_def_label(top_procs__threshold_ps_allocs_self_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word(((MR_Float) 100.00000000000000 * MR_word_to_float(MR_tempr1)));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_allocs_self_3_0_i9);
MR_def_label(top_procs__threshold_ps_allocs_self_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module40)
	MR_init_entry1(top_procs__threshold_ps_allocs_both_3_0);
	MR_init_label8(top_procs__threshold_ps_allocs_both_3_0,2,3,4,5,6,7,8,9)
	MR_init_label2(top_procs__threshold_ps_allocs_both_3_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__threshold_ps_allocs_both_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_sv(1), 19);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_allocs_both_3_0_i2);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_allocs_both_3_0_i3);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__profile__root_own_info_1_0,
		top_procs__threshold_ps_allocs_both_3_0_i4);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_desc_info_1_0,
		top_procs__threshold_ps_allocs_both_3_0_i5);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		top_procs__threshold_ps_allocs_both_3_0_i6);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		top_procs__threshold_ps_allocs_both_3_0_i7);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		top_procs__threshold_ps_allocs_both_3_0_i8);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		top_procs__threshold_ps_allocs_both_3_0_i9);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(3));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_allocs_both_3_0_i10);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word(((MR_Float) 100.00000000000000 * MR_word_to_float(MR_tempr1)));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_allocs_both_3_0_i11);
MR_def_label(top_procs__threshold_ps_allocs_both_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module41)
	MR_init_entry1(top_procs__threshold_ps_words_self_3_0);
	MR_init_label8(top_procs__threshold_ps_words_self_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__threshold_ps_words_self_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_sv(1), 19);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_words_self_3_0_i2);
MR_def_label(top_procs__threshold_ps_words_self_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__profile__root_own_info_1_0,
		top_procs__threshold_ps_words_self_3_0_i3);
MR_def_label(top_procs__threshold_ps_words_self_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_desc_info_1_0,
		top_procs__threshold_ps_words_self_3_0_i4);
MR_def_label(top_procs__threshold_ps_words_self_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		top_procs__threshold_ps_words_self_3_0_i5);
MR_def_label(top_procs__threshold_ps_words_self_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		top_procs__threshold_ps_words_self_3_0_i6);
MR_def_label(top_procs__threshold_ps_words_self_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		top_procs__threshold_ps_words_self_3_0_i7);
MR_def_label(top_procs__threshold_ps_words_self_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_words_self_3_0_i8);
MR_def_label(top_procs__threshold_ps_words_self_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word(((MR_Float) 100.00000000000000 * MR_word_to_float(MR_tempr1)));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_words_self_3_0_i9);
MR_def_label(top_procs__threshold_ps_words_self_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module42)
	MR_init_entry1(top_procs__threshold_ps_words_both_3_0);
	MR_init_label8(top_procs__threshold_ps_words_both_3_0,2,3,4,5,6,7,8,9)
	MR_init_label2(top_procs__threshold_ps_words_both_3_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__threshold_ps_words_both_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_r1, 20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_sv(1), 19);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_words_both_3_0_i2);
MR_def_label(top_procs__threshold_ps_words_both_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		top_procs__threshold_ps_words_both_3_0_i3);
MR_def_label(top_procs__threshold_ps_words_both_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__profile__root_own_info_1_0,
		top_procs__threshold_ps_words_both_3_0_i4);
MR_def_label(top_procs__threshold_ps_words_both_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_desc_info_1_0,
		top_procs__threshold_ps_words_both_3_0_i5);
MR_def_label(top_procs__threshold_ps_words_both_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		top_procs__threshold_ps_words_both_3_0_i6);
MR_def_label(top_procs__threshold_ps_words_both_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		top_procs__threshold_ps_words_both_3_0_i7);
MR_def_label(top_procs__threshold_ps_words_both_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		top_procs__threshold_ps_words_both_3_0_i8);
MR_def_label(top_procs__threshold_ps_words_both_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		top_procs__threshold_ps_words_both_3_0_i9);
MR_def_label(top_procs__threshold_ps_words_both_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(3));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_words_both_3_0_i10);
MR_def_label(top_procs__threshold_ps_words_both_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word(((MR_Float) 100.00000000000000 * MR_word_to_float(MR_tempr1)));
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		top_procs__threshold_ps_words_both_3_0_i11);
MR_def_label(top_procs__threshold_ps_words_both_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_tempr1));
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(top_procs_module43)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_context_2_0);
	MR_init_label2(fn__top_procs__compare_line_groups_by_context_2_0,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_context_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		fn__top_procs__compare_line_groups_by_context_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_context_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_context_2_0_i6);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_r2 = MR_ctfield(0, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_context_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module44)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_name_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 2);
	MR_r2 = MR_ctfield(0, MR_r4, 2);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module45)
	MR_init_entry1(fn__top_procs__compare_groups_fallback_3_0);
	MR_init_label3(fn__top_procs__compare_groups_fallback_3_0,2,6,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_groups_fallback_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__top_procs__compare_groups_fallback_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__top_procs__compare_groups_fallback_3_0_i2);
MR_def_label(fn__top_procs__compare_groups_fallback_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__top_procs__compare_groups_fallback_3_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__top_procs__compare_line_groups_by_context_2_0,
		fn__top_procs__compare_groups_fallback_3_0_i6);
MR_def_label(fn__top_procs__compare_groups_fallback_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__top_procs__compare_groups_fallback_3_0_i12);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 2);
	MR_r2 = MR_ctfield(0, MR_sv(2), 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(fn__top_procs__compare_groups_fallback_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module46)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_calls_2_0);
	MR_init_label2(fn__top_procs__compare_line_groups_by_calls_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_calls_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r3, 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_calls_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_calls_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_calls_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_calls_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module47)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_redos_2_0);
	MR_init_label2(fn__top_procs__compare_line_groups_by_redos_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_redos_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r3, 3);
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__top_procs__compare_line_groups_by_redos_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_redos_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__top_procs__compare_line_groups_by_redos_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_redos_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module48)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_time_self_overall_2_0);
	MR_init_label2(fn__top_procs__compare_line_groups_by_time_self_overall_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_time_self_overall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r3, 3);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_self_overall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_overall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_self_overall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_overall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;

MR_BEGIN_MODULE(top_procs_module49)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_time_self_percall_2_0);
	MR_init_label8(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,2,3,4,5,6,8,9,10)
	MR_init_label5(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,11,12,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_time_self_percall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i11);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i8);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i9);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i10);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i12);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i14);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i15);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_time_self_percall_2_0_i16);
MR_def_label(fn__top_procs__compare_line_groups_by_time_self_percall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module50)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_time_total_overall_2_0);
	MR_init_label4(fn__top_procs__compare_line_groups_by_time_total_overall_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_time_total_overall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_total_overall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_overall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_total_overall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_overall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_total_overall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_overall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_total_overall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_overall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module51)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_time_total_percall_2_0);
	MR_init_label8(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,2,3,4,5,6,7,8,10)
	MR_init_label7(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,11,12,13,14,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_time_total_percall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i6);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i7);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i13);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i10);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i11);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i12);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i14);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i16);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i17);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_time_total_percall_2_0_i18);
MR_def_label(fn__top_procs__compare_line_groups_by_time_total_percall_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module52)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0);
	MR_init_label2(fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r3, 3);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_overall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module53)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0);
	MR_init_label8(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,2,3,4,5,6,8,9,10)
	MR_init_label5(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,11,12,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i11);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i8);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i9);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i10);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i12);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i14);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i15);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0_i16);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_self_percall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module54)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0);
	MR_init_label4(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_overall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module55)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0);
	MR_init_label8(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,2,3,4,5,6,7,8,10)
	MR_init_label7(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,11,12,13,14,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i6);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i7);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i13);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i10);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i11);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i12);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i14);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i16);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i17);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0_i18);
MR_def_label(fn__top_procs__compare_line_groups_by_callseqs_total_percall_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module56)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0);
	MR_init_label2(fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r3, 3);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_overall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module57)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0);
	MR_init_label8(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,2,3,4,5,6,8,9,10)
	MR_init_label5(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,11,12,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i11);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i8);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i9);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i10);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i12);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i14);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i15);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0_i16);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_self_percall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module58)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0);
	MR_init_label4(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_overall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module59)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0);
	MR_init_label8(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,2,3,4,5,6,7,8,10)
	MR_init_label7(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,11,12,13,14,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i6);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i7);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i13);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i10);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i11);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i12);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i14);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i16);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i17);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0_i18);
MR_def_label(fn__top_procs__compare_line_groups_by_allocs_total_percall_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module60)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_words_self_overall_2_0);
	MR_init_label2(fn__top_procs__compare_line_groups_by_words_self_overall_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_words_self_overall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r3, 3);
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_line_groups_by_words_self_overall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_overall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_line_groups_by_words_self_overall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_overall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module61)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_words_self_percall_2_0);
	MR_init_label8(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,2,3,4,5,6,8,9,10)
	MR_init_label5(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,11,12,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_words_self_percall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i11);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i8);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i9);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i10);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i12);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i14);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i15);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_words_self_percall_2_0_i16);
MR_def_label(fn__top_procs__compare_line_groups_by_words_self_percall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module62)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_words_total_overall_2_0);
	MR_init_label4(fn__top_procs__compare_line_groups_by_words_total_overall_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_words_total_overall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_line_groups_by_words_total_overall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_overall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		fn__top_procs__compare_line_groups_by_words_total_overall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_overall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_line_groups_by_words_total_overall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_overall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		fn__top_procs__compare_line_groups_by_words_total_overall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_overall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module63)
	MR_init_entry1(fn__top_procs__compare_line_groups_by_words_total_percall_2_0);
	MR_init_label8(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,2,3,4,5,6,7,8,10)
	MR_init_label7(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,11,12,13,14,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__top_procs__compare_line_groups_by_words_total_percall_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i2);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i3);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i4);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i5);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i6);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i7);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i13);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i10);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i11);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i12);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i14);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i16);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i17);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__top_procs__compare_line_groups_by_words_total_percall_2_0_i18);
MR_def_label(fn__top_procs__compare_line_groups_by_words_total_percall_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__add_own_to_own_2_0);
MR_decl_entry(fn__measurements__add_inherit_to_inherit_2_0);

MR_BEGIN_MODULE(top_procs_module64)
	MR_init_entry1(top_procs__accumulate_line_group_measurements_5_0);
	MR_init_label2(top_procs__accumulate_line_group_measurements_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__accumulate_line_group_measurements_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r4;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		top_procs__accumulate_line_group_measurements_5_0_i2);
MR_def_label(top_procs__accumulate_line_group_measurements_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		top_procs__accumulate_line_group_measurements_5_0_i3);
MR_def_label(top_procs__accumulate_line_group_measurements_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module65)
	MR_init_entry1(__Unify___top_procs__compare_line_groups_func_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___top_procs__compare_line_groups_func_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(f_116_111_112_95_112_114_111_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_111_112_95_112_114_111_99_115_95_95_99_111_109_112_97_114_101_95_108_105_110_101_95_103_114_111_117_112_115_95_102_117_110_99_95_50_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module66)
	MR_init_entry1(__Compare___top_procs__compare_line_groups_func_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___top_procs__compare_line_groups_func_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(f_116_111_112_95_112_114_111_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_111_112_95_112_114_111_99_115_95_95_99_111_109_112_97_114_101_95_108_105_110_101_95_103_114_111_117_112_115_95_102_117_110_99_95_50_95_95_91_49_44_32_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(top_procs_module67)
	MR_init_entry1(__Unify___top_procs__compare_proc_statics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___top_procs__compare_proc_statics_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(top_procs_module68)
	MR_init_entry1(__Compare___top_procs__compare_proc_statics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___top_procs__compare_proc_statics_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurements__own_prof_info_0_0);
MR_decl_entry(__Unify___measurements__inherit_prof_info_0_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(top_procs_module69)
	MR_init_entry1(__Unify___top_procs__line_group_2_0);
	MR_init_label4(__Unify___top_procs__line_group_2_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___top_procs__line_group_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___top_procs__line_group_2_0_i10);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(7) = MR_r2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___top_procs__line_group_2_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___top_procs__line_group_2_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 2);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___top_procs__line_group_2_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 4);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 6);
	MR_r1 = MR_ctfield(0, MR_tempr3, 3);
	MR_r2 = MR_ctfield(0, MR_tempr4, 3);
	}
	MR_np_call_localret_ent(__Unify___measurements__own_prof_info_0_0,
		__Unify___top_procs__line_group_2_0_i4);
MR_def_label(__Unify___top_procs__line_group_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___top_procs__line_group_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___measurements__inherit_prof_info_0_0,
		__Unify___top_procs__line_group_2_0_i6);
MR_def_label(__Unify___top_procs__line_group_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___top_procs__line_group_2_0_i1);
	}
	if ((strcmp((char *)MR_sv(2), (char *)MR_sv(5)) != 0)) {
		MR_GOTO_LAB(__Unify___top_procs__line_group_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___top_procs__line_group_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___top_procs__line_group_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___measurements__own_prof_info_0_0);
MR_decl_entry(__Compare___measurements__inherit_prof_info_0_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(top_procs_module70)
	MR_init_entry1(__Compare___top_procs__line_group_2_0);
	MR_init_label8(__Compare___top_procs__line_group_2_0,3,2,5,9,13,17,21,25)
	MR_init_label1(__Compare___top_procs__line_group_2_0,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___top_procs__line_group_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___top_procs__line_group_2_0_i3);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(13) = MR_r2;
	MR_GOTO_LAB(__Compare___top_procs__line_group_2_0_i2);
MR_def_label(__Compare___top_procs__line_group_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___top_procs__line_group_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___top_procs__line_group_2_0_i5);
MR_def_label(__Compare___top_procs__line_group_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___top_procs__line_group_2_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___top_procs__line_group_2_0_i9);
MR_def_label(__Compare___top_procs__line_group_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___top_procs__line_group_2_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___top_procs__line_group_2_0_i13);
MR_def_label(__Compare___top_procs__line_group_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___top_procs__line_group_2_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___measurements__own_prof_info_0_0,
		__Compare___top_procs__line_group_2_0_i17);
MR_def_label(__Compare___top_procs__line_group_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___top_procs__line_group_2_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___measurements__inherit_prof_info_0_0,
		__Compare___top_procs__line_group_2_0_i21);
MR_def_label(__Compare___top_procs__line_group_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___top_procs__line_group_2_0_i61);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___top_procs__line_group_2_0_i25);
MR_def_label(__Compare___top_procs__line_group_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___top_procs__line_group_2_0_i61);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___top_procs__line_group_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module71)
	MR_init_entry1(top_procs__IntroducedFrom__pred__find_top_procs__105__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_procs__IntroducedFrom__pred__find_top_procs__105__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(top_procs__IntroducedFrom__pred__find_top_procs__105__1_4_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module72)
	MR_init_entry1(f_116_111_112_95_112_114_111_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_111_112_95_112_114_111_99_115_95_95_99_111_109_112_97_114_101_95_108_105_110_101_95_103_114_111_117_112_115_95_102_117_110_99_95_50_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_111_112_95_112_114_111_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_111_112_95_112_114_111_99_115_95_95_99_111_109_112_97_114_101_95_108_105_110_101_95_103_114_111_117_112_115_95_102_117_110_99_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_procs_module73)
	MR_init_entry1(f_116_111_112_95_112_114_111_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_111_112_95_112_114_111_99_115_95_95_99_111_109_112_97_114_101_95_108_105_110_101_95_103_114_111_117_112_115_95_102_117_110_99_95_50_95_95_91_49_44_32_50_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_111_112_95_112_114_111_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_111_112_95_112_114_111_99_115_95_95_99_111_109_112_97_114_101_95_108_105_110_101_95_103_114_111_117_112_115_95_102_117_110_99_95_50_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__top_procs_maybe_bunch_0(void)
{
	top_procs_module0();
	top_procs_module1();
	top_procs_module2();
	top_procs_module3();
	top_procs_module4();
	top_procs_module5();
	top_procs_module6();
	top_procs_module7();
	top_procs_module8();
	top_procs_module9();
	top_procs_module10();
	top_procs_module11();
	top_procs_module12();
	top_procs_module13();
	top_procs_module14();
	top_procs_module15();
	top_procs_module16();
	top_procs_module17();
	top_procs_module18();
	top_procs_module19();
	top_procs_module20();
	top_procs_module21();
	top_procs_module22();
	top_procs_module23();
	top_procs_module24();
	top_procs_module25();
	top_procs_module26();
	top_procs_module27();
	top_procs_module28();
	top_procs_module29();
	top_procs_module30();
	top_procs_module31();
	top_procs_module32();
	top_procs_module33();
	top_procs_module34();
	top_procs_module35();
	top_procs_module36();
	top_procs_module37();
	top_procs_module38();
	top_procs_module39();
}

static void mercury__top_procs_maybe_bunch_1(void)
{
	top_procs_module40();
	top_procs_module41();
	top_procs_module42();
	top_procs_module43();
	top_procs_module44();
	top_procs_module45();
	top_procs_module46();
	top_procs_module47();
	top_procs_module48();
	top_procs_module49();
	top_procs_module50();
	top_procs_module51();
	top_procs_module52();
	top_procs_module53();
	top_procs_module54();
	top_procs_module55();
	top_procs_module56();
	top_procs_module57();
	top_procs_module58();
	top_procs_module59();
	top_procs_module60();
	top_procs_module61();
	top_procs_module62();
	top_procs_module63();
	top_procs_module64();
	top_procs_module65();
	top_procs_module66();
	top_procs_module67();
	top_procs_module68();
	top_procs_module69();
	top_procs_module70();
	top_procs_module71();
	top_procs_module72();
	top_procs_module73();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__top_procs__init(void);
void mercury__top_procs__init_type_tables(void);
void mercury__top_procs__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__top_procs__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__top_procs__init_complexity_procs(void);
#endif

void mercury__top_procs__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__top_procs_maybe_bunch_0();
	mercury__top_procs_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_top_procs__type_ctor_info_line_group_2,
		top_procs__line_group_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_top_procs__type_ctor_info_compare_proc_statics_0,
		top_procs__compare_proc_statics_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_top_procs__type_ctor_info_compare_line_groups_func_2,
		top_procs__compare_line_groups_func_2_0);
	mercury__top_procs__init_debugger();
}

void mercury__top_procs__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_top_procs__type_ctor_info_line_group_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_top_procs__type_ctor_info_compare_proc_statics_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_top_procs__type_ctor_info_compare_line_groups_func_2);
	}
}


void mercury__top_procs__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__top_procs__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__top_procs__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
