/*
** Automatically generated from `handle_options.m'
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
INIT mercury__libs__handle_options__init
REQUIRED_INIT mercury__libs__handle_options__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "libs.handle_options.c"
#include "libs.handle_options.mh"

#line 28 "libs.handle_options.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 32 "libs.handle_options.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 36 "libs.handle_options.c"
#line 56 "../library/dir.int"
#include "dir.mh"

#line 40 "libs.handle_options.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "libs.handle_options.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "libs.handle_options.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 52 "libs.handle_options.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 56 "libs.handle_options.c"
#line 57 "libs.handle_options.c"
#ifndef LIBS__HANDLE_OPTIONS_DECL_GUARD
#define LIBS__HANDLE_OPTIONS_DECL_GUARD

#line 61 "libs.handle_options.c"
#line 2308 "handle_options.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#else
    extern MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 72 "libs.handle_options.c"
#line 73 "libs.handle_options.c"

#endif
#line 76 "libs.handle_options.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
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
	MR_Code * f2;
	MR_Integer f3;
	MR_String f4;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_common_19[];

struct mercury_type_20 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_20 mercury_common_20[];

struct mercury_type_6 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_vector_common_6_0[];

MR_STATIC_LINKAGE const struct mercury_type_6 mercury_vector_common_6_1[];

MR_STATIC_LINKAGE const struct mercury_type_20 mercury_vector_common_20_0[];

struct mercury_type_21 {
	MR_String f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Integer f5;
};
MR_STATIC_LINKAGE const struct mercury_type_21 mercury_vector_common_21_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__handle_options__type_ctor_info_grade_component_0;
MR_decl_label10(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0, 1,7,9,11,8,4,16,19,20,22)
MR_decl_label2(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0, 18,24)
MR_decl_label6(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0, 2,5,7,11,12,1)
MR_decl_label2(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0, 2,1)
MR_decl_label10(libs__handle_options__check_option_values_18_0, 2,6,4,8,9,10,14,12,16,17)
MR_decl_label10(libs__handle_options__check_option_values_18_0, 18,22,20,24,25,26,27,29,30,31)
MR_decl_label10(libs__handle_options__check_option_values_18_0, 35,33,37,38,39,43,41,45,46,47)
MR_decl_label10(libs__handle_options__check_option_values_18_0, 51,48,52,53,54,60,64,63,56,66)
MR_decl_label10(libs__handle_options__check_option_values_18_0, 67,69,70,74,72,76,77,78,79,83)
MR_decl_label10(libs__handle_options__check_option_values_18_0, 81,85,86,87,88,94,97,92,98,100)
MR_decl_label10(libs__handle_options__check_option_values_18_0, 101,105,103,107,108,109,110,115,112,117)
MR_decl_label10(libs__handle_options__check_option_values_18_0, 118,119,124,130,132,134,136,121,140,142)
MR_decl_label9(libs__handle_options__check_option_values_18_0, 143,144,149,152,153,154,151,145,155)
MR_decl_label3(libs__handle_options__compute_grade_2_0, 2,5,7)
MR_decl_label5(libs__handle_options__construct_string_2_0, 3,5,40,11,15)
MR_decl_label10(libs__handle_options__convert_dump_alias_2_0, 3,22,5,6,7,8,9,10,11,12)
MR_decl_label8(libs__handle_options__convert_dump_alias_2_0, 13,14,15,16,17,18,19,20)
MR_decl_label5(libs__handle_options__convert_grade_option_3_0, 6,7,8,10,1)
MR_decl_label4(libs__handle_options__convert_option_table_result_to_globals_5_0, 3,6,8,10)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 2,3,6,743,8,10,11,13,16,12)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 18,20,21,19,22,26,28,29,30,31)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 32,33,27,37,38,42,750,44,45,49)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 47,50,53,59,60,62,64,65,67,68)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 69,70,72,73,74,75,76,77,79,78)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 84,55,85,86,87,91,94,96,98,101)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 105,106,108,110,111,113,114,115,116,117)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 120,122,123,125,127,128,130,131,132,133)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 134,136,137,138,139,140,141,144,146,93)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 148,149,151,152,153,155,156,157,158,159)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 160,161,164,163,162,165,166,167,168,169)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 170,171,172,757,174,175,176,178,180,173)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 182,183,187,184,191,190,193,194,195,196)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 200,197,201,202,203,204,205,206,207,208)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 209,210,211,212,213,214,215,216,217,218)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 219,220,221,222,223,224,225,226,227,228)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 229,230,231,232,233,234,235,236,237,238)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 239,240,241,242,243,244,245,246,251,247)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 252,253,254,255,256,259,261,262,264,258)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 265,266,267,269,268,270,271,273,274,272)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 275,276,280,279,283,278,284,285,286,287)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 289,290,291,292,294,288,295,296,297,298)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 299,300,301,302,303,304,308,315,312,318)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 319,320,322,325,326,327,329,330,331,332)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 333,334,335,336,328,337,338,343,339,344)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 345,346,347,348,349,351,352,353,354,355)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 356,357,358,359,360,362,367,368,369,370)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 371,372,373,374,375,376,377,378,379,380)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 393,365,364,396,397,398,399,400,401,402)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 404,403,361,409,410,411,412,414,415,418)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 419,420,421,423,424,426,413,427,428,432)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 429,436,435,439,441,442,434,444,450,449)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 448,453,447,445,455,456,457,458,460,462)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 463,464,465,466,469,470,471,472,473,474)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 475,476,477,478,484,485,490,486,491,492)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 493,494,495,496,497,498,499,500,501,502)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 503,508,504,509,514,510,515,516,517,518)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 519,523,525,527,529,522,532,521,533,534)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 535,536,537,538,539,540,541,542,543,544)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 545,546,548,549,550,551,552,553,556,557)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 558,561,547,562,564,565,566,569,563,570)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 575,578,579,582,571,583,584,585,587,589)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 590,591,593,594,595,597,599,600,601,603)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 604,605,607,609,610,611,613,615,616,617)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 619,586,620,622,623,624,625,627,621,628)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 629,630,634,636,637,638,639,640,633,642)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 643,644,646,649,650,651,653,654,655,657)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 658,660,661,663,665,666,669,668,675,676)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 677,678,679,680,684,685,686,687,690,667)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 691,692,693,694,695,701,703,705,708,709)
MR_decl_label10(libs__handle_options__convert_options_to_globals_18_0, 711,696,713,717,715,714,718,721,725,719)
MR_decl_label8(libs__handle_options__convert_options_to_globals_18_0, 726,728,731,727,736,738,740,741)
MR_decl_label10(libs__handle_options__disable_smart_recompilation_5_0, 2,4,5,7,8,9,10,11,16,13)
MR_decl_label1(libs__handle_options__display_compiler_version_2_0, 2)
MR_decl_label10(libs__handle_options__filter_grade_7_0, 3,4,7,9,11,12,10,18,16,2)
MR_decl_label2(libs__handle_options__filter_grade_7_0, 23,25)
MR_decl_label1(libs__handle_options__generate_default_globals_3_0, 2)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 3,84,5,6,7,8,9,10,11,12)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 13,17,18,19,20,21,22,23,24,25)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 26,27,28,32,33,34,35,36,37,38)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 42,46,50,54,55,56,57,58,59,60)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 64,65,69,70,71,72,73,74,78,82)
MR_decl_label3(libs__handle_options__grade_component_table_5_2, 32,33,34)
MR_decl_label5(libs__handle_options__grade_directory_component_2_0, 2,4,6,7,3)
MR_decl_label3(libs__handle_options__grade_start_values_1_0, 42,43,44)
MR_decl_label10(libs__handle_options__handle_given_options_8_0, 2,3,6,7,8,9,10,11,12,13)
MR_decl_label10(libs__handle_options__handle_given_options_8_0, 14,15,16,17,18,19,20,22,23,39)
MR_decl_label6(libs__handle_options__handle_given_options_8_0, 40,41,45,42,5,47)
MR_decl_label9(libs__handle_options__long_usage_2_0, 2,6,7,8,9,10,11,12,13)
MR_decl_label10(libs__handle_options__maybe_disable_smart_recompilation_8_0, 2,5,7,8,10,11,12,13,14,26)
MR_decl_label2(libs__handle_options__maybe_disable_smart_recompilation_8_0, 16,3)
MR_decl_label3(libs__handle_options__must_contain_2_0, 6,9,5)
MR_decl_label3(libs__handle_options__must_not_contain_2_0, 6,7,5)
MR_decl_label2(libs__handle_options__option_implies_5_0, 2,4)
MR_decl_label2(libs__handle_options__option_neg_implies_5_0, 2,4)
MR_decl_label4(libs__handle_options__option_requires_7_0, 2,3,9,5)
MR_decl_label8(libs__handle_options__postprocess_options_libgrades_4_0, 2,3,6,8,9,12,15,17)
MR_decl_label10(libs__handle_options__postprocess_options_lowlevel_2_0, 3,5,6,4,7,9,10,8,11,13)
MR_decl_label10(libs__handle_options__postprocess_options_lowlevel_2_0, 14,12,15,17,18,16,19,20,21,25)
MR_decl_label10(libs__handle_options__postprocess_options_lowlevel_2_0, 24,28,30,23,31,32,35,36,37,38)
MR_decl_label6(libs__handle_options__split_grade_string_2_2_0, 28,5,6,8,10,1)
MR_decl_label6(libs__handle_options__string_to_grade_component_6_0, 4,2,7,8,9,11)
MR_decl_label3(libs__handle_options__usage_2_0, 4,7,14)
MR_decl_label3(libs__handle_options__usage_errors_3_0, 2,4,5)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0, 2)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0, 2,3)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0, 2)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0, 2)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0, 2,3)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0, 2)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0, 2)
MR_decl_static(libs__handle_options__process_given_options_6_0)
MR_decl_static(libs__handle_options__add_error_3_0)
MR_decl_static(libs__handle_options__convert_dump_alias_2_0)
MR_decl_static(libs__handle_options__check_option_values_18_0)
MR_decl_static(libs__handle_options__construct_string_2_0)
MR_def_extern_entry(libs__handle_options__compute_grade_2_0)
MR_def_extern_entry(libs__handle_options__grade_directory_component_2_0)
MR_decl_static(libs__handle_options__option_implies_5_0)
MR_decl_static(libs__handle_options__postprocess_options_lowlevel_2_0)
MR_decl_static(libs__handle_options__option_neg_implies_5_0)
MR_decl_static(libs__handle_options__option_requires_7_0)
MR_decl_static(libs__handle_options__disable_smart_recompilation_5_0)
MR_decl_static(libs__handle_options__maybe_disable_smart_recompilation_8_0)
MR_decl_static(libs__handle_options__postprocess_options_libgrades_4_0)
MR_decl_static(libs__handle_options__convert_options_to_globals_18_0)
MR_def_extern_entry(libs__handle_options__generate_default_globals_3_0)
MR_def_extern_entry(libs__handle_options__handle_given_options_8_0)
MR_decl_static(libs__handle_options__convert_option_table_result_to_globals_5_0)
MR_def_extern_entry(libs__handle_options__separate_option_args_5_0)
MR_def_extern_entry(libs__handle_options__display_compiler_version_2_0)
MR_decl_static(libs__handle_options__lock_already_printed_usage_0_0)
MR_decl_static(libs__handle_options__unlock_already_printed_usage_0_0)
MR_decl_static(libs__handle_options__unsafe_get_already_printed_usage_1_0)
MR_decl_static(libs__handle_options__unsafe_set_already_printed_usage_1_0)
MR_def_extern_entry(libs__handle_options__usage_2_0)
MR_def_extern_entry(libs__handle_options__usage_errors_3_0)
MR_def_extern_entry(libs__handle_options__long_usage_2_0)
MR_decl_static(libs__handle_options__split_grade_string_2_2_0)
MR_def_extern_entry(libs__handle_options__convert_grade_option_3_0)
MR_decl_static(libs__handle_options__pre_initialise_mutable_already_printed_usage_0_0)
MR_decl_static(libs__handle_options__initialise_mutable_already_printed_usage_0_0)
MR_decl_static(libs__handle_options__grade_component_table_5_0)
MR_decl_static(libs__handle_options__grade_component_table_5_2)
MR_decl_static(libs__handle_options__string_to_grade_component_6_0)
MR_decl_static(libs__handle_options__filter_grade_7_0)
MR_decl_static(libs__handle_options__must_contain_2_0)
MR_decl_static(libs__handle_options__must_not_contain_2_0)
MR_decl_static(libs__handle_options__grade_start_values_1_0)
MR_decl_static(libs__handle_options__char_is_not_2_0)
MR_decl_static(__Unify___libs__handle_options__grade_component_0_0)
MR_decl_static(__Compare___libs__handle_options__grade_component_0_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__check_option_values__421__1_1_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__2_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__add_option_list__2549__1_3_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__reset_grade_options__2874__1_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__compute_grade_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__split_grade_string_2_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__filter_grade_7_0_1;
static const struct mercury_type_0 mercury_common_0[15] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(libs__options, option)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(libs__options, option)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__compute_grade_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,0),
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,1),
MR_COMMON(3,1)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,1),
MR_COMMON(3,1)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(17,0),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_10,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_11,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(libs__options, option)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(libs__options, option)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__split_grade_string_2_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__filter_grade_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

MR_decl_entry(libs__options__short_option_2_0);
MR_decl_entry(libs__options__long_option_2_0);
MR_decl_entry(libs__options__option_defaults_2_0);
MR_decl_entry(libs__options__special_handler_4_0);
static const struct mercury_type_1 mercury_common_1[19] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(libs__options__short_option_2_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(libs__options__long_option_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(libs__options__option_defaults_2_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(libs__options__special_handler_4_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__check_option_values__421__1_1_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(libs__handle_options__must_contain_2_0),
0
},
{
MR_COMMON(0,5),
MR_ENTRY_AP(libs__handle_options__must_not_contain_2_0),
0
},
{
MR_COMMON(0,8),
MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0),
0
},
{
MR_COMMON(0,9),
MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0),
0
},
{
MR_COMMON(0,10),
MR_ENTRY_AP(libs__options__short_option_2_0),
0
},
{
MR_COMMON(0,11),
MR_ENTRY_AP(libs__options__long_option_2_0),
0
},
{
MR_COMMON(0,12),
MR_ENTRY_AP(libs__options__option_defaults_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(libs__options__special_handler_4_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(libs__handle_options__grade_start_values_1_0),
0
},
{
MR_COMMON(16,8),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__reset_grade_options__2874__1_3_0),
0
},
{
MR_COMMON(19,0),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0),
0
},
{
MR_COMMON(0,14),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0),
0
},
{
MR_COMMON(16,9),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__add_option_list__2549__1_3_0),
0
},
{
MR_COMMON(16,10),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__add_option_list__2549__1_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__handle_options__type_ctor_info_grade_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
static const struct mercury_type_2 mercury_common_2[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(libs__handle_options, grade_component),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(libs__handle_options, grade_component),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_maybe_option_table_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_3 mercury_common_3[114] =
{
{
{
MR_CTOR1_ADDR(getopt_io, maybe_option_table),
MR_CTOR0_ADDR(libs__options, option)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(libs__handle_options, grade_component)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(libs__handle_options, grade_component)
}
},
{
{
MR_TAG_COMMON(0,15,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,3),
MR_TAG_COMMON(1,3,6)
}
},
{
{
MR_TAG_COMMON(0,15,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,5),
MR_TAG_COMMON(1,3,8)
}
},
{
{
MR_TAG_COMMON(0,15,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,7),
MR_TAG_COMMON(1,3,10)
}
},
{
{
MR_TAG_COMMON(0,15,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,7),
MR_TAG_COMMON(1,3,12)
}
},
{
{
MR_TAG_COMMON(0,15,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,10),
MR_TAG_COMMON(1,3,14)
}
},
{
{
MR_TAG_COMMON(0,15,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,13),
MR_TAG_COMMON(1,3,17)
}
},
{
{
MR_TAG_COMMON(0,15,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,15),
MR_TAG_COMMON(1,3,19)
}
},
{
{
MR_TAG_COMMON(0,15,16),
MR_TAG_COMMON(1,3,20)
}
},
{
{
MR_TAG_COMMON(0,15,17),
MR_TAG_COMMON(1,3,21)
}
},
{
{
MR_TAG_COMMON(0,15,18),
MR_TAG_COMMON(1,3,22)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,23)
}
},
{
{
MR_TAG_COMMON(3,13,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,21),
MR_TAG_COMMON(1,3,26)
}
},
{
{
MR_TAG_COMMON(0,15,22),
MR_TAG_COMMON(1,3,27)
}
},
{
{
MR_TAG_COMMON(0,15,23),
MR_TAG_COMMON(1,3,26)
}
},
{
{
MR_TAG_COMMON(0,15,22),
MR_TAG_COMMON(1,3,29)
}
},
{
{
MR_TAG_COMMON(0,15,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,23),
MR_TAG_COMMON(1,3,31)
}
},
{
{
MR_TAG_COMMON(0,15,22),
MR_TAG_COMMON(1,3,32)
}
},
{
{
MR_TAG_COMMON(0,15,21),
MR_TAG_COMMON(1,3,31)
}
},
{
{
MR_TAG_COMMON(0,15,22),
MR_TAG_COMMON(1,3,34)
}
},
{
{
MR_TAG_COMMON(0,15,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,26),
MR_TAG_COMMON(1,3,36)
}
},
{
{
MR_TAG_COMMON(0,15,27),
MR_TAG_COMMON(1,3,37)
}
},
{
{
MR_TAG_COMMON(0,15,28),
MR_TAG_COMMON(1,3,38)
}
},
{
{
MR_TAG_COMMON(0,15,29),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,26),
MR_TAG_COMMON(1,3,40)
}
},
{
{
MR_TAG_COMMON(0,15,27),
MR_TAG_COMMON(1,3,41)
}
},
{
{
MR_TAG_COMMON(0,15,30),
MR_TAG_COMMON(1,3,42)
}
},
{
{
MR_TAG_COMMON(0,15,31),
MR_TAG_COMMON(1,3,37)
}
},
{
{
MR_TAG_COMMON(0,15,30),
MR_TAG_COMMON(1,3,44)
}
},
{
{
MR_TAG_COMMON(0,15,32),
MR_TAG_COMMON(1,3,36)
}
},
{
{
MR_TAG_COMMON(0,15,31),
MR_TAG_COMMON(1,3,46)
}
},
{
{
MR_TAG_COMMON(0,15,28),
MR_TAG_COMMON(1,3,47)
}
},
{
{
MR_TAG_COMMON(0,15,28),
MR_TAG_COMMON(1,3,44)
}
},
{
{
MR_TAG_COMMON(0,15,33),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,35),
MR_TAG_COMMON(1,3,21)
}
},
{
{
MR_TAG_COMMON(0,15,18),
MR_TAG_COMMON(1,3,52)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,53)
}
},
{
{
MR_TAG_COMMON(0,15,36),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,37),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,38),
MR_TAG_COMMON(1,3,56)
}
},
{
{
MR_TAG_COMMON(0,15,39),
MR_TAG_COMMON(1,3,57)
}
},
{
{
MR_TAG_COMMON(0,15,40),
MR_TAG_COMMON(1,3,56)
}
},
{
{
MR_TAG_COMMON(0,15,41),
MR_TAG_COMMON(1,3,59)
}
},
{
{
MR_TAG_COMMON(0,15,30),
MR_TAG_COMMON(1,3,47)
}
},
{
{
MR_TAG_COMMON(0,15,42),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,43),
MR_TAG_COMMON(1,3,62)
}
},
{
{
MR_TAG_COMMON(0,15,44),
MR_TAG_COMMON(1,3,52)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,64)
}
},
{
{
MR_TAG_COMMON(0,15,45),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,46),
MR_TAG_COMMON(1,3,66)
}
},
{
{
MR_TAG_COMMON(0,15,15),
MR_TAG_COMMON(1,3,67)
}
},
{
{
MR_TAG_COMMON(0,15,35),
MR_TAG_COMMON(1,3,68)
}
},
{
{
MR_TAG_COMMON(0,15,18),
MR_TAG_COMMON(1,3,69)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,70)
}
},
{
{
MR_TAG_COMMON(3,13,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,46),
MR_TAG_COMMON(1,3,20)
}
},
{
{
MR_TAG_COMMON(0,15,35),
MR_TAG_COMMON(1,3,73)
}
},
{
{
MR_TAG_COMMON(0,15,18),
MR_TAG_COMMON(1,3,74)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,75)
}
},
{
{
MR_TAG_COMMON(3,13,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,15),
MR_TAG_COMMON(1,3,66)
}
},
{
{
MR_TAG_COMMON(0,15,46),
MR_TAG_COMMON(1,3,78)
}
},
{
{
MR_TAG_COMMON(0,15,35),
MR_TAG_COMMON(1,3,79)
}
},
{
{
MR_TAG_COMMON(0,15,18),
MR_TAG_COMMON(1,3,80)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,81)
}
},
{
{
MR_TAG_COMMON(0,15,47),
MR_TAG_COMMON(1,3,19)
}
},
{
{
MR_TAG_COMMON(0,15,46),
MR_TAG_COMMON(1,3,83)
}
},
{
{
MR_TAG_COMMON(0,15,35),
MR_TAG_COMMON(1,3,84)
}
},
{
{
MR_TAG_COMMON(0,15,18),
MR_TAG_COMMON(1,3,85)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,86)
}
},
{
{
MR_TAG_COMMON(3,13,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,13,2),
MR_TAG_COMMON(1,3,88)
}
},
{
{
MR_TAG_COMMON(0,15,47),
MR_TAG_COMMON(1,3,66)
}
},
{
{
MR_TAG_COMMON(0,15,46),
MR_TAG_COMMON(1,3,90)
}
},
{
{
MR_TAG_COMMON(0,15,35),
MR_TAG_COMMON(1,3,91)
}
},
{
{
MR_TAG_COMMON(0,15,18),
MR_TAG_COMMON(1,3,92)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,93)
}
},
{
{
MR_TAG_COMMON(0,15,48),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,49),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,44),
MR_TAG_COMMON(1,3,22)
}
},
{
{
MR_TAG_COMMON(0,15,19),
MR_TAG_COMMON(1,3,97)
}
},
{
{
MR_TAG_COMMON(0,15,50),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,51),
MR_TAG_COMMON(1,3,99)
}
},
{
{
MR_TAG_COMMON(3,13,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,52),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,38),
MR_TAG_COMMON(1,3,102)
}
},
{
{
MR_TAG_COMMON(0,15,39),
MR_TAG_COMMON(1,3,103)
}
},
{
{
MR_TAG_COMMON(0,15,40),
MR_TAG_COMMON(1,3,102)
}
},
{
{
MR_TAG_COMMON(0,15,41),
MR_TAG_COMMON(1,3,105)
}
},
{
{
MR_TAG_COMMON(0,15,53),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,54),
MR_TAG_COMMON(1,3,107)
}
},
{
{
MR_TAG_COMMON(0,15,55),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,15,54),
MR_TAG_COMMON(1,3,109)
}
},
{
{
MR_TAG_COMMON(0,15,56),
MR_TAG_COMMON(1,3,64)
}
},
{
{
MR_TAG_COMMON(0,15,56),
MR_TAG_COMMON(1,3,97)
}
},
{
{
MR_TAG_COMMON(0,15,57),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_special_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__usage_errors_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, special_data),
MR_COMMON(2,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, special_data),
MR_COMMON(2,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__usage_errors_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
MR_TAG_COMMON(0,1,0),
MR_TAG_COMMON(0,1,1),
MR_TAG_COMMON(0,1,2),
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_TAG_COMMON(0,1,9),
MR_TAG_COMMON(0,1,10),
MR_TAG_COMMON(0,1,11),
MR_TAG_COMMON(0,1,12)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__check_option_values_18_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_1;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__check_option_values_18_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(2,5)
},
};

static const struct mercury_type_8 mercury_common_8[5] =
{
{
1
},
{
0
},
{
999999
},
{
13
},
{
14
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_2;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
MR_COMMON(9,0),
MR_ENTRY_AP(libs__handle_options__string_to_grade_component_6_0),
1,
MR_string_const("included", 8)
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(libs__handle_options__string_to_grade_component_6_0),
1,
MR_string_const("excluded", 8)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
MR_COMMON(3,3),
MR_COMMON(3,3)
},
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_6;
static const struct mercury_type_12 mercury_common_12[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(11,0),
MR_COMMON(3,1),
MR_STRING_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_6,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(11,0),
MR_COMMON(3,1),
MR_STRING_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
};

static const struct mercury_type_13 mercury_common_13[12] =
{
{
0,
MR_string_const("automatic", 9)
},
{
0,
MR_string_const("shared", 6)
},
{
0,
MR_string_const("c", 1)
},
{
0,
MR_string_const("mps", 3)
},
{
0,
MR_string_const("java", 4)
},
{
0,
MR_string_const("il", 2)
},
{
0,
MR_string_const("asm", 3)
},
{
0,
MR_string_const("boehm_debug", 11)
},
{
0,
MR_string_const("boehm", 5)
},
{
0,
MR_string_const("erlang", 6)
},
{
0,
MR_string_const("accurate", 8)
},
{
0,
MR_string_const("none", 4)
},
};

static const struct mercury_type_14 mercury_common_14[12] =
{
{
MR_string_const("shared", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("static", 6),
MR_TAG_COMMON(1,14,0)
},
{
MR_string_const("c", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("erlang", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("csharp", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("il", 2),
MR_TAG_COMMON(1,14,4)
},
{
MR_string_const("java", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("Copyright (C) 1993-2009 The University of Melbourne\n", 52),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,14,7)
},
{
MR_string_const("Use \140mmc --help\' for more information.\n", 39),
MR_tbmkword(0, 0)
},
{
MR_string_const("Usage: mmc [<options>] <arguments>\n", 35),
MR_TAG_COMMON(1,14,9)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_15 mercury_common_15[63] =
{
{
3,
MR_TAG_COMMON(1,14,1)
},
{
2,
MR_tbmkword(0, 0)
},
{
189,
MR_TAG_COMMON(1,8,1)
},
{
188,
MR_TAG_COMMON(1,8,0)
},
{
189,
MR_TAG_COMMON(1,8,0)
},
{
188,
MR_TAG_COMMON(1,8,1)
},
{
194,
MR_TAG_COMMON(1,8,0)
},
{
193,
MR_TAG_COMMON(1,8,0)
},
{
194,
MR_TAG_COMMON(1,8,1)
},
{
202,
MR_TAG_COMMON(1,8,0)
},
{
201,
MR_TAG_COMMON(1,8,1)
},
{
207,
MR_TAG_COMMON(1,8,0)
},
{
215,
MR_TAG_COMMON(1,8,0)
},
{
198,
MR_TAG_COMMON(1,8,0)
},
{
224,
MR_TAG_COMMON(1,8,1)
},
{
225,
MR_TAG_COMMON(1,8,1)
},
{
223,
MR_TAG_COMMON(1,8,1)
},
{
220,
MR_TAG_COMMON(1,8,0)
},
{
219,
MR_TAG_COMMON(1,8,1)
},
{
221,
MR_TAG_COMMON(1,8,1)
},
{
206,
MR_TAG_COMMON(1,8,0)
},
{
205,
MR_TAG_COMMON(1,8,1)
},
{
203,
MR_TAG_COMMON(1,8,0)
},
{
205,
MR_TAG_COMMON(1,8,0)
},
{
206,
MR_TAG_COMMON(1,8,1)
},
{
173,
MR_TAG_COMMON(1,8,1)
},
{
172,
MR_TAG_COMMON(1,8,1)
},
{
170,
MR_TAG_COMMON(1,8,1)
},
{
171,
MR_TAG_COMMON(1,8,0)
},
{
173,
MR_TAG_COMMON(1,8,0)
},
{
171,
MR_TAG_COMMON(1,8,1)
},
{
170,
MR_TAG_COMMON(1,8,0)
},
{
172,
MR_TAG_COMMON(1,8,0)
},
{
222,
MR_TAG_COMMON(1,8,0)
},
{
192,
MR_TAG_COMMON(1,8,0)
},
{
220,
MR_TAG_COMMON(1,8,1)
},
{
191,
MR_TAG_COMMON(3,13,3)
},
{
197,
MR_TAG_COMMON(1,8,1)
},
{
196,
MR_TAG_COMMON(1,8,1)
},
{
195,
MR_TAG_COMMON(1,8,0)
},
{
196,
MR_TAG_COMMON(1,8,0)
},
{
195,
MR_TAG_COMMON(1,8,1)
},
{
455,
MR_TAG_COMMON(1,8,0)
},
{
271,
MR_TAG_COMMON(1,8,0)
},
{
219,
MR_TAG_COMMON(1,8,0)
},
{
224,
MR_TAG_COMMON(1,8,0)
},
{
223,
MR_TAG_COMMON(1,8,0)
},
{
225,
MR_TAG_COMMON(1,8,0)
},
{
191,
MR_TAG_COMMON(3,13,7)
},
{
191,
MR_TAG_COMMON(3,13,8)
},
{
202,
MR_TAG_COMMON(1,8,1)
},
{
201,
MR_TAG_COMMON(1,8,0)
},
{
197,
MR_TAG_COMMON(1,8,0)
},
{
165,
MR_TAG_COMMON(1,8,0)
},
{
164,
MR_TAG_COMMON(1,8,0)
},
{
165,
MR_TAG_COMMON(1,8,1)
},
{
221,
MR_TAG_COMMON(1,8,0)
},
{
191,
MR_TAG_COMMON(3,13,10)
},
{
192,
MR_TAG_COMMON(1,8,1)
},
{
191,
MR_TAG_COMMON(3,13,11)
},
{
193,
MR_TAG_COMMON(1,8,1)
},
{
222,
MR_TAG_COMMON(1,8,1)
},
{
164,
MR_TAG_COMMON(1,8,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_13;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_2;
static const struct mercury_type_16 mercury_common_16[11] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(11,1),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(11,1),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_12,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(11,1),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_13,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(11,1),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,5),
MR_COMMON(2,0),
MR_COMMON(2,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,5),
MR_COMMON(2,0),
MR_COMMON(2,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,5),
MR_COMMON(2,0),
MR_COMMON(2,0)
}
},
};

static const struct mercury_type_17 mercury_common_17[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_STRING_CTOR_ADDR
},
};

static const struct mercury_type_18 mercury_common_18[1] =
{
{
MR_COMMON(0,13),
MR_ENTRY_AP(libs__handle_options__char_is_not_2_0),
1,
46
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_3;
static const struct mercury_type_19 mercury_common_19[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(2,0),
MR_COMMON(2,0),
MR_COMMON(3,5),
MR_COMMON(3,5)
}
},
};

static const struct mercury_type_20 mercury_common_20[5] =
{
{
MR_TAG_COMMON(1,3,25)
},
{
MR_TAG_COMMON(1,3,72)
},
{
MR_TAG_COMMON(1,3,77)
},
{
MR_TAG_COMMON(1,3,89)
},
{
MR_TAG_COMMON(1,3,101)
},
};

static const struct mercury_type_6 mercury_vector_common_6_0[32] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("most", 4),
3
},
{
MR_string_const("mm", 2),
5
},
{
MR_string_const("allD", 4),
-1
},
{
MR_string_const("detism", 6),
-1
},
{
MR_string_const("all", 3),
7
},
{
MR_string_const("codegen", 7),
-1
},
{
MR_string_const("ALL", 3),
-1
},
{
MR_string_const("min", 3),
-1
},
{
MR_string_const("osv", 3),
8
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("petdr", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("ctgc", 4),
-1
},
{
MR_string_const("mintrans", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("vanessa", 7),
-1
},
{
MR_string_const("paths", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("trans", 5),
-1
},
};

static const struct mercury_type_6 mercury_vector_common_6_1[128] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("agc", 3),
-1
},
{
MR_string_const("reg", 3),
9
},
{
MR_string_const("gcd", 3),
-1
},
{
MR_string_const("tr", 2),
-1
},
{
MR_string_const("rbmmp", 5),
-1
},
{
MR_string_const("hl", 2),
1
},
{
MR_string_const("tsc", 3),
-1
},
{
MR_string_const("asm_fast", 8),
-1
},
{
MR_string_const("profcalls", 9),
-1
},
{
MR_string_const("decldebug", 9),
-1
},
{
MR_string_const("jump", 4),
12
},
{
MR_string_const("gc", 2),
-1
},
{
MR_string_const("mps", 3),
-1
},
{
MR_string_const("none", 4),
-1
},
{
MR_string_const("debug", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("rbmmd", 5),
-1
},
{
MR_string_const("trseg", 5),
-1
},
{
MR_string_const("tsw", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("ssdebug", 7),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("java", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("mm", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("fast", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("il", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("memprof", 7),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("dmmsc", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("dmmos", 5),
-1
},
{
MR_string_const("exts", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("par", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("ll_debug", 8),
-1
},
{
MR_string_const("dmm", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("asm_jump", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("picreg", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("stseg", 5),
2
},
{
MR_string_const("mmsc", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("proftime", 8),
10
},
{
MR_string_const("profdeep", 8),
-1
},
{
MR_string_const("mmos", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("rbmmdp", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("hlc", 3),
-1
},
{
MR_string_const("ilc", 3),
-1
},
{
MR_string_const("spf", 3),
11
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("profall", 7),
13
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("prof", 4),
-1
},
{
MR_string_const("hl_nest", 7),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("rbmm", 4),
15
},
{
MR_string_const("erlang", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("hlc_nest", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
};

static const struct mercury_type_20 mercury_vector_common_20_0[20] =
{
{
MR_TAG_COMMON(0,15,19)
},
{
MR_TAG_COMMON(0,15,18)
},
{
MR_TAG_COMMON(0,15,35)
},
{
MR_TAG_COMMON(0,15,16)
},
{
MR_TAG_COMMON(0,15,14)
},
{
MR_TAG_COMMON(0,15,15)
},
{
MR_TAG_COMMON(0,15,58)
},
{
MR_TAG_COMMON(0,15,59)
},
{
MR_TAG_COMMON(0,15,25)
},
{
MR_TAG_COMMON(0,15,30)
},
{
MR_TAG_COMMON(0,15,27)
},
{
MR_TAG_COMMON(0,15,26)
},
{
MR_TAG_COMMON(0,15,60)
},
{
MR_TAG_COMMON(0,15,41)
},
{
MR_TAG_COMMON(0,15,38)
},
{
MR_TAG_COMMON(0,15,37)
},
{
MR_TAG_COMMON(0,15,61)
},
{
MR_TAG_COMMON(0,15,62)
},
{
MR_TAG_COMMON(0,15,55)
},
{
MR_TAG_COMMON(0,15,10)
},
};

static const struct mercury_type_21 mercury_vector_common_21_0[47] =
{
{
MR_string_const("none", 4),
0,
MR_TAG_COMMON(1,3,54),
MR_TAG_COMMON(1,20,0),
1
},
{
MR_string_const("reg", 3),
0,
MR_TAG_COMMON(1,3,24),
MR_TAG_COMMON(1,20,0),
1
},
{
MR_string_const("jump", 4),
0,
MR_TAG_COMMON(1,3,65),
MR_TAG_COMMON(1,20,0),
1
},
{
MR_string_const("asm_jump", 8),
0,
MR_TAG_COMMON(1,3,111),
MR_TAG_COMMON(1,20,0),
1
},
{
MR_string_const("fast", 4),
0,
MR_TAG_COMMON(1,3,98),
MR_TAG_COMMON(1,20,0),
1
},
{
MR_string_const("asm_fast", 8),
0,
MR_TAG_COMMON(1,3,112),
MR_TAG_COMMON(1,20,0),
1
},
{
MR_string_const("hl", 2),
0,
MR_TAG_COMMON(1,3,82),
MR_TAG_COMMON(1,20,3),
1
},
{
MR_string_const("hlc", 3),
0,
MR_TAG_COMMON(1,3,76),
MR_TAG_COMMON(1,20,3),
1
},
{
MR_string_const("hl_nest", 7),
0,
MR_TAG_COMMON(1,3,94),
MR_TAG_COMMON(1,20,3),
1
},
{
MR_string_const("hlc_nest", 8),
0,
MR_TAG_COMMON(1,3,87),
MR_TAG_COMMON(1,20,3),
1
},
{
MR_string_const("il", 2),
0,
MR_TAG_COMMON(1,3,82),
MR_TAG_COMMON(1,20,2),
1
},
{
MR_string_const("ilc", 3),
0,
MR_TAG_COMMON(1,3,76),
MR_TAG_COMMON(1,20,2),
1
},
{
MR_string_const("java", 4),
0,
MR_TAG_COMMON(1,3,71),
MR_TAG_COMMON(1,20,1),
1
},
{
MR_string_const("erlang", 6),
0,
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,20,4),
1
},
{
MR_string_const("par", 3),
1,
MR_TAG_COMMON(1,3,51),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("gc", 2),
2,
MR_TAG_COMMON(1,3,96),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("gcd", 3),
2,
MR_TAG_COMMON(1,3,95),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("mps", 3),
2,
MR_TAG_COMMON(1,3,55),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("agc", 3),
2,
MR_TAG_COMMON(1,3,113),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("prof", 4),
3,
MR_TAG_COMMON(1,3,49),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("proftime", 8),
3,
MR_TAG_COMMON(1,3,39),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("profcalls", 9),
3,
MR_TAG_COMMON(1,3,45),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("memprof", 7),
3,
MR_TAG_COMMON(1,3,61),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("profall", 7),
3,
MR_TAG_COMMON(1,3,48),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("profdeep", 8),
3,
MR_TAG_COMMON(1,3,43),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("tsw", 3),
4,
MR_TAG_COMMON(1,3,7),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("tsc", 3),
4,
MR_TAG_COMMON(1,3,9),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("tr", 2),
5,
MR_TAG_COMMON(1,3,13),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("trseg", 5),
5,
MR_TAG_COMMON(1,3,11),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("mm", 2),
6,
MR_TAG_COMMON(1,3,58),
MR_tbmkword(0, 0),
0
},
{
MR_string_const("dmm", 3),
6,
MR_TAG_COMMON(1,3,104),
MR_tbmkword(0, 0),
0
},
{
MR_string_const("mmsc", 4),
6,
MR_TAG_COMMON(1,3,58),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("dmmsc", 5),
6,
MR_TAG_COMMON(1,3,104),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("mmos", 4),
6,
MR_TAG_COMMON(1,3,60),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("dmmos", 5),
6,
MR_TAG_COMMON(1,3,106),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("spf", 3),
7,
MR_TAG_COMMON(1,3,18),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("picreg", 6),
8,
MR_TAG_COMMON(1,3,50),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("decldebug", 9),
10,
MR_TAG_COMMON(1,3,108),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("debug", 5),
10,
MR_TAG_COMMON(1,3,110),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("ssdebug", 7),
10,
MR_TAG_COMMON(1,3,16),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("ll_debug", 8),
9,
MR_TAG_COMMON(1,3,63),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("exts", 4),
11,
MR_TAG_COMMON(1,3,100),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("stseg", 5),
11,
MR_TAG_COMMON(1,3,15),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("rbmm", 4),
12,
MR_TAG_COMMON(1,3,35),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("rbmmd", 5),
12,
MR_TAG_COMMON(1,3,33),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("rbmmp", 5),
12,
MR_TAG_COMMON(1,3,28),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("rbmmdp", 6),
12,
MR_TAG_COMMON(1,3,30),
MR_tbmkword(0, 0),
1
},
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_0 = {
	"comp_gcc_ext",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_1 = {
	"comp_par",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_2 = {
	"comp_gc",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_3 = {
	"comp_prof",
	3
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_4 = {
	"comp_term_size",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_5 = {
	"comp_trail",
	5
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_6 = {
	"comp_minimal_model",
	6
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_7 = {
	"comp_single_prec_float",
	7
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_8 = {
	"comp_pic",
	8
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_9 = {
	"comp_lowlevel",
	9
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_10 = {
	"comp_trace",
	10
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_11 = {
	"comp_stack_extend",
	11
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_12 = {
	"comp_regions",
	12
};

const MR_EnumFunctorDescPtr mercury_data_libs__handle_options__enum_value_ordered_grade_component_0[] = {
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_0,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_1,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_2,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_3,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_4,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_5,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_6,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_7,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_8,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_9,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_10,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_11,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_12
};

const MR_EnumFunctorDescPtr mercury_data_libs__handle_options__enum_name_ordered_grade_component_0[] = {
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_2,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_0,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_9,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_6,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_1,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_8,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_3,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_12,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_7,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_11,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_4,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_10,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_5
};

const MR_Integer mercury_data_libs__handle_options__functor_number_map_grade_component_0[] = {
	1,
	4,
	0,
	6,
	10,
	12,
	3,
	8,
	5,
	2,
	11,
	9,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__handle_options__type_ctor_info_grade_component_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__handle_options__grade_component_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__handle_options__grade_component_0_0)),
	"libs.handle_options",
	"grade_component",
	{ (void *)mercury_data_libs__handle_options__enum_name_ordered_grade_component_0 },
	{ (void *)mercury_data_libs__handle_options__enum_value_ordered_grade_component_0 },
	13,
	4,
	mercury_data_libs__handle_options__functor_number_map_grade_component_0
};


static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_2 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2549",
3,
0
},
"libs.handle_options",
"handle_options.m",
2549,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2549",
3,
0
},
"libs.handle_options",
"handle_options.m",
2549,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__filter_grade_7_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2460",
2,
0
},
"libs.handle_options",
"handle_options.m",
2460,
"d1;c5;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_3 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2526",
5,
0
},
"libs.handle_options",
"handle_options.m",
2526,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_2 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2874",
3,
0
},
"libs.handle_options",
"handle_options.m",
2874,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"grade_start_values",
1,
0
},
"libs.handle_options",
"handle_options.m",
2874,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__split_grade_string_2_2_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"char_is_not",
2,
0
},
"libs.handle_options",
"handle_options.m",
2914,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__usage_errors_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.error_util",
"parse_tree.error_util",
"write_error_plain_with_progname",
4,
0
},
"libs.handle_options",
"handle_options.m",
2297,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_4 = {
{
MR_PREDICATE,
"libs.options",
"libs.options",
"special_handler",
4,
0
},
"libs.handle_options",
"handle_options.m",
187,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_3 = {
{
MR_PREDICATE,
"libs.options",
"libs.options",
"option_defaults",
2,
0
},
"libs.handle_options",
"handle_options.m",
187,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_2 = {
{
MR_PREDICATE,
"libs.options",
"libs.options",
"long_option",
2,
0
},
"libs.handle_options",
"handle_options.m",
187,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_1 = {
{
MR_PREDICATE,
"libs.options",
"libs.options",
"short_option",
2,
0
},
"libs.handle_options",
"handle_options.m",
187,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_13 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1980",
3,
0
},
"libs.handle_options",
"handle_options.m",
1980,
"c716;?;s2-2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_12 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1978",
3,
0
},
"libs.handle_options",
"handle_options.m",
1978,
"c716;?;s2-2;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_11 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1987",
2,
0
},
"libs.handle_options",
"handle_options.m",
1987,
"c716;?;s1-2;c1;s2-2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_10 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1986",
2,
0
},
"libs.handle_options",
"handle_options.m",
1986,
"c716;?;s1-2;c1;s2-2;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_9 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1956",
3,
0
},
"libs.handle_options",
"handle_options.m",
1956,
"c707;s2-2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_8 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1952",
3,
0
},
"libs.handle_options",
"handle_options.m",
1952,
"c707;s2-2;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_7 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda2_handle_options_m_1934",
2,
0
},
"libs.handle_options",
"handle_options.m",
1934,
"c699;s2-2;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_6 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1934",
2,
0
},
"libs.handle_options",
"handle_options.m",
1934,
"c699;s2-2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_5 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1916",
4,
0
},
"libs.handle_options",
"handle_options.m",
1916,
"c698;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_4 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1880",
3,
0
},
"libs.handle_options",
"handle_options.m",
1880,
"c688;s2-2;c39;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_3 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1870",
3,
0
},
"libs.handle_options",
"handle_options.m",
1870,
"c688;s2-2;c31;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_2 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1857",
3,
0
},
"libs.handle_options",
"handle_options.m",
1857,
"c688;s2-2;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_18_0_1 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1842",
3,
0
},
"libs.handle_options",
"handle_options.m",
1842,
"c688;s2-2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_6 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"filter_grade",
7,
0
},
"libs.handle_options",
"handle_options.m",
2379,
"d1;c17;q;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_5 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"must_not_contain",
2,
0
},
"libs.handle_options",
"handle_options.m",
2379,
"d1;c17;q;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_4 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"filter_grade",
7,
0
},
"libs.handle_options",
"handle_options.m",
2377,
"d1;c17;q;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_3 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"must_contain",
2,
0
},
"libs.handle_options",
"handle_options.m",
2377,
"d1;c17;q;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_2 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"string_to_grade_component",
6,
0
},
"libs.handle_options",
"handle_options.m",
2369,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"string_to_grade_component",
6,
0
},
"libs.handle_options",
"handle_options.m",
2367,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__compute_grade_2_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2598",
2,
0
},
"libs.handle_options",
"handle_options.m",
2598,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__check_option_values_18_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_421",
1,
0
},
"libs.handle_options",
"handle_options.m",
421,
"d1;c59;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_4 = {
{
MR_PREDICATE,
"libs.options",
"libs.options",
"special_handler",
4,
0
},
"libs.handle_options",
"handle_options.m",
187,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_3 = {
{
MR_PREDICATE,
"libs.options",
"libs.options",
"option_defaults",
2,
0
},
"libs.handle_options",
"handle_options.m",
187,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_2 = {
{
MR_PREDICATE,
"libs.options",
"libs.options",
"long_option",
2,
0
},
"libs.handle_options",
"handle_options.m",
187,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_1 = {
{
MR_PREDICATE,
"libs.options",
"libs.options",
"short_option",
2,
0
},
"libs.handle_options",
"handle_options.m",
187,
"d1;c8;"
};


MR_decl_entry(getopt_io__process_options_7_0);

MR_BEGIN_MODULE(libs__handle_options_module0)
	MR_init_entry1(libs__handle_options__process_given_options_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__process_given_options_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_given_options'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__process_given_options_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(getopt_io__process_options_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(libs__handle_options_module1)
	MR_init_entry1(libs__handle_options__add_error_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__add_error_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__add_error_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module2)
	MR_init_entry1(libs__handle_options__convert_dump_alias_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__convert_dump_alias_2_0);
	MR_init_label10(libs__handle_options__convert_dump_alias_2_0,3,22,5,6,7,8,9,10,11,12)
	MR_init_label8(libs__handle_options__convert_dump_alias_2_0,13,14,15,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_dump_alias'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__convert_dump_alias_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(libs__handle_options__convert_dump_alias_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_6_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_6_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(libs__handle_options__convert_dump_alias_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i11) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i12) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i18) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i15) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i19) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i17) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i14) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i10) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i8) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i16) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i13) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i6) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i9) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i7));
MR_def_label(libs__handle_options__convert_dump_alias_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ltuCIU", 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bcdglmnstuvz", 12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("din", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("cP", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bcdglmnpruvP", 12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bcdfgilmnprstuvzP", 17);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bdgvP", 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bcdglmnstvz", 11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ilv", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("divM", 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("cdinpGDRS", 9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("dfnprsu", 7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("abcdEfgilmnprstuvzBCDMPT", 24);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("abcdEfgilmnprstuvzBCMPSTZ", 25);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("abcdEfgilmnprstuvzBCDIMPRSTUZ", 29);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(libs__globals__convert_target_2_0);
MR_decl_entry(libs__globals__convert_gc_method_2_0);
MR_decl_entry(libs__globals__convert_tags_method_2_0);
MR_decl_entry(libs__globals__convert_termination_norm_2_0);
MR_decl_entry(fn__libs__trace_params__trace_level_none_0_0);
MR_decl_entry(libs__trace_params__convert_trace_level_4_0);
MR_decl_entry(libs__trace_params__convert_trace_suppress_2_0);
MR_decl_entry(fn__libs__trace_params__default_trace_suppress_0_0);
MR_decl_entry(libs__globals__convert_maybe_thread_safe_2_0);
MR_decl_entry(svmap__set_4_0);
MR_decl_entry(libs__globals__convert_c_compiler_type_2_0);
MR_decl_entry(libs__globals__convert_reuse_strategy_3_0);
MR_decl_entry(fn__string__words_separator_2_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(mdbcomp__feedback__read_feedback_file_4_0);
MR_decl_entry(mdbcomp__feedback__read_error_message_string_3_0);
MR_decl_entry(fn__mdbcomp__feedback__init_feedback_info_0_0);

MR_BEGIN_MODULE(libs__handle_options_module3)
	MR_init_entry1(libs__handle_options__check_option_values_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__check_option_values_18_0);
	MR_init_label10(libs__handle_options__check_option_values_18_0,2,6,4,8,9,10,14,12,16,17)
	MR_init_label10(libs__handle_options__check_option_values_18_0,18,22,20,24,25,26,27,29,30,31)
	MR_init_label10(libs__handle_options__check_option_values_18_0,35,33,37,38,39,43,41,45,46,47)
	MR_init_label10(libs__handle_options__check_option_values_18_0,51,48,52,53,54,60,64,63,56,66)
	MR_init_label10(libs__handle_options__check_option_values_18_0,67,69,70,74,72,76,77,78,79,83)
	MR_init_label10(libs__handle_options__check_option_values_18_0,81,85,86,87,88,94,97,92,98,100)
	MR_init_label10(libs__handle_options__check_option_values_18_0,101,105,103,107,108,109,110,115,112,117)
	MR_init_label10(libs__handle_options__check_option_values_18_0,118,119,124,130,132,134,136,121,140,142)
	MR_init_label9(libs__handle_options__check_option_values_18_0,143,144,149,152,153,154,151,145,155)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_option_values'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__check_option_values_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 154;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i2);
MR_def_label(libs__handle_options__check_option_values_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i4);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_target_2_0,
		libs__handle_options__check_option_values_18_0_i6);
MR_def_label(libs__handle_options__check_option_values_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i4);
	}
	MR_sv(2) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 191;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i9);
MR_def_label(libs__handle_options__check_option_values_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid target option (must be \140c\', \140asm\', \140il\', \140java\', or \140erlang\')", 69);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i8);
MR_def_label(libs__handle_options__check_option_values_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(2) = MR_r1;
	MR_r4 = (MR_Integer) 191;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i10);
MR_def_label(libs__handle_options__check_option_values_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i12);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_gc_method_2_0,
		libs__handle_options__check_option_values_18_0_i14);
MR_def_label(libs__handle_options__check_option_values_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i12);
	}
	MR_sv(3) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 208;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i17);
MR_def_label(libs__handle_options__check_option_values_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid GC option (must be \140none\', \140conservative\', \140boehm\', \140mps\', \140accurate\', or \140automatic\')", 94);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i16);
MR_def_label(libs__handle_options__check_option_values_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_sv(3) = MR_r1;
	MR_r4 = (MR_Integer) 208;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i18);
MR_def_label(libs__handle_options__check_option_values_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_tags_method_2_0,
		libs__handle_options__check_option_values_18_0_i22);
MR_def_label(libs__handle_options__check_option_values_18_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i20);
	}
	MR_sv(4) = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 292;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i25);
MR_def_label(libs__handle_options__check_option_values_18_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid tags option (must be \140none\', \140low\' or \140high\')", 53);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i24);
MR_def_label(libs__handle_options__check_option_values_18_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(4) = MR_r1;
	MR_r4 = (MR_Integer) 292;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i26);
MR_def_label(libs__handle_options__check_option_values_18_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i27);
	}
	if (MR_INT_GT(MR_tempr1,100)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i27);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 396;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i30);
	}
MR_def_label(libs__handle_options__check_option_values_18_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--fact-table-hash-percent-full\'\n\t(must be an integer between 1 and 100)", 99);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i29);
MR_def_label(libs__handle_options__check_option_values_18_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(4) = MR_r1;
	MR_r4 = (MR_Integer) 396;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i31);
MR_def_label(libs__handle_options__check_option_values_18_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_termination_norm_2_0,
		libs__handle_options__check_option_values_18_0_i35);
MR_def_label(libs__handle_options__check_option_values_18_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i33);
	}
	MR_sv(5) = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 402;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i38);
MR_def_label(libs__handle_options__check_option_values_18_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--termination-norm\'\n\t(must be \140simple\', \140total\' or \140num-data-elems\').", 97);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i37);
MR_def_label(libs__handle_options__check_option_values_18_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(5) = MR_r1;
	MR_r4 = (MR_Integer) 402;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i39);
MR_def_label(libs__handle_options__check_option_values_18_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i41);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_termination_norm_2_0,
		libs__handle_options__check_option_values_18_0_i43);
MR_def_label(libs__handle_options__check_option_values_18_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i41);
	}
	MR_sv(8) = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 114;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i46);
MR_def_label(libs__handle_options__check_option_values_18_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--termination2-norm\'\n\t(must be\140simple\', \140total\' or \140num-data-elems\').", 97);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i45);
MR_def_label(libs__handle_options__check_option_values_18_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(8) = MR_r1;
	MR_r4 = (MR_Integer) 114;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i47);
MR_def_label(libs__handle_options__check_option_values_18_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i48);
	}
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_18_0_i51);
MR_def_label(libs__handle_options__check_option_values_18_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(9);
	MR_sv(7) = MR_sv(8);
	MR_r4 = (MR_Integer) 113;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i69);
MR_def_label(libs__handle_options__check_option_values_18_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 102;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i52);
MR_def_label(libs__handle_options__check_option_values_18_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 164;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i53);
MR_def_label(libs__handle_options__check_option_values_18_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 165;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i54);
MR_def_label(libs__handle_options__check_option_values_18_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i56);
	}
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i56);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(6), 1);
	MR_r2 = MR_tfield(1, MR_sv(7), 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(libs__trace_params__convert_trace_level_4_0,
		libs__handle_options__check_option_values_18_0_i60);
MR_def_label(libs__handle_options__check_option_values_18_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i63);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_18_0_i64);
MR_def_label(libs__handle_options__check_option_values_18_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Specified trace level is not compatible with grade", 50);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i67);
MR_def_label(libs__handle_options__check_option_values_18_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_sv(9);
	MR_sv(7) = MR_sv(8);
	MR_r4 = (MR_Integer) 113;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i69);
MR_def_label(libs__handle_options__check_option_values_18_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_18_0_i66);
MR_def_label(libs__handle_options__check_option_values_18_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--trace\'\n\t(must be \140minimum\', \140shallow\', \140deep\', \140decl\', \140rep\' or \140default\').", 105);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i67);
MR_def_label(libs__handle_options__check_option_values_18_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(7) = MR_r1;
	MR_r4 = (MR_Integer) 113;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i70);
MR_def_label(libs__handle_options__check_option_values_18_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i72);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__trace_params__convert_trace_suppress_2_0,
		libs__handle_options__check_option_values_18_0_i74);
MR_def_label(libs__handle_options__check_option_values_18_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i72);
	}
	MR_sv(8) = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 200;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i78);
MR_def_label(libs__handle_options__check_option_values_18_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__trace_params__default_trace_suppress_0_0,
		libs__handle_options__check_option_values_18_0_i76);
MR_def_label(libs__handle_options__check_option_values_18_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--suppress-trace\'.", 46);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i77);
MR_def_label(libs__handle_options__check_option_values_18_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(8) = MR_r1;
	MR_r4 = (MR_Integer) 200;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i79);
MR_def_label(libs__handle_options__check_option_values_18_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i81);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_maybe_thread_safe_2_0,
		libs__handle_options__check_option_values_18_0_i83);
MR_def_label(libs__handle_options__check_option_values_18_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i81);
	}
	MR_sv(10) = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 128;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i86);
MR_def_label(libs__handle_options__check_option_values_18_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--maybe-thread-safe\'.", 49);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i85);
MR_def_label(libs__handle_options__check_option_values_18_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_r4 = (MR_Integer) 128;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i87);
MR_def_label(libs__handle_options__check_option_values_18_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i88);
	}
	MR_r5 = MR_tfield(3, MR_r1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i88);
	}
	MR_r3 = MR_sv(9);
	MR_sv(9) = MR_sv(10);
	MR_r4 = (MR_Integer) 475;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i100);
MR_def_label(libs__handle_options__check_option_values_18_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i92);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__handle_options__convert_dump_alias_2_0,
		libs__handle_options__check_option_values_18_0_i94);
MR_def_label(libs__handle_options__check_option_values_18_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Integer) 129;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		libs__handle_options__check_option_values_18_0_i97);
MR_def_label(libs__handle_options__check_option_values_18_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_sv(9) = MR_sv(10);
	MR_r4 = (MR_Integer) 475;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i100);
MR_def_label(libs__handle_options__check_option_values_18_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--hlds-dump-alias\'.", 47);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i98);
MR_def_label(libs__handle_options__check_option_values_18_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r4 = (MR_Integer) 475;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i101);
MR_def_label(libs__handle_options__check_option_values_18_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i103);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_c_compiler_type_2_0,
		libs__handle_options__check_option_values_18_0_i105);
MR_def_label(libs__handle_options__check_option_values_18_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i103);
	}
	MR_sv(11) = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Integer) 387;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i108);
MR_def_label(libs__handle_options__check_option_values_18_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--c-compiler-type\'\n\t(must be \140gcc\', \140lcc\', \140cl\', or \140unknown\').", 91);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i107);
MR_def_label(libs__handle_options__check_option_values_18_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(14);
	MR_sv(11) = MR_r1;
	MR_r4 = (MR_Integer) 387;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i109);
MR_def_label(libs__handle_options__check_option_values_18_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Integer) 388;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i110);
MR_def_label(libs__handle_options__check_option_values_18_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(10),3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i112);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i112);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(10), 1);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(libs__globals__convert_reuse_strategy_3_0,
		libs__handle_options__check_option_values_18_0_i115);
MR_def_label(libs__handle_options__check_option_values_18_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i112);
	}
	MR_sv(10) = MR_r2;
	MR_r3 = MR_sv(14);
	MR_sv(15) = MR_sv(11);
	MR_r4 = (MR_Integer) 485;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i118);
MR_def_label(libs__handle_options__check_option_values_18_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--structure-reuse-constraint\'\n\t(must be \140same_cons_id\' or \140within_n_cells_difference\').", 115);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i117);
MR_def_label(libs__handle_options__check_option_values_18_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(14);
	MR_sv(15) = MR_r1;
	MR_r4 = (MR_Integer) 485;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r3;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i119);
MR_def_label(libs__handle_options__check_option_values_18_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		libs__handle_options__check_option_values_18_0_i124);
MR_def_label(libs__handle_options__check_option_values_18_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	MR_sv(11) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(13) = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__handle_options__check_option_values_18_0_i130);
MR_def_label(libs__handle_options__check_option_values_18_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__handle_options__check_option_values_18_0_i132);
MR_def_label(libs__handle_options__check_option_values_18_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__handle_options__check_option_values_18_0_i134);
MR_def_label(libs__handle_options__check_option_values_18_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__handle_options__check_option_values_18_0_i136);
MR_def_label(libs__handle_options__check_option_values_18_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i121);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_sv(11), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(11), 0) = MR_tempr1;
	MR_r3 = MR_sv(14);
	MR_sv(14) = MR_sv(15);
	MR_r4 = (MR_Integer) 614;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i143);
	}
MR_def_label(libs__handle_options__check_option_values_18_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--dotnet-library-version\'\n\t(must be of the form \140MajorNum.MinorNum.BuildNum.RevisionNum\').", 118);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i140);
MR_def_label(libs__handle_options__check_option_values_18_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Integer) 87;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		libs__handle_options__check_option_values_18_0_i142);
MR_def_label(libs__handle_options__check_option_values_18_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Integer) 614;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(libs__handle_options__check_option_values_18_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_18_0_i144);
MR_def_label(libs__handle_options__check_option_values_18_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i145);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i145);
	}
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_feedback_file_4_0,
		libs__handle_options__check_option_values_18_0_i149);
MR_def_label(libs__handle_options__check_option_values_18_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_18_0_i151);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_error_message_string_3_0,
		libs__handle_options__check_option_values_18_0_i152);
MR_def_label(libs__handle_options__check_option_values_18_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_18_0_i153);
MR_def_label(libs__handle_options__check_option_values_18_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__feedback__init_feedback_info_0_0,
		libs__handle_options__check_option_values_18_0_i154);
MR_def_label(libs__handle_options__check_option_values_18_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r14 = MR_sv(12);
	MR_decr_sp_and_return(18);
MR_def_label(libs__handle_options__check_option_values_18_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(13);
	MR_r14 = MR_sv(14);
	MR_decr_sp_and_return(18);
MR_def_label(libs__handle_options__check_option_values_18_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__feedback__init_feedback_info_0_0,
		libs__handle_options__check_option_values_18_0_i155);
MR_def_label(libs__handle_options__check_option_values_18_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r14 = MR_sv(14);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(libs__handle_options_module4)
	MR_init_entry1(libs__handle_options__construct_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__construct_string_2_0);
	MR_init_label5(libs__handle_options__construct_string_2_0,3,5,40,11,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__construct_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__construct_string_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(libs__handle_options__construct_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__construct_string_2_0_i5);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_proceed();
MR_def_label(libs__handle_options__construct_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(libs__handle_options__construct_string_2_0_i40);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(libs__handle_options__construct_string_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_sv(2) = MR_tfield(0, MR_tfield(1, MR_r2, 0), 1);
	MR_r1 = MR_r3;
	MR_np_localcall_lab(libs__handle_options__construct_string_2_0,
		libs__handle_options__construct_string_2_0_i11);
MR_def_label(libs__handle_options__construct_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		libs__handle_options__construct_string_2_0_i15);
MR_def_label(libs__handle_options__construct_string_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_options_2_0);
MR_decl_entry(solutions__solutions_2_1);

MR_BEGIN_MODULE(libs__handle_options_module5)
	MR_init_entry1(libs__handle_options__compute_grade_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__compute_grade_2_0);
	MR_init_label3(libs__handle_options__compute_grade_2_0,2,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_grade'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__compute_grade_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_options_2_0,
		libs__handle_options__compute_grade_2_0_i2);
MR_def_label(libs__handle_options__compute_grade_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__handle_options__compute_grade_2_0_i5);
MR_def_label(libs__handle_options__compute_grade_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__compute_grade_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("none", 4);
	MR_decr_sp_and_return(1);
MR_def_label(libs__handle_options__compute_grade_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__handle_options__construct_string_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__sub_string_search_3_0);
MR_decl_entry(string__split_4_0);
MR_decl_entry(string__append_3_1);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(libs__handle_options_module6)
	MR_init_entry1(libs__handle_options__grade_directory_component_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__grade_directory_component_2_0);
	MR_init_label5(libs__handle_options__grade_directory_component_2_0,2,4,6,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grade_directory_component'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__grade_directory_component_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__handle_options__compute_grade_2_0,
		libs__handle_options__grade_directory_component_2_0_i2);
MR_def_label(libs__handle_options__grade_directory_component_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".picreg", 7);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		libs__handle_options__grade_directory_component_2_0_i4);
MR_def_label(libs__handle_options__grade_directory_component_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__grade_directory_component_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__split_4_0,
		libs__handle_options__grade_directory_component_2_0_i6);
MR_def_label(libs__handle_options__grade_directory_component_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".picreg", 7);
	MR_np_call_localret_ent(string__append_3_1,
		libs__handle_options__grade_directory_component_2_0_i7);
MR_def_label(libs__handle_options__grade_directory_component_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__grade_directory_component_2_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(libs__handle_options__grade_directory_component_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__set_option_4_0);

MR_BEGIN_MODULE(libs__handle_options_module7)
	MR_init_entry1(libs__handle_options__option_implies_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__option_implies_5_0);
	MR_init_label2(libs__handle_options__option_implies_5_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_implies'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__option_implies_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__option_implies_5_0_i2);
MR_def_label(libs__handle_options__option_implies_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__option_implies_5_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(libs__handle_options__option_implies_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__globals__set_option_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);

MR_BEGIN_MODULE(libs__handle_options_module8)
	MR_init_entry1(libs__handle_options__postprocess_options_lowlevel_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__postprocess_options_lowlevel_2_0);
	MR_init_label10(libs__handle_options__postprocess_options_lowlevel_2_0,3,5,6,4,7,9,10,8,11,13)
	MR_init_label10(libs__handle_options__postprocess_options_lowlevel_2_0,14,12,15,17,18,16,19,20,21,25)
	MR_init_label10(libs__handle_options__postprocess_options_lowlevel_2_0,24,28,30,23,31,32,35,36,37,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'postprocess_options_lowlevel'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__postprocess_options_lowlevel_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r2 = (MR_Integer) 343;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i3);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 445;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i4);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 439;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i6);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 445;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i7);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 445;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i8);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 442;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i10);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 445;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i11);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 444;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i12);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 435;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i14);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 444;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i15);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 445;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i16);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 273;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i18);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 445;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i19);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 439;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i20);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 448;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i21);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i25);
	}
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i24);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i23);
	}
	MR_r3 = MR_sv(4);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i28);
	}
	MR_sv(4) = MR_r3;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i23);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 448;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,0);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i30);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 215;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i31);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 215;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i32);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Integer) 421;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i35);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 219;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i36);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 221;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i37);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i38);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i38);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 422;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__globals__set_option_4_0);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Integer) 422;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__globals__set_option_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module9)
	MR_init_entry1(libs__handle_options__option_neg_implies_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__option_neg_implies_5_0);
	MR_init_label2(libs__handle_options__option_neg_implies_5_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_neg_implies'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__option_neg_implies_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__option_neg_implies_5_0_i2);
MR_def_label(libs__handle_options__option_neg_implies_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__option_neg_implies_5_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__globals__set_option_4_0);
MR_def_label(libs__handle_options__option_neg_implies_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_option_3_0);
MR_decl_entry(__Unify___getopt_io__option_data_0_0);

MR_BEGIN_MODULE(libs__handle_options_module10)
	MR_init_entry1(libs__handle_options__option_requires_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__option_requires_7_0);
	MR_init_label4(libs__handle_options__option_requires_7_0,2,3,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_requires'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__option_requires_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__option_requires_7_0_i2);
MR_def_label(libs__handle_options__option_requires_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_option_3_0,
		libs__handle_options__option_requires_7_0_i3);
MR_def_label(libs__handle_options__option_requires_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__option_requires_7_0_i5);
	}
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___getopt_io__option_data_0_0,
		libs__handle_options__option_requires_7_0_i9);
MR_def_label(libs__handle_options__option_requires_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__handle_options__option_requires_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(libs__handle_options__option_requires_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_set_disable_smart_recompilation_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(libs__handle_options_module11)
	MR_init_entry1(libs__handle_options__disable_smart_recompilation_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__disable_smart_recompilation_5_0);
	MR_init_label10(libs__handle_options__disable_smart_recompilation_5_0,2,4,5,7,8,9,10,11,16,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disable_smart_recompilation'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__disable_smart_recompilation_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__io_set_disable_smart_recompilation_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i2);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 98;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__disable_smart_recompilation_5_0_i4);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 22;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i5);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__disable_smart_recompilation_5_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Warning: smart recompilation does not yet work with ", 52);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i8);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i9);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i10);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i11);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__disable_smart_recompilation_5_0_i13);
	}
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module12)
	MR_init_entry1(libs__handle_options__maybe_disable_smart_recompilation_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__maybe_disable_smart_recompilation_8_0);
	MR_init_label10(libs__handle_options__maybe_disable_smart_recompilation_8_0,2,5,7,8,10,11,12,13,14,26)
	MR_init_label2(libs__handle_options__maybe_disable_smart_recompilation_8_0,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_disable_smart_recompilation'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__maybe_disable_smart_recompilation_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i2);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i3);
	}
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__io_set_disable_smart_recompilation_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 98;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i7);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 22;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i8);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Warning: smart recompilation does not yet work with ", 52);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i11);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i12);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i13);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i14);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i16);
	}
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i26);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(libs__handle_options_module13)
	MR_init_entry1(libs__handle_options__postprocess_options_libgrades_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__postprocess_options_libgrades_4_0);
	MR_init_label8(libs__handle_options__postprocess_options_libgrades_4_0,2,3,6,8,9,12,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'postprocess_options_libgrades'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__postprocess_options_libgrades_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 587;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i2);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 588;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i3);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i6);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,10,1);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i8);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 586;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i9);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__filter_grade_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i12);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__filter_grade_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i15);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 586;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i17);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__globals_init_14_0);
MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(io__get_environment_var_4_0);
MR_decl_entry(fn__libs__globals__gc_is_conservative_1_0);
MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(libs__compiler_util__record_warning_3_0);
MR_decl_entry(libs__globals__set_tags_method_3_0);
MR_decl_entry(libs__globals__set_gc_method_3_0);
MR_decl_entry(fn__libs__trace_params__given_trace_level_is_none_1_0);
MR_decl_entry(fn__bool__or_2_0);
MR_decl_entry(io__have_symlinks_0_0);
MR_decl_entry(libs__globals__lookup_maybe_string_option_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(analysis__enable_debug_messages_3_0);
MR_decl_entry(string__replace_all_4_0);
MR_decl_entry(bool__or_3_0);
MR_decl_entry(fn__libs__trace_params__trace_level_allows_tail_rec_1_0);
MR_decl_entry(fn__libs__options__option_table_add_mercury_library_directory_2_0);
MR_decl_entry(libs__globals__set_options_3_0);
MR_decl_entry(fn__f_100_105_114_95_95_47_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__dir__this_directory_0_0);
MR_decl_entry(fn__list__filter_2_0);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(libs__globals__globals_init_mutables_3_0);

MR_BEGIN_MODULE(libs__handle_options_module14)
	MR_init_entry1(libs__handle_options__convert_options_to_globals_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__convert_options_to_globals_18_0);
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,2,3,6,743,8,10,11,13,16,12)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,18,20,21,19,22,26,28,29,30,31)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,32,33,27,37,38,42,750,44,45,49)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,47,50,53,59,60,62,64,65,67,68)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,69,70,72,73,74,75,76,77,79,78)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,84,55,85,86,87,91,94,96,98,101)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,105,106,108,110,111,113,114,115,116,117)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,120,122,123,125,127,128,130,131,132,133)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,134,136,137,138,139,140,141,144,146,93)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,148,149,151,152,153,155,156,157,158,159)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,160,161,164,163,162,165,166,167,168,169)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,170,171,172,757,174,175,176,178,180,173)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,182,183,187,184,191,190,193,194,195,196)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,200,197,201,202,203,204,205,206,207,208)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,209,210,211,212,213,214,215,216,217,218)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,219,220,221,222,223,224,225,226,227,228)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,229,230,231,232,233,234,235,236,237,238)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,239,240,241,242,243,244,245,246,251,247)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,252,253,254,255,256,259,261,262,264,258)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,265,266,267,269,268,270,271,273,274,272)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,275,276,280,279,283,278,284,285,286,287)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,289,290,291,292,294,288,295,296,297,298)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,299,300,301,302,303,304,308,315,312,318)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,319,320,322,325,326,327,329,330,331,332)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,333,334,335,336,328,337,338,343,339,344)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,345,346,347,348,349,351,352,353,354,355)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,356,357,358,359,360,362,367,368,369,370)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,371,372,373,374,375,376,377,378,379,380)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,393,365,364,396,397,398,399,400,401,402)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,404,403,361,409,410,411,412,414,415,418)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,419,420,421,423,424,426,413,427,428,432)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,429,436,435,439,441,442,434,444,450,449)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,448,453,447,445,455,456,457,458,460,462)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,463,464,465,466,469,470,471,472,473,474)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,475,476,477,478,484,485,490,486,491,492)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,493,494,495,496,497,498,499,500,501,502)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,503,508,504,509,514,510,515,516,517,518)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,519,523,525,527,529,522,532,521,533,534)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,535,536,537,538,539,540,541,542,543,544)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,545,546,548,549,550,551,552,553,556,557)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,558,561,547,562,564,565,566,569,563,570)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,575,578,579,582,571,583,584,585,587,589)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,590,591,593,594,595,597,599,600,601,603)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,604,605,607,609,610,611,613,615,616,617)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,619,586,620,622,623,624,625,627,621,628)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,629,630,634,636,637,638,639,640,633,642)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,643,644,646,649,650,651,653,654,655,657)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,658,660,661,663,665,666,669,668,675,676)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,677,678,679,680,684,685,686,687,690,667)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,691,692,693,694,695,701,703,705,708,709)
	MR_init_label10(libs__handle_options__convert_options_to_globals_18_0,711,696,713,717,715,714,718,721,725,719)
	MR_init_label8(libs__handle_options__convert_options_to_globals_18_0,726,728,731,727,736,738,740,741)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_options_to_globals'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__convert_options_to_globals_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r7;
	MR_sv(6) = MR_r14;
	MR_np_call_localret_ent(libs__globals__globals_init_14_0,
		libs__handle_options__convert_options_to_globals_18_0_i2);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 152;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i3);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i743);
	}
	MR_r1 = (MR_Word) MR_string_const("MERCURY_EVENT_SET_FILE_NAME", 27);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i6);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i8);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,743)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i11);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 152;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i10);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__libs__globals__gc_is_conservative_1_0,
		libs__handle_options__convert_options_to_globals_18_0_i13);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 278;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i16);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 279;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i18);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i20);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i19);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 209;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i21);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i22);
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i22);
	}
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 214;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i26);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i28);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(": warning: --num-tag-bits invalid or unspecified\n", 49);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i29);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i30);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(": using --num-tag-bits 0 (tags disabled)\n", 41);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i31);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i32);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__compiler_util__record_warning_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i33);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,1);
	MR_r1 = (MR_Integer) 209;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i37);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_r1;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_sv(5) = MR_tempr2;
	MR_r3 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Integer) 209;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i37);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i38);
	}
	MR_sv(3) = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_tags_method_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i38);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 381;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i42);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i44);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,750)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_sv(6);
	MR_r1 = MR_r2;
	if (MR_INT_EQ(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i59);
	}
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i84);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 192;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i45);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i47);
	}
	MR_r1 = (MR_Integer) 381;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i49);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(6);
	if (MR_INT_EQ(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i59);
	}
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i84);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 614;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i50);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i750);
	}
	MR_r1 = (MR_Word) MR_string_const("\'--implicit-parallelism\' requires \'--feedback\'", 46);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i53);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i84);
	}
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i60);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,13,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i62);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,8,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 279;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i64);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 278;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i65);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,8,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 223;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i67);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 224;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i68);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 225;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i69);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 227;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i70);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 209;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i72);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 216;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i73);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 217;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i74);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 420;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i75);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 599;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i76);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 609;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i77);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__convert_options_to_globals_18_0_i79);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i78);
	}
	MR_r1 = (MR_Integer) 455;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i84);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 233;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i55);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 233;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i85);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 232;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i86);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i87);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i87);
	}
	MR_r3 = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i101) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i120) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i122) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i94) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i144) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i105));
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 231;
	MR_r2 = (MR_Integer) 229;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i91);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i101) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i120) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i122) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i94) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i144) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i105));
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = (MR_Integer) 223;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i96);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 224;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i98);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 223;
	MR_r2 = (MR_Integer) 228;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i146);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 223;
	MR_r2 = (MR_Integer) 228;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i146);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i106);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,13,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i108);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,8,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 279;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i110);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 278;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i111);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,8,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i113);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 242;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i114);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 244;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i115);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 245;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i116);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 599;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i117);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 609;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i146);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = (MR_Integer) 194;
	MR_r2 = (MR_Integer) 193;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i93);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i123);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,13,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i125);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,8,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 279;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i127);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 278;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i128);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,8,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 223;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i130);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 224;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i131);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 225;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i132);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 227;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i133);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 226;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i134);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 209;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i136);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 217;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i137);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 420;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i138);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 229;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i139);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 243;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i140);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 599;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i141);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 609;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i146);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 439;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i146);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = (MR_Integer) 194;
	MR_r2 = (MR_Integer) 193;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i148);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 90;
	MR_r2 = (MR_Integer) 285;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i149);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,13,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 90;
	MR_r2 = (MR_Integer) 519;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i151);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 90;
	MR_r2 = (MR_Integer) 521;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i152);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 285;
	MR_r2 = (MR_Integer) 222;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i153);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,8,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 223;
	MR_r2 = (MR_Integer) 219;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i155);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 223;
	MR_r2 = (MR_Integer) 220;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i156);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 223;
	MR_r2 = (MR_Integer) 221;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i157);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 225;
	MR_r2 = (MR_Integer) 293;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i158);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 433;
	MR_r2 = (MR_Integer) 427;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i159);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 574;
	MR_r2 = (MR_Integer) 572;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i160);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 589;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i161);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i163);
	}
	MR_r1 = (MR_Integer) 589;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,15,0);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i164);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 572;
	MR_r2 = (MR_Integer) 89;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i162);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Integer) 572;
	MR_r2 = (MR_Integer) 89;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i165);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 572;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i166);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 572;
	MR_r2 = (MR_Integer) 594;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i167);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 577;
	MR_r2 = (MR_Integer) 594;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i168);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 577;
	MR_r2 = (MR_Integer) 572;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i169);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 577;
	MR_r2 = (MR_Integer) 100;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i170);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 572;
	MR_r2 = (MR_Integer) 599;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i171);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 303;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i172);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i174);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,757)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 299;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i173);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 572;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i175);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 577;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i176);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i178);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i757);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", 74);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i180);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 299;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i182);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 304;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i183);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i184);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i184);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", 75);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i187);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(io__have_symlinks_0_0,
		libs__handle_options__convert_options_to_globals_18_0_i191);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_sv(7);
	MR_np_call_localret_ent(io__have_symlinks_0_0,
		libs__handle_options__convert_options_to_globals_18_0_i191);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i190);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 84;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i194);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 581;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i193);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 84;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i195);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 529;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i196);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i197);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i197);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", 90);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i200);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 386;
	MR_r2 = (MR_Integer) 384;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i201);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_sv(13) = MR_sv(9);
	MR_r1 = (MR_Integer) 386;
	MR_r2 = (MR_Integer) 384;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i202);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 394;
	MR_r2 = (MR_Integer) 393;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i203);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 393;
	MR_r2 = (MR_Integer) 392;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i204);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 393;
	MR_r2 = (MR_Integer) 12;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i205);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 401;
	MR_r2 = (MR_Integer) 400;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i206);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 400;
	MR_r2 = (MR_Integer) 399;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i207);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 400;
	MR_r2 = (MR_Integer) 12;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i208);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 77;
	MR_r2 = (MR_Integer) 303;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i209);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 303;
	MR_r2 = (MR_Integer) 299;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i210);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 302;
	MR_r2 = (MR_Integer) 301;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i211);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 299;
	MR_r2 = (MR_Integer) 301;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i212);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 303;
	MR_r2 = (MR_Integer) 302;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i213);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 301;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i214);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 98;
	MR_r2 = (MR_Integer) 99;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i215);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 43;
	MR_r2 = (MR_Integer) 42;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i216);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 80;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i217);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 82;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i218);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 81;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i219);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 85;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i220);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 75;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i221);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 74;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i222);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 73;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i223);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 79;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i224);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 91;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i225);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 76;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i226);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 77;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i227);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 78;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i228);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 87;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i229);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 86;
	MR_r2 = (MR_Integer) 98;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i230);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 75;
	MR_r2 = (MR_Integer) 119;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i231);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 74;
	MR_r2 = (MR_Integer) 119;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i232);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 73;
	MR_r2 = (MR_Integer) 119;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i233);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 76;
	MR_r2 = (MR_Integer) 119;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i234);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 77;
	MR_r2 = (MR_Integer) 119;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i235);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 73;
	MR_r2 = (MR_Integer) 99;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i236);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 79;
	MR_r2 = (MR_Integer) 299;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i237);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 98;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i238);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 299;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("\140--intermodule-optimization\'", 28);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__convert_options_to_globals_18_0_i239);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 301;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("\140--use-opt-files\'", 17);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__convert_options_to_globals_18_0_i240);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 88;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_string_const("\140--no-target-code-only\'", 23);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__convert_options_to_globals_18_0_i241);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 595;
	MR_r2 = (MR_Integer) 594;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i242);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 40;
	MR_r2 = (MR_Integer) 39;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i243);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 39;
	MR_r2 = (MR_Integer) 45;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i244);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i245);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 47;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i246);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i247);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i247);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 48;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i251);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 52;
	MR_r2 = (MR_Integer) 50;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i252);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 52;
	MR_r2 = (MR_Integer) 50;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i253);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 53;
	MR_r2 = (MR_Integer) 50;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i254);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 51;
	MR_r2 = (MR_Integer) 50;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i255);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 64;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i256);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i258);
	}
	MR_r1 = (MR_Word) MR_string_const("all", 3);
	MR_np_call_localret_ent(libs__handle_options__convert_dump_alias_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i259);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i258);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 129;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i261);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(string__append_3_2,
		libs__handle_options__convert_options_to_globals_18_0_i262);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 129;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i264);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 53;
	MR_r2 = (MR_Integer) 50;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i265);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(8);
	MR_r1 = (MR_Integer) 53;
	MR_r2 = (MR_Integer) 50;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i266);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 54;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i267);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i268);
	}
	MR_r1 = (MR_Integer) 50;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i269);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 331;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i270);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 331;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i271);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i273);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 60;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i272);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 330;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i274);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 60;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i275);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 61;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i276);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i280);
	}
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i279);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i278);
	}
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Integer) 58;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i283);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i284);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 70;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i285);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(analysis__enable_debug_messages_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i286);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 126;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i287);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i289);
	}
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 69;
	MR_r2 = (MR_Integer) 136;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i288);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 129;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i290);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("M", 1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__replace_all_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i291);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("T", 1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__replace_all_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i292);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 129;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i294);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 69;
	MR_r2 = (MR_Integer) 136;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i295);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 136;
	MR_r2 = (MR_Integer) 134;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i296);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 135;
	MR_r2 = (MR_Integer) 134;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i297);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 121;
	MR_r2 = (MR_Integer) 120;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i298);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r2 = (MR_Integer) 193;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i299);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 223;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i300);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 195;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i301);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i302);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(bool__or_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i303);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i304);
	}
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i304);
	}
	MR_r1 = (MR_Word) MR_string_const("can\'t use both forms of minimal model tabling at once", 53);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i315);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i308);
	}
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i308);
	}
	MR_r1 = (MR_Word) MR_string_const("minimal model tabling is incompatible with high level code", 58);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i315);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i312);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i312);
	}
	MR_r1 = (MR_Word) MR_string_const("minimal model tabling is incompatible with trailing", 51);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i315);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(10) = MR_r1;
	MR_r4 = MR_sv(14);
	MR_r1 = (MR_Integer) 198;
	MR_r2 = (MR_Integer) 215;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i318);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(10) = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_r1 = (MR_Integer) 198;
	MR_r2 = (MR_Integer) 215;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i319);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 223;
	MR_r2 = (MR_Integer) 246;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i320);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i325) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i322) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i325) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i322) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i322) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i322));
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 269;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i325);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 455;
	MR_r2 = (MR_Integer) 523;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i326);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 184;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i327);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i329);
	}
	MR_r5 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r5;
	MR_r1 = (MR_Integer) 176;
	MR_r2 = (MR_Integer) 187;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i328);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 176;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i330);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 178;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i331);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 179;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i332);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 180;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i333);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 181;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i334);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 182;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i335);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 183;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i336);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 176;
	MR_r2 = (MR_Integer) 187;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i337);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 111;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i338);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i339);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i339);
	}
	MR_r1 = (MR_Integer) 173;
	MR_r2 = (MR_Integer) 307;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i343);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 173;
	MR_r2 = (MR_Integer) 175;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i344);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(13);
	MR_r1 = (MR_Integer) 173;
	MR_r2 = (MR_Integer) 175;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i345);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 188;
	MR_r2 = (MR_Integer) 175;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i346);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 189;
	MR_r2 = (MR_Integer) 175;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i347);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 190;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i348);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i349);
	}
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 165;
	MR_r2 = (MR_Integer) 164;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i352);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 307;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i351);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 165;
	MR_r2 = (MR_Integer) 164;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i353);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 164;
	MR_r2 = (MR_Integer) 236;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i354);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 173;
	MR_r2 = (MR_Integer) 236;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i355);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 173;
	MR_r2 = (MR_Integer) 290;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i356);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 164;
	MR_r2 = (MR_Integer) 109;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i357);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 109;
	MR_r2 = (MR_Integer) 105;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i358);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 108;
	MR_r2 = (MR_Integer) 105;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i359);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 103;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i360);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__convert_options_to_globals_18_0_i362);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i361);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i365);
	}
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 307;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i367);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 323;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i368);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 325;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i369);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 332;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i370);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 333;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i371);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 361;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i372);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 321;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i373);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,373)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 322;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i374);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 338;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i375);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 337;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i376);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,376)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 343;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i377);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 357;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i378);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 370;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i379);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 371;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i380);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i393);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 434;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i393);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 426;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i364);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 426;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i396);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 340;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i397);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,397)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 359;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i398);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,398)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 424;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i399);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,399)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 240;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i400);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,400)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 241;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i401);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,401)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 295;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i402);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,402)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_allows_tail_rec_1_0,
		libs__handle_options__convert_options_to_globals_18_0_i404);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,404)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i403);
	}
	MR_r1 = (MR_Integer) 112;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i409);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,403)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 173;
	MR_r2 = (MR_Integer) 239;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i410);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,361)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 112;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i409);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,409)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 173;
	MR_r2 = (MR_Integer) 239;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,410)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i411);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,411)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 173;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i412);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,412)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i414);
	}
	MR_sv(7) = MR_r1;
	MR_r3 = MR_sv(13);
	MR_sv(13) = MR_sv(10);
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 188;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i413);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,414)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i415);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i415);
	}
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_sv(13) = MR_sv(10);
	MR_r3 = MR_r4;
	MR_r1 = (MR_Integer) 337;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i419);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,415)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deep profiling is incompatible with high level code", 51);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i418);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,418)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 337;
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,419)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i420);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,420)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 186;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i421);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,421)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i423);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 188;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i413);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 325;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i424);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,424)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 326;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i426);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 188;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,413)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i427);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 189;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i428);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,428)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i429);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i429);
	}
	MR_r1 = (MR_Word) MR_string_const("we can\'t record term size as both words and cells", 49);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i432);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i444);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,429)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i436);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i435);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i434);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Integer) 337;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i439);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,439)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i441);
	}
	MR_r3 = MR_sv(12);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i444);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,441)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("term size profiling is incompatible with high level code", 56);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i442);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,442)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i444);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,434)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r4 = MR_sv(14);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,444)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i450);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i448);
	}
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i449);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,450)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i448);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,449)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i447);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__convert_options_to_globals_18_0_i453);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,453)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i445);
	}
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(10);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,447)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 192;
	MR_r2 = (MR_Integer) 461;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i456);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,445)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(12);
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_sv(10);
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("debugging is available only in low level C grades", 49);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i455);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,455)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(10);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 192;
	MR_r2 = (MR_Integer) 461;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,456)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i457);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 310;
	MR_r2 = (MR_Integer) 339;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i458);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,458)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i460);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 307;
	MR_r2 = (MR_Integer) 339;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i460);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 141;
	MR_r2 = (MR_Integer) 361;
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i462);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 141;
	MR_r2 = (MR_Integer) 321;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i463);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,463)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 141;
	MR_r2 = (MR_Integer) 322;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i464);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,464)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 236;
	MR_r2 = (MR_Integer) 239;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i465);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,465)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 240;
	MR_r2 = (MR_Integer) 239;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i466);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),5)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i484);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 238;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i469);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,469)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 241;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i470);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,470)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 426;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i471);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,471)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 445;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i472);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 295;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i473);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,473)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 424;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i474);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,474)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 278;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i475);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,475)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 279;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i476);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,476)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 337;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i477);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,477)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 332;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i478);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,478)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 333;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i484);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,484)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 229;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i485);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,485)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i486);
	}
	if (MR_INT_NE(MR_sv(2),5)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i486);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i486);
	}
	MR_r1 = (MR_Word) MR_string_const("--gc accurate is incompatible with --put-nondet-env-on-heap", 59);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i490);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,490)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(10) = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 239;
	MR_r2 = (MR_Integer) 237;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i491);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,486)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(10) = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 239;
	MR_r2 = (MR_Integer) 237;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,491)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i492);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,492)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 238;
	MR_r2 = (MR_Integer) 237;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i493);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,493)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 239;
	MR_r2 = (MR_Integer) 443;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i494);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,494)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 238;
	MR_r2 = (MR_Integer) 443;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i495);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,495)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 237;
	MR_r2 = (MR_Integer) 441;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i496);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,496)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 241;
	MR_r2 = (MR_Integer) 361;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i497);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,497)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 241;
	MR_r2 = (MR_Integer) 321;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i498);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,498)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 193;
	MR_r2 = (MR_Integer) 424;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i499);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,499)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 202;
	MR_r2 = (MR_Integer) 424;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i500);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,500)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 195;
	MR_r2 = (MR_Integer) 426;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i501);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,501)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 254;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i502);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,502)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 255;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i503);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,503)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i504);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i504);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 256;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i508);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,508)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i509);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,504)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(4);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,509)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i510);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i510);
	}
	MR_r1 = (MR_Integer) 257;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i514);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,514)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 125;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i515);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,510)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 125;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,515)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i516);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,516)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 124;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i517);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,517)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 274;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i518);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,518)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 275;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i519);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,519)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i523);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i522);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,523)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i525);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i522);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,525)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i527);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i522);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,527)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i529);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i522);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,529)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i521);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,522)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Integer) 273;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i532);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,532)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 332;
	MR_r2 = (MR_Integer) 333;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i533);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,521)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(9);
	MR_r1 = (MR_Integer) 332;
	MR_r2 = (MR_Integer) 333;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,533)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i534);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,534)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 321;
	MR_r2 = (MR_Integer) 322;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i535);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,535)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 324;
	MR_r2 = (MR_Integer) 299;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i536);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,536)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 324;
	MR_r2 = (MR_Integer) 323;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i537);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,537)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 334;
	MR_r2 = (MR_Integer) 340;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i538);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,538)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 334;
	MR_r2 = (MR_Integer) 318;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i539);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,539)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 76;
	MR_r2 = (MR_Integer) 323;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i540);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,540)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 366;
	MR_r2 = (MR_Integer) 367;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i541);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,541)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 83;
	MR_r2 = (MR_Integer) 82;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i542);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,542)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 123;
	MR_r2 = (MR_Integer) 82;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i543);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,543)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 80;
	MR_r2 = (MR_Integer) 21;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i544);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,544)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 608;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i545);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,545)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 514;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i546);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,546)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i548);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 582;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i547);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,548)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__get_options_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i549);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,549)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__options__option_table_add_mercury_library_directory_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i550);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,550)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_options_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i551);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,551)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 504;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i552);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,552)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i553);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,553)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 504;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i556);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,556)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 505;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i557);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,557)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i558);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,558)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 505;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i561);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,561)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 582;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,547)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i562);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,562)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i564);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 592;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i563);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,564)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 459;
	}
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i565);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,565)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("conf", 4);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i566);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,566)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 459;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i569);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,569)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 592;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,563)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i570);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,570)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i571);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i571);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i575);
	}
	MR_r1 = (MR_Integer) 592;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,15,1);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i582);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,575)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(4), 0);
	MR_r2 = (MR_Word) MR_string_const("conf", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i578);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,578)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury.config", 14);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i579);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,579)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 592;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i582);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,582)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 508;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i583);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,571)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 508;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,583)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i584);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,584)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__grade_directory_component_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i585);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,585)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i587);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 598;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i586);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,587)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(6) = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i589);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,589)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 504;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i590);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,590)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i591);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,591)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 504;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i593);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,593)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 505;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i594);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,594)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i595);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,595)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 505;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i597);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,597)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i599);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,599)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 459;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i600);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,600)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i601);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,601)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 459;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i603);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,603)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 495;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i604);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,604)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i605);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,605)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 495;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i607);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,607)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i609);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,609)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 597;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i610);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,610)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i611);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,611)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 597;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i613);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,613)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i615);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,615)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 516;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i616);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,616)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i617);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,617)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 516;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i619);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,619)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 598;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,586)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i620);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,620)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i622);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 595;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i621);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,622)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 597;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i623);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,623)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 596;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i624);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,624)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i625);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,625)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 597;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i627);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,627)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 595;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,621)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i628);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,628)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 510;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i629);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,629)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 597;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i630);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,630)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i633);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i634);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,634)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 597;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i636);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,636)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 504;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i637);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,637)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 516;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i638);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,638)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(13) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i639);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,639)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i640);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,640)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Integer) 504;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i663);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,633)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Mercury", 7);
	MR_r2 = MR_tfield(0, MR_sv(9), 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i642);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,642)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i643);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,643)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(15) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i644);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,644)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(14) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__convert_options_to_globals_18_0_i646);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,646)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__2_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = MR_sv(15);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i649);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,649)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i650);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,650)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i651);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,651)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 597;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i653);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,653)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 504;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i654);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,654)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 516;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i655);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,655)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i657);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,657)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i658);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,658)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i660);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,660)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i661);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,661)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(13);
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Integer) 504;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i663);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,663)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 516;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i665);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,665)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 594;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i666);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,666)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i669);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i667);
	}
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i668);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,669)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(16,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_r1 = MR_sv(13);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,668)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 459;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i675);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,675)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__convert_options_to_globals_18_0_i676);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,676)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__handle_options__convert_options_to_globals_18_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__libs__handle_options__convert_options_to_globals_18_0_i677);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,677)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(9) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i678);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,678)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__convert_options_to_globals_18_0_i679);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,679)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i680);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,680)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Integer) 459;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i684);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,684)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 495;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i685);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,685)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__convert_options_to_globals_18_0_i686);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,686)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__handle_options__convert_options_to_globals_18_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__libs__handle_options__convert_options_to_globals_18_0_i687);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,687)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 495;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i690);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,690)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 301;
	MR_r2 = (MR_Integer) 11;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i691);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,667)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r1 = (MR_Integer) 301;
	MR_r2 = (MR_Integer) 11;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,691)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_18_0_i692);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,692)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_r2 = (MR_Integer) 223;
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion requires --high-level-code", 52);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__convert_options_to_globals_18_0_i693);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,693)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_r2 = (MR_Integer) 427;
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion requires --optimize-tailcalls", 55);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__convert_options_to_globals_18_0_i694);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,694)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_r2 = (MR_Integer) 87;
	MR_r3 = MR_sv(12);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion is incompatible with --errorcheck-only", 64);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__convert_options_to_globals_18_0_i695);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,695)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i711) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i705) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i709) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i711) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i711) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_options_to_globals_18_0_i701));
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,701)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,14,3);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 337;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i703);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,703)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 269;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i708);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,705)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,14,5);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 337;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i708);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,708)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 235;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i696);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,709)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,14,6);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 235;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i696);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,711)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,14,2);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 235;
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,696)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i713);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,713)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i715);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Integer) 235;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i717);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,717)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 289;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i714);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,715)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 289;
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,714)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i718);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,718)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i719);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i721);
	}
	MR_r1 = (MR_Integer) 289;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i725);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,721)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 289;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i725);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,725)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_r1;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i726);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,719)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,726)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),3)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i728);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i727);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,728)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i731);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i727);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,731)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(5),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i727);
	}
	MR_r1 = (MR_Integer) 242;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i736);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,727)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 242;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i736);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,736)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_18_0_i738);
	}
	MR_np_call_localret_ent(libs__handle_options__postprocess_options_lowlevel_2_0,
		libs__handle_options__convert_options_to_globals_18_0_i738);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,738)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__postprocess_options_libgrades_4_0,
		libs__handle_options__convert_options_to_globals_18_0_i740);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,740)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__globals_init_mutables_3_0,
		libs__handle_options__convert_options_to_globals_18_0_i741);
MR_def_label(libs__handle_options__convert_options_to_globals_18_0,741)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module15)
	MR_init_entry1(libs__handle_options__generate_default_globals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__generate_default_globals_3_0);
	MR_init_label1(libs__handle_options__generate_default_globals_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_default_globals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__generate_default_globals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(libs__handle_options__handle_given_options_8_0,
		libs__handle_options__generate_default_globals_3_0_i2);
MR_def_label(libs__handle_options__generate_default_globals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(bool__or_list_2_0);
MR_decl_entry(bool__not_2_0);

MR_BEGIN_MODULE(libs__handle_options_module16)
	MR_init_entry1(libs__handle_options__handle_given_options_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__handle_given_options_8_0);
	MR_init_label10(libs__handle_options__handle_given_options_8_0,2,3,6,7,8,9,10,11,12,13)
	MR_init_label10(libs__handle_options__handle_given_options_8_0,14,15,16,17,18,19,20,22,23,39)
	MR_init_label6(libs__handle_options__handle_given_options_8_0,40,41,45,42,5,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_given_options'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__handle_given_options_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__handle_options__process_given_options_6_0,
		libs__handle_options__handle_given_options_8_0_i2);
MR_def_label(libs__handle_options__handle_given_options_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__convert_option_table_result_to_globals_5_0,
		libs__handle_options__handle_given_options_8_0_i3);
MR_def_label(libs__handle_options__handle_given_options_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__handle_given_options_8_0_i5);
	}
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(18) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 82;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i6);
MR_def_label(libs__handle_options__handle_given_options_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 81;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i7);
MR_def_label(libs__handle_options__handle_given_options_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 74;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i8);
MR_def_label(libs__handle_options__handle_given_options_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 75;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i9);
MR_def_label(libs__handle_options__handle_given_options_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 73;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i10);
MR_def_label(libs__handle_options__handle_given_options_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 76;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i11);
MR_def_label(libs__handle_options__handle_given_options_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 77;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i12);
MR_def_label(libs__handle_options__handle_given_options_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 78;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i13);
MR_def_label(libs__handle_options__handle_given_options_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 79;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i14);
MR_def_label(libs__handle_options__handle_given_options_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 85;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i15);
MR_def_label(libs__handle_options__handle_given_options_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 86;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i16);
MR_def_label(libs__handle_options__handle_given_options_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 87;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i17);
MR_def_label(libs__handle_options__handle_given_options_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 88;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i18);
MR_def_label(libs__handle_options__handle_given_options_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		libs__handle_options__handle_given_options_8_0_i19);
MR_def_label(libs__handle_options__handle_given_options_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__handle_given_options_8_0_i20);
	}
	MR_sv(17) = (MR_Integer) 1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 89;
	MR_GOTO_LAB(libs__handle_options__handle_given_options_8_0_i22);
MR_def_label(libs__handle_options__handle_given_options_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 89;
MR_def_label(libs__handle_options__handle_given_options_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i23);
MR_def_label(libs__handle_options__handle_given_options_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(bool__or_list_2_0,
		libs__handle_options__handle_given_options_8_0_i39);
MR_def_label(libs__handle_options__handle_given_options_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bool__not_2_0,
		libs__handle_options__handle_given_options_8_0_i40);
MR_def_label(libs__handle_options__handle_given_options_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 98;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i41);
MR_def_label(libs__handle_options__handle_given_options_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__handle_given_options_8_0_i42);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(libs__handle_options__handle_given_options_8_0_i42);
	}
	MR_r1 = (MR_Word) MR_string_const("linking", 7);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(libs__handle_options__disable_smart_recompilation_5_0,
		libs__handle_options__handle_given_options_8_0_i45);
MR_def_label(libs__handle_options__handle_given_options_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
MR_def_label(libs__handle_options__handle_given_options_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(18);
	MR_decr_sp_and_return(19);
MR_def_label(libs__handle_options__handle_given_options_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__handle_options__handle_given_options_8_0_i47);
MR_def_label(libs__handle_options__handle_given_options_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(18);
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module17)
	MR_init_entry1(libs__handle_options__convert_option_table_result_to_globals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__convert_option_table_result_to_globals_5_0);
	MR_init_label4(libs__handle_options__convert_option_table_result_to_globals_5_0,3,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_option_table_result_to_globals'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__convert_option_table_result_to_globals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_option_table_result_to_globals_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(libs__handle_options__handle_given_options_8_0,
		libs__handle_options__convert_option_table_result_to_globals_5_0_i10);
MR_def_label(libs__handle_options__convert_option_table_result_to_globals_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(libs__handle_options__check_option_values_18_0,
		libs__handle_options__convert_option_table_result_to_globals_5_0_i6);
MR_def_label(libs__handle_options__convert_option_table_result_to_globals_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r14,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_option_table_result_to_globals_5_0_i8);
	}
	MR_r14 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__handle_options__convert_options_to_globals_18_0);
MR_def_label(libs__handle_options__convert_option_table_result_to_globals_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r14;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(libs__handle_options__handle_given_options_8_0,
		libs__handle_options__convert_option_table_result_to_globals_5_0_i10);
MR_def_label(libs__handle_options__convert_option_table_result_to_globals_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module18)
	MR_init_entry1(libs__handle_options__separate_option_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__separate_option_args_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'separate_option_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__separate_option_args_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(getopt_io__process_options_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(libs__handle_options_module19)
	MR_init_entry1(libs__handle_options__display_compiler_version_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__display_compiler_version_2_0);
	MR_init_label1(libs__handle_options__display_compiler_version_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'display_compiler_version'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__display_compiler_version_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(library__version_1_0,
		libs__handle_options__display_compiler_version_2_0_i2);
MR_def_label(libs__handle_options__display_compiler_version_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,14,8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Mercury Compiler, version ", 26);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module20)
	MR_init_entry1(libs__handle_options__lock_already_printed_usage_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__lock_already_printed_usage_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_already_printed_usage'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__lock_already_printed_usage_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__lock_already_printed_usage_0_0
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11425 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module21)
	MR_init_entry1(libs__handle_options__unlock_already_printed_usage_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__unlock_already_printed_usage_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_already_printed_usage'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__unlock_already_printed_usage_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__unlock_already_printed_usage_0_0
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11458 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module22)
	MR_init_entry1(libs__handle_options__unsafe_get_already_printed_usage_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__unsafe_get_already_printed_usage_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_already_printed_usage'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__unsafe_get_already_printed_usage_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__handle_options__unsafe_get_already_printed_usage_1_0
{
#line 2308 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;
;}
#line 11489 "libs.handle_options.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module23)
	MR_init_entry1(libs__handle_options__unsafe_set_already_printed_usage_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__unsafe_set_already_printed_usage_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_already_printed_usage'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__unsafe_set_already_printed_usage_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__handle_options__unsafe_set_already_printed_usage_1_0
	X = MR_r1;
{
#line 2308 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;
;}
#line 11522 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module24)
	MR_init_entry1(libs__handle_options__usage_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__usage_2_0);
	MR_init_label3(libs__handle_options__usage_2_0,4,7,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'usage'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__usage_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11556 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2308 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;
;}
#line 11566 "libs.handle_options.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11579 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(libs__handle_options__usage_2_0_i14);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__handle_options__display_compiler_version_2_0,
		libs__handle_options__usage_2_0_i4);
MR_def_label(libs__handle_options__usage_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,14,10);
	MR_np_call_localret_ent(io__write_strings_3_0,
		libs__handle_options__usage_2_0_i7);
MR_def_label(libs__handle_options__usage_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11605 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
	X = (MR_Integer) 1;
{
#line 2308 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;
;}
#line 11616 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11628 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
MR_def_label(libs__handle_options__usage_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__write_error_plain_with_progname_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(libs__handle_options_module25)
	MR_init_entry1(libs__handle_options__usage_errors_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__usage_errors_3_0);
	MR_init_label3(libs__handle_options__usage_errors_3_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'usage_errors'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__usage_errors_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		libs__handle_options__usage_errors_3_0_i2);
MR_def_label(libs__handle_options__usage_errors_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__error_util__write_error_plain_with_progname_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		libs__handle_options__usage_errors_3_0_i4);
MR_def_label(libs__handle_options__usage_errors_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__handle_options__usage_errors_3_0_i5);
MR_def_label(libs__handle_options__usage_errors_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__handle_options__usage_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__options__options_help_2_0);

MR_BEGIN_MODULE(libs__handle_options_module26)
	MR_init_entry1(libs__handle_options__long_usage_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__long_usage_2_0);
	MR_init_label9(libs__handle_options__long_usage_2_0,2,6,7,8,9,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_usage'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__long_usage_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(library__version_1_0,
		libs__handle_options__long_usage_2_0_i2);
MR_def_label(libs__handle_options__long_usage_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,14,11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Name: mmc -- Melbourne Mercury Compiler, version ", 49);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		libs__handle_options__long_usage_2_0_i6);
MR_def_label(libs__handle_options__long_usage_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Copyright: Copyright (C) 1993-2009 The University of Melbourne\n", 63);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i7);
MR_def_label(libs__handle_options__long_usage_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Usage: mmc [<options>] <arguments>\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i8);
MR_def_label(libs__handle_options__long_usage_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Arguments:\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i9);
MR_def_label(libs__handle_options__long_usage_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tArguments ending in \140.m\' are assumed to be source file names.\n", 63);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i10);
MR_def_label(libs__handle_options__long_usage_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tArguments that do not end in \140.m\' are assumed to be module names.\n", 67);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i11);
MR_def_label(libs__handle_options__long_usage_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tArguments in the form \100file are replaced with the contents of the file.\n", 73);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i12);
MR_def_label(libs__handle_options__long_usage_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Options:\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i13);
MR_def_label(libs__handle_options__long_usage_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__options__options_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__takewhile_4_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(libs__handle_options_module27)
	MR_init_entry1(libs__handle_options__split_grade_string_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__split_grade_string_2_2_0);
	MR_init_label6(libs__handle_options__split_grade_string_2_2_0,28,5,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_grade_string_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__split_grade_string_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__split_grade_string_2_2_0_i28);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__split_grade_string_2_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,18,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		libs__handle_options__split_grade_string_2_2_0_i5);
MR_def_label(libs__handle_options__split_grade_string_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		libs__handle_options__split_grade_string_2_2_0_i6);
MR_def_label(libs__handle_options__split_grade_string_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(libs__handle_options__split_grade_string_2_2_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(libs__handle_options__split_grade_string_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_localcall_lab(libs__handle_options__split_grade_string_2_2_0,
		libs__handle_options__split_grade_string_2_2_0_i10);
MR_def_label(libs__handle_options__split_grade_string_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__split_grade_string_2_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(libs__handle_options__split_grade_string_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__aggregate_4_0);
MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(list__foldl2_6_4);

MR_BEGIN_MODULE(libs__handle_options_module28)
	MR_init_entry1(libs__handle_options__convert_grade_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__convert_grade_option_3_0);
	MR_init_label5(libs__handle_options__convert_grade_option_3_0,6,7,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_grade_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__convert_grade_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__aggregate_4_0,
		libs__handle_options__convert_grade_option_3_0_i6);
MR_def_label(libs__handle_options__convert_grade_option_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		libs__handle_options__convert_grade_option_3_0_i7);
MR_def_label(libs__handle_options__convert_grade_option_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__split_grade_string_2_2_0,
		libs__handle_options__convert_grade_option_3_0_i8);
MR_def_label(libs__handle_options__convert_grade_option_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__convert_grade_option_3_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_np_call_localret_ent(set__init_1_0,
		libs__handle_options__convert_grade_option_3_0_i10);
MR_def_label(libs__handle_options__convert_grade_option_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_4);
	}
MR_def_label(libs__handle_options__convert_grade_option_3_0,1)
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


MR_BEGIN_MODULE(libs__handle_options_module29)
	MR_init_entry1(libs__handle_options__pre_initialise_mutable_already_printed_usage_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__pre_initialise_mutable_already_printed_usage_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_already_printed_usage'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__pre_initialise_mutable_already_printed_usage_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__pre_initialise_mutable_already_printed_usage_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_already_printed_usage");
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif
;}
#line 11975 "libs.handle_options.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_already_printed_usage");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module30)
	MR_init_entry1(libs__handle_options__initialise_mutable_already_printed_usage_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_already_printed_usage'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__initialise_mutable_already_printed_usage_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_already_printed_usage");
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif
;}
#line 12009 "libs.handle_options.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_already_printed_usage");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 12022 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0
	X = (MR_Integer) 0;
{
#line 2308 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;
;}
#line 12033 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0
{
#line 2308 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 12045 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module31)
	MR_init_entry1(libs__handle_options__grade_component_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__grade_component_table_5_0);
	MR_init_label10(libs__handle_options__grade_component_table_5_0,3,84,5,6,7,8,9,10,11,12)
	MR_init_label10(libs__handle_options__grade_component_table_5_0,13,17,18,19,20,21,22,23,24,25)
	MR_init_label10(libs__handle_options__grade_component_table_5_0,26,27,28,32,33,34,35,36,37,38)
	MR_init_label10(libs__handle_options__grade_component_table_5_0,42,46,50,54,55,56,57,58,59,60)
	MR_init_label10(libs__handle_options__grade_component_table_5_0,64,65,69,70,71,72,73,74,78,82)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grade_component_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__grade_component_table_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 127);
MR_def_label(libs__handle_options__grade_component_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r6 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_6_1)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i5);
	}
	MR_r6 = ((MR_Word *) &mercury_vector_common_6_1)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r6,0))
		continue;
	}
	break; } /* end while */
MR_def_label(libs__handle_options__grade_component_table_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r6,
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i82) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i13) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i58) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i9) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i17) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i57) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i7) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i78) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i23) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i72) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i38) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i59) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i32) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i28) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i73) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i19) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i8) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i6) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i11) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i42) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i35) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i60) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i36) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i69) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i70) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i64) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i27) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i37) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i71) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i74) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i26) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i10) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i33) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i21) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i34) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i18) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i55) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i46) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i12) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i24) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i25) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i56) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i65) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i54) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i84));
MR_def_label(libs__handle_options__grade_component_table_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,7);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,9);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,11);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,13);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,15);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,16);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,18);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,24);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,28);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,30);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,33);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,35);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,39);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,43);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,45);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,48);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,49);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,50);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,51);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,54);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,55);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,58);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,60);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,58);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,61);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,63);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,65);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,71);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,1);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,76);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,2);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,82);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,2);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,87);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,76);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,94);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,82);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,95);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,96);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,98);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,100);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,4);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,104);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,106);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,104);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,108);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,110);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,111);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,112);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,20,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,113);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(libs__handle_options_module32)
	MR_init_entry1(libs__handle_options__grade_component_table_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__grade_component_table_5_2);
	MR_init_label3(libs__handle_options__grade_component_table_5_2,32,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grade_component_table'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__grade_component_table_5_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.handle_options.grade_component_table/5-2", 1,
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i32));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_21_0, 0);
	MR_fv(1) = (MR_Integer) 5;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_r5 = MR_tfield(0, MR_tempr1, 4);
	MR_succeed();
	}
MR_def_label(libs__handle_options__grade_component_table_5_2,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_fv(1);
	if (MR_INT_GE(MR_r6,230)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_2_i33);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 5);
	MR_GOTO_LAB(libs__handle_options__grade_component_table_5_2_i34);
MR_def_label(libs__handle_options__grade_component_table_5_2,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(libs__handle_options__grade_component_table_5_2,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_21_0, (MR_Integer) MR_r6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_r5 = MR_tfield(0, MR_tempr1, 4);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module33)
	MR_init_entry1(libs__handle_options__string_to_grade_component_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__string_to_grade_component_6_0);
	MR_init_label6(libs__handle_options__string_to_grade_component_6_0,4,2,7,8,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_grade_component'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__string_to_grade_component_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_0,
		libs__handle_options__string_to_grade_component_6_0_i4);
MR_def_label(libs__handle_options__string_to_grade_component_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__string_to_grade_component_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(libs__handle_options__string_to_grade_component_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_string_const(" library grade component: ", 26);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__string_to_grade_component_6_0_i7);
MR_def_label(libs__handle_options__string_to_grade_component_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__string_to_grade_component_6_0_i8);
MR_def_label(libs__handle_options__string_to_grade_component_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__string_to_grade_component_6_0_i9);
MR_def_label(libs__handle_options__string_to_grade_component_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__append_3_1,
		libs__handle_options__string_to_grade_component_6_0_i11);
MR_def_label(libs__handle_options__string_to_grade_component_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_2);
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(libs__handle_options_module34)
	MR_init_entry1(libs__handle_options__filter_grade_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__filter_grade_7_0);
	MR_init_label10(libs__handle_options__filter_grade_7_0,3,4,7,9,11,12,10,18,16,2)
	MR_init_label2(libs__handle_options__filter_grade_7_0,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_grade'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__filter_grade_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		libs__handle_options__filter_grade_7_0_i3);
MR_def_label(libs__handle_options__filter_grade_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__split_grade_string_2_2_0,
		libs__handle_options__filter_grade_7_0_i4);
MR_def_label(libs__handle_options__filter_grade_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__filter_grade_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_2,
		libs__handle_options__filter_grade_7_0_i7);
MR_def_label(libs__handle_options__filter_grade_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__filter_grade_7_0_i2);
	}
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		libs__handle_options__filter_grade_7_0_i9);
MR_def_label(libs__handle_options__filter_grade_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		libs__handle_options__filter_grade_7_0_i11);
MR_def_label(libs__handle_options__filter_grade_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		libs__handle_options__filter_grade_7_0_i12);
MR_def_label(libs__handle_options__filter_grade_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(7) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__filter_grade_7_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("invalid library grade: ", 23);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__filter_grade_7_0_i23);
MR_def_label(libs__handle_options__filter_grade_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__handle_options__filter_grade_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__libs__handle_options__filter_grade_7_0_i18);
MR_def_label(libs__handle_options__filter_grade_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__filter_grade_7_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(libs__handle_options__filter_grade_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(libs__handle_options__filter_grade_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("invalid library grade: ", 23);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__filter_grade_7_0_i23);
MR_def_label(libs__handle_options__filter_grade_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__append_3_1,
		libs__handle_options__filter_grade_7_0_i25);
MR_def_label(libs__handle_options__filter_grade_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(list__member_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(libs__handle_options_module35)
	MR_init_entry1(libs__handle_options__must_contain_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__must_contain_2_0);
	MR_init_label3(libs__handle_options__must_contain_2_0,6,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'must_contain'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__must_contain_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__must_contain_2_0_i5);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		libs__handle_options__must_contain_2_0_i6);
MR_def_label(libs__handle_options__must_contain_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		libs__handle_options__must_contain_2_0_i9);
MR_def_label(libs__handle_options__must_contain_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(libs__handle_options__must_contain_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module36)
	MR_init_entry1(libs__handle_options__must_not_contain_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__must_not_contain_2_0);
	MR_init_label3(libs__handle_options__must_not_contain_2_0,6,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'must_not_contain'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__must_not_contain_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__must_not_contain_2_0_i5);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		libs__handle_options__must_not_contain_2_0_i6);
MR_def_label(libs__handle_options__must_not_contain_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		libs__handle_options__must_not_contain_2_0_i7);
MR_def_label(libs__handle_options__must_not_contain_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(libs__handle_options__must_not_contain_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module37)
	MR_init_entry1(libs__handle_options__grade_start_values_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__grade_start_values_1_0);
	MR_init_label3(libs__handle_options__grade_start_values_1_0,42,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grade_start_values'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__grade_start_values_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.handle_options.grade_start_values/1-0", 1,
		MR_LABEL_AP(libs__handle_options__grade_start_values_1_0_i42));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_20_0, 0);
	MR_fv(1) = (MR_Integer) 1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_succeed();
	}
MR_def_label(libs__handle_options__grade_start_values_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(1);
	if (MR_INT_GE(MR_r2,19)) {
		MR_GOTO_LAB(libs__handle_options__grade_start_values_1_0_i43);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_GOTO_LAB(libs__handle_options__grade_start_values_1_0_i44);
MR_def_label(libs__handle_options__grade_start_values_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(libs__handle_options__grade_start_values_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_20_0, (MR_Integer) MR_r2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module38)
	MR_init_entry1(libs__handle_options__char_is_not_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__char_is_not_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'char_is_not'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__char_is_not_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 != MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module39)
	MR_init_entry1(__Unify___libs__handle_options__grade_component_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__handle_options__grade_component_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__handle_options__grade_component_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__handle_options_module40)
	MR_init_entry1(__Compare___libs__handle_options__grade_component_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__handle_options__grade_component_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__handle_options__grade_component_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(libs__handle_options_module41)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0);
	MR_init_label6(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0,2,5,7,11,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_grade_option__2526__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i2);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__member_2_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i5);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__insert_3_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i7);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i11);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_sv(3), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i12);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i12);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 154;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0_i12);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2526__1_5_0,1)
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


MR_BEGIN_MODULE(libs__handle_options_module42)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__check_option_values__421__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__check_option_values__421__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__check_option_values__421__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__check_option_values__421__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 46);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module43)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1842__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1842__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module44)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1857__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1857__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inc", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__dir__make_path_name_2_0);

MR_BEGIN_MODULE(libs__handle_options_module45)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1870__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ints", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__dir__make_path_name_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1870__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__dir__make_path_name_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module46)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1880__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("modules", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1880__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module47)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1916__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1916__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module48)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_options_to_globals__1934__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(libs__handle_options_module49)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_options_to_globals__1934__2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__1934__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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


MR_BEGIN_MODULE(libs__handle_options_module50)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1952__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1952__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module51)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1956__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1956__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inits", 5);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module52)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1986__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1986__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mihs", 4);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module53)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1987__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1987__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("hrls", 4);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module54)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1978__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1978__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mihs", 4);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module55)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__1980__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("hrls", 4);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module56)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0);
	MR_init_label2(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__grade_string_to_comp_strings__2460__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_0,
		libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0_i2);
MR_def_label(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2460__1_2_0,1)
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

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(libs__handle_options_module57)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__add_option_list__2549__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__add_option_list__2549__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__add_option_list__2549__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__add_option_list__2549__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(libs__handle_options_module58)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0);
	MR_init_label10(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,1,7,9,11,8,4,16,19,20,22)
	MR_init_label2(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,18,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__compute_grade_components__2598__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.handle_options.IntroducedFrom__pred__compute_grade_components__2598__1/2-0", 14,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_2,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i1);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_fv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i4);
	MR_fv(2) = MR_r1;
	MR_fv(3) = MR_r2;
	MR_fv(4) = MR_r4;
	MR_fv(5) = MR_r5;
	MR_fv(7) = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_fv(8) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__member_2_1,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i7);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_fv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_fv(7);
	MR_r2 = MR_fv(8);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i9);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i8);
	}
	MR_r1 = MR_fv(6);
	MR_np_call_localret_ent(__Unify___getopt_io__option_data_0_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i11);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_fv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_fv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(10);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(3);
	MR_r4 = MR_fv(4);
	MR_r5 = MR_fv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_fv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(10);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_fv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i18);
	MR_fv(2) = MR_r1;
	MR_fv(3) = MR_r2;
	MR_fv(5) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r1 = MR_fv(5);
	MR_r2 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(list__member_2_1,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i19);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(1);
	MR_r4 = (MR_Integer) 154;
	MR_np_call_localret_ent(map__search_3_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i20);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(4);
	MR_np_call_localret_ent(__Unify___getopt_io__option_data_0_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i22);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_fv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_fv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(13);
	MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0_i24);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(13);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2598__1_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_fv(2);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module59)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__reset_grade_options__2874__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__reset_grade_options__2874__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__reset_grade_options__2874__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__reset_grade_options__2874__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 2308 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 14034 "libs.handle_options.c"

MR_declare_static(mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0);

void
libs__handle_options__user_init_pred_0(void);

void
libs__handle_options__user_init_pred_0(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__libs__handle_options_maybe_bunch_0(void)
{
	libs__handle_options_module0();
	libs__handle_options_module1();
	libs__handle_options_module2();
	libs__handle_options_module3();
	libs__handle_options_module4();
	libs__handle_options_module5();
	libs__handle_options_module6();
	libs__handle_options_module7();
	libs__handle_options_module8();
	libs__handle_options_module9();
	libs__handle_options_module10();
	libs__handle_options_module11();
	libs__handle_options_module12();
	libs__handle_options_module13();
	libs__handle_options_module14();
	libs__handle_options_module15();
	libs__handle_options_module16();
	libs__handle_options_module17();
	libs__handle_options_module18();
	libs__handle_options_module19();
	libs__handle_options_module20();
	libs__handle_options_module21();
	libs__handle_options_module22();
	libs__handle_options_module23();
	libs__handle_options_module24();
	libs__handle_options_module25();
	libs__handle_options_module26();
	libs__handle_options_module27();
	libs__handle_options_module28();
	libs__handle_options_module29();
	libs__handle_options_module30();
	libs__handle_options_module31();
	libs__handle_options_module32();
	libs__handle_options_module33();
	libs__handle_options_module34();
	libs__handle_options_module35();
	libs__handle_options_module36();
	libs__handle_options_module37();
	libs__handle_options_module38();
	libs__handle_options_module39();
}

static void mercury__libs__handle_options_maybe_bunch_1(void)
{
	libs__handle_options_module40();
	libs__handle_options_module41();
	libs__handle_options_module42();
	libs__handle_options_module43();
	libs__handle_options_module44();
	libs__handle_options_module45();
	libs__handle_options_module46();
	libs__handle_options_module47();
	libs__handle_options_module48();
	libs__handle_options_module49();
	libs__handle_options_module50();
	libs__handle_options_module51();
	libs__handle_options_module52();
	libs__handle_options_module53();
	libs__handle_options_module54();
	libs__handle_options_module55();
	libs__handle_options_module56();
	libs__handle_options_module57();
	libs__handle_options_module58();
	libs__handle_options_module59();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__handle_options__init(void);
void mercury__libs__handle_options__init_type_tables(void);
void mercury__libs__handle_options__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__handle_options__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__handle_options__init_complexity_procs(void);
#endif
void mercury__libs__handle_options__required_init(void);

void mercury__libs__handle_options__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__handle_options_maybe_bunch_0();
	mercury__libs__handle_options_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__handle_options__type_ctor_info_grade_component_0,
		libs__handle_options__grade_component_0_0);
	mercury__libs__handle_options__init_debugger();
}

void mercury__libs__handle_options__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__handle_options__type_ctor_info_grade_component_0);
	}
}


void mercury__libs__handle_options__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__handle_options__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__handle_options);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__handle_options__init_complexity_procs(void)
{
}

#endif

void mercury__libs__handle_options__required_init(void)
{
	libs__handle_options__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
